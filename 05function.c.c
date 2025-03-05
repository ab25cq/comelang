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
char* come_get_sname(void* mem);
int come_get_sline(void* mem);
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
struct smart_pointer$1char$* __result_obj__85;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__85 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__85,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__85;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__88;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__90;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__90 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__90,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__90;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__92;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__92 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__92,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__92;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__95;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__95 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__95,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__95;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__100;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__100 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__100,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__100;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__102;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__102 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__102,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__102;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_184;
struct list$1char$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_184=0;    i_184<num_value;    i_184++    ){
        list$1char$$p_push_back(self,values[i_184]);
    }
    __result_obj__105 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__105,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__105;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_185;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_186;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_187;
struct list$1char$* __result_obj__104;
    if(    self->len==0) {
        litem_185=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1545, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=((void*)0);
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head=litem_185;
    }
    else if(    self->len==1) {
        litem_186=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1555, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->head;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head->next=litem_186;
    }
    else {
        litem_187=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1565, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=self->tail;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail->next=litem_187;
        self->tail=litem_187;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_188;
struct list_item$1char$* prev_it_189;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer3(prev_it_189,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_190;
struct list$1char$p* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_190=0;    i_190<num_value;    i_190++    ){
        list$1char$p$p_push_back(self,values[i_190]);
    }
    __result_obj__108 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__108,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__108;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_191;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_192;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_193;
struct list$1char$p* __result_obj__107;
    if(    self->len==0) {
        litem_191=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1545, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head=litem_191;
    }
    else if(    self->len==1) {
        litem_192=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1555, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->head;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head->next=litem_192;
    }
    else {
        litem_193=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1565, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=self->tail;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail->next=litem_193;
        self->tail=litem_193;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_194;
struct list_item$1char$p* prev_it_195;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer3(prev_it_195,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_196;
struct list$1short$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_196=0;    i_196<num_value;    i_196++    ){
        list$1short$$p_push_back(self,values[i_196]);
    }
    __result_obj__111 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__111,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__111;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_197;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_198;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_199;
struct list$1short$* __result_obj__110;
    if(    self->len==0) {
        litem_197=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1545, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1) {
        litem_198=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1555, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1565, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_200;
struct list_item$1short$* prev_it_201;
    it_200=self->head;
    while(it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        come_call_finalizer3(prev_it_201,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_202;
struct list$1int$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0;    i_202<num_value;    i_202++    ){
        list$1int$$p_push_back(self,values[i_202]);
    }
    __result_obj__114 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__114,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__114;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_203;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_204;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_205;
struct list$1int$* __result_obj__113;
    if(    self->len==0) {
        litem_203=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1545, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1) {
        litem_204=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1555, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1565, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_206;
struct list_item$1int$* prev_it_207;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        come_call_finalizer3(prev_it_207,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_208;
struct list$1long$* __result_obj__117;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_208=0;    i_208<num_value;    i_208++    ){
        list$1long$$p_push_back(self,values[i_208]);
    }
    __result_obj__117 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__117,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__117;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_209;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_210;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_211;
struct list$1long$* __result_obj__116;
    if(    self->len==0) {
        litem_209=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1545, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_209->prev=((void*)0);
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head=litem_209;
    }
    else if(    self->len==1) {
        litem_210=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1555, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_210->prev=self->head;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail=litem_210;
        self->head->next=litem_210;
    }
    else {
        litem_211=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1565, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=self->tail;
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail->next=litem_211;
        self->tail=litem_211;
    }
    self->len++;
    __result_obj__116 = self;
    return __result_obj__116;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_212;
struct list_item$1long$* prev_it_213;
    it_212=self->head;
    while(it_212!=((void*)0)) {
        prev_it_213=it_212;
        it_212=it_212->next;
        come_call_finalizer3(prev_it_213,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_214;
struct list$1float$* __result_obj__120;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_214=0;    i_214<num_value;    i_214++    ){
        list$1float$$p_push_back(self,values[i_214]);
    }
    __result_obj__120 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__120,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__120;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_215;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_216;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_217;
struct list$1float$* __result_obj__119;
    if(    self->len==0) {
        litem_215=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1545, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_215->prev=((void*)0);
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head=litem_215;
    }
    else if(    self->len==1) {
        litem_216=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1555, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_216->prev=self->head;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head->next=litem_216;
    }
    else {
        litem_217=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1565, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=self->tail;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail->next=litem_217;
        self->tail=litem_217;
    }
    self->len++;
    __result_obj__119 = self;
    return __result_obj__119;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_218;
struct list_item$1float$* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        come_call_finalizer3(prev_it_219,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_220;
struct list$1double$* __result_obj__123;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_220=0;    i_220<num_value;    i_220++    ){
        list$1double$$p_push_back(self,values[i_220]);
    }
    __result_obj__123 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__123,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__123;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_221;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_222;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_223;
struct list$1double$* __result_obj__122;
    if(    self->len==0) {
        litem_221=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1545, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_221->prev=((void*)0);
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail=litem_221;
        self->head=litem_221;
    }
    else if(    self->len==1) {
        litem_222=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1555, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_222->prev=self->head;
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail=litem_222;
        self->head->next=litem_222;
    }
    else {
        litem_223=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1565, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_223->prev=self->tail;
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail->next=litem_223;
        self->tail=litem_223;
    }
    self->len++;
    __result_obj__122 = self;
    return __result_obj__122;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_224;
struct list_item$1double$* prev_it_225;
    it_224=self->head;
    while(it_224!=((void*)0)) {
        prev_it_225=it_224;
        it_224=it_224->next;
        come_call_finalizer3(prev_it_225,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_226;
struct vector$1char$* __result_obj__126;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2362, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_226=0;    i_226<num_value;    i_226++    ){
        vector$1char$$p_add(self,values[i_226]);
    }
    __result_obj__126 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__126,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__126;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_227;
char* items_228;
void* __right_value128 = (void*)0;
int i_229;
struct vector$1char$* __result_obj__125;
memset(&i_229, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_227=self->size*2;
        items_228=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_227)), "./comelang.h", 2489, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_229=0;        i_229<self->size;        i_229++        ){
            self->items[i_229]=items_228[i_229];
        }
        self->size=new_size_227;
        come_free(items_228);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__125 = self;
    return __result_obj__125;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_230;
    if(    0) {
        for(        i_230=0;        i_230<self->len;        i_230++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_231;
struct vector$1char$p* __result_obj__129;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2362, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_231=0;    i_231<num_value;    i_231++    ){
        vector$1char$p$p_add(self,values[i_231]);
    }
    __result_obj__129 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__129,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__129;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_232;
char** items_233;
void* __right_value132 = (void*)0;
int i_234;
struct vector$1char$p* __result_obj__128;
memset(&i_234, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_232=self->size*2;
        items_233=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_232)), "./comelang.h", 2489, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_234=0;        i_234<self->size;        i_234++        ){
            self->items[i_234]=items_233[i_234];
        }
        self->size=new_size_232;
        come_free(items_233);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__128 = self;
    return __result_obj__128;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_235;
    if(    0) {
        for(        i_235=0;        i_235<self->len;        i_235++        ){
            (self->items[i_235] = come_decrement_ref_count2(self->items[i_235], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_236;
struct vector$1short$* __result_obj__132;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2362, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_236=0;    i_236<num_value;    i_236++    ){
        vector$1short$$p_add(self,values[i_236]);
    }
    __result_obj__132 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__132,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__132;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_237;
short* items_238;
void* __right_value136 = (void*)0;
int i_239;
struct vector$1short$* __result_obj__131;
memset(&i_239, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_237=self->size*2;
        items_238=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_237)), "./comelang.h", 2489, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_239=0;        i_239<self->size;        i_239++        ){
            self->items[i_239]=items_238[i_239];
        }
        self->size=new_size_237;
        come_free(items_238);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__131 = self;
    return __result_obj__131;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_240;
    if(    0) {
        for(        i_240=0;        i_240<self->len;        i_240++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_241;
struct vector$1int$* __result_obj__135;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2362, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_241=0;    i_241<num_value;    i_241++    ){
        vector$1int$$p_add(self,values[i_241]);
    }
    __result_obj__135 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__135,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__135;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_242;
int* items_243;
void* __right_value140 = (void*)0;
int i_244;
struct vector$1int$* __result_obj__134;
memset(&i_244, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_242=self->size*2;
        items_243=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_242)), "./comelang.h", 2489, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_244=0;        i_244<self->size;        i_244++        ){
            self->items[i_244]=items_243[i_244];
        }
        self->size=new_size_242;
        come_free(items_243);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_245;
    if(    0) {
        for(        i_245=0;        i_245<self->len;        i_245++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_246;
struct vector$1long$* __result_obj__138;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2362, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_246=0;    i_246<num_value;    i_246++    ){
        vector$1long$$p_add(self,values[i_246]);
    }
    __result_obj__138 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__138,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__138;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_247;
long* items_248;
void* __right_value144 = (void*)0;
int i_249;
struct vector$1long$* __result_obj__137;
memset(&i_249, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_247=self->size*2;
        items_248=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_247)), "./comelang.h", 2489, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_249=0;        i_249<self->size;        i_249++        ){
            self->items[i_249]=items_248[i_249];
        }
        self->size=new_size_247;
        come_free(items_248);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__137 = self;
    return __result_obj__137;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_250;
    if(    0) {
        for(        i_250=0;        i_250<self->len;        i_250++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_251;
struct vector$1float$* __result_obj__141;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2362, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_251=0;    i_251<num_value;    i_251++    ){
        vector$1float$$p_add(self,values[i_251]);
    }
    __result_obj__141 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__141,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__141;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_252;
float* items_253;
void* __right_value148 = (void*)0;
int i_254;
struct vector$1float$* __result_obj__140;
memset(&i_254, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_252=self->size*2;
        items_253=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_252)), "./comelang.h", 2489, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_254=0;        i_254<self->size;        i_254++        ){
            self->items[i_254]=items_253[i_254];
        }
        self->size=new_size_252;
        come_free(items_253);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__140 = self;
    return __result_obj__140;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_255;
    if(    0) {
        for(        i_255=0;        i_255<self->len;        i_255++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_256;
struct vector$1double$* __result_obj__144;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2362, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_256=0;    i_256<num_value;    i_256++    ){
        vector$1double$$p_add(self,values[i_256]);
    }
    __result_obj__144 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__144,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__144;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_257;
double* items_258;
void* __right_value152 = (void*)0;
int i_259;
struct vector$1double$* __result_obj__143;
memset(&i_259, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_257=self->size*2;
        items_258=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_257)), "./comelang.h", 2489, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_259=0;        i_259<self->size;        i_259++        ){
            self->items[i_259]=items_258[i_259];
        }
        self->size=new_size_257;
        come_free(items_258);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__143 = self;
    return __result_obj__143;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_260;
    if(    0) {
        for(        i_260=0;        i_260<self->len;        i_260++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__182;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__182 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__182,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__182;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_294;
struct list_item$1char$ph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_299;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_300;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_301;
char* __dec_obj22;
struct list$1char$ph* __result_obj__184;
    if(    self->len==0) {
        litem_299=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1545, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj20=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1555, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj21=litem_300->item;
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1565, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj22=litem_301->item;
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result_obj__184 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__184;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sSemicolonNode* __result_obj__241;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value260 = (void*)0;
char* __result_obj__242;
    __result_obj__242 = come_increment_ref_count(((char*)(__right_value260=__builtin_string("sSemicolonNode"))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__242 = come_decrement_ref_count2(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
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
struct sLambdaNode* __result_obj__243;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value261,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->mFun=fun;
    __result_obj__243 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__244;
    __result_obj__244 = come_increment_ref_count(((char*)(__right_value262=__builtin_string("sLambdaNode"))));
    (__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count2(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_354;
int block_level_355;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_356;
void* __right_value265 = (void*)0;
char* __dec_obj23;
void* __right_value304 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__261;
    come_fun_354=info->come_fun;
    info->come_fun=self->mFun;
    block_level_355=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_355;
    come_value_356=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj23=come_value_356->c_value;
    come_value_356->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=come_value_356->type;
    come_value_356->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_356->var=((void*)0);
    add_come_last_code(info,"%s",come_value_356->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_356));
    info->come_fun=come_fun_354;
    __result_obj__261 = (_Bool)1;
    come_call_finalizer3(come_value_356,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__261;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__245;
void* __right_value266 = (void*)0;
struct sType* result_368;
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
struct sType* __result_obj__259;
    if(    self==(void*)0) {
        __result_obj__245 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__245,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__245;
    }
    result_368=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_368->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_368->mOriginalLoadVarType;
        result_368->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_368->mChannelType;
        result_368->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_368->mGenericsTypes;
        result_368->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_368->mNoSolvedGenericsType;
        result_368->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_368->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_368->mAnyOriginalType;
        result_368->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_368->mSizeNum;
        result_368->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_368->mAlignas;
        result_368->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_368->mTupleName;
        result_368->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_368->mAttribute;
        result_368->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_368->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_368->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_368->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_368->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_368->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_368->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_368->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_368->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_368->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_368->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_368->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_368->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_368->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_368->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_368->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_368->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_368->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_368->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_368->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_368->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_368->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_368->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_368->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_368->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_368->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_368->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_368->mAsmName;
        result_368->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_368->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_368->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_368->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_368->mArrayNum;
        result_368->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_368->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_368->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_368->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_368->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_368->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_368->mOriginalTypeName;
        result_368->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_368->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_368->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_368->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_368->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_368->mParamTypes;
        result_368->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_368->mParamNames;
        result_368->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_368->mResultType;
        result_368->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_368->mVarArgs=self->mVarArgs;
    }
    __result_obj__259 = come_increment_ref_count(result_368);
    come_call_finalizer3(result_368,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__259,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__259;
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
struct list_item$1void$ph* it_357;
struct list_item$1void$ph* prev_it_358;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer3(prev_it_358,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_359;
struct list_item$1sNode$ph* prev_it_360;
    it_359=self->head;
    while(it_359!=((void*)0)) {
        prev_it_360=it_359;
        it_359=it_359->next;
        come_call_finalizer3(prev_it_360,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_361;
    result_361=0;
    result_361+=int_get_hash_key(((int)self->mClass));
    result_361+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_361+=int_get_hash_key(((int)self->mChannelType));
    result_361+=int_get_hash_key(((int)self->mGenericsTypes));
    result_361+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_361+=int_get_hash_key(((int)self->mAnyClass));
    result_361+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_361+=int_get_hash_key(((int)self->mSizeNum));
    result_361+=int_get_hash_key(((int)self->mAlignas));
    result_361+=int_get_hash_key(((int)self->mTupleName));
    result_361+=int_get_hash_key(((int)self->mAttribute));
    result_361+=int_get_hash_key(((int)self->mAllocaValue));
    result_361+=int_get_hash_key(((int)self->mUnsigned));
    result_361+=int_get_hash_key(((int)self->mShort));
    result_361+=int_get_hash_key(((int)self->mLong));
    result_361+=int_get_hash_key(((int)self->mLongLong));
    result_361+=int_get_hash_key(((int)self->mConstant));
    result_361+=int_get_hash_key(((int)self->mAtomic));
    result_361+=int_get_hash_key(((int)self->mRegister));
    result_361+=int_get_hash_key(((int)self->mVolatile));
    result_361+=int_get_hash_key(((int)self->mStatic));
    result_361+=int_get_hash_key(((int)self->mUniq));
    result_361+=int_get_hash_key(((int)self->mRecord));
    result_361+=int_get_hash_key(((int)self->mExtern));
    result_361+=int_get_hash_key(((int)self->mRestrict));
    result_361+=int_get_hash_key(((int)self->mImmutable));
    result_361+=int_get_hash_key(((int)self->mHeap));
    result_361+=int_get_hash_key(((int)self->mChannel));
    result_361+=int_get_hash_key(((int)self->mNoHeap));
    result_361+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_361+=int_get_hash_key(((int)self->mException));
    result_361+=int_get_hash_key(((int)self->mGenerate));
    result_361+=int_get_hash_key(((int)self->mCreateVTable));
    result_361+=int_get_hash_key(((int)self->mDynamic));
    result_361+=int_get_hash_key(((int)self->mInline));
    result_361+=int_get_hash_key(((int)self->mNullValue));
    result_361+=int_get_hash_key(((int)self->mGuardValue));
    result_361+=int_get_hash_key(((int)self->mAsmName));
    result_361+=int_get_hash_key(((int)self->mTypedef));
    result_361+=int_get_hash_key(((int)self->mMultipleTypes));
    result_361+=int_get_hash_key(((int)self->mOriginIsArray));
    result_361+=int_get_hash_key(((int)self->mArrayNum));
    result_361+=int_get_hash_key(((int)self->mPointerNum));
    result_361+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_361+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_361+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_361+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_361+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_361+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_361+=int_get_hash_key(((int)self->mArrayPointerType));
    result_361+=int_get_hash_key(((int)self->mLambdaArray));
    result_361+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_361+=int_get_hash_key(((int)self->mParamTypes));
    result_361+=int_get_hash_key(((int)self->mParamNames));
    result_361+=int_get_hash_key(((int)self->mResultType));
    result_361+=int_get_hash_key(((int)self->mVarArgs));
    return result_361;
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
struct list_item$1void$ph* it_362;
struct list_item$1void$ph* it2_363;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_362=left->head;
    it2_363=right->head;
    while(it_362!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_362->item, it2_363->item)) {
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

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_364;
struct list_item$1sNode$ph* it2_365;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_364=left->head;
    it2_365=right->head;
    while(it_364!=((void*)0)) {
        if(        !sNode_equals(it_364->item,it2_365->item)) {
            return (_Bool)0;
        }
        it_364=it_364->next;
        it2_365=it2_365->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_366;
struct list_item$1char$ph* it2_367;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_366=left->head;
    it2_367=right->head;
    while(it_366!=((void*)0)) {
        if(        !string_equals(it_366->item,it2_367->item)) {
            return (_Bool)0;
        }
        it_366=it_366->next;
        it2_367=it2_367->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__246;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1void$ph* result_370;
struct list_item$1void$ph* it_371;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1void$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_370=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1456, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_371=self->head;
    while(it_371!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_370,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_371->item)));
        }
        else {
            list$1void$ph$p_add(result_370,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_371->item)));
        }
        it_371=it_371->next;
    }
    __result_obj__249 = come_increment_ref_count(result_370);
    come_call_finalizer3(result_370,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_369;
    result_369=0;
    result_369+=int_get_hash_key(((int)self->head));
    result_369+=int_get_hash_key(((int)self->tail));
    result_369+=int_get_hash_key(((int)self->len));
    result_369+=int_get_hash_key(((int)self->it));
    return result_369;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__247;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__247 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value271 = (void*)0;
struct list_item$1void$ph* litem_372;
void* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1void$ph* litem_373;
void* __dec_obj27;
void* __right_value273 = (void*)0;
struct list_item$1void$ph* litem_374;
void* __dec_obj28;
struct list$1void$ph* __result_obj__248;
    if(    self->len==0) {
        litem_372=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value271=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1475, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj26=litem_372->item;
        litem_372->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value272=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1485, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj27=litem_373->item;
        litem_373->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value273=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1495, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj28=litem_374->item;
        litem_374->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result_obj__248 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__248;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_375;
struct list_item$1void$ph* prev_it_376;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        come_call_finalizer3(prev_it_376,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__250;
void* __right_value279 = (void*)0;
struct sNode* result_377;
struct sNode* __result_obj__251;
    if(    self==(void*)0) {
        __result_obj__250 = come_increment_ref_count((void*)0);
        ((__result_obj__250) ? __result_obj__250 = come_decrement_ref_count2(__result_obj__250, ((struct sNode*)__result_obj__250)->finalize, ((struct sNode*)__result_obj__250)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__250;
    }
    result_377=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_377->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_377->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_377->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_377->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_377->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_377->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_377->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_377->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_377->kind=self->kind;
    }
    __result_obj__251 = come_increment_ref_count(result_377);
    ((result_377) ? result_377 = come_decrement_ref_count2(result_377, ((struct sNode*)result_377)->finalize, ((struct sNode*)result_377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__251) ? __result_obj__251 = come_decrement_ref_count2(__result_obj__251, ((struct sNode*)__result_obj__251)->finalize, ((struct sNode*)__result_obj__251)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__252;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* result_378;
struct list_item$1sNode$ph* it_379;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __result_obj__255;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_378=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1456, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_379=self->head;
    while(it_379!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_378,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_379->item)));
        }
        else {
            list$1sNode$ph$p_add(result_378,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_379->item)));
        }
        it_379=it_379->next;
    }
    __result_obj__255 = come_increment_ref_count(result_378);
    come_call_finalizer3(result_378,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__255,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__255;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__253;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__253 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_380;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_381;
struct sNode* __dec_obj38;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_382;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__254;
    if(    self->len==0) {
        litem_380=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1475, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=((void*)0);
        litem_380->next=((void*)0);
        __dec_obj37=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_380;
        self->head=litem_380;
    }
    else if(    self->len==1) {
        litem_381=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1485, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->head;
        litem_381->next=((void*)0);
        __dec_obj38=litem_381->item;
        litem_381->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_381;
        self->head->next=litem_381;
    }
    else {
        litem_382=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1495, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->tail;
        litem_382->next=((void*)0);
        __dec_obj39=litem_382->item;
        litem_382->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_382;
        self->tail=litem_382;
    }
    self->len++;
    __result_obj__254 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__254;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_383;
struct list_item$1sNode$ph* prev_it_384;
    it_383=self->head;
    while(it_383!=((void*)0)) {
        prev_it_384=it_383;
        it_383=it_383->next;
        come_call_finalizer3(prev_it_384,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__256;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* result_385;
struct list_item$1char$ph* it_386;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1char$ph* __result_obj__258;
    if(    self==((void*)0)) {
        __result_obj__256 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__256,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__256;
    }
    result_385=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1456, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_386=self->head;
    while(it_386!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_385,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_386->item)));
        }
        else {
            list$1char$ph$p_add(result_385,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_386->item)));
        }
        it_386=it_386->next;
    }
    __result_obj__258 = come_increment_ref_count(result_385);
    come_call_finalizer3(result_385,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_387;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_388;
char* __dec_obj44;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_389;
char* __dec_obj45;
struct list$1char$ph* __result_obj__257;
    if(    self->len==0) {
        litem_387=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1475, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=((void*)0);
        litem_387->next=((void*)0);
        __dec_obj43=litem_387->item;
        litem_387->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_387;
        self->head=litem_387;
    }
    else if(    self->len==1) {
        litem_388=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1485, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->head;
        litem_388->next=((void*)0);
        __dec_obj44=litem_388->item;
        litem_388->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_388;
        self->head->next=litem_388;
    }
    else {
        litem_389=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1495, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->tail;
        litem_389->next=((void*)0);
        __dec_obj45=litem_389->item;
        litem_389->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_389;
        self->tail=litem_389;
    }
    self->len++;
    __result_obj__257 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__257;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_390;
struct list_item$1char$ph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        come_call_finalizer3(prev_it_391,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_392;
struct CVALUE* __dec_obj49;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_393;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_394;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__260;
    if(    self->len==0) {
        litem_392=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1545, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_392->prev=((void*)0);
        litem_392->next=((void*)0);
        __dec_obj49=litem_392->item;
        litem_392->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_392;
        self->head=litem_392;
    }
    else if(    self->len==1) {
        litem_393=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1555, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_393->prev=self->head;
        litem_393->next=((void*)0);
        __dec_obj50=litem_393->item;
        litem_393->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_393;
        self->head->next=litem_393;
    }
    else {
        litem_394=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1565, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=self->tail;
        litem_394->next=((void*)0);
        __dec_obj51=litem_394->item;
        litem_394->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_394;
        self->tail=litem_394;
    }
    self->len++;
    __result_obj__260 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__260;
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
struct sFunNode* __result_obj__262;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value308,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj52=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj52,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__262 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__262,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__262;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__263;
    __result_obj__263 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sFunNode"))));
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__263 = come_decrement_ref_count2(__result_obj__263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__263;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_395;
int block_level_396;
void* __right_value310 = (void*)0;
    come_fun_395=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_396=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_396;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value310=xsprintf("come_heap_final();\n"))));
            (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_395;
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
struct sBlock* __result_obj__264;
    __dec_obj53=self->mNodes;
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05function.c", 117, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj53,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__264 = come_increment_ref_count(self);
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__264,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
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
struct sGenericsFun* __result_obj__265;
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
    __result_obj__265 = come_increment_ref_count(self);
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__265,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__265;
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
struct sBlock* result_397;
int sline_top_398;
int block_level_399;
char* p_saved_400;
int sline_saved_401;
char* sname_saved_402;
void* __right_value319 = (void*)0;
char* __dec_obj64;
char* __dec_obj65;
struct map$2void$phvoid$ph* __dec_obj66;
char* p_407;
int sline_408;
void* __right_value320 = (void*)0;
char* sname_409;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* module_name_410;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1char$ph* params_411;
void* __right_value325 = (void*)0;
char* word_412;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_413=0;
char* Err_414=0;
void* __right_value327 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_415=0;
char* Err_416=0;
void* __right_value328 = (void*)0;
char* __dec_obj67;
void* __right_value329 = (void*)0;
char* __dec_obj68;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
_Bool _if_conditional1;
void* __right_value332 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_420=0;
char* Err_421=0;
struct sBlock* __result_obj__270;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sClassModule* module_422;
void* __right_value335 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_423=0;
char* Err_424=0;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj71;
int i_438;
struct list$1char$ph* o2_saved_439;
char* it_442;
void* __right_value350 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
char* __dec_obj72;
void* __right_value362 = (void*)0;
struct sNode* node_492;
void* __right_value363 = (void*)0;
char* __dec_obj73;
void* __right_value364 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_493=0;
char* Err_494=0;
_Bool omit_semicolon_498;
void* __right_value368 = (void*)0;
char* __dec_obj77;
char* head_513;
void* __right_value369 = (void*)0;
struct sNode* value_514;
char* tail_515;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sNode* node_517;
void* __right_value373 = (void*)0;
char* __dec_obj79;
struct sNode* node_518;
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
int come_exception_var_c6_520=0;
char* Err_521=0;
_Bool omit_semicolon_522;
char* p_523;
char* head_524;
void* __right_value381 = (void*)0;
char* source_525;
void* __right_value382 = (void*)0;
struct sNode* node_526;
void* __right_value383 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_527=0;
char* Err_528=0;
struct sBlock* __result_obj__315;
node_518 = (void*)0;
    result_397=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 155, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_398=info->sline_top;
    info->sline_top=info->sline;
    block_level_399=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_400=((void*)0);
        sline_saved_401=0;
        sname_saved_402=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_400) {
                if(                *info->p==0) {
                    info->p=p_saved_400;
                    info->sline=sline_saved_401;
                    __dec_obj64=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_402));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_400=((void*)0);
                    sline_saved_401=0;
                    __dec_obj65=sname_saved_402;
                    sname_saved_402=((void*)0);
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
            p_407=info->p;
            sline_408=info->sline;
            sname_409=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_408;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value321=parse_word(info)));
                (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_410=(char*)come_increment_ref_count(parse_word(info));
                params_411=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 211, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_412=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_411,(char*)come_increment_ref_count(word_412));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"invalid source end")));
                            come_exception_var_c1_413=multiple_assign_var1->v1;
                            Err_414=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_414)?(puts(Err_414),exit(0)):(0));
                            come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_414 = come_decrement_ref_count2(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_412 = come_decrement_ref_count2(word_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value327=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_415=multiple_assign_var2->v1;
                            Err_416=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_416)?(puts(Err_416),exit(0)):(0));
                            come_call_finalizer3(__right_value327,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_416 = come_decrement_ref_count2(Err_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_412 = come_decrement_ref_count2(word_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_400=info->p;
                sline_saved_401=info->sline;
                __dec_obj67=sname_saved_402;
                sname_saved_402=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj68=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_410));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)((void*)(__right_value331=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value330=__builtin_string(module_name_410)))))))==((void*)0))),                (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value331,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value332=err_msg(info,"module not found")));
                    come_exception_var_c3_420=multiple_assign_var3->v1;
                    Err_421=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_421)?(puts(Err_421),exit(0)):(0));
                    come_call_finalizer3(__right_value332,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__270 = come_increment_ref_count(((void*)0));
                    (Err_421 = come_decrement_ref_count2(Err_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_410 = come_decrement_ref_count2(module_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_411,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_409 = come_decrement_ref_count2(sname_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_402 = come_decrement_ref_count2(sname_saved_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_397,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__270,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__270;
                    (Err_421 = come_decrement_ref_count2(Err_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_422=((struct sClassModule*)((void*)(__right_value334=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value333=__builtin_string(module_name_410)))))));
                (__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value334,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                list$1char$ph$p_length(module_422->mParams)!=list$1char$ph$p_length(params_411)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value335=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_423=multiple_assign_var4->v1;
                    Err_424=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_424)?(puts(Err_424),exit(0)):(0));
                    come_call_finalizer3(__right_value335,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_424 = come_decrement_ref_count2(Err_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj71=info->module_params;
                info->module_params=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "05function.c", 265, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
                come_call_finalizer3(__dec_obj71,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_438=0;
                for(                o2_saved_439=(struct list$1char$ph*)come_increment_ref_count((module_422->mParams)),it_442=list$1char$ph$p_begin((o2_saved_439));                !list$1char$ph$p_end((o2_saved_439));                it_442=list$1char$ph$p_next((o2_saved_439))                ){
                    map$2void$phvoid$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_442)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value359=list$1char$ph$p_operator_load_element(params_411,i_438))))));
                    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_438++;
                }
                come_call_finalizer3(o2_saved_439,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_422->mText;
                info->sline=module_422->mSLine;
                __dec_obj72=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_422->mSName));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_410 = come_decrement_ref_count2(module_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_411,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_492=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj73=info->sname;
            info->sname=(char*)come_increment_ref_count(node_492->sname(node_492->_protocol_obj));
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_492->sline(node_492->_protocol_obj);
            if(            node_492==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value364=err_msg(info,"Invalid expression")));
                come_exception_var_c5_493=multiple_assign_var5->v1;
                Err_494=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_494)?(puts(Err_494),exit(0)):(0));
                come_call_finalizer3(__right_value364,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_494 = come_decrement_ref_count2(Err_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_397->mNodes,(struct sNode*)come_increment_ref_count(node_492));
            parse_sharp_v5(info);
            if(            node_492->terminated(node_492->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_498=(_Bool)1;
            if(            node_492->terminated(node_492->_protocol_obj)) {
                omit_semicolon_498=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_498=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_397->mOmitSemicolon=omit_semicolon_498;
                if(                omit_semicolon_498&&in_function) {
                    list$1sNode$ph$p_delete(result_397->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_407;
                    info->sline=sline_408;
                    __dec_obj77=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_409));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_513=info->p;
                    value_514=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_515=info->p;
                    __dec_obj78=value_514;
                    value_514=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_514),info));
                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_516[tail_515-head_513+1];
                    memset(&buf_516, 0, sizeof(char)                    *(tail_515-head_513+1)                    );
                    memcpy(buf_516,head_513,tail_515-head_513);
                    buf_516[tail_515-head_513]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_517=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_514),(char*)come_increment_ref_count(__builtin_string(buf_516)),info));
                    list$1sNode$ph$p_push_back(result_397->mNodes,(struct sNode*)come_increment_ref_count(node_517));
                    ((value_514) ? value_514 = come_decrement_ref_count2(value_514, ((struct sNode*)value_514)->finalize, ((struct sNode*)value_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_517) ? node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_409 = come_decrement_ref_count2(sname_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_492) ? node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_514) ? value_514 = come_decrement_ref_count2(value_514, ((struct sNode*)value_514)->finalize, ((struct sNode*)value_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_517) ? node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_409 = come_decrement_ref_count2(sname_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_492) ? node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_409 = come_decrement_ref_count2(sname_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_492) ? node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_400) {
            if(            info->p==0) {
                info->p=p_saved_400;
                info->sline=sline_saved_401;
                __dec_obj79=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_402));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_400=((void*)0);
                sline_saved_401=0;
            }
        }
        (sname_saved_402 = come_decrement_ref_count2(sname_saved_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            __dec_obj81=node_518;
            node_518=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value375,sSemicolonNode_finalize, 0, 1, 0, 0, (void*)0);
            list$1sNode$ph$p_push_back(result_397->mNodes,(struct sNode*)come_increment_ref_count(node_518));
        }
        else {
            __dec_obj82=node_518;
            node_518=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_518==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value380=err_msg(info,"Invalid expression")));
                come_exception_var_c6_520=multiple_assign_var6->v1;
                Err_521=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_521)?(puts(Err_521),exit(0)):(0));
                come_call_finalizer3(__right_value380,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_521 = come_decrement_ref_count2(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_518->terminated(node_518->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_522=(_Bool)1;
            if(            node_518->terminated(node_518->_protocol_obj)) {
                omit_semicolon_522=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_522=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_397->mOmitSemicolon=omit_semicolon_522;
            list$1sNode$ph$p_push_back(result_397->mNodes,(struct sNode*)come_increment_ref_count(node_518));
        }
        ((node_518) ? node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_523=info->p;
        head_524=info->head;
        source_525=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_525;
        info->head=source_525;
        node_526=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_526==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value383=err_msg(info,"Invalid expression")));
            come_exception_var_c7_527=multiple_assign_var7->v1;
            Err_528=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_528)?(puts(Err_528),exit(0)):(0));
            come_call_finalizer3(__right_value383,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_397->mNodes,(struct sNode*)come_increment_ref_count(node_526));
        info->p=p_523;
        info->head=head_524;
        (source_525 = come_decrement_ref_count2(source_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_526) ? node_526 = come_decrement_ref_count2(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_399;
    __result_obj__315 = come_increment_ref_count(result_397);
    come_call_finalizer3(result_397,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__315,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__315;
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
int i_403;
int i_404;
    for(    i_403=0;    i_403<self->size;    i_403++    ){
        if(        self->item_existance[i_403]) {
            if(            1) {
                come_call_finalizer3(self->items[i_403],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_404=0;    i_404<self->size;    i_404++    ){
        if(        self->item_existance[i_404]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_404],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_405;
struct list_item$1void$p* prev_it_406;
    it_405=self->head;
    while(it_405!=((void*)0)) {
        prev_it_406=it_405;
        it_405=it_405->next;
        come_call_finalizer3(prev_it_406,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* default_value_417;
unsigned int hash_418;
unsigned int it_419;
void* __result_obj__266;
void* __result_obj__267;
void* __result_obj__268;
void* __result_obj__269;
default_value_417 = (void*)0;
    memset(&default_value_417,0,sizeof(void*));
    hash_418=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_419=hash_418;
    while((_Bool)1) {
        if(        self->item_existance[it_419]) {
            if(            come_call_equals((void*)0, self->keys[it_419], ((char*)key))) {
                __result_obj__266 = come_increment_ref_count(self->items[it_419]);
                come_call_finalizer3(default_value_417,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__266,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__266;
            }
            it_419++;
            if(            it_419>=self->size) {
                it_419=0;
            }
            else if(            it_419==hash_418) {
                __result_obj__267 = come_increment_ref_count(((struct sClassModule*)default_value_417));
                come_call_finalizer3(default_value_417,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__267,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__267;
            }
        }
        else {
            __result_obj__268 = come_increment_ref_count(((struct sClassModule*)default_value_417));
            come_call_finalizer3(default_value_417,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__268,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__268;
        }
    }
    __result_obj__269 = come_increment_ref_count(((struct sClassModule*)default_value_417));
    come_call_finalizer3(default_value_417,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__269,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__269;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_425;
int i_426;
    for(    i_425=0;    i_425<self->size;    i_425++    ){
        if(        self->item_existance[i_425]) {
            if(            1) {
                come_call_finalizer3(self->items[i_425],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_426=0;    i_426<self->size;    i_426++    ){
        if(        self->item_existance[i_426]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_426],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
struct map$2void$phvoid$ph* __result_obj__271;
void* __right_value336 = (void*)0;
struct map$2void$phvoid$ph* result_427;
void* __right_value342 = (void*)0;
struct list$1void$p* __dec_obj69;
struct map$2void$phvoid$ph* __result_obj__276;
    if(    self==(void*)0) {
        __result_obj__271 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__271,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__271;
    }
    result_427=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_427->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_427->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_427->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_427->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_427->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj69=result_427->key_list;
        result_427->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj69,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_427->it=self->it;
    }
    __result_obj__276 = come_increment_ref_count(result_427);
    come_call_finalizer3(result_427,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__276,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__276;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
struct list$1void$p* __result_obj__272;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1void$p* result_429;
struct list_item$1void$p* it_430;
struct list$1void$p* __result_obj__275;
    if(    self==((void*)0)) {
        __result_obj__272 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__272,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__272;
    }
    result_429=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1456, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_430=self->head;
    while(it_430!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_429,it_430->item);
        }
        else {
            list$1void$p$p_add(result_429,it_430->item);
        }
        it_430=it_430->next;
    }
    __result_obj__275 = come_increment_ref_count(result_429);
    come_call_finalizer3(result_429,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__275,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__275;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_428;
    result_428=0;
    result_428+=int_get_hash_key(((int)self->head));
    result_428+=int_get_hash_key(((int)self->tail));
    result_428+=int_get_hash_key(((int)self->len));
    result_428+=int_get_hash_key(((int)self->it));
    return result_428;
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
struct list$1void$p* __result_obj__273;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__273 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__273,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__273;
}

static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item){
void* __right_value339 = (void*)0;
struct list_item$1void$p* litem_431;
void* __right_value340 = (void*)0;
struct list_item$1void$p* litem_432;
void* __right_value341 = (void*)0;
struct list_item$1void$p* litem_433;
struct list$1void$p* __result_obj__274;
    if(    self->len==0) {
        litem_431=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value339=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1475, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_431->prev=((void*)0);
        litem_431->next=((void*)0);
        litem_431->item=item;
        self->tail=litem_431;
        self->head=litem_431;
    }
    else if(    self->len==1) {
        litem_432=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value340=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1485, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=self->head;
        litem_432->next=((void*)0);
        litem_432->item=item;
        self->tail=litem_432;
        self->head->next=litem_432;
    }
    else {
        litem_433=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value341=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1495, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_433->prev=self->tail;
        litem_433->next=((void*)0);
        litem_433->item=item;
        self->tail->next=litem_433;
        self->tail=litem_433;
    }
    self->len++;
    __result_obj__274 = self;
    return __result_obj__274;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_434;
struct list_item$1void$p* prev_it_435;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        prev_it_435=it_434;
        it_434=it_434->next;
        come_call_finalizer3(prev_it_435,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_436;
    result_436=0;
    result_436+=int_get_hash_key(((int)self->keys));
    result_436+=int_get_hash_key(((int)self->item_existance));
    result_436+=int_get_hash_key(((int)self->items));
    result_436+=int_get_hash_key(((int)self->size));
    result_436+=int_get_hash_key(((int)self->len));
    result_436+=int_get_hash_key(((int)self->key_list));
    result_436+=int_get_hash_key(((int)self->it));
    return result_436;
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
int i_437;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1void$p* __dec_obj70;
struct map$2void$phvoid$ph* __result_obj__278;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value344=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2751, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value345=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2752, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2753, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_437=0;    i_437<128;    i_437++    ){
        self->item_existance[i_437]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj70=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2763, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj70,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__278 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__278,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__278;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__277;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__277 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__277,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__277;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_440;
char* __result_obj__279;
char* __result_obj__280;
char* result_441;
char* __result_obj__281;
result_440 = (void*)0;
result_441 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_440,0,sizeof(char*));
        __result_obj__279 = result_440;
        return __result_obj__279;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__280 = self->it->item;
        return __result_obj__280;
    }
    memset(&result_441,0,sizeof(char*));
    __result_obj__281 = result_441;
    return __result_obj__281;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_443;
char* __result_obj__282;
char* __result_obj__283;
char* result_444;
char* __result_obj__284;
result_443 = (void*)0;
result_444 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_443,0,sizeof(char*));
        __result_obj__282 = result_443;
        return __result_obj__282;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__283 = self->it->item;
        return __result_obj__283;
    }
    memset(&result_444,0,sizeof(char*));
    __result_obj__284 = result_444;
    return __result_obj__284;
}

static void map$2void$phvoid$ph$p_operator_store_element(struct map$2void$phvoid$ph* self, void* key, void* item){
    map$2void$phvoid$ph$p_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_462;
unsigned int it_463;
_Bool same_key_exist_480;
char* it2_483;
struct map$2void$phvoid$ph* __result_obj__306;
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
    __result_obj__306 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__306;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_445;
void* __right_value351 = (void*)0;
void** keys_446;
void* __right_value352 = (void*)0;
void** items_447;
void* __right_value353 = (void*)0;
_Bool* item_existance_448;
int len_449;
void* it_452;
void* default_value_455;
void* __right_value354 = (void*)0;
void* it2_456;
unsigned int hash_459;
int n_460;
void* default_value_461;
void* __right_value355 = (void*)0;
default_value_455 = (void*)0;
default_value_461 = (void*)0;
    size_445=self->size*10;
    keys_446=(void**)come_increment_ref_count(((void**)(__right_value351=(void**)come_calloc(1, sizeof(void*)*(1*(size_445)), "./comelang.h", 2990, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_447=(void**)come_increment_ref_count(((void**)(__right_value352=(void**)come_calloc(1, sizeof(void*)*(1*(size_445)), "./comelang.h", 2991, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_448=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_445)), "./comelang.h", 2992, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_449=0;
    for(    it_452=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_452=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_455,0,sizeof(void*));
        it2_456=((void*)(__right_value354=map$2void$phvoid$ph$p_at(self,it_452,(void*)come_increment_ref_count(default_value_455))));
        come_call_finalizer3(__right_value354,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
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
                items_447[n_460]=((void*)(__right_value355=map$2void$phvoid$ph$p_at(self,it_452,(void*)come_increment_ref_count(default_value_461))));
                come_call_finalizer3(__right_value355,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
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
void* result_450;
void* __result_obj__285;
void* __result_obj__286;
void* result_451;
void* __result_obj__287;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_450,0,sizeof(void*));
        __result_obj__285 = result_450;
        return __result_obj__285;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__286 = self->key_list->it->item;
        return __result_obj__286;
    }
    memset(&result_451,0,sizeof(void*));
    __result_obj__287 = result_451;
    return __result_obj__287;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_453;
void* __result_obj__288;
void* __result_obj__289;
void* result_454;
void* __result_obj__290;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_453,0,sizeof(void*));
        __result_obj__288 = result_453;
        return __result_obj__288;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__289 = self->key_list->it->item;
        return __result_obj__289;
    }
    memset(&result_454,0,sizeof(void*));
    __result_obj__290 = result_454;
    return __result_obj__290;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_457;
unsigned int it_458;
void* __result_obj__291;
void* __result_obj__292;
void* __result_obj__293;
void* __result_obj__294;
    hash_457=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_458=hash_457;
    while((_Bool)1) {
        if(        self->item_existance[it_458]) {
            if(            come_call_equals((void*)0, self->keys[it_458], key)) {
                __result_obj__291 = come_increment_ref_count(self->items[it_458]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__291,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__291;
            }
            it_458++;
            if(            it_458>=self->size) {
                it_458=0;
            }
            else if(            it_458==hash_457) {
                __result_obj__292 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__292,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__292;
            }
        }
        else {
            __result_obj__293 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__293,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__293;
        }
    }
    __result_obj__294 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__294,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__294;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_464;
struct list_item$1void$p* it_465;
struct list$1void$p* __result_obj__298;
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
    __result_obj__298 = self;
    return __result_obj__298;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_466;
struct list$1void$p* __result_obj__295;
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
struct list$1void$p* __result_obj__297;
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
        __result_obj__295 = self;
        return __result_obj__295;
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
    __result_obj__297 = self;
    return __result_obj__297;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_467;
struct list_item$1void$p* prev_it_468;
struct list$1void$p* __result_obj__296;
    it_467=self->head;
    while(it_467!=((void*)0)) {
        prev_it_468=it_467;
        it_467=it_467->next;
        come_call_finalizer3(prev_it_468,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__296 = self;
    return __result_obj__296;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_481;
void* __result_obj__299;
void* __result_obj__300;
void* result_482;
void* __result_obj__301;
result_481 = (void*)0;
result_482 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_481,0,sizeof(void*));
        __result_obj__299 = result_481;
        return __result_obj__299;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        return __result_obj__300;
    }
    memset(&result_482,0,sizeof(void*));
    __result_obj__301 = result_482;
    return __result_obj__301;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_484;
void* __result_obj__302;
void* __result_obj__303;
void* result_485;
void* __result_obj__304;
result_484 = (void*)0;
result_485 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_484,0,sizeof(void*));
        __result_obj__302 = result_484;
        return __result_obj__302;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__303 = self->it->item;
        return __result_obj__303;
    }
    memset(&result_485,0,sizeof(void*));
    __result_obj__304 = result_485;
    return __result_obj__304;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value356 = (void*)0;
struct list_item$1void$p* litem_486;
void* __right_value357 = (void*)0;
struct list_item$1void$p* litem_487;
void* __right_value358 = (void*)0;
struct list_item$1void$p* litem_488;
struct list$1void$p* __result_obj__305;
    if(    self->len==0) {
        litem_486=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value356=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1545, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1) {
        litem_487=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value357=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1555, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        litem_487->item=item;
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value358=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1565, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        litem_488->item=item;
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result_obj__305 = self;
    return __result_obj__305;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_489;
int i_490;
char* __result_obj__307;
char* default_value_491;
char* __result_obj__308;
default_value_491 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_489=self->head;
    i_490=0;
    while(it_489!=((void*)0)) {
        if(        position==i_490) {
            __result_obj__307 = come_increment_ref_count(it_489->item);
            (__result_obj__307 = come_decrement_ref_count2(__result_obj__307, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__307;
        }
        it_489=it_489->next;
        i_490++;
    }
    memset(&default_value_491,0,sizeof(char*));
    __result_obj__308 = come_increment_ref_count(default_value_491);
    (default_value_491 = come_decrement_ref_count2(default_value_491, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__308 = come_decrement_ref_count2(__result_obj__308, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__308;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value365 = (void*)0;
struct list_item$1sNode$ph* litem_495;
struct sNode* __dec_obj74;
void* __right_value366 = (void*)0;
struct list_item$1sNode$ph* litem_496;
struct sNode* __dec_obj75;
void* __right_value367 = (void*)0;
struct list_item$1sNode$ph* litem_497;
struct sNode* __dec_obj76;
struct list$1sNode$ph* __result_obj__309;
    if(    self->len==0) {
        litem_495=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value365=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1545, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_495->prev=((void*)0);
        litem_495->next=((void*)0);
        __dec_obj74=litem_495->item;
        litem_495->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_495;
        self->head=litem_495;
    }
    else if(    self->len==1) {
        litem_496=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value366=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1555, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_496->prev=self->head;
        litem_496->next=((void*)0);
        __dec_obj75=litem_496->item;
        litem_496->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_496;
        self->head->next=litem_496;
    }
    else {
        litem_497=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value367=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1565, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_497->prev=self->tail;
        litem_497->next=((void*)0);
        __dec_obj76=litem_497->item;
        litem_497->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_497;
        self->tail=litem_497;
    }
    self->len++;
    __result_obj__309 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__309;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_499;
struct list$1sNode$ph* __result_obj__310;
struct list_item$1sNode$ph* it_502;
int i_503;
struct list_item$1sNode$ph* prev_it_504;
struct list_item$1sNode$ph* it_505;
int i_506;
struct list_item$1sNode$ph* prev_it_507;
struct list_item$1sNode$ph* it_508;
struct list_item$1sNode$ph* head_prev_it_509;
struct list_item$1sNode$ph* tail_it_510;
int i_511;
struct list_item$1sNode$ph* prev_it_512;
struct list$1sNode$ph* __result_obj__312;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_499=tail;
        tail=head;
        head=tmp_499;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__310 = self;
        return __result_obj__310;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph$p_reset(self);
    }
    else if(    head==0) {
        it_502=self->head;
        i_503=0;
        while(it_502!=((void*)0)) {
            if(            i_503<tail) {
                prev_it_504=it_502;
                it_502=it_502->next;
                i_503++;
                come_call_finalizer3(prev_it_504,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_503==tail) {
                self->head=it_502;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_502=it_502->next;
                i_503++;
            }
        }
    }
    else if(    tail==self->len) {
        it_505=self->head;
        i_506=0;
        while(it_505!=((void*)0)) {
            if(            i_506==head) {
                self->tail=it_505->prev;
                self->tail->next=((void*)0);
            }
            if(            i_506>=head) {
                prev_it_507=it_505;
                it_505=it_505->next;
                i_506++;
                come_call_finalizer3(prev_it_507,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_505=it_505->next;
                i_506++;
            }
        }
    }
    else {
        it_508=self->head;
        head_prev_it_509=((void*)0);
        tail_it_510=((void*)0);
        i_511=0;
        while(it_508!=((void*)0)) {
            if(            i_511==head) {
                head_prev_it_509=it_508->prev;
            }
            if(            i_511==tail) {
                tail_it_510=it_508;
            }
            if(            i_511>=head&&i_511<tail) {
                prev_it_512=it_508;
                it_508=it_508->next;
                i_511++;
                come_call_finalizer3(prev_it_512,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_508=it_508->next;
                i_511++;
            }
        }
        if(        head_prev_it_509!=((void*)0)) {
            head_prev_it_509->next=tail_it_510;
        }
        if(        tail_it_510!=((void*)0)) {
            tail_it_510->prev=head_prev_it_509;
        }
    }
    __result_obj__312 = self;
    return __result_obj__312;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_500;
struct list_item$1sNode$ph* prev_it_501;
struct list$1sNode$ph* __result_obj__311;
    it_500=self->head;
    while(it_500!=((void*)0)) {
        prev_it_501=it_500;
        it_500=it_500->next;
        come_call_finalizer3(prev_it_501,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__311 = self;
    return __result_obj__311;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__313;
void* __right_value376 = (void*)0;
struct sSemicolonNode* result_519;
void* __right_value377 = (void*)0;
char* __dec_obj80;
struct sSemicolonNode* __result_obj__314;
    if(    self==(void*)0) {
        __result_obj__313 = (void*)0;
        return __result_obj__313;
    }
    result_519=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_519->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj80=result_519->sname;
        result_519->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_519->sline_real=self->sline_real;
    }
    __result_obj__314 = result_519;
    come_call_finalizer3(result_519,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_529;
struct sVarTable* old_table_530;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sVarTable* __dec_obj89;
struct sVarTable* current_loop_vtable_543;
int i_544;
struct list$1char$ph* o2_saved_545;
char* name_546;
void* __right_value404 = (void*)0;
struct sType* type_547;
void* __right_value405 = (void*)0;
int block_level_551;
int i_552;
struct list$1sNode$ph* o2_saved_553;
struct sNode* node_556;
struct list$1void$ph* right_value_objects_559;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1void$ph* __dec_obj90;
char* __dec_obj91;
char* __dec_obj92;
int stack_num_before_560;
int sline_561;
void* __right_value408 = (void*)0;
char* sname_562;
void* __right_value409 = (void*)0;
char* __dec_obj93;
_Bool Value_563;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_564;
void* __right_value416 = (void*)0;
struct CVALUE* come_value2_565;
void* __right_value417 = (void*)0;
char* __dec_obj98;
void* __right_value418 = (void*)0;
struct CVALUE* come_value2_567;
struct sVar* var__568;
void* __right_value419 = (void*)0;
struct CVALUE* come_value3_569;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_572=0;
char* Err_573=0;
_Bool _if_conditional2;
int __result_obj__333;
void* __right_value422 = (void*)0;
struct sType* __dec_obj99;
void* __right_value423 = (void*)0;
char* c_value_574;
void* __right_value424 = (void*)0;
char* __dec_obj100;
void* __right_value425 = (void*)0;
char* __dec_obj101;
void* __right_value426 = (void*)0;
char* __dec_obj102;
_Bool Value_575;
void* __right_value427 = (void*)0;
char* __dec_obj103;
struct list$1void$ph* __dec_obj104;
void* __if_result__0_578 = (void*)0;
struct list$1void$ph* o2_saved_579;
struct sVar* it_582;
void* __right_value428 = (void*)0;
struct list$1void$ph* __dec_obj105;
memset(&i_544, 0, sizeof(int));
memset(&i_552, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_529=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_530=info->lv_table;
    if(    !no_var_table) {
        __dec_obj89=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 443, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_530));
        come_call_finalizer3(__dec_obj89,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_543=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_545=(param_names),name_546=list$1char$ph$p_begin((o2_saved_545));        !list$1char$ph$p_end((o2_saved_545));        name_546=list$1char$ph$p_next((o2_saved_545))        ){
            type_547=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types,i_544));
            type_547->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_546,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_547)),info,(_Bool)1);
            i_544++;
            come_call_finalizer3(type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_551=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_553=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_556=list$1sNode$ph$p_begin((o2_saved_553));        !list$1sNode$ph$p_end((o2_saved_553));        node_556=list$1sNode$ph$p_next((o2_saved_553))        ){
            right_value_objects_559=(struct list$1void$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj90=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 481, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            come_call_finalizer3(__dec_obj90,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj91=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj92=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_560=list$1CVALUE$ph$p_length(info->stack);
            sline_561=info->sline;
            sname_562=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_556->sline(node_556->_protocol_obj);
            __dec_obj93=info->sname;
            info->sname=(char*)come_increment_ref_count(node_556->sname(node_556->_protocol_obj));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_552==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_563=node_compile(node_556,info);
                if(                !Value_563) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_560+1) {
                    come_value_564=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_564->type->mClass->mName,"void")&&come_value_564->type->mPointerNum==0) {
                        come_value2_565=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_564));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_565));
                        __dec_obj98=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_565->c_value));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_565,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_567=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_564));
                        var__568=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__568) {
                            come_value3_569=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 517, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__568->mType->mClass=="void"&&var__568->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value421=check_assign_type("invalid if result value",var__568->mType,((struct sType*)(__right_value420=come_call_cloner(sType_clone, come_value_564->type))),come_value3_569,info,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_572=multiple_assign_var8->v1;
                                Err_573=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_573)),                                come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value421,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result_obj__333 = (_Bool)1;
                                    (Err_573 = come_decrement_ref_count2(Err_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_564,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_559,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_562 = come_decrement_ref_count2(sname_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_553,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__333;
                                }
                                else {
                                }
                                (Err_573 = come_decrement_ref_count2(Err_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj99=var__568->mType;
                            var__568->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_564->type));
                            come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_564->type->mHeap) {
                                c_value_574=(char*)come_increment_ref_count(increment_ref_count_object(come_value_564->type,come_value_564->c_value,info));
                                __dec_obj100=come_value2_567->c_value;
                                come_value2_567->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__568->mCValueName,c_value_574));
                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_574 = come_decrement_ref_count2(c_value_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj101=come_value2_567->c_value;
                                come_value2_567->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__568->mCValueName,come_value_564->c_value));
                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_567));
                        __dec_obj102=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_567->c_value));
                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_564,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_575=node_compile(node_556,info);
                if(                !Value_575) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_561;
            __dec_obj103=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_562));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_560);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1void$ph$p_reset(info->right_value_objects);
            }
            __dec_obj104=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_559);
            come_call_finalizer3(__dec_obj104,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_552++;
            come_call_finalizer3(right_value_objects_559,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (sname_562 = come_decrement_ref_count2(sname_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_553,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_551==0) {
            for(            o2_saved_579=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_582=((struct sVar*)list$1void$ph$p_begin((o2_saved_579)));            !list$1void$ph$p_end((o2_saved_579));            it_582=((struct sVar*)list$1void$ph$p_next((o2_saved_579)))            ){
                free_object(((struct sType*)(__right_value428=come_call_cloner(sType_clone, it_582->mType))),it_582->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_579,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj105=info->match_it_var;
            __if_result__0_578=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj105,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_578,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_530;
    info->block_level=block_level_551;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_543;
    info->inhibits_output_code=inhibits_output_code_529;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__316;
void* __right_value384 = (void*)0;
struct sVarTable* result_532;
void* __right_value401 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj88;
struct sVarTable* __result_obj__322;
    if(    self==(void*)0) {
        __result_obj__316 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__316,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__316;
    }
    result_532=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj88=result_532->mVars;
        result_532->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj88,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_532->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_532->mParent=self->mParent;
    }
    __result_obj__322 = come_increment_ref_count(result_532);
    come_call_finalizer3(result_532,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__322,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__322;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_531;
    result_531=0;
    result_531+=int_get_hash_key(((int)self->mVars));
    result_531+=int_get_hash_key(((int)self->mGlobal));
    result_531+=int_get_hash_key(((int)self->mParent));
    return result_531;
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
struct map$2void$phvoid$ph* __result_obj__317;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct map$2void$phvoid$ph* result_533;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1void$p* __dec_obj83;
char* it_534;
void* default_value_535;
void* __right_value389 = (void*)0;
struct sVar* it2_536;
void* __right_value390 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct map$2void$phvoid$ph* __result_obj__321;
default_value_535 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__317 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__317,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__317;
    }
    result_533=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2822, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj83=result_533->key_list;
    result_533->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2824, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj83,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_534=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_534=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_535,0,sizeof(void*));
        it2_536=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_534,(struct sVar*)come_increment_ref_count(((struct sVar*)default_value_535))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_533,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_534)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_536)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_533,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_534)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_536)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_533,(char*)come_increment_ref_count(it_534),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_536)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_533,(char*)come_increment_ref_count(it_534),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_536)));
        }
        come_call_finalizer3(default_value_535,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_536,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__321 = come_increment_ref_count(result_533);
    come_call_finalizer3(result_533,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__321,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__321;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_537;
int it_538;
_Bool same_key_exist_539;
char* it2_540;
struct map$2void$phvoid$ph* __result_obj__318;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_537=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_538=hash_537;
    while((_Bool)1) {
        if(        self->item_existance[it_538]) {
            if(            come_call_equals((void*)0, self->keys[it_538], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_538],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_538]);
                    self->keys[it_538]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_538]);
                    self->keys[it_538]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_538],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_538]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_538]=item;
                }
                break;
            }
            it_538++;
            if(            it_538>=self->size) {
                it_538=0;
            }
            else if(            it_538==hash_537) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_538]=(_Bool)1;
            if(            1) {
                self->keys[it_538]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_538]=key;
            }
            if(            1) {
                self->items[it_538]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_538]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_539=(_Bool)0;
    for(    it2_540=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_540=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_540, key)) {
            same_key_exist_539=(_Bool)1;
        }
    }
    if(    !same_key_exist_539) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__318 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__318;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__319;
