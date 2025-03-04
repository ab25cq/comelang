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
int i_175;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1char$$p_push_back(self,values[i_175]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result_obj__100;
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
    __result_obj__100 = self;
    return __result_obj__100;
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
int i_181;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1char$p$p_push_back(self,values[i_181]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result_obj__103;
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
    __result_obj__103 = self;
    return __result_obj__103;
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
int i_187;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1short$$p_push_back(self,values[i_187]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result_obj__106;
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
    __result_obj__106 = self;
    return __result_obj__106;
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
int i_193;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1int$$p_push_back(self,values[i_193]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result_obj__109;
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
    __result_obj__109 = self;
    return __result_obj__109;
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
int i_199;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1long$$p_push_back(self,values[i_199]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result_obj__112;
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
    __result_obj__112 = self;
    return __result_obj__112;
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
int i_205;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1float$$p_push_back(self,values[i_205]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result_obj__115;
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
    __result_obj__115 = self;
    return __result_obj__115;
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
int i_211;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1double$$p_push_back(self,values[i_211]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result_obj__118;
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
    __result_obj__118 = self;
    return __result_obj__118;
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
void* __right_value127 = (void*)0;
int i_217;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2274, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_217=0;    i_217<num_value;    i_217++    ){
        vector$1char$$p_add(self,values[i_217]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_218;
char* items_219;
void* __right_value128 = (void*)0;
int i_220;
struct vector$1char$* __result_obj__121;
memset(&i_220, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_218=self->size*2;
        items_219=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_218)), "./comelang.h", 2401, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_220=0;        i_220<self->size;        i_220++        ){
            self->items[i_220]=items_219[i_220];
        }
        self->size=new_size_218;
        come_free(items_219);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
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
void* __right_value131 = (void*)0;
int i_222;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2274, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$p$p_add(self,values[i_222]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_223;
char** items_224;
void* __right_value132 = (void*)0;
int i_225;
struct vector$1char$p* __result_obj__124;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_223)), "./comelang.h", 2401, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
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
void* __right_value135 = (void*)0;
int i_227;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2274, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1short$$p_add(self,values[i_227]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_228;
short* items_229;
void* __right_value136 = (void*)0;
int i_230;
struct vector$1short$* __result_obj__127;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_228)), "./comelang.h", 2401, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
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
void* __right_value139 = (void*)0;
int i_232;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2274, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1int$$p_add(self,values[i_232]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_233;
int* items_234;
void* __right_value140 = (void*)0;
int i_235;
struct vector$1int$* __result_obj__130;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_233)), "./comelang.h", 2401, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
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
void* __right_value143 = (void*)0;
int i_237;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2274, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1long$$p_add(self,values[i_237]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_238;
long* items_239;
void* __right_value144 = (void*)0;
int i_240;
struct vector$1long$* __result_obj__133;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_238)), "./comelang.h", 2401, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
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
void* __right_value147 = (void*)0;
int i_242;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2274, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1float$$p_add(self,values[i_242]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_243;
float* items_244;
void* __right_value148 = (void*)0;
int i_245;
struct vector$1float$* __result_obj__136;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_243)), "./comelang.h", 2401, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
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
void* __right_value151 = (void*)0;
int i_247;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2274, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1double$$p_add(self,values[i_247]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_248;
double* items_249;
void* __right_value152 = (void*)0;
int i_250;
struct vector$1double$* __result_obj__139;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_248)), "./comelang.h", 2401, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
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
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_290=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1457, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj20=litem_290->item;
        litem_290->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1467, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj21=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1477, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj22=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
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
struct sFun* come_fun_345;
int block_level_346;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_347;
void* __right_value265 = (void*)0;
char* __dec_obj23;
void* __right_value304 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__257;
    come_fun_345=info->come_fun;
    info->come_fun=self->mFun;
    block_level_346=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_346;
    come_value_347=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj23=come_value_347->c_value;
    come_value_347->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=come_value_347->type;
    come_value_347->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_347->var=((void*)0);
    add_come_last_code(info,"%s",come_value_347->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_347));
    info->come_fun=come_fun_345;
    __result_obj__257 = (_Bool)1;
    come_call_finalizer3(come_value_347,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* result_359;
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
    result_359=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_359->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_359->mOriginalLoadVarType;
        result_359->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_359->mChannelType;
        result_359->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_359->mGenericsTypes;
        result_359->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_359->mNoSolvedGenericsType;
        result_359->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_359->mAnyOriginalType;
        result_359->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_359->mSizeNum;
        result_359->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_359->mAlignas;
        result_359->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_359->mTupleName;
        result_359->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_359->mAttribute;
        result_359->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_359->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_359->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_359->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_359->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_359->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_359->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_359->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_359->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_359->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_359->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_359->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_359->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_359->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_359->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_359->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_359->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_359->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_359->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_359->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_359->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_359->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_359->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_359->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_359->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_359->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_359->mAsmName;
        result_359->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_359->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_359->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_359->mArrayNum;
        result_359->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_359->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_359->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_359->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_359->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_359->mOriginalTypeName;
        result_359->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_359->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_359->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_359->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_359->mParamTypes;
        result_359->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_359->mParamNames;
        result_359->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_359->mResultType;
        result_359->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->mVarArgs=self->mVarArgs;
    }
    __result_obj__255 = come_increment_ref_count(result_359);
    come_call_finalizer3(result_359,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1void$ph* it_348;
struct list_item$1void$ph* prev_it_349;
    it_348=self->head;
    while(it_348!=((void*)0)) {
        prev_it_349=it_348;
        it_348=it_348->next;
        come_call_finalizer3(prev_it_349,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_350;
struct list_item$1sNode$ph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_352;
    result_352=0;
    result_352+=int_get_hash_key(((int)self->mClass));
    result_352+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_352+=int_get_hash_key(((int)self->mChannelType));
    result_352+=int_get_hash_key(((int)self->mGenericsTypes));
    result_352+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_352+=int_get_hash_key(((int)self->mAnyClass));
    result_352+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_352+=int_get_hash_key(((int)self->mSizeNum));
    result_352+=int_get_hash_key(((int)self->mAlignas));
    result_352+=int_get_hash_key(((int)self->mTupleName));
    result_352+=int_get_hash_key(((int)self->mAttribute));
    result_352+=int_get_hash_key(((int)self->mAllocaValue));
    result_352+=int_get_hash_key(((int)self->mUnsigned));
    result_352+=int_get_hash_key(((int)self->mShort));
    result_352+=int_get_hash_key(((int)self->mLong));
    result_352+=int_get_hash_key(((int)self->mLongLong));
    result_352+=int_get_hash_key(((int)self->mConstant));
    result_352+=int_get_hash_key(((int)self->mAtomic));
    result_352+=int_get_hash_key(((int)self->mRegister));
    result_352+=int_get_hash_key(((int)self->mVolatile));
    result_352+=int_get_hash_key(((int)self->mStatic));
    result_352+=int_get_hash_key(((int)self->mUniq));
    result_352+=int_get_hash_key(((int)self->mRecord));
    result_352+=int_get_hash_key(((int)self->mExtern));
    result_352+=int_get_hash_key(((int)self->mRestrict));
    result_352+=int_get_hash_key(((int)self->mImmutable));
    result_352+=int_get_hash_key(((int)self->mHeap));
    result_352+=int_get_hash_key(((int)self->mChannel));
    result_352+=int_get_hash_key(((int)self->mNoHeap));
    result_352+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_352+=int_get_hash_key(((int)self->mException));
    result_352+=int_get_hash_key(((int)self->mGenerate));
    result_352+=int_get_hash_key(((int)self->mCreateVTable));
    result_352+=int_get_hash_key(((int)self->mDynamic));
    result_352+=int_get_hash_key(((int)self->mInline));
    result_352+=int_get_hash_key(((int)self->mNullValue));
    result_352+=int_get_hash_key(((int)self->mGuardValue));
    result_352+=int_get_hash_key(((int)self->mAsmName));
    result_352+=int_get_hash_key(((int)self->mTypedef));
    result_352+=int_get_hash_key(((int)self->mMultipleTypes));
    result_352+=int_get_hash_key(((int)self->mOriginIsArray));
    result_352+=int_get_hash_key(((int)self->mArrayNum));
    result_352+=int_get_hash_key(((int)self->mPointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_352+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_352+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_352+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_352+=int_get_hash_key(((int)self->mArrayPointerType));
    result_352+=int_get_hash_key(((int)self->mLambdaArray));
    result_352+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_352+=int_get_hash_key(((int)self->mParamTypes));
    result_352+=int_get_hash_key(((int)self->mParamNames));
    result_352+=int_get_hash_key(((int)self->mResultType));
    result_352+=int_get_hash_key(((int)self->mVarArgs));
    return result_352;
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
struct list_item$1void$ph* it_353;
struct list_item$1void$ph* it2_354;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_355;
struct list_item$1sNode$ph* it2_356;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_355=left->head;
    it2_356=right->head;
    while(it_355!=((void*)0)) {
        if(        !sNode_equals(it_355->item,it2_356->item)) {
            return (_Bool)0;
        }
        it_355=it_355->next;
        it2_356=it2_356->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_357;
struct list_item$1char$ph* it2_358;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_357=left->head;
    it2_358=right->head;
    while(it_357!=((void*)0)) {
        if(        !string_equals(it_357->item,it2_358->item)) {
            return (_Bool)0;
        }
        it_357=it_357->next;
        it2_358=it2_358->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__242;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1void$ph* result_361;
struct list_item$1void$ph* it_362;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1void$ph* __result_obj__245;
    if(    self==((void*)0)) {
        __result_obj__242 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__242,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__242;
    }
    result_361=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_362=self->head;
    while(it_362!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_361,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_362->item)));
        }
        else {
            list$1void$ph$p_add(result_361,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_362->item)));
        }
        it_362=it_362->next;
    }
    __result_obj__245 = come_increment_ref_count(result_361);
    come_call_finalizer3(result_361,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_360;
    result_360=0;
    result_360+=int_get_hash_key(((int)self->head));
    result_360+=int_get_hash_key(((int)self->tail));
    result_360+=int_get_hash_key(((int)self->len));
    result_360+=int_get_hash_key(((int)self->it));
    return result_360;
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
struct list_item$1void$ph* litem_363;
void* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1void$ph* litem_364;
void* __dec_obj27;
void* __right_value273 = (void*)0;
struct list_item$1void$ph* litem_365;
void* __dec_obj28;
struct list$1void$ph* __result_obj__244;
    if(    self->len==0) {
        litem_363=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value271=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_363->prev=((void*)0);
        litem_363->next=((void*)0);
        __dec_obj26=litem_363->item;
        litem_363->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_363;
        self->head=litem_363;
    }
    else if(    self->len==1) {
        litem_364=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value272=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_364->prev=self->head;
        litem_364->next=((void*)0);
        __dec_obj27=litem_364->item;
        litem_364->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_364;
        self->head->next=litem_364;
    }
    else {
        litem_365=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value273=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_365->prev=self->tail;
        litem_365->next=((void*)0);
        __dec_obj28=litem_365->item;
        litem_365->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_365;
        self->tail=litem_365;
    }
    self->len++;
    __result_obj__244 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__244;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_366;
struct list_item$1void$ph* prev_it_367;
    it_366=self->head;
    while(it_366!=((void*)0)) {
        prev_it_367=it_366;
        it_366=it_366->next;
        come_call_finalizer3(prev_it_367,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__246;
void* __right_value279 = (void*)0;
struct sNode* result_368;
struct sNode* __result_obj__247;
    if(    self==(void*)0) {
        __result_obj__246 = come_increment_ref_count((void*)0);
        ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count2(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__246;
    }
    result_368=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_368->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_368->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_368->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_368->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_368->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_368->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_368->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_368->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_368->kind=self->kind;
    }
    __result_obj__247 = come_increment_ref_count(result_368);
    ((result_368) ? result_368 = come_decrement_ref_count2(result_368, ((struct sNode*)result_368)->finalize, ((struct sNode*)result_368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count2(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__248;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* result_369;
struct list_item$1sNode$ph* it_370;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __result_obj__251;
    if(    self==((void*)0)) {
        __result_obj__248 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__248,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__248;
    }
    result_369=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_370=self->head;
    while(it_370!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_369,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_370->item)));
        }
        else {
            list$1sNode$ph$p_add(result_369,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_370->item)));
        }
        it_370=it_370->next;
    }
    __result_obj__251 = come_increment_ref_count(result_369);
    come_call_finalizer3(result_369,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNode$ph* litem_371;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_372;
struct sNode* __dec_obj38;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_373;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__250;
    if(    self->len==0) {
        litem_371=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_371->prev=((void*)0);
        litem_371->next=((void*)0);
        __dec_obj37=litem_371->item;
        litem_371->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_371;
        self->head=litem_371;
    }
    else if(    self->len==1) {
        litem_372=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=self->head;
        litem_372->next=((void*)0);
        __dec_obj38=litem_372->item;
        litem_372->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_372;
        self->head->next=litem_372;
    }
    else {
        litem_373=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->tail;
        litem_373->next=((void*)0);
        __dec_obj39=litem_373->item;
        litem_373->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_373;
        self->tail=litem_373;
    }
    self->len++;
    __result_obj__250 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__250;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_374;
struct list_item$1sNode$ph* prev_it_375;
    it_374=self->head;
    while(it_374!=((void*)0)) {
        prev_it_375=it_374;
        it_374=it_374->next;
        come_call_finalizer3(prev_it_375,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__252;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* result_376;
struct list_item$1char$ph* it_377;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1char$ph* __result_obj__254;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_376=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_377=self->head;
    while(it_377!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_376,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_377->item)));
        }
        else {
            list$1char$ph$p_add(result_376,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_377->item)));
        }
        it_377=it_377->next;
    }
    __result_obj__254 = come_increment_ref_count(result_376);
    come_call_finalizer3(result_376,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__254,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__254;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_378;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_379;
char* __dec_obj44;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_380;
char* __dec_obj45;
struct list$1char$ph* __result_obj__253;
    if(    self->len==0) {
        litem_378=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj43=litem_378->item;
        litem_378->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj44=litem_379->item;
        litem_379->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj45=litem_380->item;
        litem_380->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result_obj__253 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_381;
struct list_item$1char$ph* prev_it_382;
    it_381=self->head;
    while(it_381!=((void*)0)) {
        prev_it_382=it_381;
        it_381=it_381->next;
        come_call_finalizer3(prev_it_382,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_383;
struct CVALUE* __dec_obj49;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_384;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_385;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__256;
    if(    self->len==0) {
        litem_383=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1457, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=((void*)0);
        litem_383->next=((void*)0);
        __dec_obj49=litem_383->item;
        litem_383->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_383;
        self->head=litem_383;
    }
    else if(    self->len==1) {
        litem_384=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1467, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=self->head;
        litem_384->next=((void*)0);
        __dec_obj50=litem_384->item;
        litem_384->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_384;
        self->head->next=litem_384;
    }
    else {
        litem_385=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1477, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=self->tail;
        litem_385->next=((void*)0);
        __dec_obj51=litem_385->item;
        litem_385->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_385;
        self->tail=litem_385;
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
struct sFun* come_fun_386;
int block_level_387;
void* __right_value310 = (void*)0;
    come_fun_386=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_387=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_387;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value310=xsprintf("come_heap_final();\n"))));
            (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_386;
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
struct sBlock* result_388;
int sline_top_389;
int block_level_390;
char* p_saved_391;
int sline_saved_392;
char* sname_saved_393;
void* __right_value319 = (void*)0;
char* __dec_obj64;
char* __dec_obj65;
struct map$2void$phvoid$ph* __dec_obj66;
char* p_398;
int sline_399;
void* __right_value320 = (void*)0;
char* sname_400;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* module_name_401;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1char$ph* params_402;
void* __right_value325 = (void*)0;
char* word_403;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_404=0;
char* Err_405=0;
void* __right_value327 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_406=0;
char* Err_407=0;
void* __right_value328 = (void*)0;
char* __dec_obj67;
void* __right_value329 = (void*)0;
char* __dec_obj68;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
_Bool _if_conditional1;
void* __right_value332 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_411=0;
char* Err_412=0;
struct sBlock* __result_obj__266;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sClassModule* module_413;
void* __right_value335 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_414=0;
char* Err_415=0;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj71;
int i_429;
struct list$1char$ph* o2_saved_430;
char* it_433;
void* __right_value350 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
char* __dec_obj72;
void* __right_value362 = (void*)0;
struct sNode* node_483;
void* __right_value363 = (void*)0;
char* __dec_obj73;
void* __right_value364 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_484=0;
char* Err_485=0;
_Bool omit_semicolon_489;
void* __right_value368 = (void*)0;
char* __dec_obj77;
char* head_504;
void* __right_value369 = (void*)0;
struct sNode* value_505;
char* tail_506;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sNode* node_508;
void* __right_value373 = (void*)0;
char* __dec_obj79;
struct sNode* node_509;
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
int come_exception_var_c6_511=0;
char* Err_512=0;
_Bool omit_semicolon_513;
char* p_514;
char* head_515;
void* __right_value381 = (void*)0;
char* source_516;
void* __right_value382 = (void*)0;
struct sNode* node_517;
void* __right_value383 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_518=0;
char* Err_519=0;
struct sBlock* __result_obj__311;
node_509 = (void*)0;
    result_388=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 155, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_389=info->sline_top;
    info->sline_top=info->sline;
    block_level_390=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_391=((void*)0);
        sline_saved_392=0;
        sname_saved_393=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_391) {
                if(                *info->p==0) {
                    info->p=p_saved_391;
                    info->sline=sline_saved_392;
                    __dec_obj64=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_393));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_391=((void*)0);
                    sline_saved_392=0;
                    __dec_obj65=sname_saved_393;
                    sname_saved_393=((void*)0);
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
            p_398=info->p;
            sline_399=info->sline;
            sname_400=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_399;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value321=parse_word(info)));
                (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_401=(char*)come_increment_ref_count(parse_word(info));
                params_402=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 211, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_403=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_402,(char*)come_increment_ref_count(word_403));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"invalid source end")));
                            come_exception_var_c1_404=multiple_assign_var1->v1;
                            Err_405=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_405)?(puts(Err_405),exit(0)):(0));
                            come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_405 = come_decrement_ref_count2(Err_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_403 = come_decrement_ref_count2(word_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value327=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_406=multiple_assign_var2->v1;
                            Err_407=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_407)?(puts(Err_407),exit(0)):(0));
                            come_call_finalizer3(__right_value327,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_407 = come_decrement_ref_count2(Err_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_403 = come_decrement_ref_count2(word_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_391=info->p;
                sline_saved_392=info->sline;
                __dec_obj67=sname_saved_393;
                sname_saved_393=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj68=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_401));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)((void*)(__right_value331=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value330=__builtin_string(module_name_401)))))))==((void*)0))),                (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value331,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value332=err_msg(info,"module not found")));
                    come_exception_var_c3_411=multiple_assign_var3->v1;
                    Err_412=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_412)?(puts(Err_412),exit(0)):(0));
                    come_call_finalizer3(__right_value332,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__266 = come_increment_ref_count(((void*)0));
                    (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_401 = come_decrement_ref_count2(module_name_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_402,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_400 = come_decrement_ref_count2(sname_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_393 = come_decrement_ref_count2(sname_saved_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_388,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__266,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__266;
                    (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_413=((struct sClassModule*)((void*)(__right_value334=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value333=__builtin_string(module_name_401)))))));
                (__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value334,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                list$1char$ph$p_length(module_413->mParams)!=list$1char$ph$p_length(params_402)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value335=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_414=multiple_assign_var4->v1;
                    Err_415=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_415)?(puts(Err_415),exit(0)):(0));
                    come_call_finalizer3(__right_value335,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_415 = come_decrement_ref_count2(Err_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj71=info->module_params;
                info->module_params=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "05function.c", 265, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
                come_call_finalizer3(__dec_obj71,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_429=0;
                for(                o2_saved_430=(struct list$1char$ph*)come_increment_ref_count((module_413->mParams)),it_433=list$1char$ph$p_begin((o2_saved_430));                !list$1char$ph$p_end((o2_saved_430));                it_433=list$1char$ph$p_next((o2_saved_430))                ){
                    map$2void$phvoid$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_433)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value359=list$1char$ph$p_operator_load_element(params_402,i_429))))));
                    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_429++;
                }
                come_call_finalizer3(o2_saved_430,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_413->mText;
                info->sline=module_413->mSLine;
                __dec_obj72=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_413->mSName));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_401 = come_decrement_ref_count2(module_name_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_402,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_483=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj73=info->sname;
            info->sname=(char*)come_increment_ref_count(node_483->sname(node_483->_protocol_obj));
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_483->sline(node_483->_protocol_obj);
            if(            node_483==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value364=err_msg(info,"Invalid expression")));
                come_exception_var_c5_484=multiple_assign_var5->v1;
                Err_485=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_485)?(puts(Err_485),exit(0)):(0));
                come_call_finalizer3(__right_value364,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_485 = come_decrement_ref_count2(Err_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_388->mNodes,(struct sNode*)come_increment_ref_count(node_483));
            parse_sharp_v5(info);
            if(            node_483->terminated(node_483->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_489=(_Bool)1;
            if(            node_483->terminated(node_483->_protocol_obj)) {
                omit_semicolon_489=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_489=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_388->mOmitSemicolon=omit_semicolon_489;
                if(                omit_semicolon_489&&in_function) {
                    list$1sNode$ph$p_delete(result_388->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_398;
                    info->sline=sline_399;
                    __dec_obj77=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_400));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_504=info->p;
                    value_505=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_506=info->p;
                    __dec_obj78=value_505;
                    value_505=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_505),info));
                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_507[tail_506-head_504+1];
                    memset(&buf_507, 0, sizeof(char)                    *(tail_506-head_504+1)                    );
                    memcpy(buf_507,head_504,tail_506-head_504);
                    buf_507[tail_506-head_504]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_508=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_505),(char*)come_increment_ref_count(__builtin_string(buf_507)),info));
                    list$1sNode$ph$p_push_back(result_388->mNodes,(struct sNode*)come_increment_ref_count(node_508));
                    ((value_505) ? value_505 = come_decrement_ref_count2(value_505, ((struct sNode*)value_505)->finalize, ((struct sNode*)value_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_508) ? node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_400 = come_decrement_ref_count2(sname_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_483) ? node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_505) ? value_505 = come_decrement_ref_count2(value_505, ((struct sNode*)value_505)->finalize, ((struct sNode*)value_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_508) ? node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_400 = come_decrement_ref_count2(sname_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_483) ? node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_400 = come_decrement_ref_count2(sname_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_483) ? node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_391) {
            if(            info->p==0) {
                info->p=p_saved_391;
                info->sline=sline_saved_392;
                __dec_obj79=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_393));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_391=((void*)0);
                sline_saved_392=0;
            }
        }
        (sname_saved_393 = come_decrement_ref_count2(sname_saved_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            __dec_obj81=node_509;
            node_509=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value375,sSemicolonNode_finalize, 0, 1, 0, 0, (void*)0);
            list$1sNode$ph$p_push_back(result_388->mNodes,(struct sNode*)come_increment_ref_count(node_509));
        }
        else {
            __dec_obj82=node_509;
            node_509=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_509==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value380=err_msg(info,"Invalid expression")));
                come_exception_var_c6_511=multiple_assign_var6->v1;
                Err_512=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_512)?(puts(Err_512),exit(0)):(0));
                come_call_finalizer3(__right_value380,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_512 = come_decrement_ref_count2(Err_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_509->terminated(node_509->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_513=(_Bool)1;
            if(            node_509->terminated(node_509->_protocol_obj)) {
                omit_semicolon_513=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_513=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_388->mOmitSemicolon=omit_semicolon_513;
            list$1sNode$ph$p_push_back(result_388->mNodes,(struct sNode*)come_increment_ref_count(node_509));
        }
        ((node_509) ? node_509 = come_decrement_ref_count2(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_514=info->p;
        head_515=info->head;
        source_516=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_516;
        info->head=source_516;
        node_517=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_517==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value383=err_msg(info,"Invalid expression")));
            come_exception_var_c7_518=multiple_assign_var7->v1;
            Err_519=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_519)?(puts(Err_519),exit(0)):(0));
            come_call_finalizer3(__right_value383,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_519 = come_decrement_ref_count2(Err_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_388->mNodes,(struct sNode*)come_increment_ref_count(node_517));
        info->p=p_514;
        info->head=head_515;
        (source_516 = come_decrement_ref_count2(source_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_517) ? node_517 = come_decrement_ref_count2(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_390;
    __result_obj__311 = come_increment_ref_count(result_388);
    come_call_finalizer3(result_388,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
int i_394;
int i_395;
    for(    i_394=0;    i_394<self->size;    i_394++    ){
        if(        self->item_existance[i_394]) {
            if(            1) {
                come_call_finalizer3(self->items[i_394],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_395=0;    i_395<self->size;    i_395++    ){
        if(        self->item_existance[i_395]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_395],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_396;
struct list_item$1void$p* prev_it_397;
    it_396=self->head;
    while(it_396!=((void*)0)) {
        prev_it_397=it_396;
        it_396=it_396->next;
        come_call_finalizer3(prev_it_397,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* default_value_408;
unsigned int hash_409;
unsigned int it_410;
void* __result_obj__262;
void* __result_obj__263;
void* __result_obj__264;
void* __result_obj__265;
default_value_408 = (void*)0;
    memset(&default_value_408,0,sizeof(void*));
    hash_409=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_410=hash_409;
    while((_Bool)1) {
        if(        self->item_existance[it_410]) {
            if(            come_call_equals((void*)0, self->keys[it_410], ((char*)key))) {
                __result_obj__262 = come_increment_ref_count(self->items[it_410]);
                come_call_finalizer3(default_value_408,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__262,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__262;
            }
            it_410++;
            if(            it_410>=self->size) {
                it_410=0;
            }
            else if(            it_410==hash_409) {
                __result_obj__263 = come_increment_ref_count(((struct sClassModule*)default_value_408));
                come_call_finalizer3(default_value_408,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__263,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__263;
            }
        }
        else {
            __result_obj__264 = come_increment_ref_count(((struct sClassModule*)default_value_408));
            come_call_finalizer3(default_value_408,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__264,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__264;
        }
    }
    __result_obj__265 = come_increment_ref_count(((struct sClassModule*)default_value_408));
    come_call_finalizer3(default_value_408,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
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
int i_416;
int i_417;
    for(    i_416=0;    i_416<self->size;    i_416++    ){
        if(        self->item_existance[i_416]) {
            if(            1) {
                come_call_finalizer3(self->items[i_416],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_417=0;    i_417<self->size;    i_417++    ){
        if(        self->item_existance[i_417]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_417],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
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
struct map$2void$phvoid$ph* result_418;
void* __right_value342 = (void*)0;
struct list$1void$p* __dec_obj69;
struct map$2void$phvoid$ph* __result_obj__272;
    if(    self==(void*)0) {
        __result_obj__267 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__267,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__267;
    }
    result_418=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_418->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_418->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_418->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_418->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_418->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj69=result_418->key_list;
        result_418->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj69,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_418->it=self->it;
    }
    __result_obj__272 = come_increment_ref_count(result_418);
    come_call_finalizer3(result_418,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__272,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__272;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
struct list$1void$p* __result_obj__268;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1void$p* result_420;
struct list_item$1void$p* it_421;
struct list$1void$p* __result_obj__271;
    if(    self==((void*)0)) {
        __result_obj__268 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__268,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__268;
    }
    result_420=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1368, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_421=self->head;
    while(it_421!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_420,it_421->item);
        }
        else {
            list$1void$p$p_add(result_420,it_421->item);
        }
        it_421=it_421->next;
    }
    __result_obj__271 = come_increment_ref_count(result_420);
    come_call_finalizer3(result_420,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_419;
    result_419=0;
    result_419+=int_get_hash_key(((int)self->head));
    result_419+=int_get_hash_key(((int)self->tail));
    result_419+=int_get_hash_key(((int)self->len));
    result_419+=int_get_hash_key(((int)self->it));
    return result_419;
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
struct list_item$1void$p* litem_422;
void* __right_value340 = (void*)0;
struct list_item$1void$p* litem_423;
void* __right_value341 = (void*)0;
struct list_item$1void$p* litem_424;
struct list$1void$p* __result_obj__270;
    if(    self->len==0) {
        litem_422=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value339=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1387, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=((void*)0);
        litem_422->next=((void*)0);
        litem_422->item=item;
        self->tail=litem_422;
        self->head=litem_422;
    }
    else if(    self->len==1) {
        litem_423=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value340=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1397, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_423->prev=self->head;
        litem_423->next=((void*)0);
        litem_423->item=item;
        self->tail=litem_423;
        self->head->next=litem_423;
    }
    else {
        litem_424=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value341=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1407, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_424->prev=self->tail;
        litem_424->next=((void*)0);
        litem_424->item=item;
        self->tail->next=litem_424;
        self->tail=litem_424;
    }
    self->len++;
    __result_obj__270 = self;
    return __result_obj__270;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_425;
struct list_item$1void$p* prev_it_426;
    it_425=self->head;
    while(it_425!=((void*)0)) {
        prev_it_426=it_425;
        it_425=it_425->next;
        come_call_finalizer3(prev_it_426,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_427;
    result_427=0;
    result_427+=int_get_hash_key(((int)self->keys));
    result_427+=int_get_hash_key(((int)self->item_existance));
    result_427+=int_get_hash_key(((int)self->items));
    result_427+=int_get_hash_key(((int)self->size));
    result_427+=int_get_hash_key(((int)self->len));
    result_427+=int_get_hash_key(((int)self->key_list));
    result_427+=int_get_hash_key(((int)self->it));
    return result_427;
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
int i_428;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1void$p* __dec_obj70;
struct map$2void$phvoid$ph* __result_obj__274;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value344=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2663, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value345=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2664, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2665, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_428=0;    i_428<128;    i_428++    ){
        self->item_existance[i_428]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj70=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2675, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
char* result_431;
char* __result_obj__275;
char* __result_obj__276;
char* result_432;
char* __result_obj__277;
result_431 = (void*)0;
result_432 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_431,0,sizeof(char*));
        __result_obj__275 = result_431;
        return __result_obj__275;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__276 = self->it->item;
        return __result_obj__276;
    }
    memset(&result_432,0,sizeof(char*));
    __result_obj__277 = result_432;
    return __result_obj__277;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_434;
char* __result_obj__278;
char* __result_obj__279;
char* result_435;
char* __result_obj__280;
result_434 = (void*)0;
result_435 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_434,0,sizeof(char*));
        __result_obj__278 = result_434;
        return __result_obj__278;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__279 = self->it->item;
        return __result_obj__279;
    }
    memset(&result_435,0,sizeof(char*));
    __result_obj__280 = result_435;
    return __result_obj__280;
}

static void map$2void$phvoid$ph$p_operator_store_element(struct map$2void$phvoid$ph* self, void* key, void* item){
    map$2void$phvoid$ph$p_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_453;
unsigned int it_454;
_Bool same_key_exist_471;
char* it2_474;
struct map$2void$phvoid$ph* __result_obj__302;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_453=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_454=hash_453;
    while((_Bool)1) {
        if(        self->item_existance[it_454]) {
            if(            come_call_equals((void*)0, self->keys[it_454], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_454]);
                    come_call_finalizer3(self->keys[it_454],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_454]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_454]);
                    self->keys[it_454]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_454],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_454]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_454]=item;
                }
                break;
            }
            it_454++;
            if(            it_454>=self->size) {
                it_454=0;
            }
            else if(            it_454==hash_453) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_454]=(_Bool)1;
            if(            1) {
                self->keys[it_454]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_454]=key;
            }
            if(            1) {
                self->items[it_454]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_454]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_471=(_Bool)0;
    for(    it2_474=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_474=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_474, key)) {
            same_key_exist_471=(_Bool)1;
        }
    }
    if(    !same_key_exist_471) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__302 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__302;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_436;
void* __right_value351 = (void*)0;
void** keys_437;
void* __right_value352 = (void*)0;
void** items_438;
void* __right_value353 = (void*)0;
_Bool* item_existance_439;
int len_440;
void* it_443;
void* default_value_446;
void* __right_value354 = (void*)0;
void* it2_447;
unsigned int hash_450;
int n_451;
void* default_value_452;
void* __right_value355 = (void*)0;
default_value_446 = (void*)0;
default_value_452 = (void*)0;
    size_436=self->size*10;
    keys_437=(void**)come_increment_ref_count(((void**)(__right_value351=(void**)come_calloc(1, sizeof(void*)*(1*(size_436)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_438=(void**)come_increment_ref_count(((void**)(__right_value352=(void**)come_calloc(1, sizeof(void*)*(1*(size_436)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_439=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value353=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_436)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_440=0;
    for(    it_443=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_443=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_446,0,sizeof(void*));
        it2_447=((void*)(__right_value354=map$2void$phvoid$ph$p_at(self,it_443,(void*)come_increment_ref_count(default_value_446))));
        come_call_finalizer3(__right_value354,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_450=come_call_get_hash_key((void*)0, ((void*)it_443))%size_436;
        n_451=hash_450;
        while((_Bool)1) {
            if(            item_existance_439[n_451]) {
                n_451++;
                if(                n_451>=size_436) {
                    n_451=0;
                }
                else if(                n_451==hash_450) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_439[n_451]=(_Bool)1;
                keys_437[n_451]=it_443;
                items_438[n_451]=((void*)(__right_value355=map$2void$phvoid$ph$p_at(self,it_443,(void*)come_increment_ref_count(default_value_452))));
                come_call_finalizer3(__right_value355,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_440++;
                come_call_finalizer3(default_value_452,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_452,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_446,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_437;
    self->items=items_438;
    self->item_existance=item_existance_439;
    self->size=size_436;
    self->len=len_440;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_441;
void* __result_obj__281;
void* __result_obj__282;
void* result_442;
void* __result_obj__283;
result_441 = (void*)0;
result_442 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_441,0,sizeof(void*));
        __result_obj__281 = result_441;
        return __result_obj__281;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__282 = self->key_list->it->item;
        return __result_obj__282;
    }
    memset(&result_442,0,sizeof(void*));
    __result_obj__283 = result_442;
    return __result_obj__283;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_444;
void* __result_obj__284;
void* __result_obj__285;
void* result_445;
void* __result_obj__286;
result_444 = (void*)0;
result_445 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_444,0,sizeof(void*));
        __result_obj__284 = result_444;
        return __result_obj__284;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__285 = self->key_list->it->item;
        return __result_obj__285;
    }
    memset(&result_445,0,sizeof(void*));
    __result_obj__286 = result_445;
    return __result_obj__286;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_448;
unsigned int it_449;
void* __result_obj__287;
void* __result_obj__288;
void* __result_obj__289;
void* __result_obj__290;
    hash_448=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_449=hash_448;
    while((_Bool)1) {
        if(        self->item_existance[it_449]) {
            if(            come_call_equals((void*)0, self->keys[it_449], key)) {
                __result_obj__287 = come_increment_ref_count(self->items[it_449]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__287,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__287;
            }
            it_449++;
            if(            it_449>=self->size) {
                it_449=0;
            }
            else if(            it_449==hash_448) {
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
int it2_455;
struct list_item$1void$p* it_456;
struct list$1void$p* __result_obj__294;
    it2_455=0;
    it_456=self->head;
    while(it_456!=((void*)0)) {
        if(        come_call_equals((void*)0, it_456->item, item)) {
            list$1void$p$p_delete(self,it2_455,it2_455+1);
            break;
        }
        it2_455++;
        it_456=it_456->next;
    }
    __result_obj__294 = self;
    return __result_obj__294;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_457;
struct list$1void$p* __result_obj__291;
struct list_item$1void$p* it_460;
int i_461;
struct list_item$1void$p* prev_it_462;
struct list_item$1void$p* it_463;
int i_464;
struct list_item$1void$p* prev_it_465;
struct list_item$1void$p* it_466;
struct list_item$1void$p* head_prev_it_467;
struct list_item$1void$p* tail_it_468;
int i_469;
struct list_item$1void$p* prev_it_470;
struct list$1void$p* __result_obj__293;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_457=tail;
        tail=head;
        head=tmp_457;
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
        it_460=self->head;
        i_461=0;
        while(it_460!=((void*)0)) {
            if(            i_461<tail) {
                prev_it_462=it_460;
                it_460=it_460->next;
                i_461++;
                come_call_finalizer3(prev_it_462,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_461==tail) {
                self->head=it_460;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_460=it_460->next;
                i_461++;
            }
        }
    }
    else if(    tail==self->len) {
        it_463=self->head;
        i_464=0;
        while(it_463!=((void*)0)) {
            if(            i_464==head) {
                self->tail=it_463->prev;
                self->tail->next=((void*)0);
            }
            if(            i_464>=head) {
                prev_it_465=it_463;
                it_463=it_463->next;
                i_464++;
                come_call_finalizer3(prev_it_465,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_463=it_463->next;
                i_464++;
            }
        }
    }
    else {
        it_466=self->head;
        head_prev_it_467=((void*)0);
        tail_it_468=((void*)0);
        i_469=0;
        while(it_466!=((void*)0)) {
            if(            i_469==head) {
                head_prev_it_467=it_466->prev;
            }
            if(            i_469==tail) {
                tail_it_468=it_466;
            }
            if(            i_469>=head&&i_469<tail) {
                prev_it_470=it_466;
                it_466=it_466->next;
                i_469++;
                come_call_finalizer3(prev_it_470,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_466=it_466->next;
                i_469++;
            }
        }
        if(        head_prev_it_467!=((void*)0)) {
            head_prev_it_467->next=tail_it_468;
        }
        if(        tail_it_468!=((void*)0)) {
            tail_it_468->prev=head_prev_it_467;
        }
    }
    __result_obj__293 = self;
    return __result_obj__293;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_458;
struct list_item$1void$p* prev_it_459;
struct list$1void$p* __result_obj__292;
    it_458=self->head;
    while(it_458!=((void*)0)) {
        prev_it_459=it_458;
        it_458=it_458->next;
        come_call_finalizer3(prev_it_459,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__292 = self;
    return __result_obj__292;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_472;
void* __result_obj__295;
void* __result_obj__296;
void* result_473;
void* __result_obj__297;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_472,0,sizeof(void*));
        __result_obj__295 = result_472;
        return __result_obj__295;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__296 = self->it->item;
        return __result_obj__296;
    }
    memset(&result_473,0,sizeof(void*));
    __result_obj__297 = result_473;
    return __result_obj__297;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_475;
void* __result_obj__298;
void* __result_obj__299;
void* result_476;
void* __result_obj__300;
result_475 = (void*)0;
result_476 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_475,0,sizeof(void*));
        __result_obj__298 = result_475;
        return __result_obj__298;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__299 = self->it->item;
        return __result_obj__299;
    }
    memset(&result_476,0,sizeof(void*));
    __result_obj__300 = result_476;
    return __result_obj__300;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value356 = (void*)0;
struct list_item$1void$p* litem_477;
void* __right_value357 = (void*)0;
struct list_item$1void$p* litem_478;
void* __right_value358 = (void*)0;
struct list_item$1void$p* litem_479;
struct list$1void$p* __result_obj__301;
    if(    self->len==0) {
        litem_477=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value356=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_477->prev=((void*)0);
        litem_477->next=((void*)0);
        litem_477->item=item;
        self->tail=litem_477;
        self->head=litem_477;
    }
    else if(    self->len==1) {
        litem_478=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value357=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_478->prev=self->head;
        litem_478->next=((void*)0);
        litem_478->item=item;
        self->tail=litem_478;
        self->head->next=litem_478;
    }
    else {
        litem_479=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value358=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_479->prev=self->tail;
        litem_479->next=((void*)0);
        litem_479->item=item;
        self->tail->next=litem_479;
        self->tail=litem_479;
    }
    self->len++;
    __result_obj__301 = self;
    return __result_obj__301;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_480;
int i_481;
char* __result_obj__303;
char* default_value_482;
char* __result_obj__304;
default_value_482 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_480=self->head;
    i_481=0;
    while(it_480!=((void*)0)) {
        if(        position==i_481) {
            __result_obj__303 = come_increment_ref_count(it_480->item);
            (__result_obj__303 = come_decrement_ref_count2(__result_obj__303, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__303;
        }
        it_480=it_480->next;
        i_481++;
    }
    memset(&default_value_482,0,sizeof(char*));
    __result_obj__304 = come_increment_ref_count(default_value_482);
    (default_value_482 = come_decrement_ref_count2(default_value_482, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__304 = come_decrement_ref_count2(__result_obj__304, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__304;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value365 = (void*)0;
struct list_item$1sNode$ph* litem_486;
struct sNode* __dec_obj74;
void* __right_value366 = (void*)0;
struct list_item$1sNode$ph* litem_487;
struct sNode* __dec_obj75;
void* __right_value367 = (void*)0;
struct list_item$1sNode$ph* litem_488;
struct sNode* __dec_obj76;
struct list$1sNode$ph* __result_obj__305;
    if(    self->len==0) {
        litem_486=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value365=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1457, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        __dec_obj74=litem_486->item;
        litem_486->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1) {
        litem_487=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value366=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1467, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        __dec_obj75=litem_487->item;
        litem_487->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value367=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1477, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        __dec_obj76=litem_488->item;
        litem_488->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result_obj__305 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__305;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_490;
struct list$1sNode$ph* __result_obj__306;
struct list_item$1sNode$ph* it_493;
int i_494;
struct list_item$1sNode$ph* prev_it_495;
struct list_item$1sNode$ph* it_496;
int i_497;
struct list_item$1sNode$ph* prev_it_498;
struct list_item$1sNode$ph* it_499;
struct list_item$1sNode$ph* head_prev_it_500;
struct list_item$1sNode$ph* tail_it_501;
int i_502;
struct list_item$1sNode$ph* prev_it_503;
struct list$1sNode$ph* __result_obj__308;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_490=tail;
        tail=head;
        head=tmp_490;
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
        it_493=self->head;
        i_494=0;
        while(it_493!=((void*)0)) {
            if(            i_494<tail) {
                prev_it_495=it_493;
                it_493=it_493->next;
                i_494++;
                come_call_finalizer3(prev_it_495,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_494==tail) {
                self->head=it_493;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_493=it_493->next;
                i_494++;
            }
        }
    }
    else if(    tail==self->len) {
        it_496=self->head;
        i_497=0;
        while(it_496!=((void*)0)) {
            if(            i_497==head) {
                self->tail=it_496->prev;
                self->tail->next=((void*)0);
            }
            if(            i_497>=head) {
                prev_it_498=it_496;
                it_496=it_496->next;
                i_497++;
                come_call_finalizer3(prev_it_498,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_496=it_496->next;
                i_497++;
            }
        }
    }
    else {
        it_499=self->head;
        head_prev_it_500=((void*)0);
        tail_it_501=((void*)0);
        i_502=0;
        while(it_499!=((void*)0)) {
            if(            i_502==head) {
                head_prev_it_500=it_499->prev;
            }
            if(            i_502==tail) {
                tail_it_501=it_499;
            }
            if(            i_502>=head&&i_502<tail) {
                prev_it_503=it_499;
                it_499=it_499->next;
                i_502++;
                come_call_finalizer3(prev_it_503,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_499=it_499->next;
                i_502++;
            }
        }
        if(        head_prev_it_500!=((void*)0)) {
            head_prev_it_500->next=tail_it_501;
        }
        if(        tail_it_501!=((void*)0)) {
            tail_it_501->prev=head_prev_it_500;
        }
    }
    __result_obj__308 = self;
    return __result_obj__308;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_491;
struct list_item$1sNode$ph* prev_it_492;
struct list$1sNode$ph* __result_obj__307;
    it_491=self->head;
    while(it_491!=((void*)0)) {
        prev_it_492=it_491;
        it_491=it_491->next;
        come_call_finalizer3(prev_it_492,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct sSemicolonNode* result_510;
void* __right_value377 = (void*)0;
char* __dec_obj80;
struct sSemicolonNode* __result_obj__310;
    if(    self==(void*)0) {
        __result_obj__309 = (void*)0;
        return __result_obj__309;
    }
    result_510=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_510->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj80=result_510->sname;
        result_510->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_510->sline_real=self->sline_real;
    }
    __result_obj__310 = result_510;
    come_call_finalizer3(result_510,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__310;
}

int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_520;
struct sVarTable* old_table_521;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sVarTable* __dec_obj89;
struct sVarTable* current_loop_vtable_534;
int i_535;
struct list$1char$ph* o2_saved_536;
char* name_537;
void* __right_value404 = (void*)0;
struct sType* type_538;
void* __right_value405 = (void*)0;
int block_level_542;
int i_543;
struct list$1sNode$ph* o2_saved_544;
struct sNode* node_547;
struct list$1void$ph* right_value_objects_550;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1void$ph* __dec_obj90;
char* __dec_obj91;
char* __dec_obj92;
int stack_num_before_551;
int sline_552;
void* __right_value408 = (void*)0;
char* sname_553;
void* __right_value409 = (void*)0;
char* __dec_obj93;
_Bool Value_554;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_555;
void* __right_value416 = (void*)0;
struct CVALUE* come_value2_556;
void* __right_value417 = (void*)0;
char* __dec_obj98;
void* __right_value418 = (void*)0;
struct CVALUE* come_value2_558;
struct sVar* var__559;
void* __right_value419 = (void*)0;
struct CVALUE* come_value3_560;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_563=0;
char* Err_564=0;
_Bool _if_conditional2;
int __result_obj__329;
void* __right_value422 = (void*)0;
struct sType* __dec_obj99;
void* __right_value423 = (void*)0;
char* c_value_565;
void* __right_value424 = (void*)0;
char* __dec_obj100;
void* __right_value425 = (void*)0;
char* __dec_obj101;
void* __right_value426 = (void*)0;
char* __dec_obj102;
_Bool Value_566;
void* __right_value427 = (void*)0;
char* __dec_obj103;
struct list$1void$ph* __dec_obj104;
void* __if_result__0_569 = (void*)0;
struct list$1void$ph* o2_saved_570;
struct sVar* it_573;
void* __right_value428 = (void*)0;
struct list$1void$ph* __dec_obj105;
memset(&i_535, 0, sizeof(int));
memset(&i_543, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_520=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_521=info->lv_table;
    if(    !no_var_table) {
        __dec_obj89=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 443, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_521));
        come_call_finalizer3(__dec_obj89,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_534=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_536=(param_names),name_537=list$1char$ph$p_begin((o2_saved_536));        !list$1char$ph$p_end((o2_saved_536));        name_537=list$1char$ph$p_next((o2_saved_536))        ){
            type_538=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types,i_535));
            type_538->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_537,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_538)),info,(_Bool)1);
            i_535++;
            come_call_finalizer3(type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_542=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_544=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_547=list$1sNode$ph$p_begin((o2_saved_544));        !list$1sNode$ph$p_end((o2_saved_544));        node_547=list$1sNode$ph$p_next((o2_saved_544))        ){
            right_value_objects_550=(struct list$1void$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj90=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 481, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            come_call_finalizer3(__dec_obj90,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj91=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj92=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_551=list$1CVALUE$ph$p_length(info->stack);
            sline_552=info->sline;
            sname_553=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_547->sline(node_547->_protocol_obj);
            __dec_obj93=info->sname;
            info->sname=(char*)come_increment_ref_count(node_547->sname(node_547->_protocol_obj));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_543==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_554=node_compile(node_547,info);
                if(                !Value_554) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_551+1) {
                    come_value_555=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_555->type->mClass->mName,"void")&&come_value_555->type->mPointerNum==0) {
                        come_value2_556=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_555));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_556));
                        __dec_obj98=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_556->c_value));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_558=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_555));
                        var__559=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__559) {
                            come_value3_560=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 517, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__559->mType->mClass=="void"&&var__559->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value421=check_assign_type("invalid if result value",var__559->mType,((struct sType*)(__right_value420=come_call_cloner(sType_clone, come_value_555->type))),come_value3_560,info,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_563=multiple_assign_var8->v1;
                                Err_564=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_564)),                                come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value421,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result_obj__329 = (_Bool)1;
                                    (Err_564 = come_decrement_ref_count2(Err_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_550,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_553 = come_decrement_ref_count2(sname_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_544,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__329;
                                }
                                else {
                                }
                                (Err_564 = come_decrement_ref_count2(Err_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj99=var__559->mType;
                            var__559->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_555->type));
                            come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_555->type->mHeap) {
                                c_value_565=(char*)come_increment_ref_count(increment_ref_count_object(come_value_555->type,come_value_555->c_value,info));
                                __dec_obj100=come_value2_558->c_value;
                                come_value2_558->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__559->mCValueName,c_value_565));
                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_565 = come_decrement_ref_count2(c_value_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj101=come_value2_558->c_value;
                                come_value2_558->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__559->mCValueName,come_value_555->c_value));
                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_558));
                        __dec_obj102=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_558->c_value));
                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_566=node_compile(node_547,info);
                if(                !Value_566) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_552;
            __dec_obj103=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_553));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_551);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1void$ph$p_reset(info->right_value_objects);
            }
            __dec_obj104=info->right_value_objects;
            info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_550);
            come_call_finalizer3(__dec_obj104,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_543++;
            come_call_finalizer3(right_value_objects_550,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (sname_553 = come_decrement_ref_count2(sname_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_544,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_542==0) {
            for(            o2_saved_570=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_573=((struct sVar*)list$1void$ph$p_begin((o2_saved_570)));            !list$1void$ph$p_end((o2_saved_570));            it_573=((struct sVar*)list$1void$ph$p_next((o2_saved_570)))            ){
                free_object(((struct sType*)(__right_value428=come_call_cloner(sType_clone, it_573->mType))),it_573->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_570,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj105=info->match_it_var;
            __if_result__0_569=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj105,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_569,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_521;
    info->block_level=block_level_542;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_534;
    info->inhibits_output_code=inhibits_output_code_520;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__312;
void* __right_value384 = (void*)0;
struct sVarTable* result_523;
void* __right_value401 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj88;
struct sVarTable* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__312 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__312,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__312;
    }
    result_523=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj88=result_523->mVars;
        result_523->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj88,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_523->mParent=self->mParent;
    }
    __result_obj__318 = come_increment_ref_count(result_523);
    come_call_finalizer3(result_523,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__318,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__318;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_522;
    result_522=0;
    result_522+=int_get_hash_key(((int)self->mVars));
    result_522+=int_get_hash_key(((int)self->mGlobal));
    result_522+=int_get_hash_key(((int)self->mParent));
    return result_522;
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
struct map$2void$phvoid$ph* result_524;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1void$p* __dec_obj83;
char* it_525;
void* default_value_526;
void* __right_value389 = (void*)0;
struct sVar* it2_527;
void* __right_value390 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct map$2void$phvoid$ph* __result_obj__317;
default_value_526 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__313 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__313,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__313;
    }
    result_524=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2734, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph$p_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj83=result_524->key_list;
    result_524->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2736, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj83,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_525=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_525=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_526,0,sizeof(void*));
        it2_527=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_525,(struct sVar*)come_increment_ref_count(((struct sVar*)default_value_526))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_524,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_525)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_527)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_524,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_525)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_527)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_524,(char*)come_increment_ref_count(it_525),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_527)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_524,(char*)come_increment_ref_count(it_525),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_527)));
        }
        come_call_finalizer3(default_value_526,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_527,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__317 = come_increment_ref_count(result_524);
    come_call_finalizer3(result_524,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__317,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_528;
int it_529;
_Bool same_key_exist_530;
char* it2_531;
struct map$2void$phvoid$ph* __result_obj__314;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_528=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_529=hash_528;
    while((_Bool)1) {
        if(        self->item_existance[it_529]) {
            if(            come_call_equals((void*)0, self->keys[it_529], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_529],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_529]);
                    self->keys[it_529]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_529]);
                    self->keys[it_529]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_529],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_529]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_529]=item;
                }
                break;
            }
            it_529++;
            if(            it_529>=self->size) {
                it_529=0;
            }
            else if(            it_529==hash_528) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_529]=(_Bool)1;
            if(            1) {
                self->keys[it_529]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_529]=key;
            }
            if(            1) {
                self->items[it_529]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_529]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_530=(_Bool)0;
    for(    it2_531=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_531=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_531, key)) {
            same_key_exist_530=(_Bool)1;
        }
    }
    if(    !same_key_exist_530) {
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
struct sVar* result_533;
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
    result_533=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj84=result_533->mName;
        result_533->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj85=result_533->mCValueName;
        result_533->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj86=result_533->mType;
        result_533->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_533->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_533->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_533->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj87=result_533->mFunName;
        result_533->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__316 = come_increment_ref_count(result_533);
    come_call_finalizer3(result_533,sVar_finalize, 0, 0, 1, 0, (void*)0);
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
unsigned int result_532;
    result_532=0;
    result_532+=int_get_hash_key(((int)self->mName));
    result_532+=int_get_hash_key(((int)self->mCValueName));
    result_532+=int_get_hash_key(((int)self->mType));
    result_532+=int_get_hash_key(((int)self->mGlobal));
    result_532+=int_get_hash_key(((int)self->mAllocaValue));
    result_532+=int_get_hash_key(((int)self->mNoFree));
    result_532+=int_get_hash_key(((int)self->mFunName));
    return result_532;
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
struct list_item$1void$ph* it_539;
int i_540;
void* __result_obj__319;
void* default_value_541;
void* __result_obj__320;
default_value_541 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_539=self->head;
    i_540=0;
    while(it_539!=((void*)0)) {
        if(        position==i_540) {
            __result_obj__319 = come_increment_ref_count(it_539->item);
            come_call_finalizer3(__result_obj__319,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__319;
        }
        it_539=it_539->next;
        i_540++;
    }
    memset(&default_value_541,0,sizeof(void*));
    __result_obj__320 = come_increment_ref_count(((struct sType*)default_value_541));
    come_call_finalizer3(default_value_541,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
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
struct sNode* result_545;
struct sNode* __result_obj__321;
struct sNode* __result_obj__322;
struct sNode* result_546;
struct sNode* __result_obj__323;
result_545 = (void*)0;
result_546 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_545,0,sizeof(struct sNode*));
        __result_obj__321 = result_545;
        return __result_obj__321;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__322 = self->it->item;
        return __result_obj__322;
    }
    memset(&result_546,0,sizeof(struct sNode*));
    __result_obj__323 = result_546;
    return __result_obj__323;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_548;
struct sNode* __result_obj__324;
struct sNode* __result_obj__325;
struct sNode* result_549;
struct sNode* __result_obj__326;
result_548 = (void*)0;
result_549 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_548,0,sizeof(struct sNode*));
        __result_obj__324 = result_548;
        return __result_obj__324;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__325 = self->it->item;
        return __result_obj__325;
    }
    memset(&result_549,0,sizeof(struct sNode*));
    __result_obj__326 = result_549;
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
struct CVALUE* result_557;
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
    result_557=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj94=result_557->c_value;
        result_557->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj95=result_557->type;
        result_557->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_557->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj96=result_557->c_value_without_right_value_objects;
        result_557->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj97=result_557->c_value_without_cast_object_value;
        result_557->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__328 = come_increment_ref_count(result_557);
    come_call_finalizer3(result_557,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1void$ph* it_561;
struct list_item$1void$ph* it2_562;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_561=left->head;
    it2_562=right->head;
    while(it_561!=((void*)0)) {
        if(        !(voidp_operator_equals(it_561->item,it2_562->item))) {
            return (_Bool)0;
        }
        it_561=it_561->next;
        it2_562=it2_562->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self){
struct list_item$1void$ph* it_567;
struct list_item$1void$ph* prev_it_568;
struct list$1void$ph* __result_obj__330;
    it_567=self->head;
    while(it_567!=((void*)0)) {
        prev_it_568=it_567;
        it_567=it_567->next;
        come_call_finalizer3(prev_it_568,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__330 = self;
    return __result_obj__330;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_571;
void* __result_obj__331;
void* __result_obj__332;
void* result_572;
void* __result_obj__333;
result_571 = (void*)0;
result_572 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_571,0,sizeof(void*));
        __result_obj__331 = result_571;
        return __result_obj__331;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__332 = self->it->item;
        return __result_obj__332;
    }
    memset(&result_572,0,sizeof(void*));
    __result_obj__333 = result_572;
    return __result_obj__333;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_574;
void* __result_obj__334;
void* __result_obj__335;
void* result_575;
void* __result_obj__336;
result_574 = (void*)0;
result_575 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_574,0,sizeof(void*));
        __result_obj__334 = result_574;
        return __result_obj__334;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__335 = self->it->item;
        return __result_obj__335;
    }
    memset(&result_575,0,sizeof(void*));
    __result_obj__336 = result_575;
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
int come_exception_var_c8_576=0;
char* Err_577=0;
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value429=err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line)));
            come_exception_var_c8_576=multiple_assign_var9->v1;
            Err_577=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            ((Err_577)?(puts(Err_577),exit(0)):(0));
            come_call_finalizer3(__right_value429,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_577 = come_decrement_ref_count2(Err_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
char* head_578;
_Bool dquort_579;
_Bool squort_580;
int sline_581;
int nest_582;
void* __right_value430 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_583=0;
char* Err_584=0;
void* __right_value431 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_585=0;
char* Err_586=0;
void* __right_value432 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_587=0;
char* Err_588=0;
void* __right_value433 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_589=0;
char* Err_590=0;
void* __right_value434 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_591=0;
char* Err_592=0;
void* __right_value435 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_593=0;
char* Err_594=0;
void* __right_value436 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_595=0;
char* Err_596=0;
void* __right_value437 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_c16_597=0;
char* Err_598=0;
char* tail_599;
void* __right_value438 = (void*)0;
char* buf_600;
void* __right_value439 = (void*)0;
char* __result_obj__337;
    head_578=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_579=(_Bool)0;
        squort_580=(_Bool)0;
        sline_581=0;
        nest_582=0;
        while(1) {
            if(            dquort_579) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value430=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c9_583=multiple_assign_var10->v1;
                        Err_584=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_584)?(puts(Err_584),exit(0)):(0));
                        come_call_finalizer3(__right_value430,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_584 = come_decrement_ref_count2(Err_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_579=!dquort_579;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value431=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c10_585=multiple_assign_var11->v1;
                        Err_586=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_586)?(puts(Err_586),exit(0)):(0));
                        come_call_finalizer3(__right_value431,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_586 = come_decrement_ref_count2(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value432=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c11_587=multiple_assign_var12->v1;
                        Err_588=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_588)?(puts(Err_588),exit(0)):(0));
                        come_call_finalizer3(__right_value432,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_588 = come_decrement_ref_count2(Err_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_580) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value433=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c12_589=multiple_assign_var13->v1;
                        Err_590=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_590)?(puts(Err_590),exit(0)):(0));
                        come_call_finalizer3(__right_value433,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_580=!squort_580;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value434=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c13_591=multiple_assign_var14->v1;
                        Err_592=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_592)?(puts(Err_592),exit(0)):(0));
                        come_call_finalizer3(__right_value434,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_592 = come_decrement_ref_count2(Err_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value435=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_581)));
                        come_exception_var_c14_593=multiple_assign_var15->v1;
                        Err_594=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        ((Err_594)?(puts(Err_594),exit(0)):(0));
                        come_call_finalizer3(__right_value435,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_581=info->sline;
                info->p++;
                squort_580=!squort_580;
            }
            else if(            *info->p==34) {
                sline_581=info->sline;
                info->p++;
                dquort_579=!dquort_579;
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
                nest_582++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_582==0) {
                    break;
                }
                nest_582--;
            }
            else if(            *info->p==0) {
                multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value436=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c15_595=multiple_assign_var16->v1;
                Err_596=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                ((Err_596)?(puts(Err_596),exit(0)):(0));
                come_call_finalizer3(__right_value436,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_596 = come_decrement_ref_count2(Err_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        come_exception_var_c16_597=multiple_assign_var17->v1;
        Err_598=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        ((Err_598)?(puts(Err_598),exit(0)):(0));
        come_call_finalizer3(__right_value437,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        (Err_598 = come_decrement_ref_count2(Err_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_599=info->p;
    buf_600=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_599-head_578+1)), "05function.c", 752, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_600,head_578,tail_599-head_578);
    buf_600[tail_599-head_578]=0;
    skip_spaces_and_lf(info);
    __result_obj__337 = come_increment_ref_count(((char*)(__right_value439=__builtin_string(buf_600))));
    (buf_600 = come_decrement_ref_count2(buf_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__337 = come_decrement_ref_count2(__result_obj__337, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__337;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_601;
char* p3_602;
int i_603;
    terminated_601=(_Bool)0;
    p3_602=p;
    for(    i_603=0;    i_603<strlen(p2);    i_603++    ){
        if(        *p3_602==0) {
            terminated_601=(_Bool)1;
            break;
        }
        p3_602++;
    }
    return !terminated_601&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* asm_fun_name_604;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct buffer* result_605;
char* head_606;
int brace_num_607;
char* tail_608;
char* head_609;
int brace_num_610;
char* tail_611;
char* head_612;
char* tail_613;
char* head_614;
char* tail_615;
int len_616;
_Bool in_dquort_617;
int brace_num_618;
char* head_619;
char* tail_620;
char* head_621;
char* tail_622;
char* head_623;
char* tail_624;
char* head_625;
int nest_626;
char* tail_627;
char* head_628;
int nest_629;
char* tail_630;
char* head_631;
int nest_632;
char* tail_633;
char* head_634;
int nest_635;
char* tail_636;
char* head_637;
int nest_638;
char* tail_639;
char* head_640;
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
int brace_num_651;
char* tail_652;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__341;
    asm_fun_name_604=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 777, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_605=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 778, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_606=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_607=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_607++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_607--;
                        if(                        brace_num_607==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_608=info->p;
            buffer_append(result_605,head_606,tail_608-head_606);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_609=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_610=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_610++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_610--;
                        if(                        brace_num_610==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_611=info->p;
            buffer_append(result_605,head_609,tail_611-head_609);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_612=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_613=info->p;
            buffer_append(result_605,head_612,tail_613-head_612);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_614=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_615=info->p;
            buffer_append(result_605,head_614,tail_615-head_614);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_616=0;
            if(            *info->p==40) {
                in_dquort_617=(_Bool)0;
                brace_num_618=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_617=!in_dquort_617;
                    }
                    else if(                    in_dquort_617) {
                        buffer_append_char(asm_fun_name_604,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_618++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_618--;
                        if(                        brace_num_618==0) {
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
            head_619=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_620=info->p;
            buffer_append(result_605,head_619,tail_620-head_619);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_621=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_622=info->p;
            buffer_append(result_605,head_621,tail_622-head_621);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_623=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_624=info->p;
            buffer_append(result_605,head_623,tail_624-head_623);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_625=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_626=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_626++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_626--;
                        if(                        nest_626==0) {
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
            tail_627=info->p;
            buffer_append(result_605,head_625,tail_627-head_625);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_628=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_629=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_629++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_629--;
                        if(                        nest_629==0) {
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
            tail_630=info->p;
            buffer_append(result_605,head_628,tail_630-head_628);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_631=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_632=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632--;
                        if(                        nest_632==0) {
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
            tail_633=info->p;
            buffer_append(result_605,head_631,tail_633-head_631);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_634=info->p;
            info->p+=strlen("_Nonnull");
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
            buffer_append(result_605,head_634,tail_636-head_634);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_637=info->p;
            info->p+=strlen("__alloc_align");
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
            buffer_append(result_605,head_637,tail_639-head_637);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_640=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_641=info->p;
            buffer_append(result_605,head_640,tail_641-head_640);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_642=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_643=info->p;
            buffer_append(result_605,head_642,tail_643-head_642);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_644=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_645=info->p;
            buffer_append(result_605,head_644,tail_645-head_644);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_646=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_647=info->p;
            buffer_append(result_605,head_646,tail_647-head_646);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_648=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_649=info->p;
            buffer_append(result_605,head_648,tail_649-head_648);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_650=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_651=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_651++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_651--;
                        if(                        brace_num_651==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_652=info->p;
            buffer_append(result_605,head_650,tail_652-head_650);
        }
        else {
            break;
        }
    }
    __result_obj__341 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value450=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1192, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_604)),(char*)come_increment_ref_count(buffer_to_string(result_605))))));
    come_call_finalizer3(asm_fun_name_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_605,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2char$phchar$ph* result_653;
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
    result_653=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj106=result_653->v1;
        result_653->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj107=result_653->v2;
        result_653->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__339 = come_increment_ref_count(result_653);
    come_call_finalizer3(result_653,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__339,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_654;
    result_654=0;
    result_654+=int_get_hash_key(((int)self->v1));
    result_654+=int_get_hash_key(((int)self->v2));
    return result_654;
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
struct buffer* asm_fun_name_655;
void* __right_value453 = (void*)0;
char* attribute_656;
int nest_657;
int nest_658;
int nest_659;
int nest_660;
int nest_661;
void* __right_value454 = (void*)0;
char* __dec_obj110;
int len_662;
_Bool in_dquort_663;
int brace_num_664;
int brace_num_665;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__342;
    asm_fun_name_655=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1197, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_656=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_657=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_657++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_657--;
                        if(                        nest_657==0) {
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
                nest_658=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_658++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_658--;
                        if(                        nest_658==0) {
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
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
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
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
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
            __dec_obj110=attribute_656;
            attribute_656=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_662=0;
            if(            *info->p==40) {
                in_dquort_663=(_Bool)0;
                brace_num_664=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_663=!in_dquort_663;
                    }
                    else if(                    in_dquort_663) {
                        buffer_append_char(asm_fun_name_655,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_664++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_664--;
                        if(                        brace_num_664==0) {
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
                brace_num_665=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_665++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_665--;
                        if(                        brace_num_665==0) {
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
    __result_obj__342 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value457=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1466, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_655)),(char*)come_increment_ref_count(attribute_656)))));
    come_call_finalizer3(asm_fun_name_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_656 = come_decrement_ref_count2(attribute_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value457,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__342,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__342;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value458 = (void*)0;
char* __dec_obj111;
char* head_666;
int head_sline_667;
void* __right_value459 = (void*)0;
char* buf_668;
void* __right_value460 = (void*)0;
struct sNode* node_669;
_Bool Value_670;
    while(*info->p) {
        __dec_obj111=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_666=info->p;
        head_sline_667=info->sline;
        buf_668=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_668 = come_decrement_ref_count2(buf_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_669=(struct sNode*)come_increment_ref_count(top_level_v99(buf_668,head_666,head_sline_667,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_669!=((void*)0)) {
            Value_670=node_compile(node_669,info);
            if(            !Value_670) {
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
            (buf_668 = come_decrement_ref_count2(buf_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_669) ? node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_668 = come_decrement_ref_count2(buf_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_669) ? node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value461 = (void*)0;
char* name_671;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* result_type_672;
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
struct sType* __list_values1___673[9];
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1sType$ph* param_types_684;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* __list_values2___685[9];
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1char$ph* param_names_689;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1char$ph* param_default_parametors_690;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sFun* main_fun_694;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
char* name_695;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* result_type_696;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __list_values3___697[1];
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1sType$ph* param_types_698;
void* __right_value534 = (void*)0;
char* __list_values4___699[1];
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1char$ph* param_names_700;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct list$1char$ph* param_default_parametors_701;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sFun* main_fun_702;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
char* name_703;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* result_type_704;
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
struct sType* __list_values5___705[7];
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1sType$ph* param_types_706;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
char* __list_values6___707[7];
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1char$ph* param_names_708;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct list$1char$ph* param_default_parametors_709;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sFun* main_fun_710;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
char* name_711;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* result_type_712;
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
struct sType* __list_values7___713[5];
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1sType$ph* param_types_714;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
char* __list_values8___715[5];
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct list$1char$ph* param_names_716;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1char$ph* param_default_parametors_717;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sFun* main_fun_718;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
char* name_719;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* result_type_720;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sType* __list_values9___721[1];
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1sType$ph* param_types_722;
void* __right_value615 = (void*)0;
char* __list_values10___723[1];
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1char$ph* param_names_724;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1char$ph* param_default_parametors_725;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sFun* main_fun_726;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* name_727;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* result_type_728;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sType* __list_values11___729[4];
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1sType$ph* param_types_730;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* __list_values12___731[4];
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1char$ph* param_names_732;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1char$ph* param_default_parametors_733;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sFun* main_fun_734;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
char* name_735;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sType* result_type_736;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sType* __list_values13___737[3];
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct list$1sType$ph* param_types_738;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
char* __list_values14___739[3];
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1char$ph* param_names_740;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct list$1char$ph* param_default_parametors_741;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sFun* main_fun_742;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
char* name_743;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* result_type_744;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sType* __list_values15___745[1];
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1sType$ph* param_types_746;
void* __right_value684 = (void*)0;
char* __list_values16___747[1];
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1char$ph* param_names_748;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct list$1char$ph* param_default_parametors_749;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sFun* main_fun_750;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* name_751;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct sType* result_type_752;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* __list_values17___753[3];
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1sType$ph* param_types_754;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
char* __list_values18___755[3];
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1char$ph* param_names_756;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct list$1char$ph* param_default_parametors_757;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sFun* main_fun_758;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* name_759;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sType* result_type_760;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1void$ph* param_types_761;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1char$ph* param_names_762;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1char$ph* param_default_parametors_763;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* main_fun_764;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* name_765;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sType* result_type_766;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sType* __list_values19___767[4];
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1sType$ph* param_types_768;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
char* __list_values20___769[4];
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1char$ph* param_names_770;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1char$ph* param_default_parametors_771;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sFun* main_fun_772;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
char* name_773;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sType* result_type_774;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1void$ph* param_types_775;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1char$ph* param_names_776;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1char$ph* param_default_parametors_777;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sFun* fun_778;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
char* name_779;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sType* result_type_780;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct list$1void$ph* param_types_781;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct list$1char$ph* param_names_782;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct list$1char$ph* param_default_parametors_783;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sFun* fun_784;
void* __right_value784 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_671=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_672=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_684=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___673[0]=((struct sType*)(__right_value465=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___673[1]=((struct sType*)(__right_value467=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___673[2]=((struct sType*)(__right_value469=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values1___673[3]=((struct sType*)(__right_value471=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values1___673[4]=((struct sType*)(__right_value473=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values1___673[5]=((struct sType*)(__right_value475=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___673[6]=((struct sType*)(__right_value477=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___673[7]=((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values1___673[8]=((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1523, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),9,__list_values1___673)));
        come_call_finalizer3(__right_value465,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value467,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value469,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value475,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value477,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_689=(struct list$1char$ph*)come_increment_ref_count((__list_values2___685[0]=((char*)(__right_value488=__builtin_string("count"))),
__list_values2___685[1]=((char*)(__right_value489=__builtin_string("size"))),
__list_values2___685[2]=((char*)(__right_value490=__builtin_string("sname"))),
__list_values2___685[3]=((char*)(__right_value491=__builtin_string("sline"))),
__list_values2___685[4]=((char*)(__right_value492=__builtin_string("class_name"))),
__list_values2___685[5]=((char*)(__right_value493=__builtin_string("finalizer_fun"))),
__list_values2___685[6]=((char*)(__right_value494=__builtin_string("cloner_fun"))),
__list_values2___685[7]=((char*)(__right_value495=__builtin_string("get_hash_key_fun"))),
__list_values2___685[8]=((char*)(__right_value496=__builtin_string("equaler_fun"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),9,__list_values2___685)));
        (__right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_690=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1525, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_690,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_690,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_690,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_690,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_690,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_694=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1531, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_671),(struct sType*)come_increment_ref_count(result_type_672),(struct list$1sType$ph*)come_increment_ref_count(param_types_684),(struct list$1char$ph*)come_increment_ref_count(param_names_689),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_690),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_671)),(struct sFun*)come_increment_ref_count(main_fun_694));
        (name_671 = come_decrement_ref_count2(name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_684,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_689,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_690,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_694,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_695=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_696=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_698=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___697[0]=((struct sType*)(__right_value531=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1541, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1541, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values3___697)));
        come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_700=(struct list$1char$ph*)come_increment_ref_count((__list_values4___699[0]=((char*)(__right_value534=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1542, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values4___699)));
        (__right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_701=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1543, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_702=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_695),(struct sType*)come_increment_ref_count(result_type_696),(struct list$1sType$ph*)come_increment_ref_count(param_types_698),(struct list$1char$ph*)come_increment_ref_count(param_names_700),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_701),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_695)),(struct sFun*)come_increment_ref_count(main_fun_702));
        (name_695 = come_decrement_ref_count2(name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_696,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_698,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_700,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_701,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_702,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_703=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_704=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_706=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___705[0]=((struct sType*)(__right_value548=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___705[1]=((struct sType*)(__right_value550=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___705[2]=((struct sType*)(__right_value552=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___705[3]=((struct sType*)(__right_value554=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values5___705[4]=((struct sType*)(__right_value556=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values5___705[5]=((struct sType*)(__right_value558=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values5___705[6]=((struct sType*)(__right_value560=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1554, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),7,__list_values5___705)));
        come_call_finalizer3(__right_value548,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value550,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value552,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value554,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value556,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value558,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value560,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_708=(struct list$1char$ph*)come_increment_ref_count((__list_values6___707[0]=((char*)(__right_value563=__builtin_string("fun"))),
__list_values6___707[1]=((char*)(__right_value564=__builtin_string("mem"))),
__list_values6___707[2]=((char*)(__right_value565=__builtin_string("protocol_fun"))),
__list_values6___707[3]=((char*)(__right_value566=__builtin_string("protocol_obj"))),
__list_values6___707[4]=((char*)(__right_value567=__builtin_string("call_finalizer_only"))),
__list_values6___707[5]=((char*)(__right_value568=__builtin_string("no_decrement"))),
__list_values6___707[6]=((char*)(__right_value569=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1555, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),7,__list_values6___707)));
        (__right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_709=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1556, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_710=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1557, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_703),(struct sType*)come_increment_ref_count(result_type_704),(struct list$1sType$ph*)come_increment_ref_count(param_types_706),(struct list$1char$ph*)come_increment_ref_count(param_names_708),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_709),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_703)),(struct sFun*)come_increment_ref_count(main_fun_710));
        (name_703 = come_decrement_ref_count2(name_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_704,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_706,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_708,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_709,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_710,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_711=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_712=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_714=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___713[0]=((struct sType*)(__right_value583=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___713[1]=((struct sType*)(__right_value585=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___713[2]=((struct sType*)(__right_value587=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values7___713[3]=((struct sType*)(__right_value589=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info))),
__list_values7___713[4]=((struct sType*)(__right_value591=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1567, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),5,__list_values7___713)));
        come_call_finalizer3(__right_value583,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value585,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_716=(struct list$1char$ph*)come_increment_ref_count((__list_values8___715[0]=((char*)(__right_value594=__builtin_string("mem"))),
__list_values8___715[1]=((char*)(__right_value595=__builtin_string("protocol_fun"))),
__list_values8___715[2]=((char*)(__right_value596=__builtin_string("protocol_obj"))),
__list_values8___715[3]=((char*)(__right_value597=__builtin_string("no_decrement"))),
__list_values8___715[4]=((char*)(__right_value598=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1568, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),5,__list_values8___715)));
        (__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_717=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1569, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_718=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1570, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_711),(struct sType*)come_increment_ref_count(result_type_712),(struct list$1sType$ph*)come_increment_ref_count(param_types_714),(struct list$1char$ph*)come_increment_ref_count(param_names_716),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_717),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_711)),(struct sFun*)come_increment_ref_count(main_fun_718));
        (name_711 = come_decrement_ref_count2(name_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_712,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_714,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_716,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_717,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_718,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_719=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_720=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_722=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___721[0]=((struct sType*)(__right_value612=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1580, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1580, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values9___721)));
        come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_724=(struct list$1char$ph*)come_increment_ref_count((__list_values10___723[0]=((char*)(__right_value615=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1581, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values10___723)));
        (__right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_725=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1582, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_726=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1583, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_719),(struct sType*)come_increment_ref_count(result_type_720),(struct list$1sType$ph*)come_increment_ref_count(param_types_722),(struct list$1char$ph*)come_increment_ref_count(param_names_724),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_725),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_719)),(struct sFun*)come_increment_ref_count(main_fun_726));
        (name_719 = come_decrement_ref_count2(name_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_722,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_724,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_725,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_726,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_727=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_728=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_730=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___729[0]=((struct sType*)(__right_value629=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values11___729[1]=((struct sType*)(__right_value631=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values11___729[2]=((struct sType*)(__right_value633=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values11___729[3]=((struct sType*)(__right_value635=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1593, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values11___729)));
        come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value631,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value633,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_732=(struct list$1char$ph*)come_increment_ref_count((__list_values12___731[0]=((char*)(__right_value638=__builtin_string("block"))),
__list_values12___731[1]=((char*)(__right_value639=__builtin_string("sname"))),
__list_values12___731[2]=((char*)(__right_value640=__builtin_string("sline"))),
__list_values12___731[3]=((char*)(__right_value641=__builtin_string("class_name"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1594, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values12___731)));
        (__right_value638 = come_decrement_ref_count2(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_733=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1595, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_733,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_733,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_733,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_733,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_734=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1600, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_727),(struct sType*)come_increment_ref_count(result_type_728),(struct list$1sType$ph*)come_increment_ref_count(param_types_730),(struct list$1char$ph*)come_increment_ref_count(param_names_732),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_733),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_727)),(struct sFun*)come_increment_ref_count(main_fun_734));
        (name_727 = come_decrement_ref_count2(name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_730,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_732,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_733,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_734,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_735=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_736=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1609, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_738=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___737[0]=((struct sType*)(__right_value658=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values13___737[1]=((struct sType*)(__right_value660=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values13___737[2]=((struct sType*)(__right_value662=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1610, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values13___737)));
        come_call_finalizer3(__right_value658,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value660,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value662,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_740=(struct list$1char$ph*)come_increment_ref_count((__list_values14___739[0]=((char*)(__right_value665=__builtin_string("b"))),
__list_values14___739[1]=((char*)(__right_value666=__builtin_string("c"))),
__list_values14___739[2]=((char*)(__right_value667=__builtin_string("len"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1611, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values14___739)));
        (__right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_741=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1612, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_742=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1613, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_735),(struct sType*)come_increment_ref_count(result_type_736),(struct list$1sType$ph*)come_increment_ref_count(param_types_738),(struct list$1char$ph*)come_increment_ref_count(param_names_740),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_741),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_735)),(struct sFun*)come_increment_ref_count(main_fun_742));
        (name_735 = come_decrement_ref_count2(name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_736,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_740,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_741,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_742,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_743=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_744=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_746=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___745[0]=((struct sType*)(__right_value681=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1623, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1623, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values15___745)));
        come_call_finalizer3(__right_value681,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_748=(struct list$1char$ph*)come_increment_ref_count((__list_values16___747[0]=((char*)(__right_value684=__builtin_string("str"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1624, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values16___747)));
        (__right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_749=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1625, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_750=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1626, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_743),(struct sType*)come_increment_ref_count(result_type_744),(struct list$1sType$ph*)come_increment_ref_count(param_types_746),(struct list$1char$ph*)come_increment_ref_count(param_names_748),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_749),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_743)),(struct sFun*)come_increment_ref_count(main_fun_750));
        (name_743 = come_decrement_ref_count2(name_743, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_746,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_748,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_749,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_750,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_751=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_752=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_754=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___753[0]=((struct sType*)(__right_value698=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values17___753[1]=((struct sType*)(__right_value700=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values17___753[2]=((struct sType*)(__right_value702=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1636, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values17___753)));
        come_call_finalizer3(__right_value698,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value700,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value702,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_756=(struct list$1char$ph*)come_increment_ref_count((__list_values18___755[0]=((char*)(__right_value705=xsprintf("come_malloc"))),
__list_values18___755[1]=((char*)(__right_value706=xsprintf("come_debug"))),
__list_values18___755[2]=((char*)(__right_value707=xsprintf("come_gc"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1637, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values18___755)));
        (__right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_757=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1638, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_757,((void*)0));
        main_fun_758=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1640, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_751),(struct sType*)come_increment_ref_count(result_type_752),(struct list$1sType$ph*)come_increment_ref_count(param_types_754),(struct list$1char$ph*)come_increment_ref_count(param_names_756),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_757),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_751)),(struct sFun*)come_increment_ref_count(main_fun_758));
        (name_751 = come_decrement_ref_count2(name_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_754,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_756,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_757,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_758,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_759=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_760=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_761=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1650, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_762=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1651, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_763=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1652, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_764=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_759),(struct sType*)come_increment_ref_count(result_type_760),(struct list$1void$ph*)come_increment_ref_count(param_types_761),(struct list$1char$ph*)come_increment_ref_count(param_names_762),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_763),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_759)),(struct sFun*)come_increment_ref_count(main_fun_764));
        (name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_760,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_761,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_762,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_763,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_764,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_765=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_766=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_768=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___767[0]=((struct sType*)(__right_value735=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info))),
__list_values19___767[1]=((struct sType*)(__right_value737=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info))),
__list_values19___767[2]=((struct sType*)(__right_value739=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
__list_values19___767[3]=((struct sType*)(__right_value741=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1663, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values19___767)));
        come_call_finalizer3(__right_value735,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value737,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value739,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value741,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_770=(struct list$1char$ph*)come_increment_ref_count((__list_values20___769[0]=((char*)(__right_value744=__builtin_string("mem"))),
__list_values20___769[1]=((char*)(__right_value745=__builtin_string("sname"))),
__list_values20___769[2]=((char*)(__right_value746=__builtin_string("sline"))),
__list_values20___769[3]=((char*)(__right_value747=__builtin_string("id"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1664, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values20___769)));
        (__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_771=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1665, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_772=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1666, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_765),(struct sType*)come_increment_ref_count(result_type_766),(struct list$1sType$ph*)come_increment_ref_count(param_types_768),(struct list$1char$ph*)come_increment_ref_count(param_names_770),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_771),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_765)),(struct sFun*)come_increment_ref_count(main_fun_772));
        (name_765 = come_decrement_ref_count2(name_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_768,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_770,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_771,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_772,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_773=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_774=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_775=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1676, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_776=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1677, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_777=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1678, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_778=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1679, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_773),(struct sType*)come_increment_ref_count(result_type_774),(struct list$1void$ph*)come_increment_ref_count(param_types_775),(struct list$1char$ph*)come_increment_ref_count(param_names_776),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_777),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_773)),(struct sFun*)come_increment_ref_count(fun_778));
        (name_773 = come_decrement_ref_count2(name_773, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_774,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_775,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_776,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_777,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_778,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_779=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_780=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1688, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_781=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 1689, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        param_names_782=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1690, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_783=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1691, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_784=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1692, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_779),(struct sType*)come_increment_ref_count(result_type_780),(struct list$1void$ph*)come_increment_ref_count(param_types_781),(struct list$1char$ph*)come_increment_ref_count(param_names_782),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_783),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_779)),(struct sFun*)come_increment_ref_count(fun_784));
        (name_779 = come_decrement_ref_count2(name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_780,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_781,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_782,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_783,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_784,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_674;
struct list$1sType$ph* __result_obj__344;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_674=0;    i_674<num_value;    i_674++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_674]));
    }
    __result_obj__344 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__344,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__344;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value482 = (void*)0;
struct list_item$1sType$ph* litem_675;
struct sType* __dec_obj112;
void* __right_value483 = (void*)0;
struct list_item$1sType$ph* litem_676;
struct sType* __dec_obj113;
void* __right_value484 = (void*)0;
struct list_item$1sType$ph* litem_677;
struct sType* __dec_obj114;
struct list$1sType$ph* __result_obj__343;
    if(    self->len==0) {
        litem_675=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value482=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1457, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_675->prev=((void*)0);
        litem_675->next=((void*)0);
        __dec_obj112=litem_675->item;
        litem_675->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_675;
        self->head=litem_675;
    }
    else if(    self->len==1) {
        litem_676=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value483=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1467, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_676->prev=self->head;
        litem_676->next=((void*)0);
        __dec_obj113=litem_676->item;
        litem_676->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_676;
        self->head->next=litem_676;
    }
    else {
        litem_677=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value484=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1477, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_677->prev=self->tail;
        litem_677->next=((void*)0);
        __dec_obj114=litem_677->item;
        litem_677->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_677;
        self->tail=litem_677;
    }
    self->len++;
    __result_obj__343 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__343;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_678;
struct list_item$1sType$ph* prev_it_679;
    it_678=self->head;
    while(it_678!=((void*)0)) {
        prev_it_679=it_678;
        it_678=it_678->next;
        come_call_finalizer3(prev_it_679,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_680;
struct list_item$1sType$ph* prev_it_681;
    it_680=self->head;
    while(it_680!=((void*)0)) {
        prev_it_681=it_680;
        it_680=it_680->next;
        come_call_finalizer3(prev_it_681,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__345;
void* __right_value485 = (void*)0;
struct list$1sType$ph* result_682;
struct list$1sType$ph* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__345,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__345;
    }
    result_682=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_682->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_682->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_682->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_682->it=self->it;
    }
    __result_obj__346 = come_increment_ref_count(result_682);
    come_call_finalizer3(result_682,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__346,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_683;
    result_683=0;
    result_683+=int_get_hash_key(((int)self->head));
    result_683+=int_get_hash_key(((int)self->tail));
    result_683+=int_get_hash_key(((int)self->len));
    result_683+=int_get_hash_key(((int)self->it));
    return result_683;
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
int i_686;
struct list$1char$ph* __result_obj__347;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_686=0;    i_686<num_value;    i_686++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_686]));
    }
    __result_obj__347 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__347,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__347;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__348;
void* __right_value497 = (void*)0;
struct list$1char$ph* result_687;
struct list$1char$ph* __result_obj__349;
    if(    self==(void*)0) {
        __result_obj__348 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__348,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__348;
    }
    result_687=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
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
    __result_obj__349 = come_increment_ref_count(result_687);
    come_call_finalizer3(result_687,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__349,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__349;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_688;
    result_688=0;
    result_688+=int_get_hash_key(((int)self->head));
    result_688+=int_get_hash_key(((int)self->tail));
    result_688+=int_get_hash_key(((int)self->len));
    result_688+=int_get_hash_key(((int)self->it));
    return result_688;
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
void* __right_value505 = (void*)0;
struct sFun* result_692;
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
struct sFun* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__350 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__350,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__350;
    }
    result_692=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_692->mName;
        result_692->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj116=result_692->mResultType;
        result_692->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj117=result_692->mParamTypes;
        result_692->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj117,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj118=result_692->mParamNames;
        result_692->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj118,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj119=result_692->mParamDefaultParametors;
        result_692->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj119,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj120=result_692->mLambdaType;
        result_692->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj123=result_692->mBlock;
        result_692->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj123,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj124=result_692->mSource;
        result_692->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj125=result_692->mSourceHead;
        result_692->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj126=result_692->mSourceHead2;
        result_692->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj127=result_692->mSourceDefer;
        result_692->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj127,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_692->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_692->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_692->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_692->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_692->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_692->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj128=result_692->mAttribute;
        result_692->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj129=result_692->mFunAttribute;
        result_692->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__353 = come_increment_ref_count(result_692);
    come_call_finalizer3(result_692,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__353,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__353;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_691;
    result_691=0;
    result_691+=int_get_hash_key(((int)self->mName));
    result_691+=int_get_hash_key(((int)self->mResultType));
    result_691+=int_get_hash_key(((int)self->mParamTypes));
    result_691+=int_get_hash_key(((int)self->mParamNames));
    result_691+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_691+=int_get_hash_key(((int)self->mLambdaType));
    result_691+=int_get_hash_key(((int)self->mBlock));
    result_691+=int_get_hash_key(((int)self->mSource));
    result_691+=int_get_hash_key(((int)self->mSourceHead));
    result_691+=int_get_hash_key(((int)self->mSourceHead2));
    result_691+=int_get_hash_key(((int)self->mSourceDefer));
    result_691+=int_get_hash_key(((int)self->mStatic));
    result_691+=int_get_hash_key(((int)self->mInline));
    result_691+=int_get_hash_key(((int)self->mUniq));
    result_691+=int_get_hash_key(((int)self->mGenerate));
    result_691+=int_get_hash_key(((int)self->mExternal));
    result_691+=int_get_hash_key(((int)self->mVarArgs));
    result_691+=int_get_hash_key(((int)self->mNoResultType));
    result_691+=int_get_hash_key(((int)self->mAttribute));
    result_691+=int_get_hash_key(((int)self->mFunAttribute));
    return result_691;
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
void* __right_value512 = (void*)0;
struct sBlock* result_693;
void* __right_value513 = (void*)0;
struct list$1sNode$ph* __dec_obj121;
void* __right_value514 = (void*)0;
struct sVarTable* __dec_obj122;
struct sBlock* __result_obj__352;
    if(    self==(void*)0) {
        __result_obj__351 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__351,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__351;
    }
    result_693=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj121=result_693->mNodes;
        result_693->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj121,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj122=result_693->mVarTable;
        result_693->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_693->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__352 = come_increment_ref_count(result_693);
    come_call_finalizer3(result_693,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__352,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__352;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_785;
_Bool is_type_name_flag_786;
int sline_787;
_Bool define_struct_nobody_788;
char* p_789;
int sline_790;
void* __right_value785 = (void*)0;
char* word_791;
_Bool define_function_pointer_result_function_792;
_Bool define_variable_between_brace_793;
char* p_794;
void* __right_value786 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_795=0;
char* fun_name_796=0;
_Bool err_797=0;
void* __right_value787 = (void*)0;
char* word_798;
_Bool define_function_flag_799;
char* p_800;
void* __right_value788 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_801=0;
char* fun_name_802=0;
_Bool err_803=0;
char* word_804;
void* __right_value789 = (void*)0;
char* __dec_obj130;
void* __right_value790 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
void* __right_value791 = (void*)0;
char* __dec_obj133;
_Bool define_variable_805;
char* p_806;
void* __right_value792 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* result_type_807=0;
char* fun_name_808=0;
_Bool err_809=0;
void* __right_value793 = (void*)0;
char* word_810;
void* __right_value794 = (void*)0;
char* word_811;
char* p_812;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
char* word_813;
void* __right_value798 = (void*)0;
char* __dec_obj134;
void* __right_value799 = (void*)0;
char* word_814;
void* __right_value800 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_c17_817=0;
char* Err_818=0;
void* __right_value801 = (void*)0;
char* word_819;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* node_820;
struct sNode* __result_obj__355;
void* __right_value804 = (void*)0;
struct sNode* __result_obj__356;
char* header_head_821;
void* __right_value805 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_822=0;
char* fun_name_823=0;
_Bool err_824=0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1void$ph* param_types_825;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct list$1char$ph* param_names_826;
void* __right_value810 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* param_type_827=0;
char* param_name_828=0;
_Bool err_829=0;
void* __right_value811 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_830=0;
char* Err_831=0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c19_836=0;
char* Err_837=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1void$ph* param_types2_838;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1char$ph* param_names2_839;
void* __right_value822 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var26 = (void*)0;
struct sType* param_type_840=0;
char* param_name_841=0;
_Bool err_842=0;
void* __right_value823 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_843=0;
char* Err_844=0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_846=0;
char* Err_847=0;
char* header_tail_848;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sType* result_type2_849;
struct sType* __dec_obj138;
void* __right_value829 = (void*)0;
struct list$1void$ph* __dec_obj139;
void* __right_value830 = (void*)0;
struct list$1char$ph* __dec_obj140;
_Bool var_args_850;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct list$1char$ph* param_default_parametors_851;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sFun* fun_852;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sFun* fun2_853;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value846 = (void*)0;
struct sNode* __result_obj__360;
void* __right_value847 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c22_855=0;
char* Err_856=0;
void* __right_value848 = (void*)0;
struct sNode* node_857;
struct sNode* __result_obj__361;
void* __right_value849 = (void*)0;
struct sNode* node_858;
struct sNode* __result_obj__362;
void* __right_value850 = (void*)0;
struct sNode* node_859;
char* source_tail_860;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct buffer* header_861;
struct sNode* __result_obj__363;
void* __right_value853 = (void*)0;
char* buf2_862;
void* __right_value854 = (void*)0;
struct sNode* __result_obj__364;
    info->in_top_level=(_Bool)1;
    source_head_785=info->p;
    is_type_name_flag_786=is_type_name(buf,info);
    sline_787=info->sline;
    define_struct_nobody_788=(_Bool)0;
    {
        p_789=info->p;
        sline_790=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_791=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_788=(_Bool)1;
                }
                (word_791 = come_decrement_ref_count2(word_791, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_790;
    }
    define_function_pointer_result_function_792=(_Bool)0;
    define_variable_between_brace_793=(_Bool)0;
    if(    is_type_name_flag_786) {
        p_794=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value786=backtrace_parse_type((_Bool)0,info)));
            result_type_795=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_796=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_797=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value786,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_792=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_798=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_798,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_793=(_Bool)1;
                            }
                        }
                        (word_798 = come_decrement_ref_count2(word_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_795,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_787;
    }
    define_function_flag_799=(_Bool)0;
    if(    is_type_name_flag_786&&!define_function_pointer_result_function_792&&charp_operator_not_equals(buf,"__typeof__")) {
        p_800=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value788=backtrace_parse_type((_Bool)0,info)));
            result_type_801=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_802=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_803=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value788,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(result_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_802 = come_decrement_ref_count2(fun_name_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_804=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj130=word_804;
                word_804=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_804,"extern")) {
                    __dec_obj131=word_804;
                    word_804=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj132=word_804;
                word_804=((void*)0);
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_804) {
                if(                is_type_name(word_804,info)) {
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
                        __dec_obj133=word_804;
                        word_804=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_804)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_786) {
                        define_function_flag_799=(_Bool)1;
                    }
                }
            }
            (word_804 = come_decrement_ref_count2(word_804, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_800;
        info->sline=sline_787;
    }
    define_variable_805=(_Bool)1;
    if(    is_type_name_flag_786&&!define_function_pointer_result_function_792) {
        p_806=info->p;
        info->p=head;
        if(        !is_type_name_flag_786) {
            define_variable_805=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value792=backtrace_parse_type((_Bool)0,info)));
            result_type_807=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            fun_name_808=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_809=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value792,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_810=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_805=(_Bool)1;
                            }
                        }
                        (word_810 = come_decrement_ref_count2(word_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_811=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_811,info)&&*info->p!=40) {
                            define_variable_805=(_Bool)1;
                        }
                    }
                    (word_811 = come_decrement_ref_count2(word_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_807,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_808 = come_decrement_ref_count2(fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_805=(_Bool)0;
        }
        else if(        define_variable_805) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_805=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_805=(_Bool)0;
            }
        }
        info->p=p_806;
        info->sline=sline_787;
    }
    else {
        define_variable_805=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_792) {
        p_812=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value795=parse_struct_attribute(info)));
            (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value796=parse_word(info)));
                (__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_813=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj134=word_813;
                        word_813=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_813,"extends")) {
                            define_variable_805=(_Bool)0;
                        }
                    }
                    (word_813 = come_decrement_ref_count2(word_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_805=(_Bool)0;
        }
        else if(        define_variable_805) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_805=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_805=(_Bool)0;
            }
        }
        info->p=p_812;
        info->sline=sline_787;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_814=(char*)come_increment_ref_count(parse_word(info));
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
                    come_exception_var_c17_817=multiple_assign_var21->v1;
                    Err_818=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_818)?(puts(Err_818),exit(0)):(0));
                    come_call_finalizer3(__right_value800,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_818 = come_decrement_ref_count2(Err_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_819=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_819)));
                    (word_819 = come_decrement_ref_count2(word_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_820=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result_obj__355 = come_increment_ref_count(node_820);
            ((node_820) ? node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_814 = come_decrement_ref_count2(word_814, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count2(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__355;
            ((node_820) ? node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_814 = come_decrement_ref_count2(word_814, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_788) {
    }
    else if(    define_variable_between_brace_793) {
        info->p=head;
        info->sline=sline_787;
        __result_obj__356 = come_increment_ref_count(((struct sNode*)(__right_value804=parse_global_variable(info))));
        ((__right_value804) ? __right_value804 = come_decrement_ref_count2(__right_value804, ((struct sNode*)__right_value804)->finalize, ((struct sNode*)__right_value804)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count2(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__356;
    }
    else if(    define_function_pointer_result_function_792) {
        header_head_821=info->p;
        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value805=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_822=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        fun_name_823=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_824=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value805,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_825=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2016, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            param_names_826=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2017, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value810=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_827=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                    param_name_828=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                    err_829=multiple_assign_var23->v3;
                    come_call_finalizer3(__right_value810,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_829) {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value811=err_msg(info,"parse_type is failed")));
                        come_exception_var_c18_830=multiple_assign_var24->v1;
                        Err_831=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_831)?(puts(Err_831),exit(0)):(0));
                        come_call_finalizer3(__right_value811,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_831 = come_decrement_ref_count2(Err_831, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1void$ph$p_push_back(param_types_825,(struct sType*)come_increment_ref_count(param_type_827));
                    static int num_function_pointer_result_var_name_a_835=0;
                    list$1char$ph$p_push_back(param_names_826,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_835)));
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
                        come_call_finalizer3(param_type_827,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_828 = come_decrement_ref_count2(param_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value817=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c19_836=multiple_assign_var25->v1;
                        Err_837=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        ((Err_837)?(puts(Err_837),exit(0)):(0));
                        come_call_finalizer3(__right_value817,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_837 = come_decrement_ref_count2(Err_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_827,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_828 = come_decrement_ref_count2(param_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_838=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2063, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
                param_names2_839=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2064, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var26=((struct tuple3$3sType$phchar$phbool$*)(__right_value822=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_840=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
                        param_name_841=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                        err_842=multiple_assign_var26->v3;
                        come_call_finalizer3(__right_value822,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        !err_842) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value823=err_msg(info,"parse_type is failed")));
                            come_exception_var_c20_843=multiple_assign_var27->v1;
                            Err_844=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_844)?(puts(Err_844),exit(0)):(0));
                            come_call_finalizer3(__right_value823,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_844 = come_decrement_ref_count2(Err_844, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1void$ph$p_push_back(param_types2_838,(struct sType*)come_increment_ref_count(param_type_840));
                        static int num_function_pointer_result_var_name_b_845=0;
                        list$1char$ph$p_push_back(param_names2_839,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_845)));
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
                            come_call_finalizer3(param_type_840,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_841 = come_decrement_ref_count2(param_name_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value826=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c21_846=multiple_assign_var28->v1;
                            Err_847=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            ((Err_847)?(puts(Err_847),exit(0)):(0));
                            come_call_finalizer3(__right_value826,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_847 = come_decrement_ref_count2(Err_847, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_840,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_841 = come_decrement_ref_count2(param_name_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_848=info->p;
                result_type2_849=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2106, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj138=result_type2_849->mResultType;
                result_type2_849->mResultType=(struct sType*)come_increment_ref_count(result_type_822);
                come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj139=result_type2_849->mParamTypes;
                result_type2_849->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types2_838));
                come_call_finalizer3(__dec_obj139,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj140=result_type2_849->mParamNames;
                result_type2_849->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_839));
                come_call_finalizer3(__dec_obj140,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_849->mVarArgs=(_Bool)0;
                result_type2_849->mStatic=(_Bool)0;
                var_args_850=(_Bool)0;
                param_default_parametors_851=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2116, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_852=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2118, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_823)),(struct sType*)come_increment_ref_count(result_type2_849),(struct list$1void$ph*)come_increment_ref_count(param_types_825),(struct list$1char$ph*)come_increment_ref_count(param_names_826),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_851),(_Bool)1,var_args_850,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_853=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value838=__builtin_string(fun_name_823)))));
                (__right_value838 = come_decrement_ref_count2(__right_value838, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_853==((void*)0)||fun2_853->mExternal) {
                    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_823)),(struct sFun*)come_increment_ref_count(fun_852));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2131, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value842=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2131, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_852),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result_obj__360 = come_increment_ref_count(((struct sNode*)(__right_value846=_inf_value2)));
                come_call_finalizer3(param_types2_838,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_839,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_849,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_851,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_852,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_853,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_825,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_826,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_822,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_823 = come_decrement_ref_count2(fun_name_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value842,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                ((__right_value846) ? __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__360) ? __result_obj__360 = come_decrement_ref_count2(__result_obj__360, ((struct sNode*)__result_obj__360)->finalize, ((struct sNode*)__result_obj__360)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__360;
                come_call_finalizer3(param_types2_838,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_839,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_849,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_851,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_852,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_853,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value847=err_msg(info,"require (")));
                come_exception_var_c22_855=multiple_assign_var29->v1;
                Err_856=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_856)?(puts(Err_856),exit(0)):(0));
                come_call_finalizer3(__right_value847,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_856 = come_decrement_ref_count2(Err_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_825,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_826,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_822,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_823 = come_decrement_ref_count2(fun_name_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_787;
        node_857=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__361 = come_increment_ref_count(node_857);
        ((node_857) ? node_857 = come_decrement_ref_count2(node_857, ((struct sNode*)node_857)->finalize, ((struct sNode*)node_857)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__361) ? __result_obj__361 = come_decrement_ref_count2(__result_obj__361, ((struct sNode*)__result_obj__361)->finalize, ((struct sNode*)__result_obj__361)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__361;
        ((node_857) ? node_857 = come_decrement_ref_count2(node_857, ((struct sNode*)node_857)->finalize, ((struct sNode*)node_857)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_799) {
        info->p=head;
        info->sline=sline_787;
        node_858=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__362 = come_increment_ref_count(node_858);
        ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count2(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__362;
        ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_805) {
        info->p=head;
        info->sline=sline_787;
        node_859=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_860=info->p;
        header_861=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2163, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_861,source_head_785,source_tail_860-source_head_785);
        __result_obj__363 = come_increment_ref_count(node_859);
        ((node_859) ? node_859 = come_decrement_ref_count2(node_859, ((struct sNode*)node_859)->finalize, ((struct sNode*)node_859)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_861,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count2(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__363;
        ((node_859) ? node_859 = come_decrement_ref_count2(node_859, ((struct sNode*)node_859)->finalize, ((struct sNode*)node_859)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_861,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_787;
    buf2_862=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__364 = come_increment_ref_count(((struct sNode*)(__right_value854=top_level_v98(buf2_862,head,head_sline,info))));
    (buf2_862 = come_decrement_ref_count2(buf2_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value854) ? __right_value854 = come_decrement_ref_count2(__right_value854, ((struct sNode*)__right_value854)->finalize, ((struct sNode*)__right_value854)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
struct list_item$1char$ph* it_815;
struct list_item$1char$ph* prev_it_816;
struct list$1char$ph* __result_obj__354;
    it_815=self->head;
    while(it_815!=((void*)0)) {
        prev_it_816=it_815;
        it_815=it_815->next;
        come_call_finalizer3(prev_it_816,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__354 = self;
    return __result_obj__354;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value812 = (void*)0;
struct list_item$1void$ph* litem_832;
void* __dec_obj135;
void* __right_value813 = (void*)0;
struct list_item$1void$ph* litem_833;
void* __dec_obj136;
void* __right_value814 = (void*)0;
struct list_item$1void$ph* litem_834;
void* __dec_obj137;
struct list$1void$ph* __result_obj__357;
    if(    self->len==0) {
        litem_832=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value812=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_832->prev=((void*)0);
        litem_832->next=((void*)0);
        __dec_obj135=litem_832->item;
        litem_832->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj135,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_832;
        self->head=litem_832;
    }
    else if(    self->len==1) {
        litem_833=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value813=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_833->prev=self->head;
        litem_833->next=((void*)0);
        __dec_obj136=litem_833->item;
        litem_833->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj136,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_833;
        self->head->next=litem_833;
    }
    else {
        litem_834=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value814=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_834->prev=self->tail;
        litem_834->next=((void*)0);
        __dec_obj137=litem_834->item;
        litem_834->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj137,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_834;
        self->tail=litem_834;
    }
    self->len++;
    __result_obj__357 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__357;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__358;
void* __right_value843 = (void*)0;
struct sFunNode* result_854;
void* __right_value844 = (void*)0;
char* __dec_obj141;
void* __right_value845 = (void*)0;
struct sFun* __dec_obj142;
struct sFunNode* __result_obj__359;
    if(    self==(void*)0) {
        __result_obj__358 = (void*)0;
        return __result_obj__358;
    }
    result_854=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_854->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj141=result_854->sname;
        result_854->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_854->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj142=result_854->mFun;
        result_854->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj142,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__359 = result_854;
    come_call_finalizer3(result_854,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__359;
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_863;
int caller_line_864;
char* caller_sname_865;
_Bool comma_instead_of_semicolon_866;
char* last_code_867;
char* __dec_obj143;
char* last_code2_868;
char* __dec_obj144;
void* __right_value855 = (void*)0;
char* sname_top_869;
int sline_top_870;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sFun* funX_871;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__368;
void* __right_value862 = (void*)0;
struct sType* result_type_874;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1void$ph* param_types_875;
struct list$1void$ph* o2_saved_876;
struct sType* it_877;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sType* param_type_878;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct list$1char$ph* param_names_879;
void* __right_value869 = (void*)0;
struct list$1char$ph* param_default_parametors_880;
char* p_881;
int sline_882;
char* sname_883;
char* head_884;
struct buffer* source_885;
void* __right_value870 = (void*)0;
struct buffer* __dec_obj147;
struct sType* generics_type_saved_886;
void* __right_value871 = (void*)0;
struct sType* __dec_obj148;
struct list$1char$ph* method_generics_type_names_887;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct list$1char$ph* __dec_obj149;
struct list$1char$ph* o2_saved_888;
char* it_889;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1char$ph* __dec_obj150;
char* __dec_obj151;
void* __right_value876 = (void*)0;
struct sBlock* block_890;
struct buffer* __dec_obj152;
char* __dec_obj153;
_Bool var_args_891;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sFun* fun_892;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value884 = (void*)0;
struct sNode* node_893;
_Bool in_generics_fun_894;
_Bool Value_895;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__369;
struct sType* __dec_obj154;
struct list$1char$ph* __dec_obj155;
void* __right_value888 = (void*)0;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__370;
    caller_fun_863=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_864=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_865=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_866=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_867=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_868=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_869=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_870=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_871=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value856=__builtin_string(fun_name)))));
    (__right_value856 = come_decrement_ref_count2(__right_value856, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_871) {
        __result_obj__368 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value861=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2202, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_867 = come_decrement_ref_count2(last_code_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_868 = come_decrement_ref_count2(last_code2_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_869 = come_decrement_ref_count2(sname_top_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_871,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value861,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__368,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__368;
    }
    result_type_874=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_875=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2208, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_876=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_877=((struct sType*)list$1void$ph$p_begin((o2_saved_876)));    !list$1void$ph$p_end((o2_saved_876));    it_877=((struct sType*)list$1void$ph$p_next((o2_saved_876)))    ){
        param_type_878=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value865=come_call_cloner(sType_clone, it_877))),generics_type,info));
        come_call_finalizer3(__right_value865,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_add(param_types_875,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_878)));
        come_call_finalizer3(param_type_878,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_876,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_879=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_880=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_881=info->p;
    sline_882=info->sline;
    sname_883=(char*)come_increment_ref_count(info->sname);
    head_884=info->head;
    source_885=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj147=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_886=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj148=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_887=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj149=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2236, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj149,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_888=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_889=list$1char$ph$p_begin((o2_saved_888));    !list$1char$ph$p_end((o2_saved_888));    it_889=list$1char$ph$p_next((o2_saved_888))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_889)));
    }
    come_call_finalizer3(o2_saved_888,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj150=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj150,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj151=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_890=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_884;
    __dec_obj152=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_885);
    come_call_finalizer3(__dec_obj152,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_881;
    info->sline=sline_882;
    __dec_obj153=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_883);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_874->mInline=(_Bool)0;
    result_type_874->mStatic=(_Bool)0;
    result_type_874->mUniq=(_Bool)0;
    var_args_891=generics_fun->mVarArgs;
    fun_892=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2260, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_874),(struct list$1void$ph*)come_increment_ref_count(param_types_875),(struct list$1char$ph*)come_increment_ref_count(param_names_879),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_880),(_Bool)0,var_args_891,(struct sBlock*)come_increment_ref_count(block_890),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_892));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2267, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value883=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2267, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_892),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_893=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value883,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_894=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_895=node_compile(node_893,info);
    if(    !Value_895) {
        __result_obj__369 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value887=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2272, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_867 = come_decrement_ref_count2(last_code_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_868 = come_decrement_ref_count2(last_code2_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_869 = come_decrement_ref_count2(sname_top_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_871,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_875,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_879,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_880,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_883 = come_decrement_ref_count2(sname_883, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_885,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_886,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_887,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_890,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_892,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_893) ? node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value887,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__369,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__369;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_894;
    __dec_obj154=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_886);
    come_call_finalizer3(__dec_obj154,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj155=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_887);
    come_call_finalizer3(__dec_obj155,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj156=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_869));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_870;
    __dec_obj157=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_867);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj158=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_868);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_863;
    info->caller_line=caller_line_864;
    info->caller_sname=caller_sname_865;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_866;
    __result_obj__370 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value891=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2292, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_867 = come_decrement_ref_count2(last_code_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_868 = come_decrement_ref_count2(last_code2_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_869 = come_decrement_ref_count2(sname_top_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_871,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_875,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_879,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_880,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_883 = come_decrement_ref_count2(sname_883, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_885,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_886,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_887,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_890,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_892,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_893) ? node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value891,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
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
void* __right_value858 = (void*)0;
struct tuple2$2char$phbool$* result_872;
void* __right_value859 = (void*)0;
char* __dec_obj145;
struct tuple2$2char$phbool$* __result_obj__366;
    if(    self==(void*)0) {
        __result_obj__365 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__365,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__365;
    }
    result_872=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj145=result_872->v1;
        result_872->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_872->v2=self->v2;
    }
    __result_obj__366 = come_increment_ref_count(result_872);
    come_call_finalizer3(result_872,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__366,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__366;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_873;
    result_873=0;
    result_873+=int_get_hash_key(((int)self->v1));
    result_873+=int_get_hash_key(((int)self->v2));
    return result_873;
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
struct sFun* caller_fun_896;
int caller_line_897;
char* caller_sname_898;
_Bool comma_instead_of_semicolon_899;
char* last_code_900;
char* __dec_obj159;
char* last_code2_901;
char* __dec_obj160;
void* __right_value892 = (void*)0;
char* sname_top_902;
int sline_top_903;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sFun* funX_904;
_Bool __result_obj__371;
void* __right_value895 = (void*)0;
struct sType* result_type_905;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1void$ph* param_types_906;
struct list$1void$ph* o2_saved_907;
struct sType* it_908;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sType* param_type_909;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1char$ph* param_names_910;
void* __right_value902 = (void*)0;
struct list$1char$ph* param_default_parametors_911;
char* p_912;
int sline_913;
char* sname_914;
char* head_915;
struct buffer* source_916;
void* __right_value903 = (void*)0;
struct buffer* __dec_obj161;
struct list$1char$ph* method_generics_type_names_917;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct list$1char$ph* __dec_obj162;
struct list$1char$ph* o2_saved_918;
char* it_919;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1char$ph* __dec_obj163;
char* __dec_obj164;
void* __right_value908 = (void*)0;
struct sBlock* block_920;
struct buffer* __dec_obj165;
char* __dec_obj166;
_Bool generate__921;
_Bool var_args_922;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sFun* fun_923;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value917 = (void*)0;
struct sNode* node_924;
_Bool Value_925;
void* __if_result__1_926 = (void*)0;
_Bool __result_obj__372;
struct list$1char$ph* __dec_obj167;
void* __right_value918 = (void*)0;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
_Bool __result_obj__373;
    caller_fun_896=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_897=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_898=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_899=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_900=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj159=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_901=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj160=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_902=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_903=info->sline;
    funX_904=((struct sFun*)((void*)(__right_value894=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value893=__builtin_string(fun_name)))))));
    (__right_value893 = come_decrement_ref_count2(__right_value893, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value894,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    funX_904) {
        __result_obj__371 = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_900 = come_decrement_ref_count2(last_code_900, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_901 = come_decrement_ref_count2(last_code2_901, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_902 = come_decrement_ref_count2(sname_top_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__371;
    }
    result_type_905=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_906=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05function.c", 2321, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_907=(struct list$1void$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_908=((struct sType*)list$1void$ph$p_begin((o2_saved_907)));    !list$1void$ph$p_end((o2_saved_907));    it_908=((struct sType*)list$1void$ph$p_next((o2_saved_907)))    ){
        param_type_909=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value898=come_call_cloner(sType_clone, it_908))),info));
        come_call_finalizer3(__right_value898,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_add(param_types_906,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_909)));
        come_call_finalizer3(param_type_909,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_907,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_910=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_911=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_912=info->p;
    sline_913=info->sline;
    sname_914=(char*)come_increment_ref_count(info->sname);
    head_915=info->head;
    source_916=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj161=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj161,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_917=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj162=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2343, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj162,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_918=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_919=list$1char$ph$p_begin((o2_saved_918));    !list$1char$ph$p_end((o2_saved_918));    it_919=list$1char$ph$p_next((o2_saved_918))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_919)));
    }
    come_call_finalizer3(o2_saved_918,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj163=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj163,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj164=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_920=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_915;
    __dec_obj165=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_916);
    come_call_finalizer3(__dec_obj165,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_912;
    info->sline=sline_913;
    __dec_obj166=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_914);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_905->mInline=(_Bool)0;
    result_type_905->mStatic=(_Bool)0;
    result_type_905->mUniq=(_Bool)0;
    generate__921=(_Bool)0;
    if(    result_type_905->mGenerate) {
        result_type_905->mGenerate=(_Bool)0;
        generate__921=(_Bool)1;
    }
    var_args_922=generics_fun->mVarArgs;
    fun_923=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2373, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_905),(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types_906)),(struct list$1char$ph*)come_increment_ref_count(param_names_910),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_911),(_Bool)0,var_args_922,(struct sBlock*)come_increment_ref_count(block_920),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__921,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_923));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2380, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value916=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2380, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_923),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_924=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value916,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_925=node_compile(node_924,info);
    if(    !Value_925) {
        __result_obj__372 = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_900 = come_decrement_ref_count2(last_code_900, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_901 = come_decrement_ref_count2(last_code2_901, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_902 = come_decrement_ref_count2(sname_top_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_905,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_906,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_910,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_911,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_914 = come_decrement_ref_count2(sname_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_916,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_917,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_920,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_923,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_924) ? node_924 = come_decrement_ref_count2(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__372;
    }
    else {
        __if_result__1_926=(void*)(Value_925);
;
    }
    __dec_obj167=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_917);
    come_call_finalizer3(__dec_obj167,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj168=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_902));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_903;
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_900);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_901);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_896;
    info->caller_line=caller_line_897;
    info->caller_sname=caller_sname_898;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_899;
    __result_obj__373 = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_900 = come_decrement_ref_count2(last_code_900, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_901 = come_decrement_ref_count2(last_code2_901, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_902 = come_decrement_ref_count2(sname_top_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_905,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_906,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_910,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_911,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_914 = come_decrement_ref_count2(sname_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_916,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_917,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_920,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_923,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_924) ? node_924 = come_decrement_ref_count2(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__373;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_927;
char* source_head_928;
void* __right_value919 = (void*)0;
char* attribute_929;
struct sType* result_type_930;
char* var_name_931;
_Bool constructor__932;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sType* __dec_obj171;
void* __right_value922 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* result_type2_933=0;
char* var_name2_934=0;
_Bool err_935=0;
struct sType* __dec_obj172;
char* __dec_obj173;
_Bool method_definition_936;
char* p_937;
int sline_938;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct buffer* buf2_939;
char* fun_name_940;
char* base_fun_name_941;
void* __right_value925 = (void*)0;
char* __dec_obj174;
void* __right_value926 = (void*)0;
char* __dec_obj175;
void* __right_value927 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* obj_type_942=0;
char* name_943=0;
_Bool err_944=0;
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
struct list$1void$ph* param_types_945=0;
struct list$1char$ph* param_names_946=0;
struct list$1char$ph* param_default_parametors_947=0;
_Bool var_args_948=0;
char* header_tail_949;
int version_950;
int n_951;
_Bool in_top_level_952;
void* __right_value935 = (void*)0;
struct sBlock* block_953;
void* __right_value936 = (void*)0;
char* fun_name_955;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sFun* fun_956;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sFun* fun2_957;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value949 = (void*)0;
struct sNode* __result_obj__376;
void* __right_value950 = (void*)0;
char* none_generics_name_959;
void* __right_value951 = (void*)0;
char* generics_sname_960;
int generics_sline_961;
void* __right_value952 = (void*)0;
char* block_962;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sGenericsFun* fun_965;
void* __right_value970 = (void*)0;
char* fun_name3_966;
void* __right_value971 = (void*)0;
struct sNode* __result_obj__379;
void* __right_value972 = (void*)0;
char* generics_sname_967;
int generics_sline_968;
void* __right_value973 = (void*)0;
char* block_969;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sGenericsFun* fun_970;
void* __right_value980 = (void*)0;
char* fun_name3_971;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct sNode* __result_obj__380;
char* source_tail_972;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct buffer* header_973;
void* __right_value985 = (void*)0;
char* name_974;
void* __right_value986 = (void*)0;
char* name_975;
int i_976;
void* __right_value987 = (void*)0;
struct sType* param_type_977;
void* __right_value988 = (void*)0;
char* param_name_978;
void* __right_value989 = (void*)0;
char* default_parametor_979;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
char* impl_name_980;
void* __right_value993 = (void*)0;
char* result_type_name_981;
void* __right_value994 = (void*)0;
char* impl_name_982;
void* __right_value995 = (void*)0;
char* result_type_name_983;
int i_984;
void* __right_value996 = (void*)0;
struct sType* param_type_985;
void* __right_value997 = (void*)0;
char* param_name_986;
void* __right_value998 = (void*)0;
char* default_parametor_987;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
char* new_fun_name_988;
void* __right_value1003 = (void*)0;
char* id_989;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
char* id_990;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sBlock* block_991;
_Bool static_fun_992;
_Bool inline_fun_993;
_Bool uniq_fun_994;
_Bool generate_fun_995;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
char* new_fun_name_996;
void* __right_value1010 = (void*)0;
char* __dec_obj193;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sFun* fun_997;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sFun* fun2_998;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1022 = (void*)0;
struct sNode* __result_obj__381;
void* __right_value1023 = (void*)0;
char* new_fun_name_999;
void* __right_value1024 = (void*)0;
char* __dec_obj194;
char* source_tail_1000;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct buffer* header_1001;
_Bool result_type_static_1002;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
struct sFun* fun_1003;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct sFun* fun2_1004;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
char* id_1005;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1038 = (void*)0;
struct sNode* __result_obj__382;
void* __right_value1039 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_1006=0;
char* fun_attribute_1007=0;
void* __right_value1040 = (void*)0;
char* __dec_obj195;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct buffer* header_1008;
char* source_tail_1009;
_Bool result_type_static_1010;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sFun* fun_1011;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct sFun* fun2_1012;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
char* id_1013;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1053 = (void*)0;
struct sNode* __result_obj__383;
void* __right_value1054 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c23_1014=0;
char* Err_1015=0;
struct sNode* __result_obj__384;
fun_name_940 = (void*)0;
    header_head_927=info->p;
    source_head_928=info->p;
    attribute_929=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_930=((void*)0);
    var_name_931=((void*)0);
    constructor__932=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value920=parse_word(info)));
        (__right_value920 = come_decrement_ref_count2(__right_value920, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj171=result_type_930;
        result_type_930=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_930->mHeap=(_Bool)1;
        constructor__932=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value922=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_933=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        var_name2_934=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_935=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value922,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj172=result_type_930;
        result_type_930=(struct sType*)come_increment_ref_count(result_type2_933);
        come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj173=var_name_931;
        var_name_931=(char*)come_increment_ref_count(var_name2_934);
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_935) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_933,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_934 = come_decrement_ref_count2(var_name2_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_936=(_Bool)0;
    {
        p_937=info->p;
        sline_938=info->sline;
        buf2_939=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2446, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_939,*info->p);
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
        if(        buffer_length(buf2_939)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_936=(_Bool)1;
        }
        info->p=p_937;
        info->sline=sline_938;
        come_call_finalizer3(buf2_939,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_941=((void*)0);
    if(    constructor__932) {
        __dec_obj174=base_fun_name_941;
        base_fun_name_941=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj175=fun_name_940;
        fun_name_940=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_941,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_936) {
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value927=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_942=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_943=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_944=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value927,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        !err_944) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj176=base_fun_name_941;
        base_fun_name_941=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=fun_name_940;
        fun_name_940=(char*)come_increment_ref_count(create_method_name(obj_type_942,(_Bool)0,base_fun_name_941,info,(_Bool)1));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_942,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_943 = come_decrement_ref_count2(name_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj178=base_fun_name_941;
        base_fun_name_941=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj179=fun_name_940;
        fun_name_940=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_941,info,(_Bool)1));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj180=fun_name_940;
        fun_name_940=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj181=base_fun_name_941;
        base_fun_name_941=(char*)come_increment_ref_count(__builtin_string(fun_name_940));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_941,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var32=((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value934=parse_params(info,constructor__932)));
    param_types_945=(struct list$1void$ph*)come_increment_ref_count(multiple_assign_var32->v1);
    param_names_946=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v2);
    param_default_parametors_947=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v3);
    var_args_948=multiple_assign_var32->v4;
    come_call_finalizer3(__right_value934,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    header_tail_949=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_941,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_950=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_951=0;
        while(xisdigit(*info->p)) {
            n_951=n_951*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_950=n_951;
    }
    in_top_level_952=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_941,"lambda")) {
        block_953=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_954=0;
        lambda_num_954++;
        fun_name_955=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_954));
        result_type_930->mInline=(_Bool)0;
        result_type_930->mStatic=(_Bool)0;
        result_type_930->mUniq=(_Bool)0;
        result_type_930->mGenerate=(_Bool)0;
        fun_956=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2544, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_955)),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1void$ph*)come_increment_ref_count(param_types_945),(struct list$1char$ph*)come_increment_ref_count(param_names_946),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_947),(_Bool)0,var_args_948,(struct sBlock*)come_increment_ref_count(block_953),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_957=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value942=__builtin_string(fun_name_955)))));
        (__right_value942 = come_decrement_ref_count2(__right_value942, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_957==((void*)0)||fun2_957->mExternal) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_955)),(struct sFun*)come_increment_ref_count(fun_956));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2554, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value946=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2554, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_956,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__376 = come_increment_ref_count(((struct sNode*)(__right_value949=_inf_value5)));
        come_call_finalizer3(block_953,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_955 = come_decrement_ref_count2(fun_name_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_956,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_957,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_929 = come_decrement_ref_count2(attribute_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_931 = come_decrement_ref_count2(var_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_940 = come_decrement_ref_count2(fun_name_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_941 = come_decrement_ref_count2(base_fun_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_945,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_946,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_947,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value946,sLambdaNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value949) ? __right_value949 = come_decrement_ref_count2(__right_value949, ((struct sNode*)__right_value949)->finalize, ((struct sNode*)__right_value949)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__376) ? __result_obj__376 = come_decrement_ref_count2(__result_obj__376, ((struct sNode*)__result_obj__376)->finalize, ((struct sNode*)__result_obj__376)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__376;
        come_call_finalizer3(block_953,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_955 = come_decrement_ref_count2(fun_name_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_956,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_957,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_959=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_960=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_961=info->sline;
        block_962=(char*)come_increment_ref_count(skip_block(info));
        fun_965=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2564, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value965=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value966=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1void$ph*)come_increment_ref_count(param_types_945),(struct list$1char$ph*)come_increment_ref_count(param_names_946),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_947),var_args_948,(char*)come_increment_ref_count(block_962),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_960)),generics_sline_961));
        come_call_finalizer3(__right_value965,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value966,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_966=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_959,base_fun_name_941));
        map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_966)),(struct sGenericsFun*)come_increment_ref_count(fun_965));
        __result_obj__379 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_959 = come_decrement_ref_count2(none_generics_name_959, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_960 = come_decrement_ref_count2(generics_sname_960, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_962 = come_decrement_ref_count2(block_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_965,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_966 = come_decrement_ref_count2(fun_name3_966, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_929 = come_decrement_ref_count2(attribute_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_931 = come_decrement_ref_count2(var_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_940 = come_decrement_ref_count2(fun_name_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_941 = come_decrement_ref_count2(base_fun_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_945,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_946,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_947,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__379) ? __result_obj__379 = come_decrement_ref_count2(__result_obj__379, ((struct sNode*)__result_obj__379)->finalize, ((struct sNode*)__result_obj__379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__379;
        (none_generics_name_959 = come_decrement_ref_count2(none_generics_name_959, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_960 = come_decrement_ref_count2(generics_sname_960, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_962 = come_decrement_ref_count2(block_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_965,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_966 = come_decrement_ref_count2(fun_name3_966, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_967=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_968=info->sline;
        block_969=(char*)come_increment_ref_count(skip_block(info));
        fun_970=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2578, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value975=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value976=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1void$ph*)come_increment_ref_count(param_types_945),(struct list$1char$ph*)come_increment_ref_count(param_names_946),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_947),var_args_948,(char*)come_increment_ref_count(block_969),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_967)),generics_sline_968));
        come_call_finalizer3(__right_value975,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value976,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_971=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_941));
        if(        method_definition_936) {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sGenericsFun*)come_increment_ref_count(fun_970));
        }
        else {
            map$2void$phvoid$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_971)),(struct sGenericsFun*)come_increment_ref_count(fun_970));
        }
        __result_obj__380 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_967 = come_decrement_ref_count2(generics_sname_967, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_969 = come_decrement_ref_count2(block_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_970,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_971 = come_decrement_ref_count2(fun_name3_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_929 = come_decrement_ref_count2(attribute_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_931 = come_decrement_ref_count2(var_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_940 = come_decrement_ref_count2(fun_name_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_941 = come_decrement_ref_count2(base_fun_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_945,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_946,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_947,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count2(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        (generics_sname_967 = come_decrement_ref_count2(generics_sname_967, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_969 = come_decrement_ref_count2(block_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_970,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_971 = come_decrement_ref_count2(fun_name3_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    *info->p==123) {
        source_tail_972=info->p-1;
        header_973=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2594, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__932) {
            if(            list$1void$ph$p_length(param_types_945)==1) {
                name_974=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_973,"extern %s*%% %s*::initialize(%s*%% self);\n",name_974,name_974,name_974);
                (name_974 = come_decrement_ref_count2(name_974, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                name_975=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_973,"extern %s*%% %s*::initialize(%s*%% self, ",name_975,name_975,name_975);
                for(                i_976=1;                i_976<list$1void$ph$p_length(param_types_945);                i_976++                ){
                    param_type_977=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_945,i_976));
                    param_name_978=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_946,i_976));
                    default_parametor_979=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_947,i_976));
                    if(                    default_parametor_979) {
                        buffer_append_format(header_973,"extern %s %s=%s",((char*)(__right_value990=make_come_type_name_string_no_solved(param_type_977,(_Bool)0,info))),param_name_978,default_parametor_979);
                        (__right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_973,"extern %s %s",((char*)(__right_value991=make_come_type_name_string_no_solved(param_type_977,(_Bool)0,info))),param_name_978);
                        (__right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_976!=list$1void$ph$p_length(param_types_945)-1) {
                        buffer_append_str(header_973,",");
                    }
                    come_call_finalizer3(param_type_977,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_978 = come_decrement_ref_count2(param_name_978, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_979 = come_decrement_ref_count2(default_parametor_979, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_973,");\n");
                (name_975 = come_decrement_ref_count2(name_975, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1void$ph$p_length(param_types_945)==1) {
                impl_name_980=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_981=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_930,(_Bool)0,info));
                buffer_append_format(header_973,"extern %s %s*::%s(%s* self);\n",result_type_name_981,impl_name_980,base_fun_name_941,impl_name_980);
                (impl_name_980 = come_decrement_ref_count2(impl_name_980, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_981 = come_decrement_ref_count2(result_type_name_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                impl_name_982=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_983=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_930,(_Bool)0,info));
                buffer_append_format(header_973,"extern %s %s*::%s(%s* self, ",result_type_name_983,impl_name_982,base_fun_name_941,impl_name_982);
                for(                i_984=1;                i_984<list$1void$ph$p_length(param_types_945);                i_984++                ){
                    param_type_985=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(param_types_945,i_984));
                    param_name_986=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_946,i_984));
                    default_parametor_987=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_947,i_984));
                    if(                    default_parametor_987) {
                        buffer_append_format(header_973,"extern %s %s=%s",((char*)(__right_value999=make_come_type_name_string_no_solved(param_type_985,(_Bool)0,info))),param_name_986,default_parametor_987);
                        (__right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_973,"extern %s %s",((char*)(__right_value1000=make_come_type_name_string_no_solved(param_type_985,(_Bool)0,info))),param_name_986);
                        (__right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_984!=list$1void$ph$p_length(param_types_945)-1) {
                        buffer_append_str(header_973,",");
                    }
                    come_call_finalizer3(param_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_986 = come_decrement_ref_count2(param_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_987 = come_decrement_ref_count2(default_parametor_987, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_973,");\n");
                (impl_name_982 = come_decrement_ref_count2(impl_name_982, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_983 = come_decrement_ref_count2(result_type_name_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append(header_973,source_head_928,source_tail_972-source_head_928);
            buffer_append_str(header_973,";\n");
        }
        if(        !result_type_930->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_950>0) {
                    new_fun_name_988=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1001=__builtin_string(fun_name_940))),version_950));
                    (__right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    id_989=(char*)come_increment_ref_count(__builtin_string(new_fun_name_988));
                    add_come_code_at_come_header(info,id_989,"%s",((char*)(__right_value1004=buffer_to_string(header_973))));
                    (__right_value1004 = come_decrement_ref_count2(__right_value1004, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_988 = come_decrement_ref_count2(new_fun_name_988, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_989 = come_decrement_ref_count2(id_989, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    id_990=(char*)come_increment_ref_count(__builtin_string(fun_name_940));
                    add_come_code_at_come_header(info,id_990,"%s",((char*)(__right_value1006=buffer_to_string(header_973))));
                    (__right_value1006 = come_decrement_ref_count2(__right_value1006, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_990 = come_decrement_ref_count2(id_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        block_991=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__932,(_Bool)1));
        static_fun_992=(_Bool)0;
        if(        result_type_930->mStatic) {
            result_type_930->mStatic=(_Bool)0;
            result_type_930->mUniq=(_Bool)0;
            static_fun_992=(_Bool)1;
        }
        inline_fun_993=(_Bool)0;
        if(        result_type_930->mInline) {
            result_type_930->mInline=(_Bool)0;
            result_type_930->mUniq=(_Bool)0;
            inline_fun_993=(_Bool)1;
        }
        uniq_fun_994=(_Bool)0;
        if(        result_type_930->mUniq) {
            result_type_930->mUniq=(_Bool)0;
            result_type_930->mInline=(_Bool)0;
            result_type_930->mStatic=(_Bool)0;
            uniq_fun_994=(_Bool)1;
        }
        generate_fun_995=(_Bool)0;
        if(        result_type_930->mUniq) {
            result_type_930->mUniq=(_Bool)0;
            result_type_930->mInline=(_Bool)0;
            result_type_930->mStatic=(_Bool)0;
            generate_fun_995=(_Bool)1;
        }
        if(        version_950>0) {
            new_fun_name_996=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1008=__builtin_string(fun_name_940))),version_950));
            (__right_value1008 = come_decrement_ref_count2(__right_value1008, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj193=fun_name_940;
            fun_name_940=(char*)come_increment_ref_count(__builtin_string(new_fun_name_996));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_996 = come_decrement_ref_count2(new_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_997=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2712, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1void$ph*)come_increment_ref_count(param_types_945),(struct list$1char$ph*)come_increment_ref_count(param_names_946),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_947),(_Bool)0,var_args_948,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_991)),static_fun_992,info,inline_fun_993,uniq_fun_994,generate_fun_995,(char*)come_increment_ref_count(attribute_929),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sFun*)come_increment_ref_count(fun_997));
        }
        else {
            fun2_998=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1017=__builtin_string(fun_name_940)))));
            (__right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_998==((void*)0)||fun2_998->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sFun*)come_increment_ref_count(fun_997));
            }
            come_call_finalizer3(fun2_998,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2730, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1021=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2730, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_997),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__381 = come_increment_ref_count(((struct sNode*)(__right_value1022=_inf_value6)));
        come_call_finalizer3(header_973,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_991,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_997,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_929 = come_decrement_ref_count2(attribute_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_931 = come_decrement_ref_count2(var_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_940 = come_decrement_ref_count2(fun_name_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_941 = come_decrement_ref_count2(base_fun_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_945,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_946,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_947,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1021,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1022) ? __right_value1022 = come_decrement_ref_count2(__right_value1022, ((struct sNode*)__right_value1022)->finalize, ((struct sNode*)__right_value1022)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count2(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
        come_call_finalizer3(header_973,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_991,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_997,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_950>0) {
            new_fun_name_999=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_940,version_950));
            __dec_obj194=fun_name_940;
            fun_name_940=(char*)come_increment_ref_count(__builtin_string(new_fun_name_999));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_999 = come_decrement_ref_count2(new_fun_name_999, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_1000=info->p;
            header_1001=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2743, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_1001,source_head_928,source_tail_1000-source_head_928);
            skip_spaces_and_lf(info);
            result_type_static_1002=result_type_930->mStatic;
            result_type_930->mStatic=(_Bool)0;
            result_type_930->mUniq=(_Bool)0;
            result_type_930->mInline=(_Bool)0;
            result_type_930->mGenerate=(_Bool)0;
            fun_1003=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2754, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1void$ph*)come_increment_ref_count(param_types_945),(struct list$1char$ph*)come_increment_ref_count(param_names_946),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_947),(_Bool)1,var_args_948,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_929),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_1004=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1031=__builtin_string(fun_name_940)))));
            (__right_value1031 = come_decrement_ref_count2(__right_value1031, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1004==((void*)0)||fun2_1004->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sFun*)come_increment_ref_count(fun_1003));
            }
            if(            !result_type_static_1002) {
                if(                !info->no_output_come_code) {
                    id_1005=(char*)come_increment_ref_count(__builtin_string(fun_name_940));
                    add_come_code_at_come_header(info,id_1005,"%s",((char*)(__right_value1035=buffer_to_string(header_1001))));
                    (__right_value1035 = come_decrement_ref_count2(__right_value1035, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1005 = come_decrement_ref_count2(id_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2774, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1037=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2774, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1003),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__382 = come_increment_ref_count(((struct sNode*)(__right_value1038=_inf_value7)));
            come_call_finalizer3(header_1001,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1003,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1004,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_929 = come_decrement_ref_count2(attribute_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_931 = come_decrement_ref_count2(var_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_940 = come_decrement_ref_count2(fun_name_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_941 = come_decrement_ref_count2(base_fun_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_945,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_946,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_947,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1037,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1038) ? __right_value1038 = come_decrement_ref_count2(__right_value1038, ((struct sNode*)__right_value1038)->finalize, ((struct sNode*)__right_value1038)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count2(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__382;
            come_call_finalizer3(header_1001,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1003,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1004,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value1039=parse_function_attribute(info)));
            asm_fun_1006=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute_1007=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value1039,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            string_operator_not_equals(asm_fun_1006,"")) {
                __dec_obj195=fun_name_940;
                fun_name_940=(char*)come_increment_ref_count(__builtin_string(asm_fun_1006));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_1008=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2783, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_1009=info->p;
                buffer_append(header_1008,source_head_928,source_tail_1009-source_head_928);
                skip_spaces_and_lf(info);
            }
            result_type_static_1010=result_type_930->mStatic;
            result_type_930->mStatic=(_Bool)0;
            result_type_930->mUniq=(_Bool)0;
            result_type_930->mInline=(_Bool)0;
            result_type_930->mGenerate=(_Bool)0;
            fun_1011=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2797, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1void$ph*)come_increment_ref_count(param_types_945),(struct list$1char$ph*)come_increment_ref_count(param_names_946),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_947),(_Bool)1,var_args_948,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_929),(char*)come_increment_ref_count(fun_attribute_1007)));
            fun2_1012=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1046=__builtin_string(fun_name_940)))));
            (__right_value1046 = come_decrement_ref_count2(__right_value1046, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1012==((void*)0)||fun2_1012->mExternal) {
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_940)),(struct sFun*)come_increment_ref_count(fun_1011));
            }
            if(            !result_type_static_1010) {
                if(                !info->no_output_come_code) {
                    id_1013=(char*)come_increment_ref_count(__builtin_string(fun_name_940));
                    add_come_code_at_come_header(info,id_1013,"%s",((char*)(__right_value1050=buffer_to_string(header_1008))));
                    (__right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1013 = come_decrement_ref_count2(id_1013, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2818, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1052=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2818, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1011),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__383 = come_increment_ref_count(((struct sNode*)(__right_value1053=_inf_value8)));
            (asm_fun_1006 = come_decrement_ref_count2(asm_fun_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1007 = come_decrement_ref_count2(fun_attribute_1007, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1008,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1011,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1012,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_929 = come_decrement_ref_count2(attribute_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_931 = come_decrement_ref_count2(var_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_940 = come_decrement_ref_count2(fun_name_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_941 = come_decrement_ref_count2(base_fun_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_945,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_946,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_947,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1052,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1053) ? __right_value1053 = come_decrement_ref_count2(__right_value1053, ((struct sNode*)__right_value1053)->finalize, ((struct sNode*)__right_value1053)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count2(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__383;
            (asm_fun_1006 = come_decrement_ref_count2(asm_fun_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1007 = come_decrement_ref_count2(fun_attribute_1007, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1008,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1011,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1012,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1054=err_msg(info,"invalid character(2)(%c)\n",*info->p)));
        come_exception_var_c23_1014=multiple_assign_var34->v1;
        Err_1015=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_1015)?(puts(Err_1015),exit(0)):(0));
        come_call_finalizer3(__right_value1054,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        exit(2);
        (Err_1015 = come_decrement_ref_count2(Err_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_952;
    __result_obj__384 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_929 = come_decrement_ref_count2(attribute_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_930,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_931 = come_decrement_ref_count2(var_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_940 = come_decrement_ref_count2(fun_name_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_941 = come_decrement_ref_count2(base_fun_name_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(param_types_945,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_946,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_947,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value947 = (void*)0;
struct sLambdaNode* result_958;
void* __right_value948 = (void*)0;
char* __dec_obj182;
struct sLambdaNode* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = (void*)0;
        return __result_obj__374;
    }
    result_958=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_958->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_958->sname;
        result_958->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_958->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_958->mFun=self->mFun;
    }
    __result_obj__375 = result_958;
    come_call_finalizer3(result_958,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__375;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
struct sGenericsFun* __result_obj__377;
void* __right_value953 = (void*)0;
struct sGenericsFun* result_964;
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
struct sGenericsFun* __result_obj__378;
    if(    self==(void*)0) {
        __result_obj__377 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__377,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__377;
    }
    result_964=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj183=result_964->mImplType;
        result_964->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj184=result_964->mGenericsTypeNames;
        result_964->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj184,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj185=result_964->mMethodGenericsTypeNames;
        result_964->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj185,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj186=result_964->mName;
        result_964->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj187=result_964->mResultType;
        result_964->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj188=result_964->mParamTypes;
        result_964->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj188,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj189=result_964->mParamNames;
        result_964->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj189,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj190=result_964->mParamDefaultParametors;
        result_964->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj190,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj191=result_964->mBlock;
        result_964->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_964->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_964->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_964->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj192=result_964->mGenericsSName;
        result_964->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_964->mGenericsSLine=self->mGenericsSLine;
    }
    __result_obj__378 = come_increment_ref_count(result_964);
    come_call_finalizer3(result_964,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__378,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__378;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_963;
    result_963=0;
    result_963+=int_get_hash_key(((int)self->mImplType));
    result_963+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_963+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_963+=int_get_hash_key(((int)self->mName));
    result_963+=int_get_hash_key(((int)self->mResultType));
    result_963+=int_get_hash_key(((int)self->mParamTypes));
    result_963+=int_get_hash_key(((int)self->mParamNames));
    result_963+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_963+=int_get_hash_key(((int)self->mBlock));
    result_963+=int_get_hash_key(((int)self->mSLine));
    result_963+=int_get_hash_key(((int)self->mVarArgs));
    result_963+=int_get_hash_key(((int)self->mGenerate));
    result_963+=int_get_hash_key(((int)self->mGenericsSName));
    result_963+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_963;
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
char* last_code_1016;
char* __dec_obj196;
char* last_code2_1017;
char* __dec_obj197;
_Bool comma_instead_of_semicolon_1018;
struct sClass* current_stack_frame_struct_1019;
char* real_fun_name_1020;
struct sFun* finalizer_1021;
void* __right_value1055 = (void*)0;
struct sType* type_before_1022;
void* __right_value1056 = (void*)0;
struct sType* type2_1023;
void* __right_value1057 = (void*)0;
char* fun_name2_1024;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
char* none_generics_name_1025;
void* __right_value1060 = (void*)0;
char* generics_fun_name_1026;
void* __right_value1061 = (void*)0;
struct sGenericsFun* generics_fun_1027;
void* __right_value1062 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_1028=0;
_Bool err_1029=0;
void* __right_value1063 = (void*)0;
char* __dec_obj198;
int i_1030;
void* __right_value1064 = (void*)0;
char* new_fun_name_1031;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
char* __dec_obj199;
void* __right_value1067 = (void*)0;
char* __dec_obj200;
void* __right_value1068 = (void*)0;
char* __dec_obj201;
void* __right_value1069 = (void*)0;
char* user_real_fun_name_1032;
void* __right_value1070 = (void*)0;
struct sFun* user_finalizer_1033;
void* __right_value1071 = (void*)0;
struct sType* type2_1034;
struct sClass* klass_1035;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct buffer* source_1036;
void* __right_value1074 = (void*)0;
struct list$1void$ph* o2_saved_1038;
struct tuple2$2char$phsType$ph* it_1039;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1040=0;
struct sType* field_type_1041=0;
char* p_1044;
int sline_1045;
char* sname_1046;
char* head_1047;
struct buffer* source3_1048;
struct buffer* __dec_obj202;
void* __right_value1075 = (void*)0;
char* __dec_obj203;
void* __right_value1076 = (void*)0;
struct sBlock* block_1049;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct sType* result_type_1050;
void* __right_value1079 = (void*)0;
char* name_1051;
void* __right_value1080 = (void*)0;
struct sType* self_type_1052;
struct sType* __list_values21___1054[1];
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct list$1void$ph* param_types_1053;
void* __right_value1083 = (void*)0;
char* __list_values22___1055[1];
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct list$1char$ph* param_names_1056;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct list$1char$ph* param_default_parametors_1057;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct sFun* fun2_1058;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct sFun* fun_1059;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1097 = (void*)0;
struct sNode* node_1060;
_Bool Value_1061;
struct buffer* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__388;
memset(&i_1030, 0, sizeof(int));
    last_code_1016=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj196=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1017=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj197=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1018=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1019=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_1020=((void*)0);
    finalizer_1021=((void*)0);
    type_before_1022=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1023=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1023->mHeap=(_Bool)0;
    fun_name2_1024=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_1021=((struct sFun*)((void*)(__right_value1058=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1024))));
        come_call_finalizer3(__right_value1058,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        finalizer_1021==((void*)0)) {
            none_generics_name_1025=(char*)come_increment_ref_count(get_none_generics_name(type2_1023->mClass->mName));
            generics_fun_name_1026=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1025,fun_name));
            generics_fun_1027=((struct sGenericsFun*)((void*)(__right_value1061=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1026))));
            come_call_finalizer3(__right_value1061,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            generics_fun_1027) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value1062=create_generics_fun((char*)come_increment_ref_count(fun_name2_1024),generics_fun_1027,type,info)));
                name_1028=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_1029=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value1062,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1029) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_1021=((struct sFun*)((void*)(__right_value1063=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1028))));
                come_call_finalizer3(__right_value1063,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_1028 = come_decrement_ref_count2(name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1025 = come_decrement_ref_count2(none_generics_name_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1026 = come_decrement_ref_count2(generics_fun_name_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj198=real_fun_name_1020;
        real_fun_name_1020=(char*)come_increment_ref_count(fun_name2_1024);
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1030=128-1;        i_1030>=1;        i_1030--        ){
            new_fun_name_1031=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1024,i_1030));
            finalizer_1021=((struct sFun*)((void*)(__right_value1065=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1031))));
            come_call_finalizer3(__right_value1065,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            finalizer_1021) {
                __dec_obj199=fun_name2_1024;
                fun_name2_1024=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1031));
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1031 = come_decrement_ref_count2(new_fun_name_1031, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1031 = come_decrement_ref_count2(new_fun_name_1031, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_1021==((void*)0)) {
            finalizer_1021=((struct sFun*)((void*)(__right_value1067=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1024))));
            come_call_finalizer3(__right_value1067,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj200=real_fun_name_1020;
        real_fun_name_1020=(char*)come_increment_ref_count(fun_name2_1024);
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_1021==((void*)0)) {
        type=type_before_1022;
        __dec_obj201=real_fun_name_1020;
        real_fun_name_1020=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1032=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1033=((struct sFun*)((void*)(__right_value1070=map$2void$phvoid$ph$p_operator_load_element(info->funcs,user_real_fun_name_1032))));
        come_call_finalizer3(__right_value1070,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type2_1034=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1034;
        klass_1035=type->mClass;
        if(        type->mPointerNum>0&&klass_1035->mStruct||type->mAllocaValue) {
            source_1036=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2918, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_1036,123);
            if(            user_finalizer_1033) {
                char source2_1037[1024];
                memset(&source2_1037, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1037,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1032);
                buffer_append_str(source_1036,source2_1037);
            }
            klass_1035=((struct sClass*)((void*)(__right_value1074=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1035->mName))));
            come_call_finalizer3(__right_value1074,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1038=(struct list$1void$ph*)come_increment_ref_count((klass_1035->mFields)),it_1039=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1038)));            !list$1void$ph$p_end((o2_saved_1038));            it_1039=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1038)))            ){
                multiple_assign_var36=it_1039;
                name_1040=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1041=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1041->mHeap) {
                    char source2_1042[1024];
                    memset(&source2_1042, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1042,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_1040,name_1040,name_1040,name_1040);
                    buffer_append_str(source_1036,source2_1042);
                }
                else if(                field_type_1041->mChannel) {
                    char source2_1043[1024];
                    memset(&source2_1043, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1043,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1040,name_1040);
                    buffer_append_str(source_1036,source2_1043);
                    snprintf(source2_1043,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1040,name_1040);
                    buffer_append_str(source_1036,source2_1043);
                }
                (name_1040 = come_decrement_ref_count2(name_1040, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1041,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1038,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1036,125);
            p_1044=info->p;
            sline_1045=info->sline;
            sname_1046=(char*)come_increment_ref_count(info->sname);
            head_1047=info->head;
            source3_1048=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj202=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1036);
            come_call_finalizer3(__dec_obj202,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_1036->buf;
            info->head=source_1036->buf;
            __dec_obj203=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1020));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1049=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1050=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2967, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            name_1051=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1020));
            self_type_1052=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1052->mHeap=(_Bool)0;
            if(            self_type_1052->mPointerNum==0) {
                self_type_1052->mPointerNum=1;
            }
            if(            self_type_1052->mPointerNum>1) {
                self_type_1052->mPointerNum=1;
            }
            param_types_1053=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___1054[0]=self_type_1052,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2977, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values21___1054)));
            param_names_1056=(struct list$1char$ph*)come_increment_ref_count((__list_values22___1055[0]=((char*)(__right_value1083=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2978, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values22___1055)));
            (__right_value1083 = come_decrement_ref_count2(__right_value1083, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_1057=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2979, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1057,((void*)0));
            result_type_1050->mStatic=(_Bool)0;
            result_type_1050->mUniq=(_Bool)0;
            result_type_1050->mInline=(_Bool)0;
            result_type_1050->mGenerate=(_Bool)0;
            fun2_1058=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1088=__builtin_string(name_1051)))));
            (__right_value1088 = come_decrement_ref_count2(__right_value1088, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1058==((void*)0)||fun2_1058->mExternal) {
                fun_1059=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2989, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1051),(struct sType*)come_increment_ref_count(result_type_1050),(struct list$1void$ph*)come_increment_ref_count(param_types_1053),(struct list$1char$ph*)come_increment_ref_count(param_names_1056),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1057),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1049),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1051)),(struct sFun*)come_increment_ref_count(fun_1059));
                finalizer_1021=fun_1059;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2999, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1096=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2999, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1059),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1060=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1096,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                Value_1061=node_compile(node_1060,info);
                if(                !Value_1061) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1059,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1060) ? node_1060 = come_decrement_ref_count2(node_1060, ((struct sNode*)node_1060)->finalize, ((struct sNode*)node_1060)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_1021=fun2_1058;
            }
            __dec_obj204=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1048);
            come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1044;
            info->head=head_1047;
            info->sline=sline_1045;
            __dec_obj205=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1046);
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1036,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1046 = come_decrement_ref_count2(sname_1046, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1048,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1049,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1050,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1051 = come_decrement_ref_count2(name_1051, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1052,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1053,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1056,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1057,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1058,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_1032 = come_decrement_ref_count2(user_real_fun_name_1032, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_1034,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1019;
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1016);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1017);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1018;
    __result_obj__388 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1101=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3024, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_1021,(char*)come_increment_ref_count(real_fun_name_1020)))));
    (last_code_1016 = come_decrement_ref_count2(last_code_1016, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1017 = come_decrement_ref_count2(last_code2_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1020 = come_decrement_ref_count2(real_fun_name_1020, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_1022,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1023,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1024 = come_decrement_ref_count2(fun_name2_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1101,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
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
void* __right_value1098 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1062;
void* __right_value1099 = (void*)0;
char* __dec_obj208;
struct tuple2$2sFun$pchar$ph* __result_obj__386;
    if(    self==(void*)0) {
        __result_obj__385 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__385,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__385;
    }
    result_1062=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1062->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj208=result_1062->v2;
        result_1062->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__386 = come_increment_ref_count(result_1062);
    come_call_finalizer3(result_1062,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__386,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__386;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1063;
    result_1063=0;
    result_1063+=int_get_hash_key(((int)self->v1));
    result_1063+=int_get_hash_key(((int)self->v2));
    return result_1063;
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
char* last_code_1064;
char* __dec_obj210;
char* last_code2_1065;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_1066;
struct sClass* current_stack_frame_struct_1067;
struct sFun* equaler_1068;
void* __right_value1102 = (void*)0;
char* real_fun_name_1069;
void* __right_value1103 = (void*)0;
struct sType* type2_1070;
struct sClass* klass_1071;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
struct buffer* source_1072;
char* name_1073;
void* __right_value1106 = (void*)0;
struct list$1void$ph* o2_saved_1075;
struct tuple2$2char$phsType$ph* it_1076;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_1077=0;
struct sType* field_type_1078=0;
char* p_1080;
int sline_1081;
char* sname_1082;
char* head_1083;
struct buffer* source3_1084;
struct buffer* __dec_obj212;
void* __right_value1107 = (void*)0;
char* __dec_obj213;
void* __right_value1108 = (void*)0;
struct sBlock* block_1085;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct sType* result_type_1086;
void* __right_value1111 = (void*)0;
char* name_1087;
void* __right_value1112 = (void*)0;
struct sType* left_type_1088;
void* __right_value1113 = (void*)0;
struct sType* right_type_1089;
struct sType* __list_values23___1091[2];
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
struct list$1void$ph* param_types_1090;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
char* __list_values24___1092[2];
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
struct list$1char$ph* param_names_1093;
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
struct list$1char$ph* param_default_parametors_1094;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
struct sFun* fun2_1095;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct sFun* fun_1096;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1131 = (void*)0;
struct sNode* node_1097;
_Bool Value_1098;
void* __right_value1132 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c24_1099=0;
char* Err_1100=0;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__389;
    last_code_1064=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1065=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1066=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1067=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1068=((void*)0);
    real_fun_name_1069=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1070=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1070;
    klass_1071=type->mClass;
    if(    type->mPointerNum>0&&!klass_1071->mNumber) {
        source_1072=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3050, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1072,123);
        if(        klass_1071->mProtocol) {
            name_1073="_protocol_obj";
            char source2_1074[1024];
            memset(&source2_1074, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1074,1024,"return left.%s.equals(right.%s);\n",name_1073,name_1073);
            buffer_append_str(source_1072,source2_1074);
        }
        else {
            klass_1071=((struct sClass*)((void*)(__right_value1106=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1071->mName))));
            come_call_finalizer3(__right_value1106,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1075=(struct list$1void$ph*)come_increment_ref_count((klass_1071->mFields)),it_1076=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1075)));            !list$1void$ph$p_end((o2_saved_1075));            it_1076=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1075)))            ){
                multiple_assign_var37=it_1076;
                name_1077=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1078=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1079[1024];
                memset(&source2_1079, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1079,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1077,name_1077,name_1077);
                buffer_append_str(source_1072,source2_1079);
                (name_1077 = come_decrement_ref_count2(name_1077, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1078,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1075,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1072,"return true;");
        buffer_append_char(source_1072,125);
        p_1080=info->p;
        sline_1081=info->sline;
        sname_1082=(char*)come_increment_ref_count(info->sname);
        head_1083=info->head;
        source3_1084=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1072);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1072->buf;
        info->head=source_1072->buf;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1069));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1085=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1086=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3090, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1087=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1069));
        left_type_1088=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1088->mHeap=(_Bool)0;
        right_type_1089=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1089->mHeap=(_Bool)0;
        param_types_1090=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___1091[0]=left_type_1088,
