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
static void sType_finalize(struct sType* self);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sType* sType_clone(struct sType* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct sSemicolonNode* __result237__;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=__builtin_string("sSemicolonNode")));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct sLambdaNode* __result239__;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value261,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
char* __result240__;
    __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value262=__builtin_string("sLambdaNode")));
    (__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result240__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_345;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* result_type_346;
void* __right_value303 = (void*)0;
int block_level_382;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_383;
void* __right_value306 = (void*)0;
char* __dec_obj75;
void* __right_value307 = (void*)0;
struct sType* __dec_obj76;
_Bool __result257__;
    come_fun_345=info->come_fun;
    info->come_fun=self->mFun;
    result_type_346=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value303=make_define_var(result_type_346,"__result_obj__",(_Bool)0,info))));
        (__right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    block_level_382=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_382;
    come_value_383=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj75=come_value_383->c_value;
    come_value_383->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj76=come_value_383->type;
    come_value_383->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_383->var=((void*)0);
    add_come_last_code(info,"%s",come_value_383->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_383));
    info->come_fun=come_fun_345;
    __result257__ = (_Bool)1;
    come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_383,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result257__;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct list$1void$ph* __dec_obj36;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
struct sNode* __dec_obj40;
struct sNode* __dec_obj41;
char* __dec_obj42;
char* __dec_obj43;
char* __dec_obj44;
struct list$1sNode$ph* __dec_obj45;
char* __dec_obj47;
struct list$1void$ph* __dec_obj48;
struct list$1char$ph* __dec_obj49;
struct sType* __dec_obj50;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj35=self->mChannelType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj36=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj36,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj38=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj40=self->mSizeNum;
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj41=self->mAlignas;
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj42=self->mTupleName;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj43=self->mAttribute;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj44=self->mAsmName;
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj45=self->mArrayNum;
            come_call_finalizer3(__dec_obj45,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj47=self->mOriginalTypeName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj48=self->mParamTypes;
            come_call_finalizer3(__dec_obj48,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj49=self->mParamNames;
            come_call_finalizer3(__dec_obj49,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj50=self->mResultType;
            come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_347;
struct list_item$1void$ph* prev_it_348;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        prev_it_348=it_347;
        it_347=it_347->next;
        come_call_finalizer3(prev_it_348,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
void* __dec_obj37;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj37=self->item;
            come_call_finalizer3(__dec_obj37,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_349;
struct list_item$1void$ph* prev_it_350;
    it_349=self->head;
    while(it_349!=((void*)0)) {
        prev_it_350=it_349;
        it_349=it_349->next;
        come_call_finalizer3(prev_it_350,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_351;
struct list_item$1sNode$ph* prev_it_352;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
struct sNode* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_353;
struct list_item$1sNode$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_355;
struct list_item$1char$ph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result241__;
void* __right_value263 = (void*)0;
struct sType* result_364;
void* __right_value264 = (void*)0;
struct sType* __dec_obj51;
void* __right_value265 = (void*)0;
struct sType* __dec_obj52;
void* __right_value273 = (void*)0;
struct list$1void$ph* __dec_obj56;
void* __right_value274 = (void*)0;
struct sType* __dec_obj57;
void* __right_value275 = (void*)0;
struct sType* __dec_obj58;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value279 = (void*)0;
char* __dec_obj61;
void* __right_value280 = (void*)0;
char* __dec_obj62;
void* __right_value281 = (void*)0;
char* __dec_obj63;
void* __right_value289 = (void*)0;
struct list$1sNode$ph* __dec_obj67;
void* __right_value290 = (void*)0;
char* __dec_obj68;
void* __right_value291 = (void*)0;
struct list$1void$ph* __dec_obj69;
void* __right_value299 = (void*)0;
struct list$1char$ph* __dec_obj73;
void* __right_value300 = (void*)0;
struct sType* __dec_obj74;
struct sType* __result255__;
    if(    self==(void*)0) {
        __result241__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_364=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_364->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj51=result_364->mOriginalLoadVarType;
        result_364->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj52=result_364->mChannelType;
        result_364->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj56=result_364->mGenericsTypes;
        result_364->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj56,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=result_364->mNoSolvedGenericsType;
        result_364->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj58=result_364->mAnyOriginalType;
        result_364->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj59=result_364->mSizeNum;
        result_364->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj60=result_364->mAlignas;
        result_364->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj61=result_364->mTupleName;
        result_364->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj62=result_364->mAttribute;
        result_364->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj63=result_364->mAsmName;
        result_364->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj67=result_364->mArrayNum;
        result_364->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj67,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
        __dec_obj68=result_364->mOriginalTypeName;
        result_364->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj69=result_364->mParamTypes;
        result_364->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_364->mParamNames;
        result_364->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_364->mResultType;
        result_364->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mVarArgs=self->mVarArgs;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_364;
    come_call_finalizer3(result_364,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
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
void* __result_obj__=(void*)0;
struct list$1void$ph* __result242__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1void$ph* result_366;
struct list_item$1void$ph* it_367;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1void$ph* __result245__;
    if(    self==((void*)0)) {
        __result242__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_366=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
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
    __result245__ = gComeFunResultObject = __result_obj__ = result_366;
    come_call_finalizer3(result_366,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
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
void* __result_obj__=(void*)0;
struct list$1void$ph* __result243__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_368;
void* __dec_obj53;
void* __right_value269 = (void*)0;
struct list_item$1void$ph* litem_369;
void* __dec_obj54;
void* __right_value270 = (void*)0;
struct list_item$1void$ph* litem_370;
void* __dec_obj55;
struct list$1void$ph* __result244__;
    if(    self->len==0) {
        litem_368=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value268=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj53=litem_368->item;
        litem_368->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value269=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj54=litem_369->item;
        litem_369->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value270=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj55=litem_370->item;
        litem_370->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result246__;
void* __right_value276 = (void*)0;
struct sNode* result_371;
struct sNode* __result247__;
    if(    self==(void*)0) {
        __result246__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_371=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_371->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_371->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_371->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_371->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_371->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_371->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_371->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_371->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_371->kind=self->kind;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_371;
    ((result_371) ? result_371 = come_decrement_ref_count2(result_371, ((struct sNode*)result_371)->finalize, ((struct sNode*)result_371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result248__;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1sNode$ph* result_372;
struct list_item$1sNode$ph* it_373;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1sNode$ph* __result251__;
    if(    self==((void*)0)) {
        __result248__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_372=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_373=self->head;
    while(it_373!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_372,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_373->item)));
        }
        else {
            list$1sNode$ph$p_add(result_372,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_373->item)));
        }
        it_373=it_373->next;
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_372;
    come_call_finalizer3(result_372,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result249__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_374;
struct sNode* __dec_obj64;
void* __right_value285 = (void*)0;
struct list_item$1sNode$ph* litem_375;
struct sNode* __dec_obj65;
void* __right_value286 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj66;
struct list$1sNode$ph* __result250__;
    if(    self->len==0) {
        litem_374=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=((void*)0);
        litem_374->next=((void*)0);
        __dec_obj64=litem_374->item;
        litem_374->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_374;
        self->head=litem_374;
    }
    else if(    self->len==1) {
        litem_375=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value285=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=self->head;
        litem_375->next=((void*)0);
        __dec_obj65=litem_375->item;
        litem_375->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_375;
        self->head->next=litem_375;
    }
    else {
        litem_376=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value286=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->tail;
        litem_376->next=((void*)0);
        __dec_obj66=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_376;
        self->tail=litem_376;
    }
    self->len++;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result252__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1char$ph* result_377;
struct list_item$1char$ph* it_378;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1char$ph* __result254__;
    if(    self==((void*)0)) {
        __result252__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_377=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_378=self->head;
    while(it_378!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_377,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_378->item)));
        }
        else {
            list$1char$ph$p_add(result_377,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_378->item)));
        }
        it_378=it_378->next;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = result_377;
    come_call_finalizer3(result_377,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_379;
char* __dec_obj70;
void* __right_value295 = (void*)0;
struct list_item$1char$ph* litem_380;
char* __dec_obj71;
void* __right_value296 = (void*)0;
struct list_item$1char$ph* litem_381;
char* __dec_obj72;
struct list$1char$ph* __result253__;
    if(    self->len==0) {
        litem_379=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj70=litem_379->item;
        litem_379->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value295=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj71=litem_380->item;
        litem_380->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value296=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj72=litem_381->item;
        litem_381->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value308 = (void*)0;
struct list_item$1CVALUE$ph* litem_384;
struct CVALUE* __dec_obj77;
void* __right_value309 = (void*)0;
struct list_item$1CVALUE$ph* litem_385;
struct CVALUE* __dec_obj82;
void* __right_value310 = (void*)0;
struct list_item$1CVALUE$ph* litem_386;
struct CVALUE* __dec_obj83;
struct list$1CVALUE$ph* __result256__;
    if(    self->len==0) {
        litem_384=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value308=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1457, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=((void*)0);
        litem_384->next=((void*)0);
        __dec_obj77=litem_384->item;
        litem_384->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_384;
        self->head=litem_384;
    }
    else if(    self->len==1) {
        litem_385=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value309=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1467, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=self->head;
        litem_385->next=((void*)0);
        __dec_obj82=litem_385->item;
        litem_385->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_385;
        self->head->next=litem_385;
    }
    else {
        litem_386=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value310=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1477, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=self->tail;
        litem_386->next=((void*)0);
        __dec_obj83=litem_386->item;
        litem_386->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_386;
        self->tail=litem_386;
    }
    self->len++;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj78;
struct sType* __dec_obj79;
char* __dec_obj80;
char* __dec_obj81;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj78=self->c_value;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj79=self->type;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj80=self->c_value_without_right_value_objects;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj81=self->c_value_without_cast_object_value;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
struct sFun* __dec_obj84;
struct sFunNode* __result258__;
    ((struct sNodeBase*)(__right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value311,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj84,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
char* __result259__;
    __result259__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value312=__builtin_string("sFunNode")));
    (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result259__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_387;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* result_type_388;
void* __right_value315 = (void*)0;
int block_level_389;
void* __right_value316 = (void*)0;
    come_fun_387=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_388=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value315=make_define_var(result_type_388,"__result_obj__",(_Bool)0,info))));
            (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_level_389=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_389;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value316=xsprintf("come_heap_final();\n"))));
            (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(result_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_387;
    return (_Bool)1;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj85;
struct sType* __dec_obj86;
struct list$1void$ph* __dec_obj87;
struct list$1char$ph* __dec_obj88;
struct list$1char$ph* __dec_obj89;
struct sType* __dec_obj90;
struct sBlock* __dec_obj91;
struct buffer* __dec_obj94;
struct buffer* __dec_obj95;
struct buffer* __dec_obj96;
struct buffer* __dec_obj97;
char* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj85=self->mName;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj86=self->mResultType;
            come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj87=self->mParamTypes;
            come_call_finalizer3(__dec_obj87,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj88=self->mParamNames;
            come_call_finalizer3(__dec_obj88,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj89=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj89,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj90=self->mLambdaType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj91=self->mBlock;
            come_call_finalizer3(__dec_obj91,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj94=self->mSource;
            come_call_finalizer3(__dec_obj94,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj95=self->mSourceHead;
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj96=self->mSourceHead2;
            come_call_finalizer3(__dec_obj96,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj97=self->mSourceDefer;
            come_call_finalizer3(__dec_obj97,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj98=self->mAttribute;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj99=self->mFunAttribute;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNode$ph* __dec_obj92;
struct sVarTable* __dec_obj93;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj92=self->mNodes;
            come_call_finalizer3(__dec_obj92,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj93=self->mVarTable;
            come_call_finalizer3(__dec_obj93,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj100;
struct sFun* __dec_obj101;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj100=self->sname;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj101=self->mFun;
            come_call_finalizer3(__dec_obj101,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1sNode$ph* __dec_obj102;
struct sBlock* __result260__;
    __dec_obj102=self->mNodes;
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05function.c", 129, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj102,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj103;
void* __right_value320 = (void*)0;
struct list$1char$ph* __dec_obj104;
void* __right_value321 = (void*)0;
struct list$1char$ph* __dec_obj105;
char* __dec_obj106;
struct sType* __dec_obj107;
struct list$1void$ph* __dec_obj108;
struct list$1char$ph* __dec_obj109;
struct list$1char$ph* __dec_obj110;
char* __dec_obj111;
void* __right_value322 = (void*)0;
char* __dec_obj112;
struct sGenericsFun* __result261__;
    __dec_obj103=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj104=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_type_names));
    come_call_finalizer3(__dec_obj104,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj105=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj105,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj106=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj108=self->mParamTypes;
    self->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj108,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj109=self->mParamNames;
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj109,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj110=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj110,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj111=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj112=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj113;
struct list$1char$ph* __dec_obj114;
struct list$1char$ph* __dec_obj115;
char* __dec_obj116;
struct sType* __dec_obj117;
struct list$1void$ph* __dec_obj118;
struct list$1char$ph* __dec_obj119;
struct list$1char$ph* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj113=self->mImplType;
            come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj114=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj114,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj115=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj115,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj116=self->mName;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj117=self->mResultType;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj118=self->mParamTypes;
            come_call_finalizer3(__dec_obj118,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj119=self->mParamNames;
            come_call_finalizer3(__dec_obj119,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj120=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj120,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj121=self->mBlock;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj122=self->mGenericsSName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sBlock* result_390;
int sline_top_391;
int block_level_392;
char* p_saved_393;
int sline_saved_394;
char* sname_saved_395;
void* __right_value325 = (void*)0;
char* __dec_obj123;
char* __dec_obj124;
struct map$2void$phvoid$ph* __dec_obj125;
char* p_400;
int sline_401;
void* __right_value326 = (void*)0;
char* sname_402;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
char* module_name_403;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct list$1char$ph* params_404;
void* __right_value331 = (void*)0;
char* word_405;
void* __right_value332 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_406=0;
char* Err_407=0;
void* __right_value333 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_408=0;
char* Err_409=0;
void* __right_value334 = (void*)0;
char* __dec_obj127;
void* __right_value335 = (void*)0;
char* __dec_obj128;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
_Bool _if_conditional1;
void* __right_value338 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_413=0;
char* Err_414=0;
struct sBlock* __result266__;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sClassModule* module_415;
void* __right_value341 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_416=0;
char* Err_417=0;
void* __right_value349 = (void*)0;
void* __right_value355 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj131;
int i_431;
struct list$1char$ph* o2_saved_432;
char* it_435;
void* __right_value356 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __dec_obj132;
void* __right_value368 = (void*)0;
struct sNode* node_485;
void* __right_value369 = (void*)0;
char* __dec_obj133;
void* __right_value370 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_486=0;
char* Err_487=0;
_Bool omit_semicolon_491;
void* __right_value374 = (void*)0;
char* __dec_obj137;
char* head_506;
void* __right_value375 = (void*)0;
struct sNode* value_507;
char* tail_508;
void* __right_value376 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sNode* node_510;
void* __right_value379 = (void*)0;
char* __dec_obj139;
struct sNode* node_511;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value384 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value385 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value386 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_513=0;
char* Err_514=0;
_Bool omit_semicolon_515;
char* p_516;
char* head_517;
void* __right_value387 = (void*)0;
char* source_518;
void* __right_value388 = (void*)0;
struct sNode* node_519;
void* __right_value389 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_520=0;
char* Err_521=0;
struct sBlock* __result311__;
node_511 = (void*)0;
    result_390=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 167, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_391=info->sline_top;
    info->sline_top=info->sline;
    block_level_392=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_393=((void*)0);
        sline_saved_394=0;
        sname_saved_395=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_393) {
                if(                *info->p==0) {
                    info->p=p_saved_393;
                    info->sline=sline_saved_394;
                    __dec_obj123=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_395));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_393=((void*)0);
                    sline_saved_394=0;
                    __dec_obj124=sname_saved_395;
                    sname_saved_395=((void*)0);
                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj125=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj125,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            p_400=info->p;
            sline_401=info->sline;
            sname_402=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_401;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value327=parse_word(info)));
                (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                module_name_403=(char*)come_increment_ref_count(parse_word(info));
                params_404=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 223, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_405=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_404,(char*)come_increment_ref_count(word_405));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value332=err_msg(info,"invalid source end")));
                            come_exception_var_c1_406=multiple_assign_var1->v1;
                            Err_407=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_407)?(puts(Err_407),exit(0)):(0));
                            come_call_finalizer3(__right_value332,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_407 = come_decrement_ref_count2(Err_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_405 = come_decrement_ref_count2(word_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value333=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_408=multiple_assign_var2->v1;
                            Err_409=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_409)?(puts(Err_409),exit(0)):(0));
                            come_call_finalizer3(__right_value333,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_409 = come_decrement_ref_count2(Err_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_405 = come_decrement_ref_count2(word_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_393=info->p;
                sline_saved_394=info->sline;
                __dec_obj127=sname_saved_395;
                sname_saved_395=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj128=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_403));
                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)((void*)(__right_value337=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value336=__builtin_string(module_name_403)))))))==((void*)0))),                (__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                come_call_finalizer3(__right_value337,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value338=err_msg(info,"module not found")));
                    come_exception_var_c3_413=multiple_assign_var3->v1;
                    Err_414=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_414)?(puts(Err_414),exit(0)):(0));
                    come_call_finalizer3(__right_value338,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    __result266__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    (Err_414 = come_decrement_ref_count2(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_403 = come_decrement_ref_count2(module_name_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_404,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_402 = come_decrement_ref_count2(sname_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_395 = come_decrement_ref_count2(sname_saved_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_390,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result266__;
                    (Err_414 = come_decrement_ref_count2(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_415=((struct sClassModule*)((void*)(__right_value340=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value339=__builtin_string(module_name_403)))))));
                (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                come_call_finalizer3(__right_value340,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                list$1char$ph$p_length(module_415->mParams)!=list$1char$ph$p_length(params_404)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value341=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_416=multiple_assign_var4->v1;
                    Err_417=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_417)?(puts(Err_417),exit(0)):(0));
                    come_call_finalizer3(__right_value341,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(1);
                    (Err_417 = come_decrement_ref_count2(Err_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj131=info->module_params;
                info->module_params=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "05function.c", 277, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
                come_call_finalizer3(__dec_obj131,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_431=0;
                for(                o2_saved_432=(struct list$1char$ph*)come_increment_ref_count((module_415->mParams)),it_435=list$1char$ph$p_begin((o2_saved_432));                !list$1char$ph$p_end((o2_saved_432));                it_435=list$1char$ph$p_next((o2_saved_432))                ){
                    map$2void$phvoid$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_435)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value365=list$1char$ph$p_operator_load_element(params_404,i_431))))));
                    (__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    i_431++;
                }
                come_call_finalizer3(o2_saved_432,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_415->mText;
                info->sline=module_415->mSLine;
                __dec_obj132=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_415->mSName));
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_403 = come_decrement_ref_count2(module_name_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_404,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_485=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj133=info->sname;
            info->sname=(char*)come_increment_ref_count(node_485->sname(node_485->_protocol_obj));
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_485->sline(node_485->_protocol_obj);
            if(            node_485==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value370=err_msg(info,"Invalid expression")));
                come_exception_var_c5_486=multiple_assign_var5->v1;
                Err_487=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_487)?(puts(Err_487),exit(0)):(0));
                come_call_finalizer3(__right_value370,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(1);
                (Err_487 = come_decrement_ref_count2(Err_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_390->mNodes,(struct sNode*)come_increment_ref_count(node_485));
            parse_sharp_v5(info);
            if(            node_485->terminated(node_485->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_491=(_Bool)1;
            if(            node_485->terminated(node_485->_protocol_obj)) {
                omit_semicolon_491=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_491=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_390->mOmitSemicolon=omit_semicolon_491;
                if(                omit_semicolon_491&&in_function) {
                    list$1sNode$ph$p_delete(result_390->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_400;
                    info->sline=sline_401;
                    __dec_obj137=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_402));
                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_506=info->p;
                    value_507=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_508=info->p;
                    __dec_obj138=value_507;
                    value_507=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_507),info));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_509[tail_508-head_506+1];
                    memset(&buf_509, 0, sizeof(char)                    *(tail_508-head_506+1)                    );
                    memcpy(buf_509,head_506,tail_508-head_506);
                    buf_509[tail_508-head_506]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_510=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_507),(char*)come_increment_ref_count(__builtin_string(buf_509)),info));
                    list$1sNode$ph$p_push_back(result_390->mNodes,(struct sNode*)come_increment_ref_count(node_510));
                    ((value_507) ? value_507 = come_decrement_ref_count2(value_507, ((struct sNode*)value_507)->finalize, ((struct sNode*)value_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    ((node_510) ? node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (sname_402 = come_decrement_ref_count2(sname_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_485) ? node_485 = come_decrement_ref_count2(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    break;
                    ((value_507) ? value_507 = come_decrement_ref_count2(value_507, ((struct sNode*)value_507)->finalize, ((struct sNode*)value_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    ((node_510) ? node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_402 = come_decrement_ref_count2(sname_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_485) ? node_485 = come_decrement_ref_count2(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    break;
                }
            }
            (sname_402 = come_decrement_ref_count2(sname_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_485) ? node_485 = come_decrement_ref_count2(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        if(        p_saved_393) {
            if(            info->p==0) {
                info->p=p_saved_393;
                info->sline=sline_saved_394;
                __dec_obj139=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_395));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_393=((void*)0);
                sline_saved_394=0;
            }
        }
        (sname_saved_395 = come_decrement_ref_count2(sname_saved_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value381=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj141=node_511;
            node_511=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value381,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNode$ph$p_push_back(result_390->mNodes,(struct sNode*)come_increment_ref_count(node_511));
        }
        else {
            __dec_obj142=node_511;
            node_511=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_511==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value386=err_msg(info,"Invalid expression")));
                come_exception_var_c6_513=multiple_assign_var6->v1;
                Err_514=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_514)?(puts(Err_514),exit(0)):(0));
                come_call_finalizer3(__right_value386,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(1);
                (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_511->terminated(node_511->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_515=(_Bool)1;
            if(            node_511->terminated(node_511->_protocol_obj)) {
                omit_semicolon_515=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_515=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_390->mOmitSemicolon=omit_semicolon_515;
            list$1sNode$ph$p_push_back(result_390->mNodes,(struct sNode*)come_increment_ref_count(node_511));
        }
        ((node_511) ? node_511 = come_decrement_ref_count2(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    if(    return_self_at_last) {
        p_516=info->p;
        head_517=info->head;
        source_518=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_518;
        info->head=source_518;
        node_519=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_519==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value389=err_msg(info,"Invalid expression")));
            come_exception_var_c7_520=multiple_assign_var7->v1;
            Err_521=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_521)?(puts(Err_521),exit(0)):(0));
            come_call_finalizer3(__right_value389,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
            exit(1);
            (Err_521 = come_decrement_ref_count2(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_390->mNodes,(struct sNode*)come_increment_ref_count(node_519));
        info->p=p_516;
        info->head=head_517;
        (source_518 = come_decrement_ref_count2(source_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_519) ? node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    info->block_level=block_level_392;
    __result311__ = gComeFunResultObject = __result_obj__ = result_390;
    come_call_finalizer3(result_390,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
int i_396;
int i_397;
    for(    i_396=0;    i_396<self->size;    i_396++    ){
        if(        self->item_existance[i_396]) {
            if(            1) {
                come_call_finalizer3(self->items[i_396],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_397=0;    i_397<self->size;    i_397++    ){
        if(        self->item_existance[i_397]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_397],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_398;
struct list_item$1void$p* prev_it_399;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        come_call_finalizer3(prev_it_399,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
char* __dec_obj126;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj126=self->v2;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_410;
unsigned int hash_411;
unsigned int it_412;
void* __result262__;
void* __result263__;
void* __result264__;
void* __result265__;
default_value_410 = (void*)0;
    memset(&default_value_410,0,sizeof(void*));
    hash_411=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_412=hash_411;
    while((_Bool)1) {
        if(        self->item_existance[it_412]) {
            if(            come_call_equals((void*)0, self->keys[it_412], ((char*)key))) {
                __result262__ = gComeFunResultObject = __result_obj__ = self->items[it_412];
                come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result262__;
            }
            it_412++;
            if(            it_412>=self->size) {
                it_412=0;
            }
            else if(            it_412==hash_411) {
                __result263__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_410);
                come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result263__;
            }
        }
        else {
            __result264__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_410);
            come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_410);
    come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_418;
int i_419;
    for(    i_418=0;    i_418<self->size;    i_418++    ){
        if(        self->item_existance[i_418]) {
            if(            1) {
                come_call_finalizer3(self->items[i_418],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_419=0;    i_419<self->size;    i_419++    ){
        if(        self->item_existance[i_419]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_419],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
struct map$2void$phvoid$ph* __result267__;
void* __right_value342 = (void*)0;
struct map$2void$phvoid$ph* result_420;
void* __right_value348 = (void*)0;
struct list$1void$p* __dec_obj129;
struct map$2void$phvoid$ph* __result272__;
    if(    self==(void*)0) {
        __result267__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    result_420=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_420->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_420->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_420->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_420->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_420->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj129=result_420->key_list;
        result_420->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj129,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->it=self->it;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_420;
    come_call_finalizer3(result_420,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result268__;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1void$p* result_422;
struct list_item$1void$p* it_423;
struct list$1void$p* __result271__;
    if(    self==((void*)0)) {
        __result268__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    result_422=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1368, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_423=self->head;
    while(it_423!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_422,it_423->item);
        }
        else {
            list$1void$p$p_add(result_422,it_423->item);
        }
        it_423=it_423->next;
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_422;
    come_call_finalizer3(result_422,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_421;
    result_421=0;
    result_421+=int_get_hash_key(((int)self->head));
    result_421+=int_get_hash_key(((int)self->tail));
    result_421+=int_get_hash_key(((int)self->len));
    result_421+=int_get_hash_key(((int)self->it));
    return result_421;
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
struct list$1void$p* __result269__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
struct list_item$1void$p* litem_424;
void* __right_value346 = (void*)0;
struct list_item$1void$p* litem_425;
void* __right_value347 = (void*)0;
struct list_item$1void$p* litem_426;
struct list$1void$p* __result270__;
    if(    self->len==0) {
        litem_424=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value345=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1387, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_424->prev=((void*)0);
        litem_424->next=((void*)0);
        litem_424->item=item;
        self->tail=litem_424;
        self->head=litem_424;
    }
    else if(    self->len==1) {
        litem_425=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value346=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1397, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_425->prev=self->head;
        litem_425->next=((void*)0);
        litem_425->item=item;
        self->tail=litem_425;
        self->head->next=litem_425;
    }
    else {
        litem_426=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value347=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1407, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_426->prev=self->tail;
        litem_426->next=((void*)0);
        litem_426->item=item;
        self->tail->next=litem_426;
        self->tail=litem_426;
    }
    self->len++;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_427;
struct list_item$1void$p* prev_it_428;
    it_427=self->head;
    while(it_427!=((void*)0)) {
        prev_it_428=it_427;
        it_427=it_427->next;
        come_call_finalizer3(prev_it_428,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_429;
    result_429=0;
    result_429+=int_get_hash_key(((int)self->keys));
    result_429+=int_get_hash_key(((int)self->item_existance));
    result_429+=int_get_hash_key(((int)self->items));
    result_429+=int_get_hash_key(((int)self->size));
    result_429+=int_get_hash_key(((int)self->len));
    result_429+=int_get_hash_key(((int)self->key_list));
    result_429+=int_get_hash_key(((int)self->it));
    return result_429;
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
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
int i_430;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct list$1void$p* __dec_obj130;
struct map$2void$phvoid$ph* __result274__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value350=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2663, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value351=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2664, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value352=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2665, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_430=0;    i_430<128;    i_430++    ){
        self->item_existance[i_430]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj130=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2675, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj130,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result273__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_433;
char* __result275__;
char* __result276__;
char* result_434;
char* __result277__;
result_433 = (void*)0;
result_434 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_433,0,sizeof(char*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_433;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->it=self->head;
    if(    self->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_434,0,sizeof(char*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_434;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_436;
char* __result278__;
char* __result279__;
char* result_437;
char* __result280__;
result_436 = (void*)0;
result_437 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_436,0,sizeof(char*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_436;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_437,0,sizeof(char*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_437;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2void$phvoid$ph$p_operator_store_element(struct map$2void$phvoid$ph* self, void* key, void* item){
    map$2void$phvoid$ph$p_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_455;
unsigned int it_456;
_Bool same_key_exist_473;
char* it2_476;
struct map$2void$phvoid$ph* __result302__;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_455=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_456=hash_455;
    while((_Bool)1) {
        if(        self->item_existance[it_456]) {
            if(            come_call_equals((void*)0, self->keys[it_456], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_456]);
                    come_call_finalizer3(self->keys[it_456],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_456]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_456]);
                    self->keys[it_456]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_456],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_456]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_456]=item;
                }
                break;
            }
            it_456++;
            if(            it_456>=self->size) {
                it_456=0;
            }
            else if(            it_456==hash_455) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_456]=(_Bool)1;
            if(            1) {
                self->keys[it_456]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_456]=key;
            }
            if(            1) {
                self->items[it_456]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_456]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_473=(_Bool)0;
    for(    it2_476=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_476=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_476, key)) {
            same_key_exist_473=(_Bool)1;
        }
    }
    if(    !same_key_exist_473) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_438;
void* __right_value357 = (void*)0;
void** keys_439;
void* __right_value358 = (void*)0;
void** items_440;
void* __right_value359 = (void*)0;
_Bool* item_existance_441;
int len_442;
void* it_445;
void* default_value_448;
void* __right_value360 = (void*)0;
void* it2_449;
unsigned int hash_452;
int n_453;
void* default_value_454;
void* __right_value361 = (void*)0;
default_value_448 = (void*)0;
default_value_454 = (void*)0;
    size_438=self->size*10;
    keys_439=(void**)come_increment_ref_count(((void**)(__right_value357=(void**)come_calloc(1, sizeof(void*)*(1*(size_438)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_440=(void**)come_increment_ref_count(((void**)(__right_value358=(void**)come_calloc(1, sizeof(void*)*(1*(size_438)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_441=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value359=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_438)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_442=0;
    for(    it_445=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_445=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_448,0,sizeof(void*));
        it2_449=((void*)(__right_value360=map$2void$phvoid$ph$p_at(self,it_445,(void*)come_increment_ref_count(default_value_448))));
        come_call_finalizer3(__right_value360,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_452=come_call_get_hash_key((void*)0, ((void*)it_445))%size_438;
        n_453=hash_452;
        while((_Bool)1) {
            if(            item_existance_441[n_453]) {
                n_453++;
                if(                n_453>=size_438) {
                    n_453=0;
                }
                else if(                n_453==hash_452) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_441[n_453]=(_Bool)1;
                keys_439[n_453]=it_445;
                items_440[n_453]=((void*)(__right_value361=map$2void$phvoid$ph$p_at(self,it_445,(void*)come_increment_ref_count(default_value_454))));
                come_call_finalizer3(__right_value361,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_442++;
                come_call_finalizer3(default_value_454,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_454,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_448,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_439;
    self->items=items_440;
    self->item_existance=item_existance_441;
    self->size=size_438;
    self->len=len_442;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_443;
void* __result281__;
void* __result282__;
void* result_444;
void* __result283__;
result_443 = (void*)0;
result_444 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_443,0,sizeof(void*));
        __result281__ = gComeFunResultObject = __result_obj__ = result_443;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result282__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    memset(&result_444,0,sizeof(void*));
    __result283__ = gComeFunResultObject = __result_obj__ = result_444;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_446;
void* __result284__;
void* __result285__;
void* result_447;
void* __result286__;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_446,0,sizeof(void*));
        __result284__ = gComeFunResultObject = __result_obj__ = result_446;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result285__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    memset(&result_447,0,sizeof(void*));
    __result286__ = gComeFunResultObject = __result_obj__ = result_447;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_450;
unsigned int it_451;
void* __result287__;
void* __result288__;
void* __result289__;
void* __result290__;
    hash_450=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(        self->item_existance[it_451]) {
            if(            come_call_equals((void*)0, self->keys[it_451], key)) {
                __result287__ = gComeFunResultObject = __result_obj__ = self->items[it_451];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result287__;
            }
            it_451++;
            if(            it_451>=self->size) {
                it_451=0;
            }
            else if(            it_451==hash_450) {
                __result288__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result288__;
            }
        }
        else {
            __result289__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
    }
    __result290__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
int it2_457;
struct list_item$1void$p* it_458;
struct list$1void$p* __result294__;
    it2_457=0;
    it_458=self->head;
    while(it_458!=((void*)0)) {
        if(        come_call_equals((void*)0, it_458->item, item)) {
            list$1void$p$p_delete(self,it2_457,it2_457+1);
            break;
        }
        it2_457++;
        it_458=it_458->next;
    }
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_459;
struct list$1void$p* __result291__;
struct list_item$1void$p* it_462;
int i_463;
struct list_item$1void$p* prev_it_464;
struct list_item$1void$p* it_465;
int i_466;
struct list_item$1void$p* prev_it_467;
struct list_item$1void$p* it_468;
struct list_item$1void$p* head_prev_it_469;
struct list_item$1void$p* tail_it_470;
int i_471;
struct list_item$1void$p* prev_it_472;
struct list$1void$p* __result293__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_459=tail;
        tail=head;
        head=tmp_459;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result291__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_462=self->head;
        i_463=0;
        while(it_462!=((void*)0)) {
            if(            i_463<tail) {
                prev_it_464=it_462;
                it_462=it_462->next;
                i_463++;
                come_call_finalizer3(prev_it_464,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_463==tail) {
                self->head=it_462;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_462=it_462->next;
                i_463++;
            }
        }
    }
    else if(    tail==self->len) {
        it_465=self->head;
        i_466=0;
        while(it_465!=((void*)0)) {
            if(            i_466==head) {
                self->tail=it_465->prev;
                self->tail->next=((void*)0);
            }
            if(            i_466>=head) {
                prev_it_467=it_465;
                it_465=it_465->next;
                i_466++;
                come_call_finalizer3(prev_it_467,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_465=it_465->next;
                i_466++;
            }
        }
    }
    else {
        it_468=self->head;
        head_prev_it_469=((void*)0);
        tail_it_470=((void*)0);
        i_471=0;
        while(it_468!=((void*)0)) {
            if(            i_471==head) {
                head_prev_it_469=it_468->prev;
            }
            if(            i_471==tail) {
                tail_it_470=it_468;
            }
            if(            i_471>=head&&i_471<tail) {
                prev_it_472=it_468;
                it_468=it_468->next;
                i_471++;
                come_call_finalizer3(prev_it_472,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_468=it_468->next;
                i_471++;
            }
        }
        if(        head_prev_it_469!=((void*)0)) {
            head_prev_it_469->next=tail_it_470;
        }
        if(        tail_it_470!=((void*)0)) {
            tail_it_470->prev=head_prev_it_469;
        }
    }
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list_item$1void$p* it_460;
struct list_item$1void$p* prev_it_461;
struct list$1void$p* __result292__;
    it_460=self->head;
    while(it_460!=((void*)0)) {
        prev_it_461=it_460;
        it_460=it_460->next;
        come_call_finalizer3(prev_it_461,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_474;
void* __result295__;
void* __result296__;
void* result_475;
void* __result297__;
result_474 = (void*)0;
result_475 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_474,0,sizeof(void*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_474;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->head;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_475,0,sizeof(void*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_475;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_477;
void* __result298__;
void* __result299__;
void* result_478;
void* __result300__;
result_477 = (void*)0;
result_478 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_477,0,sizeof(void*));
        __result298__ = gComeFunResultObject = __result_obj__ = result_477;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result299__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    memset(&result_478,0,sizeof(void*));
    __result300__ = gComeFunResultObject = __result_obj__ = result_478;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
struct list_item$1void$p* litem_479;
void* __right_value363 = (void*)0;
struct list_item$1void$p* litem_480;
void* __right_value364 = (void*)0;
struct list_item$1void$p* litem_481;
struct list$1void$p* __result301__;
    if(    self->len==0) {
        litem_479=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value362=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_479->prev=((void*)0);
        litem_479->next=((void*)0);
        litem_479->item=item;
        self->tail=litem_479;
        self->head=litem_479;
    }
    else if(    self->len==1) {
        litem_480=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value363=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_480->prev=self->head;
        litem_480->next=((void*)0);
        litem_480->item=item;
        self->tail=litem_480;
        self->head->next=litem_480;
    }
    else {
        litem_481=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value364=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_481->prev=self->tail;
        litem_481->next=((void*)0);
        litem_481->item=item;
        self->tail->next=litem_481;
        self->tail=litem_481;
    }
    self->len++;
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1char$ph* it_482;
int i_483;
char* __result303__;
char* default_value_484;
char* __result304__;
default_value_484 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_482=self->head;
    i_483=0;
    while(it_482!=((void*)0)) {
        if(        position==i_483) {
            __result303__ = gComeFunResultObject = __result_obj__ = it_482->item;
            gComeFunResultObject = (void*)0;
            return __result303__;
        }
        it_482=it_482->next;
        i_483++;
    }
    memset(&default_value_484,0,sizeof(char*));
    __result304__ = gComeFunResultObject = __result_obj__ = default_value_484;
    (default_value_484 = come_decrement_ref_count2(default_value_484, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
struct list_item$1sNode$ph* litem_488;
struct sNode* __dec_obj134;
void* __right_value372 = (void*)0;
struct list_item$1sNode$ph* litem_489;
struct sNode* __dec_obj135;
void* __right_value373 = (void*)0;
struct list_item$1sNode$ph* litem_490;
struct sNode* __dec_obj136;
struct list$1sNode$ph* __result305__;
    if(    self->len==0) {
        litem_488=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value371=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1457, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_488->prev=((void*)0);
        litem_488->next=((void*)0);
        __dec_obj134=litem_488->item;
        litem_488->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_488;
        self->head=litem_488;
    }
    else if(    self->len==1) {
        litem_489=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value372=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1467, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_489->prev=self->head;
        litem_489->next=((void*)0);
        __dec_obj135=litem_489->item;
        litem_489->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_489;
        self->head->next=litem_489;
    }
    else {
        litem_490=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value373=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1477, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_490->prev=self->tail;
        litem_490->next=((void*)0);
        __dec_obj136=litem_490->item;
        litem_490->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_490;
        self->tail=litem_490;
    }
    self->len++;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_492;
struct list$1sNode$ph* __result306__;
struct list_item$1sNode$ph* it_495;
int i_496;
struct list_item$1sNode$ph* prev_it_497;
struct list_item$1sNode$ph* it_498;
int i_499;
struct list_item$1sNode$ph* prev_it_500;
struct list_item$1sNode$ph* it_501;
struct list_item$1sNode$ph* head_prev_it_502;
struct list_item$1sNode$ph* tail_it_503;
int i_504;
struct list_item$1sNode$ph* prev_it_505;
struct list$1sNode$ph* __result308__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_492=tail;
        tail=head;
        head=tmp_492;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result306__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph$p_reset(self);
    }
    else if(    head==0) {
        it_495=self->head;
        i_496=0;
        while(it_495!=((void*)0)) {
            if(            i_496<tail) {
                prev_it_497=it_495;
                it_495=it_495->next;
                i_496++;
                come_call_finalizer3(prev_it_497,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_496==tail) {
                self->head=it_495;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_495=it_495->next;
                i_496++;
            }
        }
    }
    else if(    tail==self->len) {
        it_498=self->head;
        i_499=0;
        while(it_498!=((void*)0)) {
            if(            i_499==head) {
                self->tail=it_498->prev;
                self->tail->next=((void*)0);
            }
            if(            i_499>=head) {
                prev_it_500=it_498;
                it_498=it_498->next;
                i_499++;
                come_call_finalizer3(prev_it_500,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_498=it_498->next;
                i_499++;
            }
        }
    }
    else {
        it_501=self->head;
        head_prev_it_502=((void*)0);
        tail_it_503=((void*)0);
        i_504=0;
        while(it_501!=((void*)0)) {
            if(            i_504==head) {
                head_prev_it_502=it_501->prev;
            }
            if(            i_504==tail) {
                tail_it_503=it_501;
            }
            if(            i_504>=head&&i_504<tail) {
                prev_it_505=it_501;
                it_501=it_501->next;
                i_504++;
                come_call_finalizer3(prev_it_505,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_501=it_501->next;
                i_504++;
            }
        }
        if(        head_prev_it_502!=((void*)0)) {
            head_prev_it_502->next=tail_it_503;
        }
        if(        tail_it_503!=((void*)0)) {
            tail_it_503->prev=head_prev_it_502;
        }
    }
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNode$ph* it_493;
struct list_item$1sNode$ph* prev_it_494;
struct list$1sNode$ph* __result307__;
    it_493=self->head;
    while(it_493!=((void*)0)) {
        prev_it_494=it_493;
        it_493=it_493->next;
        come_call_finalizer3(prev_it_494,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result309__;
void* __right_value382 = (void*)0;
struct sSemicolonNode* result_512;
void* __right_value383 = (void*)0;
char* __dec_obj140;
struct sSemicolonNode* __result310__;
    if(    self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_512=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_512->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj140=result_512->sname;
        result_512->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_512->sline_real=self->sline_real;
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_512;
    come_call_finalizer3(result_512,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_522;
struct sVarTable* old_table_523;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sVarTable* __dec_obj153;
struct sVarTable* current_loop_vtable_536;
int i_537;
struct list$1char$ph* o2_saved_538;
char* name_539;
void* __right_value410 = (void*)0;
struct sType* type_540;
void* __right_value411 = (void*)0;
int block_level_544;
int i_545;
struct list$1sNode$ph* o2_saved_546;
struct sNode* node_549;
struct list$1void$ph* right_value_objects_552;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1void$ph* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
int stack_num_before_553;
int sline_554;
void* __right_value414 = (void*)0;
char* sname_555;
void* __right_value415 = (void*)0;
char* __dec_obj157;
_Bool Value_556;
void* __right_value416 = (void*)0;
struct CVALUE* come_value_557;
void* __right_value422 = (void*)0;
struct CVALUE* come_value2_558;
void* __right_value423 = (void*)0;
char* __dec_obj162;
void* __right_value424 = (void*)0;
struct CVALUE* come_value2_560;
struct sVar* var__561;
void* __right_value425 = (void*)0;
struct CVALUE* come_value3_562;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_565=0;
char* Err_566=0;
_Bool _if_conditional2;
int __result329__;
void* __right_value428 = (void*)0;
struct sType* __dec_obj164;
void* __right_value429 = (void*)0;
char* c_value_567;
void* __right_value430 = (void*)0;
char* __dec_obj165;
void* __right_value431 = (void*)0;
char* __dec_obj166;
void* __right_value432 = (void*)0;
char* __dec_obj167;
_Bool Value_568;
void* __right_value433 = (void*)0;
char* __dec_obj168;
struct list$1void$ph* __dec_obj169;
void* __if_result__0_571 = (void*)0;
struct list$1void$ph* o2_saved_572;
struct sVar* it_575;
void* __right_value434 = (void*)0;
struct list$1void$ph* __dec_obj170;
memset(&i_537, 0, sizeof(int));
memset(&i_545, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_522=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_523=info->lv_table;
    if(    !no_var_table) {
        __dec_obj153=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_523));
        come_call_finalizer3(__dec_obj153,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_536=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_538=(param_names),name_539=list$1char$ph$p_begin((o2_saved_538));        !list$1char$ph$p_end((o2_saved_538));        name_539=list$1char$ph$p_next((o2_saved_538))        ){
            type_540=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types,i_537));
            type_540->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_539,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_540)),info,(_Bool)1);
            i_537++;
            come_call_finalizer3(type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_544=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_546=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_549=list$1sNode$ph$p_begin((o2_saved_546));        !list$1sNode$ph$p_end((o2_saved_546));        node_549=list$1sNode$ph$p_next((o2_saved_546))        ){
            right_value_objects_552=(struct list$1void$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj154=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 493, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            come_call_finalizer3(__dec_obj154,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj155=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj156=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_553=list$1CVALUE$ph$p_length(info->stack);
            sline_554=info->sline;
            sname_555=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_549->sline(node_549->_protocol_obj);
            __dec_obj157=info->sname;
            info->sname=(char*)come_increment_ref_count(node_549->sname(node_549->_protocol_obj));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_545==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_556=node_compile(node_549,info);
                if(                !Value_556) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_553+1) {
                    come_value_557=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_557->type->mClass->mName,"void")&&come_value_557->type->mPointerNum==0) {
                        come_value2_558=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_557));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_558));
                        __dec_obj162=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_558->c_value));
                        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_560=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_557));
                        var__561=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__561) {
                            come_value3_562=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 529, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__561->mType->mClass=="void"&&var__561->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value427=check_assign_type("invalid if result value",var__561->mType,((struct sType*)(__right_value426=come_call_cloner(sType_clone, come_value_557->type))),come_value3_562,info,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_565=multiple_assign_var8->v1;
                                Err_566=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_566)),                                come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value427,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result329__ = (_Bool)1;
                                    (Err_566 = come_decrement_ref_count2(Err_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_552,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_555 = come_decrement_ref_count2(sname_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_546,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result329__;
                                }
                                else {
                                }
                                (Err_566 = come_decrement_ref_count2(Err_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj164=var__561->mType;
                            var__561->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_557->type));
                            come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_557->type->mHeap) {
                                c_value_567=(char*)come_increment_ref_count(increment_ref_count_object(come_value_557->type,come_value_557->c_value,info));
                                __dec_obj165=come_value2_560->c_value;
                                come_value2_560->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__561->mCValueName,c_value_567));
                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_567 = come_decrement_ref_count2(c_value_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj166=come_value2_560->c_value;
                                come_value2_560->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__561->mCValueName,come_value_557->c_value));
                                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_560));
                        __dec_obj167=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_560->c_value));
                        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_568=node_compile(node_549,info);
                if(                !Value_568) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_554;
            __dec_obj168=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_555));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_553);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1void$ph$p_reset(info->right_value_objects);
            }
            __dec_obj169=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_552);
            come_call_finalizer3(__dec_obj169,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_545++;
            come_call_finalizer3(right_value_objects_552,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (sname_555 = come_decrement_ref_count2(sname_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_546,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_544==0) {
            for(            o2_saved_572=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_575=((struct sVar*)list$1void$ph$p_begin((o2_saved_572)));            !list$1void$ph$p_end((o2_saved_572));            it_575=((struct sVar*)list$1void$ph$p_next((o2_saved_572)))            ){
                free_object(((struct sType*)(__right_value434=come_call_cloner(sType_clone, it_575->mType))),it_575->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value434,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_572,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj170=info->match_it_var;
            __if_result__0_571=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj170,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_571,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_523;
    info->block_level=block_level_544;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_536;
    info->inhibits_output_code=inhibits_output_code_522;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result312__;
void* __right_value390 = (void*)0;
struct sVarTable* result_525;
void* __right_value407 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj152;
struct sVarTable* __result318__;
    if(    self==(void*)0) {
        __result312__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    result_525=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj152=result_525->mVars;
        result_525->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj152,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_525->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_525->mParent=self->mParent;
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_525;
    come_call_finalizer3(result_525,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_524;
    result_524=0;
    result_524+=int_get_hash_key(((int)self->mVars));
    result_524+=int_get_hash_key(((int)self->mGlobal));
    result_524+=int_get_hash_key(((int)self->mParent));
    return result_524;
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
void* __result_obj__=(void*)0;
struct map$2void$phvoid$ph* __result313__;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct map$2void$phvoid$ph* result_526;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1void$p* __dec_obj143;
char* it_527;
void* default_value_528;
void* __right_value395 = (void*)0;
struct sVar* it2_529;
void* __right_value396 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct map$2void$phvoid$ph* __result317__;
default_value_528 = (void*)0;
    if(    self==((void*)0)) {
        __result313__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_526=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2734, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj143=result_526->key_list;
    result_526->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2736, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj143,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_527=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_527=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_528,0,sizeof(void*));
        it2_529=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_527,(struct sVar*)come_increment_ref_count(((struct sVar*)default_value_528))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_526,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_527)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_529)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_526,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_527)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_529)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_526,(char*)come_increment_ref_count(it_527),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_529)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_526,(char*)come_increment_ref_count(it_527),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_529)));
        }
        come_call_finalizer3(default_value_528,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_529,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result317__ = gComeFunResultObject = __result_obj__ = result_526;
    come_call_finalizer3(result_526,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_530;
int it_531;
_Bool same_key_exist_532;
char* it2_533;
struct map$2void$phvoid$ph* __result314__;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_530=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_531=hash_530;
    while((_Bool)1) {
        if(        self->item_existance[it_531]) {
            if(            come_call_equals((void*)0, self->keys[it_531], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_531],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_531]);
                    self->keys[it_531]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_531]);
                    self->keys[it_531]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_531],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_531]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_531]=item;
                }
                break;
            }
            it_531++;
            if(            it_531>=self->size) {
                it_531=0;
            }
            else if(            it_531==hash_530) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_531]=(_Bool)1;
            if(            1) {
                self->keys[it_531]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_531]=key;
            }
            if(            1) {
                self->items[it_531]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_531]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_532=(_Bool)0;
    for(    it2_533=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_533=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_533, key)) {
            same_key_exist_532=(_Bool)1;
        }
    }
    if(    !same_key_exist_532) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result315__;
void* __right_value397 = (void*)0;
struct sVar* result_535;
void* __right_value398 = (void*)0;
char* __dec_obj148;
void* __right_value399 = (void*)0;
char* __dec_obj149;
void* __right_value400 = (void*)0;
struct sType* __dec_obj150;
void* __right_value401 = (void*)0;
char* __dec_obj151;
struct sVar* __result316__;
    if(    self==(void*)0) {
        __result315__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_535=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj148=result_535->mName;
        result_535->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj149=result_535->mCValueName;
        result_535->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj150=result_535->mType;
        result_535->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_535->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_535->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_535->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj151=result_535->mFunName;
        result_535->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_535;
    come_call_finalizer3(result_535,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj144;
char* __dec_obj145;
struct sType* __dec_obj146;
char* __dec_obj147;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj144=self->mName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj145=self->mCValueName;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj146=self->mType;
            come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj147=self->mFunName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_534;
    result_534=0;
    result_534+=int_get_hash_key(((int)self->mName));
    result_534+=int_get_hash_key(((int)self->mCValueName));
    result_534+=int_get_hash_key(((int)self->mType));
    result_534+=int_get_hash_key(((int)self->mGlobal));
    result_534+=int_get_hash_key(((int)self->mAllocaValue));
    result_534+=int_get_hash_key(((int)self->mNoFree));
    result_534+=int_get_hash_key(((int)self->mFunName));
    return result_534;
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
void* __result_obj__=(void*)0;
struct list_item$1void$ph* it_541;
int i_542;
void* __result319__;
void* default_value_543;
void* __result320__;
default_value_543 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_541=self->head;
    i_542=0;
    while(it_541!=((void*)0)) {
        if(        position==i_542) {
            __result319__ = gComeFunResultObject = __result_obj__ = it_541->item;
            gComeFunResultObject = (void*)0;
            return __result319__;
        }
        it_541=it_541->next;
        i_542++;
    }
    memset(&default_value_543,0,sizeof(void*));
    __result320__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_543);
    come_call_finalizer3(default_value_543,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_547;
struct sNode* __result321__;
struct sNode* __result322__;
struct sNode* result_548;
struct sNode* __result323__;
result_547 = (void*)0;
result_548 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_547,0,sizeof(struct sNode*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_547;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->head;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_548,0,sizeof(struct sNode*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_548;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_550;
struct sNode* __result324__;
struct sNode* __result325__;
struct sNode* result_551;
struct sNode* __result326__;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_550,0,sizeof(struct sNode*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_550;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_551,0,sizeof(struct sNode*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_551;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result327__;
void* __right_value417 = (void*)0;
struct CVALUE* result_559;
void* __right_value418 = (void*)0;
char* __dec_obj158;
void* __right_value419 = (void*)0;
struct sType* __dec_obj159;
void* __right_value420 = (void*)0;
char* __dec_obj160;
void* __right_value421 = (void*)0;
char* __dec_obj161;
struct CVALUE* __result328__;
    if(    self==(void*)0) {
        __result327__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_559=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj158=result_559->c_value;
        result_559->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj159=result_559->type;
        result_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_559->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_559->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj160=result_559->c_value_without_right_value_objects;
        result_559->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj161=result_559->c_value_without_cast_object_value;
        result_559->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result328__ = gComeFunResultObject = __result_obj__ = result_559;
    come_call_finalizer3(result_559,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
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
struct list_item$1void$ph* it_563;
struct list_item$1void$ph* it2_564;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_563=left->head;
    it2_564=right->head;
    while(it_563!=((void*)0)) {
        if(        !(voidp_operator_equals(it_563->item,it2_564->item))) {
            return (_Bool)0;
        }
        it_563=it_563->next;
        it2_564=it2_564->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
char* __dec_obj163;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj163=self->v2;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list_item$1void$ph* it_569;
struct list_item$1void$ph* prev_it_570;
struct list$1void$ph* __result330__;
    it_569=self->head;
    while(it_569!=((void*)0)) {
        prev_it_570=it_569;
        it_569=it_569->next;
        come_call_finalizer3(prev_it_570,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
void* result_573;
void* __result331__;
void* __result332__;
void* result_574;
void* __result333__;
result_573 = (void*)0;
result_574 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_573,0,sizeof(void*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_573;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->it=self->head;
    if(    self->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_574,0,sizeof(void*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_574;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
void* result_576;
void* __result334__;
void* __result335__;
void* result_577;
void* __result336__;
result_576 = (void*)0;
result_577 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_576,0,sizeof(void*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_576;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_577,0,sizeof(void*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_577;
    gComeFunResultObject = (void*)0;
    return __result336__;
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
void* __right_value435 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_578=0;
char* Err_579=0;
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value435=err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line)));
            come_exception_var_c8_578=multiple_assign_var9->v1;
            Err_579=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            ((Err_579)?(puts(Err_579),exit(0)):(0));
            come_call_finalizer3(__right_value435,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_580;
_Bool dquort_581;
_Bool squort_582;
int sline_583;
int nest_584;
void* __right_value436 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_585=0;
char* Err_586=0;
void* __right_value437 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_587=0;
char* Err_588=0;
void* __right_value438 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_589=0;
char* Err_590=0;
void* __right_value439 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_591=0;
char* Err_592=0;
void* __right_value440 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_593=0;
char* Err_594=0;
void* __right_value441 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_595=0;
char* Err_596=0;
void* __right_value442 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_597=0;
char* Err_598=0;
void* __right_value443 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_c16_599=0;
char* Err_600=0;
char* tail_601;
void* __right_value444 = (void*)0;
char* buf_602;
void* __right_value445 = (void*)0;
char* __result337__;
    head_580=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_581=(_Bool)0;
        squort_582=(_Bool)0;
        sline_583=0;
        nest_584=0;
        while(1) {
            if(            dquort_581) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value436=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c9_585=multiple_assign_var10->v1;
                        Err_586=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_586)?(puts(Err_586),exit(0)):(0));
                        come_call_finalizer3(__right_value436,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_586 = come_decrement_ref_count2(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_581=!dquort_581;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value437=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c10_587=multiple_assign_var11->v1;
                        Err_588=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_588)?(puts(Err_588),exit(0)):(0));
                        come_call_finalizer3(__right_value437,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_588 = come_decrement_ref_count2(Err_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value438=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c11_589=multiple_assign_var12->v1;
                        Err_590=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_590)?(puts(Err_590),exit(0)):(0));
                        come_call_finalizer3(__right_value438,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_582) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value439=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c12_591=multiple_assign_var13->v1;
                        Err_592=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_592)?(puts(Err_592),exit(0)):(0));
                        come_call_finalizer3(__right_value439,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_592 = come_decrement_ref_count2(Err_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_582=!squort_582;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value440=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c13_593=multiple_assign_var14->v1;
                        Err_594=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_594)?(puts(Err_594),exit(0)):(0));
                        come_call_finalizer3(__right_value440,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value441=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c14_595=multiple_assign_var15->v1;
                        Err_596=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        ((Err_596)?(puts(Err_596),exit(0)):(0));
                        come_call_finalizer3(__right_value441,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_596 = come_decrement_ref_count2(Err_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_583=info->sline;
                info->p++;
                squort_582=!squort_582;
            }
            else if(            *info->p==34) {
                sline_583=info->sline;
                info->p++;
                dquort_581=!dquort_581;
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
                nest_584++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_584==0) {
                    break;
                }
                nest_584--;
            }
            else if(            *info->p==0) {
                multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value442=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c15_597=multiple_assign_var16->v1;
                Err_598=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                ((Err_598)?(puts(Err_598),exit(0)):(0));
                come_call_finalizer3(__right_value442,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_598 = come_decrement_ref_count2(Err_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value443=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c16_599=multiple_assign_var17->v1;
        Err_600=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        ((Err_600)?(puts(Err_600),exit(0)):(0));
        come_call_finalizer3(__right_value443,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        (Err_600 = come_decrement_ref_count2(Err_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_601=info->p;
    buf_602=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_601-head_580+1)), "05function.c", 764, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_602,head_580,tail_601-head_580);
    buf_602[tail_601-head_580]=0;
    skip_spaces_and_lf(info);
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value445=__builtin_string(buf_602)));
    (buf_602 = come_decrement_ref_count2(buf_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result337__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_603;
char* p3_604;
int i_605;
    terminated_603=(_Bool)0;
    p3_604=p;
    for(    i_605=0;    i_605<strlen(p2);    i_605++    ){
        if(        *p3_604==0) {
            terminated_603=(_Bool)1;
            break;
        }
        p3_604++;
    }
    return !terminated_603&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct buffer* asm_fun_name_606;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct buffer* result_607;
char* head_608;
int brace_num_609;
char* tail_610;
char* head_611;
int brace_num_612;
char* tail_613;
char* head_614;
char* tail_615;
char* head_616;
char* tail_617;
int len_618;
_Bool in_dquort_619;
int brace_num_620;
char* head_621;
char* tail_622;
char* head_623;
char* tail_624;
char* head_625;
char* tail_626;
char* head_627;
int nest_628;
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
char* tail_643;
char* head_644;
char* tail_645;
char* head_646;
char* tail_647;
char* head_648;
char* tail_649;
char* head_650;
char* tail_651;
char* head_652;
int brace_num_653;
char* tail_654;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct tuple2$2char$phchar$ph* __result341__;
    asm_fun_name_606=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 789, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_607=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_608=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_609=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_609++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_609--;
                        if(                        brace_num_609==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_610=info->p;
            buffer_append(result_607,head_608,tail_610-head_608);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_611=info->p;
            info->p+=strlen("__declspec");
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
            buffer_append(result_607,head_611,tail_613-head_611);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_614=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_615=info->p;
            buffer_append(result_607,head_614,tail_615-head_614);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_616=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_617=info->p;
            buffer_append(result_607,head_616,tail_617-head_616);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_618=0;
            if(            *info->p==40) {
                in_dquort_619=(_Bool)0;
                brace_num_620=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_619=!in_dquort_619;
                    }
                    else if(                    in_dquort_619) {
                        buffer_append_char(asm_fun_name_606,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_620++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_620--;
                        if(                        brace_num_620==0) {
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
            head_621=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_622=info->p;
            buffer_append(result_607,head_621,tail_622-head_621);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_623=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_624=info->p;
            buffer_append(result_607,head_623,tail_624-head_623);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_625=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_626=info->p;
            buffer_append(result_607,head_625,tail_626-head_625);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_627=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_628=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_628++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_628--;
                        if(                        nest_628==0) {
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
            tail_629=info->p;
            buffer_append(result_607,head_627,tail_629-head_627);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_630=info->p;
            info->p+=strlen("__alloc_size");
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
            buffer_append(result_607,head_630,tail_632-head_630);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_633=info->p;
            info->p+=strlen("__nonnull");
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
            buffer_append(result_607,head_633,tail_635-head_633);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_636=info->p;
            info->p+=strlen("_Nonnull");
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
            buffer_append(result_607,head_636,tail_638-head_636);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_639=info->p;
            info->p+=strlen("__alloc_align");
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
            buffer_append(result_607,head_639,tail_641-head_639);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_642=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_643=info->p;
            buffer_append(result_607,head_642,tail_643-head_642);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_644=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_645=info->p;
            buffer_append(result_607,head_644,tail_645-head_644);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_646=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_647=info->p;
            buffer_append(result_607,head_646,tail_647-head_646);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_648=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_649=info->p;
            buffer_append(result_607,head_648,tail_649-head_648);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_650=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_651=info->p;
            buffer_append(result_607,head_650,tail_651-head_650);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_652=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_653=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_653++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_653--;
                        if(                        brace_num_653==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_654=info->p;
            buffer_append(result_607,head_652,tail_654-head_652);
        }
        else {
            break;
        }
    }
    __result341__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2char$phchar$ph*)(__right_value456=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1204, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_606)),(char*)come_increment_ref_count(buffer_to_string(result_607)))));
    come_call_finalizer3(asm_fun_name_606,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value456,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self){
char* __dec_obj171;
char* __dec_obj172;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj171=self->v1;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj172=self->v2;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phchar$ph* __result338__;
void* __right_value452 = (void*)0;
struct tuple2$2char$phchar$ph* result_655;
void* __right_value453 = (void*)0;
char* __dec_obj173;
void* __right_value454 = (void*)0;
char* __dec_obj174;
struct tuple2$2char$phchar$ph* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_655=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj173=result_655->v1;
        result_655->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj174=result_655->v2;
        result_655->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_656;
    result_656=0;
    result_656+=int_get_hash_key(((int)self->v1));
    result_656+=int_get_hash_key(((int)self->v2));
    return result_656;
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
void* __result_obj__=(void*)0;
char* __dec_obj175;
char* __dec_obj176;
struct tuple2$2char$phchar$ph* __result340__;
    __dec_obj175=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj176=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
char* __dec_obj177;
char* __dec_obj178;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj177=self->v1;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj178=self->v2;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct buffer* asm_fun_name_657;
void* __right_value459 = (void*)0;
char* attribute_658;
int nest_659;
int nest_660;
int nest_661;
int nest_662;
int nest_663;
void* __right_value460 = (void*)0;
char* __dec_obj179;
int len_664;
_Bool in_dquort_665;
int brace_num_666;
int brace_num_667;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct tuple2$2char$phchar$ph* __result342__;
    asm_fun_name_657=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1209, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_658=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_659=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_659++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_659--;
                        if(                        nest_659==0) {
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
                nest_660=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_660++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_660--;
                        if(                        nest_660==0) {
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
                nest_661=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_661++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_661--;
                        if(                        nest_661==0) {
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
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
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
            __dec_obj179=attribute_658;
            attribute_658=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_664=0;
            if(            *info->p==40) {
                in_dquort_665=(_Bool)0;
                brace_num_666=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_665=!in_dquort_665;
                    }
                    else if(                    in_dquort_665) {
                        buffer_append_char(asm_fun_name_657,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_666++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_666--;
                        if(                        brace_num_666==0) {
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
                brace_num_667=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_667++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_667--;
                        if(                        brace_num_667==0) {
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
    __result342__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2char$phchar$ph*)(__right_value463=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1478, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_657)),(char*)come_increment_ref_count(attribute_658))));
    come_call_finalizer3(asm_fun_name_657,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_658 = come_decrement_ref_count2(attribute_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value463,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value464 = (void*)0;
char* __dec_obj180;
char* head_668;
int head_sline_669;
void* __right_value465 = (void*)0;
char* buf_670;
void* __right_value466 = (void*)0;
struct sNode* node_671;
_Bool Value_672;
    while(*info->p) {
        __dec_obj180=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_668=info->p;
        head_sline_669=info->sline;
        buf_670=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_670 = come_decrement_ref_count2(buf_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_671=(struct sNode*)come_increment_ref_count(top_level_v99(buf_670,head_668,head_sline_669,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_671!=((void*)0)) {
            Value_672=node_compile(node_671,info);
            if(            !Value_672) {
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
            (buf_670 = come_decrement_ref_count2(buf_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_671) ? node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            break;
        }
        (buf_670 = come_decrement_ref_count2(buf_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_671) ? node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value467 = (void*)0;
char* name_673;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* result_type_674;
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
struct sType* __list_values1___675[9];
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1sType$ph* param_types_686;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
char* __list_values2___687[9];
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1char$ph* param_names_691;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1char$ph* param_default_parametors_692;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sFun* main_fun_696;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
char* name_697;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* result_type_698;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __list_values3___699[1];
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct list$1sType$ph* param_types_700;
void* __right_value540 = (void*)0;
char* __list_values4___701[1];
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1char$ph* param_names_702;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1char$ph* param_default_parametors_703;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sFun* main_fun_704;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
char* name_705;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* result_type_706;
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
struct sType* __list_values5___707[7];
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct list$1sType$ph* param_types_708;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* __list_values6___709[7];
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct list$1char$ph* param_names_710;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1char$ph* param_default_parametors_711;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sFun* main_fun_712;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
char* name_713;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* result_type_714;
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
struct sType* __list_values7___715[5];
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1sType$ph* param_types_716;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
char* __list_values8___717[5];
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct list$1char$ph* param_names_718;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct list$1char$ph* param_default_parametors_719;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sFun* main_fun_720;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
char* name_721;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* result_type_722;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sType* __list_values9___723[1];
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct list$1sType$ph* param_types_724;
void* __right_value621 = (void*)0;
char* __list_values10___725[1];
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1char$ph* param_names_726;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct list$1char$ph* param_default_parametors_727;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sFun* main_fun_728;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* name_729;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sType* result_type_730;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sType* __list_values11___731[4];
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1sType$ph* param_types_732;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
char* __list_values12___733[4];
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1char$ph* param_names_734;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1char$ph* param_default_parametors_735;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sFun* main_fun_736;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
char* name_737;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sType* result_type_738;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* __list_values13___739[3];
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1sType$ph* param_types_740;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
char* __list_values14___741[3];
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct list$1char$ph* param_names_742;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct list$1char$ph* param_default_parametors_743;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sFun* main_fun_744;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* name_745;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sType* result_type_746;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sType* __list_values15___747[1];
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct list$1sType$ph* param_types_748;
void* __right_value690 = (void*)0;
char* __list_values16___749[1];
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct list$1char$ph* param_names_750;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct list$1char$ph* param_default_parametors_751;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sFun* main_fun_752;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
char* name_753;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* result_type_754;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sType* __list_values17___755[3];
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct list$1sType$ph* param_types_756;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
char* __list_values18___757[3];
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1char$ph* param_names_758;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1char$ph* param_default_parametors_759;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sFun* main_fun_760;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
char* name_761;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sType* result_type_762;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct list$1void$ph* param_types_763;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct list$1char$ph* param_names_764;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct list$1char$ph* param_default_parametors_765;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sFun* main_fun_766;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
char* name_767;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sType* result_type_768;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sType* __list_values19___769[4];
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1sType$ph* param_types_770;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
char* __list_values20___771[4];
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct list$1char$ph* param_names_772;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct list$1char$ph* param_default_parametors_773;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sFun* main_fun_774;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
char* name_775;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sType* result_type_776;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1void$ph* param_types_777;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct list$1char$ph* param_names_778;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct list$1char$ph* param_default_parametors_779;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sFun* fun_780;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
char* name_781;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sType* result_type_782;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct list$1void$ph* param_types_783;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct list$1char$ph* param_names_784;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct list$1char$ph* param_default_parametors_785;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sFun* fun_786;
void* __right_value790 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_673=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_674=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1534, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_686=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___675[0]=((struct sType*)(__right_value471=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___675[1]=((struct sType*)(__right_value473=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___675[2]=((struct sType*)(__right_value475=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values1___675[3]=((struct sType*)(__right_value477=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___675[4]=((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values1___675[5]=((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___675[6]=((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___675[7]=((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___675[8]=((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1535, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),9,__list_values1___675)));
        come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value475,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value477,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_691=(struct list$1char$ph*)come_increment_ref_count((__list_values2___687[0]=((char*)(__right_value494=__builtin_string("count"))),
__list_values2___687[1]=((char*)(__right_value495=__builtin_string("size"))),
__list_values2___687[2]=((char*)(__right_value496=__builtin_string("sname"))),
__list_values2___687[3]=((char*)(__right_value497=__builtin_string("sline"))),
__list_values2___687[4]=((char*)(__right_value498=__builtin_string("class_name"))),
__list_values2___687[5]=((char*)(__right_value499=__builtin_string("finalizer_fun"))),
__list_values2___687[6]=((char*)(__right_value500=__builtin_string("cloner_fun"))),
__list_values2___687[7]=((char*)(__right_value501=__builtin_string("get_hash_key_fun"))),
__list_values2___687[8]=((char*)(__right_value502=__builtin_string("equaler_fun"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1536, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),9,__list_values2___687)));
        (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_692=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1537, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_692,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_692,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_692,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_692,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_692,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_696=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1543, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_673),(struct sType*)come_increment_ref_count(result_type_674),(struct list$1sType$ph*)come_increment_ref_count(param_types_686),(struct list$1char$ph*)come_increment_ref_count(param_names_691),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_692),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_673)),(struct sFun*)come_increment_ref_count(main_fun_696));
        (name_673 = come_decrement_ref_count2(name_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_686,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_691,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_692,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_696,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_697=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_698=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1552, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_700=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___699[0]=((struct sType*)(__right_value537=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1553, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values3___699)));
        come_call_finalizer3(__right_value537,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_702=(struct list$1char$ph*)come_increment_ref_count((__list_values4___701[0]=((char*)(__right_value540=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1554, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values4___701)));
        (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_703=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1555, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_704=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1556, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_697),(struct sType*)come_increment_ref_count(result_type_698),(struct list$1sType$ph*)come_increment_ref_count(param_types_700),(struct list$1char$ph*)come_increment_ref_count(param_names_702),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_703),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_697)),(struct sFun*)come_increment_ref_count(main_fun_704));
        (name_697 = come_decrement_ref_count2(name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_700,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_702,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_703,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_704,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_705=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_706=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1565, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_708=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___707[0]=((struct sType*)(__right_value554=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___707[1]=((struct sType*)(__right_value556=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___707[2]=((struct sType*)(__right_value558=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___707[3]=((struct sType*)(__right_value560=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___707[4]=((struct sType*)(__right_value562=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values5___707[5]=((struct sType*)(__right_value564=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values5___707[6]=((struct sType*)(__right_value566=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1566, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),7,__list_values5___707)));
        come_call_finalizer3(__right_value554,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value556,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value558,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value560,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value562,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value566,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_710=(struct list$1char$ph*)come_increment_ref_count((__list_values6___709[0]=((char*)(__right_value569=__builtin_string("fun"))),
__list_values6___709[1]=((char*)(__right_value570=__builtin_string("mem"))),
__list_values6___709[2]=((char*)(__right_value571=__builtin_string("protocol_fun"))),
__list_values6___709[3]=((char*)(__right_value572=__builtin_string("protocol_obj"))),
__list_values6___709[4]=((char*)(__right_value573=__builtin_string("call_finalizer_only"))),
__list_values6___709[5]=((char*)(__right_value574=__builtin_string("no_decrement"))),
__list_values6___709[6]=((char*)(__right_value575=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1567, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),7,__list_values6___709)));
        (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_711=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1568, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_712=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1569, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_705),(struct sType*)come_increment_ref_count(result_type_706),(struct list$1sType$ph*)come_increment_ref_count(param_types_708),(struct list$1char$ph*)come_increment_ref_count(param_names_710),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_711),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_705)),(struct sFun*)come_increment_ref_count(main_fun_712));
        (name_705 = come_decrement_ref_count2(name_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_706,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_708,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_710,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_711,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_712,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_713=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_714=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_716=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___715[0]=((struct sType*)(__right_value589=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___715[1]=((struct sType*)(__right_value591=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___715[2]=((struct sType*)(__right_value593=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___715[3]=((struct sType*)(__right_value595=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info))),
__list_values7___715[4]=((struct sType*)(__right_value597=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1579, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),5,__list_values7___715)));
        come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value595,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_718=(struct list$1char$ph*)come_increment_ref_count((__list_values8___717[0]=((char*)(__right_value600=__builtin_string("mem"))),
__list_values8___717[1]=((char*)(__right_value601=__builtin_string("protocol_fun"))),
__list_values8___717[2]=((char*)(__right_value602=__builtin_string("protocol_obj"))),
__list_values8___717[3]=((char*)(__right_value603=__builtin_string("no_decrement"))),
__list_values8___717[4]=((char*)(__right_value604=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1580, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),5,__list_values8___717)));
        (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_719=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1581, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_720=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1582, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_713),(struct sType*)come_increment_ref_count(result_type_714),(struct list$1sType$ph*)come_increment_ref_count(param_types_716),(struct list$1char$ph*)come_increment_ref_count(param_names_718),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_719),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_713)),(struct sFun*)come_increment_ref_count(main_fun_720));
        (name_713 = come_decrement_ref_count2(name_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_716,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_718,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_719,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_720,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_721=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_722=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1591, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_724=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___723[0]=((struct sType*)(__right_value618=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1592, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values9___723)));
        come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_726=(struct list$1char$ph*)come_increment_ref_count((__list_values10___725[0]=((char*)(__right_value621=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1593, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values10___725)));
        (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_727=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1594, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_728=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1595, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_721),(struct sType*)come_increment_ref_count(result_type_722),(struct list$1sType$ph*)come_increment_ref_count(param_types_724),(struct list$1char$ph*)come_increment_ref_count(param_names_726),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_727),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_721)),(struct sFun*)come_increment_ref_count(main_fun_728));
        (name_721 = come_decrement_ref_count2(name_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_724,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_726,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_727,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_728,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_729=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_730=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1604, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_732=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___731[0]=((struct sType*)(__right_value635=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values11___731[1]=((struct sType*)(__right_value637=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values11___731[2]=((struct sType*)(__right_value639=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values11___731[3]=((struct sType*)(__right_value641=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1605, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values11___731)));
        come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value637,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value639,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value641,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_734=(struct list$1char$ph*)come_increment_ref_count((__list_values12___733[0]=((char*)(__right_value644=__builtin_string("block"))),
__list_values12___733[1]=((char*)(__right_value645=__builtin_string("sname"))),
__list_values12___733[2]=((char*)(__right_value646=__builtin_string("sline"))),
__list_values12___733[3]=((char*)(__right_value647=__builtin_string("class_name"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1606, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values12___733)));
        (__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_735=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1607, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_735,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_735,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_735,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_735,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_736=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1612, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_729),(struct sType*)come_increment_ref_count(result_type_730),(struct list$1sType$ph*)come_increment_ref_count(param_types_732),(struct list$1char$ph*)come_increment_ref_count(param_names_734),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_735),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_729)),(struct sFun*)come_increment_ref_count(main_fun_736));
        (name_729 = come_decrement_ref_count2(name_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_732,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_734,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_735,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_736,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_737=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_738=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1621, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_740=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___739[0]=((struct sType*)(__right_value664=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values13___739[1]=((struct sType*)(__right_value666=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values13___739[2]=((struct sType*)(__right_value668=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1622, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values13___739)));
        come_call_finalizer3(__right_value664,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value666,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value668,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_742=(struct list$1char$ph*)come_increment_ref_count((__list_values14___741[0]=((char*)(__right_value671=__builtin_string("b"))),
__list_values14___741[1]=((char*)(__right_value672=__builtin_string("c"))),
__list_values14___741[2]=((char*)(__right_value673=__builtin_string("len"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1623, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values14___741)));
        (__right_value671 = come_decrement_ref_count2(__right_value671, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value672 = come_decrement_ref_count2(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_743=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1624, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_744=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1625, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_737),(struct sType*)come_increment_ref_count(result_type_738),(struct list$1sType$ph*)come_increment_ref_count(param_types_740),(struct list$1char$ph*)come_increment_ref_count(param_names_742),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_743),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_737)),(struct sFun*)come_increment_ref_count(main_fun_744));
        (name_737 = come_decrement_ref_count2(name_737, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_738,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_740,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_742,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_743,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_744,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_745=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_746=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_748=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___747[0]=((struct sType*)(__right_value687=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1635, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values15___747)));
        come_call_finalizer3(__right_value687,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_750=(struct list$1char$ph*)come_increment_ref_count((__list_values16___749[0]=((char*)(__right_value690=__builtin_string("str"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1636, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values16___749)));
        (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_751=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1637, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_752=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_745),(struct sType*)come_increment_ref_count(result_type_746),(struct list$1sType$ph*)come_increment_ref_count(param_types_748),(struct list$1char$ph*)come_increment_ref_count(param_names_750),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_751),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_745)),(struct sFun*)come_increment_ref_count(main_fun_752));
        (name_745 = come_decrement_ref_count2(name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_746,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_748,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_750,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_751,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_752,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_753=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_754=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1647, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_756=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___755[0]=((struct sType*)(__right_value704=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1648, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values17___755[1]=((struct sType*)(__right_value706=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1648, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values17___755[2]=((struct sType*)(__right_value708=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1648, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1648, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values17___755)));
        come_call_finalizer3(__right_value704,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value706,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value708,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_758=(struct list$1char$ph*)come_increment_ref_count((__list_values18___757[0]=((char*)(__right_value711=xsprintf("come_malloc"))),
__list_values18___757[1]=((char*)(__right_value712=xsprintf("come_debug"))),
__list_values18___757[2]=((char*)(__right_value713=xsprintf("come_gc"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1649, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values18___757)));
        (__right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value712 = come_decrement_ref_count2(__right_value712, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value713 = come_decrement_ref_count2(__right_value713, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_759=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1650, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_759,((void*)0));
        main_fun_760=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1652, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_753),(struct sType*)come_increment_ref_count(result_type_754),(struct list$1sType$ph*)come_increment_ref_count(param_types_756),(struct list$1char$ph*)come_increment_ref_count(param_names_758),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_759),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_753)),(struct sFun*)come_increment_ref_count(main_fun_760));
        (name_753 = come_decrement_ref_count2(name_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_756,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_758,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_759,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_760,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_761=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_762=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1661, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_763=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1662, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_764=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1663, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_765=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1664, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_766=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1665, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_761),(struct sType*)come_increment_ref_count(result_type_762),(struct list$1void$ph*)come_increment_ref_count(param_types_763),(struct list$1char$ph*)come_increment_ref_count(param_names_764),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_765),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_761)),(struct sFun*)come_increment_ref_count(main_fun_766));
        (name_761 = come_decrement_ref_count2(name_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_763,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_764,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_765,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_766,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_767=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_768=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1674, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_770=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___769[0]=((struct sType*)(__right_value741=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values19___769[1]=((struct sType*)(__right_value743=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values19___769[2]=((struct sType*)(__right_value745=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values19___769[3]=((struct sType*)(__right_value747=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1675, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values19___769)));
        come_call_finalizer3(__right_value741,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value743,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value745,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value747,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_772=(struct list$1char$ph*)come_increment_ref_count((__list_values20___771[0]=((char*)(__right_value750=__builtin_string("mem"))),
__list_values20___771[1]=((char*)(__right_value751=__builtin_string("sname"))),
__list_values20___771[2]=((char*)(__right_value752=__builtin_string("sline"))),
__list_values20___771[3]=((char*)(__right_value753=__builtin_string("id"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1676, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values20___771)));
        (__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_773=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1677, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_774=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1678, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_767),(struct sType*)come_increment_ref_count(result_type_768),(struct list$1sType$ph*)come_increment_ref_count(param_types_770),(struct list$1char$ph*)come_increment_ref_count(param_names_772),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_773),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_767)),(struct sFun*)come_increment_ref_count(main_fun_774));
        (name_767 = come_decrement_ref_count2(name_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_770,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_772,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_773,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_774,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_775=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_776=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1687, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_777=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1688, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_778=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1689, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_779=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1690, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_780=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1691, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_775),(struct sType*)come_increment_ref_count(result_type_776),(struct list$1void$ph*)come_increment_ref_count(param_types_777),(struct list$1char$ph*)come_increment_ref_count(param_names_778),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_779),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_775)),(struct sFun*)come_increment_ref_count(fun_780));
        (name_775 = come_decrement_ref_count2(name_775, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_776,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_777,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_778,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_779,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_780,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_781=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_782=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1700, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_783=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1701, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_784=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1702, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_785=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1703, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_786=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1704, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_781),(struct sType*)come_increment_ref_count(result_type_782),(struct list$1void$ph*)come_increment_ref_count(param_types_783),(struct list$1char$ph*)come_increment_ref_count(param_names_784),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_785),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_781)),(struct sFun*)come_increment_ref_count(fun_786));
        (name_781 = come_decrement_ref_count2(name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_782,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_783,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_784,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_785,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_786,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_676;
struct list$1sType$ph* __result344__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_676=0;    i_676<num_value;    i_676++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_676]));
    }
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value488 = (void*)0;
struct list_item$1sType$ph* litem_677;
struct sType* __dec_obj181;
void* __right_value489 = (void*)0;
struct list_item$1sType$ph* litem_678;
struct sType* __dec_obj182;
void* __right_value490 = (void*)0;
struct list_item$1sType$ph* litem_679;
struct sType* __dec_obj183;
struct list$1sType$ph* __result343__;
    if(    self->len==0) {
        litem_677=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value488=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1457, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_677->prev=((void*)0);
        litem_677->next=((void*)0);
        __dec_obj181=litem_677->item;
        litem_677->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_677;
        self->head=litem_677;
    }
    else if(    self->len==1) {
        litem_678=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value489=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1467, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_678->prev=self->head;
        litem_678->next=((void*)0);
        __dec_obj182=litem_678->item;
        litem_678->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_678;
        self->head->next=litem_678;
    }
    else {
        litem_679=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value490=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1477, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_679->prev=self->tail;
        litem_679->next=((void*)0);
        __dec_obj183=litem_679->item;
        litem_679->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_679;
        self->tail=litem_679;
    }
    self->len++;
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_680;
struct list_item$1sType$ph* prev_it_681;
    it_680=self->head;
    while(it_680!=((void*)0)) {
        prev_it_681=it_680;
        it_680=it_680->next;
        come_call_finalizer3(prev_it_681,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
struct sType* __dec_obj184;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj184=self->item;
            come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_682;
struct list_item$1sType$ph* prev_it_683;
    it_682=self->head;
    while(it_682!=((void*)0)) {
        prev_it_683=it_682;
        it_682=it_682->next;
        come_call_finalizer3(prev_it_683,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
void* __result_obj__=(void*)0;
struct list$1sType$ph* __result345__;
void* __right_value491 = (void*)0;
struct list$1sType$ph* result_684;
struct list$1sType$ph* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_684=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_684->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_684->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_684->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_684->it=self->it;
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_684;
    come_call_finalizer3(result_684,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_685;
    result_685=0;
    result_685+=int_get_hash_key(((int)self->head));
    result_685+=int_get_hash_key(((int)self->tail));
    result_685+=int_get_hash_key(((int)self->len));
    result_685+=int_get_hash_key(((int)self->it));
    return result_685;
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
void* __result_obj__=(void*)0;
int i_688;
struct list$1char$ph* __result347__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_688=0;    i_688<num_value;    i_688++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_688]));
    }
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result348__;
void* __right_value503 = (void*)0;
struct list$1char$ph* result_689;
struct list$1char$ph* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_689=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_689->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_689->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_689->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_689->it=self->it;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_689;
    come_call_finalizer3(result_689,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_690;
    result_690=0;
    result_690+=int_get_hash_key(((int)self->head));
    result_690+=int_get_hash_key(((int)self->tail));
    result_690+=int_get_hash_key(((int)self->len));
    result_690+=int_get_hash_key(((int)self->it));
    return result_690;
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
void* __result_obj__=(void*)0;
struct sFun* __result350__;
void* __right_value511 = (void*)0;
struct sFun* result_694;
void* __right_value512 = (void*)0;
char* __dec_obj185;
void* __right_value513 = (void*)0;
struct sType* __dec_obj186;
void* __right_value514 = (void*)0;
struct list$1void$ph* __dec_obj187;
void* __right_value515 = (void*)0;
struct list$1char$ph* __dec_obj188;
void* __right_value516 = (void*)0;
struct list$1char$ph* __dec_obj189;
void* __right_value517 = (void*)0;
struct sType* __dec_obj190;
void* __right_value521 = (void*)0;
struct sBlock* __dec_obj193;
void* __right_value522 = (void*)0;
struct buffer* __dec_obj194;
void* __right_value523 = (void*)0;
struct buffer* __dec_obj195;
void* __right_value524 = (void*)0;
struct buffer* __dec_obj196;
void* __right_value525 = (void*)0;
struct buffer* __dec_obj197;
void* __right_value526 = (void*)0;
char* __dec_obj198;
void* __right_value527 = (void*)0;
char* __dec_obj199;
struct sFun* __result353__;
    if(    self==(void*)0) {
        __result350__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    result_694=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj185=result_694->mName;
        result_694->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj186=result_694->mResultType;
        result_694->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj187=result_694->mParamTypes;
        result_694->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj187,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj188=result_694->mParamNames;
        result_694->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj188,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj189=result_694->mParamDefaultParametors;
        result_694->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj189,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj190=result_694->mLambdaType;
        result_694->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj193=result_694->mBlock;
        result_694->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj193,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj194=result_694->mSource;
        result_694->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj194,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj195=result_694->mSourceHead;
        result_694->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj195,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj196=result_694->mSourceHead2;
        result_694->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj197=result_694->mSourceDefer;
        result_694->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj197,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_694->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_694->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_694->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_694->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_694->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_694->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_694->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj198=result_694->mAttribute;
        result_694->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj199=result_694->mFunAttribute;
        result_694->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = result_694;
    come_call_finalizer3(result_694,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_693;
    result_693=0;
    result_693+=int_get_hash_key(((int)self->mName));
    result_693+=int_get_hash_key(((int)self->mResultType));
    result_693+=int_get_hash_key(((int)self->mParamTypes));
    result_693+=int_get_hash_key(((int)self->mParamNames));
    result_693+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_693+=int_get_hash_key(((int)self->mLambdaType));
    result_693+=int_get_hash_key(((int)self->mBlock));
    result_693+=int_get_hash_key(((int)self->mSource));
    result_693+=int_get_hash_key(((int)self->mSourceHead));
    result_693+=int_get_hash_key(((int)self->mSourceHead2));
    result_693+=int_get_hash_key(((int)self->mSourceDefer));
    result_693+=int_get_hash_key(((int)self->mStatic));
    result_693+=int_get_hash_key(((int)self->mInline));
    result_693+=int_get_hash_key(((int)self->mUniq));
    result_693+=int_get_hash_key(((int)self->mGenerate));
    result_693+=int_get_hash_key(((int)self->mExternal));
    result_693+=int_get_hash_key(((int)self->mVarArgs));
    result_693+=int_get_hash_key(((int)self->mNoResultType));
    result_693+=int_get_hash_key(((int)self->mAttribute));
    result_693+=int_get_hash_key(((int)self->mFunAttribute));
    return result_693;
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
void* __result_obj__=(void*)0;
struct sBlock* __result351__;
void* __right_value518 = (void*)0;
struct sBlock* result_695;
void* __right_value519 = (void*)0;
struct list$1sNode$ph* __dec_obj191;
void* __right_value520 = (void*)0;
struct sVarTable* __dec_obj192;
struct sBlock* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_695=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj191=result_695->mNodes;
        result_695->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj191,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj192=result_695->mVarTable;
        result_695->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj192,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_695->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_695;
    come_call_finalizer3(result_695,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_787;
_Bool is_type_name_flag_788;
int sline_789;
_Bool define_struct_nobody_790;
char* p_791;
int sline_792;
void* __right_value791 = (void*)0;
char* word_793;
_Bool define_function_pointer_result_function_794;
_Bool define_variable_between_brace_795;
char* p_796;
void* __right_value792 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_797=0;
char* fun_name_798=0;
_Bool err_799=0;
void* __right_value793 = (void*)0;
char* word_800;
_Bool define_function_flag_801;
char* p_802;
void* __right_value794 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_803=0;
char* fun_name_804=0;
_Bool err_805=0;
char* word_806;
void* __right_value795 = (void*)0;
char* __dec_obj202;
void* __right_value796 = (void*)0;
char* __dec_obj203;
char* __dec_obj204;
void* __right_value797 = (void*)0;
char* __dec_obj205;
_Bool define_variable_807;
char* p_808;
void* __right_value798 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* result_type_809=0;
char* fun_name_810=0;
_Bool err_811=0;
void* __right_value799 = (void*)0;
char* word_812;
void* __right_value800 = (void*)0;
char* word_813;
char* p_814;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
char* word_815;
void* __right_value804 = (void*)0;
char* __dec_obj206;
void* __right_value805 = (void*)0;
char* word_816;
void* __right_value806 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_c17_819=0;
char* Err_820=0;
void* __right_value807 = (void*)0;
char* word_821;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* node_822;
struct sNode* __result355__;
void* __right_value810 = (void*)0;
struct sNode* __result356__;
char* header_head_823;
void* __right_value811 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_824=0;
char* fun_name_825=0;
_Bool err_826=0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1void$ph* param_types_827;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct list$1char$ph* param_names_828;
void* __right_value816 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* param_type_829=0;
char* param_name_830=0;
_Bool err_831=0;
void* __right_value817 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_832=0;
char* Err_833=0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c19_838=0;
char* Err_839=0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct list$1void$ph* param_types2_840;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct list$1char$ph* param_names2_841;
void* __right_value828 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var26 = (void*)0;
struct sType* param_type_842=0;
char* param_name_843=0;
_Bool err_844=0;
void* __right_value829 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_845=0;
char* Err_846=0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_848=0;
char* Err_849=0;
char* header_tail_850;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sType* result_type2_851;
struct sType* __dec_obj210;
void* __right_value835 = (void*)0;
struct list$1void$ph* __dec_obj211;
void* __right_value836 = (void*)0;
struct list$1char$ph* __dec_obj212;
_Bool var_args_852;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct list$1char$ph* param_default_parametors_853;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sFun* fun_854;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sFun* fun2_855;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value852 = (void*)0;
struct sNode* __result360__;
void* __right_value853 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c22_857=0;
char* Err_858=0;
void* __right_value854 = (void*)0;
struct sNode* node_859;
struct sNode* __result361__;
void* __right_value855 = (void*)0;
struct sNode* node_860;
struct sNode* __result362__;
void* __right_value856 = (void*)0;
struct sNode* node_861;
char* source_tail_862;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct buffer* header_863;
struct sNode* __result363__;
void* __right_value859 = (void*)0;
char* buf2_864;
void* __right_value860 = (void*)0;
struct sNode* __result364__;
    info->in_top_level=(_Bool)1;
    source_head_787=info->p;
    is_type_name_flag_788=is_type_name(buf,info);
    sline_789=info->sline;
    define_struct_nobody_790=(_Bool)0;
    {
        p_791=info->p;
        sline_792=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_793=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_790=(_Bool)1;
                }
                (word_793 = come_decrement_ref_count2(word_793, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_792;
    }
    define_function_pointer_result_function_794=(_Bool)0;
    define_variable_between_brace_795=(_Bool)0;
    if(    is_type_name_flag_788) {
        p_796=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value792=backtrace_parse_type((_Bool)0,info)));
            result_type_797=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_798=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_799=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value792,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_794=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_800=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_800,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_795=(_Bool)1;
                            }
                        }
                        (word_800 = come_decrement_ref_count2(word_800, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_798 = come_decrement_ref_count2(fun_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_789;
    }
    define_function_flag_801=(_Bool)0;
    if(    is_type_name_flag_788&&!define_function_pointer_result_function_794&&charp_operator_not_equals(buf,"__typeof__")) {
        p_802=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value794=backtrace_parse_type((_Bool)0,info)));
            result_type_803=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_804=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_805=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value794,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_803,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_804 = come_decrement_ref_count2(fun_name_804, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_806=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj202=word_806;
                word_806=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_806,"extern")) {
                    __dec_obj203=word_806;
                    word_806=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj204=word_806;
                word_806=((void*)0);
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_806) {
                if(                is_type_name(word_806,info)) {
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
                        __dec_obj205=word_806;
                        word_806=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_806)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_788) {
                        define_function_flag_801=(_Bool)1;
                    }
                }
            }
            (word_806 = come_decrement_ref_count2(word_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_802;
        info->sline=sline_789;
    }
    define_variable_807=(_Bool)1;
    if(    is_type_name_flag_788&&!define_function_pointer_result_function_794) {
        p_808=info->p;
        info->p=head;
        if(        !is_type_name_flag_788) {
            define_variable_807=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value798=backtrace_parse_type((_Bool)0,info)));
            result_type_809=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            fun_name_810=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_811=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value798,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_812=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_807=(_Bool)1;
                            }
                        }
                        (word_812 = come_decrement_ref_count2(word_812, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_813=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_813,info)&&*info->p!=40) {
                            define_variable_807=(_Bool)1;
                        }
                    }
                    (word_813 = come_decrement_ref_count2(word_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_809,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_807=(_Bool)0;
        }
        else if(        define_variable_807) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_807=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_807=(_Bool)0;
            }
        }
        info->p=p_808;
        info->sline=sline_789;
    }
    else {
        define_variable_807=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_794) {
        p_814=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value801=parse_struct_attribute(info)));
            (__right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value802=parse_word(info)));
                (__right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_815=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj206=word_815;
                        word_815=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_815,"extends")) {
                            define_variable_807=(_Bool)0;
                        }
                    }
                    (word_815 = come_decrement_ref_count2(word_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_807=(_Bool)0;
        }
        else if(        define_variable_807) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_807=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_807=(_Bool)0;
            }
        }
        info->p=p_814;
        info->sline=sline_789;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_816=(char*)come_increment_ref_count(parse_word(info));
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
                    multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value806=err_msg(info,"unexpected source end")));
                    come_exception_var_c17_819=multiple_assign_var21->v1;
                    Err_820=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_820)?(puts(Err_820),exit(0)):(0));
                    come_call_finalizer3(__right_value806,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_820 = come_decrement_ref_count2(Err_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_821=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_821)));
                    (word_821 = come_decrement_ref_count2(word_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_822=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result355__ = gComeFunResultObject = __result_obj__ = node_822;
            ((node_822) ? node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (word_816 = come_decrement_ref_count2(word_816, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result355__;
            ((node_822) ? node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        (word_816 = come_decrement_ref_count2(word_816, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_790) {
    }
    else if(    define_variable_between_brace_795) {
        info->p=head;
        info->sline=sline_789;
        __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value810=parse_global_variable(info)));
        ((__right_value810) ? __right_value810 = come_decrement_ref_count2(__right_value810, ((struct sNode*)__right_value810)->finalize, ((struct sNode*)__right_value810)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    else if(    define_function_pointer_result_function_794) {
        header_head_823=info->p;
        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value811=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_824=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        fun_name_825=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_826=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value811,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_827=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2028, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            param_names_828=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2029, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value816=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_829=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                    param_name_830=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                    err_831=multiple_assign_var23->v3;
                    come_call_finalizer3(__right_value816,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_831) {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value817=err_msg(info,"parse_type is failed")));
                        come_exception_var_c18_832=multiple_assign_var24->v1;
                        Err_833=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_833)?(puts(Err_833),exit(0)):(0));
                        come_call_finalizer3(__right_value817,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_833 = come_decrement_ref_count2(Err_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1void$ph$p_push_back(param_types_827,(struct sType*)come_increment_ref_count(param_type_829));
                    static int num_function_pointer_result_var_name_a_837=0;
                    list$1char$ph$p_push_back(param_names_828,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_837)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value822=parse_word(info)));
                        (__right_value822 = come_decrement_ref_count2(__right_value822, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_830 = come_decrement_ref_count2(param_name_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value823=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c19_838=multiple_assign_var25->v1;
                        Err_839=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        ((Err_839)?(puts(Err_839),exit(0)):(0));
                        come_call_finalizer3(__right_value823,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_839 = come_decrement_ref_count2(Err_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_830 = come_decrement_ref_count2(param_name_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_840=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2075, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
                param_names2_841=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2076, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var26=((struct tuple3$3sType$phchar$phbool$*)(__right_value828=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_842=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
                        param_name_843=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                        err_844=multiple_assign_var26->v3;
                        come_call_finalizer3(__right_value828,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_844) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value829=err_msg(info,"parse_type is failed")));
                            come_exception_var_c20_845=multiple_assign_var27->v1;
                            Err_846=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_846)?(puts(Err_846),exit(0)):(0));
                            come_call_finalizer3(__right_value829,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_846 = come_decrement_ref_count2(Err_846, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1void$ph$p_push_back(param_types2_840,(struct sType*)come_increment_ref_count(param_type_842));
                        static int num_function_pointer_result_var_name_b_847=0;
                        list$1char$ph$p_push_back(param_names2_841,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_847)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value831=parse_word(info)));
                            (__right_value831 = come_decrement_ref_count2(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_842,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_843 = come_decrement_ref_count2(param_name_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value832=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c21_848=multiple_assign_var28->v1;
                            Err_849=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            ((Err_849)?(puts(Err_849),exit(0)):(0));
                            come_call_finalizer3(__right_value832,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_849 = come_decrement_ref_count2(Err_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_842,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_843 = come_decrement_ref_count2(param_name_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_850=info->p;
                result_type2_851=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2118, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj210=result_type2_851->mResultType;
                result_type2_851->mResultType=(struct sType*)come_increment_ref_count(result_type_824);
                come_call_finalizer3(__dec_obj210,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj211=result_type2_851->mParamTypes;
                result_type2_851->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types2_840));
                come_call_finalizer3(__dec_obj211,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj212=result_type2_851->mParamNames;
                result_type2_851->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_841));
                come_call_finalizer3(__dec_obj212,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_851->mVarArgs=(_Bool)0;
                result_type2_851->mStatic=(_Bool)0;
                var_args_852=(_Bool)0;
                param_default_parametors_853=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2128, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_854=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2130, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_825)),(struct sType*)come_increment_ref_count(result_type2_851),(struct list$1void$ph*)come_increment_ref_count(param_types_827),(struct list$1char$ph*)come_increment_ref_count(param_names_828),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_853),(_Bool)1,var_args_852,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_855=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value844=__builtin_string(fun_name_825)))));
                (__right_value844 = come_decrement_ref_count2(__right_value844, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                fun2_855==((void*)0)||fun2_855->mExternal) {
                    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_825)),(struct sFun*)come_increment_ref_count(fun_854));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2143, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value848=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2143, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_854),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result360__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value852=_inf_value2));
                come_call_finalizer3(param_types2_840,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_841,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_851,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_853,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_854,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_855,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_827,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_828,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_824,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_825 = come_decrement_ref_count2(fun_name_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value848,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((__right_value852) ? __right_value852 = come_decrement_ref_count2(__right_value852, ((struct sNode*)__right_value852)->finalize, ((struct sNode*)__right_value852)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                gComeFunResultObject = (void*)0;
                return __result360__;
                come_call_finalizer3(param_types2_840,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_841,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_851,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_853,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_854,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_855,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value853=err_msg(info,"require (")));
                come_exception_var_c22_857=multiple_assign_var29->v1;
                Err_858=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_858)?(puts(Err_858),exit(0)):(0));
                come_call_finalizer3(__right_value853,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_858 = come_decrement_ref_count2(Err_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_827,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_828,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_824,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_825 = come_decrement_ref_count2(fun_name_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_789;
        node_859=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result361__ = gComeFunResultObject = __result_obj__ = node_859;
        ((node_859) ? node_859 = come_decrement_ref_count2(node_859, ((struct sNode*)node_859)->finalize, ((struct sNode*)node_859)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result361__;
        ((node_859) ? node_859 = come_decrement_ref_count2(node_859, ((struct sNode*)node_859)->finalize, ((struct sNode*)node_859)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    define_function_flag_801) {
        info->p=head;
        info->sline=sline_789;
        node_860=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result362__ = gComeFunResultObject = __result_obj__ = node_860;
        ((node_860) ? node_860 = come_decrement_ref_count2(node_860, ((struct sNode*)node_860)->finalize, ((struct sNode*)node_860)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result362__;
        ((node_860) ? node_860 = come_decrement_ref_count2(node_860, ((struct sNode*)node_860)->finalize, ((struct sNode*)node_860)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    define_variable_807) {
        info->p=head;
        info->sline=sline_789;
        node_861=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_862=info->p;
        header_863=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2175, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_863,source_head_787,source_tail_862-source_head_787);
        __result363__ = gComeFunResultObject = __result_obj__ = node_861;
        ((node_861) ? node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(header_863,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result363__;
        ((node_861) ? node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(header_863,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_789;
    buf2_864=(char*)come_increment_ref_count(parse_word(info));
    __result364__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value860=top_level_v98(buf2_864,head,head_sline,info)));
    (buf2_864 = come_decrement_ref_count2(buf2_864, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value860) ? __right_value860 = come_decrement_ref_count2(__right_value860, ((struct sNode*)__right_value860)->finalize, ((struct sNode*)__right_value860)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
struct sType* __dec_obj200;
char* __dec_obj201;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj200=self->v1;
            come_call_finalizer3(__dec_obj200,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj201=self->v2;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list_item$1char$ph* it_817;
struct list_item$1char$ph* prev_it_818;
struct list$1char$ph* __result354__;
    it_817=self->head;
    while(it_817!=((void*)0)) {
        prev_it_818=it_817;
        it_817=it_817->next;
        come_call_finalizer3(prev_it_818,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result354__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value818 = (void*)0;
struct list_item$1void$ph* litem_834;
void* __dec_obj207;
void* __right_value819 = (void*)0;
struct list_item$1void$ph* litem_835;
void* __dec_obj208;
void* __right_value820 = (void*)0;
struct list_item$1void$ph* litem_836;
void* __dec_obj209;
struct list$1void$ph* __result357__;
    if(    self->len==0) {
        litem_834=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value818=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_834->prev=((void*)0);
        litem_834->next=((void*)0);
        __dec_obj207=litem_834->item;
        litem_834->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_834;
        self->head=litem_834;
    }
    else if(    self->len==1) {
        litem_835=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value819=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_835->prev=self->head;
        litem_835->next=((void*)0);
        __dec_obj208=litem_835->item;
        litem_835->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_835;
        self->head->next=litem_835;
    }
    else {
        litem_836=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value820=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_836->prev=self->tail;
        litem_836->next=((void*)0);
        __dec_obj209=litem_836->item;
        litem_836->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_836;
        self->tail=litem_836;
    }
    self->len++;
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result358__;
void* __right_value849 = (void*)0;
struct sFunNode* result_856;
void* __right_value850 = (void*)0;
char* __dec_obj213;
void* __right_value851 = (void*)0;
struct sFun* __dec_obj214;
struct sFunNode* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_856=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_856->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj213=result_856->sname;
        result_856->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_856->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj214=result_856->mFun;
        result_856->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj214,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_856;
    come_call_finalizer3(result_856,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_865;
int caller_line_866;
char* caller_sname_867;
_Bool comma_instead_of_semicolon_868;
char* last_code_869;
char* __dec_obj215;
char* last_code2_870;
char* __dec_obj216;
void* __right_value861 = (void*)0;
char* sname_top_871;
int sline_top_872;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sFun* funX_873;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct tuple2$2char$phbool$* __result368__;
void* __right_value868 = (void*)0;
struct sType* result_type_876;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct list$1void$ph* param_types_877;
struct list$1void$ph* o2_saved_878;
struct sType* it_879;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sType* param_type_880;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct list$1char$ph* param_names_881;
void* __right_value875 = (void*)0;
struct list$1char$ph* param_default_parametors_882;
char* p_883;
int sline_884;
char* sname_885;
char* head_886;
struct buffer* source_887;
void* __right_value876 = (void*)0;
struct buffer* __dec_obj221;
struct sType* generics_type_saved_888;
void* __right_value877 = (void*)0;
struct sType* __dec_obj222;
struct list$1char$ph* method_generics_type_names_889;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1char$ph* __dec_obj223;
struct list$1char$ph* o2_saved_890;
char* it_891;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct list$1char$ph* __dec_obj224;
char* __dec_obj225;
void* __right_value882 = (void*)0;
struct sBlock* block_892;
struct buffer* __dec_obj226;
char* __dec_obj227;
_Bool var_args_893;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct sFun* fun_894;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value890 = (void*)0;
struct sNode* node_895;
_Bool in_generics_fun_896;
_Bool Value_897;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct tuple2$2char$phbool$* __result369__;
struct sType* __dec_obj228;
struct list$1char$ph* __dec_obj229;
void* __right_value894 = (void*)0;
char* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct tuple2$2char$phbool$* __result370__;
    caller_fun_865=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_866=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_867=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_868=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_869=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj215=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_870=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj216=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_871=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_872=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_873=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value862=__builtin_string(fun_name)))));
    (__right_value862 = come_decrement_ref_count2(__right_value862, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    if(    funX_873) {
        __result368__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2char$phbool$*)(__right_value867=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2214, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_869 = come_decrement_ref_count2(last_code_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_870 = come_decrement_ref_count2(last_code2_870, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_871 = come_decrement_ref_count2(sname_top_871, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_873,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value867,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_type_876=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_877=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2220, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_878=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_879=((struct sType*)list$1void$ph$p_begin((o2_saved_878)));    !list$1void$ph$p_end((o2_saved_878));    it_879=((struct sType*)list$1void$ph$p_next((o2_saved_878)))    ){
        param_type_880=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value871=come_call_cloner(sType_clone, it_879))),generics_type,info));
        come_call_finalizer3(__right_value871,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1void$ph$p_add(param_types_877,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_880)));
        come_call_finalizer3(param_type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_878,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_881=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_882=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_883=info->p;
    sline_884=info->sline;
    sname_885=(char*)come_increment_ref_count(info->sname);
    head_886=info->head;
    source_887=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj221=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj221,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_888=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj222=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj222,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_889=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj223=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2248, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj223,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_890=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_891=list$1char$ph$p_begin((o2_saved_890));    !list$1char$ph$p_end((o2_saved_890));    it_891=list$1char$ph$p_next((o2_saved_890))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_891)));
    }
    come_call_finalizer3(o2_saved_890,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj224=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj224,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj225=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_892=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_886;
    __dec_obj226=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_887);
    come_call_finalizer3(__dec_obj226,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_883;
    info->sline=sline_884;
    __dec_obj227=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_885);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_876->mInline=(_Bool)0;
    result_type_876->mStatic=(_Bool)0;
    result_type_876->mUniq=(_Bool)0;
    var_args_893=generics_fun->mVarArgs;
    fun_894=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2272, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_876),(struct list$1void$ph*)come_increment_ref_count(param_types_877),(struct list$1char$ph*)come_increment_ref_count(param_names_881),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_882),(_Bool)0,var_args_893,(struct sBlock*)come_increment_ref_count(block_892),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_894));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2279, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value889=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2279, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_894),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_895=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value889,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_896=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_897=node_compile(node_895,info);
    if(    !Value_897) {
        __result369__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2char$phbool$*)(__right_value893=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2284, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_869 = come_decrement_ref_count2(last_code_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_870 = come_decrement_ref_count2(last_code2_870, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_871 = come_decrement_ref_count2(sname_top_871, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_873,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_876,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_877,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_881,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_882,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_885 = come_decrement_ref_count2(sname_885, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_888,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_889,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_892,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_894,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_895) ? node_895 = come_decrement_ref_count2(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value893,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_896;
    __dec_obj228=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_888);
    come_call_finalizer3(__dec_obj228,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj229=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_889);
    come_call_finalizer3(__dec_obj229,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj230=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_871));
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_872;
    __dec_obj231=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_869);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj232=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_870);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_865;
    info->caller_line=caller_line_866;
    info->caller_sname=caller_sname_867;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_868;
    __result370__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2char$phbool$*)(__right_value897=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2304, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_869 = come_decrement_ref_count2(last_code_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_870 = come_decrement_ref_count2(last_code2_870, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_871 = come_decrement_ref_count2(sname_top_871, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_873,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_876,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_877,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_881,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_882,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_885 = come_decrement_ref_count2(sname_885, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_888,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_889,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_892,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_894,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_895) ? node_895 = come_decrement_ref_count2(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value897,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
char* __dec_obj217;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj217=self->v1;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phbool$* __result365__;
void* __right_value864 = (void*)0;
struct tuple2$2char$phbool$* result_874;
void* __right_value865 = (void*)0;
char* __dec_obj218;
struct tuple2$2char$phbool$* __result366__;
    if(    self==(void*)0) {
        __result365__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_874=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj218=result_874->v1;
        result_874->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_874->v2=self->v2;
    }
    __result366__ = gComeFunResultObject = __result_obj__ = result_874;
    come_call_finalizer3(result_874,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_875;
    result_875=0;
    result_875+=int_get_hash_key(((int)self->v1));
    result_875+=int_get_hash_key(((int)self->v2));
    return result_875;
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
void* __result_obj__=(void*)0;
char* __dec_obj219;
struct tuple2$2char$phbool$* __result367__;
    __dec_obj219=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
char* __dec_obj220;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj220=self->v1;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_898;
int caller_line_899;
char* caller_sname_900;
_Bool comma_instead_of_semicolon_901;
char* last_code_902;
char* __dec_obj233;
char* last_code2_903;
char* __dec_obj234;
void* __right_value898 = (void*)0;
char* sname_top_904;
int sline_top_905;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sFun* funX_906;
_Bool __result371__;
void* __right_value901 = (void*)0;
struct sType* result_type_907;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1void$ph* param_types_908;
struct list$1void$ph* o2_saved_909;
struct sType* it_910;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sType* param_type_911;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1char$ph* param_names_912;
void* __right_value908 = (void*)0;
struct list$1char$ph* param_default_parametors_913;
char* p_914;
int sline_915;
char* sname_916;
char* head_917;
struct buffer* source_918;
void* __right_value909 = (void*)0;
struct buffer* __dec_obj235;
struct list$1char$ph* method_generics_type_names_919;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct list$1char$ph* __dec_obj236;
struct list$1char$ph* o2_saved_920;
char* it_921;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct list$1char$ph* __dec_obj237;
char* __dec_obj238;
void* __right_value914 = (void*)0;
struct sBlock* block_922;
struct buffer* __dec_obj239;
char* __dec_obj240;
_Bool generate__923;
_Bool var_args_924;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sFun* fun_925;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value923 = (void*)0;
struct sNode* node_926;
_Bool Value_927;
void* __if_result__1_928 = (void*)0;
_Bool __result372__;
struct list$1char$ph* __dec_obj241;
void* __right_value924 = (void*)0;
char* __dec_obj242;
char* __dec_obj243;
char* __dec_obj244;
_Bool __result373__;
    caller_fun_898=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_899=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_900=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_901=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_902=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj233=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_903=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj234=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_904=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_905=info->sline;
    funX_906=((struct sFun*)((void*)(__right_value900=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value899=__builtin_string(fun_name)))))));
    (__right_value899 = come_decrement_ref_count2(__right_value899, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value900,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    funX_906) {
        __result371__ = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_902 = come_decrement_ref_count2(last_code_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_903 = come_decrement_ref_count2(last_code2_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_904 = come_decrement_ref_count2(sname_top_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result371__;
    }
    result_type_907=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_908=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2333, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_909=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_910=((struct sType*)list$1void$ph$p_begin((o2_saved_909)));    !list$1void$ph$p_end((o2_saved_909));    it_910=((struct sType*)list$1void$ph$p_next((o2_saved_909)))    ){
        param_type_911=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value904=come_call_cloner(sType_clone, it_910))),info));
        come_call_finalizer3(__right_value904,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_add(param_types_908,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_911)));
        come_call_finalizer3(param_type_911,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_909,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_912=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_913=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_914=info->p;
    sline_915=info->sline;
    sname_916=(char*)come_increment_ref_count(info->sname);
    head_917=info->head;
    source_918=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj235=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj235,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_919=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj236=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2355, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj236,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_920=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_921=list$1char$ph$p_begin((o2_saved_920));    !list$1char$ph$p_end((o2_saved_920));    it_921=list$1char$ph$p_next((o2_saved_920))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_921)));
    }
    come_call_finalizer3(o2_saved_920,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj237=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj237,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_922=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_917;
    __dec_obj239=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_918);
    come_call_finalizer3(__dec_obj239,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_914;
    info->sline=sline_915;
    __dec_obj240=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_916);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_907->mInline=(_Bool)0;
    result_type_907->mStatic=(_Bool)0;
    result_type_907->mUniq=(_Bool)0;
    generate__923=(_Bool)0;
    if(    result_type_907->mGenerate) {
        result_type_907->mGenerate=(_Bool)0;
        generate__923=(_Bool)1;
    }
    var_args_924=generics_fun->mVarArgs;
    fun_925=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2385, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_907),(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types_908)),(struct list$1char$ph*)come_increment_ref_count(param_names_912),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_913),(_Bool)0,var_args_924,(struct sBlock*)come_increment_ref_count(block_922),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__923,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_925));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2392, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value922=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2392, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_925),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_926=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value922,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_927=node_compile(node_926,info);
    if(    !Value_927) {
        __result372__ = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_902 = come_decrement_ref_count2(last_code_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_903 = come_decrement_ref_count2(last_code2_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_904 = come_decrement_ref_count2(sname_top_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_907,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_908,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_912,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_913,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_916 = come_decrement_ref_count2(sname_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_919,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_922,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_925,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_926) ? node_926 = come_decrement_ref_count2(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result372__;
    }
    else {
        __if_result__1_928=(void*)(Value_927);
;
    }
    __dec_obj241=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_919);
    come_call_finalizer3(__dec_obj241,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj242=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_904));
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_905;
    __dec_obj243=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_902);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_903);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_898;
    info->caller_line=caller_line_899;
    info->caller_sname=caller_sname_900;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_901;
    __result373__ = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_902 = come_decrement_ref_count2(last_code_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_903 = come_decrement_ref_count2(last_code2_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_904 = come_decrement_ref_count2(sname_top_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_907,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_908,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_912,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_913,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_916 = come_decrement_ref_count2(sname_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_919,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_922,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_925,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_926) ? node_926 = come_decrement_ref_count2(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    return __result373__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_929;
char* source_head_930;
void* __right_value925 = (void*)0;
char* attribute_931;
struct sType* result_type_932;
char* var_name_933;
_Bool constructor__934;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sType* __dec_obj245;
void* __right_value928 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* result_type2_935=0;
char* var_name2_936=0;
_Bool err_937=0;
struct sType* __dec_obj246;
char* __dec_obj247;
_Bool method_definition_938;
char* p_939;
int sline_940;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct buffer* buf2_941;
char* fun_name_942;
char* base_fun_name_943;
void* __right_value931 = (void*)0;
char* __dec_obj248;
void* __right_value932 = (void*)0;
char* __dec_obj249;
void* __right_value933 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* obj_type_944=0;
char* name_945=0;
_Bool err_946=0;
void* __right_value934 = (void*)0;
char* __dec_obj250;
void* __right_value935 = (void*)0;
char* __dec_obj251;
void* __right_value936 = (void*)0;
char* __dec_obj252;
void* __right_value937 = (void*)0;
char* __dec_obj253;
void* __right_value938 = (void*)0;
char* __dec_obj254;
void* __right_value939 = (void*)0;
char* __dec_obj255;
void* __right_value940 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var32 = (void*)0;
struct list$1void$ph* param_types_947=0;
struct list$1char$ph* param_names_948=0;
struct list$1char$ph* param_default_parametors_949=0;
_Bool var_args_950=0;
char* header_tail_951;
int version_952;
int n_953;
_Bool in_top_level_954;
void* __right_value941 = (void*)0;
struct sBlock* block_955;
void* __right_value942 = (void*)0;
char* fun_name_957;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sFun* fun_958;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sFun* fun2_959;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value955 = (void*)0;
struct sNode* __result376__;
void* __right_value956 = (void*)0;
char* none_generics_name_961;
void* __right_value957 = (void*)0;
char* generics_sname_962;
int generics_sline_963;
void* __right_value958 = (void*)0;
char* block_964;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sGenericsFun* fun_967;
void* __right_value976 = (void*)0;
char* fun_name3_968;
void* __right_value977 = (void*)0;
struct sNode* __result379__;
void* __right_value978 = (void*)0;
char* generics_sname_969;
int generics_sline_970;
void* __right_value979 = (void*)0;
char* block_971;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sGenericsFun* fun_972;
void* __right_value986 = (void*)0;
char* fun_name3_973;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* __result380__;
char* source_tail_974;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct buffer* header_975;
void* __right_value991 = (void*)0;
char* name_976;
void* __right_value992 = (void*)0;
char* name_977;
int i_978;
void* __right_value993 = (void*)0;
struct sType* param_type_979;
void* __right_value994 = (void*)0;
char* param_name_980;
void* __right_value995 = (void*)0;
char* default_parametor_981;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
char* impl_name_982;
void* __right_value999 = (void*)0;
char* result_type_name_983;
void* __right_value1000 = (void*)0;
char* impl_name_984;
void* __right_value1001 = (void*)0;
char* result_type_name_985;
int i_986;
void* __right_value1002 = (void*)0;
struct sType* param_type_987;
void* __right_value1003 = (void*)0;
char* param_name_988;
void* __right_value1004 = (void*)0;
char* default_parametor_989;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
char* new_fun_name_990;
void* __right_value1009 = (void*)0;
char* id_991;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
char* id_992;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sBlock* block_993;
_Bool static_fun_994;
_Bool inline_fun_995;
_Bool uniq_fun_996;
_Bool generate_fun_997;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
char* new_fun_name_998;
void* __right_value1016 = (void*)0;
char* __dec_obj270;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sFun* fun_999;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct sFun* fun2_1000;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1028 = (void*)0;
struct sNode* __result381__;
void* __right_value1029 = (void*)0;
char* new_fun_name_1001;
void* __right_value1030 = (void*)0;
char* __dec_obj271;
char* source_tail_1002;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct buffer* header_1003;
_Bool result_type_static_1004;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sFun* fun_1005;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct sFun* fun2_1006;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
char* id_1007;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1044 = (void*)0;
struct sNode* __result382__;
void* __right_value1045 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_1008=0;
char* fun_attribute_1009=0;
void* __right_value1046 = (void*)0;
char* __dec_obj272;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct buffer* header_1010;
char* source_tail_1011;
_Bool result_type_static_1012;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct sFun* fun_1013;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct sFun* fun2_1014;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
char* id_1015;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1059 = (void*)0;
struct sNode* __result383__;
void* __right_value1060 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c23_1016=0;
char* Err_1017=0;
struct sNode* __result384__;
fun_name_942 = (void*)0;
    header_head_929=info->p;
    source_head_930=info->p;
    attribute_931=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_932=((void*)0);
    var_name_933=((void*)0);
    constructor__934=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value926=parse_word(info)));
        (__right_value926 = come_decrement_ref_count2(__right_value926, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        __dec_obj245=result_type_932;
        result_type_932=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj245,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_932->mHeap=(_Bool)1;
        constructor__934=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value928=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_935=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        var_name2_936=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_937=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value928,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj246=result_type_932;
        result_type_932=(struct sType*)come_increment_ref_count(result_type2_935);
        come_call_finalizer3(__dec_obj246,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj247=var_name_933;
        var_name_933=(char*)come_increment_ref_count(var_name2_936);
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_937) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_935,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_936 = come_decrement_ref_count2(var_name2_936, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_938=(_Bool)0;
    {
        p_939=info->p;
        sline_940=info->sline;
        buf2_941=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2458, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_941,*info->p);
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
        if(        buffer_length(buf2_941)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_938=(_Bool)1;
        }
        info->p=p_939;
        info->sline=sline_940;
        come_call_finalizer3(buf2_941,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_943=((void*)0);
    if(    constructor__934) {
        __dec_obj248=base_fun_name_943;
        base_fun_name_943=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj249=fun_name_942;
        fun_name_942=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_943,info,(_Bool)1));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_938) {
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value933=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_944=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_945=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_946=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value933,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_946) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj250=base_fun_name_943;
        base_fun_name_943=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj251=fun_name_942;
        fun_name_942=(char*)come_increment_ref_count(create_method_name(obj_type_944,(_Bool)0,base_fun_name_943,info,(_Bool)1));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_944,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_945 = come_decrement_ref_count2(name_945, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj252=base_fun_name_943;
        base_fun_name_943=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj253=fun_name_942;
        fun_name_942=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_943,info,(_Bool)1));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj254=fun_name_942;
        fun_name_942=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj255=base_fun_name_943;
        base_fun_name_943=(char*)come_increment_ref_count(__builtin_string(fun_name_942));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_943,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var32=((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value940=parse_params(info,constructor__934)));
    param_types_947=(struct list$1void$ph*)come_increment_ref_count(multiple_assign_var32->v1);
    param_names_948=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v2);
    param_default_parametors_949=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v3);
    var_args_950=multiple_assign_var32->v4;
    come_call_finalizer3(__right_value940,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_951=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_943,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_952=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_953=0;
        while(xisdigit(*info->p)) {
            n_953=n_953*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_952=n_953;
    }
    in_top_level_954=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_943,"lambda")) {
        block_955=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_956=0;
        lambda_num_956++;
        fun_name_957=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_956));
        result_type_932->mInline=(_Bool)0;
        result_type_932->mStatic=(_Bool)0;
        result_type_932->mUniq=(_Bool)0;
        result_type_932->mGenerate=(_Bool)0;
        fun_958=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2556, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_957)),(struct sType*)come_increment_ref_count(result_type_932),(struct list$1void$ph*)come_increment_ref_count(param_types_947),(struct list$1char$ph*)come_increment_ref_count(param_names_948),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_949),(_Bool)0,var_args_950,(struct sBlock*)come_increment_ref_count(block_955),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_959=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value948=__builtin_string(fun_name_957)))));
        (__right_value948 = come_decrement_ref_count2(__right_value948, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_959==((void*)0)||fun2_959->mExternal) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_957)),(struct sFun*)come_increment_ref_count(fun_958));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2566, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value952=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2566, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_958,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value955=_inf_value5));
        come_call_finalizer3(block_955,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_957 = come_decrement_ref_count2(fun_name_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_931 = come_decrement_ref_count2(attribute_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_933 = come_decrement_ref_count2(var_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_942 = come_decrement_ref_count2(fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_943 = come_decrement_ref_count2(base_fun_name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_947,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value952,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value955) ? __right_value955 = come_decrement_ref_count2(__right_value955, ((struct sNode*)__right_value955)->finalize, ((struct sNode*)__right_value955)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result376__;
        come_call_finalizer3(block_955,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_957 = come_decrement_ref_count2(fun_name_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_961=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_962=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_963=info->sline;
        block_964=(char*)come_increment_ref_count(skip_block(info));
        fun_967=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2576, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value971=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value972=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sType*)come_increment_ref_count(result_type_932),(struct list$1void$ph*)come_increment_ref_count(param_types_947),(struct list$1char$ph*)come_increment_ref_count(param_names_948),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_949),var_args_950,(char*)come_increment_ref_count(block_964),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_962)),generics_sline_963));
        come_call_finalizer3(__right_value971,list$1char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value972,list$1char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_968=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_961,base_fun_name_943));
        map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_968)),(struct sGenericsFun*)come_increment_ref_count(fun_967));
        __result379__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        (none_generics_name_961 = come_decrement_ref_count2(none_generics_name_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_962 = come_decrement_ref_count2(generics_sname_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_964 = come_decrement_ref_count2(block_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_967,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_968 = come_decrement_ref_count2(fun_name3_968, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_931 = come_decrement_ref_count2(attribute_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_933 = come_decrement_ref_count2(var_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_942 = come_decrement_ref_count2(fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_943 = come_decrement_ref_count2(base_fun_name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_947,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result379__;
        (none_generics_name_961 = come_decrement_ref_count2(none_generics_name_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_962 = come_decrement_ref_count2(generics_sname_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_964 = come_decrement_ref_count2(block_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_967,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_968 = come_decrement_ref_count2(fun_name3_968, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_969=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_970=info->sline;
        block_971=(char*)come_increment_ref_count(skip_block(info));
        fun_972=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2590, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value981=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value982=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sType*)come_increment_ref_count(result_type_932),(struct list$1void$ph*)come_increment_ref_count(param_types_947),(struct list$1char$ph*)come_increment_ref_count(param_names_948),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_949),var_args_950,(char*)come_increment_ref_count(block_971),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_969)),generics_sline_970));
        come_call_finalizer3(__right_value981,list$1char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value982,list$1char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_973=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_943));
        if(        method_definition_938) {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sGenericsFun*)come_increment_ref_count(fun_972));
        }
        else {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_973)),(struct sGenericsFun*)come_increment_ref_count(fun_972));
        }
        __result380__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        (generics_sname_969 = come_decrement_ref_count2(generics_sname_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_971 = come_decrement_ref_count2(block_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_972,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_973 = come_decrement_ref_count2(fun_name3_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_931 = come_decrement_ref_count2(attribute_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_933 = come_decrement_ref_count2(var_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_942 = come_decrement_ref_count2(fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_943 = come_decrement_ref_count2(base_fun_name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_947,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result380__;
        (generics_sname_969 = come_decrement_ref_count2(generics_sname_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_971 = come_decrement_ref_count2(block_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_972,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_973 = come_decrement_ref_count2(fun_name3_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    *info->p==123) {
        source_tail_974=info->p-1;
        header_975=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2606, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__934) {
            if(            list$1void$ph$p_length(param_types_947)==1) {
                name_976=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_975,"extern %s*%% %s*::initialize(%s*%% self);\n",name_976,name_976,name_976);
                (name_976 = come_decrement_ref_count2(name_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                name_977=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_975,"extern %s*%% %s*::initialize(%s*%% self, ",name_977,name_977,name_977);
                for(                i_978=1;                i_978<list$1void$ph$p_length(param_types_947);                i_978++                ){
                    param_type_979=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_947,i_978));
                    param_name_980=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_948,i_978));
                    default_parametor_981=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_949,i_978));
                    if(                    default_parametor_981) {
                        buffer_append_format(header_975,"extern %s %s=%s",((char*)(__right_value996=make_come_type_name_string_no_solved(param_type_979,(_Bool)0,info))),param_name_980,default_parametor_981);
                        (__right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    else {
                        buffer_append_format(header_975,"extern %s %s",((char*)(__right_value997=make_come_type_name_string_no_solved(param_type_979,(_Bool)0,info))),param_name_980);
                        (__right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    if(                    i_978!=list$1void$ph$p_length(param_types_947)-1) {
                        buffer_append_str(header_975,",");
                    }
                    come_call_finalizer3(param_type_979,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_980 = come_decrement_ref_count2(param_name_980, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_981 = come_decrement_ref_count2(default_parametor_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_975,");\n");
                (name_977 = come_decrement_ref_count2(name_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1void$ph$p_length(param_types_947)==1) {
                impl_name_982=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_983=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_932,(_Bool)0,info));
                buffer_append_format(header_975,"extern %s %s*::%s(%s* self);\n",result_type_name_983,impl_name_982,base_fun_name_943,impl_name_982);
                (impl_name_982 = come_decrement_ref_count2(impl_name_982, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_983 = come_decrement_ref_count2(result_type_name_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                impl_name_984=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_985=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_932,(_Bool)0,info));
                buffer_append_format(header_975,"extern %s %s*::%s(%s* self, ",result_type_name_985,impl_name_984,base_fun_name_943,impl_name_984);
                for(                i_986=1;                i_986<list$1void$ph$p_length(param_types_947);                i_986++                ){
                    param_type_987=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_947,i_986));
                    param_name_988=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_948,i_986));
                    default_parametor_989=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_949,i_986));
                    if(                    default_parametor_989) {
                        buffer_append_format(header_975,"extern %s %s=%s",((char*)(__right_value1005=make_come_type_name_string_no_solved(param_type_987,(_Bool)0,info))),param_name_988,default_parametor_989);
                        (__right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    else {
                        buffer_append_format(header_975,"extern %s %s",((char*)(__right_value1006=make_come_type_name_string_no_solved(param_type_987,(_Bool)0,info))),param_name_988);
                        (__right_value1006 = come_decrement_ref_count2(__right_value1006, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    if(                    i_986!=list$1void$ph$p_length(param_types_947)-1) {
                        buffer_append_str(header_975,",");
                    }
                    come_call_finalizer3(param_type_987,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_988 = come_decrement_ref_count2(param_name_988, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_989 = come_decrement_ref_count2(default_parametor_989, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_975,");\n");
                (impl_name_984 = come_decrement_ref_count2(impl_name_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_985 = come_decrement_ref_count2(result_type_name_985, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append(header_975,source_head_930,source_tail_974-source_head_930);
            buffer_append_str(header_975,";\n");
        }
        if(        !result_type_932->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_952>0) {
                    new_fun_name_990=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1007=__builtin_string(fun_name_942))),version_952));
                    (__right_value1007 = come_decrement_ref_count2(__right_value1007, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    id_991=(char*)come_increment_ref_count(__builtin_string(new_fun_name_990));
                    add_come_code_at_come_header(info,id_991,"%s",((char*)(__right_value1010=buffer_to_string(header_975))));
                    (__right_value1010 = come_decrement_ref_count2(__right_value1010, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (new_fun_name_990 = come_decrement_ref_count2(new_fun_name_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_991 = come_decrement_ref_count2(id_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    id_992=(char*)come_increment_ref_count(__builtin_string(fun_name_942));
                    add_come_code_at_come_header(info,id_992,"%s",((char*)(__right_value1012=buffer_to_string(header_975))));
                    (__right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (id_992 = come_decrement_ref_count2(id_992, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        block_993=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__934,(_Bool)1));
        static_fun_994=(_Bool)0;
        if(        result_type_932->mStatic) {
            result_type_932->mStatic=(_Bool)0;
            result_type_932->mUniq=(_Bool)0;
            static_fun_994=(_Bool)1;
        }
        inline_fun_995=(_Bool)0;
        if(        result_type_932->mInline) {
            result_type_932->mInline=(_Bool)0;
            result_type_932->mUniq=(_Bool)0;
            inline_fun_995=(_Bool)1;
        }
        uniq_fun_996=(_Bool)0;
        if(        result_type_932->mUniq) {
            result_type_932->mUniq=(_Bool)0;
            result_type_932->mInline=(_Bool)0;
            result_type_932->mStatic=(_Bool)0;
            uniq_fun_996=(_Bool)1;
        }
        generate_fun_997=(_Bool)0;
        if(        result_type_932->mUniq) {
            result_type_932->mUniq=(_Bool)0;
            result_type_932->mInline=(_Bool)0;
            result_type_932->mStatic=(_Bool)0;
            generate_fun_997=(_Bool)1;
        }
        if(        version_952>0) {
            new_fun_name_998=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1014=__builtin_string(fun_name_942))),version_952));
            (__right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            __dec_obj270=fun_name_942;
            fun_name_942=(char*)come_increment_ref_count(__builtin_string(new_fun_name_998));
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_998 = come_decrement_ref_count2(new_fun_name_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_999=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2724, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sType*)come_increment_ref_count(result_type_932),(struct list$1void$ph*)come_increment_ref_count(param_types_947),(struct list$1char$ph*)come_increment_ref_count(param_names_948),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_949),(_Bool)0,var_args_950,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_993)),static_fun_994,info,inline_fun_995,uniq_fun_996,generate_fun_997,(char*)come_increment_ref_count(attribute_931),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sFun*)come_increment_ref_count(fun_999));
        }
        else {
            fun2_1000=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1023=__builtin_string(fun_name_942)))));
            (__right_value1023 = come_decrement_ref_count2(__right_value1023, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_1000==((void*)0)||fun2_1000->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sFun*)come_increment_ref_count(fun_999));
            }
            come_call_finalizer3(fun2_1000,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2742, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1027=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2742, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_999),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1028=_inf_value6));
        come_call_finalizer3(header_975,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_993,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_999,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_931 = come_decrement_ref_count2(attribute_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_933 = come_decrement_ref_count2(var_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_942 = come_decrement_ref_count2(fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_943 = come_decrement_ref_count2(base_fun_name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_947,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1027,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value1028) ? __right_value1028 = come_decrement_ref_count2(__right_value1028, ((struct sNode*)__right_value1028)->finalize, ((struct sNode*)__right_value1028)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result381__;
        come_call_finalizer3(header_975,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_993,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_999,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_952>0) {
            new_fun_name_1001=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_942,version_952));
            __dec_obj271=fun_name_942;
            fun_name_942=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1001));
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1001 = come_decrement_ref_count2(new_fun_name_1001, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_1002=info->p;
            header_1003=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2755, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_1003,source_head_930,source_tail_1002-source_head_930);
            skip_spaces_and_lf(info);
            result_type_static_1004=result_type_932->mStatic;
            result_type_932->mStatic=(_Bool)0;
            result_type_932->mUniq=(_Bool)0;
            result_type_932->mInline=(_Bool)0;
            result_type_932->mGenerate=(_Bool)0;
            fun_1005=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2766, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sType*)come_increment_ref_count(result_type_932),(struct list$1void$ph*)come_increment_ref_count(param_types_947),(struct list$1char$ph*)come_increment_ref_count(param_names_948),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_949),(_Bool)1,var_args_950,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_931),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_1006=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1037=__builtin_string(fun_name_942)))));
            (__right_value1037 = come_decrement_ref_count2(__right_value1037, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_1006==((void*)0)||fun2_1006->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sFun*)come_increment_ref_count(fun_1005));
            }
            if(            !result_type_static_1004) {
                if(                !info->no_output_come_code) {
                    id_1007=(char*)come_increment_ref_count(__builtin_string(fun_name_942));
                    add_come_code_at_come_header(info,id_1007,"%s",((char*)(__right_value1041=buffer_to_string(header_1003))));
                    (__right_value1041 = come_decrement_ref_count2(__right_value1041, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (id_1007 = come_decrement_ref_count2(id_1007, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2786, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1043=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2786, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1005),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1044=_inf_value7));
            come_call_finalizer3(header_1003,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1005,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1006,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_931 = come_decrement_ref_count2(attribute_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_933 = come_decrement_ref_count2(var_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_942 = come_decrement_ref_count2(fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_943 = come_decrement_ref_count2(base_fun_name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_947,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1043,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value1044) ? __right_value1044 = come_decrement_ref_count2(__right_value1044, ((struct sNode*)__right_value1044)->finalize, ((struct sNode*)__right_value1044)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result382__;
            come_call_finalizer3(header_1003,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1005,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1006,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value1045=parse_function_attribute(info)));
            asm_fun_1008=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute_1009=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value1045,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_1008,"")) {
                __dec_obj272=fun_name_942;
                fun_name_942=(char*)come_increment_ref_count(__builtin_string(asm_fun_1008));
                __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_1010=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2795, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_1011=info->p;
                buffer_append(header_1010,source_head_930,source_tail_1011-source_head_930);
                skip_spaces_and_lf(info);
            }
            result_type_static_1012=result_type_932->mStatic;
            result_type_932->mStatic=(_Bool)0;
            result_type_932->mUniq=(_Bool)0;
            result_type_932->mInline=(_Bool)0;
            result_type_932->mGenerate=(_Bool)0;
            fun_1013=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2809, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sType*)come_increment_ref_count(result_type_932),(struct list$1void$ph*)come_increment_ref_count(param_types_947),(struct list$1char$ph*)come_increment_ref_count(param_names_948),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_949),(_Bool)1,var_args_950,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_931),(char*)come_increment_ref_count(fun_attribute_1009)));
            fun2_1014=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1052=__builtin_string(fun_name_942)))));
            (__right_value1052 = come_decrement_ref_count2(__right_value1052, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_1014==((void*)0)||fun2_1014->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_942)),(struct sFun*)come_increment_ref_count(fun_1013));
            }
            if(            !result_type_static_1012) {
                if(                !info->no_output_come_code) {
                    id_1015=(char*)come_increment_ref_count(__builtin_string(fun_name_942));
                    add_come_code_at_come_header(info,id_1015,"%s",((char*)(__right_value1056=buffer_to_string(header_1010))));
                    (__right_value1056 = come_decrement_ref_count2(__right_value1056, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (id_1015 = come_decrement_ref_count2(id_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2830, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1058=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2830, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1013),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1059=_inf_value8));
            (asm_fun_1008 = come_decrement_ref_count2(asm_fun_1008, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1009 = come_decrement_ref_count2(fun_attribute_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1013,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1014,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_931 = come_decrement_ref_count2(attribute_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_933 = come_decrement_ref_count2(var_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_942 = come_decrement_ref_count2(fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_943 = come_decrement_ref_count2(base_fun_name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_947,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1058,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value1059) ? __right_value1059 = come_decrement_ref_count2(__right_value1059, ((struct sNode*)__right_value1059)->finalize, ((struct sNode*)__right_value1059)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result383__;
            (asm_fun_1008 = come_decrement_ref_count2(asm_fun_1008, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1009 = come_decrement_ref_count2(fun_attribute_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1013,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1014,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1060=err_msg(info,"invalid character(2)(%c)\n",*info->p)));
        come_exception_var_c23_1016=multiple_assign_var34->v1;
        Err_1017=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_1017)?(puts(Err_1017),exit(0)):(0));
        come_call_finalizer3(__right_value1060,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        exit(2);
        (Err_1017 = come_decrement_ref_count2(Err_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_954;
    __result384__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    (attribute_931 = come_decrement_ref_count2(attribute_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_933 = come_decrement_ref_count2(var_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_942 = come_decrement_ref_count2(fun_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_943 = come_decrement_ref_count2(base_fun_name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(param_types_947,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static void tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
struct list$1void$ph* __dec_obj256;
struct list$1char$ph* __dec_obj257;
struct list$1char$ph* __dec_obj258;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj256=self->v1;
            come_call_finalizer3(__dec_obj256,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj257=self->v2;
            come_call_finalizer3(__dec_obj257,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj258=self->v3;
            come_call_finalizer3(__dec_obj258,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result374__;
void* __right_value953 = (void*)0;
struct sLambdaNode* result_960;
void* __right_value954 = (void*)0;
char* __dec_obj259;
struct sLambdaNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_960=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_960->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_960->sname;
        result_960->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_960->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_960->mFun=self->mFun;
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_960;
    come_call_finalizer3(result_960,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
void* __result_obj__=(void*)0;
struct sGenericsFun* __result377__;
void* __right_value959 = (void*)0;
struct sGenericsFun* result_966;
void* __right_value960 = (void*)0;
struct sType* __dec_obj260;
void* __right_value961 = (void*)0;
struct list$1char$ph* __dec_obj261;
void* __right_value962 = (void*)0;
struct list$1char$ph* __dec_obj262;
void* __right_value963 = (void*)0;
char* __dec_obj263;
void* __right_value964 = (void*)0;
struct sType* __dec_obj264;
void* __right_value965 = (void*)0;
struct list$1void$ph* __dec_obj265;
void* __right_value966 = (void*)0;
struct list$1char$ph* __dec_obj266;
void* __right_value967 = (void*)0;
struct list$1char$ph* __dec_obj267;
void* __right_value968 = (void*)0;
char* __dec_obj268;
void* __right_value969 = (void*)0;
char* __dec_obj269;
struct sGenericsFun* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_966=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj260=result_966->mImplType;
        result_966->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj260,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj261=result_966->mGenericsTypeNames;
        result_966->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj261,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj262=result_966->mMethodGenericsTypeNames;
        result_966->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj262,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj263=result_966->mName;
        result_966->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj264=result_966->mResultType;
        result_966->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj264,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj265=result_966->mParamTypes;
        result_966->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj265,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj266=result_966->mParamNames;
        result_966->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj266,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj267=result_966->mParamDefaultParametors;
        result_966->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj267,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj268=result_966->mBlock;
        result_966->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_966->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_966->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_966->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj269=result_966->mGenericsSName;
        result_966->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_966->mGenericsSLine=self->mGenericsSLine;
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_966;
    come_call_finalizer3(result_966,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_965;
    result_965=0;
    result_965+=int_get_hash_key(((int)self->mImplType));
    result_965+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_965+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_965+=int_get_hash_key(((int)self->mName));
    result_965+=int_get_hash_key(((int)self->mResultType));
    result_965+=int_get_hash_key(((int)self->mParamTypes));
    result_965+=int_get_hash_key(((int)self->mParamNames));
    result_965+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_965+=int_get_hash_key(((int)self->mBlock));
    result_965+=int_get_hash_key(((int)self->mSLine));
    result_965+=int_get_hash_key(((int)self->mVarArgs));
    result_965+=int_get_hash_key(((int)self->mGenerate));
    result_965+=int_get_hash_key(((int)self->mGenericsSName));
    result_965+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_965;
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
void* __result_obj__=(void*)0;
char* last_code_1018;
char* __dec_obj273;
char* last_code2_1019;
char* __dec_obj274;
_Bool comma_instead_of_semicolon_1020;
struct sClass* current_stack_frame_struct_1021;
char* real_fun_name_1022;
struct sFun* finalizer_1023;
void* __right_value1061 = (void*)0;
struct sType* type_before_1024;
void* __right_value1062 = (void*)0;
struct sType* type2_1025;
void* __right_value1063 = (void*)0;
char* fun_name2_1026;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
char* none_generics_name_1027;
void* __right_value1066 = (void*)0;
char* generics_fun_name_1028;
void* __right_value1067 = (void*)0;
struct sGenericsFun* generics_fun_1029;
void* __right_value1068 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_1030=0;
_Bool err_1031=0;
void* __right_value1069 = (void*)0;
char* __dec_obj275;
int i_1032;
void* __right_value1070 = (void*)0;
char* new_fun_name_1033;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
char* __dec_obj276;
void* __right_value1073 = (void*)0;
char* __dec_obj277;
void* __right_value1074 = (void*)0;
char* __dec_obj278;
void* __right_value1075 = (void*)0;
char* user_real_fun_name_1034;
void* __right_value1076 = (void*)0;
struct sFun* user_finalizer_1035;
void* __right_value1077 = (void*)0;
struct sType* type2_1036;
struct sClass* klass_1037;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct buffer* source_1038;
void* __right_value1080 = (void*)0;
struct list$1void$ph* o2_saved_1040;
struct tuple2$2char$phsType$ph* it_1041;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1042=0;
struct sType* field_type_1043=0;
char* p_1046;
int sline_1047;
char* sname_1048;
char* head_1049;
struct buffer* source3_1050;
struct buffer* __dec_obj279;
void* __right_value1081 = (void*)0;
char* __dec_obj280;
void* __right_value1082 = (void*)0;
struct sBlock* block_1051;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
struct sType* result_type_1052;
void* __right_value1085 = (void*)0;
char* name_1053;
void* __right_value1086 = (void*)0;
struct sType* self_type_1054;
struct sType* __list_values21___1056[1];
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct list$1void$ph* param_types_1055;
void* __right_value1089 = (void*)0;
char* __list_values22___1057[1];
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct list$1char$ph* param_names_1058;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct list$1char$ph* param_default_parametors_1059;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct sFun* fun2_1060;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct sFun* fun_1061;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1103 = (void*)0;
struct sNode* node_1062;
_Bool Value_1063;
struct buffer* __dec_obj281;
char* __dec_obj282;
char* __dec_obj283;
char* __dec_obj284;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result388__;
memset(&i_1032, 0, sizeof(int));
    last_code_1018=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj273=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1019=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj274=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1020=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1021=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_1022=((void*)0);
    finalizer_1023=((void*)0);
    type_before_1024=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1025=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1025->mHeap=(_Bool)0;
    fun_name2_1026=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_1023=((struct sFun*)((void*)(__right_value1064=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1026))));
        come_call_finalizer3(__right_value1064,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        finalizer_1023==((void*)0)) {
            none_generics_name_1027=(char*)come_increment_ref_count(get_none_generics_name(type2_1025->mClass->mName));
            generics_fun_name_1028=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1027,fun_name));
            generics_fun_1029=((struct sGenericsFun*)((void*)(__right_value1067=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1028))));
            come_call_finalizer3(__right_value1067,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            generics_fun_1029) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value1068=create_generics_fun((char*)come_increment_ref_count(fun_name2_1026),generics_fun_1029,type,info)));
                name_1030=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_1031=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value1068,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1031) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_1023=((struct sFun*)((void*)(__right_value1069=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1030))));
                come_call_finalizer3(__right_value1069,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                (name_1030 = come_decrement_ref_count2(name_1030, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1027 = come_decrement_ref_count2(none_generics_name_1027, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1028 = come_decrement_ref_count2(generics_fun_name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj275=real_fun_name_1022;
        real_fun_name_1022=(char*)come_increment_ref_count(fun_name2_1026);
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1032=128-1;        i_1032>=1;        i_1032--        ){
            new_fun_name_1033=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1026,i_1032));
            finalizer_1023=((struct sFun*)((void*)(__right_value1071=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1033))));
            come_call_finalizer3(__right_value1071,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            finalizer_1023) {
                __dec_obj276=fun_name2_1026;
                fun_name2_1026=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1033));
                __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1033 = come_decrement_ref_count2(new_fun_name_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1033 = come_decrement_ref_count2(new_fun_name_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_1023==((void*)0)) {
            finalizer_1023=((struct sFun*)((void*)(__right_value1073=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1026))));
            come_call_finalizer3(__right_value1073,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        __dec_obj277=real_fun_name_1022;
        real_fun_name_1022=(char*)come_increment_ref_count(fun_name2_1026);
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_1023==((void*)0)) {
        type=type_before_1024;
        __dec_obj278=real_fun_name_1022;
        real_fun_name_1022=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1034=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1035=((struct sFun*)((void*)(__right_value1076=map$2void$phvoid$ph$p_operator_load_element(info->funcs,user_real_fun_name_1034))));
        come_call_finalizer3(__right_value1076,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        type2_1036=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1036;
        klass_1037=type->mClass;
        if(        type->mPointerNum>0&&klass_1037->mStruct||type->mAllocaValue) {
            source_1038=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2930, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_1038,123);
            if(            user_finalizer_1035) {
                char source2_1039[1024];
                memset(&source2_1039, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1039,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1034);
                buffer_append_str(source_1038,source2_1039);
            }
            klass_1037=((struct sClass*)((void*)(__right_value1080=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1037->mName))));
            come_call_finalizer3(__right_value1080,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1040=(struct list$1void$ph*)come_increment_ref_count((klass_1037->mFields)),it_1041=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1040)));            !list$1void$ph$p_end((o2_saved_1040));            it_1041=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1040)))            ){
                multiple_assign_var36=it_1041;
                name_1042=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1043=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1043->mHeap) {
                    char source2_1044[1024];
                    memset(&source2_1044, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1044,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_1042,name_1042,name_1042,name_1042);
                    buffer_append_str(source_1038,source2_1044);
                }
                else if(                field_type_1043->mChannel) {
                    char source2_1045[1024];
                    memset(&source2_1045, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1045,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1042,name_1042);
                    buffer_append_str(source_1038,source2_1045);
                    snprintf(source2_1045,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1042,name_1042);
                    buffer_append_str(source_1038,source2_1045);
                }
                (name_1042 = come_decrement_ref_count2(name_1042, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1043,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1040,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1038,125);
            p_1046=info->p;
            sline_1047=info->sline;
            sname_1048=(char*)come_increment_ref_count(info->sname);
            head_1049=info->head;
            source3_1050=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj279=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1038);
            come_call_finalizer3(__dec_obj279,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_1038->buf;
            info->head=source_1038->buf;
            __dec_obj280=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1022));
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1051=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1052=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2979, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            name_1053=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1022));
            self_type_1054=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1054->mHeap=(_Bool)0;
            if(            self_type_1054->mPointerNum==0) {
                self_type_1054->mPointerNum=1;
            }
            if(            self_type_1054->mPointerNum>1) {
                self_type_1054->mPointerNum=1;
            }
            param_types_1055=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___1056[0]=self_type_1054,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2989, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values21___1056)));
            param_names_1058=(struct list$1char$ph*)come_increment_ref_count((__list_values22___1057[0]=((char*)(__right_value1089=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2990, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values22___1057)));
            (__right_value1089 = come_decrement_ref_count2(__right_value1089, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            param_default_parametors_1059=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2991, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1059,((void*)0));
            result_type_1052->mStatic=(_Bool)0;
            result_type_1052->mUniq=(_Bool)0;
            result_type_1052->mInline=(_Bool)0;
            result_type_1052->mGenerate=(_Bool)0;
            fun2_1060=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1094=__builtin_string(name_1053)))));
            (__right_value1094 = come_decrement_ref_count2(__right_value1094, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_1060==((void*)0)||fun2_1060->mExternal) {
                fun_1061=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3001, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1053),(struct sType*)come_increment_ref_count(result_type_1052),(struct list$1void$ph*)come_increment_ref_count(param_types_1055),(struct list$1char$ph*)come_increment_ref_count(param_names_1058),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1059),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1051),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1053)),(struct sFun*)come_increment_ref_count(fun_1061));
                finalizer_1023=fun_1061;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3011, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1102=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3011, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1061),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1062=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1102,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_1063=node_compile(node_1062,info);
                if(                !Value_1063) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1061,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1062) ? node_1062 = come_decrement_ref_count2(node_1062, ((struct sNode*)node_1062)->finalize, ((struct sNode*)node_1062)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                finalizer_1023=fun2_1060;
            }
            __dec_obj281=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1050);
            come_call_finalizer3(__dec_obj281,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1046;
            info->head=head_1049;
            info->sline=sline_1047;
            __dec_obj282=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1048);
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1038,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1048 = come_decrement_ref_count2(sname_1048, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1050,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1051,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1052,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1053 = come_decrement_ref_count2(name_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1054,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1055,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1058,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1059,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1060,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_1034 = come_decrement_ref_count2(user_real_fun_name_1034, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_1036,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1021;
    __dec_obj283=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1018);
    __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj284=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1019);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1020;
    __result388__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1107=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3036, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_1023,(char*)come_increment_ref_count(real_fun_name_1022))));
    (last_code_1018 = come_decrement_ref_count2(last_code_1018, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1019 = come_decrement_ref_count2(last_code2_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1022 = come_decrement_ref_count2(real_fun_name_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_1024,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1025,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1026 = come_decrement_ref_count2(fun_name2_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1107,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
char* __dec_obj285;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj285=self->v2;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sFun$pchar$ph* __result385__;
void* __right_value1104 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1064;
void* __right_value1105 = (void*)0;
char* __dec_obj286;
struct tuple2$2sFun$pchar$ph* __result386__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_1064=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1064->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj286=result_1064->v2;
        result_1064->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result386__ = gComeFunResultObject = __result_obj__ = result_1064;
    come_call_finalizer3(result_1064,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1065;
    result_1065=0;
    result_1065+=int_get_hash_key(((int)self->v1));
    result_1065+=int_get_hash_key(((int)self->v2));
    return result_1065;
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
void* __result_obj__=(void*)0;
char* __dec_obj287;
struct tuple2$2sFun$pchar$ph* __result387__;
    self->v1=v1;
    __dec_obj287=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result387__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
char* __dec_obj288;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj288=self->v2;
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1066;
char* __dec_obj289;
char* last_code2_1067;
char* __dec_obj290;
_Bool comma_instead_of_semicolon_1068;
struct sClass* current_stack_frame_struct_1069;
struct sFun* equaler_1070;
void* __right_value1108 = (void*)0;
char* real_fun_name_1071;
void* __right_value1109 = (void*)0;
struct sType* type2_1072;
struct sClass* klass_1073;
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
struct buffer* source_1074;
char* name_1075;
void* __right_value1112 = (void*)0;
struct list$1void$ph* o2_saved_1077;
struct tuple2$2char$phsType$ph* it_1078;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_1079=0;
struct sType* field_type_1080=0;
char* p_1082;
int sline_1083;
char* sname_1084;
char* head_1085;
struct buffer* source3_1086;
struct buffer* __dec_obj291;
void* __right_value1113 = (void*)0;
char* __dec_obj292;
void* __right_value1114 = (void*)0;
struct sBlock* block_1087;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
struct sType* result_type_1088;
void* __right_value1117 = (void*)0;
char* name_1089;
void* __right_value1118 = (void*)0;
struct sType* left_type_1090;
void* __right_value1119 = (void*)0;
struct sType* right_type_1091;
struct sType* __list_values23___1093[2];
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
struct list$1void$ph* param_types_1092;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
char* __list_values24___1094[2];
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
struct list$1char$ph* param_names_1095;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct list$1char$ph* param_default_parametors_1096;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
struct sFun* fun2_1097;
void* __right_value1130 = (void*)0;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
void* __right_value1133 = (void*)0;
struct sFun* fun_1098;
void* __right_value1134 = (void*)0;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1137 = (void*)0;
struct sNode* node_1099;
_Bool Value_1100;
void* __right_value1138 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c24_1101=0;
char* Err_1102=0;
struct buffer* __dec_obj293;
char* __dec_obj294;
char* __dec_obj295;
char* __dec_obj296;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result389__;
    last_code_1066=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj289=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1067=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj290=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1068=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1069=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1070=((void*)0);
    real_fun_name_1071=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1072=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1072;
    klass_1073=type->mClass;
    if(    type->mPointerNum>0&&!klass_1073->mNumber) {
        source_1074=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3062, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1074,123);
        if(        klass_1073->mProtocol) {
            name_1075="_protocol_obj";
            char source2_1076[1024];
            memset(&source2_1076, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1076,1024,"return left.%s.equals(right.%s);\n",name_1075,name_1075);
            buffer_append_str(source_1074,source2_1076);
        }
        else {
            klass_1073=((struct sClass*)((void*)(__right_value1112=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1073->mName))));
            come_call_finalizer3(__right_value1112,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1077=(struct list$1void$ph*)come_increment_ref_count((klass_1073->mFields)),it_1078=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1077)));            !list$1void$ph$p_end((o2_saved_1077));            it_1078=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1077)))            ){
                multiple_assign_var37=it_1078;
                name_1079=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1080=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1081[1024];
                memset(&source2_1081, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1081,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1079,name_1079,name_1079);
                buffer_append_str(source_1074,source2_1081);
                (name_1079 = come_decrement_ref_count2(name_1079, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1080,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1077,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1074,"return true;");
        buffer_append_char(source_1074,125);
        p_1082=info->p;
        sline_1083=info->sline;
        sname_1084=(char*)come_increment_ref_count(info->sname);
        head_1085=info->head;
        source3_1086=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj291=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1074);
        come_call_finalizer3(__dec_obj291,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1074->buf;
        info->head=source_1074->buf;
        __dec_obj292=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1071));
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1087=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1088=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3102, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1089=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1071));
        left_type_1090=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1090->mHeap=(_Bool)0;
        right_type_1091=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1091->mHeap=(_Bool)0;
        param_types_1092=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___1093[0]=left_type_1090,
__list_values23___1093[1]=right_type_1091,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3108, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values23___1093)));
        param_names_1095=(struct list$1char$ph*)come_increment_ref_count((__list_values24___1094[0]=((char*)(__right_value1122=__builtin_string("left"))),
__list_values24___1094[1]=((char*)(__right_value1123=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3109, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values24___1094)));
        (__right_value1122 = come_decrement_ref_count2(__right_value1122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1123 = come_decrement_ref_count2(__right_value1123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1096=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3110, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1096,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1096,((void*)0));
        result_type_1088->mStatic=(_Bool)0;
        result_type_1088->mUniq=(_Bool)0;
        result_type_1088->mInline=(_Bool)0;
        result_type_1088->mGenerate=(_Bool)0;
        fun2_1097=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1128=__builtin_string(name_1089)))));
        (__right_value1128 = come_decrement_ref_count2(__right_value1128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1097==((void*)0)||fun2_1097->mExternal) {
            fun_1098=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3121, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1089),(struct sType*)come_increment_ref_count(result_type_1088),(struct list$1void$ph*)come_increment_ref_count(param_types_1092),(struct list$1char$ph*)come_increment_ref_count(param_names_1095),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1096),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1087),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1089)),(struct sFun*)come_increment_ref_count(fun_1098));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3129, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1136=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3129, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1098),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1099=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1136,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1100=node_compile(node_1099,info);
            if(            !Value_1100) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1138=err_msg(info,"compiling error")));
                come_exception_var_c24_1101=multiple_assign_var38->v1;
                Err_1102=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1102)?(puts(Err_1102),exit(0)):(0));
                come_call_finalizer3(__right_value1138,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1102 = come_decrement_ref_count2(Err_1102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1070=fun_1098;
            come_call_finalizer3(fun_1098,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1099) ? node_1099 = come_decrement_ref_count2(node_1099, ((struct sNode*)node_1099)->finalize, ((struct sNode*)node_1099)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1070=fun2_1097;
        }
        __dec_obj293=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1086);
        come_call_finalizer3(__dec_obj293,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1082;
        info->head=head_1085;
        info->sline=sline_1083;
        __dec_obj294=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1084);
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1074,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1084 = come_decrement_ref_count2(sname_1084, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1086,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1087,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1088,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1089 = come_decrement_ref_count2(name_1089, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1090,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1091,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1092,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1095,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1096,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1097,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1069;
    __dec_obj295=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1066);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj296=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1067);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1068;
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1140=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3155, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1070,(char*)come_increment_ref_count(real_fun_name_1071))));
    (last_code_1066 = come_decrement_ref_count2(last_code_1066, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1067 = come_decrement_ref_count2(last_code2_1067, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1071 = come_decrement_ref_count2(real_fun_name_1071, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1072,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1140,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1103;
char* __dec_obj297;
char* last_code2_1104;
char* __dec_obj298;
_Bool comma_instead_of_semicolon_1105;
struct sClass* current_stack_frame_struct_1106;
struct sFun* equaler_1107;
void* __right_value1141 = (void*)0;
char* real_fun_name_1108;
void* __right_value1142 = (void*)0;
struct sType* type2_1109;
struct sClass* klass_1110;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct buffer* source_1111;
char* name_1112;
int i_1115;
void* __right_value1145 = (void*)0;
struct list$1void$ph* o2_saved_1116;
struct tuple2$2char$phsType$ph* it_1117;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1118=0;
struct sType* field_type_1119=0;
char* p_1123;
int sline_1124;
char* sname_1125;
char* head_1126;
struct buffer* source3_1127;
struct buffer* __dec_obj299;
void* __right_value1146 = (void*)0;
char* __dec_obj300;
void* __right_value1147 = (void*)0;
struct sBlock* block_1128;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
struct sType* result_type_1129;
void* __right_value1150 = (void*)0;
char* name_1130;
void* __right_value1151 = (void*)0;
struct sType* left_type_1131;
void* __right_value1152 = (void*)0;
struct sType* right_type_1132;
struct sType* __list_values25___1134[2];
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct list$1void$ph* param_types_1133;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
char* __list_values26___1135[2];
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct list$1char$ph* param_names_1136;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
struct list$1char$ph* param_default_parametors_1137;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
struct sFun* fun2_1138;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
struct sFun* fun_1139;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1170 = (void*)0;
struct sNode* node_1140;
_Bool Value_1141;
void* __right_value1171 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c25_1142=0;
char* Err_1143=0;
struct buffer* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result390__;
    last_code_1103=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj297=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1104=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj298=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1105=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1106=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1107=((void*)0);
    real_fun_name_1108=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1109=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1109;
    klass_1110=type->mClass;
    if(    type->mPointerNum>0&&!klass_1110->mNumber) {
        source_1111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3180, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1111,123);
        if(        klass_1110->mProtocol) {
            name_1112="_protocol_obj";
            char source2_1113[1024];
            memset(&source2_1113, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1113,1024,"return left.%s !== right.%s;\n",name_1112,name_1112);
            buffer_append_str(source_1111,source2_1113);
        }
        else {
            char source2_1114[1024];
            memset(&source2_1114, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1114,1024,"return !(");
            buffer_append_str(source_1111,source2_1114);
            snprintf(source2_1114,1024,"( ");
            buffer_append_str(source_1111,source2_1114);
            i_1115=0;
            klass_1110=((struct sClass*)((void*)(__right_value1145=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1110->mName))));
            come_call_finalizer3(__right_value1145,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1116=(struct list$1void$ph*)come_increment_ref_count((klass_1110->mFields)),it_1117=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1116)));            !list$1void$ph$p_end((o2_saved_1116));            it_1117=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1116)))            ){
                multiple_assign_var39=it_1117;
                name_1118=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1119=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1120[1024];
                memset(&source2_1120, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1120,1024,"(left.%s === right.%s)",name_1118,name_1118,name_1118);
                buffer_append_str(source_1111,source2_1120);
                if(                i_1115==list$1void$ph$p_length(klass_1110->mFields)-1) {
                    char source2_1121[1024];
                    memset(&source2_1121, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1121,1024,"));");
                    buffer_append_str(source_1111,source2_1121);
                }
                else {
                    char source2_1122[1024];
                    memset(&source2_1122, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1122,1024," && ");
                    buffer_append_str(source_1111,source2_1122);
                }
                i_1115++;
                (name_1118 = come_decrement_ref_count2(name_1118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1119,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1116,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1111,125);
        p_1123=info->p;
        sline_1124=info->sline;
        sname_1125=(char*)come_increment_ref_count(info->sname);
        head_1126=info->head;
        source3_1127=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj299=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1111);
        come_call_finalizer3(__dec_obj299,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1111->buf;
        info->head=source_1111->buf;
        __dec_obj300=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1108));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1128=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1129=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3240, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1130=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1108));
        left_type_1131=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1131->mHeap=(_Bool)0;
        right_type_1132=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1132->mHeap=(_Bool)0;
        param_types_1133=(struct list$1sType$ph*)come_increment_ref_count((__list_values25___1134[0]=left_type_1131,
__list_values25___1134[1]=right_type_1132,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3246, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values25___1134)));
        param_names_1136=(struct list$1char$ph*)come_increment_ref_count((__list_values26___1135[0]=((char*)(__right_value1155=__builtin_string("left"))),
__list_values26___1135[1]=((char*)(__right_value1156=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3247, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values26___1135)));
        (__right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1156 = come_decrement_ref_count2(__right_value1156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1137=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3248, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1137,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1137,((void*)0));
        result_type_1129->mStatic=(_Bool)0;
        result_type_1129->mUniq=(_Bool)0;
        result_type_1129->mInline=(_Bool)0;
        result_type_1129->mGenerate=(_Bool)0;
        fun2_1138=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1161=__builtin_string(name_1130)))));
        (__right_value1161 = come_decrement_ref_count2(__right_value1161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1138==((void*)0)||fun2_1138->mExternal) {
            fun_1139=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3259, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1130),(struct sType*)come_increment_ref_count(result_type_1129),(struct list$1void$ph*)come_increment_ref_count(param_types_1133),(struct list$1char$ph*)come_increment_ref_count(param_names_1136),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1137),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1128),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1130)),(struct sFun*)come_increment_ref_count(fun_1139));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3267, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1169=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3267, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1139),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1140=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1169,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1141=node_compile(node_1140,info);
            if(            !Value_1141) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1171=err_msg(info,"compiling error")));
                come_exception_var_c25_1142=multiple_assign_var40->v1;
                Err_1143=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1143)?(puts(Err_1143),exit(0)):(0));
                come_call_finalizer3(__right_value1171,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1143 = come_decrement_ref_count2(Err_1143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1107=fun_1139;
            come_call_finalizer3(fun_1139,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1140) ? node_1140 = come_decrement_ref_count2(node_1140, ((struct sNode*)node_1140)->finalize, ((struct sNode*)node_1140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1107=fun2_1138;
        }
        __dec_obj301=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1127);
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1123;
        info->head=head_1126;
        info->sline=sline_1124;
        __dec_obj302=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1125);
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1111,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1125 = come_decrement_ref_count2(sname_1125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1127,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1128,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1129,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1130 = come_decrement_ref_count2(name_1130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1131,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1132,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1133,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1136,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1137,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1138,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1106;
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1103);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1104);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1105;
    __result390__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1173=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3293, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1107,(char*)come_increment_ref_count(real_fun_name_1108))));
    (last_code_1103 = come_decrement_ref_count2(last_code_1103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1104 = come_decrement_ref_count2(last_code2_1104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1108 = come_decrement_ref_count2(real_fun_name_1108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1173,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1144;
char* __dec_obj305;
char* last_code2_1145;
char* __dec_obj306;
_Bool comma_instead_of_semicolon_1146;
struct sClass* current_stack_frame_struct_1147;
struct sFun* equaler_1148;
void* __right_value1174 = (void*)0;
char* real_fun_name_1149;
void* __right_value1175 = (void*)0;
struct sType* type2_1150;
struct sClass* klass_1151;
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
struct buffer* source_1152;
char* name_1153;
int i_1156;
void* __right_value1178 = (void*)0;
struct list$1void$ph* o2_saved_1157;
struct tuple2$2char$phsType$ph* it_1158;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1159=0;
struct sType* field_type_1160=0;
char* p_1164;
int sline_1165;
char* sname_1166;
char* head_1167;
struct buffer* source3_1168;
struct buffer* __dec_obj307;
void* __right_value1179 = (void*)0;
char* __dec_obj308;
void* __right_value1180 = (void*)0;
struct sBlock* block_1169;
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
struct sType* result_type_1170;
void* __right_value1183 = (void*)0;
char* name_1171;
void* __right_value1184 = (void*)0;
struct sType* left_type_1172;
void* __right_value1185 = (void*)0;
struct sType* right_type_1173;
struct sType* __list_values27___1175[2];
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
struct list$1void$ph* param_types_1174;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
char* __list_values28___1176[2];
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
struct list$1char$ph* param_names_1177;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct list$1char$ph* param_default_parametors_1178;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
struct sFun* fun2_1179;
void* __right_value1196 = (void*)0;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
void* __right_value1199 = (void*)0;
struct sFun* fun_1180;
void* __right_value1200 = (void*)0;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1203 = (void*)0;
struct sNode* node_1181;
_Bool Value_1182;
void* __right_value1204 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c26_1183=0;
char* Err_1184=0;
struct buffer* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
char* __dec_obj312;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result391__;
    last_code_1144=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj305=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1145=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj306=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1146=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1147=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1148=((void*)0);
    real_fun_name_1149=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1150=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1150;
    klass_1151=type->mClass;
    if(    type->mPointerNum>0&&!klass_1151->mNumber) {
        source_1152=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3318, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1152,123);
        if(        klass_1151->mProtocol) {
            name_1153="_protocol_obj";
            char source2_1154[1024];
            memset(&source2_1154, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1154,1024,"return !left.%s.equals(right.%s);\n",name_1153,name_1153);
            buffer_append_str(source_1152,source2_1154);
        }
        else {
            char source2_1155[1024];
            memset(&source2_1155, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1155,1024,"return !(");
            buffer_append_str(source_1152,source2_1155);
            i_1156=0;
            klass_1151=((struct sClass*)((void*)(__right_value1178=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1151->mName))));
            come_call_finalizer3(__right_value1178,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1157=(struct list$1void$ph*)come_increment_ref_count((klass_1151->mFields)),it_1158=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1157)));            !list$1void$ph$p_end((o2_saved_1157));            it_1158=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1157)))            ){
                multiple_assign_var41=it_1158;
                name_1159=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1160=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1161[1024];
                memset(&source2_1161, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1161,1024,"left.%s.equals(right.%s)",name_1159,name_1159);
                buffer_append_str(source_1152,source2_1161);
                if(                i_1156==list$1void$ph$p_length(klass_1151->mFields)-1) {
                    char source2_1162[1024];
                    memset(&source2_1162, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1162,1024,");");
                    buffer_append_str(source_1152,source2_1162);
                }
                else {
                    char source2_1163[1024];
                    memset(&source2_1163, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1163,1024," && ");
                    buffer_append_str(source_1152,source2_1163);
                }
                i_1156++;
                (name_1159 = come_decrement_ref_count2(name_1159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1160,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1157,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1152,125);
        p_1164=info->p;
        sline_1165=info->sline;
        sname_1166=(char*)come_increment_ref_count(info->sname);
        head_1167=info->head;
        source3_1168=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1152);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1152->buf;
        info->head=source_1152->buf;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1149));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1169=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1170=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3375, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1171=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1149));
        left_type_1172=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1172->mHeap=(_Bool)0;
        right_type_1173=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1173->mHeap=(_Bool)0;
        param_types_1174=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___1175[0]=left_type_1172,
__list_values27___1175[1]=right_type_1173,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3381, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values27___1175)));
        param_names_1177=(struct list$1char$ph*)come_increment_ref_count((__list_values28___1176[0]=((char*)(__right_value1188=__builtin_string("left"))),
__list_values28___1176[1]=((char*)(__right_value1189=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3382, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values28___1176)));
        (__right_value1188 = come_decrement_ref_count2(__right_value1188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1189 = come_decrement_ref_count2(__right_value1189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1178=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3383, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1178,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1178,((void*)0));
        result_type_1170->mStatic=(_Bool)0;
        result_type_1170->mUniq=(_Bool)0;
        result_type_1170->mInline=(_Bool)0;
        result_type_1170->mGenerate=(_Bool)0;
        fun2_1179=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1194=__builtin_string(name_1171)))));
        (__right_value1194 = come_decrement_ref_count2(__right_value1194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1179==((void*)0)||fun2_1179->mExternal) {
            fun_1180=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3394, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1171),(struct sType*)come_increment_ref_count(result_type_1170),(struct list$1void$ph*)come_increment_ref_count(param_types_1174),(struct list$1char$ph*)come_increment_ref_count(param_names_1177),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1178),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1169),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1171)),(struct sFun*)come_increment_ref_count(fun_1180));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3402, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1202=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3402, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1180),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1181=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1202,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1182=node_compile(node_1181,info);
            if(            !Value_1182) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value1204=err_msg(info,"compiling error")));
                come_exception_var_c26_1183=multiple_assign_var42->v1;
                Err_1184=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1184)?(puts(Err_1184),exit(0)):(0));
                come_call_finalizer3(__right_value1204,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1184 = come_decrement_ref_count2(Err_1184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1148=fun_1180;
            come_call_finalizer3(fun_1180,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1181) ? node_1181 = come_decrement_ref_count2(node_1181, ((struct sNode*)node_1181)->finalize, ((struct sNode*)node_1181)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1148=fun2_1179;
        }
        __dec_obj309=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1168);
        come_call_finalizer3(__dec_obj309,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1164;
        info->head=head_1167;
        info->sline=sline_1165;
        __dec_obj310=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1166);
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1152,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1166 = come_decrement_ref_count2(sname_1166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1168,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1169,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1170,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1171 = come_decrement_ref_count2(name_1171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1172,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1173,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1174,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1177,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1178,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1179,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1147;
    __dec_obj311=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1144);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj312=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1145);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1146;
    __result391__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1206=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3428, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1148,(char*)come_increment_ref_count(real_fun_name_1149))));
    (last_code_1144 = come_decrement_ref_count2(last_code_1144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1145 = come_decrement_ref_count2(last_code2_1145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1149 = come_decrement_ref_count2(real_fun_name_1149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1150,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1206,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1185;
char* __dec_obj313;
char* last_code2_1186;
char* __dec_obj314;
_Bool comma_instead_of_semicolon_1187;
struct sClass* current_stack_frame_struct_1188;
struct sFun* equaler_1189;
void* __right_value1207 = (void*)0;
char* real_fun_name_1190;
void* __right_value1208 = (void*)0;
struct sType* type2_1191;
struct sClass* klass_1192;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct buffer* source_1193;
char* name_1194;
void* __right_value1211 = (void*)0;
struct list$1void$ph* o2_saved_1197;
struct tuple2$2char$phsType$ph* it_1198;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1199=0;
struct sType* field_type_1200=0;
char* p_1202;
int sline_1203;
char* sname_1204;
char* head_1205;
struct buffer* source3_1206;
struct buffer* __dec_obj315;
void* __right_value1212 = (void*)0;
char* __dec_obj316;
void* __right_value1213 = (void*)0;
struct sBlock* block_1207;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
struct sType* result_type_1208;
void* __right_value1216 = (void*)0;
char* name_1209;
void* __right_value1217 = (void*)0;
struct sType* left_type_1210;
void* __right_value1218 = (void*)0;
struct sType* right_type_1211;
struct sType* __list_values29___1213[2];
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct list$1void$ph* param_types_1212;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
char* __list_values30___1214[2];
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
struct list$1char$ph* param_names_1215;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct list$1char$ph* param_default_parametors_1216;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
struct sFun* fun2_1217;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
struct sFun* fun_1218;
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1236 = (void*)0;
struct sNode* node_1219;
_Bool Value_1220;
void* __right_value1237 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c27_1221=0;
char* Err_1222=0;
struct buffer* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value1238 = (void*)0;
void* __right_value1239 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result392__;
    last_code_1185=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj313=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1186=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj314=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1187=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1188=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1189=((void*)0);
    real_fun_name_1190=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1191=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1191;
    klass_1192=type->mClass;
    if(    type->mPointerNum>0&&!klass_1192->mNumber) {
        source_1193=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3453, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1193,123);
        if(        klass_1192->mProtocol) {
            name_1194="_protocol_obj";
            char source2_1195[1024];
            memset(&source2_1195, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1195,1024,"return left.%s === right.%s;\n",name_1194,name_1194);
            buffer_append_str(source_1193,source2_1195);
        }
        else {
            char source2_1196[1024];
            memset(&source2_1196, 0, sizeof(char)            *(1024)            );
            klass_1192=((struct sClass*)((void*)(__right_value1211=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1192->mName))));
            come_call_finalizer3(__right_value1211,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1197=(struct list$1void$ph*)come_increment_ref_count((klass_1192->mFields)),it_1198=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1197)));            !list$1void$ph$p_end((o2_saved_1197));            it_1198=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1197)))            ){
                multiple_assign_var43=it_1198;
                name_1199=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1200=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1201[1024];
                memset(&source2_1201, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1201,1024,"if(left.%s !== right.%s) { return false; }\n",name_1199,name_1199,name_1199);
                buffer_append_str(source_1193,source2_1201);
                (name_1199 = come_decrement_ref_count2(name_1199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1200,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1197,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1193,"return true;\n");
        buffer_append_char(source_1193,125);
        p_1202=info->p;
        sline_1203=info->sline;
        sname_1204=(char*)come_increment_ref_count(info->sname);
        head_1205=info->head;
        source3_1206=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1193);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1193->buf;
        info->head=source_1193->buf;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1190));
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1207=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1208=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3495, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1209=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1190));
        left_type_1210=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1210->mHeap=(_Bool)0;
        right_type_1211=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1211->mHeap=(_Bool)0;
        param_types_1212=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___1213[0]=left_type_1210,
