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

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
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
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
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
    struct list$1sType$ph* mGenericsTypes;
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
    struct list$1sType$ph* mParamTypes;
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
    struct list$1sType$ph* mParamTypes;
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
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
    struct map$2char$phchar$ph* mHeaderStructs;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
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

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
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

struct list_item$1sVar$ph
{
    struct sVar* item;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
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
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
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
    struct sType* class_type;
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
    struct map$2char$phchar$ph* module_params;
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
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
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

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
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

extern struct list$1sRightValueObject$ph* gExceptionRightValueObjects;
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
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
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph$p_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph$p_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph$p_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph$p_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph$p_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
void create_pico_version_header();
int come_main_v2(int argc, char** argv);
static char* list$1char$ph$p_join(struct list$1char$ph* self, char* sep);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_initialize(struct map$2char$phsFun$ph* self);
static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self);
static void list$1char$p_finalize(struct list$1char$p* self);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph$p_initialize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_initialize(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_initialize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph$p_initialize(struct map$2char$phsClassModule$ph* self);
static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph$p_initialize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void sInfo_finalize(struct sInfo* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_158;
    result_158=0;
    result_158+=int_get_hash_key(((int)self->buf));
    result_158+=int_get_hash_key(((int)self->len));
    result_158+=int_get_hash_key(((int)self->size));
    return result_158;
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
char* sname_350;
int sline_351;
int sline_real_352;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* __dec_obj23;
_Bool result_353;
void* __right_value265 = (void*)0;
char* __dec_obj24;
_Bool __result_obj__237;
    sname_350=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_351=info->sline;
    sline_real_352=info->sline_real;
    __dec_obj23=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value263=node->sname(node->_protocol_obj)))));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_353=node->compile(node->_protocol_obj,info);
    __dec_obj24=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_350));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_351;
    info->sline_real=sline_real_352;
    __result_obj__237 = result_353;
    (sname_350 = come_decrement_ref_count2(sname_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__237;
}

struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...){
char* msg2_354;
va_list args_355;
char* p_356;
char* last_lf_357;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_358;
int col_359;
int col_360;
void* __right_value268 = (void*)0;
int __null_value1;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct tuple2$2int$char$ph* __result_obj__239;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct tuple2$2int$char$ph* __result_obj__241;
msg2_354 = (void*)0;
memset(&args_355, 0, sizeof(va_list));
memset(&__null_value1, 0, sizeof(int));
    if(    !info->no_output_err) {
        __builtin_va_start(args_355,msg);
        vasprintf(&msg2_354,msg,args_355);
        __builtin_va_end(args_355);
        p_356=info->p;
        last_lf_357=((void*)0);
        while(p_356>=info->head) {
            if(            *p_356==10) {
                last_lf_357=p_356;
                break;
            }
            p_356--;
        }
        buf_358=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 78, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        last_lf_357) {
            col_359=info->p-last_lf_357;
            buffer_append_format(buf_358,"%s %d(real %d)(block %d) %d: %s",info->sname,info->sline,info->sline_real,info->sline_block,col_359,msg2_354);
        }
        else {
            col_360=info->p-info->head;
            buffer_append_format(buf_358,"%s %d(real %d)(block %d) %d: %s",info->sname,info->sline,info->sline_real,info->sline_block,col_360,msg2_354);
        }
        info->err_num++;
        free(msg2_354);
        printf(((char*)(__right_value268=buffer_to_string(buf_358))));
        (__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __result_obj__239 = come_increment_ref_count(((struct tuple2$2int$char$ph*)(__right_value271=tuple2$2int$char$ph_initialize((struct tuple2$2int$char$ph*)come_increment_ref_count((struct tuple2$2int$char$ph*)come_calloc(1, sizeof(struct tuple2$2int$char$ph)*(1), "02transpile.c", 96, "struct tuple2$2int$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value1,(char*)come_increment_ref_count(xsprintf("compile error"))))));
        come_call_finalizer3((&args_355),va_list_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_358,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value271,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__239,tuple2$2int$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__239;
        come_call_finalizer3((&args_355),va_list_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_358,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__241 = come_increment_ref_count(((struct tuple2$2int$void$p*)(__right_value273=tuple2$2int$void$p_initialize((struct tuple2$2int$void$p*)come_increment_ref_count((struct tuple2$2int$void$p*)come_calloc(1, sizeof(struct tuple2$2int$void$p)*(1), "02transpile.c", 99, "struct tuple2$2int$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),0,((void*)0)))));
    come_call_finalizer3(__right_value273,tuple2$2int$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,tuple2$2int$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct tuple2$2int$char$ph* tuple2$2int$char$ph_initialize(struct tuple2$2int$char$ph* self, int v1, char* v2){
char* __dec_obj25;
struct tuple2$2int$char$ph* __result_obj__238;
    self->v1=v1;
    __dec_obj25=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__238 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2int$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__238,tuple2$2int$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__238;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2int$void$p* tuple2$2int$void$p_initialize(struct tuple2$2int$void$p* self, int v1, void* v2){
struct tuple2$2int$void$p* __result_obj__240;
    self->v1=v1;
    self->v2=v2;
    __result_obj__240 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2int$void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__240,tuple2$2int$void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__240;
}

static void tuple2$2int$void$p$p_finalize(struct tuple2$2int$void$p* self){
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value274 = (void*)0;
char* output_file_name_361;
void* __right_value275 = (void*)0;
_Bool __result_obj__242;
    output_file_name_361=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    charp_write(((char*)(__right_value275=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_361,(_Bool)0);
    (__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result_obj__242 = (_Bool)1;
    (output_file_name_361 = come_decrement_ref_count2(output_file_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_362;
void* __right_value276 = (void*)0;
    input_file_name_362=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_362!=((void*)0)&&string_operator_not_equals(input_file_name_362,"")) {
        system(((char*)(__right_value276=xsprintf("%s %s.*",RM,input_file_name_362))));
        (__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_362 = come_decrement_ref_count2(input_file_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_363;
void* __right_value277 = (void*)0;
    input_file_name_363=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_363!=((void*)0)&&string_operator_not_equals(input_file_name_363,"")) {
        system(((char*)(__right_value277=xsprintf("%s %s.i* %s.c*",RM,input_file_name_363,input_file_name_363))));
        (__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_363 = come_decrement_ref_count2(input_file_name_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_364;
void* __right_value278 = (void*)0;
    input_file_name_364=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_364!=((void*)0)&&string_operator_not_equals(input_file_name_364,"")) {
        system(((char*)(__right_value278=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_364,input_file_name_364))));
        (__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_364 = come_decrement_ref_count2(input_file_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_365;
char* output_file_name_366;
void* __right_value279 = (void*)0;
char* __dec_obj26;
void* __right_value280 = (void*)0;
char* __dec_obj27;
_Bool exist_common_h_367;
struct _IO_FILE* Value_368;
int is_mac_369;
int is_android_370;
int is_debian_371;
int is_m5stack_372;
int is_pico_373;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
char* cmd3_374;
int rc_375;
void* __right_value283 = (void*)0;
char* command2_376;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* cmd2_377;
int rc_378;
void* __right_value286 = (void*)0;
char* command2_379;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* cmd2_380;
int rc_381;
void* __right_value289 = (void*)0;
char* command2_382;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* cmd2_383;
int rc_384;
void* __right_value292 = (void*)0;
char* command2_385;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* cmd3_386;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj28;
int rc_387;
void* __right_value297 = (void*)0;
char* command2_388;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
char* cmd4_389;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
char* __dec_obj29;
void* __right_value302 = (void*)0;
char* command_390;
int rc_391;
void* __right_value303 = (void*)0;
char* __dec_obj30;
void* __right_value304 = (void*)0;
char* command2_392;
_Bool __result_obj__243;
output_file_name_366 = (void*)0;
    input_file_name_365=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj26=output_file_name_366;
        output_file_name_366=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj27=output_file_name_366;
        output_file_name_366=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    exist_common_h_367=(_Bool)0;
    {
        Value_368=fopen("common.h","r");
        if(        Value_368) {
            exist_common_h_367=(_Bool)1;
            fclose(Value_368);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_367=(_Bool)0;
        }
        if(        !gCommonHeader) {
            exist_common_h_367=(_Bool)0;
        }
    }
    is_mac_369=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    is_android_370=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    is_debian_371=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
    is_m5stack_372=info->m5stack_cpp;
    is_pico_373=info->pico_cpp;
    if(    is_android_370==0) {
        cmd3_374=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value281=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
        (__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd3_374);
        }
        rc_375=system(cmd3_374);
        command2_376=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_366));
        if(        info->verbose) {
            puts(command2_376);
        }
        (void)system(command2_376);
        if(        rc_375!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        (cmd3_374 = come_decrement_ref_count2(cmd3_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_376 = come_decrement_ref_count2(command2_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_m5stack_372) {
        cmd2_377=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value284=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
        (__right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_377);
        }
        rc_378=system(cmd2_377);
        if(        rc_378!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_377);
            exit(5);
        }
        command2_379=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_366));
        if(        info->verbose) {
            puts(command2_379);
        }
        (void)system(command2_379);
        (cmd2_377 = come_decrement_ref_count2(cmd2_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_379 = come_decrement_ref_count2(command2_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_pico_373) {
        cmd2_380=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value287=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
        (__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_380);
        }
        rc_381=system(cmd2_380);
        if(        rc_381!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_380);
            exit(5);
        }
        command2_382=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_366));
        if(        info->verbose) {
            puts(command2_382);
        }
        (void)system(command2_382);
        (cmd2_380 = come_decrement_ref_count2(cmd2_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_382 = come_decrement_ref_count2(command2_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_mac_369==0) {
        cmd2_383=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value290=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
        (__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_383);
        }
        rc_384=system(cmd2_383);
        if(        rc_384!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_383);
            exit(5);
        }
        command2_385=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_366));
        if(        info->verbose) {
            puts(command2_385);
        }
        (void)system(command2_385);
        (cmd2_383 = come_decrement_ref_count2(cmd2_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_385 = come_decrement_ref_count2(command2_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        cmd3_386=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value293=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
        (__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        is_debian_371==0) {
            __dec_obj28=cmd3_386;
            cmd3_386=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value295=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->verbose) {
            puts(cmd3_386);
        }
        rc_387=system(cmd3_386);
        command2_388=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_366));
        if(        info->verbose) {
            puts(command2_388);
        }
        (void)system(command2_388);
        if(        rc_387!=0) {
            cmd4_389=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value298=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
            (__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            is_debian_371==0) {
                __dec_obj29=cmd4_389;
                cmd4_389=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_367)?(((char*)(__right_value300=__builtin_string(" -include common.h ")))):("")),input_file_name_365,output_file_name_366,output_file_name_366));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            command_390=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_366,input_file_name_365,info->clang_option,input_file_name_365));
            if(            info->verbose) {
                puts(cmd4_389);
            }
            rc_391=system(cmd4_389);
            if(            rc_391!=0) {
                __dec_obj30=command_390;
                command_390=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_366,input_file_name_365,info->clang_option,input_file_name_365));
                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                info->verbose) {
                    puts(cmd4_389);
                }
                rc_391=system(cmd4_389);
                if(                rc_391!=0) {
                    printf("failed to cpp(2) (%s)\n",cmd4_389);
                    exit(5);
                }
            }
            command2_392=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_366));
            if(            info->verbose) {
                puts(command2_392);
            }
            (void)system(command2_392);
            (cmd4_389 = come_decrement_ref_count2(cmd4_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command_390 = come_decrement_ref_count2(command_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command2_392 = come_decrement_ref_count2(command2_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (cmd3_386 = come_decrement_ref_count2(cmd3_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_388 = come_decrement_ref_count2(command2_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__243 = (_Bool)1;
    (input_file_name_365 = come_decrement_ref_count2(input_file_name_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_366 = come_decrement_ref_count2(output_file_name_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__243;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files){
void* __right_value305 = (void*)0;
char* input_file_name_393;
char* output_file_name_394;
void* __right_value306 = (void*)0;
char* __dec_obj31;
void* __right_value307 = (void*)0;
char* __dec_obj32;
void* __right_value308 = (void*)0;
char* command_395;
int rc_396;
void* __right_value309 = (void*)0;
char* __dec_obj33;
int rc_397;
void* __right_value310 = (void*)0;
char* command2_398;
void* __right_value314 = (void*)0;
_Bool __result_obj__246;
output_file_name_394 = (void*)0;
    input_file_name_393=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file) {
        __dec_obj31=output_file_name_394;
        output_file_name_394=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj32=output_file_name_394;
        output_file_name_394=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_395=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_394,input_file_name_393,info->clang_option,input_file_name_393));
    if(    info->verbose) {
        puts(command_395);
    }
    rc_396=system(command_395);
    if(    rc_396!=0) {
        __dec_obj33=command_395;
        command_395=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_394,input_file_name_393,info->clang_option,input_file_name_393));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->verbose) {
            puts(command_395);
        }
        rc_397=system(command_395);
        if(        rc_397!=0) {
            printf("%s %d: %s is faild\n",info->sname,info->sline,CC);
            command2_398=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_393));
            if(            info->verbose) {
                puts(command2_398);
            }
            (void)system(command2_398);
            exit(2);
            (command2_398 = come_decrement_ref_count2(command2_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    !output_object_file) {
        list$1char$ph$p_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_394)));
    }
    __result_obj__246 = (_Bool)1;
    (input_file_name_393 = come_decrement_ref_count2(input_file_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_394 = come_decrement_ref_count2(output_file_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (command_395 = come_decrement_ref_count2(command_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__246;
}

static struct list$1char$ph* list$1char$ph$p_insert(struct list$1char$ph* self, int position, char* item){
int len_399;
int i_400;
char* default_value_401;
struct list$1char$ph* __result_obj__244;
void* __right_value311 = (void*)0;
struct list_item$1char$ph* litem_402;
char* __dec_obj34;
void* __right_value312 = (void*)0;
struct list_item$1char$ph* litem_403;
char* __dec_obj35;
struct list_item$1char$ph* it_404;
int i_405;
void* __right_value313 = (void*)0;
struct list_item$1char$ph* litem_406;
char* __dec_obj36;
struct list$1char$ph* __result_obj__245;
default_value_401 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_399=self->len;
        for(        i_400=0;        i_400<position-len_399;        i_400++        ){
            memset(&default_value_401,0,sizeof(char*));
            list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(default_value_401));
            (default_value_401 = come_decrement_ref_count2(default_value_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(item));
        __result_obj__244 = self;
        (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__244;
    }
    if(    position==0) {
        litem_402=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value311=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1653, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_402->prev=((void*)0);
        litem_402->next=self->head;
        __dec_obj34=litem_402->item;
        litem_402->item=(char*)come_increment_ref_count(item);
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_402;
        self->head=litem_402;
        self->len++;
    }
    else if(    self->len==1) {
        litem_403=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value312=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1665, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_403->prev=self->head;
        litem_403->next=self->tail;
        __dec_obj35=litem_403->item;
        litem_403->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_403;
        self->head->next=litem_403;
        self->len++;
    }
    else {
        it_404=self->head;
        i_405=0;
        while(it_404!=((void*)0)) {
            if(            position==i_405) {
                litem_406=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value313=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1681, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                litem_406->prev=it_404->prev;
                litem_406->next=it_404;
                __dec_obj36=litem_406->item;
                litem_406->item=(char*)come_increment_ref_count(item);
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_404->prev->next=litem_406;
                it_404->prev=litem_406;
                self->len++;
            }
            it_404=it_404->next;
            i_405++;
        }
    }
    __result_obj__245 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__245;
}

static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files){
char* output_file_name_407;
void* __right_value315 = (void*)0;
char* __dec_obj37;
void* __right_value316 = (void*)0;
char* __dec_obj38;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct buffer* command_408;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1char$ph* o2_saved_409;
char* it_412;
int is_mac_415;
void* __right_value321 = (void*)0;
char* cmd_416;
int rc_417;
void* __right_value322 = (void*)0;
char* cmd_418;
int rc_419;
void* __right_value323 = (void*)0;
char* cmd_420;
int rc_421;
int is_apline_422;
int is_debian_423;
int is_android_424;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
int Value_425;
_Bool _if_conditional1;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
char* str_426;
int Value_427;
_Bool __result_obj__253;
_Bool __result_obj__254;
    output_file_name_407=((void*)0);
    if(    info->output_file_name) {
        __dec_obj37=output_file_name_407;
        output_file_name_407=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj38=output_file_name_407;
        output_file_name_407=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_408=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 347, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(command_408,"%s -o %s ",CC,output_file_name_407);
    buffer_append_str(command_408,((char*)(__right_value320=charp_operator_add(" ",((char*)(__right_value319=string_operator_add(info->linker_option," ")))))));
    (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_409=(object_files),it_412=list$1char$ph$p_begin((o2_saved_409));    !list$1char$ph$p_end((o2_saved_409));    it_412=list$1char$ph$p_next((o2_saved_409))    ){
        buffer_append_format(command_408,"%s ",it_412);
    }
    is_mac_415=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_415==0) {
        buffer_append_str(command_408," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_416=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_417=system(cmd_416);
    if(    rc_417==0) {
        buffer_append_str(command_408," -L. -L/usr/local/lib ");
    }
    (cmd_416 = come_decrement_ref_count2(cmd_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_418=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_419=system(cmd_418);
    if(    rc_419==0) {
        buffer_append_format(command_408," -L%s/lib ",getenv("HOME"));
    }
    (cmd_418 = come_decrement_ref_count2(cmd_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_420=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_421=system(cmd_420);
    if(    rc_421==0) {
        buffer_append_format(command_408," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_408," %s ",info->clang_option);
    if(    gComeStr) {
        buffer_append_format(command_408," -lpcre ");
    }
    if(    gComeGC) {
        buffer_append_str(command_408," -lgc ");
    }
    if(    gComePthread) {
        buffer_append_str(command_408," -lpthread ");
    }
    if(    gComeNet) {
        is_apline_422=system("which apk 1> /dev/null 2>/dev/null");
        is_debian_423=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
        is_android_424=system("uname -a | grep Android 1>/dev/null 2>/dev/null");
        if(        is_android_424==0) {
            buffer_append_str(command_408," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(        is_apline_422==0||is_debian_423==0) {
            buffer_append_str(command_408," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(        is_mac_415==0) {
            buffer_append_format(command_408," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command_408," -lssl `mysql_config --cflags --libs`");
        }
    }
    if(    info->verbose) {
        puts(((char*)(__right_value324=buffer_to_string(command_408))));
        (__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    Value_425=system(((char*)(__right_value325=buffer_to_string(command_408))));
    if(    (_if_conditional1=(Value_425)),    (__right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional1) {
        str_426=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value326=xsprintf("gcc"))),((char*)(__right_value328=charp_substring(((char*)(__right_value327=buffer_to_string(command_408))),strlen(CC),-1)))));
        (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        Value_427=system(str_426);
        if(        Value_427) {
            printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
            __result_obj__253 = (_Bool)0;
            (str_426 = come_decrement_ref_count2(str_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (output_file_name_407 = come_decrement_ref_count2(output_file_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(command_408,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (cmd_420 = come_decrement_ref_count2(cmd_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__253;
        }
        else {
        }
        (str_426 = come_decrement_ref_count2(str_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
    }
    __result_obj__254 = (_Bool)1;
    (output_file_name_407 = come_decrement_ref_count2(output_file_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(command_408,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (cmd_420 = come_decrement_ref_count2(cmd_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_410;
char* __result_obj__247;
char* __result_obj__248;
char* result_411;
char* __result_obj__249;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_410,0,sizeof(char*));
        __result_obj__247 = result_410;
        return __result_obj__247;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__248 = self->it->item;
        return __result_obj__248;
    }
    memset(&result_411,0,sizeof(char*));
    __result_obj__249 = result_411;
    return __result_obj__249;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_413;
char* __result_obj__250;
char* __result_obj__251;
char* result_414;
char* __result_obj__252;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_413,0,sizeof(char*));
        __result_obj__250 = result_413;
        return __result_obj__250;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__251 = self->it->item;
        return __result_obj__251;
    }
    memset(&result_414,0,sizeof(char*));
    __result_obj__252 = result_414;
    return __result_obj__252;
}

_Bool new_project(int argc, char** argv){
void* __right_value330 = (void*)0;
char* project_name_428;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* project_name_debug_429;
void* __right_value334 = (void*)0;
char* cc_430;
void* __right_value335 = (void*)0;
char* install_431;
void* __right_value336 = (void*)0;
char* libs_432;
void* __right_value337 = (void*)0;
char* os_433;
void* __right_value338 = (void*)0;
char* prefix_434;
void* __right_value339 = (void*)0;
char* cflags_435;
void* __right_value340 = (void*)0;
char* cflags_debug_436;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
int Value_437;
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
_Bool __result_obj__255;
    project_name_428=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_429=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value331=__builtin_string(argv[2]))),((char*)(__right_value332=__builtin_string("-debug")))));
    (__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cc_430=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_431=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_432=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_433=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_434=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_435=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_436=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    Value_437=system(((char*)(__right_value342=xsprintf("mkdir \%s",((char*)(__right_value341=string_to_string(project_name_428)))))));
    if(    (_if_conditional2=(Value_437<0)),    (__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional2) {
        (come_push_stackframe("02transpile.c", 436, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value368=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value343=string_to_string(project_name_428))),((char*)(__right_value344=string_to_string(project_name_428))),((char*)(__right_value345=string_to_string(project_name_428))),((char*)(__right_value346=string_to_string(project_name_428))),((char*)(__right_value347=string_to_string(cc_430))),((char*)(__right_value348=string_to_string(install_431))),((char*)(__right_value349=string_to_string(cflags_435))),((char*)(__right_value350=string_to_string(cflags_debug_436))),((char*)(__right_value351=string_to_string(libs_432))),((char*)(__right_value352=string_to_string(os_433))),((char*)(__right_value353=string_to_string(prefix_434))),((char*)(__right_value354=string_to_string(project_name_428))),((char*)(__right_value355=string_to_string(project_name_debug_429))),((char*)(__right_value356=string_to_string(project_name_428))),((char*)(__right_value357=string_to_string(project_name_428))),((char*)(__right_value358=string_to_string(project_name_428))),((char*)(__right_value359=string_to_string(project_name_428))),((char*)(__right_value360=string_to_string(project_name_debug_429))),((char*)(__right_value361=string_to_string(project_name_428))),((char*)(__right_value362=string_to_string(project_name_428))),((char*)(__right_value363=string_to_string(project_name_428))),((char*)(__right_value364=string_to_string(project_name_428))),((char*)(__right_value365=string_to_string(project_name_428))),((char*)(__right_value366=string_to_string(project_name_debug_429))),((char*)(__right_value367=string_to_string(project_name_debug_429)))))),((char*)(__right_value370=xsprintf("\%s/Makefile",((char*)(__right_value369=string_to_string(project_name_428)))))),(_Bool)0);
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
    __result_obj__255 = (_Bool)1;
    (project_name_428 = come_decrement_ref_count2(project_name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (project_name_debug_429 = come_decrement_ref_count2(project_name_debug_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cc_430 = come_decrement_ref_count2(cc_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (install_431 = come_decrement_ref_count2(install_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (libs_432 = come_decrement_ref_count2(libs_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (os_433 = come_decrement_ref_count2(os_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (prefix_434 = come_decrement_ref_count2(prefix_434, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_435 = come_decrement_ref_count2(cflags_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_debug_436 = come_decrement_ref_count2(cflags_debug_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* Value_438;
int Value_439;
_Bool __exception_result_var_b2;
int Value_440;
_Bool __exception_result_var_b3;
    Value_438=fopen("common.h","r");
    if(    Value_438) {
        fclose(Value_438);
    }
    else {
        Value_439=system("make header");
        if(        Value_439<0) {
            (come_push_stackframe("02transpile.c", 542, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_440=system("make run");
    if(    Value_440<0) {
        (come_push_stackframe("02transpile.c", 547, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_441;
_Bool __exception_result_var_b4;
    Value_441=system("make header");
    if(    Value_441<0) {
        (come_push_stackframe("02transpile.c", 556, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* Value_442;
int Value_443;
_Bool __exception_result_var_b5;
int Value_444;
_Bool __exception_result_var_b6;
    Value_442=fopen("common.h","r");
    if(    Value_442) {
        fclose(Value_442);
    }
    else {
        Value_443=system("make header");
        if(        Value_443<0) {
            (come_push_stackframe("02transpile.c", 569, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
        else {
        }
    }
    Value_444=system("make compile");
    if(    Value_444<0) {
        (come_push_stackframe("02transpile.c", 573, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* Value_445;
int Value_446;
_Bool __exception_result_var_b7;
int Value_447;
_Bool __exception_result_var_b8;
    Value_445=fopen("common.h","r");
    if(    Value_445) {
        fclose(Value_445);
    }
    else {
        Value_446=system("make header");
        if(        Value_446<0) {
            (come_push_stackframe("02transpile.c", 586, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
        else {
        }
    }
    Value_447=system("make debug");
    if(    Value_447<0) {
        (come_push_stackframe("02transpile.c", 590, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_448;
_Bool __exception_result_var_b9;
    Value_448=system("make clean");
    if(    Value_448<0) {
        (come_push_stackframe("02transpile.c", 599, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
int Value_449;
_Bool _if_conditional3;
_Bool __exception_result_var_b10;
    Value_449=system(((char*)(__right_value372=xsprintf("make install DESTDIR=\%s",((char*)(__right_value371=charp_to_string(prefix)))))));
    if(    (_if_conditional3=(Value_449<0)),    (__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional3) {
        (come_push_stackframe("02transpile.c", 608, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
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
int i_497;
void* __right_value430 = (void*)0;
char* generics_type_498;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
int i_499;
void* __right_value433 = (void*)0;
char* generics_type_500;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
int is_mac_501;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
char* type_name_502;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* type_503;
void* __right_value444 = (void*)0;
char* __dec_obj39;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sClass* klass_525;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 616, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 617, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 618, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 619, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 620, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 621, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 622, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 623, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 624, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 625, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("_Float16")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 626, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 627, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__uint128_t")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 628, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__int128")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_497=0;    i_497<12;    i_497++    ){
        generics_type_498=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_497));
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(generics_type_498),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 631, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(generics_type_498),(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_497,-1,(_Bool)0,info)));
        (generics_type_498 = come_decrement_ref_count2(generics_type_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    i_499=0;    i_499<7;    i_499++    ){
        generics_type_500=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_499));
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(generics_type_500),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 635, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(generics_type_500),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_499,(_Bool)0,info)));
        (generics_type_500 = come_decrement_ref_count2(generics_type_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    is_mac_501=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_501==0) {
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 640, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_502=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_503=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 644, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,info));
        __dec_obj39=type_503->mOriginalTypeName;
        type_503->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2char$phsType$ph$p_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_502)),(struct sType*)come_increment_ref_count(type_503));
        (type_name_502 = come_decrement_ref_count2(type_name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_503,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_525=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 650, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_525->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 652, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 652, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_525->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 653, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 653, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_525->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 654, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 654, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_525->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 655, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 655, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_525->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 656, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 656, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_525));
        come_call_finalizer3(klass_525,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_473;
unsigned int it_474;
_Bool same_key_exist_491;
char* it2_494;
struct map$2char$phsClass$ph* __result_obj__276;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_473=string_get_hash_key(((char*)key))%self->size;
    it_474=hash_473;
    while((_Bool)1) {
        if(        self->item_existance[it_474]) {
            if(            string_equals(self->keys[it_474],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_474]);
                    (self->keys[it_474] = come_decrement_ref_count2(self->keys[it_474], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_474]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_474]);
                    self->keys[it_474]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_474],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_474]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_474]=item;
                }
                break;
            }
            it_474++;
            if(            it_474>=self->size) {
                it_474=0;
            }
            else if(            it_474==hash_473) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_474]=(_Bool)1;
            if(            1) {
                self->keys[it_474]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_474]=key;
            }
            if(            1) {
                self->items[it_474]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_474]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_491=(_Bool)0;
    for(    it2_494=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_494=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_494,key)) {
            same_key_exist_491=(_Bool)1;
        }
    }
    if(    !same_key_exist_491) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__276 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__276;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_450;
void* __right_value373 = (void*)0;
char** keys_451;
void* __right_value374 = (void*)0;
struct sClass** items_452;
void* __right_value375 = (void*)0;
_Bool* item_existance_453;
int len_454;
char* it_457;
struct sClass* default_value_460;
void* __right_value376 = (void*)0;
struct sClass* it2_461;
unsigned int hash_470;
int n_471;
struct sClass* default_value_472;
void* __right_value377 = (void*)0;
default_value_460 = (void*)0;
default_value_472 = (void*)0;
    size_450=self->size*10;
    keys_451=(char**)come_increment_ref_count(((char**)(__right_value373=(char**)come_calloc(1, sizeof(char*)*(1*(size_450)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_452=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value374=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_450)), "./comelang.h", 2939, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_453=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value375=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_450)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_454=0;
    for(    it_457=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_457=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_460,0,sizeof(struct sClass*));
        it2_461=((struct sClass*)(__right_value376=map$2char$phsClass$ph$p_at(self,it_457,(struct sClass*)come_increment_ref_count(default_value_460))));
        come_call_finalizer3(__right_value376,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_470=string_get_hash_key(((char*)it_457))%size_450;
        n_471=hash_470;
        while((_Bool)1) {
            if(            item_existance_453[n_471]) {
                n_471++;
                if(                n_471>=size_450) {
                    n_471=0;
                }
                else if(                n_471==hash_470) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_453[n_471]=(_Bool)1;
                keys_451[n_471]=it_457;
                items_452[n_471]=((struct sClass*)(__right_value377=map$2char$phsClass$ph$p_at(self,it_457,(struct sClass*)come_increment_ref_count(default_value_472))));
                come_call_finalizer3(__right_value377,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_454++;
                come_call_finalizer3(default_value_472,sClass_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_472,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_460,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_451;
    self->items=items_452;
    self->item_existance=item_existance_453;
    self->size=size_450;
    self->len=len_454;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_455;
char* __result_obj__256;
char* __result_obj__257;
char* result_456;
char* __result_obj__258;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_455,0,sizeof(char*));
        __result_obj__256 = result_455;
        return __result_obj__256;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__257 = self->key_list->it->item;
        return __result_obj__257;
    }
    memset(&result_456,0,sizeof(char*));
    __result_obj__258 = result_456;
    return __result_obj__258;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_458;
char* __result_obj__259;
char* __result_obj__260;
char* result_459;
char* __result_obj__261;
result_458 = (void*)0;
result_459 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_458,0,sizeof(char*));
        __result_obj__259 = result_458;
        return __result_obj__259;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__260 = self->key_list->it->item;
        return __result_obj__260;
    }
    memset(&result_459,0,sizeof(char*));
    __result_obj__261 = result_459;
    return __result_obj__261;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_462;
unsigned int it_463;
struct sClass* __result_obj__262;
struct sClass* __result_obj__263;
struct sClass* __result_obj__264;
struct sClass* __result_obj__265;
    hash_462=string_get_hash_key(((char*)key))%self->size;
    it_463=hash_462;
    while((_Bool)1) {
        if(        self->item_existance[it_463]) {
            if(            string_equals(self->keys[it_463],key)) {
                __result_obj__262 = come_increment_ref_count(self->items[it_463]);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__262,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__262;
            }
            it_463++;
            if(            it_463>=self->size) {
                it_463=0;
            }
            else if(            it_463==hash_462) {
                __result_obj__263 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__263,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__263;
            }
        }
        else {
            __result_obj__264 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__264,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__264;
        }
    }
    __result_obj__265 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__265,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__265;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_464;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_465;
    it_464=self->head;
    while(it_464!=((void*)0)) {
        prev_it_465=it_464;
        it_464=it_464->next;
        come_call_finalizer3(prev_it_465,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_466;
struct list_item$1sType$ph* prev_it_467;
    it_466=self->head;
    while(it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        come_call_finalizer3(prev_it_467,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_468;
struct list_item$1sNode$ph* prev_it_469;
    it_468=self->head;
    while(it_468!=((void*)0)) {
        prev_it_469=it_468;
        it_468=it_468->next;
        come_call_finalizer3(prev_it_469,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_475;
struct list_item$1char$p* it_476;
struct list$1char$p* __result_obj__269;
    it2_475=0;
    it_476=self->head;
    while(it_476!=((void*)0)) {
        if(        charp_equals(it_476->item,item)) {
            list$1char$p$p_delete(self,it2_475,it2_475+1);
            break;
        }
        it2_475++;
        it_476=it_476->next;
    }
    __result_obj__269 = self;
    return __result_obj__269;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_477;
struct list$1char$p* __result_obj__266;
struct list_item$1char$p* it_480;
int i_481;
struct list_item$1char$p* prev_it_482;
struct list_item$1char$p* it_483;
int i_484;
struct list_item$1char$p* prev_it_485;
struct list_item$1char$p* it_486;
struct list_item$1char$p* head_prev_it_487;
struct list_item$1char$p* tail_it_488;
int i_489;
struct list_item$1char$p* prev_it_490;
struct list$1char$p* __result_obj__268;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_477=tail;
        tail=head;
        head=tmp_477;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__266 = self;
        return __result_obj__266;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_480=self->head;
        i_481=0;
        while(it_480!=((void*)0)) {
            if(            i_481<tail) {
                prev_it_482=it_480;
                it_480=it_480->next;
                i_481++;
                come_call_finalizer3(prev_it_482,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_481==tail) {
                self->head=it_480;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_480=it_480->next;
                i_481++;
            }
        }
    }
    else if(    tail==self->len) {
        it_483=self->head;
        i_484=0;
        while(it_483!=((void*)0)) {
            if(            i_484==head) {
                self->tail=it_483->prev;
                self->tail->next=((void*)0);
            }
            if(            i_484>=head) {
                prev_it_485=it_483;
                it_483=it_483->next;
                i_484++;
                come_call_finalizer3(prev_it_485,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_483=it_483->next;
                i_484++;
            }
        }
    }
    else {
        it_486=self->head;
        head_prev_it_487=((void*)0);
        tail_it_488=((void*)0);
        i_489=0;
        while(it_486!=((void*)0)) {
            if(            i_489==head) {
                head_prev_it_487=it_486->prev;
            }
            if(            i_489==tail) {
                tail_it_488=it_486;
            }
            if(            i_489>=head&&i_489<tail) {
                prev_it_490=it_486;
                it_486=it_486->next;
                i_489++;
                come_call_finalizer3(prev_it_490,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_486=it_486->next;
                i_489++;
            }
        }
        if(        head_prev_it_487!=((void*)0)) {
            head_prev_it_487->next=tail_it_488;
        }
        if(        tail_it_488!=((void*)0)) {
            tail_it_488->prev=head_prev_it_487;
        }
    }
    __result_obj__268 = self;
    return __result_obj__268;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_478;
struct list_item$1char$p* prev_it_479;
struct list$1char$p* __result_obj__267;
    it_478=self->head;
    while(it_478!=((void*)0)) {
        prev_it_479=it_478;
        it_478=it_478->next;
        come_call_finalizer3(prev_it_479,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__267 = self;
    return __result_obj__267;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_492;
char* __result_obj__270;
char* __result_obj__271;
char* result_493;
char* __result_obj__272;
result_492 = (void*)0;
result_493 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_492,0,sizeof(char*));
        __result_obj__270 = result_492;
        return __result_obj__270;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__271 = self->it->item;
        return __result_obj__271;
    }
    memset(&result_493,0,sizeof(char*));
    __result_obj__272 = result_493;
    return __result_obj__272;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_495;
char* __result_obj__273;
char* __result_obj__274;
char* result_496;
char* __result_obj__275;
result_495 = (void*)0;
result_496 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_495,0,sizeof(char*));
        __result_obj__273 = result_495;
        return __result_obj__273;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__274 = self->it->item;
        return __result_obj__274;
    }
    memset(&result_496,0,sizeof(char*));
    __result_obj__275 = result_496;
    return __result_obj__275;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph$p_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_521;
unsigned int it_522;
_Bool same_key_exist_523;
char* it2_524;
struct map$2char$phsType$ph* __result_obj__287;
    if(    self->len*10>=self->size) {
        map$2char$phsType$ph$p_rehash(self);
    }
    hash_521=string_get_hash_key(((char*)key))%self->size;
    it_522=hash_521;
    while((_Bool)1) {
        if(        self->item_existance[it_522]) {
            if(            string_equals(self->keys[it_522],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_522]);
                    (self->keys[it_522] = come_decrement_ref_count2(self->keys[it_522], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_522]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_522]);
                    self->keys[it_522]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_522],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_522]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_522]=item;
                }
                break;
            }
            it_522++;
            if(            it_522>=self->size) {
                it_522=0;
            }
            else if(            it_522==hash_521) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_522]=(_Bool)1;
            if(            1) {
                self->keys[it_522]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_522]=key;
            }
            if(            1) {
                self->items[it_522]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_522]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_523=(_Bool)0;
    for(    it2_524=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_524=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_524,key)) {
            same_key_exist_523=(_Bool)1;
        }
    }
    if(    !same_key_exist_523) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__287 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__287;
}

static void map$2char$phsType$ph$p_rehash(struct map$2char$phsType$ph* self){
int size_504;
void* __right_value445 = (void*)0;
char** keys_505;
void* __right_value446 = (void*)0;
struct sType** items_506;
void* __right_value447 = (void*)0;
_Bool* item_existance_507;
int len_508;
char* it_511;
struct sType* default_value_514;
void* __right_value448 = (void*)0;
struct sType* it2_515;
unsigned int hash_518;
int n_519;
struct sType* default_value_520;
void* __right_value449 = (void*)0;
default_value_514 = (void*)0;
default_value_520 = (void*)0;
    size_504=self->size*10;
    keys_505=(char**)come_increment_ref_count(((char**)(__right_value445=(char**)come_calloc(1, sizeof(char*)*(1*(size_504)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_506=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value446=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_504)), "./comelang.h", 2939, "struct sType**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_507=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value447=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_504)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_508=0;
    for(    it_511=map$2char$phsType$ph$p_begin(self);    !map$2char$phsType$ph$p_end(self);    it_511=map$2char$phsType$ph$p_next(self)    ){
        memset(&default_value_514,0,sizeof(struct sType*));
        it2_515=((struct sType*)(__right_value448=map$2char$phsType$ph$p_at(self,it_511,(struct sType*)come_increment_ref_count(default_value_514))));
        come_call_finalizer3(__right_value448,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_518=string_get_hash_key(((char*)it_511))%size_504;
        n_519=hash_518;
        while((_Bool)1) {
            if(            item_existance_507[n_519]) {
                n_519++;
                if(                n_519>=size_504) {
                    n_519=0;
                }
                else if(                n_519==hash_518) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_507[n_519]=(_Bool)1;
                keys_505[n_519]=it_511;
                items_506[n_519]=((struct sType*)(__right_value449=map$2char$phsType$ph$p_at(self,it_511,(struct sType*)come_increment_ref_count(default_value_520))));
                come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_508++;
                come_call_finalizer3(default_value_520,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_520,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_514,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_505;
    self->items=items_506;
    self->item_existance=item_existance_507;
    self->size=size_504;
    self->len=len_508;
}

static char* map$2char$phsType$ph$p_begin(struct map$2char$phsType$ph* self){
char* result_509;
char* __result_obj__277;
char* __result_obj__278;
char* result_510;
char* __result_obj__279;
result_509 = (void*)0;
result_510 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_509,0,sizeof(char*));
        __result_obj__277 = result_509;
        return __result_obj__277;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__278 = self->key_list->it->item;
        return __result_obj__278;
    }
    memset(&result_510,0,sizeof(char*));
    __result_obj__279 = result_510;
    return __result_obj__279;
}

static _Bool map$2char$phsType$ph$p_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph$p_next(struct map$2char$phsType$ph* self){
char* result_512;
char* __result_obj__280;
char* __result_obj__281;
char* result_513;
char* __result_obj__282;
result_512 = (void*)0;
result_513 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_512,0,sizeof(char*));
        __result_obj__280 = result_512;
        return __result_obj__280;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__281 = self->key_list->it->item;
        return __result_obj__281;
    }
    memset(&result_513,0,sizeof(char*));
    __result_obj__282 = result_513;
    return __result_obj__282;
}

static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_516;
unsigned int it_517;
struct sType* __result_obj__283;
struct sType* __result_obj__284;
struct sType* __result_obj__285;
struct sType* __result_obj__286;
    hash_516=string_get_hash_key(((char*)key))%self->size;
    it_517=hash_516;
    while((_Bool)1) {
        if(        self->item_existance[it_517]) {
            if(            string_equals(self->keys[it_517],key)) {
                __result_obj__283 = come_increment_ref_count(self->items[it_517]);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__283,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__283;
            }
            it_517++;
            if(            it_517>=self->size) {
                it_517=0;
            }
            else if(            it_517==hash_516) {
                __result_obj__284 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__284,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__284;
            }
        }
        else {
            __result_obj__285 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__285,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__285;
        }
    }
    __result_obj__286 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__286,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__286;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value454 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_526;
struct tuple2$2char$phsType$ph* __dec_obj40;
void* __right_value455 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_527;
struct tuple2$2char$phsType$ph* __dec_obj41;
void* __right_value456 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_528;
struct tuple2$2char$phsType$ph* __dec_obj42;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__288;
    if(    self->len==0) {
        litem_526=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value454=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1493, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_526->prev=((void*)0);
        litem_526->next=((void*)0);
        __dec_obj40=litem_526->item;
        litem_526->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj40,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_526;
        self->head=litem_526;
    }
    else if(    self->len==1) {
        litem_527=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value455=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1503, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_527->prev=self->head;
        litem_527->next=((void*)0);
        __dec_obj41=litem_527->item;
        litem_527->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj41,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_527;
        self->head->next=litem_527;
    }
    else {
        litem_528=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value456=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1513, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_528->prev=self->tail;
        litem_528->next=((void*)0);
        __dec_obj42=litem_528->item;
        litem_528->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj42,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_528;
        self->tail=litem_528;
    }
    self->len++;
    __result_obj__288 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__288;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__289;
void* __right_value461 = (void*)0;
struct tuple2$2char$phsType$ph* result_529;
void* __right_value462 = (void*)0;
char* __dec_obj43;
void* __right_value501 = (void*)0;
struct sType* __dec_obj68;
struct tuple2$2char$phsType$ph* __result_obj__305;
    if(    self==(void*)0) {
        __result_obj__289 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__289,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__289;
    }
    result_529=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj43=result_529->v1;
        result_529->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj68=result_529->v2;
        result_529->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__305 = come_increment_ref_count(result_529);
    come_call_finalizer3(result_529,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__305,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__305;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__290;
void* __right_value463 = (void*)0;
struct sType* result_530;
void* __right_value464 = (void*)0;
struct sType* __dec_obj44;
void* __right_value465 = (void*)0;
struct sType* __dec_obj45;
void* __right_value473 = (void*)0;
struct list$1sType$ph* __dec_obj49;
void* __right_value474 = (void*)0;
struct sType* __dec_obj50;
void* __right_value475 = (void*)0;
struct sType* __dec_obj51;
void* __right_value477 = (void*)0;
struct sNode* __dec_obj52;
void* __right_value478 = (void*)0;
struct sNode* __dec_obj53;
void* __right_value479 = (void*)0;
char* __dec_obj54;
void* __right_value480 = (void*)0;
char* __dec_obj55;
void* __right_value481 = (void*)0;
char* __dec_obj56;
void* __right_value489 = (void*)0;
struct list$1sNode$ph* __dec_obj60;
void* __right_value490 = (void*)0;
char* __dec_obj61;
void* __right_value491 = (void*)0;
struct list$1sType$ph* __dec_obj62;
void* __right_value499 = (void*)0;
struct list$1char$ph* __dec_obj66;
void* __right_value500 = (void*)0;
struct sType* __dec_obj67;
struct sType* __result_obj__304;
    if(    self==(void*)0) {
        __result_obj__290 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__290,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__290;
    }
    result_530=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_530->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj44=result_530->mOriginalLoadVarType;
        result_530->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj45=result_530->mChannelType;
        result_530->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj49=result_530->mGenericsTypes;
        result_530->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj49,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj50=result_530->mNoSolvedGenericsType;
        result_530->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj51=result_530->mAnyOriginalType;
        result_530->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj52=result_530->mSizeNum;
        result_530->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj53=result_530->mAlignas;
        result_530->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj54=result_530->mTupleName;
        result_530->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj55=result_530->mAttribute;
        result_530->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_530->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_530->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_530->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_530->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_530->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_530->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_530->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_530->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_530->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_530->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_530->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_530->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_530->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_530->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_530->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_530->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_530->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_530->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_530->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_530->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_530->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_530->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_530->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_530->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_530->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj56=result_530->mAsmName;
        result_530->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_530->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_530->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj60=result_530->mArrayNum;
        result_530->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj60,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_530->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_530->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_530->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_530->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_530->mOriginalTypeName;
        result_530->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_530->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_530->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_530->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj62=result_530->mParamTypes;
        result_530->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj62,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj66=result_530->mParamNames;
        result_530->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj66,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj67=result_530->mResultType;
        result_530->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->mVarArgs=self->mVarArgs;
    }
    __result_obj__304 = come_increment_ref_count(result_530);
    come_call_finalizer3(result_530,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__304,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__304;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__291;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1sType$ph* result_531;
struct list_item$1sType$ph* it_532;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1sType$ph* __result_obj__294;
    if(    self==((void*)0)) {
        __result_obj__291 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__291,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__291;
    }
    result_531=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1404, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_532=self->head;
    while(it_532!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_531,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_532->item)));
        }
        else {
            list$1sType$ph$p_add(result_531,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_532->item)));
        }
        it_532=it_532->next;
    }
    __result_obj__294 = come_increment_ref_count(result_531);
    come_call_finalizer3(result_531,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__294,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__294;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__292;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__292 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__292,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__292;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value468 = (void*)0;
struct list_item$1sType$ph* litem_533;
struct sType* __dec_obj46;
void* __right_value469 = (void*)0;
struct list_item$1sType$ph* litem_534;
struct sType* __dec_obj47;
void* __right_value470 = (void*)0;
struct list_item$1sType$ph* litem_535;
struct sType* __dec_obj48;
struct list$1sType$ph* __result_obj__293;
    if(    self->len==0) {
        litem_533=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value468=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1423, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_533->prev=((void*)0);
        litem_533->next=((void*)0);
        __dec_obj46=litem_533->item;
        litem_533->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_533;
        self->head=litem_533;
    }
    else if(    self->len==1) {
        litem_534=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value469=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1433, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_534->prev=self->head;
        litem_534->next=((void*)0);
        __dec_obj47=litem_534->item;
        litem_534->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_534;
        self->head->next=litem_534;
    }
    else {
        litem_535=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value470=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1443, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_535->prev=self->tail;
        litem_535->next=((void*)0);
        __dec_obj48=litem_535->item;
        litem_535->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_535;
        self->tail=litem_535;
    }
    self->len++;
    __result_obj__293 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__293;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_536;
struct list_item$1sType$ph* prev_it_537;
    it_536=self->head;
    while(it_536!=((void*)0)) {
        prev_it_537=it_536;
        it_536=it_536->next;
        come_call_finalizer3(prev_it_537,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__295;
void* __right_value476 = (void*)0;
struct sNode* result_538;
struct sNode* __result_obj__296;
    if(    self==(void*)0) {
        __result_obj__295 = come_increment_ref_count((void*)0);
        ((__result_obj__295) ? __result_obj__295 = come_decrement_ref_count2(__result_obj__295, ((struct sNode*)__result_obj__295)->finalize, ((struct sNode*)__result_obj__295)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__295;
    }
    result_538=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_538->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_538->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_538->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_538->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_538->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_538->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_538->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_538->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_538->kind=self->kind;
    }
    __result_obj__296 = come_increment_ref_count(result_538);
    ((result_538) ? result_538 = come_decrement_ref_count2(result_538, ((struct sNode*)result_538)->finalize, ((struct sNode*)result_538)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__296) ? __result_obj__296 = come_decrement_ref_count2(__result_obj__296, ((struct sNode*)__result_obj__296)->finalize, ((struct sNode*)__result_obj__296)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__296;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__297;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1sNode$ph* result_539;
struct list_item$1sNode$ph* it_540;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1sNode$ph* __result_obj__300;
    if(    self==((void*)0)) {
        __result_obj__297 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__297,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__297;
    }
    result_539=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_540=self->head;
    while(it_540!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_539,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_540->item)));
        }
        else {
            list$1sNode$ph$p_add(result_539,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_540->item)));
        }
        it_540=it_540->next;
    }
    __result_obj__300 = come_increment_ref_count(result_539);
    come_call_finalizer3(result_539,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__300,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__300;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__298;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__298 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__298,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__298;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value484 = (void*)0;
struct list_item$1sNode$ph* litem_541;
struct sNode* __dec_obj57;
void* __right_value485 = (void*)0;
struct list_item$1sNode$ph* litem_542;
struct sNode* __dec_obj58;
void* __right_value486 = (void*)0;
struct list_item$1sNode$ph* litem_543;
struct sNode* __dec_obj59;
struct list$1sNode$ph* __result_obj__299;
    if(    self->len==0) {
        litem_541=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value484=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_541->prev=((void*)0);
        litem_541->next=((void*)0);
        __dec_obj57=litem_541->item;
        litem_541->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_541;
        self->head=litem_541;
    }
    else if(    self->len==1) {
        litem_542=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value485=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_542->prev=self->head;
        litem_542->next=((void*)0);
        __dec_obj58=litem_542->item;
        litem_542->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_542;
        self->head->next=litem_542;
    }
    else {
        litem_543=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value486=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_543->prev=self->tail;
        litem_543->next=((void*)0);
        __dec_obj59=litem_543->item;
        litem_543->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_543;
        self->tail=litem_543;
    }
    self->len++;
    __result_obj__299 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__299;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_544;
struct list_item$1sNode$ph* prev_it_545;
    it_544=self->head;
    while(it_544!=((void*)0)) {
        prev_it_545=it_544;
        it_544=it_544->next;
        come_call_finalizer3(prev_it_545,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__301;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1char$ph* result_546;
struct list_item$1char$ph* it_547;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1char$ph* __result_obj__303;
    if(    self==((void*)0)) {
        __result_obj__301 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__301,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__301;
    }
    result_546=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_547=self->head;
    while(it_547!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_546,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_547->item)));
        }
        else {
            list$1char$ph$p_add(result_546,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_547->item)));
        }
        it_547=it_547->next;
    }
    __result_obj__303 = come_increment_ref_count(result_546);
    come_call_finalizer3(result_546,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__303,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value494 = (void*)0;
struct list_item$1char$ph* litem_548;
char* __dec_obj63;
void* __right_value495 = (void*)0;
struct list_item$1char$ph* litem_549;
char* __dec_obj64;
void* __right_value496 = (void*)0;
struct list_item$1char$ph* litem_550;
char* __dec_obj65;
struct list$1char$ph* __result_obj__302;
    if(    self->len==0) {
        litem_548=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value494=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_548->prev=((void*)0);
        litem_548->next=((void*)0);
        __dec_obj63=litem_548->item;
        litem_548->item=(char*)come_increment_ref_count(item);
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_548;
        self->head=litem_548;
    }
    else if(    self->len==1) {
        litem_549=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value495=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_549->prev=self->head;
        litem_549->next=((void*)0);
        __dec_obj64=litem_549->item;
        litem_549->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_549;
        self->head->next=litem_549;
    }
    else {
        litem_550=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value496=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_550->prev=self->tail;
        litem_550->next=((void*)0);
        __dec_obj65=litem_550->item;
        litem_550->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_550;
        self->tail=litem_550;
    }
    self->len++;
    __result_obj__302 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__302;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_551;
struct list_item$1char$ph* prev_it_552;
    it_551=self->head;
    while(it_551!=((void*)0)) {
        prev_it_552=it_551;
        it_551=it_551->next;
        come_call_finalizer3(prev_it_552,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_553;
    result_553=0;
    result_553+=int_get_hash_key(((int)self->v1));
    result_553+=int_get_hash_key(((int)self->v2));
    return result_553;
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
    if(    !list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_554;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_555;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_554=left->head;
    it2_555=right->head;
    while(it_554!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_554->item,it2_555->item)) {
            return (_Bool)0;
        }
        it_554=it_554->next;
        it2_555=it2_555->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_556;
struct list_item$1sType$ph* it2_557;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_556=left->head;
    it2_557=right->head;
    while(it_556!=((void*)0)) {
        if(        !sType_equals(it_556->item,it2_557->item)) {
            return (_Bool)0;
        }
        it_556=it_556->next;
        it2_557=it2_557->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_558;
struct list_item$1sNode$ph* it2_559;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_558=left->head;
    it2_559=right->head;
    while(it_558!=((void*)0)) {
        if(        !sNode_equals(it_558->item,it2_559->item)) {
            return (_Bool)0;
        }
        it_558=it_558->next;
        it2_559=it2_559->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_560;
struct list_item$1char$ph* it2_561;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_560=left->head;
    it2_561=right->head;
    while(it_560!=((void*)0)) {
        if(        !string_equals(it_560->item,it2_561->item)) {
            return (_Bool)0;
        }
        it_560=it_560->next;
        it2_561=it2_561->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj69;
struct sType* __dec_obj70;
struct tuple2$2char$phsType$ph* __result_obj__306;
    __dec_obj69=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj70=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__306 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__306,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__306;
}

void create_pico_version_header(){
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* Value_562;
_Bool _if_conditional4;
int version_major_563;
char* p_564;
int version_miner_565;
char* p_566;
int version_revision_567;
char* p_568;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
char* version_string_569;
int Value_570;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
    if(    getenv("PICO_SDK_PATH")) {
        Value_562=(char*)come_increment_ref_count(charp_read((((char*)(__right_value529=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_if_conditional4=(Value_562)),        (__right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional4) {
            version_major_563=0;
            p_564=strstr(Value_562,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_564) {
                p_564+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(*p_564==32||*p_564==9) {
                    p_564++;
                }
                while(xisdigit(*p_564)) {
                    version_major_563=version_major_563*10+(*p_564-48);
                    p_564++;
                }
            }
            version_miner_565=0;
            p_566=strstr(Value_562,"set(PICO_SDK_VERSION_MINOR");
            if(            p_566) {
                p_566+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p_566==32||*p_566==9) {
                    p_566++;
                }
                while(xisdigit(*p_566)) {
                    version_miner_565=version_miner_565*10+*p_566-48;
                    p_566++;
                }
            }
            version_revision_567=0;
            p_568=strstr(Value_562,"set(PICO_SDK_VERSION_REVISION");
            if(            p_568) {
                p_568+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p_568==32||*p_568==9) {
                    p_568++;
                }
                while(xisdigit(*p_568)) {
                    version_revision_567=version_revision_567*10+*p_568-48;
                    p_568++;
                }
            }
            version_string_569=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value531=int_to_string(version_major_563))),((char*)(__right_value532=int_to_string(version_miner_565))),((char*)(__right_value533=int_to_string(version_revision_567)))));
            (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            Value_570=system("mkdir -p pico");
            if(            !Value_570) {
                charp_write(((char*)(__right_value539=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value535=int_to_string(version_major_563))),((char*)(__right_value536=int_to_string(version_miner_565))),((char*)(__right_value537=int_to_string(version_revision_567))),((char*)(__right_value538=string_to_string(version_string_569)))))),"pico/version.h",(_Bool)0);
                (__right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            (version_string_569 = come_decrement_ref_count2(version_string_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        (Value_562 = come_decrement_ref_count2(Value_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main_v2(int argc, char** argv){
int start_num_571;
void* __right_value540 = (void*)0;
char* output_file_name_str_572;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct buffer* clang_option_573;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct buffer* linker_option_574;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct buffer* cpp_option_575;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1char$ph* files_576;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1char$ph* object_files_577;
_Bool output_object_file_578;
_Bool output_cpp_file_579;
_Bool output_source_file_flag_580;
_Bool output_object_file_flag_581;
char* output_file_name_582;
_Bool verbose_583;
_Bool come_debug_584;
_Bool come_malloc_585;
_Bool m5stack_cpp_586;
_Bool pico_cpp_587;
_Bool gcc_compiler_588;
int i_589;
void* __right_value551 = (void*)0;
char* ext_name_590;
void* __right_value552 = (void*)0;
char* __dec_obj71;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
char* env_591;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct buffer* __dec_obj72;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
char* env_592;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct buffer* __dec_obj73;
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
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
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
_Bool _elif_conditional1;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
_Bool _elif_conditional2;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
_Bool _elif_conditional3;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
int Value_593;
_Bool _if_conditional5;
_Bool __exception_result_var_b11;
struct _IO_FILE* Value_594;
_Bool __exception_result_var_b12;
void* __right_value638 = (void*)0;
char* tmp_file_595;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
int Value_599;
_Bool _if_conditional6;
_Bool __exception_result_var_b13;
struct sInfo info_600;
void* __right_value646 = (void*)0;
char* __dec_obj74;
void* __right_value647 = (void*)0;
char* __dec_obj75;
void* __right_value648 = (void*)0;
char* __dec_obj76;
void* __right_value649 = (void*)0;
char* __dec_obj77;
void* __right_value650 = (void*)0;
char* __dec_obj78;
void* __right_value651 = (void*)0;
void* __right_value657 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj80;
void* __right_value658 = (void*)0;
void* __right_value664 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj82;
void* __right_value665 = (void*)0;
void* __right_value671 = (void*)0;
struct map$2char$phchar$ph* __dec_obj84;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj85;
void* __right_value674 = (void*)0;
void* __right_value680 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj87;
void* __right_value681 = (void*)0;
void* __right_value687 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj89;
void* __right_value688 = (void*)0;
void* __right_value694 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj91;
void* __right_value695 = (void*)0;
void* __right_value701 = (void*)0;
struct map$2char$phsType$ph* __dec_obj93;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sModule* __dec_obj94;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj95;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct list$1CVALUE$ph* __dec_obj96;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sVarTable* __dec_obj97;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sVarTable* lv_table_646;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1char$ph* __dec_obj98;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1char$ph* __dec_obj99;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj100;
void* __right_value718 = (void*)0;
char* __dec_obj101;
_Bool Value_648;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct buffer* __dec_obj102;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct buffer* __dec_obj103;
_Bool Value_649;
_Bool Value_650;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
_Bool Value_653;
_Bool Value_654;
_Bool Value_655;
_Bool Value_656;
_Bool Value_657;
_Bool Value_658;
_Bool Value_659;
_Bool Value_660;
int start_num_661;
char* output_file_name_str_662;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct buffer* clang_option_663;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct buffer* linker_option_664;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct buffer* cpp_option_665;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct list$1char$ph* files_666;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1char$ph* object_files_667;
_Bool output_object_file_668;
_Bool output_cpp_file_669;
_Bool output_source_file_flag_670;
_Bool output_object_file_flag_671;
char* output_file_name_672;
_Bool verbose_673;
_Bool come_debug_674;
_Bool come_malloc_675;
_Bool m5stack_cpp_676;
_Bool pico_cpp_677;
_Bool gcc_compiler_678;
int i_679;
void* __right_value738 = (void*)0;
char* ext_name_680;
void* __right_value739 = (void*)0;
char* __dec_obj104;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
char* env_681;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct buffer* __dec_obj105;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
char* env_682;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct buffer* __dec_obj106;
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
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
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
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
_Bool _elif_conditional4;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
_Bool _elif_conditional5;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
_Bool _elif_conditional6;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct list$1char$ph* o2_saved_683;
char* it_684;
struct sInfo info_685;
struct _IO_FILE* Value_686;
void* __right_value824 = (void*)0;
char* __dec_obj107;
void* __right_value825 = (void*)0;
char* __dec_obj108;
void* __right_value826 = (void*)0;
char* __dec_obj109;
void* __right_value827 = (void*)0;
char* __dec_obj110;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj111;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj112;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct map$2char$phchar$ph* __dec_obj113;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj114;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj115;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj116;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj117;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct map$2char$phsType$ph* __dec_obj118;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sModule* __dec_obj119;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj120;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1CVALUE$ph* __dec_obj121;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sVarTable* __dec_obj122;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sVarTable* lv_table_687;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1char$ph* __dec_obj123;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct list$1char$ph* __dec_obj124;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj125;
_Bool Value_688;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct buffer* __dec_obj126;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct buffer* __dec_obj127;
void* __right_value866 = (void*)0;
char* __dec_obj128;
char* __dec_obj129;
_Bool Value_689;
_Bool Value_690;
_Bool Value_691;
_Bool Value_692;
struct sInfo info_693;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
char* __dec_obj130;
void* __right_value869 = (void*)0;
char* __dec_obj131;
void* __right_value870 = (void*)0;
char* __dec_obj132;
void* __right_value871 = (void*)0;
char* __dec_obj133;
char* __dec_obj134;
_Bool Value_697;
memset(&info_600, 0, sizeof(struct sInfo));
memset(&info_685, 0, sizeof(struct sInfo));
memset(&info_693, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        start_num_571=2;
        output_file_name_str_572=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_573=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 725, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        linker_option_574=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        cpp_option_575=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_575,"-U__GNUC__");
        files_576=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 729, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_577=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 730, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_578=(_Bool)0;
        output_cpp_file_579=(_Bool)0;
        output_source_file_flag_580=(_Bool)0;
        output_object_file_flag_581=(_Bool)1;
        output_file_name_582=(char*)come_increment_ref_count(output_file_name_str_572);
        verbose_583=(_Bool)0;
        come_debug_584=(_Bool)0;
        come_malloc_585=(_Bool)0;
        m5stack_cpp_586=(_Bool)0;
        pico_cpp_587=(_Bool)0;
        gcc_compiler_588=(_Bool)0;
        for(        i_589=start_num_571;        i_589<argc;        i_589++        ){
            ext_name_590=(char*)come_increment_ref_count(xextname(argv[i_589]));
            if(            charp_operator_equals(argv[i_589],"-o")&&i_589+1<argc) {
                __dec_obj71=output_file_name_582;
                output_file_name_582=(char*)come_increment_ref_count(__builtin_string(argv[i_589+1]));
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_589++;
            }
            else if(            charp_operator_equals(argv[i_589],"-e")&&i_589+1<argc) {
                buffer_append_str(linker_option_574,((char*)(__right_value554=xsprintf("-e \%s",((char*)(__right_value553=charp_to_string(argv[i_589+1])))))));
                (__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_589++;
            }
            else if(            charp_operator_equals(argv[i_589],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_589],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_589],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_575,((char*)(__right_value555=xsprintf(" -DENABLE_GC "))));
                (__right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-gcc")) {
                gcc_compiler_588=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_589],"-pico")) {
                output_source_file_flag_580=(_Bool)1;
                output_object_file_flag_581=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_591=getenv("PICO_SDK_PATH");
                __dec_obj72=cpp_option_575;
                cpp_option_575=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 772, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj72,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_575,((char*)(__right_value560=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value558=charp_to_string(env_591))),((char*)(__right_value559=charp_to_string(env_591)))))));
                (__right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_587=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_589],"-m5stack")) {
                m5stack_cpp_586=(_Bool)1;
                output_source_file_flag_580=(_Bool)1;
                output_object_file_flag_581=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_592=getenv("IDF_PATH");
                __dec_obj73=cpp_option_575;
                cpp_option_575=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 783, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj73,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_575,((char*)(__right_value584=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value563=charp_to_string(getenv("HOME")))),((char*)(__right_value564=charp_to_string(env_592))),((char*)(__right_value565=charp_to_string(env_592))),((char*)(__right_value566=charp_to_string(env_592))),((char*)(__right_value567=charp_to_string(env_592))),((char*)(__right_value568=charp_to_string(env_592))),((char*)(__right_value569=charp_to_string(env_592))),((char*)(__right_value570=charp_to_string(env_592))),((char*)(__right_value571=charp_to_string(env_592))),((char*)(__right_value572=charp_to_string(env_592))),((char*)(__right_value573=charp_to_string(env_592))),((char*)(__right_value574=charp_to_string(env_592))),((char*)(__right_value575=charp_to_string(env_592))),((char*)(__right_value576=charp_to_string(env_592))),((char*)(__right_value577=charp_to_string(env_592))),((char*)(__right_value578=charp_to_string(env_592))),((char*)(__right_value579=charp_to_string(env_592))),((char*)(__right_value580=charp_to_string(env_592))),((char*)(__right_value581=charp_to_string(env_592))),((char*)(__right_value582=charp_to_string(env_592))),((char*)(__right_value583=charp_to_string(env_592)))))),"/usr/local/");
                (__right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_589+1<argc&&charp_operator_equals(argv[i_589],"-target")) {
                buffer_append_str(clang_option_573,((char*)(__right_value586=xsprintf("-target \%s",((char*)(__right_value585=charp_to_string(argv[i_589+1])))))));
                (__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_589++;
            }
            else if(            i_589+1<argc&&charp_operator_equals(argv[i_589],"-T")) {
                buffer_append_str(clang_option_573,((char*)(__right_value588=xsprintf(" -T \%s ",((char*)(__right_value587=charp_to_string(argv[i_589+1])))))));
                (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_589++;
            }
            else if(            charp_operator_equals(argv[i_589],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_589],"-cg")) {
                come_debug_584=(_Bool)1;
                buffer_append_str(clang_option_573,"-g ");
            }
            else if(            charp_operator_equals(argv[i_589],"-C")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value590=xsprintf("\%s ",((char*)(__right_value589=charp_to_string(argv[i_589])))))));
                (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-M")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value592=xsprintf("\%s ",((char*)(__right_value591=charp_to_string(argv[i_589])))))));
                (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-MM")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value594=xsprintf("\%s ",((char*)(__right_value593=charp_to_string(argv[i_589])))))));
                (__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-dM")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value596=xsprintf("\%s ",((char*)(__right_value595=charp_to_string(argv[i_589])))))));
                (__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-dD")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value598=xsprintf("\%s ",((char*)(__right_value597=charp_to_string(argv[i_589])))))));
                (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-H")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value600=xsprintf("\%s ",((char*)(__right_value599=charp_to_string(argv[i_589])))))));
                (__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-P")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value602=xsprintf("\%s ",((char*)(__right_value601=charp_to_string(argv[i_589])))))));
                (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-nostdinc")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value604=xsprintf("\%s ",((char*)(__right_value603=charp_to_string(argv[i_589])))))));
                (__right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-CC")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value606=xsprintf("\%s ",((char*)(__right_value605=charp_to_string(argv[i_589])))))));
                (__right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_589+1<argc&&charp_operator_equals(argv[i_589],"-target")) {
                buffer_append_str(clang_option_573,((char*)(__right_value608=xsprintf("-target \%s",((char*)(__right_value607=charp_to_string(argv[i_589+1])))))));
                (__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_589++;
            }
            else if(            i_589+1<argc&&charp_operator_equals(argv[i_589],"-include")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value610=xsprintf("-iclude \%s",((char*)(__right_value609=charp_to_string(argv[i_589+1])))))));
                (__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_589++;
            }
            else if(            i_589+1<argc&&charp_operator_equals(argv[i_589],"-isystem")) {
                buffer_append_str(cpp_option_575,((char*)(__right_value612=xsprintf("-isystem \%s",((char*)(__right_value611=charp_to_string(argv[i_589+1])))))));
                (__right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_573,((char*)(__right_value614=xsprintf("-isystem \%s",((char*)(__right_value613=charp_to_string(argv[i_589+1])))))));
                (__right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_589++;
            }
            else if(            i_589+1<argc&&charp_operator_equals(argv[i_589],"-T")) {
                buffer_append_str(clang_option_573,((char*)(__right_value616=xsprintf(" -T \%s ",((char*)(__right_value615=charp_to_string(argv[i_589+1])))))));
                (__right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_589++;
            }
            else if(            charp_operator_equals(argv[i_589],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_589],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value617=charp_operator_load_range_element(argv[i_589],0,2))),"-O"))),            (__right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_573,((char*)(__right_value619=xsprintf(" \%s ",((char*)(__right_value618=charp_to_string(argv[i_589])))))));
                (__right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_584=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value620=charp_operator_load_range_element(argv[i_589],0,2))),"-D"))),            (__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_575,((char*)(__right_value622=xsprintf(" \%s ",((char*)(__right_value621=charp_to_string(argv[i_589])))))));
                (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_573,((char*)(__right_value624=xsprintf(" \%s ",((char*)(__right_value623=charp_to_string(argv[i_589])))))));
                (__right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value625=charp_operator_load_range_element(argv[i_589],0,2))),"-U"))),            (__right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(cpp_option_575,((char*)(__right_value627=xsprintf(" \%s ",((char*)(__right_value626=charp_to_string(argv[i_589])))))));
                (__right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_573,((char*)(__right_value629=xsprintf(" \%s ",((char*)(__right_value628=charp_to_string(argv[i_589])))))));
                (__right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-g")) {
                buffer_append_str(clang_option_573,"-g ");
            }
            else if(            charp_operator_equals(argv[i_589],"-v")) {
                buffer_append_str(clang_option_573,"-v ");
                buffer_append_str(cpp_option_575,"-v ");
                verbose_583=(_Bool)1;
            }
            else if(            strlen(argv[i_589])>=2&&memcmp(argv[i_589],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_575,((char*)(__right_value631=charp_operator_add(" ",((char*)(__right_value630=charp_operator_add(argv[i_589]," ")))))));
                (__right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_589],"-gdwarf-4")) {
                buffer_append_str(clang_option_573,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_589],"-s")||charp_operator_equals(argv[i_589],"-S")) {
                output_source_file_flag_580=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_589],"-c")) {
                output_object_file_578=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_589],"-E")) {
                output_cpp_file_579=(_Bool)1;
            }
            else if(            argv[i_589][0]==45) {
                buffer_append_str(clang_option_573,((char*)(__right_value632=charp_operator_add(argv[i_589]," "))));
                (__right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_589])>2&&memcmp(argv[i_589]+strlen(argv[i_589])-2,".o",2)==0) {
                list$1char$ph$p_push_back(object_files_577,(char*)come_increment_ref_count(__builtin_string(argv[i_589])));
            }
            else if(            strlen(argv[i_589])>2&&memcmp(argv[i_589]+strlen(argv[i_589])-2,".a",2)==0) {
                list$1char$ph$p_push_back(object_files_577,(char*)come_increment_ref_count(__builtin_string(argv[i_589])));
            }
            else if(            string_operator_equals(ext_name_590,"c")) {
                list$1char$ph$p_push_back(files_576,(char*)come_increment_ref_count(__builtin_string(argv[i_589])));
            }
            else {
                buffer_append_str(clang_option_573,((char*)(__right_value636=charp_operator_add(argv[i_589]," "))));
                (__right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_590 = come_decrement_ref_count2(ext_name_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_584;
        gComeMalloc=come_malloc_585;
        Value_593=system(((char*)(__right_value637=xsprintf("%s %s",RM,output_file_name_582))));
        if(        (_if_conditional5=(Value_593<0)),        (__right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            (come_push_stackframe("02transpile.c", 924, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        else {
        }
        Value_594=fopen(output_file_name_582,"w");
        if(        Value_594) {
            fclose(Value_594);
        }
        else {
            (come_push_stackframe("02transpile.c", 931, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        tmp_file_595=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_599=system(((char*)(__right_value645=xsprintf("cat \%s > \%s",((char*)(__right_value643=string_to_string(((char*)(__right_value642=list$1char$ph$p_join(files_576," ")))))),((char*)(__right_value644=string_to_string(tmp_file_595)))))));
        if(        (_if_conditional6=(Value_599<0)),        (__right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 937, 12),__exception_result_var_b13=die("cat"), come_pop_stackframe(), __exception_result_var_b13);
        }
        else {
        }
        memset(&info_600,0,sizeof(struct sInfo));
        __dec_obj74=info_600.base_sname;
        info_600.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_595));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj75=info_600.sname;
        info_600.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_595));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_600.sline=1;
        info_600.err_num=0;
        __dec_obj76=info_600.clang_option;
        info_600.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_573));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj77=info_600.cpp_option;
        info_600.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_575));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj78=info_600.linker_option;
        info_600.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_574));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_600.no_output_err=(_Bool)0;
        __dec_obj80=info_600.funcs;
        info_600.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph$p_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 952, "struct map$2char$phsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj80,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj82=info_600.struct_definition;
        info_600.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 953, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj82,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj84=info_600.uniq_definition;
        info_600.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 954, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj84,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj85=info_600.previous_struct_definition;
        info_600.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 955, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj85,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj87=info_600.generics_funcs;
        info_600.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph$p_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 956, "struct map$2char$phsGenericsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj87,map$2char$phsGenericsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj89=info_600.classes;
        info_600.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 957, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj89,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj91=info_600.modules;
        info_600.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph$p_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 958, "struct map$2char$phsClassModule$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj91,map$2char$phsClassModule$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj93=info_600.types;
        info_600.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph$p_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 959, "struct map$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj93,map$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj94=info_600.module;
        info_600.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 960, "struct sModule*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj94,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj95=info_600.right_value_objects;
        info_600.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 961, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj95,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj96=info_600.stack;
        info_600.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 962, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj96,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj97=info_600.gv_table;
        info_600.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 963, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
        come_call_finalizer3(__dec_obj97,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        lv_table_646=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 964, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
        info_600.lv_table=lv_table_646;
        __dec_obj98=info_600.generics_type_names;
        info_600.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 966, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj98,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj99=info_600.method_generics_type_names;
        info_600.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 967, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj99,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj100=info_600.generics_classes;
        info_600.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 968, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj100,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info_600.verbose=verbose_583;
        info_600.output_header_file=(_Bool)1;
        static int n_647=0;
        info_600.num_source_files=n_647++;
        info_600.max_source_files=list$1char$ph$p_length(files_576);
        __dec_obj101=info_600.output_file_name;
        info_600.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_582));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_600);
        clear_tmp_file(&info_600);
        Value_648=cpp(&info_600);
        if(        !Value_648) {
            printf("%s %d: transpile failed\n",info_600.sname,info_600.sline);
            system(((char*)(__right_value719=xsprintf("%s %s*",RM,tmp_file_595))));
            (__right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exit(2);
        }
        else {
        }
        __dec_obj102=info_600.original_source;
        info_600.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value721=charp_read(((char*)(__right_value720=xsprintf("%s",tmp_file_595))))))));
        come_call_finalizer3(__dec_obj102,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        (__right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj103=info_600.source;
        info_600.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value724=charp_read(((char*)(__right_value723=xsprintf("%s.i",tmp_file_595))))))));
        come_call_finalizer3(__dec_obj103,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        (__right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        info_600.p=info_600.source->buf;
        info_600.head=info_600.source->buf;
        Value_649=output_cpp_file_579;
        if(        !Value_649) {
            transpile_v5(&info_600);
            Value_650=output_header_file(&info_600);
            if(            !Value_650) {
                printf("%s %d: output source file faield\n",info_600.sname,info_600.sline);
                system(((char*)(__right_value726=xsprintf("%s %s*",RM,tmp_file_595))));
                (__right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value727=xsprintf("%s %s*",RM,tmp_file_595))));
        (__right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (output_file_name_str_572 = come_decrement_ref_count2(output_file_name_str_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(clang_option_573,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_574,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_576,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_577,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (output_file_name_582 = come_decrement_ref_count2(output_file_name_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tmp_file_595 = come_decrement_ref_count2(tmp_file_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3((&info_600),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_646,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        Value_653=new_project(argc,argv);
        if(        !Value_653) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        Value_654=run_project(argc,argv);
        if(        !Value_654) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        Value_655=make_header_project(argc,argv);
        if(        !Value_655) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        Value_656=compile_project(argc,argv);
        if(        !Value_656) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        Value_657=debug_run_project(argc,argv);
        if(        !Value_657) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        Value_658=clean_project(argc,argv);
        if(        !Value_658) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            Value_659=install_project(argc,argv,"/usr/local");
            if(            !Value_659) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3) {
            Value_660=install_project(argc,argv,argv[2]);
            if(            !Value_660) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        gProgramName=argv[0];
        start_num_661=1;
        output_file_name_str_662=((void*)0);
        clang_option_663=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 725, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        linker_option_664=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        cpp_option_665=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_665,"-U__GNUC__");
        files_666=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 729, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_667=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 730, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_668=(_Bool)0;
        output_cpp_file_669=(_Bool)0;
        output_source_file_flag_670=(_Bool)0;
        output_object_file_flag_671=(_Bool)1;
        output_file_name_672=(char*)come_increment_ref_count(output_file_name_str_662);
        verbose_673=(_Bool)0;
        come_debug_674=(_Bool)0;
        come_malloc_675=(_Bool)0;
        m5stack_cpp_676=(_Bool)0;
        pico_cpp_677=(_Bool)0;
        gcc_compiler_678=(_Bool)0;
        for(        i_679=start_num_661;        i_679<argc;        i_679++        ){
            ext_name_680=(char*)come_increment_ref_count(xextname(argv[i_679]));
            if(            charp_operator_equals(argv[i_679],"-o")&&i_679+1<argc) {
                __dec_obj104=output_file_name_672;
                output_file_name_672=(char*)come_increment_ref_count(__builtin_string(argv[i_679+1]));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_679++;
            }
            else if(            charp_operator_equals(argv[i_679],"-e")&&i_679+1<argc) {
                buffer_append_str(linker_option_664,((char*)(__right_value741=xsprintf("-e \%s",((char*)(__right_value740=charp_to_string(argv[i_679+1])))))));
                (__right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_679++;
            }
            else if(            charp_operator_equals(argv[i_679],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_679],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_679],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_665,((char*)(__right_value742=xsprintf(" -DENABLE_GC "))));
                (__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-gcc")) {
                gcc_compiler_678=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_679],"-pico")) {
                output_source_file_flag_670=(_Bool)1;
                output_object_file_flag_671=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_681=getenv("PICO_SDK_PATH");
                __dec_obj105=cpp_option_665;
                cpp_option_665=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 772, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj105,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_665,((char*)(__right_value747=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value745=charp_to_string(env_681))),((char*)(__right_value746=charp_to_string(env_681)))))));
                (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_677=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_679],"-m5stack")) {
                m5stack_cpp_676=(_Bool)1;
                output_source_file_flag_670=(_Bool)1;
                output_object_file_flag_671=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_682=getenv("IDF_PATH");
                __dec_obj106=cpp_option_665;
                cpp_option_665=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 783, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj106,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_665,((char*)(__right_value771=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value750=charp_to_string(getenv("HOME")))),((char*)(__right_value751=charp_to_string(env_682))),((char*)(__right_value752=charp_to_string(env_682))),((char*)(__right_value753=charp_to_string(env_682))),((char*)(__right_value754=charp_to_string(env_682))),((char*)(__right_value755=charp_to_string(env_682))),((char*)(__right_value756=charp_to_string(env_682))),((char*)(__right_value757=charp_to_string(env_682))),((char*)(__right_value758=charp_to_string(env_682))),((char*)(__right_value759=charp_to_string(env_682))),((char*)(__right_value760=charp_to_string(env_682))),((char*)(__right_value761=charp_to_string(env_682))),((char*)(__right_value762=charp_to_string(env_682))),((char*)(__right_value763=charp_to_string(env_682))),((char*)(__right_value764=charp_to_string(env_682))),((char*)(__right_value765=charp_to_string(env_682))),((char*)(__right_value766=charp_to_string(env_682))),((char*)(__right_value767=charp_to_string(env_682))),((char*)(__right_value768=charp_to_string(env_682))),((char*)(__right_value769=charp_to_string(env_682))),((char*)(__right_value770=charp_to_string(env_682)))))),"/usr/local/");
                (__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value759 = come_decrement_ref_count2(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_679+1<argc&&charp_operator_equals(argv[i_679],"-target")) {
                buffer_append_str(clang_option_663,((char*)(__right_value773=xsprintf("-target \%s",((char*)(__right_value772=charp_to_string(argv[i_679+1])))))));
                (__right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_679++;
            }
            else if(            i_679+1<argc&&charp_operator_equals(argv[i_679],"-T")) {
                buffer_append_str(clang_option_663,((char*)(__right_value775=xsprintf(" -T \%s ",((char*)(__right_value774=charp_to_string(argv[i_679+1])))))));
                (__right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value775 = come_decrement_ref_count2(__right_value775, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_679++;
            }
            else if(            charp_operator_equals(argv[i_679],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_679],"-cg")) {
                come_debug_674=(_Bool)1;
                buffer_append_str(clang_option_663,"-g ");
            }
            else if(            charp_operator_equals(argv[i_679],"-C")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value777=xsprintf("\%s ",((char*)(__right_value776=charp_to_string(argv[i_679])))))));
                (__right_value776 = come_decrement_ref_count2(__right_value776, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-M")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value779=xsprintf("\%s ",((char*)(__right_value778=charp_to_string(argv[i_679])))))));
                (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-MM")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value781=xsprintf("\%s ",((char*)(__right_value780=charp_to_string(argv[i_679])))))));
                (__right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-dM")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value783=xsprintf("\%s ",((char*)(__right_value782=charp_to_string(argv[i_679])))))));
                (__right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value783 = come_decrement_ref_count2(__right_value783, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-dD")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value785=xsprintf("\%s ",((char*)(__right_value784=charp_to_string(argv[i_679])))))));
                (__right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-H")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value787=xsprintf("\%s ",((char*)(__right_value786=charp_to_string(argv[i_679])))))));
                (__right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value787 = come_decrement_ref_count2(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-P")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value789=xsprintf("\%s ",((char*)(__right_value788=charp_to_string(argv[i_679])))))));
                (__right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-nostdinc")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value791=xsprintf("\%s ",((char*)(__right_value790=charp_to_string(argv[i_679])))))));
                (__right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-CC")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value793=xsprintf("\%s ",((char*)(__right_value792=charp_to_string(argv[i_679])))))));
                (__right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value793 = come_decrement_ref_count2(__right_value793, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_679+1<argc&&charp_operator_equals(argv[i_679],"-target")) {
                buffer_append_str(clang_option_663,((char*)(__right_value795=xsprintf("-target \%s",((char*)(__right_value794=charp_to_string(argv[i_679+1])))))));
                (__right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_679++;
            }
            else if(            i_679+1<argc&&charp_operator_equals(argv[i_679],"-include")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value797=xsprintf("-iclude \%s",((char*)(__right_value796=charp_to_string(argv[i_679+1])))))));
                (__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_679++;
            }
            else if(            i_679+1<argc&&charp_operator_equals(argv[i_679],"-isystem")) {
                buffer_append_str(cpp_option_665,((char*)(__right_value799=xsprintf("-isystem \%s",((char*)(__right_value798=charp_to_string(argv[i_679+1])))))));
                (__right_value798 = come_decrement_ref_count2(__right_value798, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value799 = come_decrement_ref_count2(__right_value799, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_663,((char*)(__right_value801=xsprintf("-isystem \%s",((char*)(__right_value800=charp_to_string(argv[i_679+1])))))));
                (__right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_679++;
            }
            else if(            i_679+1<argc&&charp_operator_equals(argv[i_679],"-T")) {
                buffer_append_str(clang_option_663,((char*)(__right_value803=xsprintf(" -T \%s ",((char*)(__right_value802=charp_to_string(argv[i_679+1])))))));
                (__right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_679++;
            }
            else if(            charp_operator_equals(argv[i_679],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_679],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value804=charp_operator_load_range_element(argv[i_679],0,2))),"-O"))),            (__right_value804 = come_decrement_ref_count2(__right_value804, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(clang_option_663,((char*)(__right_value806=xsprintf(" \%s ",((char*)(__right_value805=charp_to_string(argv[i_679])))))));
                (__right_value805 = come_decrement_ref_count2(__right_value805, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value806 = come_decrement_ref_count2(__right_value806, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_674=(_Bool)0;
            }
            else if(            (_elif_conditional5=(string_operator_equals(((char*)(__right_value807=charp_operator_load_range_element(argv[i_679],0,2))),"-D"))),            (__right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional5) {
                buffer_append_str(cpp_option_665,((char*)(__right_value809=xsprintf(" \%s ",((char*)(__right_value808=charp_to_string(argv[i_679])))))));
                (__right_value808 = come_decrement_ref_count2(__right_value808, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value809 = come_decrement_ref_count2(__right_value809, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_663,((char*)(__right_value811=xsprintf(" \%s ",((char*)(__right_value810=charp_to_string(argv[i_679])))))));
                (__right_value810 = come_decrement_ref_count2(__right_value810, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value811 = come_decrement_ref_count2(__right_value811, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional6=(string_operator_equals(((char*)(__right_value812=charp_operator_load_range_element(argv[i_679],0,2))),"-U"))),            (__right_value812 = come_decrement_ref_count2(__right_value812, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional6) {
                buffer_append_str(cpp_option_665,((char*)(__right_value814=xsprintf(" \%s ",((char*)(__right_value813=charp_to_string(argv[i_679])))))));
                (__right_value813 = come_decrement_ref_count2(__right_value813, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value814 = come_decrement_ref_count2(__right_value814, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_663,((char*)(__right_value816=xsprintf(" \%s ",((char*)(__right_value815=charp_to_string(argv[i_679])))))));
                (__right_value815 = come_decrement_ref_count2(__right_value815, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value816 = come_decrement_ref_count2(__right_value816, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-g")) {
                buffer_append_str(clang_option_663,"-g ");
            }
            else if(            charp_operator_equals(argv[i_679],"-v")) {
                buffer_append_str(clang_option_663,"-v ");
                buffer_append_str(cpp_option_665,"-v ");
                verbose_673=(_Bool)1;
            }
            else if(            strlen(argv[i_679])>=2&&memcmp(argv[i_679],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_665,((char*)(__right_value818=charp_operator_add(" ",((char*)(__right_value817=charp_operator_add(argv[i_679]," ")))))));
                (__right_value817 = come_decrement_ref_count2(__right_value817, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value818 = come_decrement_ref_count2(__right_value818, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_679],"-gdwarf-4")) {
                buffer_append_str(clang_option_663,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_679],"-s")||charp_operator_equals(argv[i_679],"-S")) {
                output_source_file_flag_670=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_679],"-c")) {
                output_object_file_668=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_679],"-E")) {
                output_cpp_file_669=(_Bool)1;
            }
            else if(            argv[i_679][0]==45) {
                buffer_append_str(clang_option_663,((char*)(__right_value819=charp_operator_add(argv[i_679]," "))));
                (__right_value819 = come_decrement_ref_count2(__right_value819, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_679])>2&&memcmp(argv[i_679]+strlen(argv[i_679])-2,".o",2)==0) {
                list$1char$ph$p_push_back(object_files_667,(char*)come_increment_ref_count(__builtin_string(argv[i_679])));
            }
            else if(            strlen(argv[i_679])>2&&memcmp(argv[i_679]+strlen(argv[i_679])-2,".a",2)==0) {
                list$1char$ph$p_push_back(object_files_667,(char*)come_increment_ref_count(__builtin_string(argv[i_679])));
            }
            else if(            string_operator_equals(ext_name_680,"c")) {
                list$1char$ph$p_push_back(files_666,(char*)come_increment_ref_count(__builtin_string(argv[i_679])));
            }
            else {
                buffer_append_str(clang_option_663,((char*)(__right_value823=charp_operator_add(argv[i_679]," "))));
                (__right_value823 = come_decrement_ref_count2(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_680 = come_decrement_ref_count2(ext_name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_674;
        gComeMalloc=come_malloc_675;
        for(        o2_saved_683=(struct list$1char$ph*)come_increment_ref_count((files_666)),it_684=list$1char$ph$p_begin((o2_saved_683));        !list$1char$ph$p_end((o2_saved_683));        it_684=list$1char$ph$p_next((o2_saved_683))        ){
            memset(&info_685,0,sizeof(struct sInfo));
            Value_686=fopen(it_684,"r");
            if(            Value_686) {
                fclose(Value_686);
            }
            else {
                come_call_finalizer3((&info_685),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                continue;
            }
            __dec_obj107=info_685.sname;
            info_685.sname=(char*)come_increment_ref_count(__builtin_string(it_684));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_685.sline=1;
            info_685.err_num=0;
            __dec_obj108=info_685.clang_option;
            info_685.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_663));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj109=info_685.cpp_option;
            info_685.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_665));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj110=info_685.linker_option;
            info_685.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_664));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_685.no_output_err=(_Bool)0;
            __dec_obj111=info_685.funcs;
            info_685.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph$p_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1073, "struct map$2char$phsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj111,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj112=info_685.struct_definition;
            info_685.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1074, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj112,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj113=info_685.uniq_definition;
            info_685.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1075, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj113,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj114=info_685.previous_struct_definition;
            info_685.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1076, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj114,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj115=info_685.generics_funcs;
            info_685.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph$p_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1077, "struct map$2char$phsGenericsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj115,map$2char$phsGenericsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj116=info_685.classes;
            info_685.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1078, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj116,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj117=info_685.modules;
            info_685.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph$p_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1079, "struct map$2char$phsClassModule$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj117,map$2char$phsClassModule$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj118=info_685.types;
            info_685.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph$p_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1080, "struct map$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj118,map$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj119=info_685.module;
            info_685.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 1081, "struct sModule*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj119,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj120=info_685.right_value_objects;
            info_685.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1082, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj120,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj121=info_685.stack;
            info_685.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1083, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj121,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj122=info_685.gv_table;
            info_685.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1084, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
            come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            lv_table_687=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1085, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
            info_685.lv_table=lv_table_687;
            __dec_obj123=info_685.generics_type_names;
            info_685.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1087, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj123,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj124=info_685.method_generics_type_names;
            info_685.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1088, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj124,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj125=info_685.generics_classes;
            info_685.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1089, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj125,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info_685.verbose=verbose_673;
            info_685.m5stack_cpp=m5stack_cpp_676;
            info_685.pico_cpp=pico_cpp_677;
            info_685.gcc_compiler=gcc_compiler_678;
            init_classes(&info_685);
            clear_tmp_file(&info_685);
            Value_688=cpp(&info_685);
            if(            !Value_688) {
                printf("%s %d: transpile failed\n",info_685.sname,info_685.sline);
                exit(2);
            }
            else {
            }
            __dec_obj126=info_685.original_source;
            info_685.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value861=charp_read(((char*)(__right_value860=xsprintf("%s",it_684))))))));
            come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value860 = come_decrement_ref_count2(__right_value860, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value861 = come_decrement_ref_count2(__right_value861, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj127=info_685.source;
            info_685.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value864=charp_read(((char*)(__right_value863=xsprintf("%s.i",it_684))))))));
            come_call_finalizer3(__dec_obj127,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value863 = come_decrement_ref_count2(__right_value863, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value864 = come_decrement_ref_count2(__right_value864, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info_685.p=info_685.source->buf;
            info_685.head=info_685.source->buf;
            if(            output_file_name_672) {
                __dec_obj128=info_685.output_file_name;
                info_685.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_672));
                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj129=info_685.output_file_name;
                info_685.output_file_name=((void*)0);
                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            Value_689=output_cpp_file_669;
            if(            !Value_689) {
                transpile_v5(&info_685);
                Value_690=output_source_file_v3(&info_685);
                if(                !Value_690) {
                    printf("%s %d: output source file faield\n",info_685.sname,info_685.sline);
                    exit(2);
                }
                else {
                }
                if(                info_685.err_num>0) {
                    printf("transpile error. err num %d\n",info_685.err_num);
                    exit(2);
                }
                else {
                    Value_691=output_object_file_flag_671;
                    if(                    Value_691) {
                        Value_692=compile(&info_685,output_object_file_668,object_files_667);
                        if(                        !Value_692) {
                            printf("%s %d: compile faield\n",info_685.sname,info_685.sline);
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
            if(            output_cpp_file_669) {
            }
            else if(            info_685.err_num>0) {
            }
            else if(            output_source_file_flag_670) {
                clear_tmp_file_without_object_file_and_ccfile(&info_685);
            }
            else {
                clear_tmp_file_without_object_file(&info_685);
            }
            come_call_finalizer3((&info_685),sInfo_finalize, 1, 0, 0, 0, (void*)0);
            come_call_finalizer3(lv_table_687,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_683,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_object_file_668&&!output_cpp_file_669&&(list$1char$ph$p_length(files_666)>0||list$1char$ph$p_length(object_files_667)>0)) {
            memset(&info_693,0,sizeof(struct sInfo));
            __dec_obj130=info_693.sname;
            info_693.sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value867=list$1char$ph$p_operator_load_element(files_666,0)))));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value867 = come_decrement_ref_count2(__right_value867, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj131=info_693.clang_option;
            info_693.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_663));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj132=info_693.linker_option;
            info_693.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_664));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_693.verbose=verbose_673;
            if(            output_file_name_672) {
                __dec_obj133=info_693.output_file_name;
                info_693.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_672));
                __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj134=info_693.output_file_name;
                info_693.output_file_name=((void*)0);
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            output_object_file_flag_671) {
                Value_697=linker(&info_693,object_files_667);
                if(                !Value_697) {
                    printf("%s %d: linker faield\n",info_693.sname,info_693.sline);
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_669&&!output_source_file_flag_670) {
                clear_tmp_file(&info_693);
            }
            come_call_finalizer3((&info_693),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        }
        (output_file_name_str_662 = come_decrement_ref_count2(output_file_name_str_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(clang_option_663,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_664,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_665,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_666,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_667,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (output_file_name_672 = come_decrement_ref_count2(output_file_name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return 0;
}

static char* list$1char$ph$p_join(struct list$1char$ph* self, char* sep){
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct buffer* buf_596;
int n_597;
char* it_598;
void* __right_value641 = (void*)0;
char* __result_obj__307;
    buf_596=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2268, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_597=0;
    for(    it_598=list$1char$ph$p_begin(self);    !list$1char$ph$p_end(self);    it_598=list$1char$ph$p_next(self)    ){
        buffer_append_str(buf_596,it_598);
        if(        n_597<list$1char$ph$p_length(self)-1) {
            buffer_append_str(buf_596,sep);
        }
        n_597++;
    }
    __result_obj__307 = come_increment_ref_count(((char*)(__right_value641=buffer_to_string(buf_596))));
    come_call_finalizer3(buf_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__307 = come_decrement_ref_count2(__result_obj__307, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__307;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_initialize(struct map$2char$phsFun$ph* self){
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
int i_601;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1char$p* __dec_obj79;
struct map$2char$phsFun$ph* __result_obj__309;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value652=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value653=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 2700, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value654=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_601=0;    i_601<128;    i_601++    ){
        self->item_existance[i_601]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj79=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj79,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__309 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__309,map$2char$phsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__309;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__308;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__308 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__308,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_602;
struct list_item$1char$p* prev_it_603;
    it_602=self->head;
    while(it_602!=((void*)0)) {
        prev_it_603=it_602;
        it_602=it_602->next;
        come_call_finalizer3(prev_it_603,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_604;
int i_605;
    for(    i_604=0;    i_604<self->size;    i_604++    ){
        if(        self->item_existance[i_604]) {
            if(            1) {
                come_call_finalizer3(self->items[i_604],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_605=0;    i_605<self->size;    i_605++    ){
        if(        self->item_existance[i_605]) {
            if(            1) {
                (self->keys[i_605] = come_decrement_ref_count2(self->keys[i_605], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self){
int i_606;
int i_607;
    for(    i_606=0;    i_606<self->size;    i_606++    ){
        if(        self->item_existance[i_606]) {
            if(            1) {
                come_call_finalizer3(self->items[i_606],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_607=0;    i_607<self->size;    i_607++    ){
        if(        self->item_existance[i_607]) {
            if(            1) {
                (self->keys[i_607] = come_decrement_ref_count2(self->keys[i_607], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph$p_initialize(struct map$2char$phbuffer$ph* self){
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
int i_608;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1char$p* __dec_obj81;
struct map$2char$phbuffer$ph* __result_obj__310;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value659=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value660=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(128)), "./comelang.h", 2700, "struct buffer**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value661=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_608=0;    i_608<128;    i_608++    ){
        self->item_existance[i_608]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj81=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj81,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__310 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phbuffer$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__310,map$2char$phbuffer$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__310;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_609;
int i_610;
    for(    i_609=0;    i_609<self->size;    i_609++    ){
        if(        self->item_existance[i_609]) {
            if(            1) {
                come_call_finalizer3(self->items[i_609],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_610=0;    i_610<self->size;    i_610++    ){
        if(        self->item_existance[i_610]) {
            if(            1) {
                (self->keys[i_610] = come_decrement_ref_count2(self->keys[i_610], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self){
int i_611;
int i_612;
    for(    i_611=0;    i_611<self->size;    i_611++    ){
        if(        self->item_existance[i_611]) {
            if(            1) {
                come_call_finalizer3(self->items[i_611],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_612=0;    i_612<self->size;    i_612++    ){
        if(        self->item_existance[i_612]) {
            if(            1) {
                (self->keys[i_612] = come_decrement_ref_count2(self->keys[i_612], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self){
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
int i_613;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1char$p* __dec_obj83;
struct map$2char$phchar$ph* __result_obj__311;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value666=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value667=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2700, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value668=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_613=0;    i_613<128;    i_613++    ){
        self->item_existance[i_613]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj83=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj83,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__311 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_614;
int i_615;
    for(    i_614=0;    i_614<self->size;    i_614++    ){
        if(        self->item_existance[i_614]) {
            if(            1) {
                (self->items[i_614] = come_decrement_ref_count2(self->items[i_614], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_615=0;    i_615<self->size;    i_615++    ){
        if(        self->item_existance[i_615]) {
            if(            1) {
                (self->keys[i_615] = come_decrement_ref_count2(self->keys[i_615], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_616;
int i_617;
    for(    i_616=0;    i_616<self->size;    i_616++    ){
        if(        self->item_existance[i_616]) {
            if(            1) {
                (self->items[i_616] = come_decrement_ref_count2(self->items[i_616], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_617=0;    i_617<self->size;    i_617++    ){
        if(        self->item_existance[i_617]) {
            if(            1) {
                (self->keys[i_617] = come_decrement_ref_count2(self->keys[i_617], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_initialize(struct map$2char$phsGenericsFun$ph* self){
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
int i_618;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct list$1char$p* __dec_obj86;
struct map$2char$phsGenericsFun$ph* __result_obj__312;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value675=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value676=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 2700, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value677=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_618=0;    i_618<128;    i_618++    ){
        self->item_existance[i_618]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj86=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj86,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__312 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsGenericsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__312,map$2char$phsGenericsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__312;
}

static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_619;
int i_620;
    for(    i_619=0;    i_619<self->size;    i_619++    ){
        if(        self->item_existance[i_619]) {
            if(            1) {
                come_call_finalizer3(self->items[i_619],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_620=0;    i_620<self->size;    i_620++    ){
        if(        self->item_existance[i_620]) {
            if(            1) {
                (self->keys[i_620] = come_decrement_ref_count2(self->keys[i_620], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_621;
int i_622;
    for(    i_621=0;    i_621<self->size;    i_621++    ){
        if(        self->item_existance[i_621]) {
            if(            1) {
                come_call_finalizer3(self->items[i_621],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_622=0;    i_622<self->size;    i_622++    ){
        if(        self->item_existance[i_622]) {
            if(            1) {
                (self->keys[i_622] = come_decrement_ref_count2(self->keys[i_622], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_initialize(struct map$2char$phsClass$ph* self){
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
int i_623;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1char$p* __dec_obj88;
struct map$2char$phsClass$ph* __result_obj__313;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value682=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value683=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 2700, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value684=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_623=0;    i_623<128;    i_623++    ){
        self->item_existance[i_623]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj88=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj88,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__313 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsClass$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,map$2char$phsClass$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
}

static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self){
int i_624;
int i_625;
    for(    i_624=0;    i_624<self->size;    i_624++    ){
        if(        self->item_existance[i_624]) {
            if(            1) {
                come_call_finalizer3(self->items[i_624],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_625=0;    i_625<self->size;    i_625++    ){
        if(        self->item_existance[i_625]) {
            if(            1) {
                (self->keys[i_625] = come_decrement_ref_count2(self->keys[i_625], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self){
int i_626;
int i_627;
    for(    i_626=0;    i_626<self->size;    i_626++    ){
        if(        self->item_existance[i_626]) {
            if(            1) {
                come_call_finalizer3(self->items[i_626],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_627=0;    i_627<self->size;    i_627++    ){
        if(        self->item_existance[i_627]) {
            if(            1) {
                (self->keys[i_627] = come_decrement_ref_count2(self->keys[i_627], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph$p_initialize(struct map$2char$phsClassModule$ph* self){
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
int i_628;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct list$1char$p* __dec_obj90;
struct map$2char$phsClassModule$ph* __result_obj__314;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value689=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value690=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 2700, "struct sClassModule**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value691=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_628=0;    i_628<128;    i_628++    ){
        self->item_existance[i_628]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj90=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj90,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__314 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsClassModule$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__314,map$2char$phsClassModule$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self){
int i_629;
int i_630;
    for(    i_629=0;    i_629<self->size;    i_629++    ){
        if(        self->item_existance[i_629]) {
            if(            1) {
                come_call_finalizer3(self->items[i_629],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_630=0;    i_630<self->size;    i_630++    ){
        if(        self->item_existance[i_630]) {
            if(            1) {
                (self->keys[i_630] = come_decrement_ref_count2(self->keys[i_630], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self){
int i_631;
int i_632;
    for(    i_631=0;    i_631<self->size;    i_631++    ){
        if(        self->item_existance[i_631]) {
            if(            1) {
                come_call_finalizer3(self->items[i_631],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_632=0;    i_632<self->size;    i_632++    ){
        if(        self->item_existance[i_632]) {
            if(            1) {
                (self->keys[i_632] = come_decrement_ref_count2(self->keys[i_632], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsType$ph* map$2char$phsType$ph$p_initialize(struct map$2char$phsType$ph* self){
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
int i_633;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1char$p* __dec_obj92;
struct map$2char$phsType$ph* __result_obj__315;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value696=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value697=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 2700, "struct sType**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value698=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_633=0;    i_633<128;    i_633++    ){
        self->item_existance[i_633]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj92=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj92,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__315 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__315,map$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__315;
}

static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self){
int i_634;
int i_635;
    for(    i_634=0;    i_634<self->size;    i_634++    ){
        if(        self->item_existance[i_634]) {
            if(            1) {
                come_call_finalizer3(self->items[i_634],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_635=0;    i_635<self->size;    i_635++    ){
        if(        self->item_existance[i_635]) {
            if(            1) {
                (self->keys[i_635] = come_decrement_ref_count2(self->keys[i_635], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self){
int i_636;
int i_637;
    for(    i_636=0;    i_636<self->size;    i_636++    ){
        if(        self->item_existance[i_636]) {
            if(            1) {
                come_call_finalizer3(self->items[i_636],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_637=0;    i_637<self->size;    i_637++    ){
        if(        self->item_existance[i_637]) {
            if(            1) {
                (self->keys[i_637] = come_decrement_ref_count2(self->keys[i_637], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        come_call_finalizer3(self->mHeader,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        come_call_finalizer3(self->mHeaderStructs,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__316;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__316 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__316,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__316;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_638;
struct list_item$1sRightValueObject$ph* prev_it_639;
    it_638=self->head;
    while(it_638!=((void*)0)) {
        prev_it_639=it_638;
        it_638=it_638->next;
        come_call_finalizer3(prev_it_639,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_640;
struct list_item$1sRightValueObject$ph* prev_it_641;
    it_640=self->head;
    while(it_640!=((void*)0)) {
        prev_it_641=it_640;
        it_640=it_640->next;
        come_call_finalizer3(prev_it_641,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__317;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__317 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__317,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_642;
struct list_item$1CVALUE$ph* prev_it_643;
    it_642=self->head;
    while(it_642!=((void*)0)) {
        prev_it_643=it_642;
        it_642=it_642->next;
        come_call_finalizer3(prev_it_643,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_644;
struct list_item$1CVALUE$ph* prev_it_645;
    it_644=self->head;
    while(it_644!=((void*)0)) {
        prev_it_645=it_644;
        it_644=it_644->next;
        come_call_finalizer3(prev_it_645,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sInfo_finalize(struct sInfo* self){
    if(    self!=((void*)0)&&self->original_source!=((void*)0)) {
        come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        (self->sname_at_head = come_decrement_ref_count2(self->sname_at_head, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        (self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->err_line!=((void*)0)) {
        (self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        (self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        (self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        (self->linker_option = come_decrement_ref_count2(self->linker_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        come_call_finalizer3(self->funcs,map$2char$phsFun$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        come_call_finalizer3(self->generics_funcs,map$2char$phsGenericsFun$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        come_call_finalizer3(self->classes,map$2char$phsClass$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        come_call_finalizer3(self->modules,map$2char$phsClassModule$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        come_call_finalizer3(self->types,map$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        come_call_finalizer3(self->generics_classes,map$2char$phsClass$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        come_call_finalizer3(self->struct_definition,map$2char$phbuffer$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        come_call_finalizer3(self->previous_struct_definition,map$2char$phbuffer$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        come_call_finalizer3(self->right_value_objects,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        come_call_finalizer3(self->stack,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        come_call_finalizer3(self->generics_type_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        come_call_finalizer3(self->method_generics_type_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->class_type!=((void*)0)) {
        come_call_finalizer3(self->class_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        (self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        come_call_finalizer3(self->module_params,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        (self->if_result_var_name = come_decrement_ref_count2(self->if_result_var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        come_call_finalizer3(self->match_it_var,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        come_call_finalizer3(self->uniq_definition,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_651;
struct list_item$1sVar$ph* prev_it_652;
    it_651=self->head;
    while(it_651!=((void*)0)) {
        prev_it_652=it_651;
        it_651=it_651->next;
        come_call_finalizer3(prev_it_652,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
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

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_694;
int i_695;
char* __result_obj__318;
char* default_value_696;
char* __result_obj__319;
default_value_696 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_694=self->head;
    i_695=0;
    while(it_694!=((void*)0)) {
        if(        position==i_695) {
            __result_obj__318 = come_increment_ref_count(it_694->item);
            (__result_obj__318 = come_decrement_ref_count2(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__318;
        }
        it_694=it_694->next;
        i_695++;
    }
    memset(&default_value_696,0,sizeof(char*));
    __result_obj__319 = come_increment_ref_count(default_value_696);
    (default_value_696 = come_decrement_ref_count2(default_value_696, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__319 = come_decrement_ref_count2(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__319;
}