__list_values23___1091[1]=right_type_1089,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3096, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values23___1091)));
        param_names_1093=(struct list$1char$ph*)come_increment_ref_count((__list_values24___1092[0]=((char*)(__right_value1116=__builtin_string("left"))),
__list_values24___1092[1]=((char*)(__right_value1117=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3097, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values24___1092)));
        (__right_value1116 = come_decrement_ref_count2(__right_value1116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1117 = come_decrement_ref_count2(__right_value1117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1094=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3098, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1094,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1094,((void*)0));
        result_type_1086->mStatic=(_Bool)0;
        result_type_1086->mUniq=(_Bool)0;
        result_type_1086->mInline=(_Bool)0;
        result_type_1086->mGenerate=(_Bool)0;
        fun2_1095=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1122=__builtin_string(name_1087)))));
        (__right_value1122 = come_decrement_ref_count2(__right_value1122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1095==((void*)0)||fun2_1095->mExternal) {
            fun_1096=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3109, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1087),(struct sType*)come_increment_ref_count(result_type_1086),(struct list$1void$ph*)come_increment_ref_count(param_types_1090),(struct list$1char$ph*)come_increment_ref_count(param_names_1093),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1094),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1085),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1087)),(struct sFun*)come_increment_ref_count(fun_1096));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3117, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1130=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3117, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1096),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1097=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1130,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1098=node_compile(node_1097,info);
            if(            !Value_1098) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1132=err_msg(info,"compiling error")));
                come_exception_var_c24_1099=multiple_assign_var38->v1;
                Err_1100=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1100)?(puts(Err_1100),exit(0)):(0));
                come_call_finalizer3(__right_value1132,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1100 = come_decrement_ref_count2(Err_1100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1068=fun_1096;
            come_call_finalizer3(fun_1096,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1097) ? node_1097 = come_decrement_ref_count2(node_1097, ((struct sNode*)node_1097)->finalize, ((struct sNode*)node_1097)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1068=fun2_1095;
        }
        __dec_obj214=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1084);
        come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1080;
        info->head=head_1083;
        info->sline=sline_1081;
        __dec_obj215=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1082);
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1072,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1082 = come_decrement_ref_count2(sname_1082, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1084,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1085,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1086,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1087 = come_decrement_ref_count2(name_1087, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1088,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1089,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1090,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1093,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1094,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1095,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1067;
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1064);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1065);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1066;
    __result_obj__389 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1134=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3143, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1068,(char*)come_increment_ref_count(real_fun_name_1069)))));
    (last_code_1064 = come_decrement_ref_count2(last_code_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1065 = come_decrement_ref_count2(last_code2_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1069 = come_decrement_ref_count2(real_fun_name_1069, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1070,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1134,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__389,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__389;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1101;
char* __dec_obj218;
char* last_code2_1102;
char* __dec_obj219;
_Bool comma_instead_of_semicolon_1103;
struct sClass* current_stack_frame_struct_1104;
struct sFun* equaler_1105;
void* __right_value1135 = (void*)0;
char* real_fun_name_1106;
void* __right_value1136 = (void*)0;
struct sType* type2_1107;
struct sClass* klass_1108;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct buffer* source_1109;
char* name_1110;
int i_1113;
void* __right_value1139 = (void*)0;
struct list$1void$ph* o2_saved_1114;
struct tuple2$2char$phsType$ph* it_1115;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1116=0;
struct sType* field_type_1117=0;
char* p_1121;
int sline_1122;
char* sname_1123;
char* head_1124;
struct buffer* source3_1125;
struct buffer* __dec_obj220;
void* __right_value1140 = (void*)0;
char* __dec_obj221;
void* __right_value1141 = (void*)0;
struct sBlock* block_1126;
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
struct sType* result_type_1127;
void* __right_value1144 = (void*)0;
char* name_1128;
void* __right_value1145 = (void*)0;
struct sType* left_type_1129;
void* __right_value1146 = (void*)0;
struct sType* right_type_1130;
struct sType* __list_values25___1132[2];
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
struct list$1void$ph* param_types_1131;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
char* __list_values26___1133[2];
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct list$1char$ph* param_names_1134;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct list$1char$ph* param_default_parametors_1135;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
struct sFun* fun2_1136;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
struct sFun* fun_1137;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1164 = (void*)0;
struct sNode* node_1138;
_Bool Value_1139;
void* __right_value1165 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c25_1140=0;
char* Err_1141=0;
struct buffer* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__390;
    last_code_1101=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1102=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1103=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1104=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1105=((void*)0);
    real_fun_name_1106=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1107=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1107;
    klass_1108=type->mClass;
    if(    type->mPointerNum>0&&!klass_1108->mNumber) {
        source_1109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3168, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1109,123);
        if(        klass_1108->mProtocol) {
            name_1110="_protocol_obj";
            char source2_1111[1024];
            memset(&source2_1111, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1111,1024,"return left.%s !== right.%s;\n",name_1110,name_1110);
            buffer_append_str(source_1109,source2_1111);
        }
        else {
            char source2_1112[1024];
            memset(&source2_1112, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1112,1024,"return !(");
            buffer_append_str(source_1109,source2_1112);
            snprintf(source2_1112,1024,"( ");
            buffer_append_str(source_1109,source2_1112);
            i_1113=0;
            klass_1108=((struct sClass*)((void*)(__right_value1139=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1108->mName))));
            come_call_finalizer3(__right_value1139,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1114=(struct list$1void$ph*)come_increment_ref_count((klass_1108->mFields)),it_1115=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1114)));            !list$1void$ph$p_end((o2_saved_1114));            it_1115=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1114)))            ){
                multiple_assign_var39=it_1115;
                name_1116=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1117=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1118[1024];
                memset(&source2_1118, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1118,1024,"(left.%s === right.%s)",name_1116,name_1116,name_1116);
                buffer_append_str(source_1109,source2_1118);
                if(                i_1113==list$1void$ph$p_length(klass_1108->mFields)-1) {
                    char source2_1119[1024];
                    memset(&source2_1119, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1119,1024,"));");
                    buffer_append_str(source_1109,source2_1119);
                }
                else {
                    char source2_1120[1024];
                    memset(&source2_1120, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1120,1024," && ");
                    buffer_append_str(source_1109,source2_1120);
                }
                i_1113++;
                (name_1116 = come_decrement_ref_count2(name_1116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1117,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1114,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1109,125);
        p_1121=info->p;
        sline_1122=info->sline;
        sname_1123=(char*)come_increment_ref_count(info->sname);
        head_1124=info->head;
        source3_1125=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1109);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1109->buf;
        info->head=source_1109->buf;
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1106));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1126=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1127=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3228, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1128=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1106));
        left_type_1129=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1129->mHeap=(_Bool)0;
        right_type_1130=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1130->mHeap=(_Bool)0;
        param_types_1131=(struct list$1sType$ph*)come_increment_ref_count((__list_values25___1132[0]=left_type_1129,
__list_values25___1132[1]=right_type_1130,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3234, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values25___1132)));
        param_names_1134=(struct list$1char$ph*)come_increment_ref_count((__list_values26___1133[0]=((char*)(__right_value1149=__builtin_string("left"))),
__list_values26___1133[1]=((char*)(__right_value1150=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3235, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values26___1133)));
        (__right_value1149 = come_decrement_ref_count2(__right_value1149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1150 = come_decrement_ref_count2(__right_value1150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1135=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3236, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1135,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1135,((void*)0));
        result_type_1127->mStatic=(_Bool)0;
        result_type_1127->mUniq=(_Bool)0;
        result_type_1127->mInline=(_Bool)0;
        result_type_1127->mGenerate=(_Bool)0;
        fun2_1136=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1155=__builtin_string(name_1128)))));
        (__right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1136==((void*)0)||fun2_1136->mExternal) {
            fun_1137=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3247, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1128),(struct sType*)come_increment_ref_count(result_type_1127),(struct list$1void$ph*)come_increment_ref_count(param_types_1131),(struct list$1char$ph*)come_increment_ref_count(param_names_1134),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1135),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1126),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1128)),(struct sFun*)come_increment_ref_count(fun_1137));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3255, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1163=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3255, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1137),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1138=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1163,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1139=node_compile(node_1138,info);
            if(            !Value_1139) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1165=err_msg(info,"compiling error")));
                come_exception_var_c25_1140=multiple_assign_var40->v1;
                Err_1141=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1141)?(puts(Err_1141),exit(0)):(0));
                come_call_finalizer3(__right_value1165,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1141 = come_decrement_ref_count2(Err_1141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1105=fun_1137;
            come_call_finalizer3(fun_1137,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1138) ? node_1138 = come_decrement_ref_count2(node_1138, ((struct sNode*)node_1138)->finalize, ((struct sNode*)node_1138)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1105=fun2_1136;
        }
        __dec_obj222=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1125);
        come_call_finalizer3(__dec_obj222,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1121;
        info->head=head_1124;
        info->sline=sline_1122;
        __dec_obj223=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1123);
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1109,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1123 = come_decrement_ref_count2(sname_1123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1125,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1126,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1127,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1128 = come_decrement_ref_count2(name_1128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1129,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1130,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1131,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1134,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1135,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1136,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1104;
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1101);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1102);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1103;
    __result_obj__390 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1167=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3281, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1105,(char*)come_increment_ref_count(real_fun_name_1106)))));
    (last_code_1101 = come_decrement_ref_count2(last_code_1101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1102 = come_decrement_ref_count2(last_code2_1102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1106 = come_decrement_ref_count2(real_fun_name_1106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1167,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__390,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__390;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1142;
char* __dec_obj226;
char* last_code2_1143;
char* __dec_obj227;
_Bool comma_instead_of_semicolon_1144;
struct sClass* current_stack_frame_struct_1145;
struct sFun* equaler_1146;
void* __right_value1168 = (void*)0;
char* real_fun_name_1147;
void* __right_value1169 = (void*)0;
struct sType* type2_1148;
struct sClass* klass_1149;
void* __right_value1170 = (void*)0;
void* __right_value1171 = (void*)0;
struct buffer* source_1150;
char* name_1151;
int i_1154;
void* __right_value1172 = (void*)0;
struct list$1void$ph* o2_saved_1155;
struct tuple2$2char$phsType$ph* it_1156;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1157=0;
struct sType* field_type_1158=0;
char* p_1162;
int sline_1163;
char* sname_1164;
char* head_1165;
struct buffer* source3_1166;
struct buffer* __dec_obj228;
void* __right_value1173 = (void*)0;
char* __dec_obj229;
void* __right_value1174 = (void*)0;
struct sBlock* block_1167;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct sType* result_type_1168;
void* __right_value1177 = (void*)0;
char* name_1169;
void* __right_value1178 = (void*)0;
struct sType* left_type_1170;
void* __right_value1179 = (void*)0;
struct sType* right_type_1171;
struct sType* __list_values27___1173[2];
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct list$1void$ph* param_types_1172;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
char* __list_values28___1174[2];
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
struct list$1char$ph* param_names_1175;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
struct list$1char$ph* param_default_parametors_1176;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
struct sFun* fun2_1177;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct sFun* fun_1178;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1197 = (void*)0;
struct sNode* node_1179;
_Bool Value_1180;
void* __right_value1198 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c26_1181=0;
char* Err_1182=0;
struct buffer* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
char* __dec_obj233;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__391;
    last_code_1142=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1143=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1144=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1145=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1146=((void*)0);
    real_fun_name_1147=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1148=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1148;
    klass_1149=type->mClass;
    if(    type->mPointerNum>0&&!klass_1149->mNumber) {
        source_1150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3306, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1150,123);
        if(        klass_1149->mProtocol) {
            name_1151="_protocol_obj";
            char source2_1152[1024];
            memset(&source2_1152, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1152,1024,"return !left.%s.equals(right.%s);\n",name_1151,name_1151);
            buffer_append_str(source_1150,source2_1152);
        }
        else {
            char source2_1153[1024];
            memset(&source2_1153, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1153,1024,"return !(");
            buffer_append_str(source_1150,source2_1153);
            i_1154=0;
            klass_1149=((struct sClass*)((void*)(__right_value1172=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1149->mName))));
            come_call_finalizer3(__right_value1172,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1155=(struct list$1void$ph*)come_increment_ref_count((klass_1149->mFields)),it_1156=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1155)));            !list$1void$ph$p_end((o2_saved_1155));            it_1156=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1155)))            ){
                multiple_assign_var41=it_1156;
                name_1157=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1158=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1159[1024];
                memset(&source2_1159, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1159,1024,"left.%s.equals(right.%s)",name_1157,name_1157);
                buffer_append_str(source_1150,source2_1159);
                if(                i_1154==list$1void$ph$p_length(klass_1149->mFields)-1) {
                    char source2_1160[1024];
                    memset(&source2_1160, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1160,1024,");");
                    buffer_append_str(source_1150,source2_1160);
                }
                else {
                    char source2_1161[1024];
                    memset(&source2_1161, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1161,1024," && ");
                    buffer_append_str(source_1150,source2_1161);
                }
                i_1154++;
                (name_1157 = come_decrement_ref_count2(name_1157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1158,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1155,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1150,125);
        p_1162=info->p;
        sline_1163=info->sline;
        sname_1164=(char*)come_increment_ref_count(info->sname);
        head_1165=info->head;
        source3_1166=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj228=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1150);
        come_call_finalizer3(__dec_obj228,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1150->buf;
        info->head=source_1150->buf;
        __dec_obj229=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1147));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1167=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1168=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3363, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1169=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1147));
        left_type_1170=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1170->mHeap=(_Bool)0;
        right_type_1171=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1171->mHeap=(_Bool)0;
        param_types_1172=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___1173[0]=left_type_1170,
