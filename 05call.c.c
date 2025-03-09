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

typedef unsigned long  int nfds_t;

struct pollfd
{
    int fd;
    short events;
    short revents;
};

typedef long time_t;

struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};

struct __sigset_t
{
    unsigned long  int __bits[128/sizeof(long)];
};

typedef struct __sigset_t sigset_t;

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sOutputNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNode$ph* exps;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWildCard
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    _Bool guard_break;
    struct list$1sType$ph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
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
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX1214, unsigned long  int anonymous_var_nameX1215, int anonymous_var_nameX1216);
int ppoll(struct pollfd* anonymous_var_nameX1217, unsigned long  int anonymous_var_nameX1218, const struct timespec* anonymous_var_nameX1219, const struct __sigset_t* anonymous_var_nameX1220);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
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
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
static void sWildCard_finalize(struct sWildCard* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph$p_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value);
static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self);
static void list$1char$p_finalize(struct list$1char$p* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sNode* __dec_obj23;
void* __right_value260 = (void*)0;
char* __dec_obj24;
struct sReturnNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj23=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj24=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__237,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sReturnNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_350;
void* __right_value300 = (void*)0;
struct sType* result_type_351;
void* __right_value301 = (void*)0;
struct sType* result_type2_388;
struct sType* result_type3_389;
void* __right_value302 = (void*)0;
_Bool _if_conditional1;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj49;
_Bool Value_390;
_Bool __result_obj__254;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_391;
void* __right_value305 = (void*)0;
struct sType* come_value_type_392;
void* __right_value306 = (void*)0;
struct sType* __dec_obj50;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_394=0;
char* Err_395=0;
_Bool _if_conditional2;
_Bool __result_obj__255;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __if_result__0_396 = (void*)0;
struct list$1sVar$ph* o2_saved_397;
struct sVar* it_400;
void* __right_value317 = (void*)0;
struct list$1sVar$ph* __dec_obj51;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sFun* come_fun_407;
void* __if_result__1_408 = (void*)0;
struct list$1sVar$ph* o2_saved_409;
struct sVar* it_410;
void* __right_value323 = (void*)0;
struct list$1sVar$ph* __dec_obj52;
void* __right_value324 = (void*)0;
    if(    self->value) {
        come_fun_350=info->come_fun;
        result_type_351=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_350->mResultType));
        result_type2_388=(struct sType*)come_increment_ref_count(solve_generics(result_type_351,info->generics_type,info));
        result_type3_389=result_type2_388->mNoSolvedGenericsType;
        if(        result_type2_388->mNoSolvedGenericsType) {
            result_type3_389=result_type2_388->mNoSolvedGenericsType;
        }
        else {
            result_type3_389=result_type2_388;
        }
        if(        result_type_351->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value302=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj49=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_390=node_compile(self->value,info);
        if(        !Value_390) {
            __result_obj__254 = (_Bool)0;
            come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__254;
        }
        else {
        }
        come_value_391=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_392=(struct sType*)come_increment_ref_count(solve_generics(come_value_391->type,info->generics_type,info));
        __dec_obj50=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_391->type));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_391->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_350->mBlock,info,come_value_391->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_391->c_value);
        }
        else {
            static int result_num_393=0;
            result_num_393++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value309=make_define_var(result_type2_388,((char*)(__right_value308=xsprintf("__result_obj__\%s",((char*)(__right_value307=int_to_string(result_num_393)))))),(_Bool)0,info))));
            (__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_388->mClass->mName)>strlen("tuple")&&memcmp(result_type2_388->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value310=check_assign_type("result type",result_type2_388,come_value_type_392,come_value_391,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_1_394=multiple_assign_var1->v1;
                    Err_395=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_395)),                    come_call_finalizer3(__right_value310,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional2) {
                        __result_obj__255 = (_Bool)1;
                        (Err_395 = come_decrement_ref_count2(Err_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__255;
                    }
                    else {
                    }
                    (Err_395 = come_decrement_ref_count2(Err_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                result_type2_388->mHeap) {
                    add_come_code(info,((char*)(__right_value312=xsprintf("__result_obj__\%s = come_increment_ref_count(%%s);\n",((char*)(__right_value311=int_to_string(result_num_393)))))),come_value_391->c_value);
                    (__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value314=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value313=int_to_string(result_num_393)))))),come_value_391->c_value);
                    (__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value316=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value315=int_to_string(result_num_393)))))),come_value_391->c_value);
                (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_350->mBlock,info,come_value_391->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_397=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_400=list$1sVar$ph$p_begin((o2_saved_397));                    !list$1sVar$ph$p_end((o2_saved_397));                    it_400=list$1sVar$ph$p_next((o2_saved_397))                    ){
                        free_object(((struct sType*)(__right_value317=come_call_cloner(sType_clone, it_400->mType))),it_400->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_397,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj51=info->match_it_var;
                    __if_result__0_396=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj51,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                come_call_finalizer3(__if_result__0_396,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value318=xsprintf("come_heap_final();\n"))));
                (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_388->mHeap) {
                free_object(result_type2_388,((char*)(__right_value320=xsprintf("__result_obj__\%s",((char*)(__right_value319=int_to_string(result_num_393)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value322=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value321=int_to_string(result_num_393)))))));
            (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(result_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_407=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_407->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_409=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_410=list$1sVar$ph$p_begin((o2_saved_409));                !list$1sVar$ph$p_end((o2_saved_409));                it_410=list$1sVar$ph$p_next((o2_saved_409))                ){
                    free_object(((struct sType*)(__right_value323=come_call_cloner(sType_clone, it_410->mType))),it_410->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_409,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj52=info->match_it_var;
                __if_result__1_408=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj52,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            come_call_finalizer3(__if_result__1_408,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value324=xsprintf("come_heap_final();\n"))));
            (__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        (self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__239;
void* __right_value262 = (void*)0;
struct sType* result_365;
void* __right_value263 = (void*)0;
struct sType* __dec_obj25;
void* __right_value264 = (void*)0;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list$1sType$ph* __dec_obj30;
void* __right_value273 = (void*)0;
struct sType* __dec_obj31;
void* __right_value274 = (void*)0;
struct sType* __dec_obj32;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value278 = (void*)0;
char* __dec_obj35;
void* __right_value279 = (void*)0;
char* __dec_obj36;
void* __right_value280 = (void*)0;
char* __dec_obj37;
void* __right_value288 = (void*)0;
struct list$1sNode$ph* __dec_obj41;
void* __right_value289 = (void*)0;
char* __dec_obj42;
void* __right_value290 = (void*)0;
struct list$1sType$ph* __dec_obj43;
void* __right_value298 = (void*)0;
struct list$1char$ph* __dec_obj47;
void* __right_value299 = (void*)0;
struct sType* __dec_obj48;
struct sType* __result_obj__253;
    if(    self==(void*)0) {
        __result_obj__239 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__239,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__239;
    }
    result_365=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_365->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj25=result_365->mOriginalLoadVarType;
        result_365->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj26=result_365->mChannelType;
        result_365->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj30=result_365->mGenericsTypes;
        result_365->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj30,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj31=result_365->mNoSolvedGenericsType;
        result_365->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_365->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj32=result_365->mAnyOriginalType;
        result_365->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_365->mSizeNum;
        result_365->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj34=result_365->mAlignas;
        result_365->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj35=result_365->mTupleName;
        result_365->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj36=result_365->mAttribute;
        result_365->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_365->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_365->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_365->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_365->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_365->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_365->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_365->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_365->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_365->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_365->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_365->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_365->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_365->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_365->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_365->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_365->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_365->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_365->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_365->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_365->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_365->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_365->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_365->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_365->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_365->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_365->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj37=result_365->mAsmName;
        result_365->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_365->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_365->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_365->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj41=result_365->mArrayNum;
        result_365->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_365->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_365->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_365->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_365->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_365->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_365->mOriginalTypeName;
        result_365->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_365->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_365->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_365->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_365->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj43=result_365->mParamTypes;
        result_365->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj43,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj47=result_365->mParamNames;
        result_365->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj47,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj48=result_365->mResultType;
        result_365->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_365->mVarArgs=self->mVarArgs;
    }
    __result_obj__253 = come_increment_ref_count(result_365);
    come_call_finalizer3(result_365,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
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
struct list_item$1sType$ph* it_352;
struct list_item$1sType$ph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_354;
struct list_item$1sNode$ph* prev_it_355;
    it_354=self->head;
    while(it_354!=((void*)0)) {
        prev_it_355=it_354;
        it_354=it_354->next;
        come_call_finalizer3(prev_it_355,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_356;
    result_356=0;
    result_356+=int_get_hash_key(((int)self->mClass));
    result_356+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_356+=int_get_hash_key(((int)self->mChannelType));
    result_356+=int_get_hash_key(((int)self->mGenericsTypes));
    result_356+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_356+=int_get_hash_key(((int)self->mAnyClass));
    result_356+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_356+=int_get_hash_key(((int)self->mSizeNum));
    result_356+=int_get_hash_key(((int)self->mAlignas));
    result_356+=int_get_hash_key(((int)self->mTupleName));
    result_356+=int_get_hash_key(((int)self->mAttribute));
    result_356+=int_get_hash_key(((int)self->mAllocaValue));
    result_356+=int_get_hash_key(((int)self->mUnsigned));
    result_356+=int_get_hash_key(((int)self->mShort));
    result_356+=int_get_hash_key(((int)self->mLong));
    result_356+=int_get_hash_key(((int)self->mLongLong));
    result_356+=int_get_hash_key(((int)self->mConstant));
    result_356+=int_get_hash_key(((int)self->mAtomic));
    result_356+=int_get_hash_key(((int)self->mRegister));
    result_356+=int_get_hash_key(((int)self->mVolatile));
    result_356+=int_get_hash_key(((int)self->mStatic));
    result_356+=int_get_hash_key(((int)self->mUniq));
    result_356+=int_get_hash_key(((int)self->mRecord));
    result_356+=int_get_hash_key(((int)self->mExtern));
    result_356+=int_get_hash_key(((int)self->mRestrict));
    result_356+=int_get_hash_key(((int)self->mImmutable));
    result_356+=int_get_hash_key(((int)self->mHeap));
    result_356+=int_get_hash_key(((int)self->mChannel));
    result_356+=int_get_hash_key(((int)self->mNoHeap));
    result_356+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_356+=int_get_hash_key(((int)self->mException));
    result_356+=int_get_hash_key(((int)self->mGenerate));
    result_356+=int_get_hash_key(((int)self->mCreateVTable));
    result_356+=int_get_hash_key(((int)self->mDynamic));
    result_356+=int_get_hash_key(((int)self->mInline));
    result_356+=int_get_hash_key(((int)self->mNullValue));
    result_356+=int_get_hash_key(((int)self->mGuardValue));
    result_356+=int_get_hash_key(((int)self->mAsmName));
    result_356+=int_get_hash_key(((int)self->mTypedef));
    result_356+=int_get_hash_key(((int)self->mMultipleTypes));
    result_356+=int_get_hash_key(((int)self->mOriginIsArray));
    result_356+=int_get_hash_key(((int)self->mArrayNum));
    result_356+=int_get_hash_key(((int)self->mPointerNum));
    result_356+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_356+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_356+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_356+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_356+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_356+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_356+=int_get_hash_key(((int)self->mArrayPointerType));
    result_356+=int_get_hash_key(((int)self->mLambdaArray));
    result_356+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_356+=int_get_hash_key(((int)self->mParamTypes));
    result_356+=int_get_hash_key(((int)self->mParamNames));
    result_356+=int_get_hash_key(((int)self->mResultType));
    result_356+=int_get_hash_key(((int)self->mVarArgs));
    return result_356;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_357;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_358;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_357=left->head;
    it2_358=right->head;
    while(it_357!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_357->item,it2_358->item)) {
            return (_Bool)0;
        }
        it_357=it_357->next;
        it2_358=it2_358->next;
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
struct list_item$1sType$ph* it_359;
struct list_item$1sType$ph* it2_360;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_359=left->head;
    it2_360=right->head;
    while(it_359!=((void*)0)) {
        if(        !sType_equals(it_359->item,it2_360->item)) {
            return (_Bool)0;
        }
        it_359=it_359->next;
        it2_360=it2_360->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_361;
struct list_item$1sNode$ph* it2_362;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_361=left->head;
    it2_362=right->head;
    while(it_361!=((void*)0)) {
        if(        !sNode_equals(it_361->item,it2_362->item)) {
            return (_Bool)0;
        }
        it_361=it_361->next;
        it2_362=it2_362->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_363;
struct list_item$1char$ph* it2_364;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_363=left->head;
    it2_364=right->head;
    while(it_363!=((void*)0)) {
        if(        !string_equals(it_363->item,it2_364->item)) {
            return (_Bool)0;
        }
        it_363=it_363->next;
        it2_364=it2_364->next;
    }
    return (_Bool)1;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__240;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sType$ph* result_366;
struct list_item$1sType$ph* it_367;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1sType$ph* __result_obj__243;
    if(    self==((void*)0)) {
        __result_obj__240 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__240,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_366=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1404, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_367=self->head;
    while(it_367!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_366,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_367->item)));
        }
        else {
            list$1sType$ph$p_add(result_366,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_367->item)));
        }
        it_367=it_367->next;
    }
    __result_obj__243 = come_increment_ref_count(result_366);
    come_call_finalizer3(result_366,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__241;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value267 = (void*)0;
struct list_item$1sType$ph* litem_368;
struct sType* __dec_obj27;
void* __right_value268 = (void*)0;
struct list_item$1sType$ph* litem_369;
struct sType* __dec_obj28;
void* __right_value269 = (void*)0;
struct list_item$1sType$ph* litem_370;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__242;
    if(    self->len==0) {
        litem_368=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value267=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1423, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj27=litem_368->item;
        litem_368->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value268=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1433, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj28=litem_369->item;
        litem_369->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value269=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1443, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj29=litem_370->item;
        litem_370->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result_obj__242 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__242;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_371;
struct list_item$1sType$ph* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        come_call_finalizer3(prev_it_372,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__244;
void* __right_value275 = (void*)0;
struct sNode* result_373;
struct sNode* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count2(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
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
    __result_obj__245 = come_increment_ref_count(result_373);
    ((result_373) ? result_373 = come_decrement_ref_count2(result_373, ((struct sNode*)result_373)->finalize, ((struct sNode*)result_373)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count2(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__245;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__246;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* result_374;
struct list_item$1sNode$ph* it_375;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
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
    __result_obj__249 = come_increment_ref_count(result_374);
    come_call_finalizer3(result_374,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__247;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__247 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value283 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj38;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_377;
struct sNode* __dec_obj39;
void* __right_value285 = (void*)0;
struct list_item$1sNode$ph* litem_378;
struct sNode* __dec_obj40;
struct list$1sNode$ph* __result_obj__248;
    if(    self->len==0) {
        litem_376=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value283=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj38=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1) {
        litem_377=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        __dec_obj39=litem_377->item;
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value285=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        __dec_obj40=litem_378->item;
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result_obj__248 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__248;
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
struct list$1char$ph* __result_obj__250;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1char$ph* result_381;
struct list_item$1char$ph* it_382;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1char$ph* __result_obj__252;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__250,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
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
    __result_obj__252 = come_increment_ref_count(result_381);
    come_call_finalizer3(result_381,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_383;
char* __dec_obj44;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_384;
char* __dec_obj45;
void* __right_value295 = (void*)0;
struct list_item$1char$ph* litem_385;
char* __dec_obj46;
struct list$1char$ph* __result_obj__251;
    if(    self->len==0) {
        litem_383=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value293=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=((void*)0);
        litem_383->next=((void*)0);
        __dec_obj44=litem_383->item;
        litem_383->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_383;
        self->head=litem_383;
    }
    else if(    self->len==1) {
        litem_384=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=self->head;
        litem_384->next=((void*)0);
        __dec_obj45=litem_384->item;
        litem_384->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_384;
        self->head->next=litem_384;
    }
    else {
        litem_385=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value295=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=self->tail;
        litem_385->next=((void*)0);
        __dec_obj46=litem_385->item;
        litem_385->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_385;
        self->tail=litem_385;
    }
    self->len++;
    __result_obj__251 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
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

static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self){
struct sVar* result_398;
struct sVar* __result_obj__256;
struct sVar* __result_obj__257;
struct sVar* result_399;
struct sVar* __result_obj__258;
result_398 = (void*)0;
result_399 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_398,0,sizeof(struct sVar*));
        __result_obj__256 = result_398;
        return __result_obj__256;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__257 = self->it->item;
        return __result_obj__257;
    }
    memset(&result_399,0,sizeof(struct sVar*));
    __result_obj__258 = result_399;
    return __result_obj__258;
}

static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self){
struct sVar* result_401;
struct sVar* __result_obj__259;
struct sVar* __result_obj__260;
struct sVar* result_402;
struct sVar* __result_obj__261;
result_401 = (void*)0;
result_402 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_401,0,sizeof(struct sVar*));
        __result_obj__259 = result_401;
        return __result_obj__259;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__260 = self->it->item;
        return __result_obj__260;
    }
    memset(&result_402,0,sizeof(struct sVar*));
    __result_obj__261 = result_402;
    return __result_obj__261;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_403;
struct list_item$1sVar$ph* prev_it_404;
    it_403=self->head;
    while(it_403!=((void*)0)) {
        prev_it_404=it_403;
        it_403=it_403->next;
        come_call_finalizer3(prev_it_404,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_405;
struct list_item$1sVar$ph* prev_it_406;
    it_405=self->head;
    while(it_405!=((void*)0)) {
        prev_it_406=it_405;
        it_405=it_405->next;
        come_call_finalizer3(prev_it_406,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value325 = (void*)0;
char* __dec_obj53;
struct sOutputNode* __result_obj__262;
    ((struct sNodeBase*)(__right_value325=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value325,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj53=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__262 = come_increment_ref_count(self);
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    (contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__262,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__262;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value326 = (void*)0;
char* __result_obj__263;
    __result_obj__263 = come_increment_ref_count(((char*)(__right_value326=__builtin_string("sOutputNode"))));
    (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__263 = come_decrement_ref_count2(__result_obj__263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__263;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value327 = (void*)0;
char* __dec_obj54;
struct list$1sNode$ph* __dec_obj55;
struct sInlineAssembler* __result_obj__264;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value327,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj54=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=self->exps;
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj55,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__264 = come_increment_ref_count(self);
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    (source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__264,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value328 = (void*)0;
char* __result_obj__265;
    __result_obj__265 = come_increment_ref_count(((char*)(__right_value328=__builtin_string("sInlineAssembler"))));
    (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__265 = come_decrement_ref_count2(__result_obj__265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__265;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_411;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct buffer* buf_413;
char* p_414;
_Bool dquort_415;
int num_exp_416;
void* __right_value333 = (void*)0;
struct sNode* node_417;
_Bool Value_421;
_Bool __result_obj__268;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj56;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__270;
    source_411=(char*)come_increment_ref_count(self->source);
    come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 189, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 191, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_414=source_411;
    while(*p_414!=40) {
        buffer_append_char(buf_413,*p_414);
        p_414++;
    }
    if(    *p_414==40) {
        buffer_append_char(buf_413,*p_414);
        p_414++;
        while(*p_414==32||*p_414==9||*p_414==10) {
            buffer_append_char(buf_413,*p_414);
            p_414++;
        }
    }
    dquort_415=(_Bool)0;
    num_exp_416=0;
    while(*p_414) {
        if(        *p_414==34) {
            buffer_append_char(buf_413,*p_414);
            p_414++;
            dquort_415=!dquort_415;
        }
        else if(        dquort_415) {
            buffer_append_char(buf_413,*p_414);
            p_414++;
        }
        else if(        *p_414==40) {
            buffer_append_char(buf_413,*p_414);
            p_414++;
            node_417=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_416++));
            Value_421=node_compile(node_417,info);
            if(            !Value_421) {
                __result_obj__268 = (_Bool)0;
                ((node_417) ? node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_411 = come_decrement_ref_count2(source_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__268;
            }
            else {
            }
            come_value_422=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_413,come_value_422->c_value);
            if(            *p_414==41) {
                buffer_append_char(buf_413,*p_414);
                p_414++;
            }
            ((node_417) ? node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_413,*p_414);
            p_414++;
        }
    }
    __dec_obj56=come_value_412->c_value;
    come_value_412->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value335=buffer_to_string(buf_413)))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj57=come_value_412->type;
    come_value_412->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 249, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_412->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
    add_come_last_code(info,"%s",come_value_412->c_value);
    __result_obj__270 = (_Bool)1;
    (source_411 = come_decrement_ref_count2(source_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__270;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_418;
int i_419;
struct sNode* __result_obj__266;
struct sNode* default_value_420;
struct sNode* __result_obj__267;
default_value_420 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_418=self->head;
    i_419=0;
    while(it_418!=((void*)0)) {
        if(        position==i_419) {
            __result_obj__266 = come_increment_ref_count(it_418->item);
            ((__result_obj__266) ? __result_obj__266 = come_decrement_ref_count2(__result_obj__266, ((struct sNode*)__result_obj__266)->finalize, ((struct sNode*)__result_obj__266)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__266;
        }
        it_418=it_418->next;
        i_419++;
    }
    memset(&default_value_420,0,sizeof(struct sNode*));
    __result_obj__267 = come_increment_ref_count(default_value_420);
    ((default_value_420) ? default_value_420 = come_decrement_ref_count2(default_value_420, ((struct sNode*)default_value_420)->finalize, ((struct sNode*)default_value_420)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__267) ? __result_obj__267 = come_decrement_ref_count2(__result_obj__267, ((struct sNode*)__result_obj__267)->finalize, ((struct sNode*)__result_obj__267)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__267;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value340 = (void*)0;
struct list_item$1CVALUE$ph* litem_423;
struct CVALUE* __dec_obj58;
void* __right_value341 = (void*)0;
struct list_item$1CVALUE$ph* litem_424;
struct CVALUE* __dec_obj59;
void* __right_value342 = (void*)0;
struct list_item$1CVALUE$ph* litem_425;
struct CVALUE* __dec_obj60;
struct list$1CVALUE$ph* __result_obj__269;
    if(    self->len==0) {
        litem_423=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value340=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1493, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_423->prev=((void*)0);
        litem_423->next=((void*)0);
        __dec_obj58=litem_423->item;
        litem_423->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_423;
        self->head=litem_423;
    }
    else if(    self->len==1) {
        litem_424=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value341=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1503, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_424->prev=self->head;
        litem_424->next=((void*)0);
        __dec_obj59=litem_424->item;
        litem_424->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_424;
        self->head->next=litem_424;
    }
    else {
        litem_425=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value342=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1513, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_425->prev=self->tail;
        litem_425->next=((void*)0);
        __dec_obj60=litem_425->item;
        litem_425->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_425;
        self->tail=litem_425;
    }
    self->len++;
    __result_obj__269 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__269;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value343 = (void*)0;
struct sCurrentNode2* __result_obj__271;
    ((struct sNodeBase*)(__right_value343=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value343,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__271 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value344 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = come_increment_ref_count(((char*)(__right_value344=__builtin_string(self->sname))));
    (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count2(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value345 = (void*)0;
char* __result_obj__273;
    __result_obj__273 = come_increment_ref_count(((char*)(__right_value345=__builtin_string("sCurrentNode"))));
    (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__273 = come_decrement_ref_count2(__result_obj__273, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__273;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value346 = (void*)0;
char* class_name_426;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sClass* current_stack_427;
struct sVarTable* vtable_440;
struct map$2char$phsVar$ph* o2_saved_441;
char* it_444;
char* key_447;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sVar* value_448;
void* __right_value366 = (void*)0;
struct sType* type2_452;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct tuple2$2char$phsType$ph* item_453;
void* __right_value370 = (void*)0;
struct sType* type3_455;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple2$2char$phsType$ph* item2_458;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_505;
char* it_506;
char* key_507;
void* __right_value384 = (void*)0;
struct sVar* value_508;
void* __right_value385 = (void*)0;
struct sType* type2_509;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2char$phsType$ph* item_510;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value390 = (void*)0;
char* __dec_obj75;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* __dec_obj76;
_Bool __result_obj__316;
    info->current_stack_num++;
    class_name_426=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_427=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),(char*)come_increment_ref_count(class_name_426),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_440=info->lv_table;
    while(vtable_440) {
        for(        o2_saved_441=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_440->mVars)),it_444=map$2char$phsVar$ph$p_begin((o2_saved_441));        !map$2char$phsVar$ph$p_end((o2_saved_441));        it_444=map$2char$phsVar$ph$p_next((o2_saved_441))        ){
            key_447=it_444;
            value_448=((struct sVar*)(__right_value365=map$2char$phsVar$ph$p_operator_load_element(vtable_440->mVars,((char*)(__right_value364=__builtin_string(key_447))))));
            (__right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value365,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_452=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_448->mType));
            type2_452->mPointerNum++;
            item_453=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 438, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_448->mCValueName)),(struct sType*)come_increment_ref_count(type2_452)));
            if(            value_448->mCValueName!=((void*)0)) {
                if(                strcmp(value_448->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_448->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_448->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_448->mType->mClass->mName,"va_list")||string_operator_equals(value_448->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_452->mArrayNum)==1) {
                    type3_455=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_452));
                    list$1sNode$ph$p_reset(type3_455->mArrayNum);
                    type3_455->mPointerNum=1;
                    type3_455->mOriginIsArray=(_Bool)1;
                    item2_458=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 458, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_448->mCValueName)),(struct sType*)come_increment_ref_count(type3_455)));
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_427->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_458)));
                    value_448->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_455,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_458,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_427->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_453)));
                }
            }
            come_call_finalizer3(type2_452,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_453,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_441,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_440=vtable_440->mParent;
    }
    output_struct(current_stack_427,info);
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_426),(struct sClass*)come_increment_ref_count(current_stack_427));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_426,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_426);
    vtable_440=info->lv_table;
    while(vtable_440) {
        for(        o2_saved_505=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_440->mVars)),it_506=map$2char$phsVar$ph$p_begin((o2_saved_505));        !map$2char$phsVar$ph$p_end((o2_saved_505));        it_506=map$2char$phsVar$ph$p_next((o2_saved_505))        ){
            key_507=it_506;
            value_508=((struct sVar*)(__right_value384=map$2char$phsVar$ph$p_operator_load_element(vtable_440->mVars,key_507)));
            come_call_finalizer3(__right_value384,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_509=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_508->mType));
            item_510=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 487, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_508->mCValueName),(struct sType*)come_increment_ref_count(type2_509)));
            if(            value_508->mCValueName!=((void*)0)) {
                if(                strcmp(value_508->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_508->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_508->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_508->mType->mClass->mName,"va_list")||string_operator_equals(value_508->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_509->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_508->mCValueName,value_508->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_508->mCValueName,value_508->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_509,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_510,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_505,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_440=vtable_440->mParent;
    }
    come_value_511=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj75=come_value_511->c_value;
    come_value_511->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj76=come_value_511->type;
    come_value_511->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(class_name_426),(_Bool)0,info));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_511->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_511->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_511));
    __result_obj__316 = (_Bool)1;
    (class_name_426 = come_decrement_ref_count2(class_name_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_427,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__316;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_428;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_429;
    it_428=self->head;
    while(it_428!=((void*)0)) {
        prev_it_429=it_428;
        it_428=it_428->next;
        come_call_finalizer3(prev_it_429,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__274;
void* __right_value347 = (void*)0;
struct sClass* result_431;
void* __right_value348 = (void*)0;
char* __dec_obj61;
void* __right_value359 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj67;
void* __right_value360 = (void*)0;
char* __dec_obj68;
void* __right_value361 = (void*)0;
char* __dec_obj69;
struct sClass* __result_obj__281;
    if(    self==(void*)0) {
        __result_obj__274 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__274,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__274;
    }
    result_431=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_431->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_431->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_431->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_431->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_431->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_431->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_431->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_431->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj61=result_431->mName;
        result_431->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_431->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj67=result_431->mFields;
        result_431->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsType$ph$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj67,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj68=result_431->mParentClassName;
        result_431->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj69=result_431->mAttribute;
        result_431->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->mDynamic=self->mDynamic;
    }
    __result_obj__281 = come_increment_ref_count(result_431);
    come_call_finalizer3(result_431,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__281,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__281;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_430;
    result_430=0;
    result_430+=int_get_hash_key(((int)self->mStruct));
    result_430+=int_get_hash_key(((int)self->mFloat));
    result_430+=int_get_hash_key(((int)self->mUnion));
    result_430+=int_get_hash_key(((int)self->mGenerics));
    result_430+=int_get_hash_key(((int)self->mMethodGenerics));
    result_430+=int_get_hash_key(((int)self->mEnum));
    result_430+=int_get_hash_key(((int)self->mProtocol));
    result_430+=int_get_hash_key(((int)self->mNumber));
    result_430+=int_get_hash_key(((int)self->mName));
    result_430+=int_get_hash_key(((int)self->mGenericsNum));
    result_430+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_430+=int_get_hash_key(((int)self->mFields));
    result_430+=int_get_hash_key(((int)self->mParentClassName));
    result_430+=int_get_hash_key(((int)self->mAttribute));
    result_430+=int_get_hash_key(((int)self->mDynamic));
    return result_430;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__275;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result_432;
struct list_item$1tuple2$2char$phsType$ph$ph* it_433;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__280;
    if(    self==((void*)0)) {
        __result_obj__275 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__275,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__275;
    }
    result_432=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1404, "struct list$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_433=self->head;
    while(it_433!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsType$ph$ph$p_add(result_432,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_433->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph$p_add(result_432,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_433->item)));
        }
        it_433=it_433->next;
    }
    __result_obj__280 = come_increment_ref_count(result_432);
    come_call_finalizer3(result_432,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__280,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__280;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__276;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__276 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__276,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__276;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value351 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_434;
struct tuple2$2char$phsType$ph* __dec_obj62;
void* __right_value352 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_435;
struct tuple2$2char$phsType$ph* __dec_obj63;
void* __right_value353 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_436;
struct tuple2$2char$phsType$ph* __dec_obj64;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__277;
    if(    self->len==0) {
        litem_434=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value351=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1423, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_434->prev=((void*)0);
        litem_434->next=((void*)0);
        __dec_obj62=litem_434->item;
        litem_434->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_434;
        self->head=litem_434;
    }
    else if(    self->len==1) {
        litem_435=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value352=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1433, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_435->prev=self->head;
        litem_435->next=((void*)0);
        __dec_obj63=litem_435->item;
        litem_435->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_435;
        self->head->next=litem_435;
    }
    else {
        litem_436=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value353=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1443, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_436->prev=self->tail;
        litem_436->next=((void*)0);
        __dec_obj64=litem_436->item;
        litem_436->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_436;
        self->tail=litem_436;
    }
    self->len++;
    __result_obj__277 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__277;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__278;
void* __right_value354 = (void*)0;
struct tuple2$2char$phsType$ph* result_437;
void* __right_value355 = (void*)0;
char* __dec_obj65;
void* __right_value356 = (void*)0;
struct sType* __dec_obj66;
struct tuple2$2char$phsType$ph* __result_obj__279;
    if(    self==(void*)0) {
        __result_obj__278 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__278,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__278;
    }
    result_437=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj65=result_437->v1;
        result_437->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj66=result_437->v2;
        result_437->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__279 = come_increment_ref_count(result_437);
    come_call_finalizer3(result_437,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__279,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__279;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_438;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_439;
    it_438=self->head;
    while(it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        come_call_finalizer3(prev_it_439,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_442;
char* __result_obj__282;
char* __result_obj__283;
char* result_443;
char* __result_obj__284;
result_442 = (void*)0;
result_443 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_442,0,sizeof(char*));
        __result_obj__282 = result_442;
        return __result_obj__282;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__283 = self->key_list->it->item;
        return __result_obj__283;
    }
    memset(&result_443,0,sizeof(char*));
    __result_obj__284 = result_443;
    return __result_obj__284;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_445;
char* __result_obj__285;
char* __result_obj__286;
char* result_446;
char* __result_obj__287;
result_445 = (void*)0;
result_446 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_445,0,sizeof(char*));
        __result_obj__285 = result_445;
        return __result_obj__285;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__286 = self->key_list->it->item;
        return __result_obj__286;
    }
    memset(&result_446,0,sizeof(char*));
    __result_obj__287 = result_446;
    return __result_obj__287;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_449;
unsigned int hash_450;
unsigned int it_451;
struct sVar* __result_obj__288;
struct sVar* __result_obj__289;
struct sVar* __result_obj__290;
struct sVar* __result_obj__291;
default_value_449 = (void*)0;
    memset(&default_value_449,0,sizeof(struct sVar*));
    hash_450=string_get_hash_key(((char*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(        self->item_existance[it_451]) {
            if(            string_equals(self->keys[it_451],key)) {
                __result_obj__288 = come_increment_ref_count(self->items[it_451]);
                come_call_finalizer3(default_value_449,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__288,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__288;
            }
            it_451++;
            if(            it_451>=self->size) {
                it_451=0;
            }
            else if(            it_451==hash_450) {
                __result_obj__289 = come_increment_ref_count(default_value_449);
                come_call_finalizer3(default_value_449,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__289,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__289;
            }
        }
        else {
            __result_obj__290 = come_increment_ref_count(default_value_449);
            come_call_finalizer3(default_value_449,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__290,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__290;
        }
    }
    __result_obj__291 = come_increment_ref_count(default_value_449);
    come_call_finalizer3(default_value_449,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__291,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__291;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_454;
    result_454=0;
    result_454+=int_get_hash_key(((int)self->v1));
    result_454+=int_get_hash_key(((int)self->v2));
    return result_454;
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
char* __dec_obj70;
struct sType* __dec_obj71;
struct tuple2$2char$phsType$ph* __result_obj__292;
    __dec_obj70=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj71=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__292 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__292,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__292;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_456;
struct list_item$1sNode$ph* prev_it_457;
struct list$1sNode$ph* __result_obj__293;
    it_456=self->head;
    while(it_456!=((void*)0)) {
        prev_it_457=it_456;
        it_456=it_456->next;
        come_call_finalizer3(prev_it_457,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__293 = self;
    return __result_obj__293;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value374 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_459;
struct tuple2$2char$phsType$ph* __dec_obj72;
void* __right_value375 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_460;
struct tuple2$2char$phsType$ph* __dec_obj73;
void* __right_value376 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_461;
struct tuple2$2char$phsType$ph* __dec_obj74;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__294;
    if(    self->len==0) {
        litem_459=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value374=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1493, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_459->prev=((void*)0);
        litem_459->next=((void*)0);
        __dec_obj72=litem_459->item;
        litem_459->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_459;
        self->head=litem_459;
    }
    else if(    self->len==1) {
        litem_460=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value375=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1503, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_460->prev=self->head;
        litem_460->next=((void*)0);
        __dec_obj73=litem_460->item;
        litem_460->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_460;
        self->head->next=litem_460;
    }
    else {
        litem_461=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value376=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1513, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_461->prev=self->tail;
        litem_461->next=((void*)0);
        __dec_obj74=litem_461->item;
        litem_461->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_461;
        self->tail=litem_461;
    }
    self->len++;
    __result_obj__294 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__294;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_462;
int i_463;
    for(    i_462=0;    i_462<self->size;    i_462++    ){
        if(        self->item_existance[i_462]) {
            if(            1) {
                come_call_finalizer3(self->items[i_462],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_463=0;    i_463<self->size;    i_463++    ){
        if(        self->item_existance[i_463]) {
            if(            1) {
                (self->keys[i_463] = come_decrement_ref_count2(self->keys[i_463], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_481;
unsigned int it_482;
_Bool same_key_exist_499;
char* it2_502;
struct map$2char$phsClass$ph* __result_obj__315;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_481=string_get_hash_key(((char*)key))%self->size;
    it_482=hash_481;
    while((_Bool)1) {
        if(        self->item_existance[it_482]) {
            if(            string_equals(self->keys[it_482],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_482]);
                    (self->keys[it_482] = come_decrement_ref_count2(self->keys[it_482], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_482]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_482]);
                    self->keys[it_482]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_482],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_482]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_482]=item;
                }
                break;
            }
            it_482++;
            if(            it_482>=self->size) {
                it_482=0;
            }
            else if(            it_482==hash_481) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_482]=(_Bool)1;
            if(            1) {
                self->keys[it_482]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_482]=key;
            }
            if(            1) {
                self->items[it_482]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_482]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_499=(_Bool)0;
    for(    it2_502=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_502=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_502,key)) {
            same_key_exist_499=(_Bool)1;
        }
    }
    if(    !same_key_exist_499) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__315 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__315;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_464;
void* __right_value379 = (void*)0;
char** keys_465;
void* __right_value380 = (void*)0;
struct sClass** items_466;
void* __right_value381 = (void*)0;
_Bool* item_existance_467;
int len_468;
char* it_471;
struct sClass* default_value_474;
void* __right_value382 = (void*)0;
struct sClass* it2_475;
unsigned int hash_478;
int n_479;
struct sClass* default_value_480;
void* __right_value383 = (void*)0;
default_value_474 = (void*)0;
default_value_480 = (void*)0;
    size_464=self->size*10;
    keys_465=(char**)come_increment_ref_count(((char**)(__right_value379=(char**)come_calloc(1, sizeof(char*)*(1*(size_464)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_466=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value380=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_464)), "./comelang.h", 2939, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_467=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value381=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_464)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_468=0;
    for(    it_471=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_471=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_474,0,sizeof(struct sClass*));
        it2_475=((struct sClass*)(__right_value382=map$2char$phsClass$ph$p_at(self,it_471,(struct sClass*)come_increment_ref_count(default_value_474))));
        come_call_finalizer3(__right_value382,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_478=string_get_hash_key(((char*)it_471))%size_464;
        n_479=hash_478;
        while((_Bool)1) {
            if(            item_existance_467[n_479]) {
                n_479++;
                if(                n_479>=size_464) {
                    n_479=0;
                }
                else if(                n_479==hash_478) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_467[n_479]=(_Bool)1;
                keys_465[n_479]=it_471;
                items_466[n_479]=((struct sClass*)(__right_value383=map$2char$phsClass$ph$p_at(self,it_471,(struct sClass*)come_increment_ref_count(default_value_480))));
                come_call_finalizer3(__right_value383,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_468++;
                come_call_finalizer3(default_value_480,sClass_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_480,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_474,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_465;
    self->items=items_466;
    self->item_existance=item_existance_467;
    self->size=size_464;
    self->len=len_468;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_469;
char* __result_obj__295;
char* __result_obj__296;
char* result_470;
char* __result_obj__297;
result_469 = (void*)0;
result_470 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_469,0,sizeof(char*));
        __result_obj__295 = result_469;
        return __result_obj__295;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__296 = self->key_list->it->item;
        return __result_obj__296;
    }
    memset(&result_470,0,sizeof(char*));
    __result_obj__297 = result_470;
    return __result_obj__297;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_472;
char* __result_obj__298;
char* __result_obj__299;
char* result_473;
char* __result_obj__300;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_472,0,sizeof(char*));
        __result_obj__298 = result_472;
        return __result_obj__298;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__299 = self->key_list->it->item;
        return __result_obj__299;
    }
    memset(&result_473,0,sizeof(char*));
    __result_obj__300 = result_473;
    return __result_obj__300;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_476;
unsigned int it_477;
struct sClass* __result_obj__301;
struct sClass* __result_obj__302;
struct sClass* __result_obj__303;
struct sClass* __result_obj__304;
    hash_476=string_get_hash_key(((char*)key))%self->size;
    it_477=hash_476;
    while((_Bool)1) {
        if(        self->item_existance[it_477]) {
            if(            string_equals(self->keys[it_477],key)) {
                __result_obj__301 = come_increment_ref_count(self->items[it_477]);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__301,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__301;
            }
            it_477++;
            if(            it_477>=self->size) {
                it_477=0;
            }
            else if(            it_477==hash_476) {
                __result_obj__302 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__302,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__302;
            }
        }
        else {
            __result_obj__303 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__303,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__303;
        }
    }
    __result_obj__304 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__304,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__304;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_483;
struct list_item$1char$p* it_484;
struct list$1char$p* __result_obj__308;
    it2_483=0;
    it_484=self->head;
    while(it_484!=((void*)0)) {
        if(        charp_equals(it_484->item,item)) {
            list$1char$p$p_delete(self,it2_483,it2_483+1);
            break;
        }
        it2_483++;
        it_484=it_484->next;
    }
    __result_obj__308 = self;
    return __result_obj__308;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_485;
struct list$1char$p* __result_obj__305;
struct list_item$1char$p* it_488;
int i_489;
struct list_item$1char$p* prev_it_490;
struct list_item$1char$p* it_491;
int i_492;
struct list_item$1char$p* prev_it_493;
struct list_item$1char$p* it_494;
struct list_item$1char$p* head_prev_it_495;
struct list_item$1char$p* tail_it_496;
int i_497;
struct list_item$1char$p* prev_it_498;
struct list$1char$p* __result_obj__307;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_485=tail;
        tail=head;
        head=tmp_485;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__305 = self;
        return __result_obj__305;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_488=self->head;
        i_489=0;
        while(it_488!=((void*)0)) {
            if(            i_489<tail) {
                prev_it_490=it_488;
                it_488=it_488->next;
                i_489++;
                come_call_finalizer3(prev_it_490,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_489==tail) {
                self->head=it_488;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_488=it_488->next;
                i_489++;
            }
        }
    }
    else if(    tail==self->len) {
        it_491=self->head;
        i_492=0;
        while(it_491!=((void*)0)) {
            if(            i_492==head) {
                self->tail=it_491->prev;
                self->tail->next=((void*)0);
            }
            if(            i_492>=head) {
                prev_it_493=it_491;
                it_491=it_491->next;
                i_492++;
                come_call_finalizer3(prev_it_493,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_491=it_491->next;
                i_492++;
            }
        }
    }
    else {
        it_494=self->head;
        head_prev_it_495=((void*)0);
        tail_it_496=((void*)0);
        i_497=0;
        while(it_494!=((void*)0)) {
            if(            i_497==head) {
                head_prev_it_495=it_494->prev;
            }
            if(            i_497==tail) {
                tail_it_496=it_494;
            }
            if(            i_497>=head&&i_497<tail) {
                prev_it_498=it_494;
                it_494=it_494->next;
                i_497++;
                come_call_finalizer3(prev_it_498,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_494=it_494->next;
                i_497++;
            }
        }
        if(        head_prev_it_495!=((void*)0)) {
            head_prev_it_495->next=tail_it_496;
        }
        if(        tail_it_496!=((void*)0)) {
            tail_it_496->prev=head_prev_it_495;
        }
    }
    __result_obj__307 = self;
    return __result_obj__307;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_486;
struct list_item$1char$p* prev_it_487;
struct list$1char$p* __result_obj__306;
    it_486=self->head;
    while(it_486!=((void*)0)) {
        prev_it_487=it_486;
        it_486=it_486->next;
        come_call_finalizer3(prev_it_487,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__306 = self;
    return __result_obj__306;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_500;
char* __result_obj__309;
char* __result_obj__310;
char* result_501;
char* __result_obj__311;
result_500 = (void*)0;
result_501 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_500,0,sizeof(char*));
        __result_obj__309 = result_500;
        return __result_obj__309;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__310 = self->it->item;
        return __result_obj__310;
    }
    memset(&result_501,0,sizeof(char*));
    __result_obj__311 = result_501;
    return __result_obj__311;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_503;
char* __result_obj__312;
char* __result_obj__313;
char* result_504;
char* __result_obj__314;
result_503 = (void*)0;
result_504 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_503,0,sizeof(char*));
        __result_obj__312 = result_503;
        return __result_obj__312;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__313 = self->it->item;
        return __result_obj__313;
    }
    memset(&result_504,0,sizeof(char*));
    __result_obj__314 = result_504;
    return __result_obj__314;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value393 = (void*)0;
struct sLineNode* __result_obj__317;
    ((struct sNodeBase*)(__right_value393=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value393,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__317 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__317,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value394 = (void*)0;
char* __result_obj__318;
    __result_obj__318 = come_increment_ref_count(((char*)(__right_value394=__builtin_string("sLineNode"))));
    (__right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__318 = come_decrement_ref_count2(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__318;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value_512;
void* __right_value397 = (void*)0;
char* __dec_obj77;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__319;
    come_value_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 279, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj77=come_value_512->c_value;
    come_value_512->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj78=come_value_512->type;
    come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 282, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_512->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_512));
    add_come_last_code(info,"%s",come_value_512->c_value);
    __result_obj__319 = (_Bool)1;
    come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__319;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value401 = (void*)0;
struct sSNameNode* __result_obj__320;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value401,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__320 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__320,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__320;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value402 = (void*)0;
char* __result_obj__321;
    __result_obj__321 = come_increment_ref_count(((char*)(__right_value402=__builtin_string("sSNameNode"))));
    (__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__321 = come_decrement_ref_count2(__result_obj__321, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__321;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_513;
void* __right_value405 = (void*)0;
char* __dec_obj79;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* __dec_obj80;
_Bool __result_obj__322;
    come_value_513=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 307, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj79=come_value_513->c_value;
    come_value_513->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj80=come_value_513->type;
    come_value_513->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 310, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_513->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_513));
    add_come_last_code(info,"%s",come_value_513->c_value);
    __result_obj__322 = (_Bool)1;
    come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__322;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value409 = (void*)0;
struct sFuncNode* __result_obj__323;
    ((struct sNodeBase*)(__right_value409=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value409,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__323 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__323,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__323;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value410 = (void*)0;
char* __result_obj__324;
    __result_obj__324 = come_increment_ref_count(((char*)(__right_value410=__builtin_string("sFuncNode"))));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__324 = come_decrement_ref_count2(__result_obj__324, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__324;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_514;
void* __right_value413 = (void*)0;
char* __dec_obj81;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__325;
    come_value_514=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 335, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj81=come_value_514->c_value;
    come_value_514->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj82=come_value_514->type;
    come_value_514->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 338, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_514->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_514));
    add_come_last_code(info,"%s",come_value_514->c_value);
    __result_obj__325 = (_Bool)1;
    come_call_finalizer3(come_value_514,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__325;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value417 = (void*)0;
struct sWildCard* __result_obj__326;
    ((struct sNodeBase*)(__right_value417=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value417,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__326 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__326,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value418 = (void*)0;
char* __result_obj__327;
    __result_obj__327 = come_increment_ref_count(((char*)(__right_value418=__builtin_string("sWildCard"))));
    (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__327 = come_decrement_ref_count2(__result_obj__327, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__327;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* value_node_515;
_Bool Value_516;
_Bool __result_obj__328;
_Bool __result_obj__329;
    value_node_515=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value419=xsprintf("Value"))),info));
    (__right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_516=node_compile(value_node_515,info);
    if(    !Value_516) {
        __result_obj__328 = (_Bool)0;
        ((value_node_515) ? value_node_515 = come_decrement_ref_count2(value_node_515, ((struct sNode*)value_node_515)->finalize, ((struct sNode*)value_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__328;
    }
    else {
    }
    __result_obj__329 = (_Bool)1;
    ((value_node_515) ? value_node_515 = come_decrement_ref_count2(value_node_515, ((struct sNode*)value_node_515)->finalize, ((struct sNode*)value_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__329;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value421 = (void*)0;
struct sCallerFuncNode* __result_obj__330;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__330 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__330,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__330;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value422 = (void*)0;
char* __result_obj__331;
    __result_obj__331 = come_increment_ref_count(((char*)(__right_value422=__builtin_string("sCallerFuncNode"))));
    (__right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__331 = come_decrement_ref_count2(__result_obj__331, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__331;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_517;
void* __right_value425 = (void*)0;
char* __dec_obj83;
void* __right_value426 = (void*)0;
char* __dec_obj84;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__332;
    come_value_517=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 387, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj83=come_value_517->c_value;
        come_value_517->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj84=come_value_517->c_value;
        come_value_517->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj85=come_value_517->type;
    come_value_517->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 395, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_517->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_517));
    add_come_last_code(info,"%s",come_value_517->c_value);
    __result_obj__332 = (_Bool)1;
    come_call_finalizer3(come_value_517,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__332;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value430 = (void*)0;
struct sCallerLineNode* __result_obj__333;
    ((struct sNodeBase*)(__right_value430=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value430,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__333 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value433 = (void*)0;
char* __dec_obj86;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sType* __dec_obj87;
_Bool __result_obj__334;
    come_value_518=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 416, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj86=come_value_518->c_value;
    come_value_518->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj87=come_value_518->type;
    come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 419, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_518->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_518));
    add_come_last_code(info,"%s",come_value_518->c_value);
    __result_obj__334 = (_Bool)1;
    come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__334;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value437 = (void*)0;
char* __result_obj__335;
    __result_obj__335 = come_increment_ref_count(((char*)(__right_value437=__builtin_string("sCallerLineNode"))));
    (__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__335 = come_decrement_ref_count2(__result_obj__335, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__335;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value438 = (void*)0;
struct sCallerSNameNode* __result_obj__336;
    ((struct sNodeBase*)(__right_value438=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value438,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__336 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__336,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__336;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value441 = (void*)0;
char* __dec_obj88;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__337;
    come_value_519=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 444, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj88=come_value_519->c_value;
    come_value_519->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=come_value_519->type;
    come_value_519->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 447, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_519->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_519));
    add_come_last_code(info,"%s",come_value_519->c_value);
    __result_obj__337 = (_Bool)1;
    come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__337;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value445 = (void*)0;
char* __result_obj__338;
    __result_obj__338 = come_increment_ref_count(((char*)(__right_value445=__builtin_string("sCallerSNameNode"))));
    (__right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__338 = come_decrement_ref_count2(__result_obj__338, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__338;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __dec_obj90;
void* __right_value458 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj96;
struct list$1sType$ph* __dec_obj97;
struct buffer* __dec_obj98;
struct sFunCallNode* __result_obj__345;
    ((struct sNodeBase*)(__right_value446=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value446,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj90=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj96=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj96,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj97=self->method_generics_types;
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj97,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj98=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj98,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__345 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__345,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__345;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value459 = (void*)0;
char* __result_obj__346;
    __result_obj__346 = come_increment_ref_count(((char*)(__right_value459=__builtin_string("sFunCallNode"))));
    (__right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__346 = come_decrement_ref_count2(__result_obj__346, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__346;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_530;
struct list$1tuple2$2char$phsNode$ph$ph* params_531;
struct buffer* method_block_532;
int method_block_sline_533;
struct sVar* var__534;
struct sType* lambda_type_535;
void* __right_value460 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_536=0;
char* Err_537=0;
_Bool _if_conditional3;
_Bool __result_obj__347;
void* __right_value461 = (void*)0;
struct sType* result_type_538;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1CVALUE$ph* come_params_539;
void* __right_value464 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_542=0;
char* Err_543=0;
_Bool _if_conditional4;
_Bool __result_obj__349;
int i_544;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_545;
struct tuple2$2char$phsNode$ph* it_548;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_551=0;
struct sNode* node_552=0;
_Bool Value_553;
_Bool __result_obj__356;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_554;
void* __right_value466 = (void*)0;
_Bool _if_conditional5;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_558=0;
char* Err_559=0;
_Bool _if_conditional6;
_Bool __result_obj__359;
void* __right_value472 = (void*)0;
_Bool _if_conditional7;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct buffer* buf_560;
int j_561;
struct list$1CVALUE$ph* o2_saved_562;
struct CVALUE* it_565;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_568;
void* __right_value478 = (void*)0;
char* __dec_obj99;
void* __right_value479 = (void*)0;
struct sType* __dec_obj100;
_Bool __result_obj__366;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sGenericsFun* generics_fun_569;
_Bool method_generics_572;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1sType$ph* method_generics_types_573;
void* __right_value484 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_574=0;
struct sGenericsFun* gfun_575=0;
char* generics_fun_name_576;
void* __right_value485 = (void*)0;
struct sFun* fun_577;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1CVALUE$ph* come_params_580;
void* __right_value488 = (void*)0;
struct sFun* fun_581;
_Bool no_output_come_code_582;
_Bool __result_obj__375;
void* __right_value489 = (void*)0;
struct CVALUE* method_block_node_583;
void* __right_value490 = (void*)0;
struct sType* method_block_lambda_type_587;
void* __right_value491 = (void*)0;
struct sType* method_block_result_type_588;
void* __right_value492 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_589;
struct sType* generics_fun_method_block_result_type_590;
int method_generics_num_591;
void* __right_value496 = (void*)0;
int n_600;
struct list$1sType$ph* o2_saved_601;
struct sType* it_604;
int method_generics_num_607;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1CVALUE$ph* come_params_608;
int i_609;
struct sType* result_type_610;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_611;
struct tuple2$2char$phsNode$ph* it_612;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_613=0;
struct sNode* node_614=0;
_Bool Value_615;
_Bool __result_obj__387;
void* __right_value501 = (void*)0;
struct CVALUE* come_value_616;
int method_generics_num_620;
void* __right_value505 = (void*)0;
int n_621;
struct list$1sType$ph* o2_saved_622;
struct sType* it_623;
int method_generics_num_624;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_627=0;
struct sGenericsFun* gfun_628=0;
char* __dec_obj108;
void* __right_value509 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_629=0;
struct sGenericsFun* gfun_630=0;
char* __dec_obj109;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1CVALUE$ph* come_params_631;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_632;
struct tuple2$2char$phsNode$ph* it_633;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_634=0;
struct sNode* node_635=0;
_Bool Value_636;
_Bool __result_obj__390;
void* __right_value512 = (void*)0;
struct CVALUE* come_value_637;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct buffer* buf_638;
int j_639;
struct list$1CVALUE$ph* o2_saved_640;
struct CVALUE* it_641;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_642;
void* __right_value517 = (void*)0;
char* __dec_obj110;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj111;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj112;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj113;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj114;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj115;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj116;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj117;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj118;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj119;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj120;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sType* __dec_obj121;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj122;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* __dec_obj123;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sType* __dec_obj124;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* __dec_obj125;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* __dec_obj126;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sType* __dec_obj127;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* __dec_obj128;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sType* __dec_obj129;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sType* __dec_obj130;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sType* __dec_obj131;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* __dec_obj132;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj133;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sType* __dec_obj134;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* __dec_obj135;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sType* __dec_obj136;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* __dec_obj137;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sType* __dec_obj138;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* __dec_obj139;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sType* __dec_obj140;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* __dec_obj141;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sType* __dec_obj142;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sType* __dec_obj143;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* __dec_obj144;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sType* __dec_obj145;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* __dec_obj146;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sType* __dec_obj147;
_Bool __result_obj__391;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1CVALUE$ph* come_params_643;
int i_644;
struct sType* result_type_645;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_646;
struct tuple2$2char$phsNode$ph* it_647;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_648=0;
struct sNode* node_649=0;
_Bool Value_650;
_Bool __result_obj__392;
void* __right_value622 = (void*)0;
struct CVALUE* come_value_651;
struct sType* __dec_obj148;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct buffer* buf_652;
int j_653;
struct list$1CVALUE$ph* o2_saved_654;
struct CVALUE* it_655;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct CVALUE* come_value_656;
void* __right_value627 = (void*)0;
char* __dec_obj149;
struct sType* __dec_obj150;
_Bool __result_obj__393;
void* __right_value628 = (void*)0;
char* __dec_obj151;
void* __right_value629 = (void*)0;
char* __dec_obj152;
char* p_657;
int version_658;
char* p2_659;
int i_661;
void* __right_value630 = (void*)0;
char* new_fun_name_662;
void* __right_value631 = (void*)0;
_Bool _if_conditional8;
void* __right_value632 = (void*)0;
char* __dec_obj153;
void* __right_value633 = (void*)0;
char* new_fun_name_666;
void* __right_value634 = (void*)0;
_Bool _if_conditional9;
void* __right_value635 = (void*)0;
char* __dec_obj154;
void* __right_value636 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_667=0;
char* Err_668=0;
_Bool _if_conditional10;
_Bool __result_obj__398;
int i_669;
void* __right_value637 = (void*)0;
char* new_fun_name_670;
void* __right_value638 = (void*)0;
_Bool _if_conditional11;
void* __right_value639 = (void*)0;
char* __dec_obj155;
void* __right_value640 = (void*)0;
struct sFun* fun_671;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct list$1CVALUE$ph* come_params_672;
int i_673;
struct sType* result_type_674;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_675;
struct tuple2$2char$phsNode$ph* it_676;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_677=0;
struct sNode* node_678=0;
_Bool Value_679;
_Bool __result_obj__399;
void* __right_value643 = (void*)0;
struct CVALUE* come_value_680;
struct sType* __dec_obj156;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct buffer* buf_681;
int j_682;
struct list$1CVALUE$ph* o2_saved_683;
struct CVALUE* it_684;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct CVALUE* come_value_685;
void* __right_value648 = (void*)0;
char* __dec_obj157;
struct sType* __dec_obj158;
_Bool __result_obj__400;
void* __right_value649 = (void*)0;
struct sType* result_type_686;
_Bool in_exception_value_687;
void* __right_value656 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* new_node_688;
_Bool Value_690;
_Bool __result_obj__403;
_Bool __result_obj__404;
_Bool in_exception_value_691;
void* __right_value659 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* new_node_692;
_Bool Value_693;
_Bool __result_obj__405;
_Bool __result_obj__406;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1sType$ph* param_types_694;
struct list$1sType$ph* o2_saved_695;
struct sType* it_696;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sType* it2_697;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sType* __dec_obj164;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1CVALUE$ph* come_params_698;
int i_699;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_700;
struct tuple2$2char$phsNode$ph* it_701;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_702=0;
struct sNode* node_703=0;
_Bool Value_704;
_Bool __result_obj__407;
void* __right_value670 = (void*)0;
struct CVALUE* come_value_705;
int n_706;
struct list$1char$ph* o2_saved_707;
char* it_710;
void* __right_value671 = (void*)0;
_Bool _if_conditional12;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_713=0;
char* Err_714=0;
_Bool _if_conditional13;
_Bool __result_obj__414;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
_Bool _if_conditional14;
void* __right_value679 = (void*)0;
int i_720;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_721;
struct tuple2$2char$phsNode$ph* it_722;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_723=0;
struct sNode* node_724=0;
_Bool Value_725;
_Bool __result_obj__417;
void* __right_value680 = (void*)0;
struct CVALUE* come_value_726;
void* __right_value681 = (void*)0;
_Bool _if_conditional15;
_Bool Value_727;
_Bool __result_obj__418;
void* __right_value682 = (void*)0;
struct CVALUE* come_value_728;
void* __right_value683 = (void*)0;
_Bool _if_conditional16;
void* __right_value684 = (void*)0;
_Bool _if_conditional17;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_729=0;
char* Err_730=0;
_Bool _if_conditional18;
_Bool __result_obj__419;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
_Bool _if_conditional19;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
_Bool _if_conditional20;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
char* default_param_731;
void* __right_value696 = (void*)0;
char* param_name_735;
void* __right_value697 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_736;
char* p_737;
char* head_738;
int sline_739;
void* __right_value698 = (void*)0;
struct buffer* __dec_obj166;
void* __right_value699 = (void*)0;
struct sNode* node_740;
_Bool Value_741;
_Bool __result_obj__422;
struct buffer* __dec_obj167;
void* __right_value700 = (void*)0;
struct CVALUE* come_value_742;
void* __right_value701 = (void*)0;
_Bool _if_conditional22;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_743=0;
char* Err_744=0;
_Bool _if_conditional23;
_Bool __result_obj__423;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
_Bool _if_conditional24;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
_Bool _if_conditional25;
void* __right_value711 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_745=0;
char* Err_746=0;
_Bool _if_conditional26;
_Bool __result_obj__424;
void* __right_value712 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_747=0;
char* Err_748=0;
_Bool _if_conditional27;
_Bool __result_obj__425;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value717 = (void*)0;
struct sNode* current_stack_frame_node_749;
_Bool Value_751;
_Bool __result_obj__428;
void* __right_value718 = (void*)0;
struct CVALUE* come_value_752;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct buffer* method_block2_753;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sType* method_block_type_754;
void* __right_value723 = (void*)0;
char* class_name_755;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sClass* current_stack_frame_struct_759;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_760=0;
char* Err_761=0;
_Bool _if_conditional28;
_Bool __result_obj__433;
void* __right_value728 = (void*)0;
struct sType* result_type_762;
void* __right_value729 = (void*)0;
struct list$1sType$ph* param_types_763;
struct list$1char$ph* param_names_764;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct buffer* all_alhabet_sname_765;
char* p_766;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct list$1sType$ph* o2_saved_767;
struct sType* it_768;
struct sType* param_type_769;
void* __right_value734 = (void*)0;
char* param_name_770;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
char* param_name_771;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
char* param_name_772;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* source3_773;
char* p_774;
char* head_775;
int sline_776;
struct buffer* __dec_obj169;
void* __right_value741 = (void*)0;
struct sNode* node_777;
_Bool Value_778;
_Bool __result_obj__434;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
char* method_block_name_779;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct CVALUE* come_value2_780;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sFun* fun2_781;
void* __right_value748 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_782=0;
char* Err_783=0;
_Bool _if_conditional29;
_Bool __result_obj__435;
struct sType* method_block_type2_784;
void* __right_value749 = (void*)0;
char* __dec_obj170;
void* __right_value750 = (void*)0;
struct sType* __dec_obj171;
struct buffer* __dec_obj172;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct buffer* buf_785;
int j_786;
struct list$1CVALUE$ph* o2_saved_787;
struct CVALUE* it_788;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct CVALUE* come_value_789;
void* __right_value755 = (void*)0;
char* __dec_obj173;
void* __right_value756 = (void*)0;
struct sType* __dec_obj174;
void* __right_value757 = (void*)0;
char* __dec_obj175;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
char* __dec_obj176;
void* __right_value760 = (void*)0;
struct CVALUE* __dec_obj177;
_Bool __result_obj__436;
memset(&i_661, 0, sizeof(int));
    fun_name_530=(char*)come_increment_ref_count(self->fun_name);
    params_531=self->params;
    method_block_532=self->method_block;
    method_block_sline_533=self->method_block_sline;
    var__534=get_variable_from_table(info->lv_table,fun_name_530);
    if(    var__534==((void*)0)) {
        var__534=get_variable_from_table(info->gv_table,fun_name_530);
    }
    if(    var__534) {
        lambda_type_535=var__534->mType;
        if(        string_operator_not_equals(lambda_type_535->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value460=err_msg(info,"%s is not lambda, can't call",fun_name_530)));
            come_exception_var_2_536=multiple_assign_var2->v1;
            Err_537=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_537)),            come_call_finalizer3(__right_value460,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result_obj__347 = (_Bool)1;
                (Err_537 = come_decrement_ref_count2(Err_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__347;
            }
            else {
            }
            (Err_537 = come_decrement_ref_count2(Err_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_538=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_535->mResultType));
        result_type_538->mStatic=(_Bool)0;
        come_params_539=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 519, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1sType$ph$p_length(lambda_type_535->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_531)&&!lambda_type_535->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value464=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_530,list$1sType$ph$p_length(lambda_type_535->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_531))));
            come_exception_var_3_542=multiple_assign_var3->v1;
            Err_543=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_543)),            come_call_finalizer3(__right_value464,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result_obj__349 = (_Bool)1;
                (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_539,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__349;
            }
            else {
            }
            (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_544=0;
        for(        o2_saved_545=(params_531),it_548=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_545));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_545));        it_548=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_545))        ){
            multiple_assign_var4=it_548;
            label_551=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_552=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_553=node_compile(node_552,info);
            if(            !Value_553) {
                __result_obj__356 = (_Bool)0;
                (label_551 = come_decrement_ref_count2(label_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_552) ? node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_539,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__356;
            }
            else {
            }
            come_value_554=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_535->mVarArgs&&((struct sType*)(__right_value466=list$1sType$ph$p_operator_load_element(lambda_type_535->mParamTypes,i_544)))==((void*)0))),            come_call_finalizer3(__right_value466,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value471=check_assign_type(((char*)(__right_value469=xsprintf("\%s calling param #\%s",((char*)(__right_value467=string_to_string(fun_name_530))),((char*)(__right_value468=int_to_string(i_544)))))),((struct sType*)(__right_value470=list$1sType$ph$p_operator_load_element(lambda_type_535->mParamTypes,i_544))),come_value_554->type,come_value_554,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_4_558=multiple_assign_var5->v1;
                Err_559=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_559)),                (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value470,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value471,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    __result_obj__359 = (_Bool)1;
                    (Err_559 = come_decrement_ref_count2(Err_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_551 = come_decrement_ref_count2(label_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_552) ? node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_539,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__359;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)(__right_value472=list$1sType$ph$p_operator_load_element(lambda_type_535->mParamTypes,i_544)))->mHeap&&come_value_554->type->mHeap)),                come_call_finalizer3(__right_value472,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)(__right_value473=list$1sType$ph$p_operator_load_element(lambda_type_535->mParamTypes,i_544))),come_value_554->type,come_value_554,info,(_Bool)1);
                    come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                (Err_559 = come_decrement_ref_count2(Err_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(come_params_539,(struct CVALUE*)come_increment_ref_count(come_value_554));
            dec_stack_ptr(1,info);
            i_544++;
            (label_551 = come_decrement_ref_count2(label_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_552) ? node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_560=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 555, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_560,var__534->mCValueName);
        buffer_append_str(buf_560,"(");
        j_561=0;
        for(        o2_saved_562=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_539)),it_565=list$1CVALUE$ph$p_begin((o2_saved_562));        !list$1CVALUE$ph$p_end((o2_saved_562));        it_565=list$1CVALUE$ph$p_next((o2_saved_562))        ){
            buffer_append_str(buf_560,it_565->c_value);
            if(            j_561!=list$1CVALUE$ph$p_length(come_params_539)-1) {
                buffer_append_str(buf_560,",");
            }
            j_561++;
        }
        come_call_finalizer3(o2_saved_562,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_560,")");
        come_value_568=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 572, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj99=come_value_568->c_value;
        come_value_568->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_560));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj100=come_value_568->type;
        come_value_568->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_538));
        come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_568->type->mStatic=(_Bool)0;
        come_value_568->var=((void*)0);
        if(        lambda_type_535->mResultType->mHeap) {
            append_object_to_right_values2(come_value_568,(struct sType*)come_increment_ref_count(lambda_type_535->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_568->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_568));
        info->calling_fun=((void*)0);
        __result_obj__366 = (_Bool)1;
        come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_539,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_560,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__366;
        come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_539,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_560,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_569=((struct sGenericsFun*)(__right_value481=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,((char*)(__right_value480=__builtin_string(fun_name_530))),((void*)0))));
    (__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value481,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_572=(_Bool)0;
    if(    generics_fun_569) {
        method_generics_572=list$1char$ph$p_length(generics_fun_569->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph$p_length(self->method_generics_types)>0||method_generics_572) {
        if(        list$1sType$ph$p_length(self->method_generics_types)==0) {
            method_generics_types_573=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 597, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value484=make_method_generics_function((char*)come_increment_ref_count(fun_name_530),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_573),info)));
            name_574=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_575=multiple_assign_var6->v2;
            come_call_finalizer3(__right_value484,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            generics_fun_name_576=(char*)come_increment_ref_count(name_574);
            fun_577=((struct sFun*)(__right_value485=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_576,((void*)0))));
            come_call_finalizer3(__right_value485,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_532) {
                come_params_580=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 604, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_581=((struct sFun*)(__right_value488=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_576,((void*)0))));
                come_call_finalizer3(__right_value488,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_582=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_532,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_580),fun_581,fun_name_530,method_block_sline_533,info,(_Bool)1)) {
                    __result_obj__375 = (_Bool)0;
                    come_call_finalizer3(come_params_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_573,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_574 = come_decrement_ref_count2(name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_576 = come_decrement_ref_count2(generics_fun_name_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__375;
                }
                info->no_output_come_code=no_output_come_code_582;
                method_block_node_583=((struct CVALUE*)(__right_value489=list$1CVALUE$ph$p_operator_load_element(come_params_580,-1)));
                come_call_finalizer3(__right_value489,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_587=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_583->type));
                method_block_result_type_588=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_589=((struct sType*)(__right_value492=list$1sType$ph$p_operator_load_element(generics_fun_569->mParamTypes,-1)));
                come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_590=generics_fun_method_block_lambda_type_589->mResultType;
                if(                generics_fun_method_block_result_type_590->mClass->mMethodGenerics) {
                    method_generics_num_591=generics_fun_method_block_result_type_590->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_573,method_generics_num_591,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_588)));
                }
                n_600=0;
                for(                o2_saved_601=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_589->mParamTypes)),it_604=list$1sType$ph$p_begin((o2_saved_601));                !list$1sType$ph$p_end((o2_saved_601));                it_604=list$1sType$ph$p_next((o2_saved_601))                ){
                    if(                    it_604->mClass->mMethodGenerics) {
                        method_generics_num_607=it_604->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_573,method_generics_num_607,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value497=list$1sType$ph$p_operator_load_element(method_block_lambda_type_587->mParamTypes,n_600))))));
                        come_call_finalizer3(__right_value497,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_600++;
                }
                come_call_finalizer3(o2_saved_601,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_580,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_608=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 636, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            i_609=0;
            result_type_610=((void*)0);
            for(            o2_saved_611=(params_531),it_612=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_611));            !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_611));            it_612=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_611))            ){
                multiple_assign_var7=it_612;
                label_613=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_614=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_615=node_compile(node_614,info);
                if(                !Value_615) {
                    __result_obj__387 = (_Bool)0;
                    (label_613 = come_decrement_ref_count2(label_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_614) ? node_614 = come_decrement_ref_count2(node_614, ((struct sNode*)node_614)->finalize, ((struct sNode*)node_614)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_generics_types_573,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_574 = come_decrement_ref_count2(name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_576 = come_decrement_ref_count2(generics_fun_name_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_params_608,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__387;
                }
                else {
                }
                come_value_616=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUE$ph$p_add(come_params_608,(struct CVALUE*)come_increment_ref_count(come_value_616));
                (label_613 = come_decrement_ref_count2(label_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_614) ? node_614 = come_decrement_ref_count2(node_614, ((struct sNode*)node_614)->finalize, ((struct sNode*)node_614)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_616,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_569->mResultType->mClass->mMethodGenerics) {
                method_generics_num_620=generics_fun_569->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph$p_operator_store_element(method_generics_types_573,method_generics_num_620,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_621=0;
            for(            o2_saved_622=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_569->mParamTypes)),it_623=list$1sType$ph$p_begin((o2_saved_622));            !list$1sType$ph$p_end((o2_saved_622));            it_623=list$1sType$ph$p_next((o2_saved_622))            ){
                if(                it_623->mClass->mMethodGenerics) {
                    method_generics_num_624=it_623->mClass->mMethodGenericsNum;
                    if(                    n_621<list$1CVALUE$ph$p_length(come_params_608)) {
                        list$1sType$ph$p_operator_store_element(method_generics_types_573,method_generics_num_624,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value506=list$1CVALUE$ph$p_operator_load_element(come_params_608,n_621)))->type)));
                        come_call_finalizer3(__right_value506,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_621++;
            }
            come_call_finalizer3(o2_saved_622,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            map$2char$phsFun$ph$p_remove(info->funcs,generics_fun_name_576);
            (name_574 = come_decrement_ref_count2(name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value508=make_method_generics_function((char*)come_increment_ref_count(fun_name_530),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_573),info)));
            name_627=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_628=multiple_assign_var8->v2;
            come_call_finalizer3(__right_value508,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj108=fun_name_530;
            fun_name_530=(char*)come_increment_ref_count(name_627);
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_573,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (generics_fun_name_576 = come_decrement_ref_count2(generics_fun_name_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_params_608,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_627 = come_decrement_ref_count2(name_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value509=make_method_generics_function((char*)come_increment_ref_count(fun_name_530),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_629=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_630=multiple_assign_var9->v2;
            come_call_finalizer3(__right_value509,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj109=fun_name_530;
            fun_name_530=(char*)come_increment_ref_count(name_629);
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            (name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_530,"__builtin_memmove")||string_operator_equals(fun_name_530,"__builtin_memset")||string_operator_equals(fun_name_530,"__builtin_ffs")||string_operator_equals(fun_name_530,"__builtin_ffsl")||string_operator_equals(fun_name_530,"__builtin_ffsll")||string_operator_equals(fun_name_530,"__builtin_bswap16")||string_operator_equals(fun_name_530,"__builtin_bswap32")||string_operator_equals(fun_name_530,"__builtin_bswap64")||string_operator_equals(fun_name_530,"__builtin_constant_p")||string_operator_equals(fun_name_530,"__builtin_expect")||string_operator_equals(fun_name_530,"__builtin___memset_chk")||string_operator_equals(fun_name_530,"__builtin_object_size")||string_operator_equals(fun_name_530,"__builtin___memcpy_chk")||string_operator_equals(fun_name_530,"__builtin___strncpy_chk")||string_operator_equals(fun_name_530,"__builtin___strncat_chk")||string_operator_equals(fun_name_530,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_530,"__builtin_strrchr")||string_operator_equals(fun_name_530,"__builtin_clz")||string_operator_equals(fun_name_530,"__dsb")||string_operator_equals(fun_name_530,"__isb")||string_operator_equals(fun_name_530,"__dmb")||(strlen(fun_name_530)==strlen("__builtin_arm_")&&memcmp(fun_name_530,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_530,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_530,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_530,"__c11_atomic_store")||string_operator_equals(fun_name_530,"__c11_atomic_load")||string_operator_equals(fun_name_530,"__c11_atomic_exchange")||string_operator_equals(fun_name_530,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_530,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_530,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_530,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_530,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_530,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_530,"__c11_atomic_fetch_xor")) {
        come_params_631=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 710, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_632=(params_531),it_633=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_632));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_632));        it_633=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_632))        ){
            multiple_assign_var10=it_633;
            label_634=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_635=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_636=node_compile(node_635,info);
            if(            !Value_636) {
                __result_obj__390 = (_Bool)0;
                (label_634 = come_decrement_ref_count2(label_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_635) ? node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_631,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__390;
            }
            else {
            }
            come_value_637=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_push_back(come_params_631,(struct CVALUE*)come_increment_ref_count(come_value_637));
            (label_634 = come_decrement_ref_count2(label_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_635) ? node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_637,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_638=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 724, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_638,fun_name_530);
        buffer_append_str(buf_638,"(");
        j_639=0;
        for(        o2_saved_640=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_631)),it_641=list$1CVALUE$ph$p_begin((o2_saved_640));        !list$1CVALUE$ph$p_end((o2_saved_640));        it_641=list$1CVALUE$ph$p_next((o2_saved_640))        ){
            buffer_append_str(buf_638,it_641->c_value);
            if(            j_639!=list$1CVALUE$ph$p_length(come_params_631)-1) {
                buffer_append_str(buf_638,",");
            }
            j_639++;
        }
        come_call_finalizer3(o2_saved_640,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_638,")");
        come_value_642=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 741, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj110=come_value_642->c_value;
        come_value_642->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_638));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_530,"__builtin_memmove")||string_operator_equals(fun_name_530,"__builtin_memset")) {
            __dec_obj111=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 745, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_ffs")) {
            __dec_obj112=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 748, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_ffsl")) {
            __dec_obj113=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 751, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_ffsll")) {
            __dec_obj114=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 754, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_bswap16")) {
            __dec_obj115=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 757, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_bswap32")) {
            __dec_obj116=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 760, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_bswap64")) {
            __dec_obj117=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 763, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_constant_p")) {
            __dec_obj118=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 766, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_expect")) {
            __dec_obj119=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 769, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin___memset_chk")) {
            __dec_obj120=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 772, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_642->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_object_size")) {
            __dec_obj121=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin___memcpy_chk")) {
            __dec_obj122=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_642->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_530,"__builtin___strncpy_chk")) {
            __dec_obj123=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 783, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_642->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_530,"__builtin___strncat_chk")) {
            __dec_obj124=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 787, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_642->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_strrchr")) {
            __dec_obj125=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_642->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_530,"__builtin___vsnprintf_chk")) {
            __dec_obj126=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_clz")) {
            __dec_obj127=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 798, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_thread_fence")) {
            __dec_obj128=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 801, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_signal_fence")) {
            __dec_obj129=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 804, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_exchange")) {
            __dec_obj130=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value575=list$1CVALUE$ph$p_operator_load_element(come_params_631,1)))->type));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value575,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_exchange_strong")) {
            __dec_obj131=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value577=list$1CVALUE$ph$p_operator_load_element(come_params_631,2)))->type));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value577,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_exchange_weak")) {
            __dec_obj132=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value579=list$1CVALUE$ph$p_operator_load_element(come_params_631,2)))->type));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value579,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_store")) {
            __dec_obj133=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 816, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_load")) {
            __dec_obj134=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value584=list$1CVALUE$ph$p_operator_load_element(come_params_631,0)))->type));
            come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value584,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_642->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_fetch_add")) {
            __dec_obj135=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value586=list$1CVALUE$ph$p_operator_load_element(come_params_631,1)))->type));
            come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value586,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_fetch_sub")) {
            __dec_obj136=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value588=list$1CVALUE$ph$p_operator_load_element(come_params_631,1)))->type));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value588,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_fetch_and")) {
            __dec_obj137=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value590=list$1CVALUE$ph$p_operator_load_element(come_params_631,1)))->type));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value590,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_fetch_or")) {
            __dec_obj138=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value592=list$1CVALUE$ph$p_operator_load_element(come_params_631,1)))->type));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value592,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__c11_atomic_fetch_xor")) {
            __dec_obj139=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value594=list$1CVALUE$ph$p_operator_load_element(come_params_631,1)))->type));
            come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value594,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__dsb")) {
            __dec_obj140=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 838, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__isb")) {
            __dec_obj141=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 841, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__dmb")) {
            __dec_obj142=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 844, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_arm_cdp")) {
            __dec_obj143=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 847, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_arm_ldc")) {
            __dec_obj144=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 850, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_arm_stc")) {
            __dec_obj145=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 853, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_arm_stcl")) {
            __dec_obj146=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 856, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_530,"__builtin_arm_ldcl")) {
            __dec_obj147=come_value_642->type;
            come_value_642->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 859, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_642->var=((void*)0);
        add_come_last_code(info,"%s",come_value_642->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_642));
        __result_obj__391 = (_Bool)1;
        come_call_finalizer3(come_params_631,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_642,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__391;
        come_call_finalizer3(come_params_631,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_642,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_530,"__builtin_va_arg")) {
        come_params_643=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 871, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_644=0;
        result_type_645=((void*)0);
        for(        o2_saved_646=(params_531),it_647=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_646));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_646));        it_647=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_646))        ){
            multiple_assign_var11=it_647;
            label_648=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_649=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_650=node_compile(node_649,info);
            if(            !Value_650) {
                __result_obj__392 = (_Bool)0;
                (label_648 = come_decrement_ref_count2(label_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_649) ? node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_643,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__392;
            }
            else {
            }
            come_value_651=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_643,(struct CVALUE*)come_increment_ref_count(come_value_651));
            __dec_obj148=result_type_645;
            result_type_645=(struct sType*)come_increment_ref_count(come_value_651->type);
            come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_648 = come_decrement_ref_count2(label_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_649) ? node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 890, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_652,fun_name_530);
        buffer_append_str(buf_652,"(");
        j_653=0;
        for(        o2_saved_654=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_643)),it_655=list$1CVALUE$ph$p_begin((o2_saved_654));        !list$1CVALUE$ph$p_end((o2_saved_654));        it_655=list$1CVALUE$ph$p_next((o2_saved_654))        ){
            buffer_append_str(buf_652,it_655->c_value);
            if(            j_653!=list$1CVALUE$ph$p_length(come_params_643)-1) {
                buffer_append_str(buf_652,",");
            }
            j_653++;
        }
        come_call_finalizer3(o2_saved_654,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_652,")");
        come_value_656=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 907, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj149=come_value_656->c_value;
        come_value_656->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_652));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj150=come_value_656->type;
        come_value_656->type=(struct sType*)come_increment_ref_count(result_type_645);
        come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_656->var=((void*)0);
        add_come_last_code(info,"%s",come_value_656->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_656));
        __result_obj__393 = (_Bool)1;
        come_call_finalizer3(come_params_643,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_656,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__393;
        come_call_finalizer3(come_params_643,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_656,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_530,"string")) {
        __dec_obj151=fun_name_530;
        fun_name_530=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_530,"wstring")) {
        __dec_obj152=fun_name_530;
        fun_name_530=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_530,"inherit")) {
        p_657=info->come_fun->mName;
        version_658=0;
        while(*p_657) {
            if(            *p_657==95&&*(p_657+1)==118&&xisdigit(*(p_657+2))) {
                p2_659=p_657+2;
                version_658=0;
                while(xisdigit(*p2_659)) {
                    version_658=version_658*10+(*p2_659-48);
                    p2_659++;
                }
                break;
            }
            else {
                p_657++;
            }
        }
        char real_fun_name_660[2048];
        memset(&real_fun_name_660, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_660,info->come_fun->mName,p_657-info->come_fun->mName);
        real_fun_name_660[p_657-info->come_fun->mName]=0;
        for(        i_661=version_658-1;        i_661>=1;        i_661--        ){
            new_fun_name_662=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_660,i_661));
            if(            (_if_conditional8=(((struct sFun*)(__right_value631=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_662))))),            come_call_finalizer3(__right_value631,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                __dec_obj153=fun_name_530;
                fun_name_530=(char*)come_increment_ref_count(__builtin_string(new_fun_name_662));
                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_662 = come_decrement_ref_count2(new_fun_name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_662 = come_decrement_ref_count2(new_fun_name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_661==0) {
            new_fun_name_666=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_660));
            if(            (_if_conditional9=(((struct sFun*)(__right_value634=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_666))))),            come_call_finalizer3(__right_value634,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __dec_obj154=fun_name_530;
                fun_name_530=(char*)come_increment_ref_count(__builtin_string(new_fun_name_666));
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_530,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value636=err_msg(info,"invalid inherit")));
                come_exception_var_5_667=multiple_assign_var12->v1;
                Err_668=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_668)),                come_call_finalizer3(__right_value636,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result_obj__398 = (_Bool)1;
                    (Err_668 = come_decrement_ref_count2(Err_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_666 = come_decrement_ref_count2(new_fun_name_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__398;
                }
                else {
                }
                (Err_668 = come_decrement_ref_count2(Err_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_666 = come_decrement_ref_count2(new_fun_name_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_669=128;        i_669>=1;        i_669--        ){
            new_fun_name_670=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_530,i_669));
            if(            (_if_conditional11=(((struct sFun*)(__right_value638=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_670))))),            come_call_finalizer3(__right_value638,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional11) {
                __dec_obj155=fun_name_530;
                fun_name_530=(char*)come_increment_ref_count(__builtin_string(new_fun_name_670));
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_670 = come_decrement_ref_count2(new_fun_name_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_670 = come_decrement_ref_count2(new_fun_name_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_671=((struct sFun*)(__right_value640=map$2char$phsFun$ph$p_at(info->funcs,fun_name_530,((void*)0))));
    come_call_finalizer3(__right_value640,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_671==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_530);
        come_params_672=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 989, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_673=0;
        result_type_674=((void*)0);
        for(        o2_saved_675=(params_531),it_676=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_675));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_675));        it_676=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_675))        ){
            multiple_assign_var13=it_676;
            label_677=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_678=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_679=node_compile(node_678,info);
            if(            !Value_679) {
                __result_obj__399 = (_Bool)0;
                (label_677 = come_decrement_ref_count2(label_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_678) ? node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_672,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__399;
            }
            else {
            }
            come_value_680=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_672,(struct CVALUE*)come_increment_ref_count(come_value_680));
            __dec_obj156=result_type_674;
            result_type_674=(struct sType*)come_increment_ref_count(come_value_680->type);
            come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_677 = come_decrement_ref_count2(label_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_678) ? node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_681=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1008, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_681,fun_name_530);
        buffer_append_str(buf_681,"(");
        j_682=0;
        for(        o2_saved_683=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_672)),it_684=list$1CVALUE$ph$p_begin((o2_saved_683));        !list$1CVALUE$ph$p_end((o2_saved_683));        it_684=list$1CVALUE$ph$p_next((o2_saved_683))        ){
            buffer_append_str(buf_681,it_684->c_value);
            if(            j_682!=list$1CVALUE$ph$p_length(come_params_672)-1) {
                buffer_append_str(buf_681,",");
            }
            j_682++;
        }
        come_call_finalizer3(o2_saved_683,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_681,")");
        come_value_685=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1025, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj157=come_value_685->c_value;
        come_value_685->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_681));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj158=come_value_685->type;
        come_value_685->type=(struct sType*)come_increment_ref_count(result_type_674);
        come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_685->var=((void*)0);
        add_come_last_code(info,"%s",come_value_685->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_685));
        __result_obj__400 = (_Bool)1;
        come_call_finalizer3(come_params_672,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_685,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__400;
        come_call_finalizer3(come_params_672,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_685,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_686=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_671->mResultType));
    result_type_686->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_686->mException&&!info->in_exception_value) {
        in_exception_value_687=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1043, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value656=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_688=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        come_call_finalizer3(__right_value656,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_690=node_compile(new_node_688,info);
        if(        !Value_690) {
            __result_obj__403 = (_Bool)0;
            ((new_node_688) ? new_node_688 = come_decrement_ref_count2(new_node_688, ((struct sNode*)new_node_688)->finalize, ((struct sNode*)new_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__403;
        }
        else {
        }
        info->in_exception_value=in_exception_value_687;
        __result_obj__404 = (_Bool)1;
        ((new_node_688) ? new_node_688 = come_decrement_ref_count2(new_node_688, ((struct sNode*)new_node_688)->finalize, ((struct sNode*)new_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__404;
        ((new_node_688) ? new_node_688 = come_decrement_ref_count2(new_node_688, ((struct sNode*)new_node_688)->finalize, ((struct sNode*)new_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_686->mException&&!info->in_exception_value) {
        in_exception_value_691=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1055, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value659=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_692=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        come_call_finalizer3(__right_value659,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_693=node_compile(new_node_692,info);
        if(        !Value_693) {
            __result_obj__405 = (_Bool)0;
            ((new_node_692) ? new_node_692 = come_decrement_ref_count2(new_node_692, ((struct sNode*)new_node_692)->finalize, ((struct sNode*)new_node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__405;
        }
        else {
        }
        info->in_exception_value=in_exception_value_691;
        __result_obj__406 = (_Bool)1;
        ((new_node_692) ? new_node_692 = come_decrement_ref_count2(new_node_692, ((struct sNode*)new_node_692)->finalize, ((struct sNode*)new_node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__406;
        ((new_node_692) ? new_node_692 = come_decrement_ref_count2(new_node_692, ((struct sNode*)new_node_692)->finalize, ((struct sNode*)new_node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_694=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1065, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_695=(struct list$1sType$ph*)come_increment_ref_count((fun_671->mParamTypes)),it_696=list$1sType$ph$p_begin((o2_saved_695));    !list$1sType$ph$p_end((o2_saved_695));    it_696=list$1sType$ph$p_next((o2_saved_695))    ){
        it2_697=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value664=come_call_cloner(sType_clone, it_696))),info->generics_type,info));
        come_call_finalizer3(__right_value664,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_push_back(param_types_694,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_697)));
        come_call_finalizer3(it2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_695,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj164=result_type_686;
    result_type_686=(struct sType*)come_increment_ref_count(solve_generics(result_type_686,info->generics_type,info));
    come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_698=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1073, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_699=0;    i_699<list$1sType$ph$p_length(fun_671->mParamTypes)-(((method_block_532)?(2):(0)));    i_699++    ){
        list$1CVALUE$ph$p_add(come_params_698,((void*)0));
    }
    for(    o2_saved_700=(params_531),it_701=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_700));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_700));    it_701=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_700))    ){
        multiple_assign_var14=it_701;
        label_702=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_703=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_671->mVarArgs||string_operator_equals(fun_name_530,"__builtin_va_start")) {
        }
        else if(        label_702) {
            Value_704=node_compile(node_703,info);
            if(            !Value_704) {
                __result_obj__407 = (_Bool)0;
                (label_702 = come_decrement_ref_count2(label_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_703) ? node_703 = come_decrement_ref_count2(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__407;
            }
            else {
            }
            come_value_705=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_706=0;
            for(            o2_saved_707=(struct list$1char$ph*)come_increment_ref_count((fun_671->mParamNames)),it_710=list$1char$ph$p_begin((o2_saved_707));            !list$1char$ph$p_end((o2_saved_707));            it_710=list$1char$ph$p_next((o2_saved_707))            ){
                if(                string_operator_equals(label_702,it_710)) {
                    break;
                }
                n_706++;
            }
            come_call_finalizer3(o2_saved_707,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional12=(((struct sType*)(__right_value671=list$1sType$ph$p_operator_load_element(param_types_694,n_706))))),            come_call_finalizer3(__right_value671,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value676=check_assign_type(((char*)(__right_value674=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value672=string_to_string(fun_name_530))),((char*)(__right_value673=int_to_string(n_706)))))),((struct sType*)(__right_value675=list$1sType$ph$p_operator_load_element(param_types_694,n_706))),come_value_705->type,come_value_705,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_6_713=multiple_assign_var15->v1;
                Err_714=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_714)),                (__right_value672 = come_decrement_ref_count2(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value675,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value676,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    __result_obj__414 = (_Bool)1;
                    (Err_714 = come_decrement_ref_count2(Err_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_705,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_702 = come_decrement_ref_count2(label_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_703) ? node_703 = come_decrement_ref_count2(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__414;
                }
                else {
                }
                (Err_714 = come_decrement_ref_count2(Err_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)(__right_value677=list$1sType$ph$p_operator_load_element(param_types_694,n_706)))&&((struct sType*)(__right_value678=list$1sType$ph$p_operator_load_element(param_types_694,n_706)))->mHeap&&come_value_705->type->mHeap)),            come_call_finalizer3(__right_value677,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value678,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)(__right_value679=list$1sType$ph$p_operator_load_element(param_types_694,n_706))),come_value_705->type,come_value_705,info,(_Bool)1);
                come_call_finalizer3(__right_value679,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_698,n_706,(struct CVALUE*)come_increment_ref_count(come_value_705));
            come_call_finalizer3(come_value_705,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_702 = come_decrement_ref_count2(label_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_703) ? node_703 = come_decrement_ref_count2(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_720=0;
    for(    o2_saved_721=(params_531),it_722=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_721));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_721));    it_722=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_721))    ){
        multiple_assign_var16=it_722;
        label_723=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_724=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_671->mVarArgs||string_operator_equals(fun_name_530,"__builtin_va_start")) {
            Value_725=node_compile(node_724,info);
            if(            !Value_725) {
                __result_obj__417 = (_Bool)0;
                (label_723 = come_decrement_ref_count2(label_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_724) ? node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__417;
            }
            else {
            }
            come_value_726=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value681=list$1CVALUE$ph$p_operator_load_element(come_params_698,i_720)))==((void*)0))),                come_call_finalizer3(__right_value681,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_720++;
                }
            }
            list$1CVALUE$ph$p_replace(come_params_698,i_720,(struct CVALUE*)come_increment_ref_count(come_value_726));
            i_720++;
            come_call_finalizer3(come_value_726,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_723) {
        }
        else {
            Value_727=node_compile(node_724,info);
            if(            !Value_727) {
                __result_obj__418 = (_Bool)0;
                (label_723 = come_decrement_ref_count2(label_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_724) ? node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__418;
            }
            else {
            }
            come_value_728=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value683=list$1CVALUE$ph$p_operator_load_element(come_params_698,i_720)))==((void*)0))),                come_call_finalizer3(__right_value683,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_720++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)(__right_value684=list$1sType$ph$p_operator_load_element(param_types_694,i_720))))),            come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value689=check_assign_type(((char*)(__right_value687=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value685=string_to_string(fun_name_530))),((char*)(__right_value686=int_to_string(i_720)))))),((struct sType*)(__right_value688=list$1sType$ph$p_operator_load_element(param_types_694,i_720))),come_value_728->type,come_value_728,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_729=multiple_assign_var17->v1;
                Err_730=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_730)),                (__right_value685 = come_decrement_ref_count2(__right_value685, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value686 = come_decrement_ref_count2(__right_value686, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value688,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value689,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result_obj__419 = (_Bool)1;
                    (Err_730 = come_decrement_ref_count2(Err_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_728,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_723 = come_decrement_ref_count2(label_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_724) ? node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__419;
                }
                else {
                }
                (Err_730 = come_decrement_ref_count2(Err_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)(__right_value690=list$1sType$ph$p_operator_load_element(param_types_694,i_720)))&&((struct sType*)(__right_value691=list$1sType$ph$p_operator_load_element(param_types_694,i_720)))->mHeap&&come_value_728->type->mHeap)),            come_call_finalizer3(__right_value690,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value691,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)(__right_value692=list$1sType$ph$p_operator_load_element(param_types_694,i_720))),come_value_728->type,come_value_728,info,(_Bool)1);
                come_call_finalizer3(__right_value692,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_698,i_720,(struct CVALUE*)come_increment_ref_count(come_value_728));
            i_720++;
            come_call_finalizer3(come_value_728,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_723 = come_decrement_ref_count2(label_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_724) ? node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value693=list$1CVALUE$ph$p_operator_load_element(come_params_698,i_720)))==((void*)0))),        come_call_finalizer3(__right_value693,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_720++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph$p_length(params_531)<list$1sType$ph$p_length(fun_671->mParamTypes)) {
        for(        ;        i_720<list$1sType$ph$p_length(fun_671->mParamTypes)-(((method_block_532)?(2):(0)));        i_720++        ){
            default_param_731=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value694=list$1char$ph$p_operator_load_element(fun_671->mParamDefaultParametors,i_720)))));
            (__right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_735=((char*)(__right_value696=list$1char$ph$p_operator_load_element(fun_671->mParamNames,i_720)));
            (__right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_731&&string_operator_not_equals(default_param_731,"")&&((struct CVALUE*)(__right_value697=list$1CVALUE$ph$p_operator_load_element(come_params_698,i_720)))==((void*)0))),            come_call_finalizer3(__right_value697,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional21) {
                source_736=(struct buffer*)come_increment_ref_count(info->source);
                p_737=info->p;
                head_738=info->head;
                sline_739=info->sline;
                __dec_obj166=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_731));
                come_call_finalizer3(__dec_obj166,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_740=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_741=node_compile(node_740,info);
                if(                !Value_741) {
                    __result_obj__422 = (_Bool)0;
                    come_call_finalizer3(source_736,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_740) ? node_740 = come_decrement_ref_count2(node_740, ((struct sNode*)node_740)->finalize, ((struct sNode*)node_740)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_731 = come_decrement_ref_count2(default_param_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__422;
                }
                else {
                }
                __dec_obj167=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_736);
                come_call_finalizer3(__dec_obj167,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_737;
                info->head=head_738;
                info->sline=sline_739;
                come_value_742=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)(__right_value701=list$1sType$ph$p_operator_load_element(param_types_694,i_720))))),                come_call_finalizer3(__right_value701,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value706=check_assign_type(((char*)(__right_value704=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value702=string_to_string(fun_name_530))),((char*)(__right_value703=int_to_string(i_720)))))),((struct sType*)(__right_value705=list$1sType$ph$p_operator_load_element(param_types_694,i_720))),come_value_742->type,come_value_742,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_8_743=multiple_assign_var18->v1;
                    Err_744=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_744)),                    (__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value705,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value706,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional23) {
                        __result_obj__423 = (_Bool)1;
                        (Err_744 = come_decrement_ref_count2(Err_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(source_736,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_740) ? node_740 = come_decrement_ref_count2(node_740, ((struct sNode*)node_740)->finalize, ((struct sNode*)node_740)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(come_value_742,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (default_param_731 = come_decrement_ref_count2(default_param_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__423;
                    }
                    else {
                    }
                    (Err_744 = come_decrement_ref_count2(Err_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)(__right_value707=list$1sType$ph$p_operator_load_element(param_types_694,i_720)))&&((struct sType*)(__right_value708=list$1sType$ph$p_operator_load_element(param_types_694,i_720)))->mHeap&&come_value_742->type->mHeap)),                come_call_finalizer3(__right_value707,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value708,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)(__right_value709=list$1sType$ph$p_operator_load_element(param_types_694,i_720))),come_value_742->type,come_value_742,info,(_Bool)1);
                    come_call_finalizer3(__right_value709,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_698,i_720,(struct CVALUE*)come_increment_ref_count(come_value_742));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_736,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_740) ? node_740 = come_decrement_ref_count2(node_740, ((struct sNode*)node_740)->finalize, ((struct sNode*)node_740)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_742,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value710=list$1CVALUE$ph$p_operator_load_element(come_params_698,i_720)))==((void*)0))),                come_call_finalizer3(__right_value710,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value711=err_msg(info,"require parametor(%s)(1) %d",fun_671->mName,i_720)));
                    come_exception_var_9_745=multiple_assign_var19->v1;
                    Err_746=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_746)),                    come_call_finalizer3(__right_value711,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional26) {
                        __result_obj__424 = (_Bool)1;
                        (Err_746 = come_decrement_ref_count2(Err_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_731 = come_decrement_ref_count2(default_param_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__424;
                    }
                    else {
                    }
                    (Err_746 = come_decrement_ref_count2(Err_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_731 = come_decrement_ref_count2(default_param_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph$p_length(fun_671->mParamTypes)-(((method_block_532)?(2):(0)))!=list$1CVALUE$ph$p_length(come_params_698)&&!fun_671->mVarArgs&&string_operator_not_equals(fun_name_530,"__builtin_va_start")&&string_operator_not_equals(fun_name_530,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value712=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_530,list$1sType$ph$p_length(fun_671->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_531))));
        come_exception_var_10_747=multiple_assign_var20->v1;
        Err_748=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_748)),        come_call_finalizer3(__right_value712,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result_obj__425 = (_Bool)1;
            (Err_748 = come_decrement_ref_count2(Err_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__425;
        }
        else {
        }
        (Err_748 = come_decrement_ref_count2(Err_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_532) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1237, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value714=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1237, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_749=(struct sNode*)come_increment_ref_count(_inf_value3);
        come_call_finalizer3(__right_value714,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_751=node_compile(current_stack_frame_node_749,info);
        if(        !Value_751) {
            __result_obj__428 = (_Bool)0;
            ((current_stack_frame_node_749) ? current_stack_frame_node_749 = come_decrement_ref_count2(current_stack_frame_node_749, ((struct sNode*)current_stack_frame_node_749)->finalize, ((struct sNode*)current_stack_frame_node_749)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__428;
        }
        else {
        }
        come_value_752=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph$p_push_back(come_params_698,(struct CVALUE*)come_increment_ref_count(come_value_752));
        dec_stack_ptr(1,info);
        method_block2_753=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1247, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        method_block_type_754=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value721=list$1sType$ph$p_operator_load_element(fun_671->mParamTypes,-1)))));
        come_call_finalizer3(__right_value721,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_755=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value724=list$1sType$ph$p_operator_load_element(method_block_type_754->mParamTypes,0)))->mClass=((struct sClass*)(__right_value725=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_755)));
        come_call_finalizer3(__right_value724,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value725,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_759=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value726=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_755)));
        come_call_finalizer3(__right_value726,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_754->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value727=err_msg(info,"This function does not have method block(%s)",fun_name_530)));
            come_exception_var_11_760=multiple_assign_var21->v1;
            Err_761=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_761)),            come_call_finalizer3(__right_value727,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional28) {
                __result_obj__433 = (_Bool)1;
                (Err_761 = come_decrement_ref_count2(Err_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_749) ? current_stack_frame_node_749 = come_decrement_ref_count2(current_stack_frame_node_749, ((struct sNode*)current_stack_frame_node_749)->finalize, ((struct sNode*)current_stack_frame_node_749)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_755 = come_decrement_ref_count2(class_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__433;
            }
            else {
            }
            (Err_761 = come_decrement_ref_count2(Err_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_762=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_754->mResultType));
        result_type_762->mStatic=(_Bool)0;
        param_types_763=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_block_type_754->mParamTypes));
        param_names_764=method_block_type_754->mParamNames;
        all_alhabet_sname_765=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1269, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        {
            p_766=info->sname;
            while(*p_766) {
                if(                xisalnum(*p_766)) {
                    buffer_append_char(all_alhabet_sname_765,*p_766++);
                }
                else {
                    p_766++;
                }
            }
        }
        buffer_append_format(method_block2_753,"%s fun_block%d_%s(",((char*)(__right_value732=make_type_name_string(result_type_762,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value733=buffer_to_string(all_alhabet_sname_765))));
        (__right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_720=0;
        for(        o2_saved_767=(struct list$1sType$ph*)come_increment_ref_count((param_types_763)),it_768=list$1sType$ph$p_begin((o2_saved_767));        !list$1sType$ph$p_end((o2_saved_767));        it_768=list$1sType$ph$p_next((o2_saved_767))        ){
            param_type_769=it_768;
            if(            i_720==0) {
                param_name_770=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_753,"%s",((char*)(__right_value735=make_define_var(param_type_769,param_name_770,(_Bool)0,info))));
                (__right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_770 = come_decrement_ref_count2(param_name_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_720==1) {
                param_name_771=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_753,"%s",((char*)(__right_value737=make_define_var_no_solved(param_type_769,param_name_771,(_Bool)0,(_Bool)1,info))));
                (__right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_771 = come_decrement_ref_count2(param_name_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_772=(char*)come_increment_ref_count(xsprintf("it%d",i_720));
                buffer_append_format(method_block2_753,"%s",((char*)(__right_value739=make_define_var_no_solved(param_type_769,param_name_772,(_Bool)0,(_Bool)1,info))));
                (__right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_772 = come_decrement_ref_count2(param_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_720!=list$1sType$ph$p_length(param_types_763)-1) {
                buffer_append_str(method_block2_753,",");
            }
            i_720++;
        }
        come_call_finalizer3(o2_saved_767,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_753,")\n");
        buffer_append_str(method_block2_753,((char*)(__right_value740=buffer_to_string(method_block_532))));
        (__right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_773=(struct buffer*)come_increment_ref_count(info->source);
        p_774=info->p;
        head_775=info->head;
        sline_776=info->sline;
        __dec_obj169=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_753);
        come_call_finalizer3(__dec_obj169,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_533;
        node_777=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_778=node_compile(node_777,info);
        if(        !Value_778) {
            __result_obj__434 = (_Bool)0;
            ((current_stack_frame_node_749) ? current_stack_frame_node_749 = come_decrement_ref_count2(current_stack_frame_node_749, ((struct sNode*)current_stack_frame_node_749)->finalize, ((struct sNode*)current_stack_frame_node_749)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_755 = come_decrement_ref_count2(class_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_763,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_777) ? node_777 = come_decrement_ref_count2(node_777, ((struct sNode*)node_777)->finalize, ((struct sNode*)node_777)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__434;
        }
        else {
        }
        method_block_name_779=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value742=buffer_to_string(all_alhabet_sname_765)))));
        (__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_780=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1334, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun2_781=((struct sFun*)(__right_value747=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value746=__builtin_string(method_block_name_779))),((void*)0))));
        (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value747,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_781==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value748=err_msg(info,"method block function not found(%s)",method_block_name_779)));
            come_exception_var_12_782=multiple_assign_var22->v1;
            Err_783=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_783)),            come_call_finalizer3(__right_value748,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional29) {
                __result_obj__435 = (_Bool)1;
                (Err_783 = come_decrement_ref_count2(Err_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_749) ? current_stack_frame_node_749 = come_decrement_ref_count2(current_stack_frame_node_749, ((struct sNode*)current_stack_frame_node_749)->finalize, ((struct sNode*)current_stack_frame_node_749)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_755 = come_decrement_ref_count2(class_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_763,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_777) ? node_777 = come_decrement_ref_count2(node_777, ((struct sNode*)node_777)->finalize, ((struct sNode*)node_777)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_779 = come_decrement_ref_count2(method_block_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value2_780,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__435;
            }
            else {
            }
            (Err_783 = come_decrement_ref_count2(Err_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_784=fun2_781->mLambdaType;
        __dec_obj170=come_value2_780->c_value;
        come_value2_780->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_779));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj171=come_value2_780->type;
        come_value2_780->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_784));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_780->var=((void*)0);
        list$1CVALUE$ph$p_push_back(come_params_698,(struct CVALUE*)come_increment_ref_count(come_value2_780));
        __dec_obj172=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_773);
        come_call_finalizer3(__dec_obj172,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_774;
        info->head=head_775;
        info->sline=sline_776;
        info->current_stack_frame_struct=current_stack_frame_struct_759;
        ((current_stack_frame_node_749) ? current_stack_frame_node_749 = come_decrement_ref_count2(current_stack_frame_node_749, ((struct sNode*)current_stack_frame_node_749)->finalize, ((struct sNode*)current_stack_frame_node_749)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_755 = come_decrement_ref_count2(class_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_763,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_777) ? node_777 = come_decrement_ref_count2(node_777, ((struct sNode*)node_777)->finalize, ((struct sNode*)node_777)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_779 = come_decrement_ref_count2(method_block_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_780,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_785=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1360, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_785,fun_name_530);
    buffer_append_str(buf_785,"(");
    j_786=0;
    for(    o2_saved_787=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_698)),it_788=list$1CVALUE$ph$p_begin((o2_saved_787));    !list$1CVALUE$ph$p_end((o2_saved_787));    it_788=list$1CVALUE$ph$p_next((o2_saved_787))    ){
        buffer_append_str(buf_785,it_788->c_value);
        if(        j_786!=list$1CVALUE$ph$p_length(come_params_698)-1) {
            buffer_append_str(buf_785,",");
        }
        j_786++;
    }
    come_call_finalizer3(o2_saved_787,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_785,")");
    come_value_789=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1377, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj173=come_value_789->c_value;
    come_value_789->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_785));
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj174=come_value_789->type;
    come_value_789->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_686));
    come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_789->type->mStatic=(_Bool)0;
    come_value_789->var=((void*)0);
    if(    fun_671->mResultType->mHeap) {
        append_object_to_right_values2(come_value_789,(struct sType*)come_increment_ref_count(result_type_686),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_530,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_530,"null_check")&&string_operator_not_equals(fun_name_530,"come_push_stackframe")&&string_operator_not_equals(fun_name_530,"come_pop_stackframe")) {
            __dec_obj175=come_value_789->c_value;
            come_value_789->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_789->c_value,come_value_789->type,info));
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_686->mGuardValue&&result_type_686->mPointerNum>0) {
        __dec_obj176=come_value_789->c_value;
        come_value_789->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value758=make_type_name_string(result_type_686,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_789->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj177=come_value_789;
    come_value_789=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_789),info));
    come_call_finalizer3(__dec_obj177,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    add_come_last_code(info,"%s",come_value_789->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_789));
    info->calling_fun=fun_671;
    __result_obj__436 = (_Bool)1;
    (fun_name_530 = come_decrement_ref_count2(fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_698,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_785,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_789,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__436;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__339;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_522;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_523;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__344;
    if(    self==((void*)0)) {
        __result_obj__339 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__339,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__339;
    }
    result_522=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1404, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_523=self->head;
    while(it_523!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_522,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_523->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_522,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_523->item)));
        }
        it_523=it_523->next;
    }
    __result_obj__344 = come_increment_ref_count(result_522);
    come_call_finalizer3(result_522,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__344,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__344;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_520;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_521;
    it_520=self->head;
    while(it_520!=((void*)0)) {
        prev_it_521=it_520;
        it_520=it_520->next;
        come_call_finalizer3(prev_it_521,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__340;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__340 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__340,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__340;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value450 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_524;
struct tuple2$2char$phsNode$ph* __dec_obj91;
void* __right_value451 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_525;
struct tuple2$2char$phsNode$ph* __dec_obj92;
void* __right_value452 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_526;
struct tuple2$2char$phsNode$ph* __dec_obj93;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__341;
    if(    self->len==0) {
        litem_524=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value450=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1423, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_524->prev=((void*)0);
        litem_524->next=((void*)0);
        __dec_obj91=litem_524->item;
        litem_524->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_524;
        self->head=litem_524;
    }
    else if(    self->len==1) {
        litem_525=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value451=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1433, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_525->prev=self->head;
        litem_525->next=((void*)0);
        __dec_obj92=litem_525->item;
        litem_525->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_525;
        self->head->next=litem_525;
    }
    else {
        litem_526=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value452=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1443, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_526->prev=self->tail;
        litem_526->next=((void*)0);
        __dec_obj93=litem_526->item;
        litem_526->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_526;
        self->tail=litem_526;
    }
    self->len++;
    __result_obj__341 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__341;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__342;
void* __right_value453 = (void*)0;
struct tuple2$2char$phsNode$ph* result_527;
void* __right_value454 = (void*)0;
char* __dec_obj94;
void* __right_value455 = (void*)0;
struct sNode* __dec_obj95;
struct tuple2$2char$phsNode$ph* __result_obj__343;
    if(    self==(void*)0) {
        __result_obj__342 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__342,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__342;
    }
    result_527=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj94=result_527->v1;
        result_527->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj95=result_527->v2;
        result_527->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__343 = come_increment_ref_count(result_527);
    come_call_finalizer3(result_527,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__343,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__343;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_528;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_529;
    it_528=self->head;
    while(it_528!=((void*)0)) {
        prev_it_529=it_528;
        it_528=it_528->next;
        come_call_finalizer3(prev_it_529,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__348;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__348 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__348,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__348;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_540;
struct list_item$1CVALUE$ph* prev_it_541;
    it_540=self->head;
    while(it_540!=((void*)0)) {
        prev_it_541=it_540;
        it_540=it_540->next;
        come_call_finalizer3(prev_it_541,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_546;
struct tuple2$2char$phsNode$ph* __result_obj__350;
struct tuple2$2char$phsNode$ph* __result_obj__351;
struct tuple2$2char$phsNode$ph* result_547;
struct tuple2$2char$phsNode$ph* __result_obj__352;
result_546 = (void*)0;
result_547 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_546,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__350 = result_546;
        return __result_obj__350;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__351 = self->it->item;
        return __result_obj__351;
    }
    memset(&result_547,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__352 = result_547;
    return __result_obj__352;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_549;
struct tuple2$2char$phsNode$ph* __result_obj__353;
struct tuple2$2char$phsNode$ph* __result_obj__354;
struct tuple2$2char$phsNode$ph* result_550;
struct tuple2$2char$phsNode$ph* __result_obj__355;
result_549 = (void*)0;
result_550 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_549,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__353 = result_549;
        return __result_obj__353;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__354 = self->it->item;
        return __result_obj__354;
    }
    memset(&result_550,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__355 = result_550;
    return __result_obj__355;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_555;
int i_556;
struct sType* __result_obj__357;
struct sType* default_value_557;
struct sType* __result_obj__358;
default_value_557 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_555=self->head;
    i_556=0;
    while(it_555!=((void*)0)) {
        if(        position==i_556) {
            __result_obj__357 = come_increment_ref_count(it_555->item);
            come_call_finalizer3(__result_obj__357,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__357;
        }
        it_555=it_555->next;
        i_556++;
    }
    memset(&default_value_557,0,sizeof(struct sType*));
    __result_obj__358 = come_increment_ref_count(default_value_557);
    come_call_finalizer3(default_value_557,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__358,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__358;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_563;
struct CVALUE* __result_obj__360;
struct CVALUE* __result_obj__361;
struct CVALUE* result_564;
struct CVALUE* __result_obj__362;
result_563 = (void*)0;
result_564 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_563,0,sizeof(struct CVALUE*));
        __result_obj__360 = result_563;
        return __result_obj__360;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__361 = self->it->item;
        return __result_obj__361;
    }
    memset(&result_564,0,sizeof(struct CVALUE*));
    __result_obj__362 = result_564;
    return __result_obj__362;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_566;
struct CVALUE* __result_obj__363;
struct CVALUE* __result_obj__364;
struct CVALUE* result_567;
struct CVALUE* __result_obj__365;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_566,0,sizeof(struct CVALUE*));
        __result_obj__363 = result_566;
        return __result_obj__363;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__364 = self->it->item;
        return __result_obj__364;
    }
    memset(&result_567,0,sizeof(struct CVALUE*));
    __result_obj__365 = result_567;
    return __result_obj__365;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_570;
unsigned int it_571;
struct sGenericsFun* __result_obj__367;
struct sGenericsFun* __result_obj__368;
struct sGenericsFun* __result_obj__369;
struct sGenericsFun* __result_obj__370;
    hash_570=string_get_hash_key(((char*)key))%self->size;
    it_571=hash_570;
    while((_Bool)1) {
        if(        self->item_existance[it_571]) {
            if(            string_equals(self->keys[it_571],key)) {
                __result_obj__367 = come_increment_ref_count(self->items[it_571]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__367,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__367;
            }
            it_571++;
            if(            it_571>=self->size) {
                it_571=0;
            }
            else if(            it_571==hash_570) {
                __result_obj__368 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__368,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__368;
            }
        }
        else {
            __result_obj__369 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__369,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__369;
        }
    }
    __result_obj__370 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__370,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
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

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_578;
unsigned int it_579;
struct sFun* __result_obj__371;
struct sFun* __result_obj__372;
struct sFun* __result_obj__373;
struct sFun* __result_obj__374;
    hash_578=string_get_hash_key(((char*)key))%self->size;
    it_579=hash_578;
    while((_Bool)1) {
        if(        self->item_existance[it_579]) {
            if(            string_equals(self->keys[it_579],key)) {
                __result_obj__371 = come_increment_ref_count(self->items[it_579]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__371,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__371;
            }
            it_579++;
            if(            it_579>=self->size) {
                it_579=0;
            }
            else if(            it_579==hash_578) {
                __result_obj__372 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__372,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__372;
            }
        }
        else {
            __result_obj__373 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__373,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__373;
        }
    }
    __result_obj__374 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__374,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__374;
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

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_584;
int i_585;
struct CVALUE* __result_obj__376;
struct CVALUE* default_value_586;
struct CVALUE* __result_obj__377;
default_value_586 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_584=self->head;
    i_585=0;
    while(it_584!=((void*)0)) {
        if(        position==i_585) {
            __result_obj__376 = come_increment_ref_count(it_584->item);
            come_call_finalizer3(__result_obj__376,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__376;
        }
        it_584=it_584->next;
        i_585++;
    }
    memset(&default_value_586,0,sizeof(struct CVALUE*));
    __result_obj__377 = come_increment_ref_count(default_value_586);
    come_call_finalizer3(default_value_586,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__377,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__377;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_592;
int i_593;
struct sType* default_value_594;
struct list$1sType$ph* __result_obj__379;
struct list_item$1sType$ph* it_598;
int i_599;
struct sType* __dec_obj104;
struct list$1sType$ph* __result_obj__380;
default_value_594 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_592=self->len;
        for(        i_593=0;        i_593<position-len_592;        i_593++        ){
            memset(&default_value_594,0,sizeof(struct sType*));
            list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(default_value_594));
            come_call_finalizer3(default_value_594,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__379 = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__379;
    }
    it_598=self->head;
    i_599=0;
    while(it_598!=((void*)0)) {
        if(        position==i_599) {
            __dec_obj104=it_598->item;
            it_598->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_598=it_598->next;
        i_599++;
    }
    __result_obj__380 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__380;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value493 = (void*)0;
struct list_item$1sType$ph* litem_595;
struct sType* __dec_obj101;
void* __right_value494 = (void*)0;
struct list_item$1sType$ph* litem_596;
struct sType* __dec_obj102;
void* __right_value495 = (void*)0;
struct list_item$1sType$ph* litem_597;
struct sType* __dec_obj103;
struct list$1sType$ph* __result_obj__378;
    if(    self->len==0) {
        litem_595=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value493=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1493, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_595->prev=((void*)0);
        litem_595->next=((void*)0);
        __dec_obj101=litem_595->item;
        litem_595->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_595;
        self->head=litem_595;
    }
    else if(    self->len==1) {
        litem_596=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value494=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1503, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_596->prev=self->head;
        litem_596->next=((void*)0);
        __dec_obj102=litem_596->item;
        litem_596->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_596;
        self->head->next=litem_596;
    }
    else {
        litem_597=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value495=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1513, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_597->prev=self->tail;
        litem_597->next=((void*)0);
        __dec_obj103=litem_597->item;
        litem_597->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_597;
        self->tail=litem_597;
    }
    self->len++;
    __result_obj__378 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__378;
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_602;
struct sType* __result_obj__381;
struct sType* __result_obj__382;
struct sType* result_603;
struct sType* __result_obj__383;
result_602 = (void*)0;
result_603 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_602,0,sizeof(struct sType*));
        __result_obj__381 = result_602;
        return __result_obj__381;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__382 = self->it->item;
        return __result_obj__382;
    }
    memset(&result_603,0,sizeof(struct sType*));
    __result_obj__383 = result_603;
    return __result_obj__383;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_605;
struct sType* __result_obj__384;
struct sType* __result_obj__385;
struct sType* result_606;
struct sType* __result_obj__386;
result_605 = (void*)0;
result_606 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_605,0,sizeof(struct sType*));
        __result_obj__384 = result_605;
        return __result_obj__384;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__385 = self->it->item;
        return __result_obj__385;
    }
    memset(&result_606,0,sizeof(struct sType*));
    __result_obj__386 = result_606;
    return __result_obj__386;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value502 = (void*)0;
struct list_item$1CVALUE$ph* litem_617;
struct CVALUE* __dec_obj105;
void* __right_value503 = (void*)0;
struct list_item$1CVALUE$ph* litem_618;
struct CVALUE* __dec_obj106;
void* __right_value504 = (void*)0;
struct list_item$1CVALUE$ph* litem_619;
struct CVALUE* __dec_obj107;
struct list$1CVALUE$ph* __result_obj__388;
    if(    self->len==0) {
        litem_617=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value502=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1423, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_617->prev=((void*)0);
        litem_617->next=((void*)0);
        __dec_obj105=litem_617->item;
        litem_617->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_617;
        self->head=litem_617;
    }
    else if(    self->len==1) {
        litem_618=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value503=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1433, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_618->prev=self->head;
        litem_618->next=((void*)0);
        __dec_obj106=litem_618->item;
        litem_618->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_618;
        self->head->next=litem_618;
    }
    else {
        litem_619=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value504=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1443, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_619->prev=self->tail;
        litem_619->next=((void*)0);
        __dec_obj107=litem_619->item;
        litem_619->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_619;
        self->tail=litem_619;
    }
    self->len++;
    __result_obj__388 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__388;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_625;
unsigned int it_626;
struct map$2char$phsFun$ph* __result_obj__389;
    hash_625=string_get_hash_key(((char*)key))%self->size;
    it_626=hash_625;
    while((_Bool)1) {
        if(        self->item_existance[it_626]) {
            if(            string_equals(self->keys[it_626],key)) {
                list$1char$p$p_remove(self->key_list,self->keys[it_626]);
                self->item_existance[it_626]=(_Bool)0;
                if(                1) {
                    (self->keys[it_626] = come_decrement_ref_count2(self->keys[it_626], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_626]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_626],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_626]=((void*)0);
                self->len--;
                break;
            }
            it_626++;
            if(            it_626>=self->size) {
                it_626=0;
            }
            else if(            it_626==hash_625) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__389 = self;
    return __result_obj__389;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_663;
unsigned int hash_664;
unsigned int it_665;
struct sFun* __result_obj__394;
struct sFun* __result_obj__395;
struct sFun* __result_obj__396;
struct sFun* __result_obj__397;
default_value_663 = (void*)0;
    memset(&default_value_663,0,sizeof(struct sFun*));
    hash_664=string_get_hash_key(((char*)key))%self->size;
    it_665=hash_664;
    while((_Bool)1) {
        if(        self->item_existance[it_665]) {
            if(            string_equals(self->keys[it_665],key)) {
                __result_obj__394 = come_increment_ref_count(self->items[it_665]);
                come_call_finalizer3(default_value_663,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__394,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__394;
            }
            it_665++;
            if(            it_665>=self->size) {
                it_665=0;
            }
            else if(            it_665==hash_664) {
                __result_obj__395 = come_increment_ref_count(default_value_663);
                come_call_finalizer3(default_value_663,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__395,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__395;
            }
        }
        else {
            __result_obj__396 = come_increment_ref_count(default_value_663);
            come_call_finalizer3(default_value_663,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__396,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__396;
        }
    }
    __result_obj__397 = come_increment_ref_count(default_value_663);
    come_call_finalizer3(default_value_663,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__397,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__397;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__401;
void* __right_value650 = (void*)0;
struct sFunCallNode* result_689;
void* __right_value651 = (void*)0;
char* __dec_obj159;
void* __right_value652 = (void*)0;
char* __dec_obj160;
void* __right_value653 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj161;
void* __right_value654 = (void*)0;
struct list$1sType$ph* __dec_obj162;
void* __right_value655 = (void*)0;
struct buffer* __dec_obj163;
struct sFunCallNode* __result_obj__402;
    if(    self==(void*)0) {
        __result_obj__401 = (void*)0;
        return __result_obj__401;
    }
    result_689=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_689->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_689->sname;
        result_689->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj160=result_689->fun_name;
        result_689->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj161=result_689->params;
        result_689->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj161,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj162=result_689->method_generics_types;
        result_689->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj162,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj163=result_689->method_block;
        result_689->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->method_block_sline=self->method_block_sline;
    }
    __result_obj__402 = result_689;
    come_call_finalizer3(result_689,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__402;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_708;
char* __result_obj__408;
char* __result_obj__409;
char* result_709;
char* __result_obj__410;
result_708 = (void*)0;
result_709 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_708,0,sizeof(char*));
        __result_obj__408 = result_708;
        return __result_obj__408;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__409 = self->it->item;
        return __result_obj__409;
    }
    memset(&result_709,0,sizeof(char*));
    __result_obj__410 = result_709;
    return __result_obj__410;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_711;
char* __result_obj__411;
char* __result_obj__412;
char* result_712;
char* __result_obj__413;
result_711 = (void*)0;
result_712 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_711,0,sizeof(char*));
        __result_obj__411 = result_711;
        return __result_obj__411;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__412 = self->it->item;
        return __result_obj__412;
    }
    memset(&result_712,0,sizeof(char*));
    __result_obj__413 = result_712;
    return __result_obj__413;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_715;
int i_716;
struct CVALUE* default_value_717;
struct list$1CVALUE$ph* __result_obj__415;
struct list_item$1CVALUE$ph* it_718;
int i_719;
struct CVALUE* __dec_obj165;
struct list$1CVALUE$ph* __result_obj__416;
default_value_717 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_715=self->len;
        for(        i_716=0;        i_716<position-len_715;        i_716++        ){
            memset(&default_value_717,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_717));
            come_call_finalizer3(default_value_717,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__415 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__415;
    }
    it_718=self->head;
    i_719=0;
    while(it_718!=((void*)0)) {
        if(        position==i_719) {
            __dec_obj165=it_718->item;
            it_718->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj165,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_718=it_718->next;
        i_719++;
    }
    __result_obj__416 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__416;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_732;
int i_733;
char* __result_obj__420;
char* default_value_734;
char* __result_obj__421;
default_value_734 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_732=self->head;
    i_733=0;
    while(it_732!=((void*)0)) {
        if(        position==i_733) {
            __result_obj__420 = come_increment_ref_count(it_732->item);
            (__result_obj__420 = come_decrement_ref_count2(__result_obj__420, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__420;
        }
        it_732=it_732->next;
        i_733++;
    }
    memset(&default_value_734,0,sizeof(char*));
    __result_obj__421 = come_increment_ref_count(default_value_734);
    (default_value_734 = come_decrement_ref_count2(default_value_734, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__421 = come_decrement_ref_count2(__result_obj__421, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__421;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__426;
void* __right_value715 = (void*)0;
struct sCurrentNode2* result_750;
void* __right_value716 = (void*)0;
char* __dec_obj168;
struct sCurrentNode2* __result_obj__427;
    if(    self==(void*)0) {
        __result_obj__426 = (void*)0;
        return __result_obj__426;
    }
    result_750=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_750->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_750->sname;
        result_750->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_750->sline_real=self->sline_real;
    }
    __result_obj__427 = result_750;
    come_call_finalizer3(result_750,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__427;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_756;
unsigned int hash_757;
unsigned int it_758;
struct sClass* __result_obj__429;
struct sClass* __result_obj__430;
struct sClass* __result_obj__431;
struct sClass* __result_obj__432;
default_value_756 = (void*)0;
    memset(&default_value_756,0,sizeof(struct sClass*));
    hash_757=string_get_hash_key(((char*)key))%self->size;
    it_758=hash_757;
    while((_Bool)1) {
        if(        self->item_existance[it_758]) {
            if(            string_equals(self->keys[it_758],key)) {
                __result_obj__429 = come_increment_ref_count(self->items[it_758]);
                come_call_finalizer3(default_value_756,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__429,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__429;
            }
            it_758++;
            if(            it_758>=self->size) {
                it_758=0;
            }
            else if(            it_758==hash_757) {
                __result_obj__430 = come_increment_ref_count(default_value_756);
                come_call_finalizer3(default_value_756,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__430,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__430;
            }
        }
        else {
            __result_obj__431 = come_increment_ref_count(default_value_756);
            come_call_finalizer3(default_value_756,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__431,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__431;
        }
    }
    __result_obj__432 = come_increment_ref_count(default_value_756);
    come_call_finalizer3(default_value_756,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__432,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__432;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value761 = (void*)0;
struct buffer* __dec_obj178;
struct sComeCallNode* __result_obj__437;
    ((struct sNodeBase*)(__right_value761=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value761,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj178=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj178,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__437 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__437,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__437;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value762 = (void*)0;
char* __result_obj__438;
    __result_obj__438 = come_increment_ref_count(((char*)(__right_value762=__builtin_string("sComeCallNode"))));
    (__right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__438 = come_decrement_ref_count2(__result_obj__438, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__438;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_790;
struct buffer* come_block_791;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct list$1CVALUE$ph* come_params_792;
void* __right_value765 = (void*)0;
char* var_name_794;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sType* type__795;
void* __right_value769 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_798=0;
char* Err_799=0;
_Bool _if_conditional30;
_Bool __result_obj__443;
void* __right_value770 = (void*)0;
struct sNode* var_node_800;
_Bool Value_801;
_Bool __result_obj__444;
void* __right_value771 = (void*)0;
struct CVALUE* thread_var_value_802;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct CVALUE* come_value_803;
void* __right_value774 = (void*)0;
char* __dec_obj179;
struct sType* __dec_obj180;
void* __right_value775 = (void*)0;
struct sNode* null_node_804;
_Bool Value_805;
_Bool __result_obj__445;
void* __right_value776 = (void*)0;
struct CVALUE* __dec_obj181;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value779 = (void*)0;
struct sNode* current_stack_frame_node_806;
_Bool Value_807;
_Bool __result_obj__446;
void* __right_value780 = (void*)0;
struct CVALUE* current_stack_frame_value_808;
void* __right_value781 = (void*)0;
char* fun_name_809;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct buffer* come_block2_810;
void* __right_value784 = (void*)0;
char* class_name_811;
void* __right_value785 = (void*)0;
struct sClass* current_stack_frame_struct_812;
void* __right_value786 = (void*)0;
struct buffer* source3_813;
char* p_814;
char* head_815;
int sline_816;
struct buffer* __dec_obj182;
void* __right_value787 = (void*)0;
struct sNode* node_817;
_Bool Value_818;
_Bool __result_obj__447;
struct buffer* __dec_obj183;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct CVALUE* fun_value_819;
void* __right_value790 = (void*)0;
char* __dec_obj184;
struct sType* __dec_obj185;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct buffer* buf_820;
void* __right_value793 = (void*)0;
char* fun_name_821;
int j_822;
struct list$1CVALUE$ph* o2_saved_823;
struct CVALUE* it_824;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct CVALUE* come_value_825;
void* __right_value796 = (void*)0;
char* __dec_obj186;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sType* type_826;
void* __right_value800 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_827=0;
char* Err_828=0;
_Bool _if_conditional31;
_Bool __result_obj__448;
struct sType* __dec_obj187;
_Bool __result_obj__449;
    come_block_sline_790=self->come_block_sline;
    come_block_791=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_792=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1434, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int thread_num_793=0;
    thread_num_793++;
    var_name_794=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_793));
    type__795=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value767=map$2char$phsType$ph$p_at(info->types,((char*)(__right_value766=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value767,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__795==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value769=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_798=multiple_assign_var23->v1;
        Err_799=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_799)),        come_call_finalizer3(__right_value769,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional30) {
            __result_obj__443 = (_Bool)1;
            (Err_799 = come_decrement_ref_count2(Err_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_792,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_794 = come_decrement_ref_count2(var_name_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__795,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__443;
        }
        else {
        }
        (Err_799 = come_decrement_ref_count2(Err_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_800=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_794),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__795),(_Bool)1,((void*)0),info));
    Value_801=node_compile(var_node_800,info);
    if(    !Value_801) {
        __result_obj__444 = (_Bool)0;
        come_call_finalizer3(come_block_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_792,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_794 = come_decrement_ref_count2(var_name_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__795,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_800) ? var_node_800 = come_decrement_ref_count2(var_node_800, ((struct sNode*)var_node_800)->finalize, ((struct sNode*)var_node_800)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__444;
    }
    else {
    }
    thread_var_value_802=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_803=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1458, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj179=come_value_803->c_value;
    come_value_803->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_802->c_value));
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj180=come_value_803->type;
    come_value_803->type=(struct sType*)come_increment_ref_count(thread_var_value_802->type);
    come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_803->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_792,(struct CVALUE*)come_increment_ref_count(come_value_803));
    null_node_804=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_805=node_compile(null_node_804,info);
    if(    !Value_805) {
        __result_obj__445 = (_Bool)0;
        come_call_finalizer3(come_block_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_792,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_794 = come_decrement_ref_count2(var_name_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__795,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_800) ? var_node_800 = come_decrement_ref_count2(var_node_800, ((struct sNode*)var_node_800)->finalize, ((struct sNode*)var_node_800)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_802,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_803,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_804) ? null_node_804 = come_decrement_ref_count2(null_node_804, ((struct sNode*)null_node_804)->finalize, ((struct sNode*)null_node_804)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__445;
    }
    else {
    }
    __dec_obj181=come_value_803;
    come_value_803=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj181,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUE$ph$p_push_back(come_params_792,(struct CVALUE*)come_increment_ref_count(come_value_803));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1476, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value778=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1476, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_806=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value778,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_807=node_compile(current_stack_frame_node_806,info);
    if(    !Value_807) {
        __result_obj__446 = (_Bool)0;
        come_call_finalizer3(come_block_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_792,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_794 = come_decrement_ref_count2(var_name_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__795,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_800) ? var_node_800 = come_decrement_ref_count2(var_node_800, ((struct sNode*)var_node_800)->finalize, ((struct sNode*)var_node_800)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_802,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_803,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_804) ? null_node_804 = come_decrement_ref_count2(null_node_804, ((struct sNode*)null_node_804)->finalize, ((struct sNode*)null_node_804)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_806) ? current_stack_frame_node_806 = come_decrement_ref_count2(current_stack_frame_node_806, ((struct sNode*)current_stack_frame_node_806)->finalize, ((struct sNode*)current_stack_frame_node_806)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__446;
    }
    else {
    }
    current_stack_frame_value_808=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_809=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_793));
    come_block2_810=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1487, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    class_name_811=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_810,"void* %s(%s* parent)\n",fun_name_809,class_name_811);
    buffer_append_str(come_block2_810,((char*)(__right_value785=buffer_to_string(come_block_791))));
    (__right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_812=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value786=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_811)));
    come_call_finalizer3(__right_value786,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_813=(struct buffer*)come_increment_ref_count(info->source);
    p_814=info->p;
    head_815=info->head;
    sline_816=info->sline;
    __dec_obj182=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_810);
    come_call_finalizer3(__dec_obj182,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_790;
    node_817=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_818=node_compile(node_817,info);
    if(    !Value_818) {
        __result_obj__447 = (_Bool)0;
        come_call_finalizer3(come_block_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_792,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_794 = come_decrement_ref_count2(var_name_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__795,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_800) ? var_node_800 = come_decrement_ref_count2(var_node_800, ((struct sNode*)var_node_800)->finalize, ((struct sNode*)var_node_800)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_802,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_803,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_804) ? null_node_804 = come_decrement_ref_count2(null_node_804, ((struct sNode*)null_node_804)->finalize, ((struct sNode*)null_node_804)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_806) ? current_stack_frame_node_806 = come_decrement_ref_count2(current_stack_frame_node_806, ((struct sNode*)current_stack_frame_node_806)->finalize, ((struct sNode*)current_stack_frame_node_806)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(current_stack_frame_value_808,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_809 = come_decrement_ref_count2(fun_name_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_block2_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_811 = come_decrement_ref_count2(class_name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_813,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_817) ? node_817 = come_decrement_ref_count2(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__447;
    }
    else {
    }
    __dec_obj183=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_813);
    come_call_finalizer3(__dec_obj183,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_814;
    info->head=head_815;
    info->sline=sline_816;
    info->current_stack_frame_struct=current_stack_frame_struct_812;
    fun_value_819=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1521, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj184=fun_value_819->c_value;
    fun_value_819->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_809));
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj185=come_value_803->type;
    come_value_803->type=((void*)0);
    come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_803->var=((void*)0);
    list$1CVALUE$ph$p_add(come_params_792,(struct CVALUE*)come_increment_ref_count(fun_value_819));
    list$1CVALUE$ph$p_add(come_params_792,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_808));
    buf_820=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1531, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    (fun_name_809 = come_decrement_ref_count2(fun_name_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_821=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_820,"(");
    buffer_append_str(buf_820,fun_name_821);
    buffer_append_str(buf_820,"(");
    j_822=0;
    for(    o2_saved_823=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_792)),it_824=list$1CVALUE$ph$p_begin((o2_saved_823));    !list$1CVALUE$ph$p_end((o2_saved_823));    it_824=list$1CVALUE$ph$p_next((o2_saved_823))    ){
        buffer_append_str(buf_820,it_824->c_value);
        if(        j_822!=list$1CVALUE$ph$p_length(come_params_792)-1) {
            buffer_append_str(buf_820,",");
        }
        j_822++;
    }
    come_call_finalizer3(o2_saved_823,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_820,")");
    buffer_append_str(buf_820,", ");
    buffer_append_str(buf_820,thread_var_value_802->c_value);
    buffer_append_str(buf_820,")");
    come_call_finalizer3(come_value_803,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_825=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1554, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj186=come_value_825->c_value;
    come_value_825->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_820));
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_826=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value798=map$2char$phsType$ph$p_at(info->types,((char*)(__right_value797=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value798,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_826==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value800=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_827=multiple_assign_var24->v1;
        Err_828=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_828)),        come_call_finalizer3(__right_value800,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional31) {
            __result_obj__448 = (_Bool)1;
            (Err_828 = come_decrement_ref_count2(Err_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_792,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_794 = come_decrement_ref_count2(var_name_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__795,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((var_node_800) ? var_node_800 = come_decrement_ref_count2(var_node_800, ((struct sNode*)var_node_800)->finalize, ((struct sNode*)var_node_800)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(thread_var_value_802,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((null_node_804) ? null_node_804 = come_decrement_ref_count2(null_node_804, ((struct sNode*)null_node_804)->finalize, ((struct sNode*)null_node_804)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_806) ? current_stack_frame_node_806 = come_decrement_ref_count2(current_stack_frame_node_806, ((struct sNode*)current_stack_frame_node_806)->finalize, ((struct sNode*)current_stack_frame_node_806)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(current_stack_frame_value_808,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_block2_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_811 = come_decrement_ref_count2(class_name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_813,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_817) ? node_817 = come_decrement_ref_count2(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(fun_value_819,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_821 = come_decrement_ref_count2(fun_name_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_825,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_826,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__448;
        }
        else {
        }
        (Err_828 = come_decrement_ref_count2(Err_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj187=come_value_825->type;
    come_value_825->type=(struct sType*)come_increment_ref_count(type_826);
    come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_825->var=((void*)0);
    add_come_last_code(info,"%s",come_value_825->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_825));
    __result_obj__449 = (_Bool)1;
    come_call_finalizer3(come_block_791,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_792,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_794 = come_decrement_ref_count2(var_name_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type__795,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((var_node_800) ? var_node_800 = come_decrement_ref_count2(var_node_800, ((struct sNode*)var_node_800)->finalize, ((struct sNode*)var_node_800)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(thread_var_value_802,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    ((null_node_804) ? null_node_804 = come_decrement_ref_count2(null_node_804, ((struct sNode*)null_node_804)->finalize, ((struct sNode*)null_node_804)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_806) ? current_stack_frame_node_806 = come_decrement_ref_count2(current_stack_frame_node_806, ((struct sNode*)current_stack_frame_node_806)->finalize, ((struct sNode*)current_stack_frame_node_806)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(current_stack_frame_value_808,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_811 = come_decrement_ref_count2(class_name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source3_813,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_817) ? node_817 = come_decrement_ref_count2(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(fun_value_819,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name_821 = come_decrement_ref_count2(fun_name_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_825,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_826,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__449;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_796;
unsigned int it_797;
struct sType* __result_obj__439;
struct sType* __result_obj__440;
struct sType* __result_obj__441;
struct sType* __result_obj__442;
    hash_796=string_get_hash_key(((char*)key))%self->size;
    it_797=hash_796;
    while((_Bool)1) {
        if(        self->item_existance[it_797]) {
            if(            string_equals(self->keys[it_797],key)) {
                __result_obj__439 = come_increment_ref_count(self->items[it_797]);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__439,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__439;
            }
            it_797++;
            if(            it_797>=self->size) {
                it_797=0;
            }
            else if(            it_797==hash_796) {
                __result_obj__440 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__440,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__440;
            }
        }
        else {
            __result_obj__441 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__441,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__441;
        }
    }
    __result_obj__442 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__442,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__442;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value801 = (void*)0;
struct sNode* __dec_obj188;
struct sComeJoinNode* __result_obj__450;
    ((struct sNodeBase*)(__right_value801=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value801,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj188=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__450 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__450,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__450;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value802 = (void*)0;
char* __result_obj__451;
    __result_obj__451 = come_increment_ref_count(((char*)(__right_value802=__builtin_string("sComeJoinNode"))));
    (__right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__451 = come_decrement_ref_count2(__result_obj__451, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__451;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_829;
_Bool Value_830;
_Bool __result_obj__452;
void* __right_value803 = (void*)0;
struct CVALUE* come_value_831;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct buffer* buf_832;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct CVALUE* come_value_833;
void* __right_value808 = (void*)0;
char* __dec_obj189;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sType* __dec_obj190;
_Bool __result_obj__453;
    node_829=(struct sNode*)come_increment_ref_count(self->node);
    Value_830=node_compile(node_829,info);
    if(    !Value_830) {
        __result_obj__452 = (_Bool)0;
        ((node_829) ? node_829 = come_decrement_ref_count2(node_829, ((struct sNode*)node_829)->finalize, ((struct sNode*)node_829)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__452;
    }
    else {
    }
    come_value_831=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_832=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1603, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_832,"pthread_join(");
    buffer_append_str(buf_832,come_value_831->c_value);
    buffer_append_str(buf_832,", 0)");
    come_call_finalizer3(come_value_831,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_833=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1608, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj189=come_value_833->c_value;
    come_value_833->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_832));
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj190=come_value_833->type;
    come_value_833->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),info,info));
    come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_833->var=((void*)0);
    add_come_last_code(info,"%s",come_value_833->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_833));
    __result_obj__453 = (_Bool)1;
    ((node_829) ? node_829 = come_decrement_ref_count2(node_829, ((struct sNode*)node_829)->finalize, ((struct sNode*)node_829)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(buf_832,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_833,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__453;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value812 = (void*)0;
struct list$1sNode$ph* __dec_obj191;
struct list$1sBlock$ph* __dec_obj192;
struct sBlock* __dec_obj193;
struct sComePollNode* __result_obj__454;
    ((struct sNodeBase*)(__right_value812=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value812,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj191=self->vars;
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj191,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj192=self->blocks;
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj192,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj193=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj193,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__454 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__454,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__454;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value813 = (void*)0;
char* __result_obj__455;
    __result_obj__455 = come_increment_ref_count(((char*)(__right_value813=__builtin_string("sComePollNode"))));
    (__right_value813 = come_decrement_ref_count2(__right_value813, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__455 = come_decrement_ref_count2(__result_obj__455, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__455;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_838;
struct list$1sBlock$ph* blocks_839;
int time_out_840;
int n_842;
struct list$1sNode$ph* o2_saved_843;
struct sNode* it_846;
_Bool Value_849;
_Bool __result_obj__462;
void* __right_value814 = (void*)0;
struct CVALUE* come_value_850;
int n_851;
struct list$1sNode$ph* o2_saved_852;
struct sNode* it_853;
void* __right_value815 = (void*)0;
_Bool __result_obj__465;
    vars_838=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_839=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_840=self->time_out;
    static int var_num_841=0;
    var_num_841++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_841,list$1sNode$ph$p_length(vars_838));
    n_842=0;
    for(    o2_saved_843=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_846=list$1sNode$ph$p_begin((o2_saved_843));    !list$1sNode$ph$p_end((o2_saved_843));    it_846=list$1sNode$ph$p_next((o2_saved_843))    ){
        Value_849=node_compile(it_846,info);
        if(        !Value_849) {
            __result_obj__462 = (_Bool)0;
            come_call_finalizer3(o2_saved_843,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_838,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_839,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__462;
        }
        else {
        }
        come_value_850=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_841,n_842,come_value_850->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_841,n_842,1);
        n_842++;
        come_call_finalizer3(come_value_850,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_843,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_841,var_num_841,list$1sNode$ph$p_length(vars_838),time_out_840);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_841);
    n_851=0;
    for(    o2_saved_852=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_853=list$1sNode$ph$p_begin((o2_saved_852));    !list$1sNode$ph$p_end((o2_saved_852));    it_853=list$1sNode$ph$p_next((o2_saved_852))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_841,n_851,1);
        transpile_block(((struct sBlock*)(__right_value815=list$1sBlock$ph$p_operator_load_element(blocks_839,n_851))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value815,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_851++;
    }
    come_call_finalizer3(o2_saved_852,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_841);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__465 = (_Bool)1;
    come_call_finalizer3(vars_838,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_839,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__465;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_834;
struct list_item$1sBlock$ph* prev_it_835;
    it_834=self->head;
    while(it_834!=((void*)0)) {
        prev_it_835=it_834;
        it_834=it_834->next;
        come_call_finalizer3(prev_it_835,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        come_call_finalizer3(self->vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        come_call_finalizer3(self->blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_836;
struct list_item$1sBlock$ph* prev_it_837;
    it_836=self->head;
    while(it_836!=((void*)0)) {
        prev_it_837=it_836;
        it_836=it_836->next;
        come_call_finalizer3(prev_it_837,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_844;
struct sNode* __result_obj__456;
struct sNode* __result_obj__457;
struct sNode* result_845;
struct sNode* __result_obj__458;
result_844 = (void*)0;
result_845 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_844,0,sizeof(struct sNode*));
        __result_obj__456 = result_844;
        return __result_obj__456;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__457 = self->it->item;
        return __result_obj__457;
    }
    memset(&result_845,0,sizeof(struct sNode*));
    __result_obj__458 = result_845;
    return __result_obj__458;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_847;
struct sNode* __result_obj__459;
struct sNode* __result_obj__460;
struct sNode* result_848;
struct sNode* __result_obj__461;
result_847 = (void*)0;
result_848 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_847,0,sizeof(struct sNode*));
        __result_obj__459 = result_847;
        return __result_obj__459;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__460 = self->it->item;
        return __result_obj__460;
    }
    memset(&result_848,0,sizeof(struct sNode*));
    __result_obj__461 = result_848;
    return __result_obj__461;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_854;
int i_855;
struct sBlock* __result_obj__463;
struct sBlock* default_value_856;
struct sBlock* __result_obj__464;
default_value_856 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_854=self->head;
    i_855=0;
    while(it_854!=((void*)0)) {
        if(        position==i_855) {
            __result_obj__463 = come_increment_ref_count(it_854->item);
            come_call_finalizer3(__result_obj__463,sBlock_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__463;
        }
        it_854=it_854->next;
        i_855++;
    }
    memset(&default_value_856,0,sizeof(struct sBlock*));
    __result_obj__464 = come_increment_ref_count(default_value_856);
    come_call_finalizer3(default_value_856,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__464,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__464;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value818 = (void*)0;
struct sNode* node_857;
void* __right_value819 = (void*)0;
struct sNode* __dec_obj194;
struct sNode* __result_obj__466;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1694, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value817=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1694, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_857=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value817,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj194=node_857;
    node_857=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_857),info));
    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__466 = come_increment_ref_count(node_857);
    come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_857) ? node_857 = come_decrement_ref_count2(node_857, ((struct sNode*)node_857)->finalize, ((struct sNode*)node_857)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__466) ? __result_obj__466 = come_decrement_ref_count2(__result_obj__466, ((struct sNode*)__result_obj__466)->finalize, ((struct sNode*)__result_obj__466)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__466;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value820 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value821 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj196;
struct sLambdaCall* __result_obj__467;
    ((struct sNodeBase*)(__right_value820=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value820,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj195=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj196=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj196,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__467 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__467,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__467;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value822 = (void*)0;
char* __result_obj__468;
    __result_obj__468 = come_increment_ref_count(((char*)(__right_value822=__builtin_string("sLambdaCall"))));
    (__right_value822 = come_decrement_ref_count2(__right_value822, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__468 = come_decrement_ref_count2(__result_obj__468, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__468;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_858;
struct list$1tuple2$2char$phsNode$ph$ph* params_859;
_Bool Value_860;
_Bool __result_obj__469;
void* __right_value823 = (void*)0;
struct CVALUE* come_value_861;
struct sType* lambda_type_862;
void* __right_value824 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_863=0;
char* Err_864=0;
_Bool _if_conditional32;
_Bool __result_obj__470;
void* __right_value825 = (void*)0;
struct sType* result_type_865;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct list$1CVALUE$ph* come_params_866;
void* __right_value828 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_867=0;
char* Err_868=0;
_Bool _if_conditional33;
_Bool __result_obj__471;
_Bool __result_obj__472;
int i_869;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_870;
struct tuple2$2char$phsNode$ph* it_871;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_872=0;
struct sNode* node_873=0;
_Bool Value_874;
_Bool __result_obj__473;
void* __right_value829 = (void*)0;
struct CVALUE* come_value_875;
void* __right_value830 = (void*)0;
_Bool _if_conditional34;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_876=0;
char* Err_877=0;
_Bool _if_conditional35;
_Bool __result_obj__474;
void* __right_value835 = (void*)0;
_Bool _if_conditional36;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct buffer* buf_878;
int j_879;
struct list$1CVALUE$ph* o2_saved_880;
struct CVALUE* it_881;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct CVALUE* come_value2_882;
void* __right_value841 = (void*)0;
char* __dec_obj197;
void* __right_value842 = (void*)0;
struct sType* __dec_obj198;
_Bool __result_obj__475;
    node_858=(struct sNode*)come_increment_ref_count(self->node);
    params_859=self->params;
    Value_860=node_compile(node_858,info);
    if(    !Value_860) {
        __result_obj__469 = (_Bool)0;
        ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__469;
    }
    else {
    }
    come_value_861=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_862=come_value_861->type;
    if(    lambda_type_862->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value824=err_msg(info,"invalid lambda type")));
        come_exception_var_15_863=multiple_assign_var25->v1;
        Err_864=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_864)),        come_call_finalizer3(__right_value824,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional32) {
            __result_obj__470 = (_Bool)1;
            (Err_864 = come_decrement_ref_count2(Err_864, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_861,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__470;
        }
        else {
        }
        (Err_864 = come_decrement_ref_count2(Err_864, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_865=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_862->mResultType));
    result_type_865->mStatic=(_Bool)0;
    come_params_866=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1739, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    list$1sType$ph$p_length(lambda_type_862->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_859)&&!lambda_type_862->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value828=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph$p_length(lambda_type_862->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_859))));
        come_exception_var_16_867=multiple_assign_var26->v1;
        Err_868=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_868)),        come_call_finalizer3(__right_value828,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional33) {
            __result_obj__471 = (_Bool)1;
            (Err_868 = come_decrement_ref_count2(Err_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_861,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_865,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_866,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__471;
        }
        else {
        }
        __result_obj__472 = (_Bool)0;
        (Err_868 = come_decrement_ref_count2(Err_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_861,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_865,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_866,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__472;
        (Err_868 = come_decrement_ref_count2(Err_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_869=0;
    for(    o2_saved_870=(params_859),it_871=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_870));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_870));    it_871=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_870))    ){
        multiple_assign_var27=it_871;
        label_872=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_873=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_874=node_compile(node_873,info);
        if(        !Value_874) {
            __result_obj__473 = (_Bool)0;
            (label_872 = come_decrement_ref_count2(label_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_873) ? node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_861,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_865,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_866,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__473;
        }
        else {
        }
        come_value_875=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_862->mVarArgs&&((struct sType*)(__right_value830=list$1sType$ph$p_operator_load_element(lambda_type_862->mParamTypes,i_869)))==((void*)0))),        come_call_finalizer3(__right_value830,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value834=check_assign_type(((char*)(__right_value832=xsprintf("calling param #\%s",((char*)(__right_value831=int_to_string(i_869)))))),((struct sType*)(__right_value833=list$1sType$ph$p_operator_load_element(lambda_type_862->mParamTypes,i_869))),come_value_875->type,come_value_875,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_17_876=multiple_assign_var28->v1;
            Err_877=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_877)),            (__right_value831 = come_decrement_ref_count2(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value832 = come_decrement_ref_count2(__right_value832, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value833,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value834,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional35) {
                __result_obj__474 = (_Bool)1;
                (Err_877 = come_decrement_ref_count2(Err_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_872 = come_decrement_ref_count2(label_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_873) ? node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_875,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_861,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_865,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_866,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__474;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)(__right_value835=list$1sType$ph$p_operator_load_element(lambda_type_862->mParamTypes,i_869)))->mHeap&&come_value_875->type->mHeap)),            come_call_finalizer3(__right_value835,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)(__right_value836=list$1sType$ph$p_operator_load_element(lambda_type_862->mParamTypes,i_869))),come_value_875->type,come_value_875,info,(_Bool)1);
                come_call_finalizer3(__right_value836,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            (Err_877 = come_decrement_ref_count2(Err_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(come_params_866,(struct CVALUE*)come_increment_ref_count(come_value_875));
        dec_stack_ptr(1,info);
        i_869++;
        (label_872 = come_decrement_ref_count2(label_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_873) ? node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_875,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_878=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1774, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_878,"(");
    buffer_append_str(buf_878,come_value_861->c_value);
    buffer_append_str(buf_878,")");
    buffer_append_str(buf_878,"(");
    j_879=0;
    for(    o2_saved_880=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_866)),it_881=list$1CVALUE$ph$p_begin((o2_saved_880));    !list$1CVALUE$ph$p_end((o2_saved_880));    it_881=list$1CVALUE$ph$p_next((o2_saved_880))    ){
        buffer_append_str(buf_878,it_881->c_value);
        if(        j_879!=list$1CVALUE$ph$p_length(come_params_866)-1) {
            buffer_append_str(buf_878,",");
        }
        j_879++;
    }
    come_call_finalizer3(o2_saved_880,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_878,")");
    come_value2_882=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1793, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj197=come_value2_882->c_value;
    come_value2_882->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_878));
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_862->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_882,(struct sType*)come_increment_ref_count(lambda_type_862->mResultType),info,(_Bool)0);
    }
    __dec_obj198=come_value2_882->type;
    come_value2_882->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_865));
    come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_882->type->mStatic=(_Bool)0;
    come_value2_882->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_882->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_882));
    __result_obj__475 = (_Bool)1;
    ((node_858) ? node_858 = come_decrement_ref_count2(node_858, ((struct sNode*)node_858)->finalize, ((struct sNode*)node_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_861,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_865,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_866,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_878,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_882,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__475;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value843 = (void*)0;
struct sType* __dec_obj199;
struct sVarArgTypeName* __result_obj__476;
    ((struct sNodeBase*)(__right_value843=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value843,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj199=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__476 = come_increment_ref_count(self);
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__476,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__476;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value844 = (void*)0;
char* __result_obj__477;
    __result_obj__477 = come_increment_ref_count(((char*)(__right_value844=__builtin_string("sVarArgTypeName"))));
    (__right_value844 = come_decrement_ref_count2(__right_value844, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__477 = come_decrement_ref_count2(__result_obj__477, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__477;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_883;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct CVALUE* come_value_884;
void* __right_value847 = (void*)0;
char* __dec_obj200;
struct sType* __dec_obj201;
_Bool __result_obj__478;
    type_883=(struct sType*)come_increment_ref_count(self->type);
    come_value_884=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1830, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj200=come_value_884->c_value;
    come_value_884->c_value=(char*)come_increment_ref_count(make_type_name_string(type_883,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj201=come_value_884->type;
    come_value_884->type=(struct sType*)come_increment_ref_count(type_883);
    come_call_finalizer3(__dec_obj201,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_884->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_884));
    __result_obj__478 = (_Bool)1;
    come_call_finalizer3(type_883,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_884,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__478;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1sType$ph* method_generics_types_885;
void* __right_value850 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_886=0;
char* Err_887=0;
void* __right_value851 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_888=0;
char* name_889=0;
_Bool err_890=0;
void* __right_value852 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_891=0;
char* Err_892=0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_893;
_Bool _va_arg_894;
char* p_895;
int sline_896;
_Bool err_flag_897;
void* __right_value856 = (void*)0;
char* label_898;
void* __right_value857 = (void*)0;
char* __dec_obj202;
char* __dec_obj203;
_Bool no_comma_899;
_Bool in_fun_param_900;
void* __right_value858 = (void*)0;
struct sNode* node_901;
void* __right_value859 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
_Bool guard_break_906;
struct buffer* method_block_907;
int method_block_sline_908;
char* head_909;
void* __right_value865 = (void*)0;
char* tail_910;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct buffer* __dec_obj210;
int len_911;
void* __right_value868 = (void*)0;
char* mem_912;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value871 = (void*)0;
struct sNode* node_913;
void* __right_value872 = (void*)0;
struct sNode* __dec_obj211;
struct sNode* __result_obj__481;
    method_generics_types_885=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1844, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value850=err_msg(info,"unexpected source end")));
                come_exception_var_c1_886=multiple_assign_var29->v1;
                Err_887=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_887)?(puts(Err_887),exit(0)):(0));
                come_call_finalizer3(__right_value850,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_887 = come_decrement_ref_count2(Err_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value851=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_888=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_889=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_890=multiple_assign_var30->v3;
                come_call_finalizer3(__right_value851,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_890) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value852=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_891=multiple_assign_var31->v1;
                    Err_892=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_892)?(puts(Err_892),exit(0)):(0));
                    come_call_finalizer3(__right_value852,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_892 = come_decrement_ref_count2(Err_892, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph$p_push_back(method_generics_types_885,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_888)));
                come_call_finalizer3(type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_889 = come_decrement_ref_count2(name_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_893=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1882, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    _va_arg_894=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_895=info->p;
        sline_896=info->sline;
        err_flag_897=(_Bool)0;
        label_898=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj202=label_898;
            label_898=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_897=(_Bool)1;
        }
        if(        err_flag_897==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj203=label_898;
            label_898=((void*)0);
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_895;
            info->sline=sline_896;
        }
        no_comma_899=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_900=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_901=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj204=node_901;
        node_901=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_901),info));
        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_899;
        info->in_fun_param=in_fun_param_900;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_893,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1930, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_898),(struct sNode*)come_increment_ref_count(node_901))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_898 = come_decrement_ref_count2(label_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_901) ? node_901 = come_decrement_ref_count2(node_901, ((struct sNode*)node_901)->finalize, ((struct sNode*)node_901)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_898 = come_decrement_ref_count2(label_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_901) ? node_901 = come_decrement_ref_count2(node_901, ((struct sNode*)node_901)->finalize, ((struct sNode*)node_901)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_894;
    guard_break_906=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_906=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_907=((void*)0);
    method_block_sline_908=0;
    if(    *info->p==123) {
        head_909=info->p;
        method_block_sline_908=info->sline;
        ((char*)(__right_value865=skip_block(info)));
        (__right_value865 = come_decrement_ref_count2(__right_value865, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_910=info->p;
        __dec_obj210=method_block_907;
        method_block_907=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1967, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_911=tail_910-head_909;
        mem_912=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_911+1)), "05call.c", 1970, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_912,head_909,len_911);
        mem_912[len_911]=0;
        buffer_append_str(method_block_907,mem_912);
        buffer_append_str(method_block_907,"\n");
        (mem_912 = come_decrement_ref_count2(mem_912, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1980, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value870=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1980, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params_893,guard_break_906,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_885),(struct buffer*)come_increment_ref_count(method_block_907),method_block_sline_908,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_913=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value870,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj211=node_913;
    node_913=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_913),info));
    if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__481 = come_increment_ref_count(node_913);
    come_call_finalizer3(method_generics_types_885,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_893,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_907,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_913) ? node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__481) ? __result_obj__481 = come_decrement_ref_count2(__result_obj__481, ((struct sNode*)__result_obj__481)->finalize, ((struct sNode*)__result_obj__481)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__481;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value860 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_902;
struct tuple2$2char$phsNode$ph* __dec_obj205;
void* __right_value861 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_903;
struct tuple2$2char$phsNode$ph* __dec_obj206;
void* __right_value862 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_904;
struct tuple2$2char$phsNode$ph* __dec_obj207;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__479;
    if(    self->len==0) {
        litem_902=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value860=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1493, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_902->prev=((void*)0);
        litem_902->next=((void*)0);
        __dec_obj205=litem_902->item;
        litem_902->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_902;
        self->head=litem_902;
    }
    else if(    self->len==1) {
        litem_903=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value861=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1503, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_903->prev=self->head;
        litem_903->next=((void*)0);
        __dec_obj206=litem_903->item;
        litem_903->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj206,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_903;
        self->head->next=litem_903;
    }
    else {
        litem_904=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value862=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1513, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_904->prev=self->tail;
        litem_904->next=((void*)0);
        __dec_obj207=litem_904->item;
        litem_904->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_904;
        self->tail=litem_904;
    }
    self->len++;
    __result_obj__479 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__479;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_905;
    result_905=0;
    result_905+=int_get_hash_key(((int)self->v1));
    result_905+=int_get_hash_key(((int)self->v2));
    return result_905;
}

static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj208;
struct sNode* __dec_obj209;
struct tuple2$2char$phsNode$ph* __result_obj__480;
    __dec_obj208=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj209=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__480 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__480,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__480;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value873 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_914=0;
char* Err_915=0;
struct sNode* __result_obj__482;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value873=err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p)));
    come_exception_var_c3_914=multiple_assign_var32->v1;
    Err_915=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_915)?(puts(Err_915),exit(0)):(0));
    come_call_finalizer3(__right_value873,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    stackframe();
    exit(3);
    __result_obj__482 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_915 = come_decrement_ref_count2(Err_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__482) ? __result_obj__482 = come_decrement_ref_count2(__result_obj__482, ((struct sNode*)__result_obj__482)->finalize, ((struct sNode*)__result_obj__482)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__482;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value880 = (void*)0;
struct sNode* __result_obj__485;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2001, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value875=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2001, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result_obj__485 = come_increment_ref_count(((struct sNode*)(__right_value880=_inf_value7)));
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value875,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value880) ? __right_value880 = come_decrement_ref_count2(__right_value880, ((struct sNode*)__right_value880)->finalize, ((struct sNode*)__right_value880)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__485) ? __result_obj__485 = come_decrement_ref_count2(__result_obj__485, ((struct sNode*)__result_obj__485)->finalize, ((struct sNode*)__result_obj__485)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__485;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__483;
void* __right_value876 = (void*)0;
struct sReturnNode* result_916;
void* __right_value877 = (void*)0;
char* __dec_obj212;
void* __right_value878 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value879 = (void*)0;
char* __dec_obj214;
struct sReturnNode* __result_obj__484;
    if(    self==(void*)0) {
        __result_obj__483 = (void*)0;
        return __result_obj__483;
    }
    result_916=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_916->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_916->sname;
        result_916->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_916->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj213=result_916->value;
        result_916->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj214=result_916->value_source;
        result_916->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__484 = result_916;
    come_call_finalizer3(result_916,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__484;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value884 = (void*)0;
struct sNode* __result_obj__486;
char* head_917;
void* __right_value885 = (void*)0;
struct sNode* value_918;
char* tail_919;
void* __right_value886 = (void*)0;
struct sNode* __dec_obj215;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value890 = (void*)0;
struct sNode* __result_obj__487;
int nest_921;
char* head_922;
int head_sline_923;
int sline_real_924;
void* __right_value891 = (void*)0;
char* buf_925;
_Bool is_type_name__926;
_Bool is_special_word_928;
_Bool define_function_pointer_flag_929;
void* __right_value892 = (void*)0;
_Bool lambda_flag_930;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
char* word2_931;
_Bool fun_name_with_type_name_932;
void* __right_value895 = (void*)0;
char* word2_933;
_Bool call_method_generics_fun_call_934;
void* __right_value896 = (void*)0;
char* __dec_obj216;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
_Bool _if_conditional37;
int nest_935;
_Bool inline_asm_936;
void* __right_value901 = (void*)0;
char* __dec_obj217;
void* __right_value902 = (void*)0;
char* __dec_obj218;
void* __right_value903 = (void*)0;
char* __dec_obj219;
void* __right_value904 = (void*)0;
struct sNode* node_937;
struct sNode* __result_obj__488;
_Bool no_comma_938;
void* __right_value905 = (void*)0;
struct sNode* exp_939;
void* __right_value906 = (void*)0;
struct sNode* exp2_940;
void* __right_value907 = (void*)0;
struct sNode* __result_obj__489;
void* __right_value908 = (void*)0;
char* block_text_941;
char* contents_942;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value914 = (void*)0;
struct sNode* __result_obj__492;
void* __right_value915 = (void*)0;
struct sNode* node_944;
struct sNode* __result_obj__493;
void* __right_value916 = (void*)0;
struct sNode* node_945;
struct sNode* __result_obj__494;
struct buffer* come_block_946;
int come_block_sline_947;
char* head_948;
void* __right_value917 = (void*)0;
char* tail_949;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct buffer* __dec_obj222;
int len_950;
void* __right_value920 = (void*)0;
char* mem_951;
char* head_952;
_Bool no_output_come_code_953;
void* __right_value921 = (void*)0;
char* tail_954;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct buffer* __dec_obj223;
int len_955;
void* __right_value924 = (void*)0;
char* mem_956;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value930 = (void*)0;
struct sNode* node_957;
struct sNode* __result_obj__497;
struct buffer* come_block_959;
int come_block_sline_960;
void* __right_value931 = (void*)0;
struct sNode* node_961;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value937 = (void*)0;
struct sNode* __result_obj__500;
int time_out_963;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct list$1sNode$ph* vars_964;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct list$1sBlock$ph* blocks_965;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sBlock* else_block_966;
void* __right_value944 = (void*)0;
struct sBlock* __dec_obj228;
void* __right_value945 = (void*)0;
struct sNode* var_name_967;
void* __right_value946 = (void*)0;
struct sBlock* block_968;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value998 = (void*)0;
struct sNode* __result_obj__526;
void* __right_value999 = (void*)0;
struct sNode* node_1018;
struct sNode* __result_obj__527;
void* __right_value1000 = (void*)0;
struct sNode* node_1019;
struct sNode* __result_obj__528;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value1005 = (void*)0;
struct sNode* __result_obj__531;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value1010 = (void*)0;
struct sNode* __result_obj__534;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value1015 = (void*)0;
struct sNode* __result_obj__537;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value1020 = (void*)0;
struct sNode* __result_obj__540;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value1025 = (void*)0;
struct sNode* __result_obj__543;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value1030 = (void*)0;
struct sNode* __result_obj__546;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value1035 = (void*)0;
struct sNode* __result_obj__549;
void* __right_value1036 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_1027=0;
char* name_1028=0;
_Bool err_1029=0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value1042 = (void*)0;
struct sNode* __result_obj__552;
void* __right_value1043 = (void*)0;
struct sNode* node_1031;
struct sNode* __result_obj__553;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct buffer* buf2_1032;
void* __right_value1046 = (void*)0;
char* word_1033;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct list$1sNode$ph* exps_1034;
void* __right_value1049 = (void*)0;
struct sNode* exp_1035;
void* __right_value1050 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_1036=0;
char* Err_1037=0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value1058 = (void*)0;
struct sNode* __result_obj__556;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
struct buffer* fun_name_1039;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sType* type_1040;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
struct sClass* klass_1044;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sType* __dec_obj257;
void* __right_value1069 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_1045=0;
char* Err_1046=0;
void* __right_value1070 = (void*)0;
char* buf2_1047;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct sNode* node_1048;
struct sNode* __result_obj__561;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct buffer* fun_name_1049;
void* __right_value1075 = (void*)0;
char* buf2_1050;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct sNode* node_1051;
struct sNode* __result_obj__562;
void* __right_value1078 = (void*)0;
struct sNode* node_1052;
struct sNode* __result_obj__563;
void* __right_value1079 = (void*)0;
struct sNode* node_1053;
struct sNode* __result_obj__564;
void* __right_value1080 = (void*)0;
struct sNode* node_1054;
struct sNode* __result_obj__565;
void* __right_value1081 = (void*)0;
struct sNode* node_1055;
struct sNode* __result_obj__566;
void* __right_value1082 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_1056=0;
char* Err_1057=0;
struct sNode* __result_obj__567;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2014, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value883=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2014, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__486 = come_increment_ref_count(((struct sNode*)(__right_value884=_inf_value8)));
            come_call_finalizer3(__right_value883,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value884) ? __right_value884 = come_decrement_ref_count2(__right_value884, ((struct sNode*)__right_value884)->finalize, ((struct sNode*)__right_value884)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__486) ? __result_obj__486 = come_decrement_ref_count2(__result_obj__486, ((struct sNode*)__result_obj__486)->finalize, ((struct sNode*)__result_obj__486)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__486;
        }
        else {
            head_917=info->p;
            value_918=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_919=info->p;
            __dec_obj215=value_918;
            value_918=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_918),info));
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_920[tail_919-head_917+1];
            memset(&buf_920, 0, sizeof(char)            *(tail_919-head_917+1)            );
            memcpy(buf_920,head_917,tail_919-head_917);
            buf_920[tail_919-head_917]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2026, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value889=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2026, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_918),(char*)come_increment_ref_count(__builtin_string(buf_920)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__487 = come_increment_ref_count(((struct sNode*)(__right_value890=_inf_value9)));
            ((value_918) ? value_918 = come_decrement_ref_count2(value_918, ((struct sNode*)value_918)->finalize, ((struct sNode*)value_918)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(__right_value889,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value890) ? __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__487) ? __result_obj__487 = come_decrement_ref_count2(__result_obj__487, ((struct sNode*)__result_obj__487)->finalize, ((struct sNode*)__result_obj__487)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__487;
            ((value_918) ? value_918 = come_decrement_ref_count2(value_918, ((struct sNode*)value_918)->finalize, ((struct sNode*)value_918)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_921=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_921++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_921--;
                if(                nest_921==0) {
                    break;
                }
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
    else if(    *info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(1) {
            if(            *info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_922=info->p;
        head_sline_923=info->sline;
        sline_real_924=info->sline_real;
        info->sline_real=info->sline;
        buf_925=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__926=is_type_name(buf_925,info);
        static char* is_special_word_array_927[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_928=charppa_contained(is_special_word_array_927,19,buf_925);
        define_function_pointer_flag_929=(_Bool)0;
        if(        !is_special_word_928&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value892=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value892,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_929=(_Bool)1;
                }
            }
            info->p=head_922;
            info->sline=head_sline_923;
        }
        lambda_flag_930=(_Bool)0;
        if(        !is_special_word_928&&is_type_name__926) {
            info->p=head_922;
            info->sline=head_sline_923;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value893=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value893,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            word2_931=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_931,"lambda")) {
                lambda_flag_930=(_Bool)1;
            }
            info->p=head_922;
            info->sline=head_sline_923;
            (word2_931 = come_decrement_ref_count2(word2_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_932=(_Bool)0;
        if(        !is_special_word_928) {
            info->p=head_922;
            info->sline=head_sline_923;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_933=(char*)come_increment_ref_count(parse_word(info));
                (word2_933 = come_decrement_ref_count2(word2_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_932=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_922;
            info->sline=head_sline_923;
        }
        call_method_generics_fun_call_934=(_Bool)0;
        {
            info->p=head_922;
            info->sline=head_sline_923;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj216=buf_925;
                buf_925=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_925,info)&&((struct sVar*)(__right_value898=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value897=__builtin_string(buf_925))))))==((void*)0)&&((struct sVar*)(__right_value900=map$2char$phsVar$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value899=__builtin_string(buf_925))))))==((void*)0)&&*info->p==60)),            (__right_value897 = come_decrement_ref_count2(__right_value897, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value898,sVar_finalize, 0, 1, 0, 0, (void*)0),
            (__right_value899 = come_decrement_ref_count2(__right_value899, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value900,sVar_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional37) {
                nest_935=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_935++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_935==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_934=(_Bool)1;
                }
            }
            info->p=head_922;
            info->sline=head_sline_923;
        }
        inline_asm_936=(_Bool)0;
        {
            info->p=head_922;
            info->sline=head_sline_923;
            __dec_obj217=buf_925;
            buf_925=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_925,"asm")||string_operator_equals(buf_925,"__asm")||string_operator_equals(buf_925,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_936=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj218=buf_925;
                        buf_925=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_936=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_922;
            info->sline=head_sline_923;
        }
        parse_sharp_v5(info);
        __dec_obj219=buf_925;
        buf_925=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_930) {
            info->p=head_922;
            info->sline=head_sline_923;
            node_937=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_924;
            __result_obj__488 = come_increment_ref_count(node_937);
            ((node_937) ? node_937 = come_decrement_ref_count2(node_937, ((struct sNode*)node_937)->finalize, ((struct sNode*)node_937)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__488) ? __result_obj__488 = come_decrement_ref_count2(__result_obj__488, ((struct sNode*)__result_obj__488)->finalize, ((struct sNode*)__result_obj__488)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__488;
            ((node_937) ? node_937 = come_decrement_ref_count2(node_937, ((struct sNode*)node_937)->finalize, ((struct sNode*)node_937)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_925,"_Static_assert")||string_operator_equals(buf_925,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_938=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_939=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_938;
            expected_next_character(44,info);
            exp2_940=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__489 = come_increment_ref_count(((struct sNode*)(__right_value907=static_assert_node((struct sNode*)come_increment_ref_count(exp_939),(struct sNode*)come_increment_ref_count(exp2_940),info))));
            ((exp_939) ? exp_939 = come_decrement_ref_count2(exp_939, ((struct sNode*)exp_939)->finalize, ((struct sNode*)exp_939)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_940) ? exp2_940 = come_decrement_ref_count2(exp2_940, ((struct sNode*)exp2_940)->finalize, ((struct sNode*)exp2_940)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value907) ? __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__489) ? __result_obj__489 = come_decrement_ref_count2(__result_obj__489, ((struct sNode*)__result_obj__489)->finalize, ((struct sNode*)__result_obj__489)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__489;
            ((exp_939) ? exp_939 = come_decrement_ref_count2(exp_939, ((struct sNode*)exp_939)->finalize, ((struct sNode*)exp_939)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_940) ? exp2_940 = come_decrement_ref_count2(exp2_940, ((struct sNode*)exp2_940)->finalize, ((struct sNode*)exp2_940)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_925,"output")&&*info->p==123) {
            block_text_941=(char*)come_increment_ref_count(skip_block(info));
            contents_942=(char*)come_increment_ref_count(block_text_941);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2264, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value910=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2264, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_942),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result_obj__492 = come_increment_ref_count(((struct sNode*)(__right_value914=_inf_value10)));
            (block_text_941 = come_decrement_ref_count2(block_text_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_942 = come_decrement_ref_count2(contents_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value910,sOutputNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value914) ? __right_value914 = come_decrement_ref_count2(__right_value914, ((struct sNode*)__right_value914)->finalize, ((struct sNode*)__right_value914)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__492) ? __result_obj__492 = come_decrement_ref_count2(__result_obj__492, ((struct sNode*)__result_obj__492)->finalize, ((struct sNode*)__result_obj__492)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__492;
            (block_text_941 = come_decrement_ref_count2(block_text_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_942 = come_decrement_ref_count2(contents_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_925,"extern")) {
            node_944=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__493 = come_increment_ref_count(node_944);
            ((node_944) ? node_944 = come_decrement_ref_count2(node_944, ((struct sNode*)node_944)->finalize, ((struct sNode*)node_944)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__493) ? __result_obj__493 = come_decrement_ref_count2(__result_obj__493, ((struct sNode*)__result_obj__493)->finalize, ((struct sNode*)__result_obj__493)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__493;
            ((node_944) ? node_944 = come_decrement_ref_count2(node_944, ((struct sNode*)node_944)->finalize, ((struct sNode*)node_944)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_925,"string")||string_operator_equals(buf_925,"wstring"))&&*info->p==40) {
            node_945=(struct sNode*)come_increment_ref_count(parse_function_call(buf_925,info,(_Bool)0));
            info->sline_real=sline_real_924;
            __result_obj__494 = come_increment_ref_count(node_945);
            ((node_945) ? node_945 = come_decrement_ref_count2(node_945, ((struct sNode*)node_945)->finalize, ((struct sNode*)node_945)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__494) ? __result_obj__494 = come_decrement_ref_count2(__result_obj__494, ((struct sNode*)__result_obj__494)->finalize, ((struct sNode*)__result_obj__494)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__494;
            ((node_945) ? node_945 = come_decrement_ref_count2(node_945, ((struct sNode*)node_945)->finalize, ((struct sNode*)node_945)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_925,"come")) {
            come_block_946=((void*)0);
            come_block_sline_947=0;
            if(            *info->p==123) {
                head_948=info->p;
                come_block_sline_947=info->sline;
                ((char*)(__right_value917=skip_block(info)));
                (__right_value917 = come_decrement_ref_count2(__right_value917, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_949=info->p;
                __dec_obj222=come_block_946;
                come_block_946=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2289, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj222,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_950=tail_949-head_948;
                mem_951=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_950+1)), "05call.c", 2292, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_951,head_948,len_950);
                mem_951[len_950]=0;
                buffer_append_str(come_block_946,mem_951);
                buffer_append_str(come_block_946,"\n");
                (mem_951 = come_decrement_ref_count2(mem_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_952=info->p;
                come_block_sline_947=info->sline;
                no_output_come_code_953=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value921=expression_v13(info)));
                ((__right_value921) ? __right_value921 = come_decrement_ref_count2(__right_value921, ((struct sNode*)__right_value921)->finalize, ((struct sNode*)__right_value921)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_953;
                tail_954=info->p;
                __dec_obj223=come_block_946;
                come_block_946=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2310, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj223,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_955=tail_954-head_952;
                mem_956=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_955+1)), "05call.c", 2313, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_956,head_952,len_955);
                mem_956[len_955]=0;
                buffer_append_str(come_block_946,"{");
                buffer_append_str(come_block_946,mem_956);
                buffer_append_str(come_block_946,"; }");
                buffer_append_str(come_block_946,"}");
                buffer_append_str(come_block_946,"\n");
                (mem_956 = come_decrement_ref_count2(mem_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2324, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value926=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2324, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_946),come_block_sline_947,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_957=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value926,sComeCallNode_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_924;
            __result_obj__497 = come_increment_ref_count(node_957);
            come_call_finalizer3(come_block_946,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_957) ? node_957 = come_decrement_ref_count2(node_957, ((struct sNode*)node_957)->finalize, ((struct sNode*)node_957)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__497) ? __result_obj__497 = come_decrement_ref_count2(__result_obj__497, ((struct sNode*)__result_obj__497)->finalize, ((struct sNode*)__result_obj__497)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__497;
            come_call_finalizer3(come_block_946,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_957) ? node_957 = come_decrement_ref_count2(node_957, ((struct sNode*)node_957)->finalize, ((struct sNode*)node_957)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_925,"come_join")&&*info->p==40) {
            come_block_959=((void*)0);
            come_block_sline_960=0;
            expected_next_character(40,info);
            node_961=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_924;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2338, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value933=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2338, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_961),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result_obj__500 = come_increment_ref_count(((struct sNode*)(__right_value937=_inf_value12)));
            come_call_finalizer3(come_block_959,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_961) ? node_961 = come_decrement_ref_count2(node_961, ((struct sNode*)node_961)->finalize, ((struct sNode*)node_961)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value933,sComeJoinNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value937) ? __right_value937 = come_decrement_ref_count2(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__500) ? __result_obj__500 = come_decrement_ref_count2(__result_obj__500, ((struct sNode*)__result_obj__500)->finalize, ((struct sNode*)__result_obj__500)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__500;
            come_call_finalizer3(come_block_959,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_961) ? node_961 = come_decrement_ref_count2(node_961, ((struct sNode*)node_961)->finalize, ((struct sNode*)node_961)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_925,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_963=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_963=time_out_963*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_964=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2356, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            blocks_965=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2357, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            else_block_966=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2358, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj228=else_block_966;
                    else_block_966=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj228,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_967=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_968=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph$p_add(vars_964,(struct sNode*)come_increment_ref_count(var_name_967));
                    list$1sBlock$ph$p_add(blocks_965,(struct sBlock*)come_increment_ref_count(block_968));
                    if(                    *info->p==125) {
                        ((var_name_967) ? var_name_967 = come_decrement_ref_count2(var_name_967, ((struct sNode*)var_name_967)->finalize, ((struct sNode*)var_name_967)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(block_968,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name_967) ? var_name_967 = come_decrement_ref_count2(var_name_967, ((struct sNode*)var_name_967)->finalize, ((struct sNode*)var_name_967)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(block_968,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_924;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value951=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2388, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(vars_964),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_965),(struct sBlock*)come_increment_ref_count(else_block_966),time_out_963,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result_obj__526 = come_increment_ref_count(((struct sNode*)(__right_value998=_inf_value13)));
            come_call_finalizer3(vars_964,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_965,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_966,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value951,sComePollNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value998) ? __right_value998 = come_decrement_ref_count2(__right_value998, ((struct sNode*)__right_value998)->finalize, ((struct sNode*)__right_value998)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__526) ? __result_obj__526 = come_decrement_ref_count2(__result_obj__526, ((struct sNode*)__result_obj__526)->finalize, ((struct sNode*)__result_obj__526)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__526;
            come_call_finalizer3(vars_964,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_965,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_966,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_925,"none")&&*info->p==40) {
            node_1018=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_924;
            __result_obj__527 = come_increment_ref_count(node_1018);
            ((node_1018) ? node_1018 = come_decrement_ref_count2(node_1018, ((struct sNode*)node_1018)->finalize, ((struct sNode*)node_1018)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__527) ? __result_obj__527 = come_decrement_ref_count2(__result_obj__527, ((struct sNode*)__result_obj__527)->finalize, ((struct sNode*)__result_obj__527)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__527;
            ((node_1018) ? node_1018 = come_decrement_ref_count2(node_1018, ((struct sNode*)node_1018)->finalize, ((struct sNode*)node_1018)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_925,"some")&&*info->p==40) {
            node_1019=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_924;
            __result_obj__528 = come_increment_ref_count(node_1019);
            ((node_1019) ? node_1019 = come_decrement_ref_count2(node_1019, ((struct sNode*)node_1019)->finalize, ((struct sNode*)node_1019)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__528) ? __result_obj__528 = come_decrement_ref_count2(__result_obj__528, ((struct sNode*)__result_obj__528)->finalize, ((struct sNode*)__result_obj__528)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__528;
            ((node_1019) ? node_1019 = come_decrement_ref_count2(node_1019, ((struct sNode*)node_1019)->finalize, ((struct sNode*)node_1019)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_925,"__func__")||string_operator_equals(buf_925,"__FUNCTION__")) {
            info->sline_real=sline_real_924;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2405, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1002=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2405, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result_obj__531 = come_increment_ref_count(((struct sNode*)(__right_value1005=_inf_value14)));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1002,sFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1005) ? __right_value1005 = come_decrement_ref_count2(__right_value1005, ((struct sNode*)__right_value1005)->finalize, ((struct sNode*)__right_value1005)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__531) ? __result_obj__531 = come_decrement_ref_count2(__result_obj__531, ((struct sNode*)__result_obj__531)->finalize, ((struct sNode*)__result_obj__531)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__531;
        }
        else if(        !gComeC&&string_operator_equals(buf_925,"wildcard")) {
            info->sline_real=sline_real_924;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value1007=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2409, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result_obj__534 = come_increment_ref_count(((struct sNode*)(__right_value1010=_inf_value15)));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1007,sWildCard_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1010) ? __right_value1010 = come_decrement_ref_count2(__right_value1010, ((struct sNode*)__right_value1010)->finalize, ((struct sNode*)__right_value1010)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__534) ? __result_obj__534 = come_decrement_ref_count2(__result_obj__534, ((struct sNode*)__result_obj__534)->finalize, ((struct sNode*)__result_obj__534)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__534;
        }
        else if(        string_operator_equals(buf_925,"__line__")||string_operator_equals(buf_925,"__LINE__")) {
            info->sline_real=sline_real_924;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2413, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1012=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2413, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result_obj__537 = come_increment_ref_count(((struct sNode*)(__right_value1015=_inf_value16)));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1012,sLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1015) ? __right_value1015 = come_decrement_ref_count2(__right_value1015, ((struct sNode*)__right_value1015)->finalize, ((struct sNode*)__right_value1015)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__537) ? __result_obj__537 = come_decrement_ref_count2(__result_obj__537, ((struct sNode*)__result_obj__537)->finalize, ((struct sNode*)__result_obj__537)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__537;
        }
        else if(        string_operator_equals(buf_925,"__sname__")) {
            info->sline_real=sline_real_924;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2417, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1017=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2417, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result_obj__540 = come_increment_ref_count(((struct sNode*)(__right_value1020=_inf_value17)));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1017,sSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1020) ? __right_value1020 = come_decrement_ref_count2(__right_value1020, ((struct sNode*)__right_value1020)->finalize, ((struct sNode*)__right_value1020)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__540) ? __result_obj__540 = come_decrement_ref_count2(__result_obj__540, ((struct sNode*)__result_obj__540)->finalize, ((struct sNode*)__result_obj__540)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__540;
        }
        else if(        string_operator_equals(buf_925,"__caller_func__")) {
            info->sline_real=sline_real_924;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2421, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1022=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2421, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result_obj__543 = come_increment_ref_count(((struct sNode*)(__right_value1025=_inf_value18)));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1022,sCallerFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1025) ? __right_value1025 = come_decrement_ref_count2(__right_value1025, ((struct sNode*)__right_value1025)->finalize, ((struct sNode*)__right_value1025)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__543) ? __result_obj__543 = come_decrement_ref_count2(__result_obj__543, ((struct sNode*)__result_obj__543)->finalize, ((struct sNode*)__result_obj__543)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__543;
        }
        else if(        string_operator_equals(buf_925,"__caller_line__")) {
            info->sline_real=sline_real_924;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2425, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1027=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2425, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result_obj__546 = come_increment_ref_count(((struct sNode*)(__right_value1030=_inf_value19)));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1027,sCallerLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1030) ? __right_value1030 = come_decrement_ref_count2(__right_value1030, ((struct sNode*)__right_value1030)->finalize, ((struct sNode*)__right_value1030)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__546) ? __result_obj__546 = come_decrement_ref_count2(__result_obj__546, ((struct sNode*)__result_obj__546)->finalize, ((struct sNode*)__result_obj__546)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__546;
        }
        else if(        string_operator_equals(buf_925,"__caller_sname__")) {
            info->sline_real=sline_real_924;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2429, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1032=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2429, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result_obj__549 = come_increment_ref_count(((struct sNode*)(__right_value1035=_inf_value20)));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1032,sCallerSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1035) ? __right_value1035 = come_decrement_ref_count2(__right_value1035, ((struct sNode*)__right_value1035)->finalize, ((struct sNode*)__right_value1035)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__549) ? __result_obj__549 = come_decrement_ref_count2(__result_obj__549, ((struct sNode*)__result_obj__549)->finalize, ((struct sNode*)__result_obj__549)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__549;
        }
        else if(        info->va_arg&&is_type_name(buf_925,info)) {
            info->p=head_922;
            info->sline=head_sline_923;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value1036=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_1027=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_1028=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_1029=multiple_assign_var33->v3;
            come_call_finalizer3(__right_value1036,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_924;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2438, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1038=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2438, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_1027),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result_obj__552 = come_increment_ref_count(((struct sNode*)(__right_value1042=_inf_value21)));
            come_call_finalizer3(type_1027,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1028 = come_decrement_ref_count2(name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1038,sVarArgTypeName_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1042) ? __right_value1042 = come_decrement_ref_count2(__right_value1042, ((struct sNode*)__right_value1042)->finalize, ((struct sNode*)__right_value1042)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__552) ? __result_obj__552 = come_decrement_ref_count2(__result_obj__552, ((struct sNode*)__result_obj__552)->finalize, ((struct sNode*)__result_obj__552)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__552;
            come_call_finalizer3(type_1027,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1028 = come_decrement_ref_count2(name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_925,"sizeof")||string_operator_equals(buf_925,"_Alignof")||string_operator_equals(buf_925,"_Alignas")||string_operator_equals(buf_925,"__alignof__")) {
            node_1031=(struct sNode*)come_increment_ref_count(string_node_v21(buf_925,head_922,head_sline_923,info));
            info->sline_real=sline_real_924;
            __result_obj__553 = come_increment_ref_count(node_1031);
            ((node_1031) ? node_1031 = come_decrement_ref_count2(node_1031, ((struct sNode*)node_1031)->finalize, ((struct sNode*)node_1031)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__553) ? __result_obj__553 = come_decrement_ref_count2(__result_obj__553, ((struct sNode*)__result_obj__553)->finalize, ((struct sNode*)__result_obj__553)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__553;
            ((node_1031) ? node_1031 = come_decrement_ref_count2(node_1031, ((struct sNode*)node_1031)->finalize, ((struct sNode*)node_1031)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_936) {
            buf2_1032=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2447, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p!=40) {
                word_1033=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_1032,word_1033);
                (word_1033 = come_decrement_ref_count2(word_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_1032,40);
            exps_1034=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2458, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_1032,40);
                    info->p++;
                    exp_1035=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_1034,(struct sNode*)come_increment_ref_count(exp_1035));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_1032,41);
                    ((exp_1035) ? exp_1035 = come_decrement_ref_count2(exp_1035, ((struct sNode*)exp_1035)->finalize, ((struct sNode*)exp_1035)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_1032,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_1032,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1050=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_1036=multiple_assign_var34->v1;
                    Err_1037=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_1037)?(puts(Err_1037),exit(0)):(0));
                    come_call_finalizer3(__right_value1050,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_1037 = come_decrement_ref_count2(Err_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_1032,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_924;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2495, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value1053=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2495, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_1032)),(struct list$1sNode$ph*)come_increment_ref_count(exps_1034),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result_obj__556 = come_increment_ref_count(((struct sNode*)(__right_value1058=_inf_value22)));
            come_call_finalizer3(buf2_1032,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_1034,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1053,sInlineAssembler_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1058) ? __right_value1058 = come_decrement_ref_count2(__right_value1058, ((struct sNode*)__right_value1058)->finalize, ((struct sNode*)__right_value1058)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__556) ? __result_obj__556 = come_decrement_ref_count2(__result_obj__556, ((struct sNode*)__result_obj__556)->finalize, ((struct sNode*)__result_obj__556)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__556;
            come_call_finalizer3(buf2_1032,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_1034,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_932) {
            fun_name_1039=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2498, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_1039,buf_925);
            type_1040=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value1062=map$2char$phsType$ph$p_operator_load_element(info->types,((char*)(__right_value1061=buffer_to_string(fun_name_1039))))))));
            (__right_value1061 = come_decrement_ref_count2(__right_value1061, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1062,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            type_1040==((void*)0)) {
                klass_1044=((struct sClass*)(__right_value1065=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value1064=buffer_to_string(fun_name_1039))))));
                (__right_value1064 = come_decrement_ref_count2(__right_value1064, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value1065,sClass_finalize, 0, 1, 0, 0, (void*)0);
                if(                klass_1044) {
                    __dec_obj257=type_1040;
                    type_1040=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2508, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(__builtin_string(buf_925)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj257,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1069=err_msg(info,"null type(%s)",buf_925)));
                    come_exception_var_c5_1045=multiple_assign_var35->v1;
                    Err_1046=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_1046)?(puts(Err_1046),exit(0)):(0));
                    come_call_finalizer3(__right_value1069,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_1046 = come_decrement_ref_count2(Err_1046, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_1040->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_1039,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_1039,"_");
            buf2_1047=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_1039,buf2_1047);
            node_1048=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1071=buffer_to_string(fun_name_1039))),info,(_Bool)0));
            (__right_value1071 = come_decrement_ref_count2(__right_value1071, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_924;
            __result_obj__561 = come_increment_ref_count(node_1048);
            come_call_finalizer3(fun_name_1039,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_1040,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1047 = come_decrement_ref_count2(buf2_1047, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1048) ? node_1048 = come_decrement_ref_count2(node_1048, ((struct sNode*)node_1048)->finalize, ((struct sNode*)node_1048)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__561) ? __result_obj__561 = come_decrement_ref_count2(__result_obj__561, ((struct sNode*)__result_obj__561)->finalize, ((struct sNode*)__result_obj__561)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__561;
            come_call_finalizer3(fun_name_1039,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_1040,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1047 = come_decrement_ref_count2(buf2_1047, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1048) ? node_1048 = come_decrement_ref_count2(node_1048, ((struct sNode*)node_1048)->finalize, ((struct sNode*)node_1048)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_1049=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2543, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_1049,buf_925);
            buffer_append_str(fun_name_1049,"_");
            buf2_1050=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_1049,buf2_1050);
            node_1051=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1076=buffer_to_string(fun_name_1049))),info,(_Bool)0));
            (__right_value1076 = come_decrement_ref_count2(__right_value1076, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_924;
            __result_obj__562 = come_increment_ref_count(node_1051);
            come_call_finalizer3(fun_name_1049,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1050 = come_decrement_ref_count2(buf2_1050, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1051) ? node_1051 = come_decrement_ref_count2(node_1051, ((struct sNode*)node_1051)->finalize, ((struct sNode*)node_1051)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__562) ? __result_obj__562 = come_decrement_ref_count2(__result_obj__562, ((struct sNode*)__result_obj__562)->finalize, ((struct sNode*)__result_obj__562)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__562;
            come_call_finalizer3(fun_name_1049,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1050 = come_decrement_ref_count2(buf2_1050, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1051) ? node_1051 = come_decrement_ref_count2(node_1051, ((struct sNode*)node_1051)->finalize, ((struct sNode*)node_1051)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_934) {
            node_1052=(struct sNode*)come_increment_ref_count(parse_function_call(buf_925,info,(_Bool)0));
            info->sline_real=sline_real_924;
            __result_obj__563 = come_increment_ref_count(node_1052);
            ((node_1052) ? node_1052 = come_decrement_ref_count2(node_1052, ((struct sNode*)node_1052)->finalize, ((struct sNode*)node_1052)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__563) ? __result_obj__563 = come_decrement_ref_count2(__result_obj__563, ((struct sNode*)__result_obj__563)->finalize, ((struct sNode*)__result_obj__563)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__563;
            ((node_1052) ? node_1052 = come_decrement_ref_count2(node_1052, ((struct sNode*)node_1052)->finalize, ((struct sNode*)node_1052)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_928&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__926)) {
            node_1053=(struct sNode*)come_increment_ref_count(parse_function_call(buf_925,info,(_Bool)0));
            info->sline_real=sline_real_924;
            __result_obj__564 = come_increment_ref_count(node_1053);
            ((node_1053) ? node_1053 = come_decrement_ref_count2(node_1053, ((struct sNode*)node_1053)->finalize, ((struct sNode*)node_1053)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__564) ? __result_obj__564 = come_decrement_ref_count2(__result_obj__564, ((struct sNode*)__result_obj__564)->finalize, ((struct sNode*)__result_obj__564)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__564;
            ((node_1053) ? node_1053 = come_decrement_ref_count2(node_1053, ((struct sNode*)node_1053)->finalize, ((struct sNode*)node_1053)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_1054=(struct sNode*)come_increment_ref_count(string_node_v21(buf_925,head_922,head_sline_923,info));
            info->sline_real=sline_real_924;
            __result_obj__565 = come_increment_ref_count(node_1054);
            ((node_1054) ? node_1054 = come_decrement_ref_count2(node_1054, ((struct sNode*)node_1054)->finalize, ((struct sNode*)node_1054)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__565) ? __result_obj__565 = come_decrement_ref_count2(__result_obj__565, ((struct sNode*)__result_obj__565)->finalize, ((struct sNode*)__result_obj__565)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__565;
            ((node_1054) ? node_1054 = come_decrement_ref_count2(node_1054, ((struct sNode*)node_1054)->finalize, ((struct sNode*)node_1054)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_925 = come_decrement_ref_count2(buf_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_1055=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__566 = come_increment_ref_count(node_1055);
        ((node_1055) ? node_1055 = come_decrement_ref_count2(node_1055, ((struct sNode*)node_1055)->finalize, ((struct sNode*)node_1055)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__566) ? __result_obj__566 = come_decrement_ref_count2(__result_obj__566, ((struct sNode*)__result_obj__566)->finalize, ((struct sNode*)__result_obj__566)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__566;
        ((node_1055) ? node_1055 = come_decrement_ref_count2(node_1055, ((struct sNode*)node_1055)->finalize, ((struct sNode*)node_1055)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1082=err_msg(info,"unexpected operator(%c)\n",*info->p)));
    come_exception_var_c6_1056=multiple_assign_var36->v1;
    Err_1057=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_1057)?(puts(Err_1057),exit(0)):(0));
    come_call_finalizer3(__right_value1082,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__567 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1057 = come_decrement_ref_count2(Err_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__567) ? __result_obj__567 = come_decrement_ref_count2(__result_obj__567, ((struct sNode*)__result_obj__567)->finalize, ((struct sNode*)__result_obj__567)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__567;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__490;
void* __right_value911 = (void*)0;
struct sOutputNode* result_943;
void* __right_value912 = (void*)0;
char* __dec_obj220;
void* __right_value913 = (void*)0;
char* __dec_obj221;
struct sOutputNode* __result_obj__491;
    if(    self==(void*)0) {
        __result_obj__490 = (void*)0;
        return __result_obj__490;
    }
    result_943=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_943->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj220=result_943->sname;
        result_943->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_943->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj221=result_943->contents;
        result_943->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__491 = result_943;
    come_call_finalizer3(result_943,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__491;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__495;
void* __right_value927 = (void*)0;
struct sComeCallNode* result_958;
void* __right_value928 = (void*)0;
char* __dec_obj224;
void* __right_value929 = (void*)0;
struct buffer* __dec_obj225;
struct sComeCallNode* __result_obj__496;
    if(    self==(void*)0) {
        __result_obj__495 = (void*)0;
        return __result_obj__495;
    }
    result_958=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_958->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj224=result_958->sname;
        result_958->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_958->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj225=result_958->come_block;
        result_958->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_958->come_block_sline=self->come_block_sline;
    }
    __result_obj__496 = result_958;
    come_call_finalizer3(result_958,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__496;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__498;
void* __right_value934 = (void*)0;
struct sComeJoinNode* result_962;
void* __right_value935 = (void*)0;
char* __dec_obj226;
void* __right_value936 = (void*)0;
struct sNode* __dec_obj227;
struct sComeJoinNode* __result_obj__499;
    if(    self==(void*)0) {
        __result_obj__498 = (void*)0;
        return __result_obj__498;
    }
    result_962=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_962->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj226=result_962->sname;
        result_962->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_962->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj227=result_962->node;
        result_962->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__499 = result_962;
    come_call_finalizer3(result_962,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__499;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__501;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__501 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__501,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__501;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value947 = (void*)0;
struct list_item$1sBlock$ph* litem_969;
struct sBlock* __dec_obj229;
void* __right_value948 = (void*)0;
struct list_item$1sBlock$ph* litem_970;
struct sBlock* __dec_obj230;
void* __right_value949 = (void*)0;
struct list_item$1sBlock$ph* litem_971;
struct sBlock* __dec_obj231;
struct list$1sBlock$ph* __result_obj__502;
    if(    self->len==0) {
        litem_969=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value947=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1423, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_969->prev=((void*)0);
        litem_969->next=((void*)0);
        __dec_obj229=litem_969->item;
        litem_969->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj229,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_969;
        self->head=litem_969;
    }
    else if(    self->len==1) {
        litem_970=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value948=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1433, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_970->prev=self->head;
        litem_970->next=((void*)0);
        __dec_obj230=litem_970->item;
        litem_970->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj230,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_970;
        self->head->next=litem_970;
    }
    else {
        litem_971=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value949=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1443, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_971->prev=self->tail;
        litem_971->next=((void*)0);
        __dec_obj231=litem_971->item;
        litem_971->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj231,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_971;
        self->tail=litem_971;
    }
    self->len++;
    __result_obj__502 = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__502;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__503;
void* __right_value952 = (void*)0;
struct sComePollNode* result_972;
void* __right_value953 = (void*)0;
char* __dec_obj232;
void* __right_value954 = (void*)0;
struct list$1sNode$ph* __dec_obj233;
void* __right_value996 = (void*)0;
struct list$1sBlock$ph* __dec_obj243;
void* __right_value997 = (void*)0;
struct sBlock* __dec_obj244;
struct sComePollNode* __result_obj__525;
    if(    self==(void*)0) {
        __result_obj__503 = (void*)0;
        return __result_obj__503;
    }
    result_972=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_972->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_972->sname;
        result_972->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_972->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj233=result_972->vars;
        result_972->vars=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->vars));
        come_call_finalizer3(__dec_obj233,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj243=result_972->blocks;
        result_972->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->blocks));
        come_call_finalizer3(__dec_obj243,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj244=result_972->else_block;
        result_972->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj244,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_972->time_out=self->time_out;
    }
    __result_obj__525 = result_972;
    come_call_finalizer3(result_972,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__525;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__504;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct list$1sBlock$ph* result_973;
struct list_item$1sBlock$ph* it_974;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct list$1sBlock$ph* __result_obj__524;
    if(    self==((void*)0)) {
        __result_obj__504 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__504,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__504;
    }
    result_973=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1404, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_974=self->head;
    while(it_974!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph$p_add(result_973,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_974->item)));
        }
        else {
            list$1sBlock$ph$p_add(result_973,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_974->item)));
        }
        it_974=it_974->next;
    }
    __result_obj__524 = come_increment_ref_count(result_973);
    come_call_finalizer3(result_973,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__524,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__524;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__505;
void* __right_value957 = (void*)0;
struct sBlock* result_975;
void* __right_value962 = (void*)0;
struct list$1sNode$ph* __dec_obj234;
void* __right_value993 = (void*)0;
struct sVarTable* __dec_obj242;
struct sBlock* __result_obj__523;
    if(    self==(void*)0) {
        __result_obj__505 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__505,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__505;
    }
    result_975=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj234=result_975->mNodes;
        result_975->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj234,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj242=result_975->mVarTable;
        result_975->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj242,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_975->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__523 = come_increment_ref_count(result_975);
    come_call_finalizer3(result_975,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__523,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__523;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__506;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct list$1sNode$ph* result_976;
struct list_item$1sNode$ph* it_977;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct list$1sNode$ph* __result_obj__507;
    if(    self==((void*)0)) {
        __result_obj__506 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__506,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__506;
    }
    result_976=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_977=self->head;
    while(it_977!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_976,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_977->item)));
        }
        else {
            list$1sNode$ph$p_add(result_976,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_977->item)));
        }
        it_977=it_977->next;
    }
    __result_obj__507 = come_increment_ref_count(result_976);
    come_call_finalizer3(result_976,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__507,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__507;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__508;
void* __right_value965 = (void*)0;
struct sVarTable* result_991;
void* __right_value992 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj241;
struct sVarTable* __result_obj__522;
    if(    self==(void*)0) {
        __result_obj__508 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__508,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__508;
    }
    result_991=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj241=result_991->mVars;
        result_991->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph_clone, self->mVars));
        come_call_finalizer3(__dec_obj241,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_991->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_991->mParent=self->mParent;
    }
    __result_obj__522 = come_increment_ref_count(result_991);
    come_call_finalizer3(result_991,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__522,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__522;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_978;
    result_978=0;
    result_978+=int_get_hash_key(((int)self->mVars));
    result_978+=int_get_hash_key(((int)self->mGlobal));
    result_978+=int_get_hash_key(((int)self->mParent));
    return result_978;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2char$phsVar$ph$p_equals(left->mVars,right->mVars)) {
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

static _Bool map$2char$phsVar$ph$p_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right){
int n_979;
_Bool result_980;
char* it_981;
char* default_value_982;
char* it2_983;
struct sVar* default_value2_986;
void* __right_value963 = (void*)0;
struct sVar* item_987;
void* __right_value964 = (void*)0;
struct sVar* item2_990;
default_value_982 = (void*)0;
default_value2_986 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_979=0;
    result_980=(_Bool)1;
    for(    it_981=list$1char$p$p_begin(left->key_list);    !list$1char$p$p_end(left->key_list);    it_981=list$1char$p$p_next(left->key_list)    ){
        memset(&default_value_982,0,sizeof(char*));
        it2_983=list$1char$p$p_item(right->key_list,n_979,default_value_982);
        if(        string_equals(it_981,it2_983)) {
            memset(&default_value2_986,0,sizeof(struct sVar*));
            item_987=((struct sVar*)(__right_value963=map$2char$phsVar$ph$p_at(left,it_981,(struct sVar*)come_increment_ref_count(default_value2_986))));
            come_call_finalizer3(__right_value963,sVar_finalize, 0, 1, 0, 0, (void*)0);
            item2_990=((struct sVar*)(__right_value964=map$2char$phsVar$ph$p_at(right,it2_983,(struct sVar*)come_increment_ref_count(default_value2_986))));
            come_call_finalizer3(__right_value964,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            !sVar_equals(item_987,item2_990)) {
                result_980=(_Bool)0;
            }
            come_call_finalizer3(default_value2_986,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_980=(_Bool)0;
        }
        n_979++;
        (default_value_982 = come_decrement_ref_count2(default_value_982, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_980;
}

static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value){
struct list_item$1char$p* it_984;
int i_985;
char* __result_obj__509;
char* __result_obj__510;
    if(    position<0) {
        position+=self->len;
    }
    it_984=self->head;
    i_985=0;
    while(it_984!=((void*)0)) {
        if(        position==i_985) {
            __result_obj__509 = it_984->item;
            return __result_obj__509;
        }
        it_984=it_984->next;
        i_985++;
    }
    __result_obj__510 = default_value;
    return __result_obj__510;
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_988;
unsigned int it_989;
struct sVar* __result_obj__511;
struct sVar* __result_obj__512;
struct sVar* __result_obj__513;
struct sVar* __result_obj__514;
    hash_988=string_get_hash_key(((char*)key))%self->size;
    it_989=hash_988;
    while((_Bool)1) {
        if(        self->item_existance[it_989]) {
            if(            string_equals(self->keys[it_989],key)) {
                __result_obj__511 = come_increment_ref_count(self->items[it_989]);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__511,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__511;
            }
            it_989++;
            if(            it_989>=self->size) {
                it_989=0;
            }
            else if(            it_989==hash_988) {
                __result_obj__512 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__512,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__512;
            }
        }
        else {
            __result_obj__513 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__513,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__513;
        }
    }
    __result_obj__514 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__514,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__514;
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__515;
void* __right_value966 = (void*)0;
void* __right_value972 = (void*)0;
struct map$2char$phsVar$ph* result_995;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct list$1char$p* __dec_obj236;
char* it_996;
struct sVar* default_value_997;
void* __right_value975 = (void*)0;
struct sVar* it2_998;
void* __right_value981 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__521;
default_value_997 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__515 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__515,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__515;
    }
    result_995=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2770, "struct map$2char$phsVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj236=result_995->key_list;
    result_995->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2772, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj236,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_996=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_996=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_997,0,sizeof(struct sVar*));
        it2_998=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_at(self,it_996,(struct sVar*)come_increment_ref_count(default_value_997)));
        if(        1&&1) {
            map$2char$phsVar$ph$p_put(result_995,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_996)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_998)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_995,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_996)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_998)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_995,(char*)come_increment_ref_count(it_996),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_998)));
        }
        else {
            map$2char$phsVar$ph$p_put(result_995,(char*)come_increment_ref_count(it_996),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_998)));
        }
        come_call_finalizer3(default_value_997,sVar_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(it2_998,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__521 = come_increment_ref_count(result_995);
    come_call_finalizer3(result_995,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__521,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__521;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self){
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
int i_992;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct list$1char$p* __dec_obj235;
struct map$2char$phsVar$ph* __result_obj__517;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value967=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value968=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2700, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value969=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_992=0;    i_992<128;    i_992++    ){
        self->item_existance[i_992]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj235=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj235,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__517 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__517,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__517;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__516;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__516 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__516,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__516;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_993;
struct list_item$1char$p* prev_it_994;
    it_993=self->head;
    while(it_993!=((void*)0)) {
        prev_it_994=it_993;
        it_993=it_993->next;
        come_call_finalizer3(prev_it_994,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_1010;
int it_1011;
_Bool same_key_exist_1012;
char* it2_1013;
struct map$2char$phsVar$ph* __result_obj__518;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_1010=string_get_hash_key(((char*)key))%self->size;
    it_1011=hash_1010;
    while((_Bool)1) {
        if(        self->item_existance[it_1011]) {
            if(            string_equals(self->keys[it_1011],key)) {
                if(                1) {
                    (self->keys[it_1011] = come_decrement_ref_count2(self->keys[it_1011], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$p$p_remove(self->key_list,self->keys[it_1011]);
                    self->keys[it_1011]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_1011]);
                    self->keys[it_1011]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_1011],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_1011]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_1011]=item;
                }
                break;
            }
            it_1011++;
            if(            it_1011>=self->size) {
                it_1011=0;
            }
            else if(            it_1011==hash_1010) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_1011]=(_Bool)1;
            if(            1) {
                self->keys[it_1011]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_1011]=key;
            }
            if(            1) {
                self->items[it_1011]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_1011]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_1012=(_Bool)0;
    for(    it2_1013=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_1013=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_1013,key)) {
            same_key_exist_1012=(_Bool)1;
        }
    }
    if(    !same_key_exist_1012) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__518 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__518;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_999;
void* __right_value976 = (void*)0;
char** keys_1000;
void* __right_value977 = (void*)0;
struct sVar** items_1001;
void* __right_value978 = (void*)0;
_Bool* item_existance_1002;
int len_1003;
char* it_1004;
struct sVar* default_value_1005;
void* __right_value979 = (void*)0;
struct sVar* it2_1006;
unsigned int hash_1007;
int n_1008;
struct sVar* default_value_1009;
void* __right_value980 = (void*)0;
default_value_1005 = (void*)0;
default_value_1009 = (void*)0;
    size_999=self->size*10;
    keys_1000=(char**)come_increment_ref_count(((char**)(__right_value976=(char**)come_calloc(1, sizeof(char*)*(1*(size_999)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_1001=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value977=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_999)), "./comelang.h", 2939, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_1002=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value978=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_999)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_1003=0;
    for(    it_1004=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_1004=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_1005,0,sizeof(struct sVar*));
        it2_1006=((struct sVar*)(__right_value979=map$2char$phsVar$ph$p_at(self,it_1004,(struct sVar*)come_increment_ref_count(default_value_1005))));
        come_call_finalizer3(__right_value979,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_1007=string_get_hash_key(((char*)it_1004))%size_999;
        n_1008=hash_1007;
        while((_Bool)1) {
            if(            item_existance_1002[n_1008]) {
                n_1008++;
                if(                n_1008>=size_999) {
                    n_1008=0;
                }
                else if(                n_1008==hash_1007) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_1002[n_1008]=(_Bool)1;
                keys_1000[n_1008]=it_1004;
                items_1001[n_1008]=((struct sVar*)(__right_value980=map$2char$phsVar$ph$p_at(self,it_1004,(struct sVar*)come_increment_ref_count(default_value_1009))));
                come_call_finalizer3(__right_value980,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_1003++;
                come_call_finalizer3(default_value_1009,sVar_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_1009,sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_1005,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_1000;
    self->items=items_1001;
    self->item_existance=item_existance_1002;
    self->size=size_999;
    self->len=len_1003;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__519;
void* __right_value982 = (void*)0;
struct sVar* result_1015;
void* __right_value983 = (void*)0;
char* __dec_obj237;
void* __right_value984 = (void*)0;
char* __dec_obj238;
void* __right_value985 = (void*)0;
struct sType* __dec_obj239;
void* __right_value986 = (void*)0;
char* __dec_obj240;
struct sVar* __result_obj__520;
    if(    self==(void*)0) {
        __result_obj__519 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__519,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__519;
    }
    result_1015=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj237=result_1015->mName;
        result_1015->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj238=result_1015->mCValueName;
        result_1015->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj239=result_1015->mType;
        result_1015->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1015->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_1015->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_1015->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj240=result_1015->mFunName;
        result_1015->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__520 = come_increment_ref_count(result_1015);
    come_call_finalizer3(result_1015,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__520,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__520;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_1014;
    result_1014=0;
    result_1014+=int_get_hash_key(((int)self->mName));
    result_1014+=int_get_hash_key(((int)self->mCValueName));
    result_1014+=int_get_hash_key(((int)self->mType));
    result_1014+=int_get_hash_key(((int)self->mGlobal));
    result_1014+=int_get_hash_key(((int)self->mAllocaValue));
    result_1014+=int_get_hash_key(((int)self->mNoFree));
    result_1014+=int_get_hash_key(((int)self->mFunName));
    return result_1014;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_1016;
int i_1017;
    for(    i_1016=0;    i_1016<self->size;    i_1016++    ){
        if(        self->item_existance[i_1016]) {
            if(            1) {
                come_call_finalizer3(self->items[i_1016],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_1017=0;    i_1017<self->size;    i_1017++    ){
        if(        self->item_existance[i_1017]) {
            if(            1) {
                (self->keys[i_1017] = come_decrement_ref_count2(self->keys[i_1017], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__529;
void* __right_value1003 = (void*)0;
struct sFuncNode* result_1020;
void* __right_value1004 = (void*)0;
char* __dec_obj245;
struct sFuncNode* __result_obj__530;
    if(    self==(void*)0) {
        __result_obj__529 = (void*)0;
        return __result_obj__529;
    }
    result_1020=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1020->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_1020->sname;
        result_1020->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1020->sline_real=self->sline_real;
    }
    __result_obj__530 = result_1020;
    come_call_finalizer3(result_1020,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__530;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__532;
void* __right_value1008 = (void*)0;
struct sWildCard* result_1021;
void* __right_value1009 = (void*)0;
char* __dec_obj246;
struct sWildCard* __result_obj__533;
    if(    self==(void*)0) {
        __result_obj__532 = (void*)0;
        return __result_obj__532;
    }
    result_1021=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1021->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj246=result_1021->sname;
        result_1021->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1021->sline_real=self->sline_real;
    }
    __result_obj__533 = result_1021;
    come_call_finalizer3(result_1021,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__533;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__535;
void* __right_value1013 = (void*)0;
struct sLineNode* result_1022;
void* __right_value1014 = (void*)0;
char* __dec_obj247;
struct sLineNode* __result_obj__536;
    if(    self==(void*)0) {
        __result_obj__535 = (void*)0;
        return __result_obj__535;
    }
    result_1022=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1022->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj247=result_1022->sname;
        result_1022->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1022->sline_real=self->sline_real;
    }
    __result_obj__536 = result_1022;
    come_call_finalizer3(result_1022,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__536;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__538;
void* __right_value1018 = (void*)0;
struct sSNameNode* result_1023;
void* __right_value1019 = (void*)0;
char* __dec_obj248;
struct sSNameNode* __result_obj__539;
    if(    self==(void*)0) {
        __result_obj__538 = (void*)0;
        return __result_obj__538;
    }
    result_1023=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1023->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj248=result_1023->sname;
        result_1023->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1023->sline_real=self->sline_real;
    }
    __result_obj__539 = result_1023;
    come_call_finalizer3(result_1023,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__539;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__541;
void* __right_value1023 = (void*)0;
struct sCallerFuncNode* result_1024;
void* __right_value1024 = (void*)0;
char* __dec_obj249;
struct sCallerFuncNode* __result_obj__542;
    if(    self==(void*)0) {
        __result_obj__541 = (void*)0;
        return __result_obj__541;
    }
    result_1024=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1024->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_1024->sname;
        result_1024->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1024->sline_real=self->sline_real;
    }
    __result_obj__542 = result_1024;
    come_call_finalizer3(result_1024,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__542;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__544;
void* __right_value1028 = (void*)0;
struct sCallerLineNode* result_1025;
void* __right_value1029 = (void*)0;
char* __dec_obj250;
struct sCallerLineNode* __result_obj__545;
    if(    self==(void*)0) {
        __result_obj__544 = (void*)0;
        return __result_obj__544;
    }
    result_1025=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1025->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj250=result_1025->sname;
        result_1025->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1025->sline_real=self->sline_real;
    }
    __result_obj__545 = result_1025;
    come_call_finalizer3(result_1025,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__545;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__547;
void* __right_value1033 = (void*)0;
struct sCallerSNameNode* result_1026;
void* __right_value1034 = (void*)0;
char* __dec_obj251;
struct sCallerSNameNode* __result_obj__548;
    if(    self==(void*)0) {
        __result_obj__547 = (void*)0;
        return __result_obj__547;
    }
    result_1026=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1026->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj251=result_1026->sname;
        result_1026->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1026->sline_real=self->sline_real;
    }
    __result_obj__548 = result_1026;
    come_call_finalizer3(result_1026,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__548;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__550;
void* __right_value1039 = (void*)0;
struct sVarArgTypeName* result_1030;
void* __right_value1040 = (void*)0;
char* __dec_obj252;
void* __right_value1041 = (void*)0;
struct sType* __dec_obj253;
struct sVarArgTypeName* __result_obj__551;
    if(    self==(void*)0) {
        __result_obj__550 = (void*)0;
        return __result_obj__550;
    }
    result_1030=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1030->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj252=result_1030->sname;
        result_1030->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1030->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj253=result_1030->type;
        result_1030->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj253,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__551 = result_1030;
    come_call_finalizer3(result_1030,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__551;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__554;
void* __right_value1054 = (void*)0;
struct sInlineAssembler* result_1038;
void* __right_value1055 = (void*)0;
char* __dec_obj254;
void* __right_value1056 = (void*)0;
char* __dec_obj255;
void* __right_value1057 = (void*)0;
struct list$1sNode$ph* __dec_obj256;
struct sInlineAssembler* __result_obj__555;
    if(    self==(void*)0) {
        __result_obj__554 = (void*)0;
        return __result_obj__554;
    }
    result_1038=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1038->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj254=result_1038->sname;
        result_1038->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1038->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj255=result_1038->source;
        result_1038->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj256=result_1038->exps;
        result_1038->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj256,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__555 = result_1038;
    come_call_finalizer3(result_1038,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__555;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_1041;
unsigned int hash_1042;
unsigned int it_1043;
struct sType* __result_obj__557;
struct sType* __result_obj__558;
struct sType* __result_obj__559;
struct sType* __result_obj__560;
default_value_1041 = (void*)0;
    memset(&default_value_1041,0,sizeof(struct sType*));
    hash_1042=string_get_hash_key(((char*)key))%self->size;
    it_1043=hash_1042;
    while((_Bool)1) {
        if(        self->item_existance[it_1043]) {
            if(            string_equals(self->keys[it_1043],key)) {
                __result_obj__557 = come_increment_ref_count(self->items[it_1043]);
                come_call_finalizer3(default_value_1041,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__557,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__557;
            }
            it_1043++;
            if(            it_1043>=self->size) {
                it_1043=0;
            }
            else if(            it_1043==hash_1042) {
                __result_obj__558 = come_increment_ref_count(default_value_1041);
                come_call_finalizer3(default_value_1041,sType_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__558,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__558;
            }
        }
        else {
            __result_obj__559 = come_increment_ref_count(default_value_1041);
            come_call_finalizer3(default_value_1041,sType_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__559,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__559;
        }
    }
    __result_obj__560 = come_increment_ref_count(default_value_1041);
    come_call_finalizer3(default_value_1041,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__560,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__560;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value1083 = (void*)0;
struct sNode* __result_obj__568;
    __result_obj__568 = come_increment_ref_count(((struct sNode*)(__right_value1083=expression_node_v99(info))));
    ((__right_value1083) ? __right_value1083 = come_decrement_ref_count2(__right_value1083, ((struct sNode*)__right_value1083)->finalize, ((struct sNode*)__right_value1083)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__568) ? __result_obj__568 = come_decrement_ref_count2(__result_obj__568, ((struct sNode*)__result_obj__568)->finalize, ((struct sNode*)__result_obj__568)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__568;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct sNode* __dec_obj258;
struct sNode* __result_obj__569;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct sNode* __dec_obj259;
struct sNode* __result_obj__570;
struct sNode* __result_obj__571;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj258=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__569 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__569) ? __result_obj__569 = come_decrement_ref_count2(__result_obj__569, ((struct sNode*)__result_obj__569)->finalize, ((struct sNode*)__result_obj__569)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__569;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj259=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__570 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__570) ? __result_obj__570 = come_decrement_ref_count2(__result_obj__570, ((struct sNode*)__result_obj__570)->finalize, ((struct sNode*)__result_obj__570)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__570;
    }
    __result_obj__571 = come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__571) ? __result_obj__571 = come_decrement_ref_count2(__result_obj__571, ((struct sNode*)__result_obj__571)->finalize, ((struct sNode*)__result_obj__571)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__571;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1088 = (void*)0;
struct sNode* node_1058;
void* __right_value1089 = (void*)0;
struct sNode* __dec_obj260;
struct sNode* __result_obj__572;
    node_1058=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj260=node_1058;
    node_1058=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_1058),info));
    if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__572 = come_increment_ref_count(node_1058);
    ((node_1058) ? node_1058 = come_decrement_ref_count2(node_1058, ((struct sNode*)node_1058)->finalize, ((struct sNode*)node_1058)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__572) ? __result_obj__572 = come_decrement_ref_count2(__result_obj__572, ((struct sNode*)__result_obj__572)->finalize, ((struct sNode*)__result_obj__572)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__572;
}

char* get_none_generics_name(char* class_name){
char* p_1059;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
char* __result_obj__573;
void* __right_value1092 = (void*)0;
char* __result_obj__574;
    p_1059=class_name;
    while(*p_1059) {
        if(        *p_1059==36) {
            __result_obj__573 = come_increment_ref_count(((char*)(__right_value1091=charp_substring(((char*)(__right_value1090=__builtin_string(class_name))),0,p_1059-class_name))));
            (__right_value1090 = come_decrement_ref_count2(__right_value1090, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1091 = come_decrement_ref_count2(__right_value1091, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__573 = come_decrement_ref_count2(__result_obj__573, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__573;
        }
        else {
            p_1059++;
        }
    }
    __result_obj__574 = come_increment_ref_count(((char*)(__right_value1092=__builtin_string(class_name))));
    (__right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__574 = come_decrement_ref_count2(__result_obj__574, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__574;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct buffer* buf_1060;
struct sClass* klass_1061;
char* class_name_1062;
int i_1063;
void* __right_value1095 = (void*)0;
struct sType* type_1064;
void* __right_value1096 = (void*)0;
char* type_name_1065;
int i_1066;
void* __right_value1097 = (void*)0;
char* __result_obj__575;
    buf_1060=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2643, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    klass_1061=generics_type->mClass;
    class_name_1062=klass_1061->mName;
    buffer_append_str(buf_1060,class_name_1062);
    if(    list$1sType$ph$p_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_1060,36);
        buffer_append_char(buf_1060,list$1sType$ph$p_length(generics_type->mGenericsTypes)+48);
        for(        i_1063=0;        i_1063<list$1sType$ph$p_length(generics_type->mGenericsTypes);        i_1063++        ){
            type_1064=((struct sType*)(__right_value1095=list$1sType$ph$p_operator_load_element(generics_type->mGenericsTypes,i_1063)));
            come_call_finalizer3(__right_value1095,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_name_1065=(char*)come_increment_ref_count(create_generics_name(type_1064,info));
            buffer_append_str(buf_1060,type_name_1065);
            buffer_append_char(buf_1060,36);
            for(            i_1066=0;            i_1066<type_1064->mPointerNum;            i_1066++            ){
                buffer_append_char(buf_1060,112);
            }
            if(            type_1064->mHeap) {
                buffer_append_str(buf_1060,"h");
            }
            (type_name_1065 = come_decrement_ref_count2(type_name_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__575 = come_increment_ref_count(((char*)(__right_value1097=buffer_to_string(buf_1060))));
    come_call_finalizer3(buf_1060,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1097 = come_decrement_ref_count2(__right_value1097, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__575 = come_decrement_ref_count2(__result_obj__575, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__575;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1067;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct buffer* buf_1068;
void* __right_value1100 = (void*)0;
char* __dec_obj261;
int i_1069;
void* __right_value1101 = (void*)0;
char* __dec_obj262;
void* __right_value1102 = (void*)0;
char* __dec_obj263;
int i_1070;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
char* __result_obj__576;
struct_name_1067 = (void*)0;
    buf_1068=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2678, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj261=struct_name_1067;
        struct_name_1067=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1068,"$");
            }
            for(            i_1069=0;            i_1069<obj_type->mOriginalTypeNamePointerNum;            i_1069++            ){
                buffer_append_str(buf_1068,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj262=struct_name_1067;
        struct_name_1067=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj263=struct_name_1067;
        struct_name_1067=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1068,"$");
        }
        for(        i_1070=0;        i_1070<obj_type->mPointerNum;        i_1070++        ){
            buffer_append_str(buf_1068,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1068,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1068,"pa");
    }
    __result_obj__576 = come_increment_ref_count(((char*)(__right_value1104=xsprintf("%s%s_%s",struct_name_1067,((char*)(__right_value1103=buffer_to_string(buf_1068))),fun_name))));
    (struct_name_1067 = come_decrement_ref_count2(struct_name_1067, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1068,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1103 = come_decrement_ref_count2(__right_value1103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1104 = come_decrement_ref_count2(__right_value1104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__576 = come_decrement_ref_count2(__result_obj__576, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__576;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1071;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
struct buffer* buf_1072;
void* __right_value1107 = (void*)0;
char* __dec_obj264;
void* __right_value1108 = (void*)0;
char* __dec_obj265;
int i_1073;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
char* __result_obj__577;
struct_name_1071 = (void*)0;
    buf_1072=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2719, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj264=struct_name_1071;
        struct_name_1071=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj265=struct_name_1071;
        struct_name_1071=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1072,"$");
        }
        for(        i_1073=0;        i_1073<obj_type->mPointerNum;        i_1073++        ){
            buffer_append_str(buf_1072,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1072,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1072,"pa");
    }
    __result_obj__577 = come_increment_ref_count(((char*)(__right_value1110=xsprintf("%s%s_%s",struct_name_1071,((char*)(__right_value1109=buffer_to_string(buf_1072))),fun_name))));
    (struct_name_1071 = come_decrement_ref_count2(struct_name_1071, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1072,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1109 = come_decrement_ref_count2(__right_value1109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1110 = come_decrement_ref_count2(__right_value1110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__577 = come_decrement_ref_count2(__result_obj__577, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__577;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1074;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
struct buffer* buf_1075;
void* __right_value1113 = (void*)0;
char* __dec_obj266;
int i_1076;
void* __right_value1114 = (void*)0;
char* __dec_obj267;
void* __right_value1115 = (void*)0;
char* __dec_obj268;
int i_1077;
void* __right_value1116 = (void*)0;
int len_1079;
void* __right_value1117 = (void*)0;
char* __result_obj__578;
struct_name_1074 = (void*)0;
    buf_1075=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2748, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj266=struct_name_1074;
        struct_name_1074=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1075,"$");
            }
            for(            i_1076=0;            i_1076<obj_type->mOriginalTypeNamePointerNum;            i_1076++            ){
                buffer_append_str(buf_1075,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj267=struct_name_1074;
        struct_name_1074=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj268=struct_name_1074;
        struct_name_1074=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1sType$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1075,"$");
        }
        for(        i_1077=0;        i_1077<obj_type->mPointerNum;        i_1077++        ){
            buffer_append_str(buf_1075,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1075,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1075,"pa");
    }
    char none_method_name_1078[charp_length(fun_name)+1];
    memset(&none_method_name_1078, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_1079=string_length(struct_name_1074)+string_length(((char*)(__right_value1116=buffer_to_string(buf_1075))));
    (__right_value1116 = come_decrement_ref_count2(__right_value1116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_1078,fun_name+len_1079+1,charp_length(fun_name)-len_1079-1);
    none_method_name_1078[charp_length(fun_name)-len_1079-1]=0;
    __result_obj__578 = come_increment_ref_count(((char*)(__right_value1117=__builtin_string(none_method_name_1078))));
    (struct_name_1074 = come_decrement_ref_count2(struct_name_1074, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1075,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1117 = come_decrement_ref_count2(__right_value1117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__578 = come_decrement_ref_count2(__result_obj__578, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__578;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1118 = (void*)0;
char* struct_name_1080;
void* __right_value1119 = (void*)0;
char* __result_obj__579;
    struct_name_1080=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__579 = come_increment_ref_count(((char*)(__right_value1119=xsprintf("%s_%s",struct_name_1080,fun_name))));
    (struct_name_1080 = come_decrement_ref_count2(struct_name_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1119 = come_decrement_ref_count2(__right_value1119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__579 = come_decrement_ref_count2(__result_obj__579, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__579;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1120 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_1081=0;
char* Err_1082=0;
struct sNode* __result_obj__580;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1120=err_msg(info,"unexpected word(%s)(2)\n",buf)));
    come_exception_var_c7_1081=multiple_assign_var37->v1;
    Err_1082=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_1082)?(puts(Err_1082),exit(0)):(0));
    come_call_finalizer3(__right_value1120,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__580 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1082 = come_decrement_ref_count2(Err_1082, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__580) ? __result_obj__580 = come_decrement_ref_count2(__result_obj__580, ((struct sNode*)__result_obj__580)->finalize, ((struct sNode*)__result_obj__580)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__580;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_1083;
char* p_1084;
int sline_1085;
_Bool err_flag_1086;
void* __right_value1123 = (void*)0;
char* label_1087;
void* __right_value1124 = (void*)0;
char* __dec_obj269;
char* __dec_obj270;
_Bool no_comma_1088;
_Bool in_fun_param_1089;
void* __right_value1125 = (void*)0;
struct sNode* node_1090;
void* __right_value1126 = (void*)0;
struct sNode* __dec_obj271;
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1135 = (void*)0;
struct sNode* __result_obj__583;
struct sNode* __result_obj__584;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_1083=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2818, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_1084=info->p;
            sline_1085=info->sline;
            err_flag_1086=(_Bool)0;
            label_1087=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj269=label_1087;
                label_1087=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_1086=(_Bool)1;
            }
            if(            err_flag_1086==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj270=label_1087;
                label_1087=((void*)0);
                __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_1084;
                info->sline=sline_1085;
            }
            no_comma_1088=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_1089=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_1090=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj271=node_1090;
            node_1090=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_1090),info));
            if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_1088;
            info->in_fun_param=in_fun_param_1089;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_1083,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2861, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_1087),(struct sNode*)come_increment_ref_count(node_1090))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_1087 = come_decrement_ref_count2(label_1087, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_1090) ? node_1090 = come_decrement_ref_count2(node_1090, ((struct sNode*)node_1090)->finalize, ((struct sNode*)node_1090)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_1087 = come_decrement_ref_count2(label_1087, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1090) ? node_1090 = come_decrement_ref_count2(node_1090, ((struct sNode*)node_1090)->finalize, ((struct sNode*)node_1090)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2879, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1130=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2879, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_1083,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result_obj__583 = come_increment_ref_count(((struct sNode*)(__right_value1135=_inf_value23)));
        come_call_finalizer3(params_1083,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value1130,sLambdaCall_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1135) ? __right_value1135 = come_decrement_ref_count2(__right_value1135, ((struct sNode*)__right_value1135)->finalize, ((struct sNode*)__right_value1135)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__583) ? __result_obj__583 = come_decrement_ref_count2(__result_obj__583, ((struct sNode*)__result_obj__583)->finalize, ((struct sNode*)__result_obj__583)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__583;
        come_call_finalizer3(params_1083,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result_obj__584 = come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__584) ? __result_obj__584 = come_decrement_ref_count2(__result_obj__584, ((struct sNode*)__result_obj__584)->finalize, ((struct sNode*)__result_obj__584)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__584;
    }
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__581;
void* __right_value1131 = (void*)0;
struct sLambdaCall* result_1091;
void* __right_value1132 = (void*)0;
char* __dec_obj272;
void* __right_value1133 = (void*)0;
struct sNode* __dec_obj273;
void* __right_value1134 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj274;
struct sLambdaCall* __result_obj__582;
    if(    self==(void*)0) {
        __result_obj__581 = (void*)0;
        return __result_obj__581;
    }
    result_1091=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1091->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_1091->sname;
        result_1091->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1091->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj273=result_1091->node;
        result_1091->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj274=result_1091->params;
        result_1091->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj274,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__582 = result_1091;
    come_call_finalizer3(result_1091,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__582;
}