void* __right_value391 = (void*)0;
struct sVar* result_542;
void* __right_value392 = (void*)0;
char* __dec_obj84;
void* __right_value393 = (void*)0;
char* __dec_obj85;
void* __right_value394 = (void*)0;
struct sType* __dec_obj86;
void* __right_value395 = (void*)0;
char* __dec_obj87;
struct sVar* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__319 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__319,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__319;
    }
    result_542=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj84=result_542->mName;
        result_542->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj85=result_542->mCValueName;
        result_542->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj86=result_542->mType;
        result_542->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_542->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_542->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_542->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj87=result_542->mFunName;
        result_542->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__320 = come_increment_ref_count(result_542);
    come_call_finalizer3(result_542,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__320,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__320;
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
unsigned int result_541;
    result_541=0;
    result_541+=int_get_hash_key(((int)self->mName));
    result_541+=int_get_hash_key(((int)self->mCValueName));
    result_541+=int_get_hash_key(((int)self->mType));
    result_541+=int_get_hash_key(((int)self->mGlobal));
    result_541+=int_get_hash_key(((int)self->mAllocaValue));
    result_541+=int_get_hash_key(((int)self->mNoFree));
    result_541+=int_get_hash_key(((int)self->mFunName));
    return result_541;
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
struct list_item$1void$ph* it_548;
int i_549;
void* __result_obj__323;
void* default_value_550;
void* __result_obj__324;
default_value_550 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_548=self->head;
    i_549=0;
    while(it_548!=((void*)0)) {
        if(        position==i_549) {
            __result_obj__323 = come_increment_ref_count(it_548->item);
            come_call_finalizer3(__result_obj__323,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__323;
        }
        it_548=it_548->next;
        i_549++;
    }
    memset(&default_value_550,0,sizeof(void*));
    __result_obj__324 = come_increment_ref_count(((struct sType*)default_value_550));
    come_call_finalizer3(default_value_550,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__324,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__324;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_554;
struct sNode* __result_obj__325;
struct sNode* __result_obj__326;
struct sNode* result_555;
struct sNode* __result_obj__327;
result_554 = (void*)0;
result_555 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_554,0,sizeof(struct sNode*));
        __result_obj__325 = result_554;
        return __result_obj__325;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__326 = self->it->item;
        return __result_obj__326;
    }
    memset(&result_555,0,sizeof(struct sNode*));
    __result_obj__327 = result_555;
    return __result_obj__327;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_557;
struct sNode* __result_obj__328;
struct sNode* __result_obj__329;
struct sNode* result_558;
struct sNode* __result_obj__330;
result_557 = (void*)0;
result_558 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_557,0,sizeof(struct sNode*));
        __result_obj__328 = result_557;
        return __result_obj__328;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__329 = self->it->item;
        return __result_obj__329;
    }
    memset(&result_558,0,sizeof(struct sNode*));
    __result_obj__330 = result_558;
    return __result_obj__330;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__331;
