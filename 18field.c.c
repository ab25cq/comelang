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

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
};

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sNullCheckNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};

struct sNullableNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNode$ph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
struct tuple3$3char$phsFun$psGenericsFun$p* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
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
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static void tuple3$3char$phsFun$psGenericsFun$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_clone(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static unsigned int tuple3$3char$phsFun$psGenericsFun$p_get_hash_key(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static _Bool tuple3$3char$phsFun$psGenericsFun$p_equals(struct tuple3$3char$phsFun$psGenericsFun$p* left, struct tuple3$3char$phsFun$psGenericsFun$p* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static void* list$1void$p$p_item(struct list$1void$p* self, int position, void* default_value);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static void sClass_finalize(struct sClass* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
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

struct tuple3$3char$phsFun$psGenericsFun$p* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
char* fun_name2_354;
struct sFun* operator_fun_355;
struct sGenericsFun* generics_fun_356;
void* __right_value259 = (void*)0;
char* none_generics_name_357;
void* __right_value260 = (void*)0;
struct sType* obj_type_358;
void* __right_value261 = (void*)0;
char* __dec_obj23;
void* __right_value262 = (void*)0;
char* fun_name3_359;
void* __right_value263 = (void*)0;
_Bool generics_any_child_362;
void* __right_value302 = (void*)0;
struct sType* no_solved_type_363;
struct sType* __dec_obj48;
struct list$1void$ph* o2_saved_399;
struct sType* it_402;
struct list$1void$ph* o2_saved_405;
struct sType* it_406;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* type2_407;
void* __right_value305 = (void*)0;
struct sType* type_before_408;
void* __right_value306 = (void*)0;
char* __dec_obj49;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_409=0;
_Bool err_410=0;
void* __right_value309 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_411=0;
char* Err_412=0;
void* __right_value310 = (void*)0;
char* __dec_obj50;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_416=0;
_Bool err_417=0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj51;
int i_418;
void* __right_value316 = (void*)0;
char* new_fun_name_419;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj52;
void* __right_value319 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__281;
memset(&i_418, 0, sizeof(int));
    fun_name2_354=((void*)0);
    operator_fun_355=((void*)0);
    generics_fun_356=((void*)0);
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_357=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_358=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj23=fun_name2_354;
        fun_name2_354=(char*)come_increment_ref_count(create_method_name(obj_type_358,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_359=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_357,fun_name));
        generics_fun_356=((struct sGenericsFun*)((void*)(__right_value263=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_359,((void*)0)))));
        come_call_finalizer3(__right_value263,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_356) {
            generics_any_child_362=(_Bool)0;
            no_solved_type_363=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj48=no_solved_type_363;
                no_solved_type_363=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_399=(struct list$1void$ph*)come_increment_ref_count((no_solved_type_363->mGenericsTypes)),it_402=((struct sType*)list$1void$ph$p_begin((o2_saved_399)));                !list$1void$ph$p_end((o2_saved_399));                it_402=((struct sType*)list$1void$ph$p_next((o2_saved_399)))                ){
                    if(                    it_402->mAnyOriginalType) {
                        generics_any_child_362=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_399,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            for(            o2_saved_405=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_406=((struct sType*)list$1void$ph$p_begin((o2_saved_405)));            !list$1void$ph$p_end((o2_saved_405));            it_406=((struct sType*)list$1void$ph$p_next((o2_saved_405)))            ){
                if(                it_406->mAnyOriginalType) {
                    generics_any_child_362=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_405,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            if(            generics_fun_356->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_362)) {
                type2_407=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type))));
                type_before_408=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
                __dec_obj49=fun_name2_354;
                fun_name2_354=(char*)come_increment_ref_count(create_method_name(type2_407,(_Bool)0,fun_name,info,(_Bool)1));
                __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value308=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_354)),generics_fun_356,type2_407,info)));
                name_409=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                err_410=multiple_assign_var1->v2;
                come_call_finalizer3(__right_value308,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_410) {
                    multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value309=err_msg(info,"%s not found",fun_name3_359)));
                    come_exception_var_c1_411=multiple_assign_var2->v1;
                    Err_412=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                    ((Err_412)?(puts(Err_412),exit(0)):(0));
                    come_call_finalizer3(__right_value309,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                operator_fun_355=((struct sFun*)((void*)(__right_value310=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_409))));
                come_call_finalizer3(__right_value310,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                __dec_obj50=fun_name2_354;
                fun_name2_354=(char*)come_increment_ref_count(name_409);
                __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                type=type_before_408;
                come_call_finalizer3(type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_409 = come_decrement_ref_count2(name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value312=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_354)),generics_fun_356,obj_type_358,info)));
                name_416=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                err_417=multiple_assign_var3->v2;
                come_call_finalizer3(__right_value312,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_417) {
                    exit(1);
                }
                operator_fun_355=((struct sFun*)((void*)(__right_value313=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_416))));
                come_call_finalizer3(__right_value313,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                (name_416 = come_decrement_ref_count2(name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(no_solved_type_363,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            operator_fun_355=((struct sFun*)((void*)(__right_value314=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_354))));
            come_call_finalizer3(__right_value314,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_357 = come_decrement_ref_count2(none_generics_name_357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_358,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_359 = come_decrement_ref_count2(fun_name3_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj51=fun_name2_354;
        fun_name2_354=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_418=128-1;        i_418>=1;        i_418--        ){
            new_fun_name_419=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_354,i_418));
            operator_fun_355=((struct sFun*)((void*)(__right_value317=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_419))));
            come_call_finalizer3(__right_value317,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            operator_fun_355) {
                __dec_obj52=fun_name2_354;
                fun_name2_354=(char*)come_increment_ref_count(__builtin_string(new_fun_name_419));
                __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_419 = come_decrement_ref_count2(new_fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_419 = come_decrement_ref_count2(new_fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_355==((void*)0)) {
            operator_fun_355=((struct sFun*)((void*)(__right_value319=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_354))));
            come_call_finalizer3(__right_value319,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    __result_obj__281 = come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value325=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p**)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "18field.c", 93, "struct tuple3$3char$phsFun$psGenericsFun$p", tuple3$3char$phsFun$psGenericsFun$p_finalize, tuple3$3char$phsFun$psGenericsFun$p_clone, tuple3$3char$phsFun$psGenericsFun$p_get_hash_key, tuple3$3char$phsFun$psGenericsFun$p_equals)),(char*)come_increment_ref_count(fun_name2_354),operator_fun_355,generics_fun_356))));
    (fun_name2_354 = come_decrement_ref_count2(fun_name2_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value325,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__281,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__281;
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_360;
unsigned int it_361;
void* __result_obj__241;
void* __result_obj__242;
void* __result_obj__243;
void* __result_obj__244;
    hash_360=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            come_call_equals((void*)0, self->keys[it_361], key)) {
                __result_obj__241 = come_increment_ref_count(self->items[it_361]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__241,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__241;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                __result_obj__242 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__242,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__243,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__243;
        }
    }
    __result_obj__244 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__244,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__244;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__245;
void* __right_value264 = (void*)0;
struct sType* result_375;
void* __right_value265 = (void*)0;
struct sType* __dec_obj24;
void* __right_value266 = (void*)0;
struct sType* __dec_obj25;
void* __right_value274 = (void*)0;
struct list$1void$ph* __dec_obj29;
void* __right_value275 = (void*)0;
struct sType* __dec_obj30;
void* __right_value276 = (void*)0;
struct sType* __dec_obj31;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value280 = (void*)0;
char* __dec_obj34;
void* __right_value281 = (void*)0;
char* __dec_obj35;
void* __right_value282 = (void*)0;
char* __dec_obj36;
void* __right_value290 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value291 = (void*)0;
char* __dec_obj41;
void* __right_value292 = (void*)0;
struct list$1void$ph* __dec_obj42;
void* __right_value300 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value301 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__259;
    if(    self==(void*)0) {
        __result_obj__245 = (void*)0;
        return __result_obj__245;
    }
    result_375=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_375->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_375->mOriginalLoadVarType;
        result_375->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_375->mChannelType;
        result_375->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_375->mGenericsTypes;
        result_375->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_375->mNoSolvedGenericsType;
        result_375->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_375->mAnyOriginalType;
        result_375->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_375->mSizeNum;
        result_375->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_375->mAlignas;
        result_375->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_375->mTupleName;
        result_375->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_375->mAttribute;
        result_375->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_375->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_375->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_375->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_375->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_375->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_375->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_375->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_375->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_375->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_375->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_375->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_375->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_375->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_375->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_375->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_375->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_375->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_375->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_375->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_375->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_375->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_375->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_375->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_375->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_375->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_375->mAsmName;
        result_375->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_375->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_375->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_375->mArrayNum;
        result_375->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_375->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_375->mOriginalTypeName;
        result_375->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_375->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_375->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_375->mParamTypes;
        result_375->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_375->mParamNames;
        result_375->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_375->mResultType;
        result_375->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mVarArgs=self->mVarArgs;
    }
    __result_obj__259 = result_375;
    come_call_finalizer3(result_375,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1void$ph* it_364;
struct list_item$1void$ph* prev_it_365;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        come_call_finalizer3(prev_it_365,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_366;
struct list_item$1sNode$ph* prev_it_367;
    it_366=self->head;
    while(it_366!=((void*)0)) {
        prev_it_367=it_366;
        it_366=it_366->next;
        come_call_finalizer3(prev_it_367,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_368;
    result_368=0;
    result_368+=int_get_hash_key(((int)self->mClass));
    result_368+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_368+=int_get_hash_key(((int)self->mChannelType));
    result_368+=int_get_hash_key(((int)self->mGenericsTypes));
    result_368+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_368+=int_get_hash_key(((int)self->mAnyClass));
    result_368+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_368+=int_get_hash_key(((int)self->mSizeNum));
    result_368+=int_get_hash_key(((int)self->mAlignas));
    result_368+=int_get_hash_key(((int)self->mTupleName));
    result_368+=int_get_hash_key(((int)self->mAttribute));
    result_368+=int_get_hash_key(((int)self->mAllocaValue));
    result_368+=int_get_hash_key(((int)self->mUnsigned));
    result_368+=int_get_hash_key(((int)self->mShort));
    result_368+=int_get_hash_key(((int)self->mLong));
    result_368+=int_get_hash_key(((int)self->mLongLong));
    result_368+=int_get_hash_key(((int)self->mConstant));
    result_368+=int_get_hash_key(((int)self->mAtomic));
    result_368+=int_get_hash_key(((int)self->mRegister));
    result_368+=int_get_hash_key(((int)self->mVolatile));
    result_368+=int_get_hash_key(((int)self->mStatic));
    result_368+=int_get_hash_key(((int)self->mUniq));
    result_368+=int_get_hash_key(((int)self->mRecord));
    result_368+=int_get_hash_key(((int)self->mExtern));
    result_368+=int_get_hash_key(((int)self->mRestrict));
    result_368+=int_get_hash_key(((int)self->mImmutable));
    result_368+=int_get_hash_key(((int)self->mHeap));
    result_368+=int_get_hash_key(((int)self->mChannel));
    result_368+=int_get_hash_key(((int)self->mNoHeap));
    result_368+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_368+=int_get_hash_key(((int)self->mException));
    result_368+=int_get_hash_key(((int)self->mGenerate));
    result_368+=int_get_hash_key(((int)self->mCreateVTable));
    result_368+=int_get_hash_key(((int)self->mDynamic));
    result_368+=int_get_hash_key(((int)self->mInline));
    result_368+=int_get_hash_key(((int)self->mNullValue));
    result_368+=int_get_hash_key(((int)self->mGuardValue));
    result_368+=int_get_hash_key(((int)self->mAsmName));
    result_368+=int_get_hash_key(((int)self->mTypedef));
    result_368+=int_get_hash_key(((int)self->mMultipleTypes));
    result_368+=int_get_hash_key(((int)self->mOriginIsArray));
    result_368+=int_get_hash_key(((int)self->mArrayNum));
    result_368+=int_get_hash_key(((int)self->mPointerNum));
    result_368+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_368+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_368+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_368+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_368+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_368+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_368+=int_get_hash_key(((int)self->mArrayPointerType));
    result_368+=int_get_hash_key(((int)self->mLambdaArray));
    result_368+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_368+=int_get_hash_key(((int)self->mParamTypes));
    result_368+=int_get_hash_key(((int)self->mParamNames));
    result_368+=int_get_hash_key(((int)self->mResultType));
    result_368+=int_get_hash_key(((int)self->mVarArgs));
    return result_368;
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
struct list_item$1void$ph* it_369;
struct list_item$1void$ph* it2_370;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_369=left->head;
    it2_370=right->head;
    while(it_369!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_369->item, it2_370->item)) {
            return (_Bool)0;
        }
        it_369=it_369->next;
        it2_370=it2_370->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_371;
struct list_item$1sNode$ph* it2_372;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_371=left->head;
    it2_372=right->head;
    while(it_371!=((void*)0)) {
        if(        !sNode_equals(it_371->item,it2_372->item)) {
            return (_Bool)0;
        }
        it_371=it_371->next;
        it2_372=it2_372->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_373;
struct list_item$1char$ph* it2_374;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_373=left->head;
    it2_374=right->head;
    while(it_373!=((void*)0)) {
        if(        !string_equals(it_373->item,it2_374->item)) {
            return (_Bool)0;
        }
        it_373=it_373->next;
        it2_374=it2_374->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__246;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1void$ph* result_377;
struct list_item$1void$ph* it_378;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1void$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_377=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1456, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_378=self->head;
    while(it_378!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_377,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_378->item)));
        }
        else {
            list$1void$ph$p_add(result_377,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_378->item)));
        }
        it_378=it_378->next;
    }
    __result_obj__249 = come_increment_ref_count(result_377);
    come_call_finalizer3(result_377,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_376;
    result_376=0;
    result_376+=int_get_hash_key(((int)self->head));
    result_376+=int_get_hash_key(((int)self->tail));
    result_376+=int_get_hash_key(((int)self->len));
    result_376+=int_get_hash_key(((int)self->it));
    return result_376;
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
void* __right_value269 = (void*)0;
struct list_item$1void$ph* litem_379;
void* __dec_obj26;
void* __right_value270 = (void*)0;
struct list_item$1void$ph* litem_380;
void* __dec_obj27;
void* __right_value271 = (void*)0;
struct list_item$1void$ph* litem_381;
void* __dec_obj28;
struct list$1void$ph* __result_obj__248;
    if(    self->len==0) {
        litem_379=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value269=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1475, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj26=litem_379->item;
        litem_379->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value270=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1485, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj27=litem_380->item;
        litem_380->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value271=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1495, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj28=litem_381->item;
        litem_381->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result_obj__248 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__248;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_382;
struct list_item$1void$ph* prev_it_383;
    it_382=self->head;
    while(it_382!=((void*)0)) {
        prev_it_383=it_382;
        it_382=it_382->next;
        come_call_finalizer3(prev_it_383,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__250;
void* __right_value277 = (void*)0;
struct sNode* result_384;
struct sNode* __result_obj__251;
    if(    self==(void*)0) {
        __result_obj__250 = come_increment_ref_count((void*)0);
        ((__result_obj__250) ? __result_obj__250 = come_decrement_ref_count2(__result_obj__250, ((struct sNode*)__result_obj__250)->finalize, ((struct sNode*)__result_obj__250)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__250;
    }
    result_384=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_384->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_384->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_384->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_384->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_384->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_384->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_384->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_384->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_384->kind=self->kind;
    }
    __result_obj__251 = come_increment_ref_count(result_384);
    ((result_384) ? result_384 = come_decrement_ref_count2(result_384, ((struct sNode*)result_384)->finalize, ((struct sNode*)result_384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__251) ? __result_obj__251 = come_decrement_ref_count2(__result_obj__251, ((struct sNode*)__result_obj__251)->finalize, ((struct sNode*)__result_obj__251)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__252;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sNode$ph* result_385;
struct list_item$1sNode$ph* it_386;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1sNode$ph* __result_obj__255;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_385=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1456, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_386=self->head;
    while(it_386!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_385,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_386->item)));
        }
        else {
            list$1sNode$ph$p_add(result_385,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_386->item)));
        }
        it_386=it_386->next;
    }
    __result_obj__255 = come_increment_ref_count(result_385);
    come_call_finalizer3(result_385,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value285 = (void*)0;
struct list_item$1sNode$ph* litem_387;
struct sNode* __dec_obj37;
void* __right_value286 = (void*)0;
struct list_item$1sNode$ph* litem_388;
struct sNode* __dec_obj38;
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_389;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__254;
    if(    self->len==0) {
        litem_387=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value285=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1475, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=((void*)0);
        litem_387->next=((void*)0);
        __dec_obj37=litem_387->item;
        litem_387->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_387;
        self->head=litem_387;
    }
    else if(    self->len==1) {
        litem_388=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value286=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1485, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->head;
        litem_388->next=((void*)0);
        __dec_obj38=litem_388->item;
        litem_388->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_388;
        self->head->next=litem_388;
    }
    else {
        litem_389=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1495, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->tail;
        litem_389->next=((void*)0);
        __dec_obj39=litem_389->item;
        litem_389->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_389;
        self->tail=litem_389;
    }
    self->len++;
    __result_obj__254 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__254;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_390;
struct list_item$1sNode$ph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        come_call_finalizer3(prev_it_391,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__256;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1char$ph* result_392;
struct list_item$1char$ph* it_393;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1char$ph* __result_obj__258;
    if(    self==((void*)0)) {
        __result_obj__256 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__256,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__256;
    }
    result_392=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1456, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_393=self->head;
    while(it_393!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_392,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_393->item)));
        }
        else {
            list$1char$ph$p_add(result_392,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_393->item)));
        }
        it_393=it_393->next;
    }
    __result_obj__258 = come_increment_ref_count(result_392);
    come_call_finalizer3(result_392,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value295 = (void*)0;
struct list_item$1char$ph* litem_394;
char* __dec_obj43;
void* __right_value296 = (void*)0;
struct list_item$1char$ph* litem_395;
char* __dec_obj44;
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_396;
char* __dec_obj45;
struct list$1char$ph* __result_obj__257;
    if(    self->len==0) {
        litem_394=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value295=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1475, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=((void*)0);
        litem_394->next=((void*)0);
        __dec_obj43=litem_394->item;
        litem_394->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_394;
        self->head=litem_394;
    }
    else if(    self->len==1) {
        litem_395=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value296=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1485, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=self->head;
        litem_395->next=((void*)0);
        __dec_obj44=litem_395->item;
        litem_395->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_395;
        self->head->next=litem_395;
    }
    else {
        litem_396=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1495, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=self->tail;
        litem_396->next=((void*)0);
        __dec_obj45=litem_396->item;
        litem_396->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_396;
        self->tail=litem_396;
    }
    self->len++;
    __result_obj__257 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__257;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_397;
struct list_item$1char$ph* prev_it_398;
    it_397=self->head;
    while(it_397!=((void*)0)) {
        prev_it_398=it_397;
        it_397=it_397->next;
        come_call_finalizer3(prev_it_398,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_400;
void* __result_obj__260;
void* __result_obj__261;
void* result_401;
void* __result_obj__262;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_400,0,sizeof(void*));
        __result_obj__260 = result_400;
        return __result_obj__260;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__261 = self->it->item;
        return __result_obj__261;
    }
    memset(&result_401,0,sizeof(void*));
    __result_obj__262 = result_401;
    return __result_obj__262;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_403;
void* __result_obj__263;
void* __result_obj__264;
void* result_404;
void* __result_obj__265;
result_403 = (void*)0;
result_404 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_403,0,sizeof(void*));
        __result_obj__263 = result_403;
        return __result_obj__263;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__264 = self->it->item;
        return __result_obj__264;
    }
    memset(&result_404,0,sizeof(void*));
    __result_obj__265 = result_404;
    return __result_obj__265;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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