__list_values27___1173[1]=right_type_1171,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3369, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values27___1173)));
        param_names_1175=(struct list$1char$ph*)come_increment_ref_count((__list_values28___1174[0]=((char*)(__right_value1182=__builtin_string("left"))),
__list_values28___1174[1]=((char*)(__right_value1183=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3370, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values28___1174)));
        (__right_value1182 = come_decrement_ref_count2(__right_value1182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1183 = come_decrement_ref_count2(__right_value1183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1176=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3371, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1176,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1176,((void*)0));
        result_type_1168->mStatic=(_Bool)0;
        result_type_1168->mUniq=(_Bool)0;
        result_type_1168->mInline=(_Bool)0;
        result_type_1168->mGenerate=(_Bool)0;
        fun2_1177=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1188=__builtin_string(name_1169)))));
        (__right_value1188 = come_decrement_ref_count2(__right_value1188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1177==((void*)0)||fun2_1177->mExternal) {
            fun_1178=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3382, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1169),(struct sType*)come_increment_ref_count(result_type_1168),(struct list$1void$ph*)come_increment_ref_count(param_types_1172),(struct list$1char$ph*)come_increment_ref_count(param_names_1175),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1176),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1167),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1169)),(struct sFun*)come_increment_ref_count(fun_1178));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3390, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1196=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3390, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1178),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1179=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1196,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1180=node_compile(node_1179,info);
            if(            !Value_1180) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value1198=err_msg(info,"compiling error")));
                come_exception_var_c26_1181=multiple_assign_var42->v1;
                Err_1182=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1182)?(puts(Err_1182),exit(0)):(0));
                come_call_finalizer3(__right_value1198,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1182 = come_decrement_ref_count2(Err_1182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1146=fun_1178;
            come_call_finalizer3(fun_1178,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1179) ? node_1179 = come_decrement_ref_count2(node_1179, ((struct sNode*)node_1179)->finalize, ((struct sNode*)node_1179)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1146=fun2_1177;
        }
        __dec_obj230=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1166);
        come_call_finalizer3(__dec_obj230,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1162;
        info->head=head_1165;
        info->sline=sline_1163;
        __dec_obj231=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1164);
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1150,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1164 = come_decrement_ref_count2(sname_1164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1166,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1167,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1168,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1169 = come_decrement_ref_count2(name_1169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1170,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1171,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1172,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1175,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1176,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1177,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1145;
    __dec_obj232=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1142);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1143);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1144;
    __result_obj__391 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1200=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3416, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1146,(char*)come_increment_ref_count(real_fun_name_1147)))));
    (last_code_1142 = come_decrement_ref_count2(last_code_1142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1143 = come_decrement_ref_count2(last_code2_1143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1147 = come_decrement_ref_count2(real_fun_name_1147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1148,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1200,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__391,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__391;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1183;
char* __dec_obj234;
char* last_code2_1184;
char* __dec_obj235;
_Bool comma_instead_of_semicolon_1185;
struct sClass* current_stack_frame_struct_1186;
struct sFun* equaler_1187;
void* __right_value1201 = (void*)0;
char* real_fun_name_1188;
void* __right_value1202 = (void*)0;
struct sType* type2_1189;
struct sClass* klass_1190;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
struct buffer* source_1191;
char* name_1192;
void* __right_value1205 = (void*)0;
struct list$1void$ph* o2_saved_1195;
struct tuple2$2char$phsType$ph* it_1196;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1197=0;
struct sType* field_type_1198=0;
char* p_1200;
int sline_1201;
char* sname_1202;
char* head_1203;
struct buffer* source3_1204;
struct buffer* __dec_obj236;
void* __right_value1206 = (void*)0;
char* __dec_obj237;
void* __right_value1207 = (void*)0;
struct sBlock* block_1205;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
struct sType* result_type_1206;
void* __right_value1210 = (void*)0;
char* name_1207;
void* __right_value1211 = (void*)0;
struct sType* left_type_1208;
void* __right_value1212 = (void*)0;
struct sType* right_type_1209;
struct sType* __list_values29___1211[2];
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
struct list$1void$ph* param_types_1210;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
char* __list_values30___1212[2];
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct list$1char$ph* param_names_1213;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct list$1char$ph* param_default_parametors_1214;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
struct sFun* fun2_1215;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct sFun* fun_1216;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1230 = (void*)0;
struct sNode* node_1217;
_Bool Value_1218;
void* __right_value1231 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c27_1219=0;
char* Err_1220=0;
struct buffer* __dec_obj238;
char* __dec_obj239;
char* __dec_obj240;
char* __dec_obj241;
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__392;
    last_code_1183=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj234=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1184=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj235=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1185=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1186=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1187=((void*)0);
    real_fun_name_1188=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1189=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1189;
    klass_1190=type->mClass;
    if(    type->mPointerNum>0&&!klass_1190->mNumber) {
        source_1191=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3441, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1191,123);
        if(        klass_1190->mProtocol) {
            name_1192="_protocol_obj";
            char source2_1193[1024];
            memset(&source2_1193, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1193,1024,"return left.%s === right.%s;\n",name_1192,name_1192);
            buffer_append_str(source_1191,source2_1193);
        }
        else {
            char source2_1194[1024];
            memset(&source2_1194, 0, sizeof(char)            *(1024)            );
            klass_1190=((struct sClass*)((void*)(__right_value1205=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1190->mName))));
            come_call_finalizer3(__right_value1205,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1195=(struct list$1void$ph*)come_increment_ref_count((klass_1190->mFields)),it_1196=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1195)));            !list$1void$ph$p_end((o2_saved_1195));            it_1196=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1195)))            ){
                multiple_assign_var43=it_1196;
                name_1197=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1198=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1199[1024];
                memset(&source2_1199, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1199,1024,"if(left.%s !== right.%s) { return false; }\n",name_1197,name_1197,name_1197);
                buffer_append_str(source_1191,source2_1199);
                (name_1197 = come_decrement_ref_count2(name_1197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1198,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1195,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1191,"return true;\n");
        buffer_append_char(source_1191,125);
        p_1200=info->p;
        sline_1201=info->sline;
        sname_1202=(char*)come_increment_ref_count(info->sname);
        head_1203=info->head;
        source3_1204=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj236=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1191);
        come_call_finalizer3(__dec_obj236,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1191->buf;
        info->head=source_1191->buf;
        __dec_obj237=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1188));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1205=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1206=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3483, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1207=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1188));
        left_type_1208=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1208->mHeap=(_Bool)0;
        right_type_1209=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1209->mHeap=(_Bool)0;
        param_types_1210=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___1211[0]=left_type_1208,