void* __right_value411 = (void*)0;
struct CVALUE* result_566;
void* __right_value412 = (void*)0;
char* __dec_obj94;
void* __right_value413 = (void*)0;
struct sType* __dec_obj95;
void* __right_value414 = (void*)0;
char* __dec_obj96;
void* __right_value415 = (void*)0;
char* __dec_obj97;
struct CVALUE* __result_obj__332;
    if(    self==(void*)0) {
        __result_obj__331 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__331,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__331;
    }
    result_566=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj94=result_566->c_value;
        result_566->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj95=result_566->type;
        result_566->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_566->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_566->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj96=result_566->c_value_without_right_value_objects;
        result_566->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj97=result_566->c_value_without_cast_object_value;
        result_566->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__332 = come_increment_ref_count(result_566);
    come_call_finalizer3(result_566,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__332,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__332;
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
struct list_item$1void$ph* it_570;
struct list_item$1void$ph* it2_571;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_570=left->head;
    it2_571=right->head;
    while(it_570!=((void*)0)) {
        if(        !(voidp_operator_equals(it_570->item,it2_571->item))) {
            return (_Bool)0;
        }
        it_570=it_570->next;
        it2_571=it2_571->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self){
struct list_item$1void$ph* it_576;
struct list_item$1void$ph* prev_it_577;
struct list$1void$ph* __result_obj__334;
    it_576=self->head;
    while(it_576!=((void*)0)) {
        prev_it_577=it_576;
        it_576=it_576->next;
        come_call_finalizer3(prev_it_577,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__334 = self;
    return __result_obj__334;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_580;
void* __result_obj__335;
void* __result_obj__336;
void* result_581;
void* __result_obj__337;
result_580 = (void*)0;
result_581 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_580,0,sizeof(void*));
        __result_obj__335 = result_580;
        return __result_obj__335;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__336 = self->it->item;
        return __result_obj__336;
    }
    memset(&result_581,0,sizeof(void*));
    __result_obj__337 = result_581;
    return __result_obj__337;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_583;
void* __result_obj__338;
void* __result_obj__339;
void* result_584;
void* __result_obj__340;
result_583 = (void*)0;
result_584 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_583,0,sizeof(void*));
        __result_obj__338 = result_583;
        return __result_obj__338;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__339 = self->it->item;
        return __result_obj__339;
    }
    memset(&result_584,0,sizeof(void*));
    __result_obj__340 = result_584;
    return __result_obj__340;
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
int come_exception_var_c8_585=0;
char* Err_586=0;
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value429=err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line)));
            come_exception_var_c8_585=multiple_assign_var9->v1;
            Err_586=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            ((Err_586)?(puts(Err_586),exit(0)):(0));
            come_call_finalizer3(__right_value429,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_586 = come_decrement_ref_count2(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
char* head_587;
_Bool dquort_588;
_Bool squort_589;
int sline_590;
int nest_591;
void* __right_value430 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_592=0;
char* Err_593=0;
void* __right_value431 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_594=0;
char* Err_595=0;
void* __right_value432 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_596=0;
char* Err_597=0;
void* __right_value433 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_598=0;
char* Err_599=0;
void* __right_value434 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_600=0;
char* Err_601=0;
void* __right_value435 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_602=0;
char* Err_603=0;
void* __right_value436 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_604=0;
char* Err_605=0;
void* __right_value437 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_c16_606=0;
char* Err_607=0;
char* tail_608;
void* __right_value438 = (void*)0;
char* buf_609;
void* __right_value439 = (void*)0;
char* __result_obj__341;
    head_587=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_588=(_Bool)0;
        squort_589=(_Bool)0;
        sline_590=0;
        nest_591=0;
        while(1) {
            if(            dquort_588) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value430=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_590)));
                        come_exception_var_c9_592=multiple_assign_var10->v1;
                        Err_593=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_593)?(puts(Err_593),exit(0)):(0));
                        come_call_finalizer3(__right_value430,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_593 = come_decrement_ref_count2(Err_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_588=!dquort_588;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value431=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_590)));
                        come_exception_var_c10_594=multiple_assign_var11->v1;
                        Err_595=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_595)?(puts(Err_595),exit(0)):(0));
                        come_call_finalizer3(__right_value431,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_595 = come_decrement_ref_count2(Err_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value432=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_590)));
                        come_exception_var_c11_596=multiple_assign_var12->v1;
                        Err_597=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_597)?(puts(Err_597),exit(0)):(0));
                        come_call_finalizer3(__right_value432,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_597 = come_decrement_ref_count2(Err_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_589) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value433=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_590)));
                        come_exception_var_c12_598=multiple_assign_var13->v1;
                        Err_599=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_599)?(puts(Err_599),exit(0)):(0));
                        come_call_finalizer3(__right_value433,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_599 = come_decrement_ref_count2(Err_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_589=!squort_589;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value434=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_590)));
                        come_exception_var_c13_600=multiple_assign_var14->v1;
                        Err_601=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_601)?(puts(Err_601),exit(0)):(0));
                        come_call_finalizer3(__right_value434,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_601 = come_decrement_ref_count2(Err_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value435=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_590)));
                        come_exception_var_c14_602=multiple_assign_var15->v1;
                        Err_603=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        ((Err_603)?(puts(Err_603),exit(0)):(0));
                        come_call_finalizer3(__right_value435,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_603 = come_decrement_ref_count2(Err_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_590=info->sline;
                info->p++;
                squort_589=!squort_589;
            }
            else if(            *info->p==34) {
                sline_590=info->sline;
                info->p++;
                dquort_588=!dquort_588;
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
                nest_591++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_591==0) {
                    break;
                }
                nest_591--;
            }
            else if(            *info->p==0) {
                multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value436=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c15_604=multiple_assign_var16->v1;
                Err_605=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                ((Err_605)?(puts(Err_605),exit(0)):(0));
                come_call_finalizer3(__right_value436,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_605 = come_decrement_ref_count2(Err_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        come_exception_var_c16_606=multiple_assign_var17->v1;
        Err_607=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        ((Err_607)?(puts(Err_607),exit(0)):(0));
        come_call_finalizer3(__right_value437,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        (Err_607 = come_decrement_ref_count2(Err_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_608=info->p;
    buf_609=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_608-head_587+1)), "05function.c", 752, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_609,head_587,tail_608-head_587);
    buf_609[tail_608-head_587]=0;
    skip_spaces_and_lf(info);
    __result_obj__341 = come_increment_ref_count(((char*)(__right_value439=__builtin_string(buf_609))));
    (buf_609 = come_decrement_ref_count2(buf_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__341 = come_decrement_ref_count2(__result_obj__341, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__341;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_610;
char* p3_611;
int i_612;
    terminated_610=(_Bool)0;
    p3_611=p;
    for(    i_612=0;    i_612<strlen(p2);    i_612++    ){
        if(        *p3_611==0) {
            terminated_610=(_Bool)1;
            break;
        }
        p3_611++;
    }
    return !terminated_610&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* asm_fun_name_613;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct buffer* result_614;
char* head_615;
int brace_num_616;
char* tail_617;
char* head_618;
int brace_num_619;
char* tail_620;
char* head_621;
char* tail_622;
char* head_623;
char* tail_624;
int len_625;
_Bool in_dquort_626;
int brace_num_627;
char* head_628;
char* tail_629;
char* head_630;
char* tail_631;
char* head_632;
char* tail_633;
char* head_634;
int nest_635;
char* tail_636;
char* head_637;
int nest_638;
char* tail_639;
char* head_640;
int nest_641;
char* tail_642;
char* head_643;
int nest_644;
char* tail_645;
char* head_646;
int nest_647;
char* tail_648;
char* head_649;
char* tail_650;
char* head_651;
char* tail_652;
char* head_653;
char* tail_654;
char* head_655;
char* tail_656;
char* head_657;
char* tail_658;
char* head_659;
int brace_num_660;
char* tail_661;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__345;
    asm_fun_name_613=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 777, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_614=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 778, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_615=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_616=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_616++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_616--;
                        if(                        brace_num_616==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_617=info->p;
            buffer_append(result_614,head_615,tail_617-head_615);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_618=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_619=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_619++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_619--;
                        if(                        brace_num_619==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_620=info->p;
            buffer_append(result_614,head_618,tail_620-head_618);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_621=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_622=info->p;
            buffer_append(result_614,head_621,tail_622-head_621);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_623=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_624=info->p;
            buffer_append(result_614,head_623,tail_624-head_623);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_625=0;
            if(            *info->p==40) {
                in_dquort_626=(_Bool)0;
                brace_num_627=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_626=!in_dquort_626;
                    }
                    else if(                    in_dquort_626) {
                        buffer_append_char(asm_fun_name_613,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_627++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_627--;
                        if(                        brace_num_627==0) {
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
            head_628=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_629=info->p;
            buffer_append(result_614,head_628,tail_629-head_628);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_630=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_631=info->p;
            buffer_append(result_614,head_630,tail_631-head_630);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_632=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_633=info->p;
            buffer_append(result_614,head_632,tail_633-head_632);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_634=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_635=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_635++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_635--;
                        if(                        nest_635==0) {
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
            tail_636=info->p;
            buffer_append(result_614,head_634,tail_636-head_634);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_637=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_638=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_638++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_638--;
                        if(                        nest_638==0) {
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
            tail_639=info->p;
            buffer_append(result_614,head_637,tail_639-head_637);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_640=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_641=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_641++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_641--;
                        if(                        nest_641==0) {
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
            tail_642=info->p;
            buffer_append(result_614,head_640,tail_642-head_640);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_643=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_644=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_644++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_644--;
                        if(                        nest_644==0) {
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
            tail_645=info->p;
            buffer_append(result_614,head_643,tail_645-head_643);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_646=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_647=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_647++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_647--;
                        if(                        nest_647==0) {
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
            tail_648=info->p;
            buffer_append(result_614,head_646,tail_648-head_646);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_649=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_650=info->p;
            buffer_append(result_614,head_649,tail_650-head_649);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_651=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_652=info->p;
            buffer_append(result_614,head_651,tail_652-head_651);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_653=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_654=info->p;
            buffer_append(result_614,head_653,tail_654-head_653);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_655=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_656=info->p;
            buffer_append(result_614,head_655,tail_656-head_655);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_657=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_658=info->p;
            buffer_append(result_614,head_657,tail_658-head_657);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_659=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_660=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_660++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_660--;
                        if(                        brace_num_660==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_661=info->p;
            buffer_append(result_614,head_659,tail_661-head_659);
        }
        else {
            break;
        }
    }
    __result_obj__345 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value450=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1192, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_613)),(char*)come_increment_ref_count(buffer_to_string(result_614))))));
    come_call_finalizer3(asm_fun_name_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value450,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__345,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__345;
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
struct tuple2$2char$phchar$ph* __result_obj__342;
void* __right_value446 = (void*)0;
struct tuple2$2char$phchar$ph* result_662;
void* __right_value447 = (void*)0;
char* __dec_obj106;
void* __right_value448 = (void*)0;
char* __dec_obj107;
struct tuple2$2char$phchar$ph* __result_obj__343;
    if(    self==(void*)0) {
        __result_obj__342 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__342,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__342;
    }
    result_662=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj106=result_662->v1;
        result_662->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj107=result_662->v2;
        result_662->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__343 = come_increment_ref_count(result_662);
    come_call_finalizer3(result_662,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__343,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__343;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_663;
    result_663=0;
    result_663+=int_get_hash_key(((int)self->v1));
    result_663+=int_get_hash_key(((int)self->v2));
    return result_663;
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
struct tuple2$2char$phchar$ph* __result_obj__344;
    __dec_obj108=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj109=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__344 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__344,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__344;
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
struct buffer* asm_fun_name_664;
void* __right_value453 = (void*)0;
char* attribute_665;
int nest_666;
int nest_667;
int nest_668;
int nest_669;
int nest_670;
void* __right_value454 = (void*)0;
char* __dec_obj110;
int len_671;
_Bool in_dquort_672;
int brace_num_673;
int brace_num_674;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__346;
    asm_fun_name_664=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1197, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_665=(char*)come_increment_ref_count(xsprintf(""));
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
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_667=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_667++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_667--;
                        if(                        nest_667==0) {
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
                nest_668=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_668++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_668--;
                        if(                        nest_668==0) {
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
                nest_669=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_669++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_669--;
                        if(                        nest_669==0) {
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
                nest_670=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_670++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_670--;
                        if(                        nest_670==0) {
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
            __dec_obj110=attribute_665;
            attribute_665=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_671=0;
            if(            *info->p==40) {
                in_dquort_672=(_Bool)0;
                brace_num_673=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_672=!in_dquort_672;
                    }
                    else if(                    in_dquort_672) {
                        buffer_append_char(asm_fun_name_664,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_673++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_673--;
                        if(                        brace_num_673==0) {
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
                brace_num_674=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_674++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_674--;
                        if(                        brace_num_674==0) {
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
    __result_obj__346 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value457=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1466, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_664)),(char*)come_increment_ref_count(attribute_665)))));
    come_call_finalizer3(asm_fun_name_664,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_665 = come_decrement_ref_count2(attribute_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value457,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__346,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value458 = (void*)0;
char* __dec_obj111;
char* head_675;
int head_sline_676;
void* __right_value459 = (void*)0;
char* buf_677;
void* __right_value460 = (void*)0;
struct sNode* node_678;
_Bool Value_679;
    while(*info->p) {
        __dec_obj111=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_675=info->p;
        head_sline_676=info->sline;
        buf_677=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_677 = come_decrement_ref_count2(buf_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_678=(struct sNode*)come_increment_ref_count(top_level_v99(buf_677,head_675,head_sline_676,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_678!=((void*)0)) {
            Value_679=node_compile(node_678,info);
            if(            !Value_679) {
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
            (buf_677 = come_decrement_ref_count2(buf_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_678) ? node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_677 = come_decrement_ref_count2(buf_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_678) ? node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value461 = (void*)0;
char* name_680;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* result_type_681;
void* __right_value464 = (void*)0;
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
struct sType* __list_values1___682[9];
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1sType$ph* param_types_693;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* __list_values2___694[9];
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1char$ph* param_names_698;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1char$ph* param_default_parametors_699;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sFun* main_fun_703;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
char* name_704;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* result_type_705;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __list_values3___706[1];
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1sType$ph* param_types_707;
void* __right_value534 = (void*)0;
char* __list_values4___708[1];
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1char$ph* param_names_709;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct list$1char$ph* param_default_parametors_710;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sFun* main_fun_711;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
char* name_712;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* result_type_713;
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
struct sType* __list_values5___714[7];
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1sType$ph* param_types_715;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
char* __list_values6___716[7];
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1char$ph* param_names_717;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct list$1char$ph* param_default_parametors_718;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sFun* main_fun_719;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
char* name_720;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* result_type_721;
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
struct sType* __list_values7___722[5];
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1sType$ph* param_types_723;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
char* __list_values8___724[5];
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct list$1char$ph* param_names_725;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1char$ph* param_default_parametors_726;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sFun* main_fun_727;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
char* name_728;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* result_type_729;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sType* __list_values9___730[1];
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1sType$ph* param_types_731;
void* __right_value615 = (void*)0;
char* __list_values10___732[1];
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1char$ph* param_names_733;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1char$ph* param_default_parametors_734;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sFun* main_fun_735;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* name_736;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* result_type_737;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sType* __list_values11___738[4];
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1sType$ph* param_types_739;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* __list_values12___740[4];
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1char$ph* param_names_741;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1char$ph* param_default_parametors_742;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sFun* main_fun_743;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
char* name_744;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sType* result_type_745;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sType* __list_values13___746[3];
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct list$1sType$ph* param_types_747;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
char* __list_values14___748[3];
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1char$ph* param_names_749;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct list$1char$ph* param_default_parametors_750;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sFun* main_fun_751;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
char* name_752;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* result_type_753;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sType* __list_values15___754[1];
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1sType$ph* param_types_755;
void* __right_value684 = (void*)0;
char* __list_values16___756[1];
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1char$ph* param_names_757;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct list$1char$ph* param_default_parametors_758;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sFun* main_fun_759;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* name_760;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct sType* result_type_761;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* __list_values17___762[3];
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1sType$ph* param_types_763;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
char* __list_values18___764[3];
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1char$ph* param_names_765;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct list$1char$ph* param_default_parametors_766;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sFun* main_fun_767;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* name_768;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sType* result_type_769;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1void$ph* param_types_770;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1char$ph* param_names_771;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1char$ph* param_default_parametors_772;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* main_fun_773;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* name_774;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sType* result_type_775;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sType* __list_values19___776[4];
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1sType$ph* param_types_777;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
char* __list_values20___778[4];
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1char$ph* param_names_779;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1char$ph* param_default_parametors_780;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sFun* main_fun_781;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
char* name_782;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sType* result_type_783;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1void$ph* param_types_784;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1char$ph* param_names_785;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1char$ph* param_default_parametors_786;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sFun* fun_787;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
char* name_788;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sType* result_type_789;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct list$1void$ph* param_types_790;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct list$1char$ph* param_names_791;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct list$1char$ph* param_default_parametors_792;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sFun* fun_793;
void* __right_value784 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_680=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_681=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_693=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___682[0]=((struct sType*)(__right_value465=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___682[1]=((struct sType*)(__right_value467=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___682[2]=((struct sType*)(__right_value469=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values1___682[3]=((struct sType*)(__right_value471=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___682[4]=((struct sType*)(__right_value473=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values1___682[5]=((struct sType*)(__right_value475=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___682[6]=((struct sType*)(__right_value477=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___682[7]=((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___682[8]=((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1523, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),9,__list_values1___682)));
        come_call_finalizer3(__right_value465,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value467,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value469,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value475,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value477,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_698=(struct list$1char$ph*)come_increment_ref_count((__list_values2___694[0]=((char*)(__right_value488=__builtin_string("count"))),
__list_values2___694[1]=((char*)(__right_value489=__builtin_string("size"))),
__list_values2___694[2]=((char*)(__right_value490=__builtin_string("sname"))),
__list_values2___694[3]=((char*)(__right_value491=__builtin_string("sline"))),
__list_values2___694[4]=((char*)(__right_value492=__builtin_string("class_name"))),
__list_values2___694[5]=((char*)(__right_value493=__builtin_string("finalizer_fun"))),
__list_values2___694[6]=((char*)(__right_value494=__builtin_string("cloner_fun"))),
__list_values2___694[7]=((char*)(__right_value495=__builtin_string("get_hash_key_fun"))),
__list_values2___694[8]=((char*)(__right_value496=__builtin_string("equaler_fun"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),9,__list_values2___694)));
        (__right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_699=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1525, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_699,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_699,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_699,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_699,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_699,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_703=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1531, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_680),(struct sType*)come_increment_ref_count(result_type_681),(struct list$1sType$ph*)come_increment_ref_count(param_types_693),(struct list$1char$ph*)come_increment_ref_count(param_names_698),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_699),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_680)),(struct sFun*)come_increment_ref_count(main_fun_703));
        (name_680 = come_decrement_ref_count2(name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_681,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_693,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_698,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_699,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_703,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_704=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_705=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_707=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___706[0]=((struct sType*)(__right_value531=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1541, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1541, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values3___706)));
        come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_709=(struct list$1char$ph*)come_increment_ref_count((__list_values4___708[0]=((char*)(__right_value534=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1542, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values4___708)));
        (__right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_710=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1543, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_711=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_704),(struct sType*)come_increment_ref_count(result_type_705),(struct list$1sType$ph*)come_increment_ref_count(param_types_707),(struct list$1char$ph*)come_increment_ref_count(param_names_709),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_710),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_704)),(struct sFun*)come_increment_ref_count(main_fun_711));
        (name_704 = come_decrement_ref_count2(name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_705,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_707,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_709,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_710,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_711,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_712=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_713=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_715=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___714[0]=((struct sType*)(__right_value548=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___714[1]=((struct sType*)(__right_value550=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___714[2]=((struct sType*)(__right_value552=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___714[3]=((struct sType*)(__right_value554=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___714[4]=((struct sType*)(__right_value556=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values5___714[5]=((struct sType*)(__right_value558=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values5___714[6]=((struct sType*)(__right_value560=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1554, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),7,__list_values5___714)));
        come_call_finalizer3(__right_value548,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value550,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value552,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value554,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value556,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value558,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value560,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_717=(struct list$1char$ph*)come_increment_ref_count((__list_values6___716[0]=((char*)(__right_value563=__builtin_string("fun"))),
__list_values6___716[1]=((char*)(__right_value564=__builtin_string("mem"))),
__list_values6___716[2]=((char*)(__right_value565=__builtin_string("protocol_fun"))),
__list_values6___716[3]=((char*)(__right_value566=__builtin_string("protocol_obj"))),
__list_values6___716[4]=((char*)(__right_value567=__builtin_string("call_finalizer_only"))),
__list_values6___716[5]=((char*)(__right_value568=__builtin_string("no_decrement"))),
__list_values6___716[6]=((char*)(__right_value569=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1555, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),7,__list_values6___716)));
        (__right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_718=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1556, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_719=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1557, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_712),(struct sType*)come_increment_ref_count(result_type_713),(struct list$1sType$ph*)come_increment_ref_count(param_types_715),(struct list$1char$ph*)come_increment_ref_count(param_names_717),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_718),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_712)),(struct sFun*)come_increment_ref_count(main_fun_719));
        (name_712 = come_decrement_ref_count2(name_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_713,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_715,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_717,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_718,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_719,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_720=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_721=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_723=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___722[0]=((struct sType*)(__right_value583=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___722[1]=((struct sType*)(__right_value585=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___722[2]=((struct sType*)(__right_value587=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___722[3]=((struct sType*)(__right_value589=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info))),
__list_values7___722[4]=((struct sType*)(__right_value591=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1567, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),5,__list_values7___722)));
        come_call_finalizer3(__right_value583,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value585,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_725=(struct list$1char$ph*)come_increment_ref_count((__list_values8___724[0]=((char*)(__right_value594=__builtin_string("mem"))),
__list_values8___724[1]=((char*)(__right_value595=__builtin_string("protocol_fun"))),
__list_values8___724[2]=((char*)(__right_value596=__builtin_string("protocol_obj"))),
__list_values8___724[3]=((char*)(__right_value597=__builtin_string("no_decrement"))),
__list_values8___724[4]=((char*)(__right_value598=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1568, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),5,__list_values8___724)));
        (__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_726=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1569, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_727=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1570, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_720),(struct sType*)come_increment_ref_count(result_type_721),(struct list$1sType$ph*)come_increment_ref_count(param_types_723),(struct list$1char$ph*)come_increment_ref_count(param_names_725),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_726),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_720)),(struct sFun*)come_increment_ref_count(main_fun_727));
        (name_720 = come_decrement_ref_count2(name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_721,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_723,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_725,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_726,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_727,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_728=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_729=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_731=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___730[0]=((struct sType*)(__right_value612=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1580, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1580, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values9___730)));
        come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_733=(struct list$1char$ph*)come_increment_ref_count((__list_values10___732[0]=((char*)(__right_value615=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1581, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values10___732)));
        (__right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_734=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1582, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_735=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1583, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_728),(struct sType*)come_increment_ref_count(result_type_729),(struct list$1sType$ph*)come_increment_ref_count(param_types_731),(struct list$1char$ph*)come_increment_ref_count(param_names_733),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_734),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_728)),(struct sFun*)come_increment_ref_count(main_fun_735));
        (name_728 = come_decrement_ref_count2(name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_733,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_734,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_735,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_736=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_737=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_739=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___738[0]=((struct sType*)(__right_value629=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values11___738[1]=((struct sType*)(__right_value631=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values11___738[2]=((struct sType*)(__right_value633=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values11___738[3]=((struct sType*)(__right_value635=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1593, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values11___738)));
        come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value631,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value633,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_741=(struct list$1char$ph*)come_increment_ref_count((__list_values12___740[0]=((char*)(__right_value638=__builtin_string("block"))),
__list_values12___740[1]=((char*)(__right_value639=__builtin_string("sname"))),
__list_values12___740[2]=((char*)(__right_value640=__builtin_string("sline"))),
__list_values12___740[3]=((char*)(__right_value641=__builtin_string("class_name"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1594, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values12___740)));
        (__right_value638 = come_decrement_ref_count2(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_742=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1595, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_742,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_742,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_742,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_742,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_743=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1600, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_736),(struct sType*)come_increment_ref_count(result_type_737),(struct list$1sType$ph*)come_increment_ref_count(param_types_739),(struct list$1char$ph*)come_increment_ref_count(param_names_741),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_742),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_736)),(struct sFun*)come_increment_ref_count(main_fun_743));
        (name_736 = come_decrement_ref_count2(name_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_737,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_739,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_741,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_742,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_743,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_744=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_745=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1609, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_747=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___746[0]=((struct sType*)(__right_value658=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values13___746[1]=((struct sType*)(__right_value660=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values13___746[2]=((struct sType*)(__right_value662=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1610, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values13___746)));
        come_call_finalizer3(__right_value658,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value660,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value662,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_749=(struct list$1char$ph*)come_increment_ref_count((__list_values14___748[0]=((char*)(__right_value665=__builtin_string("b"))),
__list_values14___748[1]=((char*)(__right_value666=__builtin_string("c"))),
__list_values14___748[2]=((char*)(__right_value667=__builtin_string("len"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1611, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values14___748)));
        (__right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_750=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1612, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_751=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1613, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_744),(struct sType*)come_increment_ref_count(result_type_745),(struct list$1sType$ph*)come_increment_ref_count(param_types_747),(struct list$1char$ph*)come_increment_ref_count(param_names_749),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_750),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_744)),(struct sFun*)come_increment_ref_count(main_fun_751));
        (name_744 = come_decrement_ref_count2(name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_745,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_747,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_749,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_750,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_751,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_752=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_753=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_755=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___754[0]=((struct sType*)(__right_value681=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1623, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1623, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values15___754)));
        come_call_finalizer3(__right_value681,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_757=(struct list$1char$ph*)come_increment_ref_count((__list_values16___756[0]=((char*)(__right_value684=__builtin_string("str"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1624, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values16___756)));
        (__right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_758=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1625, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_759=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1626, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_752),(struct sType*)come_increment_ref_count(result_type_753),(struct list$1sType$ph*)come_increment_ref_count(param_types_755),(struct list$1char$ph*)come_increment_ref_count(param_names_757),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_758),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_752)),(struct sFun*)come_increment_ref_count(main_fun_759));
        (name_752 = come_decrement_ref_count2(name_752, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_753,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_755,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_757,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_758,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_759,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_760=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_761=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_763=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___762[0]=((struct sType*)(__right_value698=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values17___762[1]=((struct sType*)(__right_value700=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values17___762[2]=((struct sType*)(__right_value702=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1636, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values17___762)));
        come_call_finalizer3(__right_value698,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value700,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value702,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_765=(struct list$1char$ph*)come_increment_ref_count((__list_values18___764[0]=((char*)(__right_value705=xsprintf("come_malloc"))),
__list_values18___764[1]=((char*)(__right_value706=xsprintf("come_debug"))),
__list_values18___764[2]=((char*)(__right_value707=xsprintf("come_gc"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1637, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values18___764)));
        (__right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_766=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1638, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_766,((void*)0));
        main_fun_767=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1640, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_760),(struct sType*)come_increment_ref_count(result_type_761),(struct list$1sType$ph*)come_increment_ref_count(param_types_763),(struct list$1char$ph*)come_increment_ref_count(param_names_765),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_766),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_760)),(struct sFun*)come_increment_ref_count(main_fun_767));
        (name_760 = come_decrement_ref_count2(name_760, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_761,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_763,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_765,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_766,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_767,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_768=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_769=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_770=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1650, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_771=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1651, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_772=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1652, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_773=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_768),(struct sType*)come_increment_ref_count(result_type_769),(struct list$1void$ph*)come_increment_ref_count(param_types_770),(struct list$1char$ph*)come_increment_ref_count(param_names_771),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_772),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_768)),(struct sFun*)come_increment_ref_count(main_fun_773));
        (name_768 = come_decrement_ref_count2(name_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_770,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_771,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_772,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_773,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_774=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_775=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_777=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___776[0]=((struct sType*)(__right_value735=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values19___776[1]=((struct sType*)(__right_value737=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values19___776[2]=((struct sType*)(__right_value739=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values19___776[3]=((struct sType*)(__right_value741=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1663, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values19___776)));
        come_call_finalizer3(__right_value735,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value737,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value739,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value741,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_779=(struct list$1char$ph*)come_increment_ref_count((__list_values20___778[0]=((char*)(__right_value744=__builtin_string("mem"))),
__list_values20___778[1]=((char*)(__right_value745=__builtin_string("sname"))),
__list_values20___778[2]=((char*)(__right_value746=__builtin_string("sline"))),
__list_values20___778[3]=((char*)(__right_value747=__builtin_string("id"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1664, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values20___778)));
        (__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_780=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1665, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_781=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1666, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_774),(struct sType*)come_increment_ref_count(result_type_775),(struct list$1sType$ph*)come_increment_ref_count(param_types_777),(struct list$1char$ph*)come_increment_ref_count(param_names_779),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_780),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_774)),(struct sFun*)come_increment_ref_count(main_fun_781));
        (name_774 = come_decrement_ref_count2(name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_775,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_777,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_779,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_780,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_781,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_782=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_783=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_784=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1676, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_785=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1677, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_786=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1678, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_787=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1679, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_782),(struct sType*)come_increment_ref_count(result_type_783),(struct list$1void$ph*)come_increment_ref_count(param_types_784),(struct list$1char$ph*)come_increment_ref_count(param_names_785),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_786),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_782)),(struct sFun*)come_increment_ref_count(fun_787));
        (name_782 = come_decrement_ref_count2(name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_783,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_784,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_785,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_786,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_787,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_788=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_789=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1688, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_790=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1689, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_791=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1690, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_792=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1691, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_793=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1692, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_788),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1void$ph*)come_increment_ref_count(param_types_790),(struct list$1char$ph*)come_increment_ref_count(param_names_791),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_792),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_788)),(struct sFun*)come_increment_ref_count(fun_793));
        (name_788 = come_decrement_ref_count2(name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_790,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_791,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_792,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_793,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_683;
struct list$1sType$ph* __result_obj__348;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_683=0;    i_683<num_value;    i_683++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_683]));
    }
    __result_obj__348 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__348,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__348;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value482 = (void*)0;
struct list_item$1sType$ph* litem_684;
struct sType* __dec_obj112;
void* __right_value483 = (void*)0;
struct list_item$1sType$ph* litem_685;
struct sType* __dec_obj113;
void* __right_value484 = (void*)0;
struct list_item$1sType$ph* litem_686;
struct sType* __dec_obj114;
struct list$1sType$ph* __result_obj__347;
    if(    self->len==0) {
        litem_684=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value482=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1545, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_684->prev=((void*)0);
        litem_684->next=((void*)0);
        __dec_obj112=litem_684->item;
        litem_684->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_684;
        self->head=litem_684;
    }
    else if(    self->len==1) {
        litem_685=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value483=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1555, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_685->prev=self->head;
        litem_685->next=((void*)0);
        __dec_obj113=litem_685->item;
        litem_685->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_685;
        self->head->next=litem_685;
    }
    else {
        litem_686=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value484=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1565, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_686->prev=self->tail;
        litem_686->next=((void*)0);
        __dec_obj114=litem_686->item;
        litem_686->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_686;
        self->tail=litem_686;
    }
    self->len++;
    __result_obj__347 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__347;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_687;
struct list_item$1sType$ph* prev_it_688;
    it_687=self->head;
    while(it_687!=((void*)0)) {
        prev_it_688=it_687;
        it_687=it_687->next;
        come_call_finalizer3(prev_it_688,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_689;
struct list_item$1sType$ph* prev_it_690;
    it_689=self->head;
    while(it_689!=((void*)0)) {
        prev_it_690=it_689;
        it_689=it_689->next;
        come_call_finalizer3(prev_it_690,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__349;
void* __right_value485 = (void*)0;
struct list$1sType$ph* result_691;
struct list$1sType$ph* __result_obj__350;
    if(    self==(void*)0) {
        __result_obj__349 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__349,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__349;
    }
    result_691=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_691->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_691->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_691->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_691->it=self->it;
    }
    __result_obj__350 = come_increment_ref_count(result_691);
    come_call_finalizer3(result_691,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__350,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__350;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_692;
    result_692=0;
    result_692+=int_get_hash_key(((int)self->head));
    result_692+=int_get_hash_key(((int)self->tail));
    result_692+=int_get_hash_key(((int)self->len));
    result_692+=int_get_hash_key(((int)self->it));
    return result_692;
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
int i_695;
struct list$1char$ph* __result_obj__351;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_695=0;    i_695<num_value;    i_695++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_695]));
    }
    __result_obj__351 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__351,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__351;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__352;
void* __right_value497 = (void*)0;
struct list$1char$ph* result_696;
struct list$1char$ph* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__352,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__352;
    }
    result_696=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_696->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_696->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_696->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_696->it=self->it;
    }
    __result_obj__353 = come_increment_ref_count(result_696);
    come_call_finalizer3(result_696,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__353,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__353;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_697;
    result_697=0;
    result_697+=int_get_hash_key(((int)self->head));
    result_697+=int_get_hash_key(((int)self->tail));
    result_697+=int_get_hash_key(((int)self->len));
    result_697+=int_get_hash_key(((int)self->it));
    return result_697;
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
struct sFun* __result_obj__354;
void* __right_value505 = (void*)0;
struct sFun* result_701;
void* __right_value506 = (void*)0;
char* __dec_obj115;
void* __right_value507 = (void*)0;
struct sType* __dec_obj116;
void* __right_value508 = (void*)0;
struct list$1void$ph* __dec_obj117;
void* __right_value509 = (void*)0;
struct list$1char$ph* __dec_obj118;
void* __right_value510 = (void*)0;
struct list$1char$ph* __dec_obj119;
void* __right_value511 = (void*)0;
struct sType* __dec_obj120;
void* __right_value515 = (void*)0;
struct sBlock* __dec_obj123;
void* __right_value516 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value517 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value518 = (void*)0;
struct buffer* __dec_obj126;
void* __right_value519 = (void*)0;
struct buffer* __dec_obj127;
void* __right_value520 = (void*)0;
char* __dec_obj128;
void* __right_value521 = (void*)0;
char* __dec_obj129;
struct sFun* __result_obj__357;
    if(    self==(void*)0) {
        __result_obj__354 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__354,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__354;
    }
    result_701=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_701->mName;
        result_701->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj116=result_701->mResultType;
        result_701->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj117=result_701->mParamTypes;
        result_701->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj117,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj118=result_701->mParamNames;
        result_701->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj118,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj119=result_701->mParamDefaultParametors;
        result_701->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj119,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj120=result_701->mLambdaType;
        result_701->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj123=result_701->mBlock;
        result_701->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj123,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj124=result_701->mSource;
        result_701->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj125=result_701->mSourceHead;
        result_701->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj126=result_701->mSourceHead2;
        result_701->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj127=result_701->mSourceDefer;
        result_701->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj127,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_701->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_701->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_701->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_701->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_701->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_701->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_701->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj128=result_701->mAttribute;
        result_701->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj129=result_701->mFunAttribute;
        result_701->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__357 = come_increment_ref_count(result_701);
    come_call_finalizer3(result_701,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__357,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__357;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_700;
    result_700=0;
    result_700+=int_get_hash_key(((int)self->mName));
    result_700+=int_get_hash_key(((int)self->mResultType));
    result_700+=int_get_hash_key(((int)self->mParamTypes));
    result_700+=int_get_hash_key(((int)self->mParamNames));
    result_700+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_700+=int_get_hash_key(((int)self->mLambdaType));
    result_700+=int_get_hash_key(((int)self->mBlock));
    result_700+=int_get_hash_key(((int)self->mSource));
    result_700+=int_get_hash_key(((int)self->mSourceHead));
    result_700+=int_get_hash_key(((int)self->mSourceHead2));
    result_700+=int_get_hash_key(((int)self->mSourceDefer));
    result_700+=int_get_hash_key(((int)self->mStatic));
    result_700+=int_get_hash_key(((int)self->mInline));
    result_700+=int_get_hash_key(((int)self->mUniq));
    result_700+=int_get_hash_key(((int)self->mGenerate));
    result_700+=int_get_hash_key(((int)self->mExternal));
    result_700+=int_get_hash_key(((int)self->mVarArgs));
    result_700+=int_get_hash_key(((int)self->mNoResultType));
    result_700+=int_get_hash_key(((int)self->mAttribute));
    result_700+=int_get_hash_key(((int)self->mFunAttribute));
    return result_700;
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
struct sBlock* __result_obj__355;
void* __right_value512 = (void*)0;
struct sBlock* result_702;
void* __right_value513 = (void*)0;
struct list$1sNode$ph* __dec_obj121;
void* __right_value514 = (void*)0;
struct sVarTable* __dec_obj122;
struct sBlock* __result_obj__356;
    if(    self==(void*)0) {
        __result_obj__355 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__355,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__355;
    }
    result_702=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj121=result_702->mNodes;
        result_702->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj121,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj122=result_702->mVarTable;
        result_702->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_702->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__356 = come_increment_ref_count(result_702);
    come_call_finalizer3(result_702,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__356,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__356;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_794;
_Bool is_type_name_flag_795;
int sline_796;
_Bool define_struct_nobody_797;
char* p_798;
int sline_799;
void* __right_value785 = (void*)0;
char* word_800;
_Bool define_function_pointer_result_function_801;
_Bool define_variable_between_brace_802;
char* p_803;
void* __right_value786 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_804=0;
char* fun_name_805=0;
_Bool err_806=0;
void* __right_value787 = (void*)0;
char* word_807;
_Bool define_function_flag_808;
char* p_809;
void* __right_value788 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_810=0;
char* fun_name_811=0;
_Bool err_812=0;
char* word_813;
void* __right_value789 = (void*)0;
char* __dec_obj130;
void* __right_value790 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
void* __right_value791 = (void*)0;
char* __dec_obj133;
_Bool define_variable_814;
char* p_815;
void* __right_value792 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* result_type_816=0;
char* fun_name_817=0;
_Bool err_818=0;
void* __right_value793 = (void*)0;
char* word_819;
void* __right_value794 = (void*)0;
char* word_820;
char* p_821;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
char* word_822;
void* __right_value798 = (void*)0;
char* __dec_obj134;
void* __right_value799 = (void*)0;
char* word_823;
void* __right_value800 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_c17_826=0;
char* Err_827=0;
void* __right_value801 = (void*)0;
char* word_828;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* node_829;
struct sNode* __result_obj__359;
void* __right_value804 = (void*)0;
struct sNode* __result_obj__360;
char* header_head_830;
void* __right_value805 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_831=0;
char* fun_name_832=0;
_Bool err_833=0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1void$ph* param_types_834;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct list$1char$ph* param_names_835;
void* __right_value810 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* param_type_836=0;
char* param_name_837=0;
_Bool err_838=0;
void* __right_value811 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_839=0;
char* Err_840=0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c19_845=0;
char* Err_846=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1void$ph* param_types2_847;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1char$ph* param_names2_848;
void* __right_value822 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var26 = (void*)0;
struct sType* param_type_849=0;
char* param_name_850=0;
_Bool err_851=0;
void* __right_value823 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_852=0;
char* Err_853=0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_855=0;
char* Err_856=0;
char* header_tail_857;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sType* result_type2_858;
struct sType* __dec_obj138;
void* __right_value829 = (void*)0;
struct list$1void$ph* __dec_obj139;
void* __right_value830 = (void*)0;
struct list$1char$ph* __dec_obj140;
_Bool var_args_859;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct list$1char$ph* param_default_parametors_860;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sFun* fun_861;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sFun* fun2_862;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value846 = (void*)0;
struct sNode* result_863;
struct sNode* __result_obj__364;
void* __right_value847 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c22_865=0;
char* Err_866=0;
void* __right_value848 = (void*)0;
struct sNode* node_867;
struct sNode* __result_obj__365;
void* __right_value849 = (void*)0;
struct sNode* node_868;
struct sNode* __result_obj__366;
void* __right_value850 = (void*)0;
struct sNode* node_869;
char* source_tail_870;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct buffer* header_871;
struct sNode* __result_obj__367;
void* __right_value853 = (void*)0;
char* buf2_872;
void* __right_value854 = (void*)0;
struct sNode* __result_obj__368;
    info->in_top_level=(_Bool)1;
    source_head_794=info->p;
    is_type_name_flag_795=is_type_name(buf,info);
    sline_796=info->sline;
    define_struct_nobody_797=(_Bool)0;
    {
        p_798=info->p;
        sline_799=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_800=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_797=(_Bool)1;
                }
                (word_800 = come_decrement_ref_count2(word_800, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_799;
    }
    define_function_pointer_result_function_801=(_Bool)0;
    define_variable_between_brace_802=(_Bool)0;
    if(    is_type_name_flag_795) {
        p_803=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value786=backtrace_parse_type((_Bool)0,info)));
            result_type_804=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_805=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_806=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value786,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_801=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_807=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_807,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_802=(_Bool)1;
                            }
                        }
                        (word_807 = come_decrement_ref_count2(word_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_804,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_805 = come_decrement_ref_count2(fun_name_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_796;
    }
    define_function_flag_808=(_Bool)0;
    if(    is_type_name_flag_795&&!define_function_pointer_result_function_801&&charp_operator_not_equals(buf,"__typeof__")) {
        p_809=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value788=backtrace_parse_type((_Bool)0,info)));
            result_type_810=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_811=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_812=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value788,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(result_type_810,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_811 = come_decrement_ref_count2(fun_name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_813=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj130=word_813;
                word_813=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_813,"extern")) {
                    __dec_obj131=word_813;
                    word_813=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj132=word_813;
                word_813=((void*)0);
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_813) {
                if(                is_type_name(word_813,info)) {
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
                        __dec_obj133=word_813;
                        word_813=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_813)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_795) {
                        define_function_flag_808=(_Bool)1;
                    }
                }
            }
            (word_813 = come_decrement_ref_count2(word_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_809;
        info->sline=sline_796;
    }
    define_variable_814=(_Bool)1;
    if(    is_type_name_flag_795&&!define_function_pointer_result_function_801) {
        p_815=info->p;
        info->p=head;
        if(        !is_type_name_flag_795) {
            define_variable_814=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value792=backtrace_parse_type((_Bool)0,info)));
            result_type_816=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            fun_name_817=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_818=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value792,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_819=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_814=(_Bool)1;
                            }
                        }
                        (word_819 = come_decrement_ref_count2(word_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_820=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_820,info)&&*info->p!=40) {
                            define_variable_814=(_Bool)1;
                        }
                    }
                    (word_820 = come_decrement_ref_count2(word_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_816,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_817 = come_decrement_ref_count2(fun_name_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_814=(_Bool)0;
        }
        else if(        define_variable_814) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_814=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_814=(_Bool)0;
            }
        }
        info->p=p_815;
        info->sline=sline_796;
    }
    else {
        define_variable_814=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_801) {
        p_821=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value795=parse_struct_attribute(info)));
            (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value796=parse_word(info)));
                (__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_822=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj134=word_822;
                        word_822=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_822,"extends")) {
                            define_variable_814=(_Bool)0;
                        }
                    }
                    (word_822 = come_decrement_ref_count2(word_822, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_814=(_Bool)0;
        }
        else if(        define_variable_814) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_814=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_814=(_Bool)0;
            }
        }
        info->p=p_821;
        info->sline=sline_796;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_823=(char*)come_increment_ref_count(parse_word(info));
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
                    multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value800=err_msg(info,"unexpected source end")));
                    come_exception_var_c17_826=multiple_assign_var21->v1;
                    Err_827=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_827)?(puts(Err_827),exit(0)):(0));
                    come_call_finalizer3(__right_value800,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_827 = come_decrement_ref_count2(Err_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_828=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_828)));
                    (word_828 = come_decrement_ref_count2(word_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_829=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result_obj__359 = come_increment_ref_count(node_829);
            ((node_829) ? node_829 = come_decrement_ref_count2(node_829, ((struct sNode*)node_829)->finalize, ((struct sNode*)node_829)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_823 = come_decrement_ref_count2(word_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__359) ? __result_obj__359 = come_decrement_ref_count2(__result_obj__359, ((struct sNode*)__result_obj__359)->finalize, ((struct sNode*)__result_obj__359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__359;
            ((node_829) ? node_829 = come_decrement_ref_count2(node_829, ((struct sNode*)node_829)->finalize, ((struct sNode*)node_829)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_823 = come_decrement_ref_count2(word_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_797) {
    }
    else if(    define_variable_between_brace_802) {
        info->p=head;
        info->sline=sline_796;
        __result_obj__360 = come_increment_ref_count(((struct sNode*)(__right_value804=parse_global_variable(info))));
        ((__right_value804) ? __right_value804 = come_decrement_ref_count2(__right_value804, ((struct sNode*)__right_value804)->finalize, ((struct sNode*)__right_value804)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__360) ? __result_obj__360 = come_decrement_ref_count2(__result_obj__360, ((struct sNode*)__result_obj__360)->finalize, ((struct sNode*)__result_obj__360)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__360;
    }
    else if(    define_function_pointer_result_function_801) {
        header_head_830=info->p;
        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value805=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_831=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        fun_name_832=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_833=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value805,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_834=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2016, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            param_names_835=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2017, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value810=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_836=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                    param_name_837=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                    err_838=multiple_assign_var23->v3;
                    come_call_finalizer3(__right_value810,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_838) {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value811=err_msg(info,"parse_type is failed")));
                        come_exception_var_c18_839=multiple_assign_var24->v1;
                        Err_840=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_840)?(puts(Err_840),exit(0)):(0));
                        come_call_finalizer3(__right_value811,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_840 = come_decrement_ref_count2(Err_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1void$ph$p_push_back(param_types_834,(struct sType*)come_increment_ref_count(param_type_836));
                    static int num_function_pointer_result_var_name_a_844=0;
                    list$1char$ph$p_push_back(param_names_835,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_844)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value816=parse_word(info)));
                        (__right_value816 = come_decrement_ref_count2(__right_value816, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_836,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_837 = come_decrement_ref_count2(param_name_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value817=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c19_845=multiple_assign_var25->v1;
                        Err_846=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        ((Err_846)?(puts(Err_846),exit(0)):(0));
                        come_call_finalizer3(__right_value817,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_846 = come_decrement_ref_count2(Err_846, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_836,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_837 = come_decrement_ref_count2(param_name_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_847=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2063, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
                param_names2_848=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2064, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var26=((struct tuple3$3sType$phchar$phbool$*)(__right_value822=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_849=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
                        param_name_850=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                        err_851=multiple_assign_var26->v3;
                        come_call_finalizer3(__right_value822,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        !err_851) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value823=err_msg(info,"parse_type is failed")));
                            come_exception_var_c20_852=multiple_assign_var27->v1;
                            Err_853=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_853)?(puts(Err_853),exit(0)):(0));
                            come_call_finalizer3(__right_value823,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_853 = come_decrement_ref_count2(Err_853, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1void$ph$p_push_back(param_types2_847,(struct sType*)come_increment_ref_count(param_type_849));
                        static int num_function_pointer_result_var_name_b_854=0;
                        list$1char$ph$p_push_back(param_names2_848,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_854)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value825=parse_word(info)));
                            (__right_value825 = come_decrement_ref_count2(__right_value825, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_850 = come_decrement_ref_count2(param_name_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value826=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c21_855=multiple_assign_var28->v1;
                            Err_856=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            ((Err_856)?(puts(Err_856),exit(0)):(0));
                            come_call_finalizer3(__right_value826,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_856 = come_decrement_ref_count2(Err_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_850 = come_decrement_ref_count2(param_name_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_857=info->p;
                result_type2_858=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2106, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj138=result_type2_858->mResultType;
                result_type2_858->mResultType=(struct sType*)come_increment_ref_count(result_type_831);
                come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj139=result_type2_858->mParamTypes;
                result_type2_858->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types2_847));
                come_call_finalizer3(__dec_obj139,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj140=result_type2_858->mParamNames;
                result_type2_858->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_848));
                come_call_finalizer3(__dec_obj140,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_858->mVarArgs=(_Bool)0;
                result_type2_858->mStatic=(_Bool)0;
                var_args_859=(_Bool)0;
                param_default_parametors_860=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2116, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_861=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2118, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_832)),(struct sType*)come_increment_ref_count(result_type2_858),(struct list$1void$ph*)come_increment_ref_count(param_types_834),(struct list$1char$ph*)come_increment_ref_count(param_names_835),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_860),(_Bool)1,var_args_859,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_862=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value838=__builtin_string(fun_name_832)))));
                (__right_value838 = come_decrement_ref_count2(__right_value838, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_862==((void*)0)||fun2_862->mExternal) {
                    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_832)),(struct sFun*)come_increment_ref_count(fun_861));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2131, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value842=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2131, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_861),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_863=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer3(__right_value842,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__364 = come_increment_ref_count(result_863);
                come_call_finalizer3(param_types2_847,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_848,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_858,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_860,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_861,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_862,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_863) ? result_863 = come_decrement_ref_count2(result_863, ((struct sNode*)result_863)->finalize, ((struct sNode*)result_863)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(param_types_834,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_835,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_831,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_832 = come_decrement_ref_count2(fun_name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__364) ? __result_obj__364 = come_decrement_ref_count2(__result_obj__364, ((struct sNode*)__result_obj__364)->finalize, ((struct sNode*)__result_obj__364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__364;
                come_call_finalizer3(param_types2_847,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_848,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_858,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_860,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_861,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_862,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_863) ? result_863 = come_decrement_ref_count2(result_863, ((struct sNode*)result_863)->finalize, ((struct sNode*)result_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value847=err_msg(info,"require (")));
                come_exception_var_c22_865=multiple_assign_var29->v1;
                Err_866=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_866)?(puts(Err_866),exit(0)):(0));
                come_call_finalizer3(__right_value847,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_866 = come_decrement_ref_count2(Err_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_834,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_835,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_831,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_832 = come_decrement_ref_count2(fun_name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_796;
        node_867=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__365 = come_increment_ref_count(node_867);
        ((node_867) ? node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__365) ? __result_obj__365 = come_decrement_ref_count2(__result_obj__365, ((struct sNode*)__result_obj__365)->finalize, ((struct sNode*)__result_obj__365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__365;
        ((node_867) ? node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_808) {
        info->p=head;
        info->sline=sline_796;
        node_868=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__366 = come_increment_ref_count(node_868);
        ((node_868) ? node_868 = come_decrement_ref_count2(node_868, ((struct sNode*)node_868)->finalize, ((struct sNode*)node_868)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__366) ? __result_obj__366 = come_decrement_ref_count2(__result_obj__366, ((struct sNode*)__result_obj__366)->finalize, ((struct sNode*)__result_obj__366)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__366;
        ((node_868) ? node_868 = come_decrement_ref_count2(node_868, ((struct sNode*)node_868)->finalize, ((struct sNode*)node_868)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_814) {
        info->p=head;
        info->sline=sline_796;
        node_869=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_870=info->p;
        header_871=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2165, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_871,source_head_794,source_tail_870-source_head_794);
        __result_obj__367 = come_increment_ref_count(node_869);
        ((node_869) ? node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_871,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__367) ? __result_obj__367 = come_decrement_ref_count2(__result_obj__367, ((struct sNode*)__result_obj__367)->finalize, ((struct sNode*)__result_obj__367)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__367;
        ((node_869) ? node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_871,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_796;
    buf2_872=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__368 = come_increment_ref_count(((struct sNode*)(__right_value854=top_level_v98(buf2_872,head,head_sline,info))));
    (buf2_872 = come_decrement_ref_count2(buf2_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value854) ? __right_value854 = come_decrement_ref_count2(__right_value854, ((struct sNode*)__right_value854)->finalize, ((struct sNode*)__right_value854)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count2(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__368;
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
struct list_item$1char$ph* it_824;
struct list_item$1char$ph* prev_it_825;
struct list$1char$ph* __result_obj__358;
    it_824=self->head;
    while(it_824!=((void*)0)) {
        prev_it_825=it_824;
        it_824=it_824->next;
        come_call_finalizer3(prev_it_825,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__358 = self;
    return __result_obj__358;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value812 = (void*)0;
struct list_item$1void$ph* litem_841;
void* __dec_obj135;
void* __right_value813 = (void*)0;
struct list_item$1void$ph* litem_842;
void* __dec_obj136;
void* __right_value814 = (void*)0;
struct list_item$1void$ph* litem_843;
void* __dec_obj137;
struct list$1void$ph* __result_obj__361;
    if(    self->len==0) {
        litem_841=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value812=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1545, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_841->prev=((void*)0);
        litem_841->next=((void*)0);
        __dec_obj135=litem_841->item;
        litem_841->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj135,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_841;
        self->head=litem_841;
    }
    else if(    self->len==1) {
        litem_842=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value813=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1555, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_842->prev=self->head;
        litem_842->next=((void*)0);
        __dec_obj136=litem_842->item;
        litem_842->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj136,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_842;
        self->head->next=litem_842;
    }
    else {
        litem_843=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value814=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1565, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_843->prev=self->tail;
        litem_843->next=((void*)0);
        __dec_obj137=litem_843->item;
        litem_843->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj137,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_843;
        self->tail=litem_843;
    }
    self->len++;
    __result_obj__361 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__361;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__362;
void* __right_value843 = (void*)0;
struct sFunNode* result_864;
void* __right_value844 = (void*)0;
char* __dec_obj141;
void* __right_value845 = (void*)0;
struct sFun* __dec_obj142;
struct sFunNode* __result_obj__363;
    if(    self==(void*)0) {
        __result_obj__362 = (void*)0;
        return __result_obj__362;
    }
    result_864=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_864->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj141=result_864->sname;
        result_864->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_864->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj142=result_864->mFun;
        result_864->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj142,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__363 = result_864;
    come_call_finalizer3(result_864,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__363;
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_873;
int caller_line_874;
char* caller_sname_875;
_Bool comma_instead_of_semicolon_876;
char* last_code_877;
char* __dec_obj143;
char* last_code2_878;
char* __dec_obj144;
void* __right_value855 = (void*)0;
char* sname_top_879;
int sline_top_880;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sFun* funX_881;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__372;
void* __right_value862 = (void*)0;
struct sType* result_type_884;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1void$ph* param_types_885;
struct list$1void$ph* o2_saved_886;
struct sType* it_887;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sType* param_type_888;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct list$1char$ph* param_names_889;
void* __right_value869 = (void*)0;
struct list$1char$ph* param_default_parametors_890;
char* p_891;
int sline_892;
char* sname_893;
char* head_894;
struct buffer* source_895;
void* __right_value870 = (void*)0;
struct buffer* __dec_obj147;
struct sType* generics_type_saved_896;
void* __right_value871 = (void*)0;
struct sType* __dec_obj148;
struct list$1char$ph* method_generics_type_names_897;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct list$1char$ph* __dec_obj149;
struct list$1char$ph* o2_saved_898;
char* it_899;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1char$ph* __dec_obj150;
char* __dec_obj151;
void* __right_value876 = (void*)0;
struct sBlock* block_900;
struct buffer* __dec_obj152;
char* __dec_obj153;
_Bool var_args_901;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sFun* fun_902;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value884 = (void*)0;
struct sNode* node_903;
_Bool in_generics_fun_904;
_Bool Value_905;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__373;
struct sType* __dec_obj154;
struct list$1char$ph* __dec_obj155;
void* __right_value888 = (void*)0;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__374;
    caller_fun_873=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_874=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_875=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_876=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_877=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_878=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_879=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_880=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_881=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value856=__builtin_string(fun_name)))));
    (__right_value856 = come_decrement_ref_count2(__right_value856, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_881) {
        __result_obj__372 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value861=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2204, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_877 = come_decrement_ref_count2(last_code_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_878 = come_decrement_ref_count2(last_code2_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_879 = come_decrement_ref_count2(sname_top_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_881,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value861,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__372,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__372;
    }
    result_type_884=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_885=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2210, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_886=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_887=((struct sType*)list$1void$ph$p_begin((o2_saved_886)));    !list$1void$ph$p_end((o2_saved_886));    it_887=((struct sType*)list$1void$ph$p_next((o2_saved_886)))    ){
        param_type_888=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value865=come_call_cloner(sType_clone, it_887))),generics_type,info));
        come_call_finalizer3(__right_value865,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_add(param_types_885,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_888)));
        come_call_finalizer3(param_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_886,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_889=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_890=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_891=info->p;
    sline_892=info->sline;
    sname_893=(char*)come_increment_ref_count(info->sname);
    head_894=info->head;
    source_895=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj147=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_896=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj148=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_897=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj149=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2238, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj149,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_898=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_899=list$1char$ph$p_begin((o2_saved_898));    !list$1char$ph$p_end((o2_saved_898));    it_899=list$1char$ph$p_next((o2_saved_898))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_899)));
    }
    come_call_finalizer3(o2_saved_898,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj150=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj150,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj151=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_900=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_894;
    __dec_obj152=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_895);
    come_call_finalizer3(__dec_obj152,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_891;
    info->sline=sline_892;
    __dec_obj153=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_893);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_884->mInline=(_Bool)0;
    result_type_884->mStatic=(_Bool)0;
    result_type_884->mUniq=(_Bool)0;
    var_args_901=generics_fun->mVarArgs;
    fun_902=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2262, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_884),(struct list$1void$ph*)come_increment_ref_count(param_types_885),(struct list$1char$ph*)come_increment_ref_count(param_names_889),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_890),(_Bool)0,var_args_901,(struct sBlock*)come_increment_ref_count(block_900),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_902));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2269, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value883=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2269, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_902),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_903=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value883,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_904=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_905=node_compile(node_903,info);
    if(    !Value_905) {
        __result_obj__373 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value887=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2274, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_877 = come_decrement_ref_count2(last_code_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_878 = come_decrement_ref_count2(last_code2_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_879 = come_decrement_ref_count2(sname_top_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_881,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_884,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_885,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_889,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_890,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_893 = come_decrement_ref_count2(sname_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_896,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_897,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_900,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_902,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_903) ? node_903 = come_decrement_ref_count2(node_903, ((struct sNode*)node_903)->finalize, ((struct sNode*)node_903)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value887,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__373,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__373;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_904;
    __dec_obj154=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_896);
    come_call_finalizer3(__dec_obj154,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj155=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_897);
    come_call_finalizer3(__dec_obj155,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj156=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_879));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_880;
    __dec_obj157=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_877);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj158=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_878);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_873;
    info->caller_line=caller_line_874;
    info->caller_sname=caller_sname_875;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_876;
    __result_obj__374 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value891=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2294, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_877 = come_decrement_ref_count2(last_code_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_878 = come_decrement_ref_count2(last_code2_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_879 = come_decrement_ref_count2(sname_top_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_881,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_884,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_885,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_889,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_890,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_893 = come_decrement_ref_count2(sname_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_895,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_896,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_897,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_900,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_902,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_903) ? node_903 = come_decrement_ref_count2(node_903, ((struct sNode*)node_903)->finalize, ((struct sNode*)node_903)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value891,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__374,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__374;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__369;
void* __right_value858 = (void*)0;
struct tuple2$2char$phbool$* result_882;
void* __right_value859 = (void*)0;
char* __dec_obj145;
struct tuple2$2char$phbool$* __result_obj__370;
    if(    self==(void*)0) {
        __result_obj__369 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__369,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__369;
    }
    result_882=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj145=result_882->v1;
        result_882->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_882->v2=self->v2;
    }
    __result_obj__370 = come_increment_ref_count(result_882);
    come_call_finalizer3(result_882,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__370,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_883;
    result_883=0;
    result_883+=int_get_hash_key(((int)self->v1));
    result_883+=int_get_hash_key(((int)self->v2));
    return result_883;
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
struct tuple2$2char$phbool$* __result_obj__371;
    __dec_obj146=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__371 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__371,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__371;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_906;
int caller_line_907;
char* caller_sname_908;
_Bool comma_instead_of_semicolon_909;
char* last_code_910;
char* __dec_obj159;
char* last_code2_911;
char* __dec_obj160;
void* __right_value892 = (void*)0;
char* sname_top_912;
int sline_top_913;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sFun* funX_914;
_Bool __result_obj__375;
void* __right_value895 = (void*)0;
struct sType* result_type_915;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1void$ph* param_types_916;
struct list$1void$ph* o2_saved_917;
struct sType* it_918;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sType* param_type_919;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1char$ph* param_names_920;
void* __right_value902 = (void*)0;
struct list$1char$ph* param_default_parametors_921;
char* p_922;
int sline_923;
char* sname_924;
char* head_925;
struct buffer* source_926;
void* __right_value903 = (void*)0;
struct buffer* __dec_obj161;
struct list$1char$ph* method_generics_type_names_927;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct list$1char$ph* __dec_obj162;
struct list$1char$ph* o2_saved_928;
char* it_929;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1char$ph* __dec_obj163;
char* __dec_obj164;
void* __right_value908 = (void*)0;
struct sBlock* block_930;
struct buffer* __dec_obj165;
char* __dec_obj166;
_Bool generate__931;
_Bool var_args_932;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sFun* fun_933;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value917 = (void*)0;
struct sNode* node_934;
_Bool Value_935;
void* __if_result__1_936 = (void*)0;
_Bool __result_obj__376;
struct list$1char$ph* __dec_obj167;
void* __right_value918 = (void*)0;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
_Bool __result_obj__377;
    caller_fun_906=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_907=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_908=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_909=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_910=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj159=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_911=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj160=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_912=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_913=info->sline;
    funX_914=((struct sFun*)((void*)(__right_value894=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value893=__builtin_string(fun_name)))))));
    (__right_value893 = come_decrement_ref_count2(__right_value893, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value894,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    funX_914) {
        __result_obj__375 = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_910 = come_decrement_ref_count2(last_code_910, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_911 = come_decrement_ref_count2(last_code2_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_912 = come_decrement_ref_count2(sname_top_912, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__375;
    }
    result_type_915=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_916=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2323, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_917=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_918=((struct sType*)list$1void$ph$p_begin((o2_saved_917)));    !list$1void$ph$p_end((o2_saved_917));    it_918=((struct sType*)list$1void$ph$p_next((o2_saved_917)))    ){
        param_type_919=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value898=come_call_cloner(sType_clone, it_918))),info));
        come_call_finalizer3(__right_value898,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_add(param_types_916,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_919)));
        come_call_finalizer3(param_type_919,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_917,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_920=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_921=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_922=info->p;
    sline_923=info->sline;
    sname_924=(char*)come_increment_ref_count(info->sname);
    head_925=info->head;
    source_926=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj161=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj161,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_927=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj162=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2345, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj162,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_928=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_929=list$1char$ph$p_begin((o2_saved_928));    !list$1char$ph$p_end((o2_saved_928));    it_929=list$1char$ph$p_next((o2_saved_928))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_929)));
    }
    come_call_finalizer3(o2_saved_928,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj163=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj163,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj164=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_930=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_925;
    __dec_obj165=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_926);
    come_call_finalizer3(__dec_obj165,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_922;
    info->sline=sline_923;
    __dec_obj166=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_924);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_915->mInline=(_Bool)0;
    result_type_915->mStatic=(_Bool)0;
    result_type_915->mUniq=(_Bool)0;
    generate__931=(_Bool)0;
    if(    result_type_915->mGenerate) {
        result_type_915->mGenerate=(_Bool)0;
        generate__931=(_Bool)1;
    }
    var_args_932=generics_fun->mVarArgs;
    fun_933=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2375, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_915),(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types_916)),(struct list$1char$ph*)come_increment_ref_count(param_names_920),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_921),(_Bool)0,var_args_932,(struct sBlock*)come_increment_ref_count(block_930),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__931,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_933));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2382, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value916=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2382, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_933),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_934=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value916,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_935=node_compile(node_934,info);
    if(    !Value_935) {
        __result_obj__376 = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_910 = come_decrement_ref_count2(last_code_910, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_911 = come_decrement_ref_count2(last_code2_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_912 = come_decrement_ref_count2(sname_top_912, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_915,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_916,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_920,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_921,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_924 = come_decrement_ref_count2(sname_924, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_926,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_927,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_930,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_933,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_934) ? node_934 = come_decrement_ref_count2(node_934, ((struct sNode*)node_934)->finalize, ((struct sNode*)node_934)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__376;
    }
    else {
        __if_result__1_936=(void*)(Value_935);
;
    }
    __dec_obj167=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_927);
    come_call_finalizer3(__dec_obj167,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj168=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_912));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_913;
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_910);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_911);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_906;
    info->caller_line=caller_line_907;
    info->caller_sname=caller_sname_908;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_909;
    __result_obj__377 = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_910 = come_decrement_ref_count2(last_code_910, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_911 = come_decrement_ref_count2(last_code2_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_912 = come_decrement_ref_count2(sname_top_912, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_915,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_916,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_920,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_921,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_924 = come_decrement_ref_count2(sname_924, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_926,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_927,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_930,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_933,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_934) ? node_934 = come_decrement_ref_count2(node_934, ((struct sNode*)node_934)->finalize, ((struct sNode*)node_934)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__377;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_937;
char* source_head_938;
void* __right_value919 = (void*)0;
char* attribute_939;
struct sType* result_type_940;
char* var_name_941;
_Bool constructor__942;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sType* __dec_obj171;
void* __right_value922 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* result_type2_943=0;
char* var_name2_944=0;
_Bool err_945=0;
struct sType* __dec_obj172;
char* __dec_obj173;
_Bool method_definition_946;
char* p_947;
int sline_948;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct buffer* buf2_949;
char* fun_name_950;
char* base_fun_name_951;
void* __right_value925 = (void*)0;
char* __dec_obj174;
void* __right_value926 = (void*)0;
char* __dec_obj175;
void* __right_value927 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* obj_type_952=0;
char* name_953=0;
_Bool err_954=0;
void* __right_value928 = (void*)0;
char* __dec_obj176;
void* __right_value929 = (void*)0;
char* __dec_obj177;
void* __right_value930 = (void*)0;
char* __dec_obj178;
void* __right_value931 = (void*)0;
char* __dec_obj179;
void* __right_value932 = (void*)0;
char* __dec_obj180;
void* __right_value933 = (void*)0;
char* __dec_obj181;
void* __right_value934 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var32 = (void*)0;
struct list$1void$ph* param_types_955=0;
struct list$1char$ph* param_names_956=0;
struct list$1char$ph* param_default_parametors_957=0;
_Bool var_args_958=0;
char* header_tail_959;
int version_960;
int n_961;
_Bool in_top_level_962;
void* __right_value935 = (void*)0;
struct sBlock* block_963;
void* __right_value936 = (void*)0;
char* fun_name_965;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sFun* fun_966;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sFun* fun2_967;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value949 = (void*)0;
struct sNode* __result_obj__380;
void* __right_value950 = (void*)0;
char* none_generics_name_969;
void* __right_value951 = (void*)0;
char* generics_sname_970;
int generics_sline_971;
void* __right_value952 = (void*)0;
char* block_972;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sGenericsFun* fun_975;
void* __right_value970 = (void*)0;
char* fun_name3_976;
void* __right_value971 = (void*)0;
struct sNode* __result_obj__383;
void* __right_value972 = (void*)0;
char* generics_sname_977;
int generics_sline_978;
void* __right_value973 = (void*)0;
char* block_979;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sGenericsFun* fun_980;
void* __right_value980 = (void*)0;
char* fun_name3_981;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct sNode* __result_obj__384;
char* source_tail_982;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct buffer* header_983;
void* __right_value985 = (void*)0;
char* name_984;
void* __right_value986 = (void*)0;
char* name_985;
int i_986;
void* __right_value987 = (void*)0;
struct sType* param_type_987;
void* __right_value988 = (void*)0;
char* param_name_988;
void* __right_value989 = (void*)0;
char* default_parametor_989;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
char* impl_name_990;
void* __right_value993 = (void*)0;
char* result_type_name_991;
void* __right_value994 = (void*)0;
char* impl_name_992;
void* __right_value995 = (void*)0;
char* result_type_name_993;
int i_994;
void* __right_value996 = (void*)0;
struct sType* param_type_995;
void* __right_value997 = (void*)0;
char* param_name_996;
void* __right_value998 = (void*)0;
char* default_parametor_997;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
char* new_fun_name_998;
void* __right_value1003 = (void*)0;
char* id_999;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
char* id_1000;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sBlock* block_1001;
_Bool static_fun_1002;
_Bool inline_fun_1003;
_Bool uniq_fun_1004;
_Bool generate_fun_1005;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
char* new_fun_name_1006;
void* __right_value1010 = (void*)0;
char* __dec_obj193;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sFun* fun_1007;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sFun* fun2_1008;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1022 = (void*)0;
struct sNode* result_1009;
struct sNode* __result_obj__385;
void* __right_value1023 = (void*)0;
char* new_fun_name_1010;
void* __right_value1024 = (void*)0;
char* __dec_obj194;
char* source_tail_1011;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct buffer* header_1012;
_Bool result_type_static_1013;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
struct sFun* fun_1014;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct sFun* fun2_1015;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
char* id_1016;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1038 = (void*)0;
struct sNode* result_1017;
struct sNode* __result_obj__386;
void* __right_value1039 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_1018=0;
char* fun_attribute_1019=0;
void* __right_value1040 = (void*)0;
char* __dec_obj195;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct buffer* header_1020;
char* source_tail_1021;
_Bool result_type_static_1022;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sFun* fun_1023;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct sFun* fun2_1024;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
char* id_1025;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1053 = (void*)0;
struct sNode* result_1026;
struct sNode* __result_obj__387;
void* __right_value1054 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c23_1027=0;
char* Err_1028=0;
struct sNode* __result_obj__388;
fun_name_950 = (void*)0;
    header_head_937=info->p;
    source_head_938=info->p;
    attribute_939=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_940=((void*)0);
    var_name_941=((void*)0);
    constructor__942=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value920=parse_word(info)));
        (__right_value920 = come_decrement_ref_count2(__right_value920, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj171=result_type_940;
        result_type_940=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_940->mHeap=(_Bool)1;
        constructor__942=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value922=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_943=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        var_name2_944=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_945=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value922,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj172=result_type_940;
        result_type_940=(struct sType*)come_increment_ref_count(result_type2_943);
        come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj173=var_name_941;
        var_name_941=(char*)come_increment_ref_count(var_name2_944);
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_945) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_943,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_944 = come_decrement_ref_count2(var_name2_944, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_946=(_Bool)0;
    {
        p_947=info->p;
        sline_948=info->sline;
        buf2_949=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2448, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_949,*info->p);
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
        if(        buffer_length(buf2_949)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_946=(_Bool)1;
        }
        info->p=p_947;
        info->sline=sline_948;
        come_call_finalizer3(buf2_949,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_951=((void*)0);
    if(    constructor__942) {
        __dec_obj174=base_fun_name_951;
        base_fun_name_951=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj175=fun_name_950;
        fun_name_950=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_951,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_946) {
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value927=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_952=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_953=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_954=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value927,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        !err_954) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj176=base_fun_name_951;
        base_fun_name_951=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=fun_name_950;
        fun_name_950=(char*)come_increment_ref_count(create_method_name(obj_type_952,(_Bool)0,base_fun_name_951,info,(_Bool)1));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_952,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_953 = come_decrement_ref_count2(name_953, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj178=base_fun_name_951;
        base_fun_name_951=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj179=fun_name_950;
        fun_name_950=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_951,info,(_Bool)1));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj180=fun_name_950;
        fun_name_950=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj181=base_fun_name_951;
        base_fun_name_951=(char*)come_increment_ref_count(__builtin_string(fun_name_950));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_951,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var32=((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value934=parse_params(info,constructor__942)));
    param_types_955=(struct list$1void$ph*)come_increment_ref_count(multiple_assign_var32->v1);
    param_names_956=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v2);
    param_default_parametors_957=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v3);
    var_args_958=multiple_assign_var32->v4;
    come_call_finalizer3(__right_value934,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    header_tail_959=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_951,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_960=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_961=0;
        while(xisdigit(*info->p)) {
            n_961=n_961*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_960=n_961;
    }
    in_top_level_962=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_951,"lambda")) {
        block_963=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_964=0;
        lambda_num_964++;
        fun_name_965=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_964));
        result_type_940->mInline=(_Bool)0;
        result_type_940->mStatic=(_Bool)0;
        result_type_940->mUniq=(_Bool)0;
        result_type_940->mGenerate=(_Bool)0;
        fun_966=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2546, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_965)),(struct sType*)come_increment_ref_count(result_type_940),(struct list$1void$ph*)come_increment_ref_count(param_types_955),(struct list$1char$ph*)come_increment_ref_count(param_names_956),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_957),(_Bool)0,var_args_958,(struct sBlock*)come_increment_ref_count(block_963),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_967=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value942=__builtin_string(fun_name_965)))));
        (__right_value942 = come_decrement_ref_count2(__right_value942, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_967==((void*)0)||fun2_967->mExternal) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_965)),(struct sFun*)come_increment_ref_count(fun_966));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2556, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value946=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2556, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_966,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__380 = come_increment_ref_count(((struct sNode*)(__right_value949=_inf_value5)));
        come_call_finalizer3(block_963,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_965 = come_decrement_ref_count2(fun_name_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_966,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_967,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_939 = come_decrement_ref_count2(attribute_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_940,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_941 = come_decrement_ref_count2(var_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_950 = come_decrement_ref_count2(fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_951 = come_decrement_ref_count2(base_fun_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_955,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value946,sLambdaNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value949) ? __right_value949 = come_decrement_ref_count2(__right_value949, ((struct sNode*)__right_value949)->finalize, ((struct sNode*)__right_value949)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count2(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        come_call_finalizer3(block_963,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_965 = come_decrement_ref_count2(fun_name_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_966,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_967,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_969=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_970=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_971=info->sline;
        block_972=(char*)come_increment_ref_count(skip_block(info));
        fun_975=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2566, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value965=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value966=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sType*)come_increment_ref_count(result_type_940),(struct list$1void$ph*)come_increment_ref_count(param_types_955),(struct list$1char$ph*)come_increment_ref_count(param_names_956),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_957),var_args_958,(char*)come_increment_ref_count(block_972),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_970)),generics_sline_971));
        come_call_finalizer3(__right_value965,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value966,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_976=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_969,base_fun_name_951));
        map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_976)),(struct sGenericsFun*)come_increment_ref_count(fun_975));
        __result_obj__383 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_969 = come_decrement_ref_count2(none_generics_name_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_970 = come_decrement_ref_count2(generics_sname_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_972 = come_decrement_ref_count2(block_972, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_975,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_976 = come_decrement_ref_count2(fun_name3_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_939 = come_decrement_ref_count2(attribute_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_940,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_941 = come_decrement_ref_count2(var_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_950 = come_decrement_ref_count2(fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_951 = come_decrement_ref_count2(base_fun_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_955,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count2(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__383;
        (none_generics_name_969 = come_decrement_ref_count2(none_generics_name_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_970 = come_decrement_ref_count2(generics_sname_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_972 = come_decrement_ref_count2(block_972, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_975,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_976 = come_decrement_ref_count2(fun_name3_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_977=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_978=info->sline;
        block_979=(char*)come_increment_ref_count(skip_block(info));
        fun_980=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2580, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value975=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value976=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sType*)come_increment_ref_count(result_type_940),(struct list$1void$ph*)come_increment_ref_count(param_types_955),(struct list$1char$ph*)come_increment_ref_count(param_names_956),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_957),var_args_958,(char*)come_increment_ref_count(block_979),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_977)),generics_sline_978));
        come_call_finalizer3(__right_value975,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value976,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_981=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_951));
        if(        method_definition_946) {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sGenericsFun*)come_increment_ref_count(fun_980));
        }
        else {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_981)),(struct sGenericsFun*)come_increment_ref_count(fun_980));
        }
        __result_obj__384 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_977 = come_decrement_ref_count2(generics_sname_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_979 = come_decrement_ref_count2(block_979, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_980,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_981 = come_decrement_ref_count2(fun_name3_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_939 = come_decrement_ref_count2(attribute_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_940,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_941 = come_decrement_ref_count2(var_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_950 = come_decrement_ref_count2(fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_951 = come_decrement_ref_count2(base_fun_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_955,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count2(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__384;
        (generics_sname_977 = come_decrement_ref_count2(generics_sname_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_979 = come_decrement_ref_count2(block_979, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_980,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_981 = come_decrement_ref_count2(fun_name3_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    *info->p==123) {
        source_tail_982=info->p-1;
        header_983=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2596, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__942) {
            if(            list$1void$ph$p_length(param_types_955)==1) {
                name_984=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_983,"extern %s*%% %s*::initialize(%s*%% self);\n",name_984,name_984,name_984);
                (name_984 = come_decrement_ref_count2(name_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                name_985=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_983,"extern %s*%% %s*::initialize(%s*%% self, ",name_985,name_985,name_985);
                for(                i_986=1;                i_986<list$1void$ph$p_length(param_types_955);                i_986++                ){
                    param_type_987=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_955,i_986));
                    param_name_988=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_956,i_986));
                    default_parametor_989=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_957,i_986));
                    if(                    default_parametor_989) {
                        buffer_append_format(header_983,"extern %s %s=%s",((char*)(__right_value990=make_come_type_name_string_no_solved(param_type_987,(_Bool)0,info))),param_name_988,default_parametor_989);
                        (__right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_983,"extern %s %s",((char*)(__right_value991=make_come_type_name_string_no_solved(param_type_987,(_Bool)0,info))),param_name_988);
                        (__right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_986!=list$1void$ph$p_length(param_types_955)-1) {
                        buffer_append_str(header_983,",");
                    }
                    come_call_finalizer3(param_type_987,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_988 = come_decrement_ref_count2(param_name_988, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_989 = come_decrement_ref_count2(default_parametor_989, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_983,");\n");
                (name_985 = come_decrement_ref_count2(name_985, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1void$ph$p_length(param_types_955)==1) {
                impl_name_990=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_991=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_940,(_Bool)0,info));
                buffer_append_format(header_983,"extern %s %s*::%s(%s* self);\n",result_type_name_991,impl_name_990,base_fun_name_951,impl_name_990);
                (impl_name_990 = come_decrement_ref_count2(impl_name_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_991 = come_decrement_ref_count2(result_type_name_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                impl_name_992=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_993=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_940,(_Bool)0,info));
                buffer_append_format(header_983,"extern %s %s*::%s(%s* self, ",result_type_name_993,impl_name_992,base_fun_name_951,impl_name_992);
                for(                i_994=1;                i_994<list$1void$ph$p_length(param_types_955);                i_994++                ){
                    param_type_995=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_955,i_994));
                    param_name_996=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_956,i_994));
                    default_parametor_997=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_957,i_994));
                    if(                    default_parametor_997) {
                        buffer_append_format(header_983,"extern %s %s=%s",((char*)(__right_value999=make_come_type_name_string_no_solved(param_type_995,(_Bool)0,info))),param_name_996,default_parametor_997);
                        (__right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_983,"extern %s %s",((char*)(__right_value1000=make_come_type_name_string_no_solved(param_type_995,(_Bool)0,info))),param_name_996);
                        (__right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_994!=list$1void$ph$p_length(param_types_955)-1) {
                        buffer_append_str(header_983,",");
                    }
                    come_call_finalizer3(param_type_995,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_996 = come_decrement_ref_count2(param_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_997 = come_decrement_ref_count2(default_parametor_997, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_983,");\n");
                (impl_name_992 = come_decrement_ref_count2(impl_name_992, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_993 = come_decrement_ref_count2(result_type_name_993, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append(header_983,source_head_938,source_tail_982-source_head_938);
            buffer_append_str(header_983,";\n");
        }
        if(        !result_type_940->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_960>0) {
                    new_fun_name_998=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1001=__builtin_string(fun_name_950))),version_960));
                    (__right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    id_999=(char*)come_increment_ref_count(__builtin_string(new_fun_name_998));
                    add_come_code_at_come_header(info,id_999,"%s",((char*)(__right_value1004=buffer_to_string(header_983))));
                    (__right_value1004 = come_decrement_ref_count2(__right_value1004, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_998 = come_decrement_ref_count2(new_fun_name_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_999 = come_decrement_ref_count2(id_999, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    id_1000=(char*)come_increment_ref_count(__builtin_string(fun_name_950));
                    add_come_code_at_come_header(info,id_1000,"%s",((char*)(__right_value1006=buffer_to_string(header_983))));
                    (__right_value1006 = come_decrement_ref_count2(__right_value1006, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1000 = come_decrement_ref_count2(id_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        block_1001=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__942,(_Bool)1));
        static_fun_1002=(_Bool)0;
        if(        result_type_940->mStatic) {
            result_type_940->mStatic=(_Bool)0;
            result_type_940->mUniq=(_Bool)0;
            static_fun_1002=(_Bool)1;
        }
        inline_fun_1003=(_Bool)0;
        if(        result_type_940->mInline) {
            result_type_940->mInline=(_Bool)0;
            result_type_940->mUniq=(_Bool)0;
            inline_fun_1003=(_Bool)1;
        }
        uniq_fun_1004=(_Bool)0;
        if(        result_type_940->mUniq) {
            result_type_940->mUniq=(_Bool)0;
            result_type_940->mInline=(_Bool)0;
            result_type_940->mStatic=(_Bool)0;
            uniq_fun_1004=(_Bool)1;
        }
        generate_fun_1005=(_Bool)0;
        if(        result_type_940->mUniq) {
            result_type_940->mUniq=(_Bool)0;
            result_type_940->mInline=(_Bool)0;
            result_type_940->mStatic=(_Bool)0;
            generate_fun_1005=(_Bool)1;
        }
        if(        version_960>0) {
            new_fun_name_1006=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1008=__builtin_string(fun_name_950))),version_960));
            (__right_value1008 = come_decrement_ref_count2(__right_value1008, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj193=fun_name_950;
            fun_name_950=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1006));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1006 = come_decrement_ref_count2(new_fun_name_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_1007=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2714, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sType*)come_increment_ref_count(result_type_940),(struct list$1void$ph*)come_increment_ref_count(param_types_955),(struct list$1char$ph*)come_increment_ref_count(param_names_956),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_957),(_Bool)0,var_args_958,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_1001)),static_fun_1002,info,inline_fun_1003,uniq_fun_1004,generate_fun_1005,(char*)come_increment_ref_count(attribute_939),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sFun*)come_increment_ref_count(fun_1007));
        }
        else {
            fun2_1008=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1017=__builtin_string(fun_name_950)))));
            (__right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1008==((void*)0)||fun2_1008->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sFun*)come_increment_ref_count(fun_1007));
            }
            come_call_finalizer3(fun2_1008,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2732, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1021=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2732, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1007),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        result_1009=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value1021,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__385 = come_increment_ref_count(result_1009);
        come_call_finalizer3(header_983,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1001,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1007,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1009) ? result_1009 = come_decrement_ref_count2(result_1009, ((struct sNode*)result_1009)->finalize, ((struct sNode*)result_1009)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_939 = come_decrement_ref_count2(attribute_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_940,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_941 = come_decrement_ref_count2(var_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_950 = come_decrement_ref_count2(fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_951 = come_decrement_ref_count2(base_fun_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_955,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__385) ? __result_obj__385 = come_decrement_ref_count2(__result_obj__385, ((struct sNode*)__result_obj__385)->finalize, ((struct sNode*)__result_obj__385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__385;
        come_call_finalizer3(header_983,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1001,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1007,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1009) ? result_1009 = come_decrement_ref_count2(result_1009, ((struct sNode*)result_1009)->finalize, ((struct sNode*)result_1009)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_960>0) {
            new_fun_name_1010=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_950,version_960));
            __dec_obj194=fun_name_950;
            fun_name_950=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1010));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1010 = come_decrement_ref_count2(new_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_1011=info->p;
            header_1012=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2746, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_1012,source_head_938,source_tail_1011-source_head_938);
            skip_spaces_and_lf(info);
            result_type_static_1013=result_type_940->mStatic;
            result_type_940->mStatic=(_Bool)0;
            result_type_940->mUniq=(_Bool)0;
            result_type_940->mInline=(_Bool)0;
            result_type_940->mGenerate=(_Bool)0;
            fun_1014=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2757, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sType*)come_increment_ref_count(result_type_940),(struct list$1void$ph*)come_increment_ref_count(param_types_955),(struct list$1char$ph*)come_increment_ref_count(param_names_956),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_957),(_Bool)1,var_args_958,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_939),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_1015=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1031=__builtin_string(fun_name_950)))));
            (__right_value1031 = come_decrement_ref_count2(__right_value1031, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1015==((void*)0)||fun2_1015->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sFun*)come_increment_ref_count(fun_1014));
            }
            if(            !result_type_static_1013) {
                if(                !info->no_output_come_code) {
                    id_1016=(char*)come_increment_ref_count(__builtin_string(fun_name_950));
                    add_come_code_at_come_header(info,id_1016,"%s",((char*)(__right_value1035=buffer_to_string(header_1012))));
                    (__right_value1035 = come_decrement_ref_count2(__right_value1035, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1016 = come_decrement_ref_count2(id_1016, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2778, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1037=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2778, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1014),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            result_1017=(struct sNode*)come_increment_ref_count(_inf_value7);
            come_call_finalizer3(__right_value1037,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__386 = come_increment_ref_count(result_1017);
            come_call_finalizer3(header_1012,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1014,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1015,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1017) ? result_1017 = come_decrement_ref_count2(result_1017, ((struct sNode*)result_1017)->finalize, ((struct sNode*)result_1017)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_939 = come_decrement_ref_count2(attribute_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_940,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_941 = come_decrement_ref_count2(var_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_950 = come_decrement_ref_count2(fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_951 = come_decrement_ref_count2(base_fun_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_955,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__386) ? __result_obj__386 = come_decrement_ref_count2(__result_obj__386, ((struct sNode*)__result_obj__386)->finalize, ((struct sNode*)__result_obj__386)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__386;
            come_call_finalizer3(header_1012,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1014,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1015,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1017) ? result_1017 = come_decrement_ref_count2(result_1017, ((struct sNode*)result_1017)->finalize, ((struct sNode*)result_1017)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value1039=parse_function_attribute(info)));
            asm_fun_1018=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute_1019=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value1039,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            string_operator_not_equals(asm_fun_1018,"")) {
                __dec_obj195=fun_name_950;
                fun_name_950=(char*)come_increment_ref_count(__builtin_string(asm_fun_1018));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_1020=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2788, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_1021=info->p;
                buffer_append(header_1020,source_head_938,source_tail_1021-source_head_938);
                skip_spaces_and_lf(info);
            }
            result_type_static_1022=result_type_940->mStatic;
            result_type_940->mStatic=(_Bool)0;
            result_type_940->mUniq=(_Bool)0;
            result_type_940->mInline=(_Bool)0;
            result_type_940->mGenerate=(_Bool)0;
            fun_1023=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2802, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sType*)come_increment_ref_count(result_type_940),(struct list$1void$ph*)come_increment_ref_count(param_types_955),(struct list$1char$ph*)come_increment_ref_count(param_names_956),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_957),(_Bool)1,var_args_958,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_939),(char*)come_increment_ref_count(fun_attribute_1019)));
            fun2_1024=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1046=__builtin_string(fun_name_950)))));
            (__right_value1046 = come_decrement_ref_count2(__right_value1046, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1024==((void*)0)||fun2_1024->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_950)),(struct sFun*)come_increment_ref_count(fun_1023));
            }
            if(            !result_type_static_1022) {
                if(                !info->no_output_come_code) {
                    id_1025=(char*)come_increment_ref_count(__builtin_string(fun_name_950));
                    add_come_code_at_come_header(info,id_1025,"%s",((char*)(__right_value1050=buffer_to_string(header_1020))));
                    (__right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1025 = come_decrement_ref_count2(id_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2823, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1052=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2823, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1023),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            result_1026=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value1052,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__387 = come_increment_ref_count(result_1026);
            (asm_fun_1018 = come_decrement_ref_count2(asm_fun_1018, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1019 = come_decrement_ref_count2(fun_attribute_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1020,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1023,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1024,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1026) ? result_1026 = come_decrement_ref_count2(result_1026, ((struct sNode*)result_1026)->finalize, ((struct sNode*)result_1026)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_939 = come_decrement_ref_count2(attribute_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_940,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_941 = come_decrement_ref_count2(var_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_950 = come_decrement_ref_count2(fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_951 = come_decrement_ref_count2(base_fun_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_955,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__387) ? __result_obj__387 = come_decrement_ref_count2(__result_obj__387, ((struct sNode*)__result_obj__387)->finalize, ((struct sNode*)__result_obj__387)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__387;
            (asm_fun_1018 = come_decrement_ref_count2(asm_fun_1018, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1019 = come_decrement_ref_count2(fun_attribute_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1020,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1023,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1024,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1026) ? result_1026 = come_decrement_ref_count2(result_1026, ((struct sNode*)result_1026)->finalize, ((struct sNode*)result_1026)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1054=err_msg(info,"invalid character(2)(%c)\n",*info->p)));
        come_exception_var_c23_1027=multiple_assign_var34->v1;
        Err_1028=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_1028)?(puts(Err_1028),exit(0)):(0));
        come_call_finalizer3(__right_value1054,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        exit(2);
        (Err_1028 = come_decrement_ref_count2(Err_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_962;
    __result_obj__388 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_939 = come_decrement_ref_count2(attribute_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_940,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_941 = come_decrement_ref_count2(var_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_950 = come_decrement_ref_count2(fun_name_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_951 = come_decrement_ref_count2(base_fun_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(param_types_955,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((__result_obj__388) ? __result_obj__388 = come_decrement_ref_count2(__result_obj__388, ((struct sNode*)__result_obj__388)->finalize, ((struct sNode*)__result_obj__388)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__388;
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
struct sLambdaNode* __result_obj__378;
void* __right_value947 = (void*)0;
struct sLambdaNode* result_968;
void* __right_value948 = (void*)0;
char* __dec_obj182;
struct sLambdaNode* __result_obj__379;
    if(    self==(void*)0) {
        __result_obj__378 = (void*)0;
        return __result_obj__378;
    }
    result_968=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_968->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_968->sname;
        result_968->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_968->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_968->mFun=self->mFun;
    }
    __result_obj__379 = result_968;
    come_call_finalizer3(result_968,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__379;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
struct sGenericsFun* __result_obj__381;
void* __right_value953 = (void*)0;
struct sGenericsFun* result_974;
void* __right_value954 = (void*)0;
struct sType* __dec_obj183;
void* __right_value955 = (void*)0;
struct list$1char$ph* __dec_obj184;
void* __right_value956 = (void*)0;
struct list$1char$ph* __dec_obj185;
void* __right_value957 = (void*)0;
char* __dec_obj186;
void* __right_value958 = (void*)0;
struct sType* __dec_obj187;
void* __right_value959 = (void*)0;
struct list$1void$ph* __dec_obj188;
void* __right_value960 = (void*)0;
struct list$1char$ph* __dec_obj189;
void* __right_value961 = (void*)0;
struct list$1char$ph* __dec_obj190;
void* __right_value962 = (void*)0;
char* __dec_obj191;
void* __right_value963 = (void*)0;
char* __dec_obj192;
struct sGenericsFun* __result_obj__382;
    if(    self==(void*)0) {
        __result_obj__381 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__381,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__381;
    }
    result_974=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj183=result_974->mImplType;
        result_974->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj184=result_974->mGenericsTypeNames;
        result_974->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj184,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj185=result_974->mMethodGenericsTypeNames;
        result_974->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj185,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj186=result_974->mName;
        result_974->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj187=result_974->mResultType;
        result_974->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj188=result_974->mParamTypes;
        result_974->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj188,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj189=result_974->mParamNames;
        result_974->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj189,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj190=result_974->mParamDefaultParametors;
        result_974->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj190,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj191=result_974->mBlock;
        result_974->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_974->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_974->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_974->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj192=result_974->mGenericsSName;
        result_974->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_974->mGenericsSLine=self->mGenericsSLine;
    }
    __result_obj__382 = come_increment_ref_count(result_974);
    come_call_finalizer3(result_974,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__382,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__382;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_973;
    result_973=0;
    result_973+=int_get_hash_key(((int)self->mImplType));
    result_973+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_973+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_973+=int_get_hash_key(((int)self->mName));
    result_973+=int_get_hash_key(((int)self->mResultType));
    result_973+=int_get_hash_key(((int)self->mParamTypes));
    result_973+=int_get_hash_key(((int)self->mParamNames));
    result_973+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_973+=int_get_hash_key(((int)self->mBlock));
    result_973+=int_get_hash_key(((int)self->mSLine));
    result_973+=int_get_hash_key(((int)self->mVarArgs));
    result_973+=int_get_hash_key(((int)self->mGenerate));
    result_973+=int_get_hash_key(((int)self->mGenericsSName));
    result_973+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_973;
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
char* last_code_1029;
char* __dec_obj196;
char* last_code2_1030;
char* __dec_obj197;
_Bool comma_instead_of_semicolon_1031;
struct sClass* current_stack_frame_struct_1032;
char* real_fun_name_1033;
struct sFun* finalizer_1034;
void* __right_value1055 = (void*)0;
struct sType* type_before_1035;
void* __right_value1056 = (void*)0;
struct sType* type2_1036;
void* __right_value1057 = (void*)0;
char* fun_name2_1037;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
char* none_generics_name_1038;
void* __right_value1060 = (void*)0;
char* generics_fun_name_1039;
void* __right_value1061 = (void*)0;
struct sGenericsFun* generics_fun_1040;
void* __right_value1062 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_1041=0;
_Bool err_1042=0;
void* __right_value1063 = (void*)0;
char* __dec_obj198;
int i_1043;
void* __right_value1064 = (void*)0;
char* new_fun_name_1044;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
char* __dec_obj199;
void* __right_value1067 = (void*)0;
char* __dec_obj200;
void* __right_value1068 = (void*)0;
char* __dec_obj201;
void* __right_value1069 = (void*)0;
char* user_real_fun_name_1045;
void* __right_value1070 = (void*)0;
struct sFun* user_finalizer_1046;
void* __right_value1071 = (void*)0;
struct sType* type2_1047;
struct sClass* klass_1048;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct buffer* source_1049;
void* __right_value1074 = (void*)0;
struct list$1void$ph* o2_saved_1051;
struct tuple2$2char$phsType$ph* it_1052;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1053=0;
struct sType* field_type_1054=0;
char* p_1057;
int sline_1058;
char* sname_1059;
char* head_1060;
struct buffer* source3_1061;
struct buffer* __dec_obj202;
void* __right_value1075 = (void*)0;
char* __dec_obj203;
void* __right_value1076 = (void*)0;
struct sBlock* block_1062;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct sType* result_type_1063;
void* __right_value1079 = (void*)0;
char* name_1064;
void* __right_value1080 = (void*)0;
struct sType* self_type_1065;
struct sType* __list_values21___1067[1];
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct list$1void$ph* param_types_1066;
void* __right_value1083 = (void*)0;
char* __list_values22___1068[1];
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct list$1char$ph* param_names_1069;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct list$1char$ph* param_default_parametors_1070;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct sFun* fun2_1071;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct sFun* fun_1072;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1097 = (void*)0;
struct sNode* node_1073;
_Bool Value_1074;
struct buffer* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__392;
memset(&i_1043, 0, sizeof(int));
    last_code_1029=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj196=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1030=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj197=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1031=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1032=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_1033=((void*)0);
    finalizer_1034=((void*)0);
    type_before_1035=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1036=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1036->mHeap=(_Bool)0;
    fun_name2_1037=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_1034=((struct sFun*)((void*)(__right_value1058=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1037))));
        come_call_finalizer3(__right_value1058,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        finalizer_1034==((void*)0)) {
            none_generics_name_1038=(char*)come_increment_ref_count(get_none_generics_name(type2_1036->mClass->mName));
            generics_fun_name_1039=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1038,fun_name));
            generics_fun_1040=((struct sGenericsFun*)((void*)(__right_value1061=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1039))));
            come_call_finalizer3(__right_value1061,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            generics_fun_1040) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value1062=create_generics_fun((char*)come_increment_ref_count(fun_name2_1037),generics_fun_1040,type,info)));
                name_1041=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_1042=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value1062,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1042) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_1034=((struct sFun*)((void*)(__right_value1063=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1041))));
                come_call_finalizer3(__right_value1063,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_1041 = come_decrement_ref_count2(name_1041, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1038 = come_decrement_ref_count2(none_generics_name_1038, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1039 = come_decrement_ref_count2(generics_fun_name_1039, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj198=real_fun_name_1033;
        real_fun_name_1033=(char*)come_increment_ref_count(fun_name2_1037);
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1043=128-1;        i_1043>=1;        i_1043--        ){
            new_fun_name_1044=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1037,i_1043));
            finalizer_1034=((struct sFun*)((void*)(__right_value1065=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1044))));
            come_call_finalizer3(__right_value1065,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            finalizer_1034) {
                __dec_obj199=fun_name2_1037;
                fun_name2_1037=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1044));
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1044 = come_decrement_ref_count2(new_fun_name_1044, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1044 = come_decrement_ref_count2(new_fun_name_1044, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_1034==((void*)0)) {
            finalizer_1034=((struct sFun*)((void*)(__right_value1067=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1037))));
            come_call_finalizer3(__right_value1067,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj200=real_fun_name_1033;
        real_fun_name_1033=(char*)come_increment_ref_count(fun_name2_1037);
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_1034==((void*)0)) {
        type=type_before_1035;
        __dec_obj201=real_fun_name_1033;
        real_fun_name_1033=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1045=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1046=((struct sFun*)((void*)(__right_value1070=map$2void$phvoid$ph$p_operator_load_element(info->funcs,user_real_fun_name_1045))));
        come_call_finalizer3(__right_value1070,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type2_1047=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1047;
        klass_1048=type->mClass;
        if(        type->mPointerNum>0&&klass_1048->mStruct||type->mAllocaValue) {
            source_1049=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2924, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_1049,123);
            if(            user_finalizer_1046) {
                char source2_1050[1024];
                memset(&source2_1050, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1050,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1045);
                buffer_append_str(source_1049,source2_1050);
            }
            klass_1048=((struct sClass*)((void*)(__right_value1074=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1048->mName))));
            come_call_finalizer3(__right_value1074,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1051=(struct list$1void$ph*)come_increment_ref_count((klass_1048->mFields)),it_1052=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1051)));            !list$1void$ph$p_end((o2_saved_1051));            it_1052=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1051)))            ){
                multiple_assign_var36=it_1052;
                name_1053=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1054=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1054->mHeap) {
                    char source2_1055[1024];
                    memset(&source2_1055, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1055,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_1053,name_1053,name_1053,name_1053);
                    buffer_append_str(source_1049,source2_1055);
                }
                else if(                field_type_1054->mChannel) {
                    char source2_1056[1024];
                    memset(&source2_1056, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1056,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1053,name_1053);
                    buffer_append_str(source_1049,source2_1056);
                    snprintf(source2_1056,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1053,name_1053);
                    buffer_append_str(source_1049,source2_1056);
                }
                (name_1053 = come_decrement_ref_count2(name_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1054,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1051,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1049,125);
            p_1057=info->p;
            sline_1058=info->sline;
            sname_1059=(char*)come_increment_ref_count(info->sname);
            head_1060=info->head;
            source3_1061=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj202=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1049);
            come_call_finalizer3(__dec_obj202,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_1049->buf;
            info->head=source_1049->buf;
            __dec_obj203=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1033));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1062=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1063=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2973, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            name_1064=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1033));
            self_type_1065=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1065->mHeap=(_Bool)0;
            if(            self_type_1065->mPointerNum==0) {
                self_type_1065->mPointerNum=1;
            }
            if(            self_type_1065->mPointerNum>1) {
                self_type_1065->mPointerNum=1;
            }
            param_types_1066=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___1067[0]=self_type_1065,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2983, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values21___1067)));
            param_names_1069=(struct list$1char$ph*)come_increment_ref_count((__list_values22___1068[0]=((char*)(__right_value1083=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2984, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values22___1068)));
            (__right_value1083 = come_decrement_ref_count2(__right_value1083, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_1070=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2985, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1070,((void*)0));
            result_type_1063->mStatic=(_Bool)0;
            result_type_1063->mUniq=(_Bool)0;
            result_type_1063->mInline=(_Bool)0;
            result_type_1063->mGenerate=(_Bool)0;
            fun2_1071=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1088=__builtin_string(name_1064)))));
            (__right_value1088 = come_decrement_ref_count2(__right_value1088, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1071==((void*)0)||fun2_1071->mExternal) {
                fun_1072=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2995, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1064),(struct sType*)come_increment_ref_count(result_type_1063),(struct list$1void$ph*)come_increment_ref_count(param_types_1066),(struct list$1char$ph*)come_increment_ref_count(param_names_1069),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1070),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1062),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1064)),(struct sFun*)come_increment_ref_count(fun_1072));
                finalizer_1034=fun_1072;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3005, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1096=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3005, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1072),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1073=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1096,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                Value_1074=node_compile(node_1073,info);
                if(                !Value_1074) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1072,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1073) ? node_1073 = come_decrement_ref_count2(node_1073, ((struct sNode*)node_1073)->finalize, ((struct sNode*)node_1073)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_1034=fun2_1071;
            }
            __dec_obj204=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1061);
            come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1057;
            info->head=head_1060;
            info->sline=sline_1058;
            __dec_obj205=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1059);
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1049,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1059 = come_decrement_ref_count2(sname_1059, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1061,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1062,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1063,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1064 = come_decrement_ref_count2(name_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1065,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1066,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1069,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1070,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1071,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_1045 = come_decrement_ref_count2(user_real_fun_name_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_1047,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1032;
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1029);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1030);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1031;
    __result_obj__392 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1101=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3030, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_1034,(char*)come_increment_ref_count(real_fun_name_1033)))));
    (last_code_1029 = come_decrement_ref_count2(last_code_1029, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1030 = come_decrement_ref_count2(last_code2_1030, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1033 = come_decrement_ref_count2(real_fun_name_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_1035,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1036,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1037 = come_decrement_ref_count2(fun_name2_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1101,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__392,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__392;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__389;
void* __right_value1098 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1075;
void* __right_value1099 = (void*)0;
char* __dec_obj208;
struct tuple2$2sFun$pchar$ph* __result_obj__390;
    if(    self==(void*)0) {
        __result_obj__389 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__389,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__389;
    }
    result_1075=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1075->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj208=result_1075->v2;
        result_1075->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__390 = come_increment_ref_count(result_1075);
    come_call_finalizer3(result_1075,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__390,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__390;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1076;
    result_1076=0;
    result_1076+=int_get_hash_key(((int)self->v1));
    result_1076+=int_get_hash_key(((int)self->v2));
    return result_1076;
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
struct tuple2$2sFun$pchar$ph* __result_obj__391;
    self->v1=v1;
    __dec_obj209=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__391 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__391,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__391;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1077;
char* __dec_obj210;
char* last_code2_1078;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_1079;
struct sClass* current_stack_frame_struct_1080;
struct sFun* equaler_1081;
void* __right_value1102 = (void*)0;
char* real_fun_name_1082;
void* __right_value1103 = (void*)0;
struct sType* type2_1083;
struct sClass* klass_1084;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
struct buffer* source_1085;
char* name_1086;
void* __right_value1106 = (void*)0;
struct list$1void$ph* o2_saved_1088;
struct tuple2$2char$phsType$ph* it_1089;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_1090=0;
struct sType* field_type_1091=0;
char* p_1093;
int sline_1094;
char* sname_1095;
char* head_1096;
struct buffer* source3_1097;
struct buffer* __dec_obj212;
void* __right_value1107 = (void*)0;
char* __dec_obj213;
void* __right_value1108 = (void*)0;
struct sBlock* block_1098;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct sType* result_type_1099;
void* __right_value1111 = (void*)0;
char* name_1100;
void* __right_value1112 = (void*)0;
struct sType* left_type_1101;
void* __right_value1113 = (void*)0;
struct sType* right_type_1102;
struct sType* __list_values23___1104[2];
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
struct list$1void$ph* param_types_1103;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
char* __list_values24___1105[2];
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
struct list$1char$ph* param_names_1106;
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
struct list$1char$ph* param_default_parametors_1107;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
struct sFun* fun2_1108;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct sFun* fun_1109;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1131 = (void*)0;
struct sNode* node_1110;
_Bool Value_1111;
void* __right_value1132 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c24_1112=0;
char* Err_1113=0;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__393;
    last_code_1077=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1078=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1079=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1080=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1081=((void*)0);
    real_fun_name_1082=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1083=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1083;
    klass_1084=type->mClass;
    if(    type->mPointerNum>0&&!klass_1084->mNumber) {
        source_1085=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3056, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1085,123);
        if(        klass_1084->mProtocol) {
            name_1086="_protocol_obj";
            char source2_1087[1024];
            memset(&source2_1087, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1087,1024,"return left.%s.equals(right.%s);\n",name_1086,name_1086);
            buffer_append_str(source_1085,source2_1087);
        }
        else {
            klass_1084=((struct sClass*)((void*)(__right_value1106=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1084->mName))));
            come_call_finalizer3(__right_value1106,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1088=(struct list$1void$ph*)come_increment_ref_count((klass_1084->mFields)),it_1089=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1088)));            !list$1void$ph$p_end((o2_saved_1088));            it_1089=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1088)))            ){
                multiple_assign_var37=it_1089;
                name_1090=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1091=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1092[1024];
                memset(&source2_1092, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1092,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1090,name_1090,name_1090);
                buffer_append_str(source_1085,source2_1092);
                (name_1090 = come_decrement_ref_count2(name_1090, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1091,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1088,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1085,"return true;");
        buffer_append_char(source_1085,125);
        p_1093=info->p;
        sline_1094=info->sline;
        sname_1095=(char*)come_increment_ref_count(info->sname);
        head_1096=info->head;
        source3_1097=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1085);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1085->buf;
        info->head=source_1085->buf;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1082));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1098=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1099=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3096, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1100=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1082));
        left_type_1101=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1101->mHeap=(_Bool)0;
        right_type_1102=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1102->mHeap=(_Bool)0;
        param_types_1103=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___1104[0]=left_type_1101,
__list_values23___1104[1]=right_type_1102,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3102, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values23___1104)));
        param_names_1106=(struct list$1char$ph*)come_increment_ref_count((__list_values24___1105[0]=((char*)(__right_value1116=__builtin_string("left"))),
__list_values24___1105[1]=((char*)(__right_value1117=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3103, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values24___1105)));
        (__right_value1116 = come_decrement_ref_count2(__right_value1116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1117 = come_decrement_ref_count2(__right_value1117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1107=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3104, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1107,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1107,((void*)0));
        result_type_1099->mStatic=(_Bool)0;
        result_type_1099->mUniq=(_Bool)0;
        result_type_1099->mInline=(_Bool)0;
        result_type_1099->mGenerate=(_Bool)0;
        fun2_1108=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1122=__builtin_string(name_1100)))));
        (__right_value1122 = come_decrement_ref_count2(__right_value1122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1108==((void*)0)||fun2_1108->mExternal) {
            fun_1109=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3115, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1100),(struct sType*)come_increment_ref_count(result_type_1099),(struct list$1void$ph*)come_increment_ref_count(param_types_1103),(struct list$1char$ph*)come_increment_ref_count(param_names_1106),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1107),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1098),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1100)),(struct sFun*)come_increment_ref_count(fun_1109));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3123, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1130=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3123, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1109),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1110=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1130,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1111=node_compile(node_1110,info);
            if(            !Value_1111) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1132=err_msg(info,"compiling error")));
                come_exception_var_c24_1112=multiple_assign_var38->v1;
                Err_1113=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1113)?(puts(Err_1113),exit(0)):(0));
                come_call_finalizer3(__right_value1132,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1113 = come_decrement_ref_count2(Err_1113, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1081=fun_1109;
            come_call_finalizer3(fun_1109,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1110) ? node_1110 = come_decrement_ref_count2(node_1110, ((struct sNode*)node_1110)->finalize, ((struct sNode*)node_1110)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1081=fun2_1108;
        }
        __dec_obj214=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1097);
        come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1093;
        info->head=head_1096;
        info->sline=sline_1094;
        __dec_obj215=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1095);
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1085,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1095 = come_decrement_ref_count2(sname_1095, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1097,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1098,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1099,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1100 = come_decrement_ref_count2(name_1100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1101,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1102,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1103,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1106,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1107,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1108,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1080;
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1077);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1078);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1079;
    __result_obj__393 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1134=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3149, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1081,(char*)come_increment_ref_count(real_fun_name_1082)))));
    (last_code_1077 = come_decrement_ref_count2(last_code_1077, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1078 = come_decrement_ref_count2(last_code2_1078, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1082 = come_decrement_ref_count2(real_fun_name_1082, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1083,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1134,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__393,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__393;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1114;
char* __dec_obj218;
char* last_code2_1115;
char* __dec_obj219;
_Bool comma_instead_of_semicolon_1116;
struct sClass* current_stack_frame_struct_1117;
struct sFun* equaler_1118;
void* __right_value1135 = (void*)0;
char* real_fun_name_1119;
void* __right_value1136 = (void*)0;
struct sType* type2_1120;
struct sClass* klass_1121;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct buffer* source_1122;
char* name_1123;
int i_1126;
void* __right_value1139 = (void*)0;
struct list$1void$ph* o2_saved_1127;
struct tuple2$2char$phsType$ph* it_1128;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1129=0;
struct sType* field_type_1130=0;
char* p_1134;
int sline_1135;
char* sname_1136;
char* head_1137;
struct buffer* source3_1138;
struct buffer* __dec_obj220;
void* __right_value1140 = (void*)0;
char* __dec_obj221;
void* __right_value1141 = (void*)0;
struct sBlock* block_1139;
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
struct sType* result_type_1140;
void* __right_value1144 = (void*)0;
char* name_1141;
void* __right_value1145 = (void*)0;
struct sType* left_type_1142;
void* __right_value1146 = (void*)0;
struct sType* right_type_1143;
struct sType* __list_values25___1145[2];
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
struct list$1void$ph* param_types_1144;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
char* __list_values26___1146[2];
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct list$1char$ph* param_names_1147;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct list$1char$ph* param_default_parametors_1148;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
struct sFun* fun2_1149;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
struct sFun* fun_1150;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1164 = (void*)0;
struct sNode* node_1151;
_Bool Value_1152;
void* __right_value1165 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c25_1153=0;
char* Err_1154=0;
struct buffer* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__394;
    last_code_1114=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1115=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1116=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1117=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1118=((void*)0);
    real_fun_name_1119=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1120=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1120;
    klass_1121=type->mClass;
    if(    type->mPointerNum>0&&!klass_1121->mNumber) {
        source_1122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3174, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1122,123);
        if(        klass_1121->mProtocol) {
            name_1123="_protocol_obj";
            char source2_1124[1024];
            memset(&source2_1124, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1124,1024,"return left.%s !== right.%s;\n",name_1123,name_1123);
            buffer_append_str(source_1122,source2_1124);
        }
        else {
            char source2_1125[1024];
            memset(&source2_1125, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1125,1024,"return !(");
            buffer_append_str(source_1122,source2_1125);
            snprintf(source2_1125,1024,"( ");
            buffer_append_str(source_1122,source2_1125);
            i_1126=0;
            klass_1121=((struct sClass*)((void*)(__right_value1139=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1121->mName))));
            come_call_finalizer3(__right_value1139,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1127=(struct list$1void$ph*)come_increment_ref_count((klass_1121->mFields)),it_1128=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1127)));            !list$1void$ph$p_end((o2_saved_1127));            it_1128=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1127)))            ){
                multiple_assign_var39=it_1128;
                name_1129=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1130=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1131[1024];
                memset(&source2_1131, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1131,1024,"(left.%s === right.%s)",name_1129,name_1129,name_1129);
                buffer_append_str(source_1122,source2_1131);
                if(                i_1126==list$1void$ph$p_length(klass_1121->mFields)-1) {
                    char source2_1132[1024];
                    memset(&source2_1132, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1132,1024,"));");
                    buffer_append_str(source_1122,source2_1132);
                }
                else {
                    char source2_1133[1024];
                    memset(&source2_1133, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1133,1024," && ");
                    buffer_append_str(source_1122,source2_1133);
                }
                i_1126++;
                (name_1129 = come_decrement_ref_count2(name_1129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1130,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1127,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1122,125);
        p_1134=info->p;
        sline_1135=info->sline;
        sname_1136=(char*)come_increment_ref_count(info->sname);
        head_1137=info->head;
        source3_1138=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1122);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1122->buf;
        info->head=source_1122->buf;
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1119));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1139=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1140=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3234, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1141=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1119));
        left_type_1142=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1142->mHeap=(_Bool)0;
        right_type_1143=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1143->mHeap=(_Bool)0;
        param_types_1144=(struct list$1sType$ph*)come_increment_ref_count((__list_values25___1145[0]=left_type_1142,
__list_values25___1145[1]=right_type_1143,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3240, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values25___1145)));
        param_names_1147=(struct list$1char$ph*)come_increment_ref_count((__list_values26___1146[0]=((char*)(__right_value1149=__builtin_string("left"))),
__list_values26___1146[1]=((char*)(__right_value1150=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3241, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values26___1146)));
        (__right_value1149 = come_decrement_ref_count2(__right_value1149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1150 = come_decrement_ref_count2(__right_value1150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1148=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3242, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1148,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1148,((void*)0));
        result_type_1140->mStatic=(_Bool)0;
        result_type_1140->mUniq=(_Bool)0;
        result_type_1140->mInline=(_Bool)0;
        result_type_1140->mGenerate=(_Bool)0;
        fun2_1149=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1155=__builtin_string(name_1141)))));
        (__right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1149==((void*)0)||fun2_1149->mExternal) {
            fun_1150=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3253, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1141),(struct sType*)come_increment_ref_count(result_type_1140),(struct list$1void$ph*)come_increment_ref_count(param_types_1144),(struct list$1char$ph*)come_increment_ref_count(param_names_1147),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1148),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1139),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1141)),(struct sFun*)come_increment_ref_count(fun_1150));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3261, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1163=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3261, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1150),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1151=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1163,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1152=node_compile(node_1151,info);
            if(            !Value_1152) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1165=err_msg(info,"compiling error")));
                come_exception_var_c25_1153=multiple_assign_var40->v1;
                Err_1154=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1154)?(puts(Err_1154),exit(0)):(0));
                come_call_finalizer3(__right_value1165,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1154 = come_decrement_ref_count2(Err_1154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1118=fun_1150;
            come_call_finalizer3(fun_1150,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1151) ? node_1151 = come_decrement_ref_count2(node_1151, ((struct sNode*)node_1151)->finalize, ((struct sNode*)node_1151)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1118=fun2_1149;
        }
        __dec_obj222=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1138);
        come_call_finalizer3(__dec_obj222,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1134;
        info->head=head_1137;
        info->sline=sline_1135;
        __dec_obj223=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1136);
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1122,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1136 = come_decrement_ref_count2(sname_1136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1138,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1139,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1140,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1141 = come_decrement_ref_count2(name_1141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1142,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1144,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1147,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1148,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1149,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1117;
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1114);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1115);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1116;
    __result_obj__394 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1167=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3287, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1118,(char*)come_increment_ref_count(real_fun_name_1119)))));
    (last_code_1114 = come_decrement_ref_count2(last_code_1114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1115 = come_decrement_ref_count2(last_code2_1115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1119 = come_decrement_ref_count2(real_fun_name_1119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1120,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1167,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__394,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__394;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1155;
char* __dec_obj226;
char* last_code2_1156;
char* __dec_obj227;
_Bool comma_instead_of_semicolon_1157;
struct sClass* current_stack_frame_struct_1158;
struct sFun* equaler_1159;
void* __right_value1168 = (void*)0;
char* real_fun_name_1160;
void* __right_value1169 = (void*)0;
struct sType* type2_1161;
struct sClass* klass_1162;
void* __right_value1170 = (void*)0;
void* __right_value1171 = (void*)0;
struct buffer* source_1163;
char* name_1164;
int i_1167;
void* __right_value1172 = (void*)0;
struct list$1void$ph* o2_saved_1168;
struct tuple2$2char$phsType$ph* it_1169;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1170=0;
struct sType* field_type_1171=0;
char* p_1175;
int sline_1176;
char* sname_1177;
char* head_1178;
struct buffer* source3_1179;
struct buffer* __dec_obj228;
void* __right_value1173 = (void*)0;
char* __dec_obj229;
void* __right_value1174 = (void*)0;
struct sBlock* block_1180;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct sType* result_type_1181;
void* __right_value1177 = (void*)0;
char* name_1182;
void* __right_value1178 = (void*)0;
struct sType* left_type_1183;
void* __right_value1179 = (void*)0;
struct sType* right_type_1184;
struct sType* __list_values27___1186[2];
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct list$1void$ph* param_types_1185;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
char* __list_values28___1187[2];
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
struct list$1char$ph* param_names_1188;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
struct list$1char$ph* param_default_parametors_1189;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
struct sFun* fun2_1190;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct sFun* fun_1191;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1197 = (void*)0;
struct sNode* node_1192;
_Bool Value_1193;
void* __right_value1198 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c26_1194=0;
char* Err_1195=0;
struct buffer* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
char* __dec_obj233;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__395;
    last_code_1155=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1156=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1157=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1158=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1159=((void*)0);
    real_fun_name_1160=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1161=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1161;
    klass_1162=type->mClass;
    if(    type->mPointerNum>0&&!klass_1162->mNumber) {
        source_1163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3312, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1163,123);
        if(        klass_1162->mProtocol) {
            name_1164="_protocol_obj";
            char source2_1165[1024];
            memset(&source2_1165, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1165,1024,"return !left.%s.equals(right.%s);\n",name_1164,name_1164);
            buffer_append_str(source_1163,source2_1165);
        }
        else {
            char source2_1166[1024];
            memset(&source2_1166, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1166,1024,"return !(");
            buffer_append_str(source_1163,source2_1166);
            i_1167=0;
            klass_1162=((struct sClass*)((void*)(__right_value1172=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1162->mName))));
            come_call_finalizer3(__right_value1172,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1168=(struct list$1void$ph*)come_increment_ref_count((klass_1162->mFields)),it_1169=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1168)));            !list$1void$ph$p_end((o2_saved_1168));            it_1169=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1168)))            ){
                multiple_assign_var41=it_1169;
                name_1170=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1171=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1172[1024];
                memset(&source2_1172, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1172,1024,"left.%s.equals(right.%s)",name_1170,name_1170);
                buffer_append_str(source_1163,source2_1172);
                if(                i_1167==list$1void$ph$p_length(klass_1162->mFields)-1) {
                    char source2_1173[1024];
                    memset(&source2_1173, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1173,1024,");");
                    buffer_append_str(source_1163,source2_1173);
                }
                else {
                    char source2_1174[1024];
                    memset(&source2_1174, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1174,1024," && ");
                    buffer_append_str(source_1163,source2_1174);
                }
                i_1167++;
                (name_1170 = come_decrement_ref_count2(name_1170, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1171,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1168,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1163,125);
        p_1175=info->p;
        sline_1176=info->sline;
        sname_1177=(char*)come_increment_ref_count(info->sname);
        head_1178=info->head;
        source3_1179=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj228=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1163);
        come_call_finalizer3(__dec_obj228,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1163->buf;
        info->head=source_1163->buf;
        __dec_obj229=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1160));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1180=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1181=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3369, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1182=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1160));
        left_type_1183=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1183->mHeap=(_Bool)0;
        right_type_1184=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1184->mHeap=(_Bool)0;
        param_types_1185=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___1186[0]=left_type_1183,