void* __result_obj__266;
void* __result_obj__267;
void* __result_obj__268;
void* __result_obj__269;
default_value_413 = (void*)0;
    memset(&default_value_413,0,sizeof(void*));
    hash_414=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_415=hash_414;
    while((_Bool)1) {
        if(        self->item_existance[it_415]) {
            if(            come_call_equals((void*)0, self->keys[it_415], ((char*)key))) {
                __result_obj__266 = come_increment_ref_count(self->items[it_415]);
                come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__266,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__266;
            }
            it_415++;
            if(            it_415>=self->size) {
                it_415=0;
            }
            else if(            it_415==hash_414) {
                __result_obj__267 = come_increment_ref_count(((struct sFun*)default_value_413));
                come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__267,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__267;
            }
        }
        else {
            __result_obj__268 = come_increment_ref_count(((struct sFun*)default_value_413));
            come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__268,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__268;
        }
    }
    __result_obj__269 = come_increment_ref_count(((struct sFun*)default_value_413));
    come_call_finalizer3(default_value_413,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__269,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__269;
}

static void tuple3$3char$phsFun$psGenericsFun$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_clone(struct tuple3$3char$phsFun$psGenericsFun$p* self){
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__270;
void* __right_value320 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* result_420;
void* __right_value321 = (void*)0;
char* __dec_obj53;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__271;
    if(    self==(void*)0) {
        __result_obj__270 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__270,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__270;
    }
    result_420=(struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "tuple3$3char$phsFun$psGenericsFun$p_clone", 3, "struct tuple3$3char$phsFun$psGenericsFun$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj53=result_420->v1;
        result_420->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_420->v3=self->v3;
    }
    __result_obj__271 = come_increment_ref_count(result_420);
    come_call_finalizer3(result_420,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

static unsigned int tuple3$3char$phsFun$psGenericsFun$p_get_hash_key(struct tuple3$3char$phsFun$psGenericsFun$p* self){
unsigned int result_421;
    result_421=0;
    result_421+=int_get_hash_key(((int)self->v1));
    result_421+=int_get_hash_key(((int)self->v2));
    result_421+=int_get_hash_key(((int)self->v3));
    return result_421;
}

static _Bool tuple3$3char$phsFun$psGenericsFun$p_equals(struct tuple3$3char$phsFun$psGenericsFun$p* left, struct tuple3$3char$phsFun$psGenericsFun$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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

static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right){
int n_422;
_Bool result_423;
char* it_426;
void* default_value_429;
void* it2_430;
void* default_value2_433;
void* __right_value322 = (void*)0;
void* item_434;
void* __right_value323 = (void*)0;
void* item2_435;
default_value_429 = (void*)0;
default_value2_433 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_422=0;
    result_423=(_Bool)1;
    for(    it_426=((char*)list$1void$p$p_begin(left->key_list));    !list$1void$p$p_end(left->key_list);    it_426=((char*)list$1void$p$p_next(left->key_list))    ){
        memset(&default_value_429,0,sizeof(void*));
        it2_430=((char*)list$1void$p$p_item(right->key_list,n_422,default_value_429));
        if(        come_call_equals((void*)0, it_426, it2_430)) {
            memset(&default_value2_433,0,sizeof(void*));
            item_434=((void*)(__right_value322=map$2void$phvoid$ph$p_at(left,it_426,(void*)come_increment_ref_count(default_value2_433))));
            come_call_finalizer3(__right_value322,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            item2_435=((void*)(__right_value323=map$2void$phvoid$ph$p_at(right,it2_430,(void*)come_increment_ref_count(default_value2_433))));
            come_call_finalizer3(__right_value323,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            !come_call_equals((void*)0, item_434, item2_435)) {
                result_423=(_Bool)0;
            }
            come_call_finalizer3(default_value2_433,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        else {
            result_423=(_Bool)0;
        }
        n_422++;
        come_call_finalizer3(default_value_429,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    return result_423;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_424;
void* __result_obj__272;
void* __result_obj__273;
void* result_425;
void* __result_obj__274;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_424,0,sizeof(void*));
        __result_obj__272 = result_424;
        return __result_obj__272;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__273 = self->it->item;
        return __result_obj__273;
    }
    memset(&result_425,0,sizeof(void*));
    __result_obj__274 = result_425;
    return __result_obj__274;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_427;
void* __result_obj__275;
void* __result_obj__276;
void* result_428;
void* __result_obj__277;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_427,0,sizeof(void*));
        __result_obj__275 = result_427;
        return __result_obj__275;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__276 = self->it->item;
        return __result_obj__276;
    }
    memset(&result_428,0,sizeof(void*));
    __result_obj__277 = result_428;
    return __result_obj__277;
}

static void* list$1void$p$p_item(struct list$1void$p* self, int position, void* default_value){
struct list_item$1void$p* it_431;
int i_432;
void* __result_obj__278;
void* __result_obj__279;
    if(    position<0) {
        position+=self->len;
    }
    it_431=self->head;
    i_432=0;
    while(it_431!=((void*)0)) {
        if(        position==i_432) {
            __result_obj__278 = it_431->item;
            return __result_obj__278;
        }
        it_431=it_431->next;
        i_432++;
    }
    __result_obj__279 = default_value;
    return __result_obj__279;
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

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
char* __dec_obj54;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__280;
    __dec_obj54=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result_obj__280 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__280,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__280;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value326 = (void*)0;
struct sType* generics_type_436;
struct sType* __dec_obj55;
struct sClass* klass_437;
char* class_name_438;
void* __right_value327 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var4 = (void*)0;
char* fun_name2_439=0;
struct sFun* operator_fun_440=0;
struct sGenericsFun* generics_fun_441=0;
_Bool result_442;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_443;
char* left_value2_444;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_1_448=0;
char* Err_449=0;
_Bool _if_conditional1;
_Bool __result_obj__284;
void* __right_value334 = (void*)0;
_Bool _if_conditional2;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj56;
void* __right_value337 = (void*)0;
char* __dec_obj57;
char* middle_value2_450;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var6 = (void*)0;
_Bool come_exception_var_2_451=0;
char* Err_452=0;
_Bool _if_conditional3;
_Bool __result_obj__285;
void* __right_value342 = (void*)0;
_Bool _if_conditional4;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
char* __dec_obj58;
void* __right_value345 = (void*)0;
char* __dec_obj59;
char* right_value2_453;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var7 = (void*)0;
_Bool come_exception_var_3_454=0;
char* Err_455=0;
_Bool _if_conditional5;
_Bool __result_obj__286;
void* __right_value350 = (void*)0;
_Bool _if_conditional6;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* __dec_obj60;
void* __right_value353 = (void*)0;
char* __dec_obj61;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
char* __dec_obj62;
void* __right_value359 = (void*)0;
struct sType* result_type1_456;
void* __right_value360 = (void*)0;
struct sType* result_type2_457;
struct sType* obj_type_458;
void* __right_value361 = (void*)0;
struct sType* __dec_obj63;
void* __right_value362 = (void*)0;
struct sType* __dec_obj64;
void* __right_value363 = (void*)0;
struct sType* __dec_obj65;
void* __right_value364 = (void*)0;
char* __dec_obj66;
void* __right_value365 = (void*)0;
struct CVALUE* __dec_obj67;
_Bool __result_obj__288;
left_value2_444 = (void*)0;
middle_value2_450 = (void*)0;
right_value2_453 = (void*)0;
    generics_type_436=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_436->mNoSolvedGenericsType) {
        __dec_obj55=generics_type_436;
        generics_type_436=(struct sType*)come_increment_ref_count(generics_type_436->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    klass_437=type->mClass;
    class_name_438=klass_437->mName;
    multiple_assign_var4=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value327=get_operator_function(type,fun_name,info)));
    fun_name2_439=(char*)come_increment_ref_count(multiple_assign_var4->v1);
    operator_fun_440=multiple_assign_var4->v2;
    generics_fun_441=multiple_assign_var4->v3;
    come_call_finalizer3(__right_value327,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    result_442=(_Bool)0;
    if(    operator_fun_440) {
        come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 112, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value333=check_assign_type(((char*)(__right_value331=xsprintf("\%s is assigned to",((char*)(__right_value330=string_to_string(fun_name2_439)))))),((struct sType*)((void*)(__right_value332=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_1_448=multiple_assign_var5->v1;
        Err_449=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        (_if_conditional1=(Err_449)),        (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value332,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value333,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            __result_obj__284 = (_Bool)1;
            come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_444 = come_decrement_ref_count2(left_value2_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_449 = come_decrement_ref_count2(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_439 = come_decrement_ref_count2(fun_name2_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__284;
        }
        else {
        }
        if(        (_if_conditional2=(((struct sType*)((void*)(__right_value334=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,0))))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value334,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)((void*)(__right_value335=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,0)))),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value335,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj56=left_value2_444;
            left_value2_444=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj57=left_value2_444;
            left_value2_444=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        (Err_449 = come_decrement_ref_count2(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var6=((struct tuple2$2bool$char$ph*)(__right_value341=check_assign_type(((char*)(__right_value339=xsprintf("\%s is assigned to",((char*)(__right_value338=string_to_string(fun_name2_439)))))),((struct sType*)((void*)(__right_value340=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,1)))),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_2_451=multiple_assign_var6->v1;
        Err_452=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional3=(Err_452)),        (__right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value340,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value341,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            __result_obj__285 = (_Bool)1;
            come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_444 = come_decrement_ref_count2(left_value2_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (middle_value2_450 = come_decrement_ref_count2(middle_value2_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_452 = come_decrement_ref_count2(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_439 = come_decrement_ref_count2(fun_name2_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__285;
        }
        else {
        }
        if(        (_if_conditional4=(((struct sType*)((void*)(__right_value342=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,1))))->mHeap&&middle_value->type->mHeap)),        come_call_finalizer3(__right_value342,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)((void*)(__right_value343=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,1)))),middle_value->type,middle_value,info,(_Bool)1);
            come_call_finalizer3(__right_value343,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj58=middle_value2_450;
            middle_value2_450=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj59=middle_value2_450;
            middle_value2_450=(char*)come_increment_ref_count(come_call_cloner(string_clone, middle_value->c_value));
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        (Err_452 = come_decrement_ref_count2(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var7=((struct tuple2$2bool$char$ph*)(__right_value349=check_assign_type(((char*)(__right_value347=xsprintf("\%s is assigned to",((char*)(__right_value346=string_to_string(fun_name2_439)))))),((struct sType*)((void*)(__right_value348=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,2)))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_3_454=multiple_assign_var7->v1;
        Err_455=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        (_if_conditional5=(Err_455)),        (__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value348,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value349,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional5) {
            __result_obj__286 = (_Bool)1;
            come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_444 = come_decrement_ref_count2(left_value2_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (middle_value2_450 = come_decrement_ref_count2(middle_value2_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (right_value2_453 = come_decrement_ref_count2(right_value2_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_455 = come_decrement_ref_count2(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_439 = come_decrement_ref_count2(fun_name2_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__286;
        }
        else {
        }
        if(        (_if_conditional6=(((struct sType*)((void*)(__right_value350=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,2))))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value350,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional6) {
            std_move(((struct sType*)((void*)(__right_value351=list$1void$ph$p_operator_load_element(operator_fun_440->mParamTypes,2)))),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value351,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj60=right_value2_453;
            right_value2_453=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj61=right_value2_453;
            right_value2_453=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj62=come_value_443->c_value;
        come_value_443->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value354=string_to_string(fun_name2_439))),((char*)(__right_value355=string_to_string(left_value2_444))),((char*)(__right_value356=string_to_string(middle_value2_450))),((char*)(__right_value357=string_to_string(right_value2_453)))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type1_456=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_440->mResultType));
        result_type2_457=(struct sType*)come_increment_ref_count(solve_generics(result_type1_456,generics_type_436,info));
        obj_type_458=(struct sType*)come_increment_ref_count(generics_type_436);
        if(        result_type2_457->mAnyOriginalType&&generics_fun_441) {
            __dec_obj63=result_type2_457;
            result_type2_457=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_441->mResultType,obj_type_458,info));
            come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj64=come_value_443->type;
            come_value_443->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_457));
            come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_443->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj65=come_value_443->type;
            come_value_443->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_457));
            come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_443->var=((void*)0);
        if(        result_type2_457->mHeap) {
            append_object_to_right_values2(come_value_443,(struct sType*)come_increment_ref_count(result_type2_457),info,(_Bool)0);
        }
        __dec_obj66=come_value_443->c_value;
        come_value_443->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_443->c_value,come_value_443->type,info));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj67=come_value_443;
        come_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_443),info));
        come_call_finalizer3(__dec_obj67,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        add_come_last_code(info,"%s",come_value_443->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_443));
        result_442=(_Bool)1;
        come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (left_value2_444 = come_decrement_ref_count2(left_value2_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (middle_value2_450 = come_decrement_ref_count2(middle_value2_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (right_value2_453 = come_decrement_ref_count2(right_value2_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_455 = come_decrement_ref_count2(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type1_456,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_457,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__288 = result_442;
    come_call_finalizer3(generics_type_436,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_439 = come_decrement_ref_count2(fun_name2_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__288;
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_445;
int i_446;
void* __result_obj__282;
void* default_value_447;
void* __result_obj__283;
default_value_447 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_445=self->head;
    i_446=0;
    while(it_445!=((void*)0)) {
        if(        position==i_446) {
            __result_obj__282 = come_increment_ref_count(it_445->item);
            come_call_finalizer3(__result_obj__282,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__282;
        }
        it_445=it_445->next;
        i_446++;
    }
    memset(&default_value_447,0,sizeof(void*));
    __result_obj__283 = come_increment_ref_count(((struct sType*)default_value_447));
    come_call_finalizer3(default_value_447,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__283,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__283;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value366 = (void*)0;
struct list_item$1CVALUE$ph* litem_459;
struct CVALUE* __dec_obj68;
void* __right_value367 = (void*)0;
struct list_item$1CVALUE$ph* litem_460;
struct CVALUE* __dec_obj69;
void* __right_value368 = (void*)0;
struct list_item$1CVALUE$ph* litem_461;
struct CVALUE* __dec_obj70;
struct list$1CVALUE$ph* __result_obj__287;
    if(    self->len==0) {
        litem_459=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value366=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1545, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_459->prev=((void*)0);
        litem_459->next=((void*)0);
        __dec_obj68=litem_459->item;
        litem_459->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_459;
        self->head=litem_459;
    }
    else if(    self->len==1) {
        litem_460=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value367=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1555, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_460->prev=self->head;
        litem_460->next=((void*)0);
        __dec_obj69=litem_460->item;
        litem_460->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_460;
        self->head->next=litem_460;
    }
    else {
        litem_461=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value368=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1565, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_461->prev=self->tail;
        litem_461->next=((void*)0);
        __dec_obj70=litem_461->item;
        litem_461->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_461;
        self->tail=litem_461;
    }
    self->len++;
    __result_obj__287 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__287;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value371 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value372 = (void*)0;
char* __dec_obj73;
struct sStoreFieldNode* __result_obj__289;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj71=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj72=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj73=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__289 = come_increment_ref_count(self);
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__289,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__289;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __right_value373 = (void*)0;
char* __result_obj__290;
    __result_obj__290 = come_increment_ref_count(((char*)(__right_value373=__builtin_string("sStoreFieldNode"))));
    (__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__290 = come_decrement_ref_count2(__result_obj__290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__290;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_462;
struct sNode* right_463;
void* __right_value374 = (void*)0;
char* name_464;
_Bool Value_465;
_Bool __result_obj__291;
void* __right_value375 = (void*)0;
struct CVALUE* left_value_466;
struct sType* left_type2_467;
struct sType* __dec_obj74;
struct sType* __dec_obj75;
int i_468;
void* __right_value376 = (void*)0;
_Bool _if_conditional7;
void* __right_value377 = (void*)0;
char* __dec_obj76;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
char* __dec_obj77;
_Bool Value_469;
_Bool __result_obj__292;
void* __right_value380 = (void*)0;
_Bool new_channel_470;
void* __right_value381 = (void*)0;
struct CVALUE* right_value_471;
struct sType* right_type_472;
struct sType* left_type_473;
struct sType* left_type2_474;
void* __right_value382 = (void*)0;
struct sClass* klass_475;
struct sType* field_type_476;
int index_477;
char* child_field_name_478;
_Bool child_field_is_pointer_479;
void* __right_value383 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var8 = (void*)0;
int come_exception_var_4_480=0;
char* Err_481=0;
_Bool _if_conditional8;
_Bool __result_obj__293;
struct list$1void$ph* o2_saved_482;
struct tuple2$2char$phsType$ph* field_483;
struct tuple2$2char$phsType$ph* multiple_assign_var9 = (void*)0;
char* field_name_484=0;
struct sType* field_type2_485=0;
void* __right_value384 = (void*)0;
struct sType* __dec_obj78;
struct list$1void$ph* o2_saved_486;
struct tuple2$2char$phsType$ph* field_487;
struct tuple2$2char$phsType$ph* multiple_assign_var10 = (void*)0;
char* field_name_488=0;
struct sType* field_type2_489=0;
struct sClass* klass2_490;
struct list$1void$ph* o2_saved_491;
struct tuple2$2char$phsType$ph* field2_492;
struct tuple2$2char$phsType$ph* multiple_assign_var11 = (void*)0;
char* field_name2_493=0;
struct sType* field_type3_494=0;
void* __right_value385 = (void*)0;
char* __dec_obj79;
void* __right_value386 = (void*)0;
struct sType* __dec_obj80;
void* __right_value387 = (void*)0;
struct sType* __dec_obj81;
void* __right_value388 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_495=0;
char* Err_496=0;
_Bool _if_conditional9;
_Bool __result_obj__294;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_6_498=0;
char* Err_499=0;
_Bool _if_conditional10;
_Bool __result_obj__295;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_7_500=0;
char* Err_501=0;
_Bool _if_conditional11;
_Bool __result_obj__296;
_Bool __result_obj__297;
char* c_value_502;
void* __right_value397 = (void*)0;
char* __dec_obj82;
void* __right_value398 = (void*)0;
char* __dec_obj83;
void* __right_value399 = (void*)0;
char* __dec_obj84;
void* __right_value400 = (void*)0;
char* __dec_obj85;
void* __right_value401 = (void*)0;
char* c_value_503;
void* __right_value402 = (void*)0;
char* __dec_obj86;
char* c_value_504;
void* __right_value403 = (void*)0;
char* __dec_obj87;
void* __right_value404 = (void*)0;
char* __dec_obj88;
void* __right_value405 = (void*)0;
char* __dec_obj89;
void* __right_value406 = (void*)0;
char* __dec_obj90;
void* __right_value407 = (void*)0;
char* c_value_505;
void* __right_value408 = (void*)0;
char* __dec_obj91;
void* __right_value409 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_8_506=0;
char* Err_507=0;
_Bool _if_conditional12;
_Bool __result_obj__298;
char* c_value_508;
void* __right_value410 = (void*)0;
char* __dec_obj92;
void* __right_value411 = (void*)0;
char* __dec_obj93;
void* __right_value412 = (void*)0;
char* __dec_obj94;
void* __right_value413 = (void*)0;
char* __dec_obj95;
void* __right_value414 = (void*)0;
char* c_value_509;
void* __right_value415 = (void*)0;
char* __dec_obj96;
char* c_value_510;
void* __right_value416 = (void*)0;
char* __dec_obj97;
void* __right_value417 = (void*)0;
char* __dec_obj98;
void* __right_value418 = (void*)0;
char* __dec_obj99;
void* __right_value419 = (void*)0;
char* __dec_obj100;
void* __right_value420 = (void*)0;
char* c_value_511;
void* __right_value421 = (void*)0;
char* __dec_obj101;
void* __right_value422 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_9_512=0;
char* Err_513=0;
_Bool _if_conditional13;
_Bool __result_obj__299;
void* __right_value423 = (void*)0;
char* __dec_obj102;
void* __right_value424 = (void*)0;
char* __dec_obj103;
void* __right_value425 = (void*)0;
struct sType* __dec_obj104;
_Bool __result_obj__300;
void* __right_value426 = (void*)0;
char* __dec_obj105;
void* __right_value427 = (void*)0;
char* __dec_obj106;
void* __right_value428 = (void*)0;
char* __dec_obj107;
void* __right_value429 = (void*)0;
char* __dec_obj108;
void* __right_value430 = (void*)0;
char* __dec_obj109;
void* __right_value431 = (void*)0;
char* __dec_obj110;
void* __right_value432 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_10_514=0;
char* Err_515=0;
_Bool _if_conditional14;
_Bool __result_obj__301;
void* __right_value433 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__302;
c_value_502 = (void*)0;
c_value_504 = (void*)0;
c_value_508 = (void*)0;
c_value_510 = (void*)0;
    left_462=self->mLeft;
    right_463=self->mRight;
    name_464=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_465=node_compile(left_462,info);
    if(    !Value_465) {
        __result_obj__291 = (_Bool)0;
        (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__291;
    }
    else {
    }
    left_value_466=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_467=(struct sType*)come_increment_ref_count(left_value_466->type);
    if(    left_type2_467->mNoSolvedGenericsType) {
        __dec_obj74=left_type2_467;
        left_type2_467=(struct sType*)come_increment_ref_count(left_type2_467->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    left_type2_467->mAnyOriginalType) {
        __dec_obj75=left_type2_467;
        left_type2_467=(struct sType*)come_increment_ref_count(left_type2_467->mAnyOriginalType);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_467->mClass->mName,"tuple1")||string_operator_equals(left_type2_467->mClass->mName,"tuple2")||string_operator_equals(left_type2_467->mClass->mName,"tuple3")||string_operator_equals(left_type2_467->mClass->mName,"tuple3")||string_operator_equals(left_type2_467->mClass->mName,"tuple4")||string_operator_equals(left_type2_467->mClass->mName,"tuple5")) {
        for(        i_468=0;        i_468<list$1void$ph$p_length(left_type2_467->mGenericsTypes);        i_468++        ){
            if(            (_if_conditional7=(string_operator_equals(name_464,((struct sType*)((void*)(__right_value376=list$1void$ph$p_operator_load_element(left_type2_467->mGenericsTypes,i_468))))->mTupleName))),            come_call_finalizer3(__right_value376,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional7) {
                __dec_obj76=name_464;
                name_464=(char*)come_increment_ref_count(xsprintf("v%d",i_468+1));
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_466->type->mPointerNum>0) {
        __dec_obj77=left_value_466->c_value;
        left_value_466->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value378=make_type_name_string(left_value_466->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_466->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    Value_469=node_compile(right_463,info);
    if(    !Value_469) {
        __result_obj__292 = (_Bool)0;
        (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_467,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__292;
    }
    else {
    }
    new_channel_470=string_operator_equals(((char*)(__right_value380=right_463->kind(right_463->_protocol_obj))),"sNewChannel");
    (__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    right_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_472=right_value_471->type;
    dec_stack_ptr(1,info);
    left_type_473=left_value_466->type;
    come_call_finalizer3(left_type2_467,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_474=left_type_473;
    klass_475=(struct sClass*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->classes,left_type2_474->mClass->mName));
    field_type_476=((void*)0);
    index_477=0;
    child_field_name_478=((void*)0);
    child_field_is_pointer_479=(_Bool)0;
    if(    klass_475->mFields==((void*)0)) {
        multiple_assign_var8=((struct tuple2$2int$char$ph*)(__right_value383=err_msg(info,"%s fields are null",klass_475->mName)));
        come_exception_var_4_480=multiple_assign_var8->v1;
        Err_481=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        if(        (_if_conditional8=(Err_481)),        come_call_finalizer3(__right_value383,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional8) {
            __result_obj__293 = (_Bool)1;
            (Err_481 = come_decrement_ref_count2(Err_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
            (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__293;
        }
        else {
        }
        (Err_481 = come_decrement_ref_count2(Err_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    o2_saved_482=(struct list$1void$ph*)come_increment_ref_count((klass_475->mFields)),field_483=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_482)));    !list$1void$ph$p_end((o2_saved_482));    field_483=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_482)))    ){
        multiple_assign_var9=field_483;
        field_name_484=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        field_type2_485=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        string_operator_equals(field_name_484,name_464)) {
            __dec_obj78=field_type_476;
            field_type_476=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_485));
            come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_484 = come_decrement_ref_count2(field_name_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_485,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_477++;
        (field_name_484 = come_decrement_ref_count2(field_name_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type2_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_482,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_477==list$1void$ph$p_length(klass_475->mFields)) {
        index_477=0;
        for(        o2_saved_486=(struct list$1void$ph*)come_increment_ref_count((klass_475->mFields)),field_487=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_486)));        !list$1void$ph$p_end((o2_saved_486));        field_487=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_486)))        ){
            multiple_assign_var10=field_487;
            field_name_488=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type2_489=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            klass2_490=field_type2_489->mClass;
            if(            klass2_490->mUnion) {
                for(                o2_saved_491=(struct list$1void$ph*)come_increment_ref_count((klass2_490->mFields)),field2_492=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_491)));                !list$1void$ph$p_end((o2_saved_491));                field2_492=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_491)))                ){
                    multiple_assign_var11=field2_492;
                    field_name2_493=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                    field_type3_494=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
                    if(                    string_operator_equals(field_name2_493,name_464)) {
                        __dec_obj79=child_field_name_478;
                        child_field_name_478=(char*)come_increment_ref_count(__builtin_string(field_name_488));
                        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        field_type2_489->mPointerNum>0) {
                            child_field_is_pointer_479=(_Bool)1;
                        }
                        __dec_obj80=field_type_476;
                        field_type_476=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_494));
                        come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        (field_name2_493 = come_decrement_ref_count2(field_name2_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(field_type3_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    (field_name2_493 = come_decrement_ref_count2(field_name2_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type3_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_491,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                if(                child_field_name_478) {
                    (field_name_488 = come_decrement_ref_count2(field_name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type2_489,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_488,name_464)) {
                __dec_obj81=field_type_476;
                field_type_476=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_489));
                come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_488 = come_decrement_ref_count2(field_name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type2_489,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_477++;
            (field_name_488 = come_decrement_ref_count2(field_name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_489,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_486,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_477==list$1void$ph$p_length(klass_475->mFields)||field_type_476==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value388=err_msg(info,"field not found(%s) in %s(1)",name_464,klass_475->mName)));
            come_exception_var_5_495=multiple_assign_var12->v1;
            Err_496=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional9=(Err_496)),            come_call_finalizer3(__right_value388,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result_obj__294 = (_Bool)1;
                (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__294;
            }
            else {
            }
            (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 322, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    right_type_472=((struct sType*)(__right_value391=come_call_cloner(sType_clone, right_value_471->type)));
    come_call_finalizer3(__right_value391,sType_finalize, 0, 1, 0, 0, (void*)0);
    multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value394=check_assign_type(((char*)(__right_value393=xsprintf("\%s is assigned to(1)",((char*)(__right_value392=string_to_string(name_464)))))),field_type_476,right_type_472,right_value_471,(_Bool)0,(_Bool)1,(_Bool)0,info)));
    come_exception_var_6_498=multiple_assign_var13->v1;
    Err_499=(char*)come_increment_ref_count(multiple_assign_var13->v2);
    if(    (_if_conditional10=(Err_499)),    (__right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value394,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional10) {
        __result_obj__295 = (_Bool)1;
        (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
        (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__295;
    }
    else {
    }
    right_type_472=((struct sType*)(__right_value395=come_call_cloner(sType_clone, right_value_471->type)));
    come_call_finalizer3(__right_value395,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_476->mHeap&&!right_value_471->type->mHeap) {
        if(        string_operator_equals(right_value_471->type->mClass->mName,"void")&&right_value_471->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value396=err_msg(info,"require right value as heap object(%s)(1)",name_464)));
                come_exception_var_7_500=multiple_assign_var14->v1;
                Err_501=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                (_if_conditional11=(Err_501)),                come_call_finalizer3(__right_value396,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    printf("right type is %s pointer num %d heap %d\n",right_value_471->type->mClass->mName,right_value_471->type->mPointerNum,right_value_471->type->mHeap);
                    __result_obj__296 = (_Bool)1;
                    (Err_501 = come_decrement_ref_count2(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__296;
                }
                else {
                }
                __result_obj__297 = (_Bool)0;
                (Err_501 = come_decrement_ref_count2(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__297;
                (Err_501 = come_decrement_ref_count2(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    field_type_476->mHeap&&right_type_472->mHeap&&field_type_476->mPointerNum>0&&right_type_472->mPointerNum>0) {
        if(        left_value_466->type->mPointerNum==1) {
            if(            child_field_name_478) {
                if(                child_field_is_pointer_479) {
                    __dec_obj82=c_value_502;
                    c_value_502=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj83=c_value_502;
                    c_value_502=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_476,c_value_502,info,(_Bool)0,(_Bool)0);
                std_move(field_type_476,right_type_472,right_value_471,info,(_Bool)0);
                if(                child_field_is_pointer_479) {
                    __dec_obj84=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj85=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_502 = come_decrement_ref_count2(c_value_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_503=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_466->c_value,name_464));
                decrement_ref_count_object(field_type_476,c_value_503,info,(_Bool)0,(_Bool)0);
                std_move(field_type_476,right_type_472,right_value_471,info,(_Bool)0);
                __dec_obj86=come_value_497->c_value;
                come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_466->c_value,name_464,right_value_471->c_value));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_503 = come_decrement_ref_count2(c_value_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_466->type->mPointerNum==0) {
            if(            child_field_name_478) {
                if(                child_field_is_pointer_479) {
                    __dec_obj87=c_value_504;
                    c_value_504=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj88=c_value_504;
                    c_value_504=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_476,c_value_504,info,(_Bool)0,(_Bool)0);
                std_move(field_type_476,right_type_472,right_value_471,info,(_Bool)0);
                if(                child_field_is_pointer_479) {
                    __dec_obj89=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj90=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_504 = come_decrement_ref_count2(c_value_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_505=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_466->c_value,name_464));
                decrement_ref_count_object(field_type_476,c_value_505,info,(_Bool)0,(_Bool)0);
                std_move(field_type_476,right_value_471->type,right_value_471,info,(_Bool)0);
                __dec_obj91=come_value_497->c_value;
                come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_466->c_value,name_464,right_value_471->c_value));
                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_505 = come_decrement_ref_count2(c_value_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value409=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_464,left_value_466->type->mPointerNum)));
            come_exception_var_8_506=multiple_assign_var15->v1;
            Err_507=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            if(            (_if_conditional12=(Err_507)),            come_call_finalizer3(__right_value409,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                __result_obj__298 = (_Bool)1;
                (Err_507 = come_decrement_ref_count2(Err_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__298;
            }
            else {
            }
            (Err_507 = come_decrement_ref_count2(Err_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    field_type_476->mHeap&&field_type_476->mPointerNum>0&&right_type_472->mPointerNum>0&&string_operator_equals(right_type_472->mClass->mName,"void")) {
        if(        left_value_466->type->mPointerNum==1) {
            if(            child_field_name_478) {
                if(                child_field_is_pointer_479) {
                    __dec_obj92=c_value_508;
                    c_value_508=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj93=c_value_508;
                    c_value_508=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_476,c_value_508,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_479) {
                    __dec_obj94=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj95=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_508 = come_decrement_ref_count2(c_value_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_509=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_466->c_value,name_464));
                decrement_ref_count_object(field_type_476,c_value_509,info,(_Bool)0,(_Bool)0);
                __dec_obj96=come_value_497->c_value;
                come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_466->c_value,name_464,right_value_471->c_value));
                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_509 = come_decrement_ref_count2(c_value_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_466->type->mPointerNum==0) {
            if(            child_field_name_478) {
                if(                child_field_is_pointer_479) {
                    __dec_obj97=c_value_510;
                    c_value_510=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj98=c_value_510;
                    c_value_510=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_466->c_value,child_field_name_478,name_464));
                    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_476,c_value_510,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_479) {
                    __dec_obj99=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj100=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_510 = come_decrement_ref_count2(c_value_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_511=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_466->c_value,name_464));
                decrement_ref_count_object(field_type_476,c_value_511,info,(_Bool)0,(_Bool)0);
                __dec_obj101=come_value_497->c_value;
                come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_466->c_value,name_464,right_value_471->c_value));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_511 = come_decrement_ref_count2(c_value_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value422=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_464,left_value_466->type->mPointerNum)));
            come_exception_var_9_512=multiple_assign_var16->v1;
            Err_513=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            if(            (_if_conditional13=(Err_513)),            come_call_finalizer3(__right_value422,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                __result_obj__299 = (_Bool)1;
                (Err_513 = come_decrement_ref_count2(Err_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__299;
            }
            else {
            }
            (Err_513 = come_decrement_ref_count2(Err_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    field_type_476->mChannel&&new_channel_470) {
        if(        child_field_is_pointer_479) {
            __dec_obj102=come_value_497->c_value;
            come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_466->c_value,name_464,right_value_471->c_value));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj103=come_value_497->c_value;
            come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_466->c_value,name_464,right_value_471->c_value));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj104=come_value_497->type;
        come_value_497->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_471->type));
        come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_497->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_497));
        add_come_last_code(info,"%s",come_value_497->c_value);
        __result_obj__300 = (_Bool)1;
        (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
        (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__300;
    }
    else {
        if(        left_value_466->type->mPointerNum==1) {
            if(            child_field_name_478) {
                if(                child_field_is_pointer_479) {
                    __dec_obj105=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj106=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj107=come_value_497->c_value;
                come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_466->c_value,name_464,right_value_471->c_value));
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_466->type->mPointerNum==0) {
            if(            child_field_name_478) {
                if(                child_field_is_pointer_479) {
                    __dec_obj108=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj109=come_value_497->c_value;
                    come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_466->c_value,child_field_name_478,name_464,right_value_471->c_value));
                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj110=come_value_497->c_value;
                come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_466->c_value,name_464,right_value_471->c_value));
                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value432=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_464,left_value_466->type->mPointerNum)));
            come_exception_var_10_514=multiple_assign_var17->v1;
            Err_515=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional14=(Err_515)),            come_call_finalizer3(__right_value432,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                __result_obj__301 = (_Bool)1;
                (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__301;
            }
            else {
            }
            (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj111=come_value_497->type;
    come_value_497->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_476));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_497->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_497));
    add_come_last_code(info,"%s",come_value_497->c_value);
    __result_obj__302 = (_Bool)1;
    (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(klass_475,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
    (child_field_name_478 = come_decrement_ref_count2(child_field_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__302;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* __dec_obj112;
struct sNullCheckNode* __result_obj__303;
struct sNullCheckNode* __result_obj__304;
    ((struct sNodeBase*)(__right_value434=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value434,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result_obj__303 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__303,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
    __result_obj__304 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__304,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__304;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __right_value436 = (void*)0;
char* __result_obj__305;
    __result_obj__305 = come_increment_ref_count(((char*)(__right_value436=__builtin_string("sNullCheckNode"))));
    (__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__305 = come_decrement_ref_count2(__result_obj__305, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__305;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_516;
_Bool Value_517;
void* __right_value437 = (void*)0;
struct CVALUE* left_value_518;
void* __right_value438 = (void*)0;
char* method_name_519;
void* __right_value439 = (void*)0;
_Bool _if_conditional15;
struct sType* obj_type_520;
struct sType* obj_type2_521;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var18 = (void*)0;
char* name_522=0;
struct sGenericsFun* generics_fun_523=0;
char* __dec_obj113;
void* __right_value442 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_11_524=0;
char* Err_525=0;
_Bool _if_conditional16;
_Bool __result_obj__306;
void* __right_value443 = (void*)0;
struct sFun* fun_526;
void* __right_value444 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_12_527=0;
char* Err_528=0;
_Bool _if_conditional17;
_Bool __result_obj__307;
void* __right_value445 = (void*)0;
struct sType* type_529;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct CVALUE* come_value_530;
void* __right_value448 = (void*)0;
char* __dec_obj114;
void* __right_value449 = (void*)0;
struct sType* __dec_obj115;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct CVALUE* come_value_531;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
char* __dec_obj116;
void* __right_value454 = (void*)0;
struct sType* __dec_obj117;
_Bool __result_obj__308;
    left_516=self->mLeft;
    Value_517=node_compile(left_516,info);
    if(    !Value_517) {
        return (_Bool)0;
    }
    else {
    }
    left_value_518=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_518->type->mNoSolvedGenericsType&&left_value_518->type->mNoSolvedGenericsType->mClass&&string_operator_equals(left_value_518->type->mNoSolvedGenericsType->mClass->mName,"optional")) {
        method_name_519=(char*)come_increment_ref_count(create_method_name(left_value_518->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional15=(((struct sFun*)((void*)(__right_value439=map$2void$phvoid$ph$p_at(info->funcs,method_name_519,((void*)0)))))==((void*)0))),        come_call_finalizer3(__right_value439,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional15) {
            obj_type_520=left_value_518->type->mNoSolvedGenericsType;
            if(            list$1void$ph$p_length(obj_type_520->mGenericsTypes)>0) {
                obj_type2_521=left_value_518->type;
                multiple_assign_var18=((struct tuple2$2char$phsGenericsFun$p*)(__right_value441=make_generics_function(obj_type2_521,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1)));
                name_522=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                generics_fun_523=multiple_assign_var18->v2;
                come_call_finalizer3(__right_value441,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj113=method_name_519;
                method_name_519=(char*)come_increment_ref_count(name_522);
                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                (name_522 = come_decrement_ref_count2(name_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value442=err_msg(info,"require expect implementation(%s)",left_value_518->type->mClass->mName)));
                come_exception_var_11_524=multiple_assign_var19->v1;
                Err_525=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional16=(Err_525)),                come_call_finalizer3(__right_value442,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    __result_obj__306 = (_Bool)1;
                    (Err_525 = come_decrement_ref_count2(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (method_name_519 = come_decrement_ref_count2(method_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__306;
                }
                else {
                }
                (Err_525 = come_decrement_ref_count2(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        fun_526=((struct sFun*)((void*)(__right_value443=map$2void$phvoid$ph$p_operator_load_element(info->funcs,method_name_519))));
        come_call_finalizer3(__right_value443,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_526==((void*)0)) {
            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value444=err_msg(info,"function not found(%s)",method_name_519)));
            come_exception_var_12_527=multiple_assign_var20->v1;
            Err_528=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional17=(Err_528)),            come_call_finalizer3(__right_value444,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional17) {
                __result_obj__307 = (_Bool)1;
                (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (method_name_519 = come_decrement_ref_count2(method_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__307;
            }
            else {
            }
            (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_529=(struct sType*)come_increment_ref_count(solve_generics(fun_526->mResultType,left_value_518->type,info));
        come_value_530=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 576, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj114=come_value_530->c_value;
        come_value_530->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_519,left_value_518->c_value));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj115=come_value_530->type;
        come_value_530->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_529));
        come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_530->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_530));
        add_come_last_code(info,"%s",come_value_530->c_value);
        (method_name_519 = come_decrement_ref_count2(method_name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_518));
    }
    else if(    left_value_518->type->mPointerNum>0) {
        come_value_531=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 590, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj116=come_value_531->c_value;
        come_value_531->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value452=make_type_name_string(left_value_518->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_518->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj117=come_value_531->type;
        come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_518->type));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_531->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_531));
        add_come_last_code(info,"%s",come_value_531->c_value);
        come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_518));
    }
    __result_obj__308 = (_Bool)1;
    come_call_finalizer3(left_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__308;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sNode* __dec_obj118;
struct sNullableNode* __result_obj__309;
    ((struct sNodeBase*)(__right_value455=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value455,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__309 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__309,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__309;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __right_value457 = (void*)0;
char* __result_obj__310;
    __result_obj__310 = come_increment_ref_count(((char*)(__right_value457=__builtin_string("sNullableNode"))));
    (__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__310 = come_decrement_ref_count2(__result_obj__310, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__310;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_532;
_Bool Value_533;
void* __right_value458 = (void*)0;
struct CVALUE* left_value_534;
void* __right_value464 = (void*)0;
struct CVALUE* come_value_535;
_Bool __result_obj__313;
    left_532=self->mLeft;
    Value_533=node_compile(left_532,info);
    if(    !Value_533) {
        return (_Bool)0;
    }
    else {
    }
    left_value_534=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_534->type->mPointerNum>0&&left_value_534->type->mNullValue) {
        come_value_535=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, left_value_534));
        come_value_535->type->mNullValue=(_Bool)0;
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_535));
        add_come_last_code(info,"%s",come_value_535->c_value);
        come_call_finalizer3(come_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_534));
    }
    __result_obj__313 = (_Bool)1;
    come_call_finalizer3(left_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__313;
}

static void sNullableNode_finalize(struct sNullableNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__311;
void* __right_value459 = (void*)0;
struct CVALUE* result_536;
void* __right_value460 = (void*)0;
char* __dec_obj119;
void* __right_value461 = (void*)0;
struct sType* __dec_obj120;
void* __right_value462 = (void*)0;
char* __dec_obj121;
void* __right_value463 = (void*)0;
char* __dec_obj122;
struct CVALUE* __result_obj__312;
    if(    self==(void*)0) {
        __result_obj__311 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__311,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__311;
    }
    result_536=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj119=result_536->c_value;
        result_536->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj120=result_536->type;
        result_536->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_536->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_536->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj121=result_536->c_value_without_right_value_objects;
        result_536->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj122=result_536->c_value_without_cast_object_value;
        result_536->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__312 = come_increment_ref_count(result_536);
    come_call_finalizer3(result_536,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__312,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__312;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value470 = (void*)0;
struct sNode* __result_obj__316;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 652, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value466=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 652, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result_obj__316 = come_increment_ref_count(((struct sNode*)(__right_value470=_inf_value1)));
    come_call_finalizer3(__right_value466,sNullableNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value470) ? __right_value470 = come_decrement_ref_count2(__right_value470, ((struct sNode*)__right_value470)->finalize, ((struct sNode*)__right_value470)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count2(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__316;
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
struct sNullableNode* __result_obj__314;
void* __right_value467 = (void*)0;
struct sNullableNode* result_537;
void* __right_value468 = (void*)0;
char* __dec_obj123;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj124;
struct sNullableNode* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_537=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_537->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_537->sname;
        result_537->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_537->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj124=result_537->mLeft;
        result_537->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__315 = result_537;
    come_call_finalizer3(result_537,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__315;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value473 = (void*)0;
char* __dec_obj126;
struct sLoadFieldNode* __result_obj__317;
    ((struct sNodeBase*)(__right_value471=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value471,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj125=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj126=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__317 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__317,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __right_value474 = (void*)0;
char* __result_obj__318;
    __result_obj__318 = come_increment_ref_count(((char*)(__right_value474=__builtin_string("sLoadFieldNode"))));
    (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__318 = come_decrement_ref_count2(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__318;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_538;
void* __right_value475 = (void*)0;
char* name_539;
_Bool Value_540;
_Bool __result_obj__319;
void* __right_value476 = (void*)0;
struct CVALUE* left_value_541;
struct sType* left_type2_542;
struct sType* __dec_obj127;
struct sType* __dec_obj128;
int i_543;
void* __right_value477 = (void*)0;
_Bool _if_conditional18;
void* __right_value478 = (void*)0;
char* __dec_obj129;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
char* __dec_obj130;
struct sType* left_type_544;
void* __right_value481 = (void*)0;
struct sType* left_type2_545;
struct sClass* klass_546;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* field_type_547;
int index_548;
_Bool child_field_is_pointer_549;
char* child_field_name_550;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_13_551=0;
char* Err_552=0;
_Bool _if_conditional19;
_Bool __result_obj__320;
struct list$1void$ph* o2_saved_553;
struct tuple2$2char$phsType$ph* field_554;
struct tuple2$2char$phsType$ph* multiple_assign_var22 = (void*)0;
char* field_name_555=0;
struct sType* field_type2_556=0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj131;
struct list$1void$ph* o2_saved_557;
struct tuple2$2char$phsType$ph* field_558;
struct tuple2$2char$phsType$ph* multiple_assign_var23 = (void*)0;
char* field_name_559=0;
struct sType* field_type2_560=0;
struct sClass* klass2_561;
struct list$1void$ph* o2_saved_562;
struct tuple2$2char$phsType$ph* field2_563;
struct tuple2$2char$phsType$ph* multiple_assign_var24 = (void*)0;
char* field_name2_564=0;
struct sType* field_type3_565=0;
void* __right_value488 = (void*)0;
char* __dec_obj132;
void* __right_value489 = (void*)0;
struct sType* __dec_obj133;
void* __right_value490 = (void*)0;
struct sType* __dec_obj134;
void* __right_value491 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_14_566=0;
char* Err_567=0;
_Bool _if_conditional20;
_Bool __result_obj__321;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct CVALUE* come_value_568;
void* __right_value494 = (void*)0;
char* __dec_obj135;
void* __right_value495 = (void*)0;
char* __dec_obj136;
void* __right_value496 = (void*)0;
char* __dec_obj137;
void* __right_value497 = (void*)0;
char* __dec_obj138;
void* __right_value498 = (void*)0;
char* __dec_obj139;
void* __right_value499 = (void*)0;
char* __dec_obj140;
void* __right_value500 = (void*)0;
struct sType* __dec_obj141;
void* __right_value501 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_15_569=0;
char* Err_570=0;
_Bool _if_conditional21;
_Bool __result_obj__322;
void* __right_value502 = (void*)0;
struct sType* __dec_obj142;
_Bool __result_obj__324;
    left_538=self->mLeft;
    name_539=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_540=node_compile(left_538,info);
    if(    !Value_540) {
        __result_obj__319 = (_Bool)0;
        (name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__319;
    }
    else {
    }
    left_value_541=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_542=(struct sType*)come_increment_ref_count(left_value_541->type);
    if(    left_type2_542->mNoSolvedGenericsType) {
        __dec_obj127=left_type2_542;
        left_type2_542=(struct sType*)come_increment_ref_count(left_type2_542->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    left_type2_542->mAnyOriginalType) {
        __dec_obj128=left_type2_542;
        left_type2_542=(struct sType*)come_increment_ref_count(left_type2_542->mAnyOriginalType);
        come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_542->mClass->mName,"tuple1")||string_operator_equals(left_type2_542->mClass->mName,"tuple2")||string_operator_equals(left_type2_542->mClass->mName,"tuple3")||string_operator_equals(left_type2_542->mClass->mName,"tuple3")||string_operator_equals(left_type2_542->mClass->mName,"tuple4")||string_operator_equals(left_type2_542->mClass->mName,"tuple5")) {
        for(        i_543=0;        i_543<list$1void$ph$p_length(left_type2_542->mGenericsTypes);        i_543++        ){
            if(            (_if_conditional18=(string_operator_equals(name_539,((struct sType*)((void*)(__right_value477=list$1void$ph$p_operator_load_element(left_type2_542->mGenericsTypes,i_543))))->mTupleName))),            come_call_finalizer3(__right_value477,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional18) {
                __dec_obj129=name_539;
                name_539=(char*)come_increment_ref_count(xsprintf("v%d",i_543+1));
                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_541->type->mPointerNum>0) {
        __dec_obj130=left_value_541->c_value;
        left_value_541->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value479=make_type_name_string(left_value_541->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_541->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    left_type_544=left_value_541->type;
    come_call_finalizer3(left_type2_542,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_545=(struct sType*)come_increment_ref_count(solve_generics(left_type_544,left_type_544,info));
    klass_546=left_type2_545->mClass;
    klass_546=((struct sClass*)((void*)(__right_value483=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value482=__builtin_string(klass_546->mName)))))));
    (__right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value483,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    field_type_547=((void*)0);
    index_548=0;
    child_field_is_pointer_549=(_Bool)0;
    child_field_name_550=((void*)0);
    klass_546=((struct sClass*)((void*)(__right_value485=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value484=__builtin_string(klass_546->mName)))))));
    (__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value485,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    klass_546==((void*)0)||klass_546->mFields==((void*)0)) {
        multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value486=err_msg(info,"invalid class %s",klass_546->mName)));
        come_exception_var_13_551=multiple_assign_var21->v1;
        Err_552=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        if(        (_if_conditional19=(Err_552)),        come_call_finalizer3(__right_value486,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
            __result_obj__320 = (_Bool)1;
            (Err_552 = come_decrement_ref_count2(Err_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_545,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
            (child_field_name_550 = come_decrement_ref_count2(child_field_name_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__320;
        }
        else {
        }
        (Err_552 = come_decrement_ref_count2(Err_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    o2_saved_553=(struct list$1void$ph*)come_increment_ref_count((klass_546->mFields)),field_554=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_553)));    !list$1void$ph$p_end((o2_saved_553));    field_554=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_553)))    ){
        multiple_assign_var22=field_554;
        field_name_555=(char*)come_increment_ref_count(multiple_assign_var22->v1);
        field_type2_556=(struct sType*)come_increment_ref_count(multiple_assign_var22->v2);
        if(        string_operator_equals(field_name_555,name_539)) {
            __dec_obj131=field_type_547;
            field_type_547=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_556));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_555 = come_decrement_ref_count2(field_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_556,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_548++;
        (field_name_555 = come_decrement_ref_count2(field_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type2_556,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_553,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_548==list$1void$ph$p_length(klass_546->mFields)) {
        index_548=0;
        for(        o2_saved_557=(struct list$1void$ph*)come_increment_ref_count((klass_546->mFields)),field_558=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_557)));        !list$1void$ph$p_end((o2_saved_557));        field_558=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_557)))        ){
            multiple_assign_var23=field_558;
            field_name_559=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type2_560=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            klass2_561=field_type2_560->mClass;
            if(            klass2_561->mUnion) {
                for(                o2_saved_562=(struct list$1void$ph*)come_increment_ref_count((klass2_561->mFields)),field2_563=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_562)));                !list$1void$ph$p_end((o2_saved_562));                field2_563=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_562)))                ){
                    multiple_assign_var24=field2_563;
                    field_name2_564=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                    field_type3_565=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
                    if(                    string_operator_equals(field_name2_564,name_539)) {
                        __dec_obj132=child_field_name_550;
                        child_field_name_550=(char*)come_increment_ref_count(__builtin_string(field_name_559));
                        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        field_type2_560->mPointerNum>0) {
                            child_field_is_pointer_549=(_Bool)1;
                        }
                        __dec_obj133=field_type_547;
                        field_type_547=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_565));
                        come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        (field_name2_564 = come_decrement_ref_count2(field_name2_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(field_type3_565,sType_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    (field_name2_564 = come_decrement_ref_count2(field_name2_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type3_565,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_562,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                if(                child_field_name_550) {
                    (field_name_559 = come_decrement_ref_count2(field_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type2_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_559,name_539)) {
                __dec_obj134=field_type_547;
                field_type_547=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_560));
                come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_559 = come_decrement_ref_count2(field_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type2_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_548++;
            (field_name_559 = come_decrement_ref_count2(field_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_560,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_557,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_548==list$1void$ph$p_length(klass_546->mFields)) {
            multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value491=err_msg(info,"field not found(%s) in %s(2)",name_539,klass_546->mName)));
            come_exception_var_14_566=multiple_assign_var25->v1;
            Err_567=(char*)come_increment_ref_count(multiple_assign_var25->v2);
            if(            (_if_conditional20=(Err_567)),            come_call_finalizer3(__right_value491,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                __result_obj__321 = (_Bool)1;
                (Err_567 = come_decrement_ref_count2(Err_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_550 = come_decrement_ref_count2(child_field_name_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__321;
            }
            else {
            }
            (Err_567 = come_decrement_ref_count2(Err_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    come_value_568=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 773, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    left_value_541->type->mPointerNum>0) {
        if(        child_field_name_550) {
            if(            child_field_is_pointer_549) {
                __dec_obj135=come_value_568->c_value;
                come_value_568->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_541->c_value,child_field_name_550,name_539));
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj136=come_value_568->c_value;
                come_value_568->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_541->c_value,child_field_name_550,name_539));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj137=come_value_568->c_value;
            come_value_568->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_541->c_value,name_539));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_550) {
            if(            child_field_is_pointer_549) {
                __dec_obj138=come_value_568->c_value;
                come_value_568->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_541->c_value,child_field_name_550,name_539));
                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj139=come_value_568->c_value;
                come_value_568->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_541->c_value,child_field_name_550,name_539));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj140=come_value_568->c_value;
            come_value_568->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_541->c_value,name_539));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj141=come_value_568->type;
    come_value_568->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_547));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_568->var=((void*)0);
    if(    field_type_547==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value501=err_msg(info,"no field(%s)\n",name_539)));
        come_exception_var_15_569=multiple_assign_var26->v1;
        Err_570=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional21=(Err_570)),        come_call_finalizer3(__right_value501,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional21) {
            __result_obj__322 = (_Bool)1;
            (Err_570 = come_decrement_ref_count2(Err_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_545,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
            (child_field_name_550 = come_decrement_ref_count2(child_field_name_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__322;
        }
        else {
        }
        (Err_570 = come_decrement_ref_count2(Err_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    list$1sNode$ph$p_length(come_value_568->type->mArrayNum)==1) {
        __dec_obj142=come_value_568->type->mOriginalLoadVarType;
        come_value_568->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_568->type));
        come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph$p_reset(come_value_568->type->mArrayNum);
        come_value_568->type->mPointerNum++;
        come_value_568->type->mOriginalTypeNamePointerNum=come_value_568->type->mPointerNum;
    }
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_568));
    __result_obj__324 = (_Bool)1;
    (name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_545,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
    (child_field_name_550 = come_decrement_ref_count2(child_field_name_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__324;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_571;
struct list_item$1sNode$ph* prev_it_572;
struct list$1sNode$ph* __result_obj__323;
    it_571=self->head;
    while(it_571!=((void*)0)) {
        prev_it_572=it_571;
        it_571=it_571->next;
        come_call_finalizer3(prev_it_572,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__323 = self;
    return __result_obj__323;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value509 = (void*)0;
struct sNode* __result_obj__327;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 832, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value504=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 832, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result_obj__327 = come_increment_ref_count(((struct sNode*)(__right_value509=_inf_value2)));
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value504,sLoadFieldNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value509) ? __right_value509 = come_decrement_ref_count2(__right_value509, ((struct sNode*)__right_value509)->finalize, ((struct sNode*)__right_value509)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count2(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__327;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
struct sLoadFieldNode* __result_obj__325;
void* __right_value505 = (void*)0;
struct sLoadFieldNode* result_573;
void* __right_value506 = (void*)0;
char* __dec_obj143;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj144;
void* __right_value508 = (void*)0;
char* __dec_obj145;
struct sLoadFieldNode* __result_obj__326;
    if(    self==(void*)0) {
        __result_obj__325 = (void*)0;
        return __result_obj__325;
    }
    result_573=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_573->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj143=result_573->sname;
        result_573->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_573->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj144=result_573->mLeft;
        result_573->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj145=result_573->mName;
        result_573->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__326 = result_573;
    come_call_finalizer3(result_573,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj147;
void* __right_value513 = (void*)0;
struct list$1sNode$ph* __dec_obj148;
struct sStoreArrayNode* __result_obj__328;
    ((struct sNodeBase*)(__right_value510=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value510,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj146=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj147=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj148=self->mArrayNum;
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, array_num));
    come_call_finalizer3(__dec_obj148,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mQuote=quote;
    __result_obj__328 = come_increment_ref_count(self);
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__328,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__328;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __right_value514 = (void*)0;
char* __result_obj__329;
    __result_obj__329 = come_increment_ref_count(((char*)(__right_value514=__builtin_string("sStoreArrayNode"))));
    (__right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__329 = come_decrement_ref_count2(__result_obj__329, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__329;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_574;
struct sNode* right_575;
struct list$1sNode$ph* array_num_nodes_576;
_Bool Value_577;
_Bool __result_obj__330;
void* __right_value515 = (void*)0;
struct CVALUE* left_value_578;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj149;
struct sType* left_type_579;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1CVALUE$ph* array_num_580;
struct list$1sNode$ph* o2_saved_583;
struct sNode* it_586;
_Bool Value_589;
_Bool __result_obj__338;
void* __right_value520 = (void*)0;
struct CVALUE* c_value_590;
char* fun_name_591;
void* __right_value521 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var27 = (void*)0;
char* fun_name2_592=0;
struct sFun* operator_fun_593=0;
struct sGenericsFun* generics_fun_594=0;
_Bool Value_595;
_Bool __result_obj__339;
void* __right_value522 = (void*)0;
struct CVALUE* right_value_596;
struct sType* right_type_597;
struct sClass* klass_598;
void* __right_value523 = (void*)0;
struct sType* type_599;
_Bool calling_fun_600;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct CVALUE* come_value_604;
int i_605;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct buffer* buf_618;
struct list$1CVALUE$ph* o2_saved_619;
struct CVALUE* it_622;
void* __right_value529 = (void*)0;
char* left_value_code_625;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_16_626=0;
char* Err_627=0;
_Bool _if_conditional22;
_Bool __result_obj__350;
void* __right_value532 = (void*)0;
char* __dec_obj150;
void* __right_value533 = (void*)0;
char* __dec_obj151;
void* __right_value534 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_17_628=0;
char* Err_629=0;
_Bool _if_conditional23;
_Bool __result_obj__351;
void* __right_value535 = (void*)0;
char* __dec_obj152;
void* __right_value536 = (void*)0;
char* __dec_obj153;
void* __right_value537 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_18_630=0;
char* Err_631=0;
_Bool _if_conditional24;
_Bool __result_obj__352;
void* __right_value538 = (void*)0;
struct sType* result_type_632;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1sNode$ph* __dec_obj154;
struct sType* __dec_obj155;
_Bool __result_obj__353;
memset(&calling_fun_600, 0, sizeof(_Bool));
    left_574=self->mLeft;
    right_575=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_576=self->mArrayNum;
    Value_577=node_compile(left_574,info);
    if(    !Value_577) {
        __result_obj__330 = (_Bool)0;
        ((right_575) ? right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__330;
    }
    else {
    }
    left_value_578=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_578->type->mPointerNum>0) {
        __dec_obj149=left_value_578->c_value;
        left_value_578->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value516=make_type_name_string(left_value_578->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_578->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    left_type_579=left_value_578->type;
    array_num_580=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 871, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_583=(array_num_nodes_576),it_586=list$1sNode$ph$p_begin((o2_saved_583));    !list$1sNode$ph$p_end((o2_saved_583));    it_586=list$1sNode$ph$p_next((o2_saved_583))    ){
        Value_589=node_compile(it_586,info);
        if(        !Value_589) {
            __result_obj__338 = (_Bool)0;
            ((right_575) ? right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(left_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__338;
        }
        else {
        }
        c_value_590=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(array_num_580,(struct CVALUE*)come_increment_ref_count(c_value_590));
        come_call_finalizer3(c_value_590,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    fun_name_591="operator_store_element";
    multiple_assign_var27=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value521=get_operator_function(left_type_579,fun_name_591,info)));
    fun_name2_592=(char*)come_increment_ref_count(multiple_assign_var27->v1);
    operator_fun_593=multiple_assign_var27->v2;
    generics_fun_594=multiple_assign_var27->v3;
    come_call_finalizer3(__right_value521,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    Value_595=node_compile(right_575,info);
    if(    !Value_595) {
        __result_obj__339 = (_Bool)0;
        ((right_575) ? right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(left_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name2_592 = come_decrement_ref_count2(fun_name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__339;
    }
    else {
    }
    right_value_596=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_597=right_value_596->type;
    klass_598=left_value_578->type->mClass;
    type_599=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_578->type));
    if(    self->mQuote) {
        calling_fun_600=(_Bool)0;
    }
    else {
        calling_fun_600=operator_overload_fun2(type_599,fun_name_591,left_value_578,((struct CVALUE*)(__right_value524=list$1CVALUE$ph$p_operator_load_element(array_num_580,0))),right_value_596,info);
        come_call_finalizer3(__right_value524,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_600) {
        come_value_604=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 909, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1sNode$ph$p_length(left_type_579->mArrayNum)>0) {
            for(            i_605=0;            i_605<list$1CVALUE$ph$p_length(array_num_580);            i_605++            ){
                list$1sNode$ph$p_delete(left_type_579->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_579->mPointerNum>0) {
            left_type_579->mPointerNum-=list$1CVALUE$ph$p_length(array_num_580);
            if(            left_type_579->mPointerNum<0) {
                left_type_579->mPointerNum=0;
            }
        }
        buf_618=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 924, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_618,left_value_578->c_value);
        for(        o2_saved_619=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_580)),it_622=list$1CVALUE$ph$p_begin((o2_saved_619));        !list$1CVALUE$ph$p_end((o2_saved_619));        it_622=list$1CVALUE$ph$p_next((o2_saved_619))        ){
            buffer_append_format(buf_618,"[%s]",it_622->c_value);
        }
        come_call_finalizer3(o2_saved_619,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_625=(char*)come_increment_ref_count(buffer_to_string(buf_618));
        multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value531=check_assign_type(((char*)(__right_value530=xsprintf("array is assinged to(2)"))),left_type_579,right_type_597,right_value_596,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_16_626=multiple_assign_var28->v1;
        Err_627=(char*)come_increment_ref_count(multiple_assign_var28->v2);
        if(        (_if_conditional22=(Err_627)),        (__right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value531,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional22) {
            __result_obj__350 = (_Bool)1;
            come_call_finalizer3(come_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (left_value_code_625 = come_decrement_ref_count2(left_value_code_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_627 = come_decrement_ref_count2(Err_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_575) ? right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(left_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_592 = come_decrement_ref_count2(fun_name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(right_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__350;
        }
        else {
        }
        if(        left_type_579->mHeap&&right_type_597->mHeap&&left_type_579->mPointerNum>0&&right_type_597->mPointerNum>0) {
            if(            left_value_578->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_579,left_value_code_625,info,(_Bool)0,(_Bool)0);
                std_move(left_type_579,right_type_597,right_value_596,info,(_Bool)0);
                __dec_obj150=come_value_604->c_value;
                come_value_604->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_625,right_value_596->c_value));
                __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_578->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_579,left_value_code_625,info,(_Bool)0,(_Bool)0);
                std_move(left_type_579,right_type_597,right_value_596,info,(_Bool)0);
                __dec_obj151=come_value_604->c_value;
                come_value_604->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_625,right_value_596->c_value));
                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value534=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_625,left_value_578->type->mPointerNum)));
                come_exception_var_17_628=multiple_assign_var29->v1;
                Err_629=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                if(                (_if_conditional23=(Err_629)),                come_call_finalizer3(__right_value534,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional23) {
                    __result_obj__351 = (_Bool)1;
                    (Err_629 = come_decrement_ref_count2(Err_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    (left_value_code_625 = come_decrement_ref_count2(left_value_code_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_627 = come_decrement_ref_count2(Err_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_575) ? right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(left_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_592 = come_decrement_ref_count2(fun_name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__351;
                }
                else {
                }
                (Err_629 = come_decrement_ref_count2(Err_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            if(            left_value_578->type->mPointerNum>=1) {
                __dec_obj152=come_value_604->c_value;
                come_value_604->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_625,right_value_596->c_value));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_578->type->mPointerNum==0) {
                __dec_obj153=come_value_604->c_value;
                come_value_604->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_625,right_value_596->c_value));
                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value537=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_625,left_value_578->type->mPointerNum)));
                come_exception_var_18_630=multiple_assign_var30->v1;
                Err_631=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                if(                (_if_conditional24=(Err_631)),                come_call_finalizer3(__right_value537,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional24) {
                    __result_obj__352 = (_Bool)1;
                    (Err_631 = come_decrement_ref_count2(Err_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    (left_value_code_625 = come_decrement_ref_count2(left_value_code_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_627 = come_decrement_ref_count2(Err_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_575) ? right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(left_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_592 = come_decrement_ref_count2(fun_name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__352;
                }
                else {
                }
                (Err_631 = come_decrement_ref_count2(Err_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        result_type_632=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_579));
        __dec_obj154=result_type_632->mArrayNum;
        result_type_632->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 970, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj154,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj155=come_value_604->type;
        come_value_604->type=(struct sType*)come_increment_ref_count(result_type_632);
        come_call_finalizer3(__dec_obj155,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_604->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_604));
        add_come_last_code(info,"%s",come_value_604->c_value);
        come_call_finalizer3(come_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (left_value_code_625 = come_decrement_ref_count2(left_value_code_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_627 = come_decrement_ref_count2(Err_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__353 = (_Bool)1;
    ((right_575) ? right_575 = come_decrement_ref_count2(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(left_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_592 = come_decrement_ref_count2(fun_name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(right_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__353;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__331;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__331 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__331,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__331;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_581;
struct list_item$1CVALUE$ph* prev_it_582;
    it_581=self->head;
    while(it_581!=((void*)0)) {
        prev_it_582=it_581;
        it_581=it_581->next;
        come_call_finalizer3(prev_it_582,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_584;
struct sNode* __result_obj__332;
struct sNode* __result_obj__333;
struct sNode* result_585;
struct sNode* __result_obj__334;
result_584 = (void*)0;
result_585 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_584,0,sizeof(struct sNode*));
        __result_obj__332 = result_584;
        return __result_obj__332;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__333 = self->it->item;
        return __result_obj__333;
    }
    memset(&result_585,0,sizeof(struct sNode*));
    __result_obj__334 = result_585;
    return __result_obj__334;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_587;
struct sNode* __result_obj__335;
struct sNode* __result_obj__336;
struct sNode* result_588;
struct sNode* __result_obj__337;
result_587 = (void*)0;
result_588 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_587,0,sizeof(struct sNode*));
        __result_obj__335 = result_587;
        return __result_obj__335;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__336 = self->it->item;
        return __result_obj__336;
    }
    memset(&result_588,0,sizeof(struct sNode*));
    __result_obj__337 = result_588;
    return __result_obj__337;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_601;
int i_602;
struct CVALUE* __result_obj__340;
struct CVALUE* default_value_603;
struct CVALUE* __result_obj__341;
default_value_603 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_601=self->head;
    i_602=0;
    while(it_601!=((void*)0)) {
        if(        position==i_602) {
            __result_obj__340 = come_increment_ref_count(it_601->item);
            come_call_finalizer3(__result_obj__340,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__340;
        }
        it_601=it_601->next;
        i_602++;
    }
    memset(&default_value_603,0,sizeof(struct CVALUE*));
    __result_obj__341 = come_increment_ref_count(default_value_603);
    come_call_finalizer3(default_value_603,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__341,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__341;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_606;
struct list$1sNode$ph* __result_obj__342;
struct list_item$1sNode$ph* it_607;
int i_608;
struct list_item$1sNode$ph* prev_it_609;
struct list_item$1sNode$ph* it_610;
int i_611;
struct list_item$1sNode$ph* prev_it_612;
struct list_item$1sNode$ph* it_613;
struct list_item$1sNode$ph* head_prev_it_614;
struct list_item$1sNode$ph* tail_it_615;
int i_616;
struct list_item$1sNode$ph* prev_it_617;
struct list$1sNode$ph* __result_obj__343;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_606=tail;
        tail=head;
        head=tmp_606;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__342 = self;
        return __result_obj__342;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph$p_reset(self);
    }
    else if(    head==0) {
        it_607=self->head;
        i_608=0;
        while(it_607!=((void*)0)) {
            if(            i_608<tail) {
                prev_it_609=it_607;
                it_607=it_607->next;
                i_608++;
                come_call_finalizer3(prev_it_609,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_608==tail) {
                self->head=it_607;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_607=it_607->next;
                i_608++;
            }
        }
    }
    else if(    tail==self->len) {
        it_610=self->head;
        i_611=0;
        while(it_610!=((void*)0)) {
            if(            i_611==head) {
                self->tail=it_610->prev;
                self->tail->next=((void*)0);
            }
            if(            i_611>=head) {
                prev_it_612=it_610;
                it_610=it_610->next;
                i_611++;
                come_call_finalizer3(prev_it_612,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_610=it_610->next;
                i_611++;
            }
        }
    }
    else {
        it_613=self->head;
        head_prev_it_614=((void*)0);
        tail_it_615=((void*)0);
        i_616=0;
        while(it_613!=((void*)0)) {
            if(            i_616==head) {
                head_prev_it_614=it_613->prev;
            }
            if(            i_616==tail) {
                tail_it_615=it_613;
            }
            if(            i_616>=head&&i_616<tail) {
                prev_it_617=it_613;
                it_613=it_613->next;
                i_616++;
                come_call_finalizer3(prev_it_617,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_613=it_613->next;
                i_616++;
            }
        }
        if(        head_prev_it_614!=((void*)0)) {
            head_prev_it_614->next=tail_it_615;
        }
        if(        tail_it_615!=((void*)0)) {
            tail_it_615->prev=head_prev_it_614;
        }
    }
    __result_obj__343 = self;
    return __result_obj__343;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_620;
struct CVALUE* __result_obj__344;
struct CVALUE* __result_obj__345;
struct CVALUE* result_621;
struct CVALUE* __result_obj__346;
result_620 = (void*)0;
result_621 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_620,0,sizeof(struct CVALUE*));
        __result_obj__344 = result_620;
        return __result_obj__344;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__345 = self->it->item;
        return __result_obj__345;
    }
    memset(&result_621,0,sizeof(struct CVALUE*));
    __result_obj__346 = result_621;
    return __result_obj__346;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_623;
struct CVALUE* __result_obj__347;
struct CVALUE* __result_obj__348;
struct CVALUE* result_624;
struct CVALUE* __result_obj__349;
result_623 = (void*)0;
result_624 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_623,0,sizeof(struct CVALUE*));
        __result_obj__347 = result_623;
        return __result_obj__347;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__348 = self->it->item;
        return __result_obj__348;
    }
    memset(&result_624,0,sizeof(struct CVALUE*));
    __result_obj__349 = result_624;
    return __result_obj__349;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1sNode$ph* __dec_obj156;
void* __right_value543 = (void*)0;
struct sNode* __dec_obj157;
struct sLoadArrayNode* __result_obj__354;
    ((struct sNodeBase*)(__right_value541=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value541,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj156=self->mArrayNum;
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, array_num));
    come_call_finalizer3(__dec_obj156,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj157=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result_obj__354 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__354,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__354;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __right_value544 = (void*)0;
char* __result_obj__355;
    __result_obj__355 = come_increment_ref_count(((char*)(__right_value544=__builtin_string("sLoadArrayNode"))));
    (__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__355 = come_decrement_ref_count2(__result_obj__355, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__355;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_633;
struct list$1sNode$ph* array_num_nodes_634;
_Bool Value_635;
void* __right_value545 = (void*)0;
struct CVALUE* left_value_636;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
char* __dec_obj158;
void* __right_value548 = (void*)0;
struct sType* left_type_637;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1CVALUE$ph* array_num_638;
struct list$1sNode$ph* o2_saved_639;
struct sNode* it_640;
_Bool Value_641;
_Bool __result_obj__356;
void* __right_value551 = (void*)0;
struct CVALUE* c_value_642;
void* __right_value552 = (void*)0;
struct sType* type_643;
char* fun_name_644;
_Bool calling_fun_645;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_646;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct buffer* buf_647;
struct list$1CVALUE$ph* o2_saved_648;
struct CVALUE* it_649;
void* __right_value558 = (void*)0;
char* left_value_code_650;
void* __right_value559 = (void*)0;
char* __dec_obj159;
void* __right_value560 = (void*)0;
struct sType* result_type_651;
struct sType* __dec_obj160;
int n_652;
void* __right_value561 = (void*)0;
struct sType* __dec_obj161;
void* __right_value562 = (void*)0;
struct sType* __dec_obj162;
int i_653;
void* __right_value563 = (void*)0;
struct sType* __dec_obj163;
_Bool __result_obj__357;
memset(&calling_fun_645, 0, sizeof(_Bool));
    left_633=self->mLeft;
    array_num_nodes_634=self->mArrayNum;
    Value_635=node_compile(left_633,info);
    if(    !Value_635) {
        return (_Bool)0;
    }
    else {
    }
    left_value_636=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_636->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj158=left_value_636->c_value;
        left_value_636->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value546=make_type_name_string(left_value_636->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_636->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    left_type_637=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_636->type));
    array_num_638=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 1019, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_639=(array_num_nodes_634),it_640=list$1sNode$ph$p_begin((o2_saved_639));    !list$1sNode$ph$p_end((o2_saved_639));    it_640=list$1sNode$ph$p_next((o2_saved_639))    ){
        Value_641=node_compile(it_640,info);
        if(        !Value_641) {
            __result_obj__356 = (_Bool)0;
            come_call_finalizer3(left_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_638,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__356;
        }
        else {
        }
        c_value_642=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(array_num_638,(struct CVALUE*)come_increment_ref_count(c_value_642));
        come_call_finalizer3(c_value_642,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_643=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_636->type));
    fun_name_644="operator_load_element";
    if(    self->mQuote) {
        calling_fun_645=(_Bool)0;
    }
    else {
        calling_fun_645=operator_overload_fun(type_643,fun_name_644,left_value_636,((struct CVALUE*)(__right_value553=list$1CVALUE$ph$p_operator_load_element(array_num_638,0))),self->mBreakGuard,info);
        come_call_finalizer3(__right_value553,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_645) {
        come_value_646=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1044, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_647=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1046, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_647,left_value_636->c_value);
        for(        o2_saved_648=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_638)),it_649=list$1CVALUE$ph$p_begin((o2_saved_648));        !list$1CVALUE$ph$p_end((o2_saved_648));        it_649=list$1CVALUE$ph$p_next((o2_saved_648))        ){
            buffer_append_format(buf_647,"[%s]",it_649->c_value);
        }
        come_call_finalizer3(o2_saved_648,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_650=(char*)come_increment_ref_count(buffer_to_string(buf_647));
        __dec_obj159=come_value_646->c_value;
        come_value_646->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_650));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_651=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_637));
        if(        result_type_651->mOriginalLoadVarType) {
            __dec_obj160=result_type_651;
            result_type_651=(struct sType*)come_increment_ref_count(result_type_651->mOriginalLoadVarType);
            come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNode$ph$p_length(result_type_651->mArrayNum)>0) {
            n_652=list$1sNode$ph$p_length(result_type_651->mArrayNum)-list$1CVALUE$ph$p_length(array_num_638);
            if(            n_652==0) {
                __dec_obj161=result_type_651;
                result_type_651=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_637));
                come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_637->mOriginalLoadVarType) {
                    __dec_obj162=result_type_651;
                    result_type_651=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_637->mOriginalLoadVarType));
                    come_call_finalizer3(__dec_obj162,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNode$ph$p_reset(result_type_651->mArrayNum);
            }
            else if(            n_652>0) {
                for(                i_653=0;                i_653<n_652;                i_653++                ){
                    list$1sNode$ph$p_delete(result_type_651->mArrayNum,-1,-1);
                }
            }
            else if(            n_652<0) {
                list$1sNode$ph$p_reset(result_type_651->mArrayNum);
                result_type_651->mPointerNum+=n_652;
                if(                result_type_651->mPointerNum<0) {
                    result_type_651->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_651->mPointerNum>0) {
                result_type_651->mPointerNum-=list$1CVALUE$ph$p_length(array_num_638);
                if(                result_type_651->mPointerNum<0) {
                    result_type_651->mPointerNum=0;
                }
            }
        }
        __dec_obj163=come_value_646->type;
        come_value_646->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_651));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_646->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_646));
        add_come_last_code(info,"%s",come_value_646->c_value);
        come_call_finalizer3(come_value_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (left_value_code_650 = come_decrement_ref_count2(left_value_code_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_651,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__357 = (_Bool)1;
    come_call_finalizer3(left_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_638,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__357;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct list$1sNode$ph* __dec_obj164;
void* __right_value566 = (void*)0;
struct sNode* __dec_obj165;
struct sLoadRangeArrayNode* __result_obj__358;
    ((struct sNodeBase*)(__right_value564=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value564,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj164=self->mArrayNum;
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, array_num));
    come_call_finalizer3(__dec_obj164,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj165=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result_obj__358 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__358,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__358;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __right_value567 = (void*)0;
char* __result_obj__359;
    __result_obj__359 = come_increment_ref_count(((char*)(__right_value567=__builtin_string("sLoadRangeArrayNode"))));
    (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__359 = come_decrement_ref_count2(__result_obj__359, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__359;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_654;
struct list$1sNode$ph* array_num_nodes_655;
_Bool Value_656;
void* __right_value568 = (void*)0;
struct CVALUE* left_value_657;
void* __right_value569 = (void*)0;
struct sType* left_type_658;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1CVALUE$ph* array_num_659;
struct list$1sNode$ph* o2_saved_660;
struct sNode* it_661;
_Bool Value_662;
_Bool __result_obj__360;
void* __right_value572 = (void*)0;
struct CVALUE* c_value_663;
void* __right_value573 = (void*)0;
struct sType* type_664;
char* fun_name_665;
_Bool calling_fun_666;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_667;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct buffer* buf_668;
struct list$1CVALUE$ph* o2_saved_669;
struct CVALUE* it_670;
void* __right_value580 = (void*)0;
char* left_value_code_671;
void* __right_value581 = (void*)0;
char* __dec_obj166;
void* __right_value582 = (void*)0;
struct sType* result_type_672;
struct sType* __dec_obj167;
int n_673;
void* __right_value583 = (void*)0;
struct sType* __dec_obj168;
void* __right_value584 = (void*)0;
struct sType* __dec_obj169;
int i_674;
void* __right_value585 = (void*)0;
struct sType* __dec_obj170;
_Bool __result_obj__361;
memset(&calling_fun_666, 0, sizeof(_Bool));
    left_654=self->mLeft;
    array_num_nodes_655=self->mArrayNum;
    Value_656=node_compile(left_654,info);
    if(    !Value_656) {
        return (_Bool)0;
    }
    else {
    }
    left_value_657=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_658=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_657->type));
    array_num_659=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 1141, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_660=(array_num_nodes_655),it_661=list$1sNode$ph$p_begin((o2_saved_660));    !list$1sNode$ph$p_end((o2_saved_660));    it_661=list$1sNode$ph$p_next((o2_saved_660))    ){
        Value_662=node_compile(it_661,info);
        if(        !Value_662) {
            __result_obj__360 = (_Bool)0;
            come_call_finalizer3(left_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__360;
        }
        else {
        }
        c_value_663=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(array_num_659,(struct CVALUE*)come_increment_ref_count(c_value_663));
        come_call_finalizer3(c_value_663,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_664=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_657->type));
    fun_name_665="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_666=(_Bool)0;
    }
    else {
        calling_fun_666=operator_overload_fun2(type_664,fun_name_665,left_value_657,((struct CVALUE*)(__right_value574=list$1CVALUE$ph$p_operator_load_element(array_num_659,0))),((struct CVALUE*)(__right_value575=list$1CVALUE$ph$p_operator_load_element(array_num_659,1))),info);
        come_call_finalizer3(__right_value574,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value575,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_666) {
        come_value_667=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1166, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_668=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1168, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_668,left_value_657->c_value);
        for(        o2_saved_669=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_659)),it_670=list$1CVALUE$ph$p_begin((o2_saved_669));        !list$1CVALUE$ph$p_end((o2_saved_669));        it_670=list$1CVALUE$ph$p_next((o2_saved_669))        ){
            buffer_append_format(buf_668,"[%s]",it_670->c_value);
        }
        come_call_finalizer3(o2_saved_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_671=(char*)come_increment_ref_count(buffer_to_string(buf_668));
        __dec_obj166=come_value_667->c_value;
        come_value_667->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_671));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_672=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_658));
        if(        result_type_672->mOriginalLoadVarType) {
            __dec_obj167=result_type_672;
            result_type_672=(struct sType*)come_increment_ref_count(result_type_672->mOriginalLoadVarType);
            come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNode$ph$p_length(result_type_672->mArrayNum)>0) {
            n_673=list$1sNode$ph$p_length(result_type_672->mArrayNum)-list$1CVALUE$ph$p_length(array_num_659);
            if(            n_673==0) {
                __dec_obj168=result_type_672;
                result_type_672=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_658));
                come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_658->mOriginalLoadVarType) {
                    __dec_obj169=result_type_672;
                    result_type_672=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_658->mOriginalLoadVarType));
                    come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNode$ph$p_reset(result_type_672->mArrayNum);
            }
            else if(            n_673>0) {
                for(                i_674=0;                i_674<n_673;                i_674++                ){
                    list$1sNode$ph$p_delete(result_type_672->mArrayNum,-1,-1);
                }
            }
            else if(            n_673<0) {
                list$1sNode$ph$p_reset(result_type_672->mArrayNum);
                result_type_672->mPointerNum+=n_673;
                if(                result_type_672->mPointerNum<0) {
                    result_type_672->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_672->mPointerNum>0) {
                result_type_672->mPointerNum-=list$1CVALUE$ph$p_length(array_num_659);
                if(                result_type_672->mPointerNum<0) {
                    result_type_672->mPointerNum=0;
                }
            }
        }
        __dec_obj170=come_value_667->type;
        come_value_667->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_672));
        come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_667->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_667));
        add_come_last_code(info,"%s",come_value_667->c_value);
        come_call_finalizer3(come_value_667,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (left_value_code_671 = come_decrement_ref_count2(left_value_code_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__361 = (_Bool)1;
    come_call_finalizer3(left_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__361;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value586 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_675=0;
char* Err_676=0;
struct sNode* __result_obj__362;
    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value586=err_msg(info,"parse_method_call is failed")));
    come_exception_var_c2_675=multiple_assign_var31->v1;
    Err_676=(char*)come_increment_ref_count(multiple_assign_var31->v2);
    ((Err_676)?(puts(Err_676),exit(0)):(0));
    come_call_finalizer3(__right_value586,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__362 = come_increment_ref_count((struct sNode*)((void*)0));
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (Err_676 = come_decrement_ref_count2(Err_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count2(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__362;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value594 = (void*)0;
struct sNode* __result_obj__365;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1242, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value588=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1242, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result_obj__365 = come_increment_ref_count(((struct sNode*)(__right_value594=_inf_value3)));
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value588,sStoreFieldNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value594) ? __right_value594 = come_decrement_ref_count2(__right_value594, ((struct sNode*)__right_value594)->finalize, ((struct sNode*)__right_value594)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__365) ? __result_obj__365 = come_decrement_ref_count2(__result_obj__365, ((struct sNode*)__result_obj__365)->finalize, ((struct sNode*)__result_obj__365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__365;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
struct sStoreFieldNode* __result_obj__363;
void* __right_value589 = (void*)0;
struct sStoreFieldNode* result_677;
void* __right_value590 = (void*)0;
char* __dec_obj171;
void* __right_value591 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value592 = (void*)0;
struct sNode* __dec_obj173;
void* __right_value593 = (void*)0;
char* __dec_obj174;
struct sStoreFieldNode* __result_obj__364;
    if(    self==(void*)0) {
        __result_obj__363 = (void*)0;
        return __result_obj__363;
    }
    result_677=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_677->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj171=result_677->sname;
        result_677->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_677->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj172=result_677->mLeft;
        result_677->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj173=result_677->mRight;
        result_677->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj174=result_677->mName;
        result_677->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__364 = result_677;
    come_call_finalizer3(result_677,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__364;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
_Bool range_array_678;
char* p_679;
int sline_680;
_Bool no_comma_681;
_Bool no_output_err_682;
_Bool no_output_come_code_683;
void* __right_value595 = (void*)0;
struct sNode* exp_684;
_Bool quote_685;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1sNode$ph* array_num_686;
void* __right_value598 = (void*)0;
struct sNode* node2_687;
void* __right_value602 = (void*)0;
struct sNode* node3_691;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj181;
_Bool quote_693;
_Bool range_694;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct list$1sNode$ph* array_num_695;
_Bool range_array2_696;
char* p_697;
int sline_698;
_Bool no_comma_699;
_Bool no_output_err_700;
_Bool no_output_come_code_701;
void* __right_value612 = (void*)0;
struct sNode* exp_702;
void* __right_value613 = (void*)0;
struct sNode* node2_703;
void* __right_value614 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_704=0;
char* Err_705=0;
_Bool break_guard_706;
void* __right_value615 = (void*)0;
struct sNode* right_node_707;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value623 = (void*)0;
struct sNode* __dec_obj186;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value630 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* __right_value636 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value8;
struct sNullableNode* _inf_obj_value8;
void* __right_value639 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value642 = (void*)0;
char* field_name_711;
_Bool parse_method_generics_type_712;
char* p_713;
int sline_714;
void* __right_value643 = (void*)0;
char* word_715;
void* __right_value644 = (void*)0;
struct sNode* right_node_716;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value647 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* __dec_obj200;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj202;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value667 = (void*)0;
struct sNode* node2_717;
struct sNode* __dec_obj206;
struct sNode* __result_obj__375;
    while((_Bool)1) {
        range_array_678=(_Bool)0;
        {
            p_679=info->p;
            sline_680=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_681=info->no_comma;
                no_output_err_682=info->no_output_err;
                no_output_come_code_683=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_684=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_681;
                info->no_output_err=no_output_err_682;
                info->no_output_come_code=no_output_come_code_683;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_678=(_Bool)1;
                }
                ((exp_684) ? exp_684 = come_decrement_ref_count2(exp_684, ((struct sNode*)exp_684)->finalize, ((struct sNode*)exp_684)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            info->p=p_679;
            info->sline=sline_680;
        }
        if(        range_array_678&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_685=*info->p==92;
            if(            quote_685) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_686=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1286, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            skip_pointer_attribute(info);
            node2_687=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph$p_push_back(array_num_686,(struct sNode*)come_increment_ref_count(node2_687));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_691=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph$p_push_back(array_num_686,(struct sNode*)come_increment_ref_count(node3_691));
                expected_next_character(93,info);
                ((node3_691) ? node3_691 = come_decrement_ref_count2(node3_691, ((struct sNode*)node3_691)->finalize, ((struct sNode*)node3_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1307, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value604=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1307, "struct sLoadRangeArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_686),quote_685,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj181=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value604,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(array_num_686,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((node2_687) ? node2_687 = come_decrement_ref_count2(node2_687, ((struct sNode*)node2_687)->finalize, ((struct sNode*)node2_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !range_array_678&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_693=*info->p==92;
            if(            quote_693) {
                info->p++;
            }
            range_694=(_Bool)0;
            array_num_695=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1316, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while(1) {
                range_array2_696=(_Bool)0;
                {
                    p_697=info->p;
                    sline_698=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_699=info->no_comma;
                        no_output_err_700=info->no_output_err;
                        no_output_come_code_701=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_702=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_699;
                        info->no_output_err=no_output_err_700;
                        info->no_output_come_code=no_output_come_code_701;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_696=(_Bool)1;
                        }
                        ((exp_702) ? exp_702 = come_decrement_ref_count2(exp_702, ((struct sNode*)exp_702)->finalize, ((struct sNode*)exp_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    info->p=p_697;
                    info->sline=sline_698;
                }
                if(                range_array2_696) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_703=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_push_back(array_num_695,(struct sNode*)come_increment_ref_count(node2_703));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value614=err_msg(info,"require ] character")));
                        come_exception_var_c3_704=multiple_assign_var32->v1;
                        Err_705=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                        ((Err_705)?(puts(Err_705),exit(0)):(0));
                        come_call_finalizer3(__right_value614,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_705 = come_decrement_ref_count2(Err_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_703) ? node2_703 = come_decrement_ref_count2(node2_703, ((struct sNode*)node2_703)->finalize, ((struct sNode*)node2_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    break;
                }
            }
            break_guard_706=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_706=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_707=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1391, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value617=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1391, "struct sStoreArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_707),(struct list$1sNode$ph*)come_increment_ref_count(array_num_695),quote_693,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj186=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value617,sStoreArrayNode_finalize, 0, 1, 0, 0, (void*)0);
                ((right_node_707) ? right_node_707 = come_decrement_ref_count2(right_node_707, ((struct sNode*)right_node_707)->finalize, ((struct sNode*)right_node_707)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1394, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value625=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1394, "struct sLoadArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_695),quote_693,break_guard_706,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj190=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value625,sLoadArrayNode_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(array_num_695,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1424, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value632=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1424, "struct sNullCheckNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
            _inf_value7->clone=(void*)sNullCheckNode_clone;
            _inf_value7->compile=(void*)sNullCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sNullCheckNode_kind;
            __dec_obj193=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value632,sNullCheckNode_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1432, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value638=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1432, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullableNode_finalize;
            _inf_value8->clone=(void*)sNullableNode_clone;
            _inf_value8->compile=(void*)sNullableNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullableNode_kind;
            __dec_obj194=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value638,sNullableNode_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj195=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_711=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_712=(_Bool)0;
            {
                p_713=info->p;
                sline_714=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_715=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_715,info)) {
                            parse_method_generics_type_712=(_Bool)1;
                        }
                        (word_715 = come_decrement_ref_count2(word_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                info->p=p_713;
                info->sline=sline_714;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_716=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1488, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value646=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1488, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_716),(char*)come_increment_ref_count(field_name_711),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value9->clone=(void*)sStoreFieldNode_clone;
                _inf_value9->compile=(void*)sStoreFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sStoreFieldNode_kind;
                __dec_obj196=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value9);
                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value646,sStoreFieldNode_finalize, 0, 1, 0, 0, (void*)0);
                ((right_node_716) ? right_node_716 = come_decrement_ref_count2(right_node_716, ((struct sNode*)right_node_716)->finalize, ((struct sNode*)right_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_711,"exception_throw")||string_operator_equals(field_name_711,"exception_value")||parse_method_generics_type_712||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_711,"if")) {
                    __dec_obj197=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_711,"elif")) {
                    __dec_obj198=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_711,"case")) {
                    __dec_obj199=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_711,"less")) {
                    __dec_obj200=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_711,"rescue")) {
                    __dec_obj201=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_711,"exception_throw")) {
                    __dec_obj202=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_711,"exception_value")) {
                    __dec_obj203=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    __dec_obj204=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),(char*)come_increment_ref_count(field_name_711),info));
                    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1520, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value10=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value665=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1520, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(char*)come_increment_ref_count(field_name_711),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value10->clone=(void*)sLoadFieldNode_clone;
                _inf_value10->compile=(void*)sLoadFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLoadFieldNode_kind;
                __dec_obj205=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value665,sLoadFieldNode_finalize, 0, 1, 0, 0, (void*)0);
            }
            (field_name_711 = come_decrement_ref_count2(field_name_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            node2_717=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_717==((void*)0)) {
                ((node2_717) ? node2_717 = come_decrement_ref_count2(node2_717, ((struct sNode*)node2_717)->finalize, ((struct sNode*)node2_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            __dec_obj206=node;
            node=(struct sNode*)come_increment_ref_count(node2_717);
            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
            ((node2_717) ? node2_717 = come_decrement_ref_count2(node2_717, ((struct sNode*)node2_717)->finalize, ((struct sNode*)node2_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    __result_obj__375 = come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__375) ? __result_obj__375 = come_decrement_ref_count2(__result_obj__375, ((struct sNode*)__result_obj__375)->finalize, ((struct sNode*)__result_obj__375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__375;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value599 = (void*)0;
struct list_item$1sNode$ph* litem_688;
struct sNode* __dec_obj175;
void* __right_value600 = (void*)0;
struct list_item$1sNode$ph* litem_689;
struct sNode* __dec_obj176;
void* __right_value601 = (void*)0;
struct list_item$1sNode$ph* litem_690;
struct sNode* __dec_obj177;
struct list$1sNode$ph* __result_obj__366;
    if(    self->len==0) {
        litem_688=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value599=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1545, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_688->prev=((void*)0);
        litem_688->next=((void*)0);
        __dec_obj175=litem_688->item;
        litem_688->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_688;
        self->head=litem_688;
    }
    else if(    self->len==1) {
        litem_689=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value600=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1555, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_689->prev=self->head;
        litem_689->next=((void*)0);
        __dec_obj176=litem_689->item;
        litem_689->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_689;
        self->head->next=litem_689;
    }
    else {
        litem_690=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value601=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1565, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_690->prev=self->tail;
        litem_690->next=((void*)0);
        __dec_obj177=litem_690->item;
        litem_690->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_690;
        self->tail=litem_690;
    }
    self->len++;
    __result_obj__366 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__366;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
struct sLoadRangeArrayNode* __result_obj__367;
void* __right_value605 = (void*)0;
struct sLoadRangeArrayNode* result_692;
void* __right_value606 = (void*)0;
char* __dec_obj178;
void* __right_value607 = (void*)0;
struct list$1sNode$ph* __dec_obj179;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj180;
struct sLoadRangeArrayNode* __result_obj__368;
    if(    self==(void*)0) {
        __result_obj__367 = (void*)0;
        return __result_obj__367;
    }
    result_692=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_692->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj178=result_692->sname;
        result_692->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj179=result_692->mArrayNum;
        result_692->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj179,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj180=result_692->mLeft;
        result_692->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_692->mQuote=self->mQuote;
    }
    __result_obj__368 = result_692;
    come_call_finalizer3(result_692,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__368;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
struct sStoreArrayNode* __result_obj__369;
void* __right_value618 = (void*)0;
struct sStoreArrayNode* result_708;
void* __right_value619 = (void*)0;
char* __dec_obj182;
void* __right_value620 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value621 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value622 = (void*)0;
struct list$1sNode$ph* __dec_obj185;
struct sStoreArrayNode* __result_obj__370;
    if(    self==(void*)0) {
        __result_obj__369 = (void*)0;
        return __result_obj__369;
    }
    result_708=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_708->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_708->sname;
        result_708->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_708->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj183=result_708->mLeft;
        result_708->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj184=result_708->mRight;
        result_708->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj185=result_708->mArrayNum;
        result_708->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj185,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_708->mQuote=self->mQuote;
    }
    __result_obj__370 = result_708;
    come_call_finalizer3(result_708,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
struct sLoadArrayNode* __result_obj__371;
void* __right_value626 = (void*)0;
struct sLoadArrayNode* result_709;
void* __right_value627 = (void*)0;
char* __dec_obj187;
void* __right_value628 = (void*)0;
struct list$1sNode$ph* __dec_obj188;
void* __right_value629 = (void*)0;
struct sNode* __dec_obj189;
struct sLoadArrayNode* __result_obj__372;
    if(    self==(void*)0) {
        __result_obj__371 = (void*)0;
        return __result_obj__371;
    }
    result_709=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_709->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj187=result_709->sname;
        result_709->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_709->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj188=result_709->mArrayNum;
        result_709->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj188,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_709->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj189=result_709->mLeft;
        result_709->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_709->mQuote=self->mQuote;
    }
    __result_obj__372 = result_709;
    come_call_finalizer3(result_709,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__372;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
struct sNullCheckNode* __result_obj__373;
void* __right_value633 = (void*)0;
struct sNullCheckNode* result_710;
void* __right_value634 = (void*)0;
char* __dec_obj191;
void* __right_value635 = (void*)0;
struct sNode* __dec_obj192;
struct sNullCheckNode* __result_obj__374;
    if(    self==(void*)0) {
        __result_obj__373 = (void*)0;
        return __result_obj__373;
    }
    result_710=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_710->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result_710->sname;
        result_710->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_710->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj192=result_710->mLeft;
        result_710->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_710->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result_obj__374 = result_710;
    come_call_finalizer3(result_710,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__374;
}