__list_values29___1211[1]=right_type_1209,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3489, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values29___1211)));
        param_names_1213=(struct list$1char$ph*)come_increment_ref_count((__list_values30___1212[0]=((char*)(__right_value1215=__builtin_string("left"))),
__list_values30___1212[1]=((char*)(__right_value1216=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3490, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values30___1212)));
        (__right_value1215 = come_decrement_ref_count2(__right_value1215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1216 = come_decrement_ref_count2(__right_value1216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1214=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3491, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1214,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1214,((void*)0));
        result_type_1206->mStatic=(_Bool)0;
        result_type_1206->mUniq=(_Bool)0;
        result_type_1206->mInline=(_Bool)0;
        result_type_1206->mGenerate=(_Bool)0;
        fun2_1215=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1221=__builtin_string(name_1207)))));
        (__right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1215==((void*)0)||fun2_1215->mExternal) {
            fun_1216=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3502, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1207),(struct sType*)come_increment_ref_count(result_type_1206),(struct list$1void$ph*)come_increment_ref_count(param_types_1210),(struct list$1char$ph*)come_increment_ref_count(param_names_1213),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1214),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1205),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1207)),(struct sFun*)come_increment_ref_count(fun_1216));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3510, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1229=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3510, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1216),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1217=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1229,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1218=node_compile(node_1217,info);
            if(            !Value_1218) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value1231=err_msg(info,"compiling error(X)")));
                come_exception_var_c27_1219=multiple_assign_var44->v1;
                Err_1220=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1220)?(puts(Err_1220),exit(0)):(0));
                come_call_finalizer3(__right_value1231,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1220 = come_decrement_ref_count2(Err_1220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1187=fun_1216;
            come_call_finalizer3(fun_1216,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1217) ? node_1217 = come_decrement_ref_count2(node_1217, ((struct sNode*)node_1217)->finalize, ((struct sNode*)node_1217)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1187=fun2_1215;
        }
        __dec_obj238=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1204);
        come_call_finalizer3(__dec_obj238,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1200;
        info->head=head_1203;
        info->sline=sline_1201;
        __dec_obj239=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1202);
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1191,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1202 = come_decrement_ref_count2(sname_1202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1204,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1205,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1206,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1207 = come_decrement_ref_count2(name_1207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1208,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1209,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1210,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1213,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1214,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1215,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1186;
    __dec_obj240=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1183);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj241=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1184);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1185;
    __result_obj__392 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1233=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3536, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1187,(char*)come_increment_ref_count(real_fun_name_1188)))));
    (last_code_1183 = come_decrement_ref_count2(last_code_1183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1184 = come_decrement_ref_count2(last_code2_1184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1188 = come_decrement_ref_count2(real_fun_name_1188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1189,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1233,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__392,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__392;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__393;
char* last_code_1221;
char* __dec_obj242;
char* last_code2_1222;
char* __dec_obj243;
_Bool comma_instead_of_semicolon_1223;
struct sClass* current_stack_frame_struct_1224;
struct sFun* cloner_1225;
void* __right_value1236 = (void*)0;
char* real_fun_name_1226;
void* __right_value1237 = (void*)0;
struct sType* type2_1227;
struct sClass* klass_1228;
char* fun_name2_1229;
void* __right_value1238 = (void*)0;
char* none_generics_name_1230;
void* __right_value1239 = (void*)0;
struct sType* obj_type_1231;
void* __right_value1240 = (void*)0;
char* __dec_obj244;
void* __right_value1241 = (void*)0;
char* fun_name3_1232;
void* __right_value1242 = (void*)0;
struct sGenericsFun* generics_fun_1233;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1234=0;
_Bool err_1235=0;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__394;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
char* __dec_obj245;
void* __right_value1249 = (void*)0;
char* __dec_obj246;
int i_1236;
void* __right_value1250 = (void*)0;
char* new_fun_name_1237;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
char* __dec_obj247;
void* __right_value1253 = (void*)0;
char* __dec_obj248;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct buffer* source_1238;
void* __right_value1256 = (void*)0;
char* name_1239;
void* __right_value1257 = (void*)0;
struct list$1void$ph* o2_saved_1241;
struct tuple2$2char$phsType$ph* it_1242;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1243=0;
struct sType* field_type_1244=0;
void* __right_value1258 = (void*)0;
struct list$1void$ph* o2_saved_1247;
struct tuple2$2char$phsType$ph* it_1248;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1249=0;
struct sType* field_type_1250=0;
char* p_1254;
int sline_1255;
char* sname_1256;
struct buffer* source3_1257;
char* head_1258;
struct buffer* __dec_obj249;
void* __right_value1259 = (void*)0;
char* __dec_obj250;
void* __right_value1260 = (void*)0;
struct sBlock* block_1259;
void* __right_value1261 = (void*)0;
struct sType* result_type_1260;
void* __right_value1262 = (void*)0;
char* name_1261;
void* __right_value1263 = (void*)0;
struct sType* self_type_1262;
struct sType* __list_values31___1264[1];
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
struct list$1void$ph* param_types_1263;
void* __right_value1266 = (void*)0;
char* __list_values32___1265[1];
void* __right_value1267 = (void*)0;
void* __right_value1268 = (void*)0;
struct list$1char$ph* param_names_1266;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
struct list$1char$ph* param_default_parametors_1267;
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
struct sFun* fun2_1268;
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
void* __right_value1276 = (void*)0;
struct sFun* fun_1269;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1280 = (void*)0;
struct sNode* node_1270;
_Bool Value_1271;
void* __right_value1281 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c28_1272=0;
char* Err_1273=0;
char* __dec_obj251;
struct buffer* __dec_obj252;
char* __dec_obj253;
char* __dec_obj254;
void* __right_value1282 = (void*)0;
void* __right_value1283 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__395;
fun_name2_1229 = (void*)0;
memset(&i_1236, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__393 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1235=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3542, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer3(__right_value1235,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__393,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__393;
    }
    last_code_1221=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj242=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1222=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj243=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1223=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1224=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1225=((void*)0);
    real_fun_name_1226=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1227=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1227;
    klass_1228=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1230=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1231=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj244=fun_name2_1229;
        fun_name2_1229=(char*)come_increment_ref_count(create_method_name(obj_type_1231,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1232=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1230,fun_name));
        generics_fun_1233=((struct sGenericsFun*)((void*)(__right_value1242=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_1232,((void*)0)))));
        come_call_finalizer3(__right_value1242,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_1233) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value1244=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1229)),generics_fun_1233,obj_type_1231,info)));
            name_1234=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1235=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value1244,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_1235) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__394 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1246=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3582, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1234 = come_decrement_ref_count2(name_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1230 = come_decrement_ref_count2(none_generics_name_1230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1231,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1232 = come_decrement_ref_count2(fun_name3_1232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1221 = come_decrement_ref_count2(last_code_1221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1222 = come_decrement_ref_count2(last_code2_1222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1226 = come_decrement_ref_count2(real_fun_name_1226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1227,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1229 = come_decrement_ref_count2(fun_name2_1229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value1246,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__394,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__394;
                }
            }
            cloner_1225=((struct sFun*)((void*)(__right_value1247=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1234))));
            come_call_finalizer3(__right_value1247,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_1234 = come_decrement_ref_count2(name_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1225=((struct sFun*)((void*)(__right_value1248=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1229))));
            come_call_finalizer3(__right_value1248,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj245=real_fun_name_1226;
        real_fun_name_1226=(char*)come_increment_ref_count(fun_name2_1229);
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1230 = come_decrement_ref_count2(none_generics_name_1230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1231,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1232 = come_decrement_ref_count2(fun_name3_1232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj246=fun_name2_1229;
        fun_name2_1229=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1236=128-1;        i_1236>=1;        i_1236--        ){
            new_fun_name_1237=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1229,i_1236));
            cloner_1225=((struct sFun*)((void*)(__right_value1251=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1237))));
            come_call_finalizer3(__right_value1251,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_1225) {
                __dec_obj247=fun_name2_1229;
                fun_name2_1229=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1237));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1237 = come_decrement_ref_count2(new_fun_name_1237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1237 = come_decrement_ref_count2(new_fun_name_1237, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1225==((void*)0)) {
            cloner_1225=((struct sFun*)((void*)(__right_value1253=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_1229))));
            come_call_finalizer3(__right_value1253,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        __dec_obj248=real_fun_name_1226;
        real_fun_name_1226=(char*)come_increment_ref_count(fun_name2_1229);
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1225==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1238=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3617, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1238,"{\n");
        buffer_append_str(source_1238,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1238,"var result = new %s;\n",((char*)(__right_value1256=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value1256 = come_decrement_ref_count2(__right_value1256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1228->mProtocol) {
            name_1239="_protocol_obj";
            char source2_1240[1024];
            memset(&source2_1240, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1240,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1238,source2_1240);
            klass_1228=((struct sClass*)((void*)(__right_value1257=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1228->mName))));
            come_call_finalizer3(__right_value1257,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1241=(struct list$1void$ph*)come_increment_ref_count((klass_1228->mFields)),it_1242=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1241)));            !list$1void$ph$p_end((o2_saved_1241));            it_1242=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1241)))            ){
                multiple_assign_var46=it_1242;
                name_1243=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1244=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1243,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1244->mArrayNum)>0) {
                    char source2_1245[1024];
                    memset(&source2_1245, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1245,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1243,name_1243,name_1243);
                    buffer_append_str(source_1238,source2_1245);
                }
                else {
                    char source2_1246[1024];
                    memset(&source2_1246, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1246,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1243,name_1243);
                    buffer_append_str(source_1238,source2_1246);
                }
                (name_1243 = come_decrement_ref_count2(name_1243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1244,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1241,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1228=((struct sClass*)((void*)(__right_value1258=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1228->mName))));
            come_call_finalizer3(__right_value1258,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            for(            o2_saved_1247=(struct list$1void$ph*)come_increment_ref_count((klass_1228->mFields)),it_1248=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1247)));            !list$1void$ph$p_end((o2_saved_1247));            it_1248=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1247)))            ){
                multiple_assign_var47=it_1248;
                name_1249=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1250=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1250->mHeap) {
                    char source2_1251[1024];
                    memset(&source2_1251, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1251,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1249,name_1249,name_1249);
                    buffer_append_str(source_1238,source2_1251);
                }
                else if(                list$1sNode$ph$p_length(field_type_1250->mArrayNum)>0) {
                    char source2_1252[1024];
                    memset(&source2_1252, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1252,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1249,name_1249,name_1249);
                    buffer_append_str(source_1238,source2_1252);
                }
                else {
                    char source2_1253[1024];
                    memset(&source2_1253, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1253,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1249,name_1249);
                    buffer_append_str(source_1238,source2_1253);
                }
                (name_1249 = come_decrement_ref_count2(name_1249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1250,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1247,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1238,"return result;");
        buffer_append_char(source_1238,125);
        p_1254=info->p;
        sline_1255=info->sline;
        sname_1256=(char*)come_increment_ref_count(info->sname);
        source3_1257=(struct buffer*)come_increment_ref_count(info->source);
        head_1258=info->head;
        __dec_obj249=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1238);
        come_call_finalizer3(__dec_obj249,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj250=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1226));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1259=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1260=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1261=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1226));
        self_type_1262=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1262->mHeap=(_Bool)0;
        param_types_1263=(struct list$1sType$ph*)come_increment_ref_count((__list_values31___1264[0]=self_type_1262,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3698, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values31___1264)));
        param_names_1266=(struct list$1char$ph*)come_increment_ref_count((__list_values32___1265[0]=((char*)(__right_value1266=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3699, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values32___1265)));
        (__right_value1266 = come_decrement_ref_count2(__right_value1266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1267=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3700, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1267,((void*)0));
        result_type_1260->mStatic=(_Bool)0;
        result_type_1260->mUniq=(_Bool)0;
        result_type_1260->mInline=(_Bool)0;
        result_type_1260->mGenerate=(_Bool)0;
        fun2_1268=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1271=__builtin_string(name_1261)))));
        (__right_value1271 = come_decrement_ref_count2(__right_value1271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1268==((void*)0)||fun2_1268->mExternal) {
            fun_1269=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3711, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1261),(struct sType*)come_increment_ref_count(result_type_1260),(struct list$1void$ph*)come_increment_ref_count(param_types_1263),(struct list$1char$ph*)come_increment_ref_count(param_names_1266),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1267),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1259),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1261)),(struct sFun*)come_increment_ref_count(fun_1269));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3719, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1279=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3719, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1269),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1270=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1279,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1271=node_compile(node_1270,info);
            if(            !Value_1271) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value1281=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1272=multiple_assign_var48->v1;
                Err_1273=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1273)?(puts(Err_1273),exit(0)):(0));
                come_call_finalizer3(__right_value1281,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1273 = come_decrement_ref_count2(Err_1273, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1225=fun_1269;
            come_call_finalizer3(fun_1269,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1270) ? node_1270 = come_decrement_ref_count2(node_1270, ((struct sNode*)node_1270)->finalize, ((struct sNode*)node_1270)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1225=fun2_1268;
        }
        __dec_obj251=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1256);
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1255;
        __dec_obj252=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1257);
        come_call_finalizer3(__dec_obj252,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1254;
        info->head=head_1258;
        info->sline=sline_1255;
        come_call_finalizer3(source_1238,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1256 = come_decrement_ref_count2(sname_1256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1257,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1259,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1260,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1261 = come_decrement_ref_count2(name_1261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1262,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1263,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1266,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1267,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1268,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1224;
    __dec_obj253=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1221);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj254=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1222);
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1223;
    __result_obj__395 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1283=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3747, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1225,(char*)come_increment_ref_count(real_fun_name_1226)))));
    (last_code_1221 = come_decrement_ref_count2(last_code_1221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1222 = come_decrement_ref_count2(last_code2_1222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1226 = come_decrement_ref_count2(real_fun_name_1226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1227,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1229 = come_decrement_ref_count2(fun_name2_1229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1283,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__395,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__395;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1274;
char* __dec_obj255;
char* last_code2_1275;
char* __dec_obj256;
_Bool comma_instead_of_semicolon_1276;
struct sClass* current_stack_frame_struct_1277;
struct sFun* cloner_1278;
void* __right_value1284 = (void*)0;
char* real_fun_name_1279;
void* __right_value1285 = (void*)0;
struct sType* type2_1280;
struct sClass* klass_1281;
void* __right_value1286 = (void*)0;
void* __right_value1287 = (void*)0;
struct buffer* source_1282;
int i_1283;
void* __right_value1288 = (void*)0;
struct list$1void$ph* o2_saved_1284;
struct tuple2$2char$phsType$ph* it_1285;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1286=0;
struct sType* field_type_1287=0;
char* p_1290;
int sline_1291;
char* sname_1292;
struct buffer* source3_1293;
char* head_1294;
struct buffer* __dec_obj257;
void* __right_value1289 = (void*)0;
char* __dec_obj258;
void* __right_value1290 = (void*)0;
struct sBlock* block_1295;
void* __right_value1291 = (void*)0;
void* __right_value1292 = (void*)0;
struct sType* result_type_1296;
void* __right_value1293 = (void*)0;
char* name_1297;
void* __right_value1294 = (void*)0;
struct sType* self_type_1298;
struct sType* __list_values33___1300[1];
void* __right_value1295 = (void*)0;
void* __right_value1296 = (void*)0;
struct list$1void$ph* param_types_1299;
void* __right_value1297 = (void*)0;
char* __list_values34___1301[1];
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct list$1char$ph* param_names_1302;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct list$1char$ph* param_default_parametors_1303;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
struct sFun* fun2_1304;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
struct sFun* fun_1305;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1311 = (void*)0;
struct sNode* node_1306;
_Bool Value_1307;
void* __right_value1312 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c29_1308=0;
char* Err_1309=0;
char* __dec_obj259;
struct buffer* __dec_obj260;
char* __dec_obj261;
char* __dec_obj262;
void* __right_value1313 = (void*)0;
void* __right_value1314 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__396;
    last_code_1274=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj255=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1275=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj256=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1276=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1277=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1278=((void*)0);
    real_fun_name_1279=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1280=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1280;
    klass_1281=type->mClass;
    if(    type->mPointerNum>0&&!klass_1281->mNumber) {
        source_1282=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3772, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1282,"{\n");
        buffer_append_str(source_1282,"var result = new buffer();\n");
        buffer_append_format(source_1282,"result.append_str(\"%s {\");\n",klass_1281->mName);
        i_1283=0;
        klass_1281=((struct sClass*)((void*)(__right_value1288=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1281->mName))));
        come_call_finalizer3(__right_value1288,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_1284=(struct list$1void$ph*)come_increment_ref_count((klass_1281->mFields)),it_1285=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1284)));        !list$1void$ph$p_end((o2_saved_1284));        it_1285=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1284)))        ){
            multiple_assign_var49=it_1285;
            name_1286=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1287=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1283==list$1void$ph$p_length(klass_1281->mFields)-1) {
                char source2_1288[1024];
                memset(&source2_1288, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1288,1024,"result.append_str(\"%s:\");\n",name_1286);
                buffer_append_str(source_1282,source2_1288);
                snprintf(source2_1288,1024,"result.append_str(self.%s.to_string());\n",name_1286);
                buffer_append_str(source_1282,source2_1288);
            }
            else {
                char source2_1289[1024];
                memset(&source2_1289, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1289,1024,"result.append_str(\"%s:\");\n",name_1286);
                buffer_append_str(source_1282,source2_1289);
                snprintf(source2_1289,1024,"result.append_str(self.%s.to_string());\n",name_1286);
                buffer_append_str(source_1282,source2_1289);
                snprintf(source2_1289,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1282,source2_1289);
            }
            i_1283++;
            (name_1286 = come_decrement_ref_count2(name_1286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1287,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1284,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1282,"result.append_str(\"}\");\n");
        buffer_append_format(source_1282,"return result.to_string();\n");
        buffer_append_char(source_1282,125);
        p_1290=info->p;
        sline_1291=info->sline;
        sname_1292=(char*)come_increment_ref_count(info->sname);
        source3_1293=(struct buffer*)come_increment_ref_count(info->source);
        head_1294=info->head;
        __dec_obj257=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1282);
        come_call_finalizer3(__dec_obj257,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj258=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1279));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1295=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1296=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3833, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1296->mHeap=(_Bool)1;
        name_1297=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1279));
        self_type_1298=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1298->mHeap=(_Bool)0;
        param_types_1299=(struct list$1sType$ph*)come_increment_ref_count((__list_values33___1300[0]=self_type_1298,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3838, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values33___1300)));
        param_names_1302=(struct list$1char$ph*)come_increment_ref_count((__list_values34___1301[0]=((char*)(__right_value1297=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3839, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values34___1301)));
        (__right_value1297 = come_decrement_ref_count2(__right_value1297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1303=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3840, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1303,((void*)0));
        result_type_1296->mStatic=(_Bool)0;
        result_type_1296->mUniq=(_Bool)0;
        result_type_1296->mInline=(_Bool)0;
        result_type_1296->mGenerate=(_Bool)0;
        fun2_1304=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1302=__builtin_string(name_1297)))));
        (__right_value1302 = come_decrement_ref_count2(__right_value1302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1304==((void*)0)||fun2_1304->mExternal) {
            fun_1305=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3850, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1297),(struct sType*)come_increment_ref_count(result_type_1296),(struct list$1void$ph*)come_increment_ref_count(param_types_1299),(struct list$1char$ph*)come_increment_ref_count(param_names_1302),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1303),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1295),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1297)),(struct sFun*)come_increment_ref_count(fun_1305));
            cloner_1278=fun_1305;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3860, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1310=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3860, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1305),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1306=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1310,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1307=node_compile(node_1306,info);
            if(            !Value_1307) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value1312=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1308=multiple_assign_var50->v1;
                Err_1309=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1309)?(puts(Err_1309),exit(0)):(0));
                come_call_finalizer3(__right_value1312,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1309 = come_decrement_ref_count2(Err_1309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1305,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1306) ? node_1306 = come_decrement_ref_count2(node_1306, ((struct sNode*)node_1306)->finalize, ((struct sNode*)node_1306)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1278=fun2_1304;
        }
        __dec_obj259=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1292);
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1291;
        __dec_obj260=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1293);
        come_call_finalizer3(__dec_obj260,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1290;
        info->head=head_1294;
        info->sline=sline_1291;
        come_call_finalizer3(source_1282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1292 = come_decrement_ref_count2(sname_1292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1293,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1295,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1296,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1297 = come_decrement_ref_count2(name_1297, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1298,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1299,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1302,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1303,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1304,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1277;
    __dec_obj261=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1274);
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj262=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1275);
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1276;
    __result_obj__396 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1314=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3886, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1278,(char*)come_increment_ref_count(real_fun_name_1279)))));
    (last_code_1274 = come_decrement_ref_count2(last_code_1274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1275 = come_decrement_ref_count2(last_code2_1275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1279 = come_decrement_ref_count2(real_fun_name_1279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1280,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1314,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__396,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__396;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1355;
char* __dec_obj273;
char* last_code2_1356;
char* __dec_obj274;
_Bool comma_instead_of_semicolon_1357;
struct sClass* current_stack_frame_struct_1358;
struct sFun* get_hash_key_fun_1359;
void* __right_value1358 = (void*)0;
char* real_fun_name_1360;
void* __right_value1359 = (void*)0;
struct sType* type2_1361;
struct sClass* klass_1362;
void* __right_value1360 = (void*)0;
void* __right_value1361 = (void*)0;
char* none_generics_name_1363;
void* __right_value1362 = (void*)0;
char* generics_fun_name_1364;
void* __right_value1363 = (void*)0;
struct sGenericsFun* generics_fun_1365;
void* __right_value1364 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1366=0;
_Bool err_1367=0;
void* __right_value1365 = (void*)0;
int i_1368;
void* __right_value1366 = (void*)0;
char* new_fun_name_1369;
void* __right_value1367 = (void*)0;
void* __right_value1368 = (void*)0;
char* __dec_obj275;
void* __right_value1369 = (void*)0;
void* __right_value1370 = (void*)0;
void* __right_value1371 = (void*)0;
struct buffer* source_1370;
int i_1371;
void* __right_value1372 = (void*)0;
struct list$1void$ph* o2_saved_1372;
struct tuple2$2char$phsType$ph* it_1373;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1374=0;
struct sType* field_type_1375=0;
char* p_1377;
int sline_1378;
char* sname_1379;
struct buffer* source3_1380;
char* head_1381;
struct buffer* __dec_obj276;
void* __right_value1373 = (void*)0;
char* __dec_obj277;
void* __right_value1374 = (void*)0;
struct sBlock* block_1382;
void* __right_value1375 = (void*)0;
void* __right_value1376 = (void*)0;
struct sType* result_type_1383;
void* __right_value1377 = (void*)0;
char* name_1384;
void* __right_value1378 = (void*)0;
struct sType* self_type_1385;
struct sType* __list_values37___1387[1];
void* __right_value1379 = (void*)0;
void* __right_value1380 = (void*)0;
struct list$1void$ph* param_types_1386;
void* __right_value1381 = (void*)0;
char* __list_values38___1388[1];
void* __right_value1382 = (void*)0;
void* __right_value1383 = (void*)0;
struct list$1char$ph* param_names_1389;
void* __right_value1384 = (void*)0;
void* __right_value1385 = (void*)0;
struct list$1char$ph* param_default_parametors_1390;
void* __right_value1386 = (void*)0;
void* __right_value1387 = (void*)0;
struct sFun* fun2_1391;
void* __right_value1388 = (void*)0;
void* __right_value1389 = (void*)0;
void* __right_value1390 = (void*)0;
void* __right_value1391 = (void*)0;
struct sFun* fun_1392;
void* __right_value1392 = (void*)0;
void* __right_value1393 = (void*)0;
void* __right_value1394 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1395 = (void*)0;
struct sNode* node_1393;
_Bool Value_1394;
void* __right_value1396 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c31_1395=0;
char* Err_1396=0;
char* __dec_obj278;
struct buffer* __dec_obj279;
char* __dec_obj280;
char* __dec_obj281;
void* __right_value1397 = (void*)0;
void* __right_value1398 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__398;
memset(&i_1368, 0, sizeof(int));
    last_code_1355=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj273=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1356=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj274=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1357=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1358=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1359=((void*)0);
    real_fun_name_1360=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1361=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1361;
    klass_1362=type->mClass;
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1359=((struct sFun*)((void*)(__right_value1360=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1360))));
        come_call_finalizer3(__right_value1360,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        get_hash_key_fun_1359==((void*)0)) {
            none_generics_name_1363=(char*)come_increment_ref_count(get_none_generics_name(type2_1361->mClass->mName));
            generics_fun_name_1364=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1363,fun_name));
            generics_fun_1365=((struct sGenericsFun*)((void*)(__right_value1363=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1364))));
            come_call_finalizer3(__right_value1363,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            generics_fun_1365) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1364=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1360),generics_fun_1365,type,info)));
                name_1366=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1367=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1364,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1367) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1359=((struct sFun*)((void*)(__right_value1365=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_1366))));
                come_call_finalizer3(__right_value1365,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_1366 = come_decrement_ref_count2(name_1366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1363 = come_decrement_ref_count2(none_generics_name_1363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1364 = come_decrement_ref_count2(generics_fun_name_1364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1368=128-1;        i_1368>=1;        i_1368--        ){
            new_fun_name_1369=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1360,i_1368));
            get_hash_key_fun_1359=((struct sFun*)((void*)(__right_value1367=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_1369))));
            come_call_finalizer3(__right_value1367,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            get_hash_key_fun_1359) {
                __dec_obj275=real_fun_name_1360;
                real_fun_name_1360=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1369));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1369 = come_decrement_ref_count2(new_fun_name_1369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1369 = come_decrement_ref_count2(new_fun_name_1369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1359==((void*)0)) {
            get_hash_key_fun_1359=((struct sFun*)((void*)(__right_value1369=map$2void$phvoid$ph$p_operator_load_element(info->funcs,real_fun_name_1360))));
            come_call_finalizer3(__right_value1369,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    get_hash_key_fun_1359==((void*)0)&&type->mPointerNum>0&&!klass_1362->mNumber&&!klass_1362->mProtocol) {
        source_1370=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4149, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1370,"{\n");
        buffer_append_str(source_1370,"unsigned int result = 0;\n");
        i_1371=0;
        klass_1362=((struct sClass*)((void*)(__right_value1372=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_1362->mName))));
        come_call_finalizer3(__right_value1372,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_1372=(struct list$1void$ph*)come_increment_ref_count((klass_1362->mFields)),it_1373=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_1372)));        !list$1void$ph$p_end((o2_saved_1372));        it_1373=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_1372)))        ){
            multiple_assign_var55=it_1373;
            name_1374=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1375=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1376[1024];
            memset(&source2_1376, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1376,1024,"result += ((int)self.%s).get_hash_key();\n",name_1374);
            buffer_append_str(source_1370,source2_1376);
            i_1371++;
            (name_1374 = come_decrement_ref_count2(name_1374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1375,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1372,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1370,"return result;\n");
        buffer_append_char(source_1370,125);
        p_1377=info->p;
        sline_1378=info->sline;
        sname_1379=(char*)come_increment_ref_count(info->sname);
        source3_1380=(struct buffer*)come_increment_ref_count(info->source);
        head_1381=info->head;
        __dec_obj276=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1370);
        come_call_finalizer3(__dec_obj276,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj277=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1360));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1382=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1383=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4186, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1383->mUnsigned=(_Bool)1;
        name_1384=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1360));
        self_type_1385=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1385->mHeap=(_Bool)0;
        param_types_1386=(struct list$1sType$ph*)come_increment_ref_count((__list_values37___1387[0]=self_type_1385,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4191, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values37___1387)));
        param_names_1389=(struct list$1char$ph*)come_increment_ref_count((__list_values38___1388[0]=((char*)(__right_value1381=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4192, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values38___1388)));
        (__right_value1381 = come_decrement_ref_count2(__right_value1381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1390=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4193, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1390,((void*)0));
        result_type_1383->mStatic=(_Bool)0;
        result_type_1383->mUniq=(_Bool)0;
        result_type_1383->mInline=(_Bool)0;
        result_type_1383->mGenerate=(_Bool)0;
        fun2_1391=(struct sFun*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value1386=__builtin_string(name_1384)))));
        (__right_value1386 = come_decrement_ref_count2(__right_value1386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1391==((void*)0)||fun2_1391->mExternal) {
            fun_1392=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4203, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1384),(struct sType*)come_increment_ref_count(result_type_1383),(struct list$1void$ph*)come_increment_ref_count(param_types_1386),(struct list$1char$ph*)come_increment_ref_count(param_names_1389),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1390),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1382),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2void$phvoid$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1384)),(struct sFun*)come_increment_ref_count(fun_1392));
            get_hash_key_fun_1359=fun_1392;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4213, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1394=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4213, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1392),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1393=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1394,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1394=node_compile(node_1393,info);
            if(            !Value_1394) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1396=err_msg(info,"compiling error(Y)")));
                come_exception_var_c31_1395=multiple_assign_var56->v1;
                Err_1396=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1396)?(puts(Err_1396),exit(0)):(0));
                come_call_finalizer3(__right_value1396,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1396 = come_decrement_ref_count2(Err_1396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1392,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1393) ? node_1393 = come_decrement_ref_count2(node_1393, ((struct sNode*)node_1393)->finalize, ((struct sNode*)node_1393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1359=fun2_1391;
        }
        __dec_obj278=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1379);
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1378;
        __dec_obj279=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1380);
        come_call_finalizer3(__dec_obj279,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1377;
        info->head=head_1381;
        info->sline=sline_1378;
        come_call_finalizer3(source_1370,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1379 = come_decrement_ref_count2(sname_1379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1380,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1382,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1383,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1384 = come_decrement_ref_count2(name_1384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1385,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1386,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1389,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1390,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1391,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1358;
    __dec_obj280=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1355);
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1356);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1357;
    __result_obj__398 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1398=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4239, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1359,(char*)come_increment_ref_count(real_fun_name_1360)))));
    (last_code_1355 = come_decrement_ref_count2(last_code_1355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1356 = come_decrement_ref_count2(last_code2_1356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1360 = come_decrement_ref_count2(real_fun_name_1360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1361,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1398,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__398,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__398;
}