__list_values27___1186[1]=right_type_1184,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3375, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values27___1186)));
        param_names_1188=(struct list$1char$ph*)come_increment_ref_count((__list_values28___1187[0]=((char*)(__right_value1182=__builtin_string("left"))),
__list_values28___1187[1]=((char*)(__right_value1183=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3376, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values28___1187)));
        (__right_value1182 = come_decrement_ref_count2(__right_value1182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1183 = come_decrement_ref_count2(__right_value1183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1189=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3377, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1189,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1189,((void*)0));
        result_type_1181->mStatic=(_Bool)0;
        result_type_1181->mUniq=(_Bool)0;
        result_type_1181->mInline=(_Bool)0;
        result_type_1181->mGenerate=(_Bool)0;
        fun2_1190=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1188=__builtin_string(name_1182)))));
        (__right_value1188 = come_decrement_ref_count2(__right_value1188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1190==((void*)0)||fun2_1190->mExternal) {
            fun_1191=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3388, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1182),(struct sType*)come_increment_ref_count(result_type_1181),(struct list$1void$ph*)come_increment_ref_count(param_types_1185),(struct list$1char$ph*)come_increment_ref_count(param_names_1188),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1189),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1180),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1182)),(struct sFun*)come_increment_ref_count(fun_1191));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3396, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1196=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3396, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1191),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1192=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1196,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1193=node_compile(node_1192,info);
            if(            !Value_1193) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value1198=err_msg(info,"compiling error")));
                come_exception_var_c26_1194=multiple_assign_var42->v1;
                Err_1195=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1195)?(puts(Err_1195),exit(0)):(0));
                come_call_finalizer3(__right_value1198,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1195 = come_decrement_ref_count2(Err_1195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1159=fun_1191;
            come_call_finalizer3(fun_1191,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1192) ? node_1192 = come_decrement_ref_count2(node_1192, ((struct sNode*)node_1192)->finalize, ((struct sNode*)node_1192)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1159=fun2_1190;
        }
        __dec_obj230=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1179);
        come_call_finalizer3(__dec_obj230,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1175;
        info->head=head_1178;
        info->sline=sline_1176;
        __dec_obj231=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1177);
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1177 = come_decrement_ref_count2(sname_1177, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1179,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1180,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1181,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1182 = come_decrement_ref_count2(name_1182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1183,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1184,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1185,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1188,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1189,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1190,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1158;
    __dec_obj232=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1155);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1156);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1157;
    __result_obj__395 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1200=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3422, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1159,(char*)come_increment_ref_count(real_fun_name_1160)))));
    (last_code_1155 = come_decrement_ref_count2(last_code_1155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1156 = come_decrement_ref_count2(last_code2_1156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1160 = come_decrement_ref_count2(real_fun_name_1160, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1161,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1200,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__395,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__395;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1196;
char* __dec_obj234;
char* last_code2_1197;
char* __dec_obj235;
_Bool comma_instead_of_semicolon_1198;
struct sClass* current_stack_frame_struct_1199;
struct sFun* equaler_1200;
void* __right_value1201 = (void*)0;
char* real_fun_name_1201;
void* __right_value1202 = (void*)0;
struct sType* type2_1202;
struct sClass* klass_1203;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
struct buffer* source_1204;
char* name_1205;
void* __right_value1205 = (void*)0;
struct list$1void$ph* o2_saved_1208;
struct tuple2$2char$phsType$ph* it_1209;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1210=0;
struct sType* field_type_1211=0;
char* p_1213;
int sline_1214;
char* sname_1215;
char* head_1216;
struct buffer* source3_1217;
struct buffer* __dec_obj236;
void* __right_value1206 = (void*)0;
char* __dec_obj237;
void* __right_value1207 = (void*)0;
struct sBlock* block_1218;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
struct sType* result_type_1219;
void* __right_value1210 = (void*)0;
char* name_1220;
void* __right_value1211 = (void*)0;
struct sType* left_type_1221;
void* __right_value1212 = (void*)0;
struct sType* right_type_1222;
struct sType* __list_values29___1224[2];
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
struct list$1void$ph* param_types_1223;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
char* __list_values30___1225[2];
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct list$1char$ph* param_names_1226;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct list$1char$ph* param_default_parametors_1227;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
struct sFun* fun2_1228;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct sFun* fun_1229;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1230 = (void*)0;
struct sNode* node_1230;
_Bool Value_1231;
void* __right_value1231 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c27_1232=0;
char* Err_1233=0;
struct buffer* __dec_obj238;
char* __dec_obj239;
char* __dec_obj240;
char* __dec_obj241;
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__396;
    last_code_1196=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj234=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1197=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj235=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1198=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1199=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1200=((void*)0);
    real_fun_name_1201=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1202=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1202;
    klass_1203=type->mClass;
    if(    type->mPointerNum>0&&!klass_1203->mNumber) {
        source_1204=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3447, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1204,123);
        if(        klass_1203->mProtocol) {
            name_1205="_protocol_obj";
            char source2_1206[1024];
            memset(&source2_1206, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1206,1024,"return left.%s === right.%s;\n",name_1205,name_1205);
            buffer_append_str(source_1204,source2_1206);
        }
        else {
            char source2_1207[1024];
            memset(&source2_1207, 0, sizeof(char)            *(1024)            );
            klass_1203=((struct sClass*)((void*)(__right_value1205=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1203->mName))));
            come_call_finalizer3(__right_value1205,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1208=(struct list$1void$ph*)come_increment_ref_count((klass_1203->mFields)),it_1209=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1208)));            !list$1void$ph$p_end((o2_saved_1208));            it_1209=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1208)))            ){
                multiple_assign_var43=it_1209;
                name_1210=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1211=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1212[1024];
                memset(&source2_1212, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1212,1024,"if(left.%s !== right.%s) { return false; }\n",name_1210,name_1210,name_1210);
                buffer_append_str(source_1204,source2_1212);
                (name_1210 = come_decrement_ref_count2(name_1210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1211,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1208,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1204,"return true;\n");
        buffer_append_char(source_1204,125);
        p_1213=info->p;
        sline_1214=info->sline;
        sname_1215=(char*)come_increment_ref_count(info->sname);
        head_1216=info->head;
        source3_1217=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj236=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1204);
        come_call_finalizer3(__dec_obj236,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1204->buf;
        info->head=source_1204->buf;
        __dec_obj237=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1201));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1218=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1219=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3489, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1220=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1201));
        left_type_1221=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1221->mHeap=(_Bool)0;
        right_type_1222=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1222->mHeap=(_Bool)0;
        param_types_1223=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___1224[0]=left_type_1221,