__list_values29___1213[1]=right_type_1211,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3501, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values29___1213)));
        param_names_1215=(struct list$1char$ph*)come_increment_ref_count((__list_values30___1214[0]=((char*)(__right_value1221=__builtin_string("left"))),
__list_values30___1214[1]=((char*)(__right_value1222=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3502, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values30___1214)));
        (__right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1222 = come_decrement_ref_count2(__right_value1222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1216=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3503, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1216,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1216,((void*)0));
        result_type_1208->mStatic=(_Bool)0;
        result_type_1208->mUniq=(_Bool)0;
        result_type_1208->mInline=(_Bool)0;
        result_type_1208->mGenerate=(_Bool)0;
        fun2_1217=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1227=__builtin_string(name_1209)))));
        (__right_value1227 = come_decrement_ref_count2(__right_value1227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1217==((void*)0)||fun2_1217->mExternal) {
            fun_1218=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3514, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1209),(struct sType*)come_increment_ref_count(result_type_1208),(struct list$1void$ph*)come_increment_ref_count(param_types_1212),(struct list$1char$ph*)come_increment_ref_count(param_names_1215),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1216),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1207),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1209)),(struct sFun*)come_increment_ref_count(fun_1218));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3522, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1235=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3522, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1218),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1219=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1235,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1220=node_compile(node_1219,info);
            if(            !Value_1220) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value1237=err_msg(info,"compiling error(X)")));
                come_exception_var_c27_1221=multiple_assign_var44->v1;
                Err_1222=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1222)?(puts(Err_1222),exit(0)):(0));
                come_call_finalizer3(__right_value1237,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1222 = come_decrement_ref_count2(Err_1222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1189=fun_1218;
            come_call_finalizer3(fun_1218,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1219) ? node_1219 = come_decrement_ref_count2(node_1219, ((struct sNode*)node_1219)->finalize, ((struct sNode*)node_1219)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1189=fun2_1217;
        }
        __dec_obj317=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1206);
        come_call_finalizer3(__dec_obj317,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1202;
        info->head=head_1205;
        info->sline=sline_1203;
        __dec_obj318=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1204);
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1193,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1204 = come_decrement_ref_count2(sname_1204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1206,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1207,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1208,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1209 = come_decrement_ref_count2(name_1209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1210,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1211,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1212,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1215,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1216,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1217,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1188;
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1185);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1186);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1187;
    __result392__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1239=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3548, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1189,(char*)come_increment_ref_count(real_fun_name_1190))));
    (last_code_1185 = come_decrement_ref_count2(last_code_1185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1186 = come_decrement_ref_count2(last_code2_1186, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1190 = come_decrement_ref_count2(real_fun_name_1190, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1191,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1239,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1240 = (void*)0;
void* __right_value1241 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result393__;
char* last_code_1223;
char* __dec_obj321;
char* last_code2_1224;
char* __dec_obj322;
_Bool comma_instead_of_semicolon_1225;
struct sClass* current_stack_frame_struct_1226;
struct sFun* cloner_1227;
void* __right_value1242 = (void*)0;
char* real_fun_name_1228;
void* __right_value1243 = (void*)0;
struct sType* type2_1229;
struct sClass* klass_1230;
char* fun_name2_1231;
void* __right_value1244 = (void*)0;
char* none_generics_name_1232;
void* __right_value1245 = (void*)0;
struct sType* obj_type_1233;
void* __right_value1246 = (void*)0;
char* __dec_obj323;
void* __right_value1247 = (void*)0;
char* fun_name3_1234;
void* __right_value1248 = (void*)0;
struct sGenericsFun* generics_fun_1235;
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1236=0;
_Bool err_1237=0;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result394__;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
char* __dec_obj324;
void* __right_value1255 = (void*)0;
char* __dec_obj325;
int i_1238;
void* __right_value1256 = (void*)0;
char* new_fun_name_1239;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
char* __dec_obj326;
void* __right_value1259 = (void*)0;
char* __dec_obj327;
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct buffer* source_1240;
void* __right_value1262 = (void*)0;
char* name_1241;
void* __right_value1263 = (void*)0;
struct list$1void$ph* o2_saved_1243;
struct tuple2$2char$phsType$ph* it_1244;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1245=0;
struct sType* field_type_1246=0;
void* __right_value1264 = (void*)0;
struct list$1void$ph* o2_saved_1249;
struct tuple2$2char$phsType$ph* it_1250;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1251=0;
struct sType* field_type_1252=0;
char* p_1256;
int sline_1257;
char* sname_1258;
struct buffer* source3_1259;
char* head_1260;
struct buffer* __dec_obj328;
void* __right_value1265 = (void*)0;
char* __dec_obj329;
void* __right_value1266 = (void*)0;
struct sBlock* block_1261;
void* __right_value1267 = (void*)0;
struct sType* result_type_1262;
void* __right_value1268 = (void*)0;
char* name_1263;
void* __right_value1269 = (void*)0;
struct sType* self_type_1264;
struct sType* __list_values31___1266[1];
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
struct list$1void$ph* param_types_1265;
void* __right_value1272 = (void*)0;
char* __list_values32___1267[1];
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
struct list$1char$ph* param_names_1268;
void* __right_value1275 = (void*)0;
void* __right_value1276 = (void*)0;
struct list$1char$ph* param_default_parametors_1269;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
struct sFun* fun2_1270;
void* __right_value1279 = (void*)0;
void* __right_value1280 = (void*)0;
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
struct sFun* fun_1271;
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
void* __right_value1285 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1286 = (void*)0;
struct sNode* node_1272;
_Bool Value_1273;
void* __right_value1287 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c28_1274=0;
char* Err_1275=0;
char* __dec_obj330;
struct buffer* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result395__;
fun_name2_1231 = (void*)0;
memset(&i_1238, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result393__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1241=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3554, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1241,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    last_code_1223=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1224=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1225=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1226=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1227=((void*)0);
    real_fun_name_1228=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1229=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1229;
    klass_1230=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1232=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1233=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj323=fun_name2_1231;
        fun_name2_1231=(char*)come_increment_ref_count(create_method_name(obj_type_1233,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1234=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1232,fun_name));
        generics_fun_1235=((struct sGenericsFun*)((void*)(__right_value1248=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_1234,((void*)0)))));
        come_call_finalizer3(__right_value1248,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        generics_fun_1235) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value1250=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1231)),generics_fun_1235,obj_type_1233,info)));
            name_1236=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1237=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value1250,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1237) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result394__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1252=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3594, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    (name_1236 = come_decrement_ref_count2(name_1236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1232 = come_decrement_ref_count2(none_generics_name_1232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1233,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1234 = come_decrement_ref_count2(fun_name3_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1223 = come_decrement_ref_count2(last_code_1223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1224 = come_decrement_ref_count2(last_code2_1224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1228 = come_decrement_ref_count2(real_fun_name_1228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1229,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1231 = come_decrement_ref_count2(fun_name2_1231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value1252,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result394__;
                }
            }
            cloner_1227=((struct sFun*)((void*)(__right_value1253=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1236))));
            come_call_finalizer3(__right_value1253,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            (name_1236 = come_decrement_ref_count2(name_1236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1227=((struct sFun*)((void*)(__right_value1254=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1231))));
            come_call_finalizer3(__right_value1254,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        __dec_obj324=real_fun_name_1228;
        real_fun_name_1228=(char*)come_increment_ref_count(fun_name2_1231);
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1232 = come_decrement_ref_count2(none_generics_name_1232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1233,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1234 = come_decrement_ref_count2(fun_name3_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj325=fun_name2_1231;
        fun_name2_1231=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1238=128-1;        i_1238>=1;        i_1238--        ){
            new_fun_name_1239=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1231,i_1238));
            cloner_1227=((struct sFun*)((void*)(__right_value1257=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1239))));
            come_call_finalizer3(__right_value1257,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            cloner_1227) {
                __dec_obj326=fun_name2_1231;
                fun_name2_1231=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1239));
                __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1239 = come_decrement_ref_count2(new_fun_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1239 = come_decrement_ref_count2(new_fun_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1227==((void*)0)) {
            cloner_1227=((struct sFun*)((void*)(__right_value1259=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1231))));
            come_call_finalizer3(__right_value1259,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        __dec_obj327=real_fun_name_1228;
        real_fun_name_1228=(char*)come_increment_ref_count(fun_name2_1231);
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1227==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1240=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3629, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1240,"{\n");
        buffer_append_str(source_1240,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1240,"var result = new %s;\n",((char*)(__right_value1262=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value1262 = come_decrement_ref_count2(__right_value1262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        klass_1230->mProtocol) {
            name_1241="_protocol_obj";
            char source2_1242[1024];
            memset(&source2_1242, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1242,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1240,source2_1242);
            klass_1230=((struct sClass*)((void*)(__right_value1263=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1230->mName))));
            come_call_finalizer3(__right_value1263,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1243=(struct list$1void$ph*)come_increment_ref_count((klass_1230->mFields)),it_1244=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1243)));            !list$1void$ph$p_end((o2_saved_1243));            it_1244=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1243)))            ){
                multiple_assign_var46=it_1244;
                name_1245=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1246=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1245,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1246->mArrayNum)>0) {
                    char source2_1247[1024];
                    memset(&source2_1247, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1247,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1245,name_1245,name_1245);
                    buffer_append_str(source_1240,source2_1247);
                }
                else {
                    char source2_1248[1024];
                    memset(&source2_1248, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1248,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1245,name_1245);
                    buffer_append_str(source_1240,source2_1248);
                }
                (name_1245 = come_decrement_ref_count2(name_1245, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1246,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1243,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1230=((struct sClass*)((void*)(__right_value1264=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1230->mName))));
            come_call_finalizer3(__right_value1264,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1249=(struct list$1void$ph*)come_increment_ref_count((klass_1230->mFields)),it_1250=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1249)));            !list$1void$ph$p_end((o2_saved_1249));            it_1250=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1249)))            ){
                multiple_assign_var47=it_1250;
                name_1251=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1252=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1252->mHeap) {
                    char source2_1253[1024];
                    memset(&source2_1253, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1253,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1251,name_1251,name_1251);
                    buffer_append_str(source_1240,source2_1253);
                }
                else if(                list$1sNode$ph$p_length(field_type_1252->mArrayNum)>0) {
                    char source2_1254[1024];
                    memset(&source2_1254, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1254,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1251,name_1251,name_1251);
                    buffer_append_str(source_1240,source2_1254);
                }
                else {
                    char source2_1255[1024];
                    memset(&source2_1255, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1255,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1251,name_1251);
                    buffer_append_str(source_1240,source2_1255);
                }
                (name_1251 = come_decrement_ref_count2(name_1251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1252,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1249,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1240,"return result;");
        buffer_append_char(source_1240,125);
        p_1256=info->p;
        sline_1257=info->sline;
        sname_1258=(char*)come_increment_ref_count(info->sname);
        source3_1259=(struct buffer*)come_increment_ref_count(info->source);
        head_1260=info->head;
        __dec_obj328=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1240);
        come_call_finalizer3(__dec_obj328,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj329=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1228));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1261=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1262=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1263=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1228));
        self_type_1264=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1264->mHeap=(_Bool)0;
        param_types_1265=(struct list$1sType$ph*)come_increment_ref_count((__list_values31___1266[0]=self_type_1264,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3710, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values31___1266)));
        param_names_1268=(struct list$1char$ph*)come_increment_ref_count((__list_values32___1267[0]=((char*)(__right_value1272=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3711, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values32___1267)));
        (__right_value1272 = come_decrement_ref_count2(__right_value1272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1269=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3712, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1269,((void*)0));
        result_type_1262->mStatic=(_Bool)0;
        result_type_1262->mUniq=(_Bool)0;
        result_type_1262->mInline=(_Bool)0;
        result_type_1262->mGenerate=(_Bool)0;
        fun2_1270=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1277=__builtin_string(name_1263)))));
        (__right_value1277 = come_decrement_ref_count2(__right_value1277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1270==((void*)0)||fun2_1270->mExternal) {
            fun_1271=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1263),(struct sType*)come_increment_ref_count(result_type_1262),(struct list$1void$ph*)come_increment_ref_count(param_types_1265),(struct list$1char$ph*)come_increment_ref_count(param_names_1268),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1269),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1261),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1263)),(struct sFun*)come_increment_ref_count(fun_1271));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3731, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1285=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3731, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1271),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1272=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1285,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1273=node_compile(node_1272,info);
            if(            !Value_1273) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value1287=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1274=multiple_assign_var48->v1;
                Err_1275=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1275)?(puts(Err_1275),exit(0)):(0));
                come_call_finalizer3(__right_value1287,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1275 = come_decrement_ref_count2(Err_1275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1227=fun_1271;
            come_call_finalizer3(fun_1271,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1272) ? node_1272 = come_decrement_ref_count2(node_1272, ((struct sNode*)node_1272)->finalize, ((struct sNode*)node_1272)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            cloner_1227=fun2_1270;
        }
        __dec_obj330=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1258);
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1257;
        __dec_obj331=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1259);
        come_call_finalizer3(__dec_obj331,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1256;
        info->head=head_1260;
        info->sline=sline_1257;
        come_call_finalizer3(source_1240,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1258 = come_decrement_ref_count2(sname_1258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1259,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1261,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1262,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1263 = come_decrement_ref_count2(name_1263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1264,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1265,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1268,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1269,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1270,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1226;
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1223);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1224);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1225;
    __result395__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1289=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3759, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1227,(char*)come_increment_ref_count(real_fun_name_1228))));
    (last_code_1223 = come_decrement_ref_count2(last_code_1223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1224 = come_decrement_ref_count2(last_code2_1224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1228 = come_decrement_ref_count2(real_fun_name_1228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1229,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1231 = come_decrement_ref_count2(fun_name2_1231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1289,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1276;
char* __dec_obj334;
char* last_code2_1277;
char* __dec_obj335;
_Bool comma_instead_of_semicolon_1278;
struct sClass* current_stack_frame_struct_1279;
struct sFun* cloner_1280;
void* __right_value1290 = (void*)0;
char* real_fun_name_1281;
void* __right_value1291 = (void*)0;
struct sType* type2_1282;
struct sClass* klass_1283;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
struct buffer* source_1284;
int i_1285;
void* __right_value1294 = (void*)0;
struct list$1void$ph* o2_saved_1286;
struct tuple2$2char$phsType$ph* it_1287;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1288=0;
struct sType* field_type_1289=0;
char* p_1292;
int sline_1293;
char* sname_1294;
struct buffer* source3_1295;
char* head_1296;
struct buffer* __dec_obj336;
void* __right_value1295 = (void*)0;
char* __dec_obj337;
void* __right_value1296 = (void*)0;
struct sBlock* block_1297;
void* __right_value1297 = (void*)0;
void* __right_value1298 = (void*)0;
struct sType* result_type_1298;
void* __right_value1299 = (void*)0;
char* name_1299;
void* __right_value1300 = (void*)0;
struct sType* self_type_1300;
struct sType* __list_values33___1302[1];
void* __right_value1301 = (void*)0;
void* __right_value1302 = (void*)0;
struct list$1void$ph* param_types_1301;
void* __right_value1303 = (void*)0;
char* __list_values34___1303[1];
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
struct list$1char$ph* param_names_1304;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
struct list$1char$ph* param_default_parametors_1305;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
struct sFun* fun2_1306;
void* __right_value1310 = (void*)0;
void* __right_value1311 = (void*)0;
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
struct sFun* fun_1307;
void* __right_value1314 = (void*)0;
void* __right_value1315 = (void*)0;
void* __right_value1316 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1317 = (void*)0;
struct sNode* node_1308;
_Bool Value_1309;
void* __right_value1318 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c29_1310=0;
char* Err_1311=0;
char* __dec_obj338;
struct buffer* __dec_obj339;
char* __dec_obj340;
char* __dec_obj341;
void* __right_value1319 = (void*)0;
void* __right_value1320 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result396__;
    last_code_1276=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1277=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1278=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1279=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1280=((void*)0);
    real_fun_name_1281=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1282=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1282;
    klass_1283=type->mClass;
    if(    type->mPointerNum>0&&!klass_1283->mNumber) {
        source_1284=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3784, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1284,"{\n");
        buffer_append_str(source_1284,"var result = new buffer();\n");
        buffer_append_format(source_1284,"result.append_str(\"%s {\");\n",klass_1283->mName);
        i_1285=0;
        klass_1283=((struct sClass*)((void*)(__right_value1294=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1283->mName))));
        come_call_finalizer3(__right_value1294,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        for(        o2_saved_1286=(struct list$1void$ph*)come_increment_ref_count((klass_1283->mFields)),it_1287=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1286)));        !list$1void$ph$p_end((o2_saved_1286));        it_1287=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1286)))        ){
            multiple_assign_var49=it_1287;
            name_1288=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1289=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1285==list$1void$ph$p_length(klass_1283->mFields)-1) {
                char source2_1290[1024];
                memset(&source2_1290, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1290,1024,"result.append_str(\"%s:\");\n",name_1288);
                buffer_append_str(source_1284,source2_1290);
                snprintf(source2_1290,1024,"result.append_str(self.%s.to_string());\n",name_1288);
                buffer_append_str(source_1284,source2_1290);
            }
            else {
                char source2_1291[1024];
                memset(&source2_1291, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1291,1024,"result.append_str(\"%s:\");\n",name_1288);
                buffer_append_str(source_1284,source2_1291);
                snprintf(source2_1291,1024,"result.append_str(self.%s.to_string());\n",name_1288);
                buffer_append_str(source_1284,source2_1291);
                snprintf(source2_1291,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1284,source2_1291);
            }
            i_1285++;
            (name_1288 = come_decrement_ref_count2(name_1288, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1289,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1286,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1284,"result.append_str(\"}\");\n");
        buffer_append_format(source_1284,"return result.to_string();\n");
        buffer_append_char(source_1284,125);
        p_1292=info->p;
        sline_1293=info->sline;
        sname_1294=(char*)come_increment_ref_count(info->sname);
        source3_1295=(struct buffer*)come_increment_ref_count(info->source);
        head_1296=info->head;
        __dec_obj336=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1284);
        come_call_finalizer3(__dec_obj336,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1281));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1297=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1298=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3845, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1298->mHeap=(_Bool)1;
        name_1299=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1281));
        self_type_1300=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1300->mHeap=(_Bool)0;
        param_types_1301=(struct list$1sType$ph*)come_increment_ref_count((__list_values33___1302[0]=self_type_1300,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3850, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values33___1302)));
        param_names_1304=(struct list$1char$ph*)come_increment_ref_count((__list_values34___1303[0]=((char*)(__right_value1303=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3851, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values34___1303)));
        (__right_value1303 = come_decrement_ref_count2(__right_value1303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1305=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3852, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1305,((void*)0));
        result_type_1298->mStatic=(_Bool)0;
        result_type_1298->mUniq=(_Bool)0;
        result_type_1298->mInline=(_Bool)0;
        result_type_1298->mGenerate=(_Bool)0;
        fun2_1306=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1308=__builtin_string(name_1299)))));
        (__right_value1308 = come_decrement_ref_count2(__right_value1308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1306==((void*)0)||fun2_1306->mExternal) {
            fun_1307=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3862, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1299),(struct sType*)come_increment_ref_count(result_type_1298),(struct list$1void$ph*)come_increment_ref_count(param_types_1301),(struct list$1char$ph*)come_increment_ref_count(param_names_1304),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1305),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1297),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1299)),(struct sFun*)come_increment_ref_count(fun_1307));
            cloner_1280=fun_1307;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3872, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1316=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3872, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1307),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1308=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1316,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1309=node_compile(node_1308,info);
            if(            !Value_1309) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value1318=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1310=multiple_assign_var50->v1;
                Err_1311=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1311)?(puts(Err_1311),exit(0)):(0));
                come_call_finalizer3(__right_value1318,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1311 = come_decrement_ref_count2(Err_1311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1307,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1308) ? node_1308 = come_decrement_ref_count2(node_1308, ((struct sNode*)node_1308)->finalize, ((struct sNode*)node_1308)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            cloner_1280=fun2_1306;
        }
        __dec_obj338=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1294);
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1293;
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1295);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1292;
        info->head=head_1296;
        info->sline=sline_1293;
        come_call_finalizer3(source_1284,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1294 = come_decrement_ref_count2(sname_1294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1295,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1297,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1298,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1299 = come_decrement_ref_count2(name_1299, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1300,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1301,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1304,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1305,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1306,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1279;
    __dec_obj340=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1276);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj341=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1277);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1278;
    __result396__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1320=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3898, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1280,(char*)come_increment_ref_count(real_fun_name_1281))));
    (last_code_1276 = come_decrement_ref_count2(last_code_1276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1277 = come_decrement_ref_count2(last_code2_1277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1281 = come_decrement_ref_count2(real_fun_name_1281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1282,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1320,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1357;
char* __dec_obj352;
char* last_code2_1358;
char* __dec_obj353;
_Bool comma_instead_of_semicolon_1359;
struct sClass* current_stack_frame_struct_1360;
struct sFun* get_hash_key_fun_1361;
void* __right_value1364 = (void*)0;
char* real_fun_name_1362;
void* __right_value1365 = (void*)0;
struct sType* type2_1363;
struct sClass* klass_1364;
void* __right_value1366 = (void*)0;
void* __right_value1367 = (void*)0;
char* none_generics_name_1365;
void* __right_value1368 = (void*)0;
char* generics_fun_name_1366;
void* __right_value1369 = (void*)0;
struct sGenericsFun* generics_fun_1367;
void* __right_value1370 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1368=0;
_Bool err_1369=0;
void* __right_value1371 = (void*)0;
int i_1370;
void* __right_value1372 = (void*)0;
char* new_fun_name_1371;
void* __right_value1373 = (void*)0;
void* __right_value1374 = (void*)0;
char* __dec_obj354;
void* __right_value1375 = (void*)0;
void* __right_value1376 = (void*)0;
void* __right_value1377 = (void*)0;
struct buffer* source_1372;
int i_1373;
void* __right_value1378 = (void*)0;
struct list$1void$ph* o2_saved_1374;
struct tuple2$2char$phsType$ph* it_1375;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1376=0;
struct sType* field_type_1377=0;
char* p_1379;
int sline_1380;
char* sname_1381;
struct buffer* source3_1382;
char* head_1383;
struct buffer* __dec_obj355;
void* __right_value1379 = (void*)0;
char* __dec_obj356;
void* __right_value1380 = (void*)0;
struct sBlock* block_1384;
void* __right_value1381 = (void*)0;
void* __right_value1382 = (void*)0;
struct sType* result_type_1385;
void* __right_value1383 = (void*)0;
char* name_1386;
void* __right_value1384 = (void*)0;
struct sType* self_type_1387;
struct sType* __list_values37___1389[1];
void* __right_value1385 = (void*)0;
void* __right_value1386 = (void*)0;
struct list$1void$ph* param_types_1388;
void* __right_value1387 = (void*)0;
char* __list_values38___1390[1];
void* __right_value1388 = (void*)0;
void* __right_value1389 = (void*)0;
struct list$1char$ph* param_names_1391;
void* __right_value1390 = (void*)0;
void* __right_value1391 = (void*)0;
struct list$1char$ph* param_default_parametors_1392;
void* __right_value1392 = (void*)0;
void* __right_value1393 = (void*)0;
struct sFun* fun2_1393;
void* __right_value1394 = (void*)0;
void* __right_value1395 = (void*)0;
void* __right_value1396 = (void*)0;
void* __right_value1397 = (void*)0;
struct sFun* fun_1394;
void* __right_value1398 = (void*)0;
void* __right_value1399 = (void*)0;
void* __right_value1400 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1401 = (void*)0;
struct sNode* node_1395;
_Bool Value_1396;
void* __right_value1402 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c31_1397=0;
char* Err_1398=0;
char* __dec_obj357;
struct buffer* __dec_obj358;
char* __dec_obj359;
char* __dec_obj360;
void* __right_value1403 = (void*)0;
void* __right_value1404 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result398__;
memset(&i_1370, 0, sizeof(int));
    last_code_1357=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj352=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1358=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj353=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1359=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1360=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1361=((void*)0);
    real_fun_name_1362=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1363=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1363;
    klass_1364=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1361=((struct sFun*)((void*)(__right_value1366=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1362))));
        come_call_finalizer3(__right_value1366,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        get_hash_key_fun_1361==((void*)0)) {
            none_generics_name_1365=(char*)come_increment_ref_count(get_none_generics_name(type2_1363->mClass->mName));
            generics_fun_name_1366=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1365,fun_name));
            generics_fun_1367=((struct sGenericsFun*)((void*)(__right_value1369=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1366))));
            come_call_finalizer3(__right_value1369,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            generics_fun_1367) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1370=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1362),generics_fun_1367,type,info)));
                name_1368=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1369=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1370,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1369) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1361=((struct sFun*)((void*)(__right_value1371=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1368))));
                come_call_finalizer3(__right_value1371,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                (name_1368 = come_decrement_ref_count2(name_1368, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1365 = come_decrement_ref_count2(none_generics_name_1365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1366 = come_decrement_ref_count2(generics_fun_name_1366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1370=128-1;        i_1370>=1;        i_1370--        ){
            new_fun_name_1371=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1362,i_1370));
            get_hash_key_fun_1361=((struct sFun*)((void*)(__right_value1373=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1371))));
            come_call_finalizer3(__right_value1373,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            get_hash_key_fun_1361) {
                __dec_obj354=real_fun_name_1362;
                real_fun_name_1362=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1371));
                __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1371 = come_decrement_ref_count2(new_fun_name_1371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1371 = come_decrement_ref_count2(new_fun_name_1371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1361==((void*)0)) {
            get_hash_key_fun_1361=((struct sFun*)((void*)(__right_value1375=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1362))));
            come_call_finalizer3(__right_value1375,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1361==((void*)0)&&type->mPointerNum>0&&!klass_1364->mNumber&&!klass_1364->mProtocol) {
        source_1372=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4161, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1372,"{\n");
        buffer_append_str(source_1372,"unsigned int result = 0;\n");
        i_1373=0;
        klass_1364=((struct sClass*)((void*)(__right_value1378=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1364->mName))));
        come_call_finalizer3(__right_value1378,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        for(        o2_saved_1374=(struct list$1void$ph*)come_increment_ref_count((klass_1364->mFields)),it_1375=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1374)));        !list$1void$ph$p_end((o2_saved_1374));        it_1375=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1374)))        ){
            multiple_assign_var55=it_1375;
            name_1376=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1377=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1378[1024];
            memset(&source2_1378, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1378,1024,"result += ((int)self.%s).get_hash_key();\n",name_1376);
            buffer_append_str(source_1372,source2_1378);
            i_1373++;
            (name_1376 = come_decrement_ref_count2(name_1376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1377,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1374,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1372,"return result;\n");
        buffer_append_char(source_1372,125);
        p_1379=info->p;
        sline_1380=info->sline;
        sname_1381=(char*)come_increment_ref_count(info->sname);
        source3_1382=(struct buffer*)come_increment_ref_count(info->source);
        head_1383=info->head;
        __dec_obj355=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1372);
        come_call_finalizer3(__dec_obj355,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj356=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1362));
        __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1384=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1385=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4198, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1385->mUnsigned=(_Bool)1;
        name_1386=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1362));
        self_type_1387=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1387->mHeap=(_Bool)0;
        param_types_1388=(struct list$1sType$ph*)come_increment_ref_count((__list_values37___1389[0]=self_type_1387,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4203, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values37___1389)));
        param_names_1391=(struct list$1char$ph*)come_increment_ref_count((__list_values38___1390[0]=((char*)(__right_value1387=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4204, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values38___1390)));
        (__right_value1387 = come_decrement_ref_count2(__right_value1387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1392=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4205, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1392,((void*)0));
        result_type_1385->mStatic=(_Bool)0;
        result_type_1385->mUniq=(_Bool)0;
        result_type_1385->mInline=(_Bool)0;
        result_type_1385->mGenerate=(_Bool)0;
        fun2_1393=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1392=__builtin_string(name_1386)))));
        (__right_value1392 = come_decrement_ref_count2(__right_value1392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1393==((void*)0)||fun2_1393->mExternal) {
            fun_1394=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4215, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1386),(struct sType*)come_increment_ref_count(result_type_1385),(struct list$1void$ph*)come_increment_ref_count(param_types_1388),(struct list$1char$ph*)come_increment_ref_count(param_names_1391),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1392),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1384),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1386)),(struct sFun*)come_increment_ref_count(fun_1394));
            get_hash_key_fun_1361=fun_1394;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4225, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1400=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4225, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1394),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1395=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1400,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1396=node_compile(node_1395,info);
            if(            !Value_1396) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1402=err_msg(info,"compiling error(Y)")));
                come_exception_var_c31_1397=multiple_assign_var56->v1;
                Err_1398=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1398)?(puts(Err_1398),exit(0)):(0));
                come_call_finalizer3(__right_value1402,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1398 = come_decrement_ref_count2(Err_1398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1394,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1395) ? node_1395 = come_decrement_ref_count2(node_1395, ((struct sNode*)node_1395)->finalize, ((struct sNode*)node_1395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            get_hash_key_fun_1361=fun2_1393;
        }
        __dec_obj357=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1381);
        __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1380;
        __dec_obj358=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1382);
        come_call_finalizer3(__dec_obj358,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1379;
        info->head=head_1383;
        info->sline=sline_1380;
        come_call_finalizer3(source_1372,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1381 = come_decrement_ref_count2(sname_1381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1382,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1384,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1385,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1386 = come_decrement_ref_count2(name_1386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1387,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1388,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1391,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1392,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1393,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1360;
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1357);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1358);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1359;
    __result398__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFun$pchar$ph*)(__right_value1404=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4251, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1361,(char*)come_increment_ref_count(real_fun_name_1362))));
    (last_code_1357 = come_decrement_ref_count2(last_code_1357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1358 = come_decrement_ref_count2(last_code2_1358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1362 = come_decrement_ref_count2(real_fun_name_1362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1363,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1404,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