__list_values29___1224[1]=right_type_1222,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3495, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values29___1224)));
        param_names_1226=(struct list$1char$ph*)come_increment_ref_count((__list_values30___1225[0]=((char*)(__right_value1215=__builtin_string("left"))),
__list_values30___1225[1]=((char*)(__right_value1216=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3496, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values30___1225)));
        (__right_value1215 = come_decrement_ref_count2(__right_value1215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1216 = come_decrement_ref_count2(__right_value1216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1227=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3497, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1227,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1227,((void*)0));
        result_type_1219->mStatic=(_Bool)0;
        result_type_1219->mUniq=(_Bool)0;
        result_type_1219->mInline=(_Bool)0;
        result_type_1219->mGenerate=(_Bool)0;
        fun2_1228=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1221=__builtin_string(name_1220)))));
        (__right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1228==((void*)0)||fun2_1228->mExternal) {
            fun_1229=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3508, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1220),(struct sType*)come_increment_ref_count(result_type_1219),(struct list$1void$ph*)come_increment_ref_count(param_types_1223),(struct list$1char$ph*)come_increment_ref_count(param_names_1226),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1227),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1218),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1220)),(struct sFun*)come_increment_ref_count(fun_1229));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3516, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1229=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3516, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1229),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1230=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1229,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1231=node_compile(node_1230,info);
            if(            !Value_1231) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value1231=err_msg(info,"compiling error(X)")));
                come_exception_var_c27_1232=multiple_assign_var44->v1;
                Err_1233=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1233)?(puts(Err_1233),exit(0)):(0));
                come_call_finalizer3(__right_value1231,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1233 = come_decrement_ref_count2(Err_1233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1200=fun_1229;
            come_call_finalizer3(fun_1229,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1230) ? node_1230 = come_decrement_ref_count2(node_1230, ((struct sNode*)node_1230)->finalize, ((struct sNode*)node_1230)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1200=fun2_1228;
        }
        __dec_obj238=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1217);
        come_call_finalizer3(__dec_obj238,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1213;
        info->head=head_1216;
        info->sline=sline_1214;
        __dec_obj239=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1215);
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1204,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1215 = come_decrement_ref_count2(sname_1215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1217,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1218,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1219,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1220 = come_decrement_ref_count2(name_1220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1221,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1222,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1223,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1226,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1227,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1228,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1199;
    __dec_obj240=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1196);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj241=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1197);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1198;
    __result_obj__396 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1233=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3542, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1200,(char*)come_increment_ref_count(real_fun_name_1201)))));
    (last_code_1196 = come_decrement_ref_count2(last_code_1196, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1197 = come_decrement_ref_count2(last_code2_1197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1201 = come_decrement_ref_count2(real_fun_name_1201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1233,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__396,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__396;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__397;
char* last_code_1234;
char* __dec_obj242;
char* last_code2_1235;
char* __dec_obj243;
_Bool comma_instead_of_semicolon_1236;
struct sClass* current_stack_frame_struct_1237;
struct sFun* cloner_1238;
void* __right_value1236 = (void*)0;
char* real_fun_name_1239;
void* __right_value1237 = (void*)0;
struct sType* type2_1240;
struct sClass* klass_1241;
char* fun_name2_1242;
void* __right_value1238 = (void*)0;
char* none_generics_name_1243;
void* __right_value1239 = (void*)0;
struct sType* obj_type_1244;
void* __right_value1240 = (void*)0;
char* __dec_obj244;
void* __right_value1241 = (void*)0;
char* fun_name3_1245;
void* __right_value1242 = (void*)0;
struct sGenericsFun* generics_fun_1246;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1247=0;
_Bool err_1248=0;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__398;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
char* __dec_obj245;
void* __right_value1249 = (void*)0;
char* __dec_obj246;
int i_1249;
void* __right_value1250 = (void*)0;
char* new_fun_name_1250;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
char* __dec_obj247;
void* __right_value1253 = (void*)0;
char* __dec_obj248;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct buffer* source_1251;
void* __right_value1256 = (void*)0;
char* name_1252;
void* __right_value1257 = (void*)0;
struct list$1void$ph* o2_saved_1254;
struct tuple2$2char$phsType$ph* it_1255;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1256=0;
struct sType* field_type_1257=0;
void* __right_value1258 = (void*)0;
struct list$1void$ph* o2_saved_1260;
struct tuple2$2char$phsType$ph* it_1261;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1262=0;
struct sType* field_type_1263=0;
char* p_1267;
int sline_1268;
char* sname_1269;
struct buffer* source3_1270;
char* head_1271;
struct buffer* __dec_obj249;
void* __right_value1259 = (void*)0;
char* __dec_obj250;
void* __right_value1260 = (void*)0;
struct sBlock* block_1272;
void* __right_value1261 = (void*)0;
struct sType* result_type_1273;
void* __right_value1262 = (void*)0;
char* name_1274;
void* __right_value1263 = (void*)0;
struct sType* self_type_1275;
struct sType* __list_values31___1277[1];
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
struct list$1void$ph* param_types_1276;
void* __right_value1266 = (void*)0;
char* __list_values32___1278[1];
void* __right_value1267 = (void*)0;
void* __right_value1268 = (void*)0;
struct list$1char$ph* param_names_1279;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
struct list$1char$ph* param_default_parametors_1280;
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
struct sFun* fun2_1281;
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
void* __right_value1276 = (void*)0;
struct sFun* fun_1282;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1280 = (void*)0;
struct sNode* node_1283;
_Bool Value_1284;
void* __right_value1281 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c28_1285=0;
char* Err_1286=0;
char* __dec_obj251;
struct buffer* __dec_obj252;
char* __dec_obj253;
char* __dec_obj254;
void* __right_value1282 = (void*)0;
void* __right_value1283 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__399;
fun_name2_1242 = (void*)0;
memset(&i_1249, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__397 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1235=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3548, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer3(__right_value1235,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__397,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__397;
    }
    last_code_1234=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj242=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1235=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj243=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1236=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1237=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1238=((void*)0);
    real_fun_name_1239=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1240=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1240;
    klass_1241=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1243=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1244=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj244=fun_name2_1242;
        fun_name2_1242=(char*)come_increment_ref_count(create_method_name(obj_type_1244,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1245=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1243,fun_name));
        generics_fun_1246=((struct sGenericsFun*)((void*)(__right_value1242=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_1245,((void*)0)))));
        come_call_finalizer3(__right_value1242,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_1246) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value1244=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1242)),generics_fun_1246,obj_type_1244,info)));
            name_1247=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1248=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value1244,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_1248) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__398 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1246=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3588, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1247 = come_decrement_ref_count2(name_1247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1243 = come_decrement_ref_count2(none_generics_name_1243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1244,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1245 = come_decrement_ref_count2(fun_name3_1245, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1234 = come_decrement_ref_count2(last_code_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1235 = come_decrement_ref_count2(last_code2_1235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1239 = come_decrement_ref_count2(real_fun_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1240,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1242 = come_decrement_ref_count2(fun_name2_1242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value1246,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__398,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__398;
                }
            }
            cloner_1238=((struct sFun*)((void*)(__right_value1247=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1247))));
            come_call_finalizer3(__right_value1247,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_1247 = come_decrement_ref_count2(name_1247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1238=((struct sFun*)((void*)(__right_value1248=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1242))));
            come_call_finalizer3(__right_value1248,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj245=real_fun_name_1239;
        real_fun_name_1239=(char*)come_increment_ref_count(fun_name2_1242);
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1243 = come_decrement_ref_count2(none_generics_name_1243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1244,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1245 = come_decrement_ref_count2(fun_name3_1245, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj246=fun_name2_1242;
        fun_name2_1242=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1249=128-1;        i_1249>=1;        i_1249--        ){
            new_fun_name_1250=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1242,i_1249));
            cloner_1238=((struct sFun*)((void*)(__right_value1251=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1250))));
            come_call_finalizer3(__right_value1251,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_1238) {
                __dec_obj247=fun_name2_1242;
                fun_name2_1242=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1250));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1250 = come_decrement_ref_count2(new_fun_name_1250, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1250 = come_decrement_ref_count2(new_fun_name_1250, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1238==((void*)0)) {
            cloner_1238=((struct sFun*)((void*)(__right_value1253=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1242))));
            come_call_finalizer3(__right_value1253,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj248=real_fun_name_1239;
        real_fun_name_1239=(char*)come_increment_ref_count(fun_name2_1242);
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1238==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1251=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3623, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1251,"{\n");
        buffer_append_str(source_1251,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1251,"var result = new %s;\n",((char*)(__right_value1256=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value1256 = come_decrement_ref_count2(__right_value1256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1241->mProtocol) {
            name_1252="_protocol_obj";
            char source2_1253[1024];
            memset(&source2_1253, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1253,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1251,source2_1253);
            klass_1241=((struct sClass*)((void*)(__right_value1257=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1241->mName))));
            come_call_finalizer3(__right_value1257,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1254=(struct list$1void$ph*)come_increment_ref_count((klass_1241->mFields)),it_1255=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1254)));            !list$1void$ph$p_end((o2_saved_1254));            it_1255=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1254)))            ){
                multiple_assign_var46=it_1255;
                name_1256=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1257=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1256,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1257->mArrayNum)>0) {
                    char source2_1258[1024];
                    memset(&source2_1258, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1258,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1256,name_1256,name_1256);
                    buffer_append_str(source_1251,source2_1258);
                }
                else {
                    char source2_1259[1024];
                    memset(&source2_1259, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1259,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1256,name_1256);
                    buffer_append_str(source_1251,source2_1259);
                }
                (name_1256 = come_decrement_ref_count2(name_1256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1257,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1254,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1241=((struct sClass*)((void*)(__right_value1258=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1241->mName))));
            come_call_finalizer3(__right_value1258,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1260=(struct list$1void$ph*)come_increment_ref_count((klass_1241->mFields)),it_1261=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1260)));            !list$1void$ph$p_end((o2_saved_1260));            it_1261=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1260)))            ){
                multiple_assign_var47=it_1261;
                name_1262=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1263=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1263->mHeap) {
                    char source2_1264[1024];
                    memset(&source2_1264, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1264,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1262,name_1262,name_1262);
                    buffer_append_str(source_1251,source2_1264);
                }
                else if(                list$1sNode$ph$p_length(field_type_1263->mArrayNum)>0) {
                    char source2_1265[1024];
                    memset(&source2_1265, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1265,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1262,name_1262,name_1262);
                    buffer_append_str(source_1251,source2_1265);
                }
                else {
                    char source2_1266[1024];
                    memset(&source2_1266, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1266,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1262,name_1262);
                    buffer_append_str(source_1251,source2_1266);
                }
                (name_1262 = come_decrement_ref_count2(name_1262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1263,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1260,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1251,"return result;");
        buffer_append_char(source_1251,125);
        p_1267=info->p;
        sline_1268=info->sline;
        sname_1269=(char*)come_increment_ref_count(info->sname);
        source3_1270=(struct buffer*)come_increment_ref_count(info->source);
        head_1271=info->head;
        __dec_obj249=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1251);
        come_call_finalizer3(__dec_obj249,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj250=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1239));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1272=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1273=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1274=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1239));
        self_type_1275=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1275->mHeap=(_Bool)0;
        param_types_1276=(struct list$1sType$ph*)come_increment_ref_count((__list_values31___1277[0]=self_type_1275,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3704, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values31___1277)));
        param_names_1279=(struct list$1char$ph*)come_increment_ref_count((__list_values32___1278[0]=((char*)(__right_value1266=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3705, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values32___1278)));
        (__right_value1266 = come_decrement_ref_count2(__right_value1266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1280=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3706, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1280,((void*)0));
        result_type_1273->mStatic=(_Bool)0;
        result_type_1273->mUniq=(_Bool)0;
        result_type_1273->mInline=(_Bool)0;
        result_type_1273->mGenerate=(_Bool)0;
        fun2_1281=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1271=__builtin_string(name_1274)))));
        (__right_value1271 = come_decrement_ref_count2(__right_value1271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1281==((void*)0)||fun2_1281->mExternal) {
            fun_1282=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3717, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1274),(struct sType*)come_increment_ref_count(result_type_1273),(struct list$1void$ph*)come_increment_ref_count(param_types_1276),(struct list$1char$ph*)come_increment_ref_count(param_names_1279),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1280),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1272),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1274)),(struct sFun*)come_increment_ref_count(fun_1282));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3725, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1279=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3725, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1282),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1283=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1279,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1284=node_compile(node_1283,info);
            if(            !Value_1284) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value1281=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1285=multiple_assign_var48->v1;
                Err_1286=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1286)?(puts(Err_1286),exit(0)):(0));
                come_call_finalizer3(__right_value1281,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1286 = come_decrement_ref_count2(Err_1286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1238=fun_1282;
            come_call_finalizer3(fun_1282,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1283) ? node_1283 = come_decrement_ref_count2(node_1283, ((struct sNode*)node_1283)->finalize, ((struct sNode*)node_1283)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1238=fun2_1281;
        }
        __dec_obj251=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1269);
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1268;
        __dec_obj252=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1270);
        come_call_finalizer3(__dec_obj252,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1267;
        info->head=head_1271;
        info->sline=sline_1268;
        come_call_finalizer3(source_1251,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1269 = come_decrement_ref_count2(sname_1269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1270,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1272,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1273,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1274 = come_decrement_ref_count2(name_1274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1275,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1276,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1279,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1280,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1281,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1237;
    __dec_obj253=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1234);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj254=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1235);
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1236;
    __result_obj__399 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1283=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3753, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1238,(char*)come_increment_ref_count(real_fun_name_1239)))));
    (last_code_1234 = come_decrement_ref_count2(last_code_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1235 = come_decrement_ref_count2(last_code2_1235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1239 = come_decrement_ref_count2(real_fun_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1240,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1242 = come_decrement_ref_count2(fun_name2_1242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1283,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__399,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__399;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1287;
char* __dec_obj255;
char* last_code2_1288;
char* __dec_obj256;
_Bool comma_instead_of_semicolon_1289;
struct sClass* current_stack_frame_struct_1290;
struct sFun* cloner_1291;
void* __right_value1284 = (void*)0;
char* real_fun_name_1292;
void* __right_value1285 = (void*)0;
struct sType* type2_1293;
struct sClass* klass_1294;
void* __right_value1286 = (void*)0;
void* __right_value1287 = (void*)0;
struct buffer* source_1295;
int i_1296;
void* __right_value1288 = (void*)0;
struct list$1void$ph* o2_saved_1297;
struct tuple2$2char$phsType$ph* it_1298;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1299=0;
struct sType* field_type_1300=0;
char* p_1303;
int sline_1304;
char* sname_1305;
struct buffer* source3_1306;
char* head_1307;
struct buffer* __dec_obj257;
void* __right_value1289 = (void*)0;
char* __dec_obj258;
void* __right_value1290 = (void*)0;
struct sBlock* block_1308;
void* __right_value1291 = (void*)0;
void* __right_value1292 = (void*)0;
struct sType* result_type_1309;
void* __right_value1293 = (void*)0;
char* name_1310;
void* __right_value1294 = (void*)0;
struct sType* self_type_1311;
struct sType* __list_values33___1313[1];
void* __right_value1295 = (void*)0;
void* __right_value1296 = (void*)0;
struct list$1void$ph* param_types_1312;
void* __right_value1297 = (void*)0;
char* __list_values34___1314[1];
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct list$1char$ph* param_names_1315;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct list$1char$ph* param_default_parametors_1316;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
struct sFun* fun2_1317;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
struct sFun* fun_1318;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1311 = (void*)0;
struct sNode* node_1319;
_Bool Value_1320;
void* __right_value1312 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c29_1321=0;
char* Err_1322=0;
char* __dec_obj259;
struct buffer* __dec_obj260;
char* __dec_obj261;
char* __dec_obj262;
void* __right_value1313 = (void*)0;
void* __right_value1314 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__400;
    last_code_1287=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj255=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1288=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj256=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1289=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1290=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1291=((void*)0);
    real_fun_name_1292=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1293=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1293;
    klass_1294=type->mClass;
    if(    type->mPointerNum>0&&!klass_1294->mNumber) {
        source_1295=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3778, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1295,"{\n");
        buffer_append_str(source_1295,"var result = new buffer();\n");
        buffer_append_format(source_1295,"result.append_str(\"%s {\");\n",klass_1294->mName);
        i_1296=0;
        klass_1294=((struct sClass*)((void*)(__right_value1288=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1294->mName))));
        come_call_finalizer3(__right_value1288,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_1297=(struct list$1void$ph*)come_increment_ref_count((klass_1294->mFields)),it_1298=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1297)));        !list$1void$ph$p_end((o2_saved_1297));        it_1298=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1297)))        ){
            multiple_assign_var49=it_1298;
            name_1299=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1300=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1296==list$1void$ph$p_length(klass_1294->mFields)-1) {
                char source2_1301[1024];
                memset(&source2_1301, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1301,1024,"result.append_str(\"%s:\");\n",name_1299);
                buffer_append_str(source_1295,source2_1301);
                snprintf(source2_1301,1024,"result.append_str(self.%s.to_string());\n",name_1299);
                buffer_append_str(source_1295,source2_1301);
            }
            else {
                char source2_1302[1024];
                memset(&source2_1302, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1302,1024,"result.append_str(\"%s:\");\n",name_1299);
                buffer_append_str(source_1295,source2_1302);
                snprintf(source2_1302,1024,"result.append_str(self.%s.to_string());\n",name_1299);
                buffer_append_str(source_1295,source2_1302);
                snprintf(source2_1302,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1295,source2_1302);
            }
            i_1296++;
            (name_1299 = come_decrement_ref_count2(name_1299, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1300,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1297,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1295,"result.append_str(\"}\");\n");
        buffer_append_format(source_1295,"return result.to_string();\n");
        buffer_append_char(source_1295,125);
        p_1303=info->p;
        sline_1304=info->sline;
        sname_1305=(char*)come_increment_ref_count(info->sname);
        source3_1306=(struct buffer*)come_increment_ref_count(info->source);
        head_1307=info->head;
        __dec_obj257=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1295);
        come_call_finalizer3(__dec_obj257,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj258=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1292));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1308=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1309=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3839, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1309->mHeap=(_Bool)1;
        name_1310=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1292));
        self_type_1311=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1311->mHeap=(_Bool)0;
        param_types_1312=(struct list$1sType$ph*)come_increment_ref_count((__list_values33___1313[0]=self_type_1311,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3844, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values33___1313)));
        param_names_1315=(struct list$1char$ph*)come_increment_ref_count((__list_values34___1314[0]=((char*)(__right_value1297=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3845, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values34___1314)));
        (__right_value1297 = come_decrement_ref_count2(__right_value1297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1316=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3846, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1316,((void*)0));
        result_type_1309->mStatic=(_Bool)0;
        result_type_1309->mUniq=(_Bool)0;
        result_type_1309->mInline=(_Bool)0;
        result_type_1309->mGenerate=(_Bool)0;
        fun2_1317=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1302=__builtin_string(name_1310)))));
        (__right_value1302 = come_decrement_ref_count2(__right_value1302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1317==((void*)0)||fun2_1317->mExternal) {
            fun_1318=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3856, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1310),(struct sType*)come_increment_ref_count(result_type_1309),(struct list$1void$ph*)come_increment_ref_count(param_types_1312),(struct list$1char$ph*)come_increment_ref_count(param_names_1315),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1316),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1308),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1310)),(struct sFun*)come_increment_ref_count(fun_1318));
            cloner_1291=fun_1318;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3866, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1310=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3866, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1318),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1319=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1310,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1320=node_compile(node_1319,info);
            if(            !Value_1320) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value1312=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1321=multiple_assign_var50->v1;
                Err_1322=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1322)?(puts(Err_1322),exit(0)):(0));
                come_call_finalizer3(__right_value1312,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1322 = come_decrement_ref_count2(Err_1322, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1318,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1319) ? node_1319 = come_decrement_ref_count2(node_1319, ((struct sNode*)node_1319)->finalize, ((struct sNode*)node_1319)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1291=fun2_1317;
        }
        __dec_obj259=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1305);
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1304;
        __dec_obj260=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1306);
        come_call_finalizer3(__dec_obj260,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1303;
        info->head=head_1307;
        info->sline=sline_1304;
        come_call_finalizer3(source_1295,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1305 = come_decrement_ref_count2(sname_1305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1308,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1309,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1310 = come_decrement_ref_count2(name_1310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1311,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1312,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1315,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1316,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1317,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1290;
    __dec_obj261=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1287);
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1288);
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1289;
    __result_obj__400 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1314=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3892, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1291,(char*)come_increment_ref_count(real_fun_name_1292)))));
    (last_code_1287 = come_decrement_ref_count2(last_code_1287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1288 = come_decrement_ref_count2(last_code2_1288, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1292 = come_decrement_ref_count2(real_fun_name_1292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1293,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1314,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__400,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__400;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1368;
char* __dec_obj273;
char* last_code2_1369;
char* __dec_obj274;
_Bool comma_instead_of_semicolon_1370;
struct sClass* current_stack_frame_struct_1371;
struct sFun* get_hash_key_fun_1372;
void* __right_value1358 = (void*)0;
char* real_fun_name_1373;
void* __right_value1359 = (void*)0;
struct sType* type2_1374;
struct sClass* klass_1375;
void* __right_value1360 = (void*)0;
void* __right_value1361 = (void*)0;
char* none_generics_name_1376;
void* __right_value1362 = (void*)0;
char* generics_fun_name_1377;
void* __right_value1363 = (void*)0;
struct sGenericsFun* generics_fun_1378;
void* __right_value1364 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1379=0;
_Bool err_1380=0;
void* __right_value1365 = (void*)0;
int i_1381;
void* __right_value1366 = (void*)0;
char* new_fun_name_1382;
void* __right_value1367 = (void*)0;
void* __right_value1368 = (void*)0;
char* __dec_obj275;
void* __right_value1369 = (void*)0;
void* __right_value1370 = (void*)0;
void* __right_value1371 = (void*)0;
struct buffer* source_1383;
int i_1384;
void* __right_value1372 = (void*)0;
struct list$1void$ph* o2_saved_1385;
struct tuple2$2char$phsType$ph* it_1386;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1387=0;
struct sType* field_type_1388=0;
char* p_1390;
int sline_1391;
char* sname_1392;
struct buffer* source3_1393;
char* head_1394;
struct buffer* __dec_obj276;
void* __right_value1373 = (void*)0;
char* __dec_obj277;
void* __right_value1374 = (void*)0;
struct sBlock* block_1395;
void* __right_value1375 = (void*)0;
void* __right_value1376 = (void*)0;
struct sType* result_type_1396;
void* __right_value1377 = (void*)0;
char* name_1397;
void* __right_value1378 = (void*)0;
struct sType* self_type_1398;
struct sType* __list_values37___1400[1];
void* __right_value1379 = (void*)0;
void* __right_value1380 = (void*)0;
struct list$1void$ph* param_types_1399;
void* __right_value1381 = (void*)0;
char* __list_values38___1401[1];
void* __right_value1382 = (void*)0;
void* __right_value1383 = (void*)0;
struct list$1char$ph* param_names_1402;
void* __right_value1384 = (void*)0;
void* __right_value1385 = (void*)0;
struct list$1char$ph* param_default_parametors_1403;
void* __right_value1386 = (void*)0;
void* __right_value1387 = (void*)0;
struct sFun* fun2_1404;
void* __right_value1388 = (void*)0;
void* __right_value1389 = (void*)0;
void* __right_value1390 = (void*)0;
void* __right_value1391 = (void*)0;
struct sFun* fun_1405;
void* __right_value1392 = (void*)0;
void* __right_value1393 = (void*)0;
void* __right_value1394 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1395 = (void*)0;
struct sNode* node_1406;
_Bool Value_1407;
void* __right_value1396 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c31_1408=0;
char* Err_1409=0;
char* __dec_obj278;
struct buffer* __dec_obj279;
char* __dec_obj280;
char* __dec_obj281;
void* __right_value1397 = (void*)0;
void* __right_value1398 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__402;
memset(&i_1381, 0, sizeof(int));
    last_code_1368=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj273=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1369=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj274=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1370=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1371=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1372=((void*)0);
    real_fun_name_1373=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1374=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1374;
    klass_1375=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1372=((struct sFun*)((void*)(__right_value1360=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1373))));
        come_call_finalizer3(__right_value1360,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        get_hash_key_fun_1372==((void*)0)) {
            none_generics_name_1376=(char*)come_increment_ref_count(get_none_generics_name(type2_1374->mClass->mName));
            generics_fun_name_1377=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1376,fun_name));
            generics_fun_1378=((struct sGenericsFun*)((void*)(__right_value1363=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1377))));
            come_call_finalizer3(__right_value1363,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            generics_fun_1378) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1364=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1373),generics_fun_1378,type,info)));
                name_1379=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1380=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1364,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1380) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1372=((struct sFun*)((void*)(__right_value1365=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1379))));
                come_call_finalizer3(__right_value1365,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_1379 = come_decrement_ref_count2(name_1379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1376 = come_decrement_ref_count2(none_generics_name_1376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1377 = come_decrement_ref_count2(generics_fun_name_1377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1381=128-1;        i_1381>=1;        i_1381--        ){
            new_fun_name_1382=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1373,i_1381));
            get_hash_key_fun_1372=((struct sFun*)((void*)(__right_value1367=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1382))));
            come_call_finalizer3(__right_value1367,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            get_hash_key_fun_1372) {
                __dec_obj275=real_fun_name_1373;
                real_fun_name_1373=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1382));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1382 = come_decrement_ref_count2(new_fun_name_1382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1382 = come_decrement_ref_count2(new_fun_name_1382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1372==((void*)0)) {
            get_hash_key_fun_1372=((struct sFun*)((void*)(__right_value1369=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1373))));
            come_call_finalizer3(__right_value1369,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    get_hash_key_fun_1372==((void*)0)&&type->mPointerNum>0&&!klass_1375->mNumber&&!klass_1375->mProtocol) {
        source_1383=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4155, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1383,"{\n");
        buffer_append_str(source_1383,"unsigned int result = 0;\n");
        i_1384=0;
        klass_1375=((struct sClass*)((void*)(__right_value1372=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1375->mName))));
        come_call_finalizer3(__right_value1372,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_1385=(struct list$1void$ph*)come_increment_ref_count((klass_1375->mFields)),it_1386=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1385)));        !list$1void$ph$p_end((o2_saved_1385));        it_1386=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1385)))        ){
            multiple_assign_var55=it_1386;
            name_1387=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1388=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1389[1024];
            memset(&source2_1389, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1389,1024,"result += ((int)self.%s).get_hash_key();\n",name_1387);
            buffer_append_str(source_1383,source2_1389);
            i_1384++;
            (name_1387 = come_decrement_ref_count2(name_1387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1388,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1385,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1383,"return result;\n");
        buffer_append_char(source_1383,125);
        p_1390=info->p;
        sline_1391=info->sline;
        sname_1392=(char*)come_increment_ref_count(info->sname);
        source3_1393=(struct buffer*)come_increment_ref_count(info->source);
        head_1394=info->head;
        __dec_obj276=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1383);
        come_call_finalizer3(__dec_obj276,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj277=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1373));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1395=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1396=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4192, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1396->mUnsigned=(_Bool)1;
        name_1397=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1373));
        self_type_1398=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1398->mHeap=(_Bool)0;
        param_types_1399=(struct list$1sType$ph*)come_increment_ref_count((__list_values37___1400[0]=self_type_1398,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4197, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values37___1400)));
        param_names_1402=(struct list$1char$ph*)come_increment_ref_count((__list_values38___1401[0]=((char*)(__right_value1381=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4198, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values38___1401)));
        (__right_value1381 = come_decrement_ref_count2(__right_value1381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1403=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4199, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1403,((void*)0));
        result_type_1396->mStatic=(_Bool)0;
        result_type_1396->mUniq=(_Bool)0;
        result_type_1396->mInline=(_Bool)0;
        result_type_1396->mGenerate=(_Bool)0;
        fun2_1404=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1386=__builtin_string(name_1397)))));
        (__right_value1386 = come_decrement_ref_count2(__right_value1386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1404==((void*)0)||fun2_1404->mExternal) {
            fun_1405=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4209, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1397),(struct sType*)come_increment_ref_count(result_type_1396),(struct list$1void$ph*)come_increment_ref_count(param_types_1399),(struct list$1char$ph*)come_increment_ref_count(param_names_1402),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1403),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1395),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1397)),(struct sFun*)come_increment_ref_count(fun_1405));
            get_hash_key_fun_1372=fun_1405;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4219, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1394=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4219, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1405),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1406=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1394,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1407=node_compile(node_1406,info);
            if(            !Value_1407) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1396=err_msg(info,"compiling error(Y)")));
                come_exception_var_c31_1408=multiple_assign_var56->v1;
                Err_1409=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1409)?(puts(Err_1409),exit(0)):(0));
                come_call_finalizer3(__right_value1396,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1409 = come_decrement_ref_count2(Err_1409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1405,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1406) ? node_1406 = come_decrement_ref_count2(node_1406, ((struct sNode*)node_1406)->finalize, ((struct sNode*)node_1406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1372=fun2_1404;
        }
        __dec_obj278=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1392);
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1391;
        __dec_obj279=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1393);
        come_call_finalizer3(__dec_obj279,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1390;
        info->head=head_1394;
        info->sline=sline_1391;
        come_call_finalizer3(source_1383,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1392 = come_decrement_ref_count2(sname_1392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1393,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1395,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1396,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1397 = come_decrement_ref_count2(name_1397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1398,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1399,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1402,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1403,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1404,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1371;
    __dec_obj280=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1368);
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1369);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1370;
    __result_obj__402 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1398=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4245, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1372,(char*)come_increment_ref_count(real_fun_name_1373)))));
    (last_code_1368 = come_decrement_ref_count2(last_code_1368, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1369 = come_decrement_ref_count2(last_code2_1369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1373 = come_decrement_ref_count2(real_fun_name_1373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1374,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1398,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__402,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__402;
}

