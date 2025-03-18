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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
    struct sMemHeaderTiny* mFreeMem[4096];
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
    struct list$1char$ph* key_list;
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
    struct list$1char$ph* key_list;
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
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
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
    _Bool emb_cpp;
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
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
static struct smart_pointer$1char$* smart_pointer$1char$_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
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
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX1070, unsigned long  int anonymous_var_nameX1071, int anonymous_var_nameX1072);
int ppoll(struct pollfd* anonymous_var_nameX1073, unsigned long  int anonymous_var_nameX1074, const struct timespec* anonymous_var_nameX1075, const struct __sigset_t* anonymous_var_nameX1076);
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
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
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
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
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
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
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
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
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
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
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
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char$* smart_pointer$1char$_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__62;
    __dec_obj13=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__62 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__65;
    __dec_obj14=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__65 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__67;
    __dec_obj15=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__67 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__67,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__67;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__69;
    __dec_obj16=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__69 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__72;
    __dec_obj17=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__72 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__77;
    __dec_obj18=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__77 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__79;
    __dec_obj19=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__79 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__79,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__79;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_139;
struct list$1char$* __result_obj__82;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1char$_push_back(self,values[i_139]);
    }
    __result_obj__82 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_140;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_141;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_142;
struct list$1char$* __result_obj__81;
    if(    self->len==0) {
        litem_140=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1274, "struct list_item$1char$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1284, "struct list_item$1char$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1294, "struct list_item$1char$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__81 = self;
    return __result_obj__81;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_143;
struct list_item$1char$* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_145;
struct list$1char$p* __result_obj__85;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1char$p_push_back(self,values[i_145]);
    }
    __result_obj__85 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_146;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_147;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_148;
struct list$1char$p* __result_obj__84;
    if(    self->len==0) {
        litem_146=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1274, "struct list_item$1char$p*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1284, "struct list_item$1char$p*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1294, "struct list_item$1char$p*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__84 = self;
    return __result_obj__84;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_149;
struct list_item$1char$p* prev_it_150;
    it_149=self->head;
    while(it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_151;
struct list$1short$* __result_obj__88;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1short$_push_back(self,values[i_151]);
    }
    __result_obj__88 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_152;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_153;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_154;
struct list$1short$* __result_obj__87;
    if(    self->len==0) {
        litem_152=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1274, "struct list_item$1short$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1284, "struct list_item$1short$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1294, "struct list_item$1short$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__87 = self;
    return __result_obj__87;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_155;
struct list_item$1short$* prev_it_156;
    it_155=self->head;
    while(it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_157;
struct list$1int$* __result_obj__91;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1int$_push_back(self,values[i_157]);
    }
    __result_obj__91 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__91,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_158;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_159;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_160;
struct list$1int$* __result_obj__90;
    if(    self->len==0) {
        litem_158=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1274, "struct list_item$1int$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1284, "struct list_item$1int$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1294, "struct list_item$1int$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_161;
struct list_item$1int$* prev_it_162;
    it_161=self->head;
    while(it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_163;
struct list$1long$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_163=0;    i_163<num_value;    i_163++    ){
        list$1long$_push_back(self,values[i_163]);
    }
    __result_obj__94 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__94,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_164;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_165;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_166;
struct list$1long$* __result_obj__93;
    if(    self->len==0) {
        litem_164=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1274, "struct list_item$1long$*"))));
        litem_164->prev=((void*)0);
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head=litem_164;
    }
    else if(    self->len==1) {
        litem_165=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1284, "struct list_item$1long$*"))));
        litem_165->prev=self->head;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head->next=litem_165;
    }
    else {
        litem_166=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1294, "struct list_item$1long$*"))));
        litem_166->prev=self->tail;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail->next=litem_166;
        self->tail=litem_166;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_167;
struct list_item$1long$* prev_it_168;
    it_167=self->head;
    while(it_167!=((void*)0)) {
        prev_it_168=it_167;
        it_167=it_167->next;
        /*c*/ come_call_finalizer3(prev_it_168,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_169;
struct list$1float$* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_169=0;    i_169<num_value;    i_169++    ){
        list$1float$_push_back(self,values[i_169]);
    }
    __result_obj__97 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__97,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_170;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_171;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_172;
struct list$1float$* __result_obj__96;
    if(    self->len==0) {
        litem_170=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1274, "struct list_item$1float$*"))));
        litem_170->prev=((void*)0);
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head=litem_170;
    }
    else if(    self->len==1) {
        litem_171=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1284, "struct list_item$1float$*"))));
        litem_171->prev=self->head;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head->next=litem_171;
    }
    else {
        litem_172=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1294, "struct list_item$1float$*"))));
        litem_172->prev=self->tail;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail->next=litem_172;
        self->tail=litem_172;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_173;
struct list_item$1float$* prev_it_174;
    it_173=self->head;
    while(it_173!=((void*)0)) {
        prev_it_174=it_173;
        it_173=it_173->next;
        /*c*/ come_call_finalizer3(prev_it_174,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_175;
struct list$1double$* __result_obj__100;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1double$_push_back(self,values[i_175]);
    }
    __result_obj__100 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__100,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_176;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_177;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_178;
struct list$1double$* __result_obj__99;
    if(    self->len==0) {
        litem_176=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1274, "struct list_item$1double$*"))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1284, "struct list_item$1double$*"))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1294, "struct list_item$1double$*"))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__99 = self;
    return __result_obj__99;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_179;
struct list_item$1double$* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*c*/ come_call_finalizer3(prev_it_180,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__138;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__138 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__138,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__138;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_214;
struct list_item$1char$ph* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        /*c*/ come_call_finalizer3(prev_it_215,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value173 = (void*)0;
struct list_item$1char$ph* litem_219;
char* __dec_obj20;
void* __right_value174 = (void*)0;
struct list_item$1char$ph* litem_220;
char* __dec_obj21;
void* __right_value175 = (void*)0;
struct list_item$1char$ph* litem_221;
char* __dec_obj22;
struct list$1char$ph* __result_obj__140;
    if(    self->len==0) {
        litem_219=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value173=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1274, "struct list_item$1char$ph*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        __dec_obj20=litem_219->item,
        litem_219->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1) {
        litem_220=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value174=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1284, "struct list_item$1char$ph*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        __dec_obj21=litem_220->item,
        litem_220->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value175=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1294, "struct list_item$1char$ph*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        __dec_obj22=litem_221->item,
        litem_221->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__140 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__140;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value231 = (void*)0;
struct sNode* __dec_obj23;
void* __right_value232 = (void*)0;
char* __dec_obj24;
struct sReturnNode* __result_obj__197;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value231,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj23=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj24=self->value_source,
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__197 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__197,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value233 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = come_increment_ref_count(((char*)(__right_value233=__builtin_string("sReturnNode"))));
    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_274;
void* __right_value272 = (void*)0;
struct sType* result_type_275;
void* __right_value273 = (void*)0;
struct sType* result_type2_303;
struct sType* result_type3_304;
void* __right_value274 = (void*)0;
_Bool _if_conditional1;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj49;
_Bool Value_305;
_Bool __result_obj__214;
void* __right_value276 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value277 = (void*)0;
struct sType* come_value_type_307;
void* __right_value278 = (void*)0;
struct sType* __dec_obj50;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_309=0;
char* Err_310=0;
_Bool _if_conditional2;
_Bool __result_obj__215;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __if_result__0_311 = (void*)0;
struct list$1sVar$ph* o2_saved_312;
struct sVar* it_315;
void* __right_value289 = (void*)0;
struct list$1sVar$ph* __dec_obj51;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sFun* come_fun_322;
void* __if_result__1_323 = (void*)0;
struct list$1sVar$ph* o2_saved_324;
struct sVar* it_325;
void* __right_value295 = (void*)0;
struct list$1sVar$ph* __dec_obj52;
void* __right_value296 = (void*)0;
    if(    self->value) {
        come_fun_274=info->come_fun;
        result_type_275=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_274->mResultType));
        result_type2_303=(struct sType*)come_increment_ref_count(solve_generics(result_type_275,info->generics_type,info));
        result_type3_304=result_type2_303->mNoSolvedGenericsType;
        if(        result_type2_303->mNoSolvedGenericsType) {
            result_type3_304=result_type2_303->mNoSolvedGenericsType;
        }
        else {
            result_type3_304=result_type2_303;
        }
        if(        result_type_275->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value274=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj49=self->value,
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
        }
        Value_305=node_compile(self->value,info);
        if(        !Value_305) {
            __result_obj__214 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_275,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_303,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__214;
        }
        else {
        }
        come_value_306=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_307=(struct sType*)come_increment_ref_count(solve_generics(come_value_306->type,info->generics_type,info));
        __dec_obj50=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_306->type));
        /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_306->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_274->mBlock,info,come_value_306->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_306->c_value);
        }
        else {
            static int result_num_308=0;
            result_num_308++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value281=make_define_var(result_type2_303,((char*)(__right_value280=xsprintf("__result_obj__\%s",((char*)(__right_value279=int_to_string(result_num_308)))))),(_Bool)0,info))));
            (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_303->mClass->mName)>strlen("tuple")&&memcmp(result_type2_303->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value282=check_assign_type("result type",result_type2_303,come_value_type_307,come_value_306,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_309=multiple_assign_var1->v1;
                    Err_310=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_310)),                    /*c*/ come_call_finalizer3(__right_value282,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional2) {
                        __result_obj__215 = (_Bool)1;
                        (Err_310 = come_decrement_ref_count(Err_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_275,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_303,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_value_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_value_type_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__215;
                    }
                    else {
                    }
                    (Err_310 = come_decrement_ref_count(Err_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                result_type2_303->mHeap) {
                    add_come_code(info,((char*)(__right_value284=xsprintf("__result_obj__\%s = come_increment_ref_count(%%s);\n",((char*)(__right_value283=int_to_string(result_num_308)))))),come_value_306->c_value);
                    (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value286=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value285=int_to_string(result_num_308)))))),come_value_306->c_value);
                    (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value288=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value287=int_to_string(result_num_308)))))),come_value_306->c_value);
                (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_274->mBlock,info,come_value_306->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_312=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_315=list$1sVar$ph_begin((o2_saved_312));                    !list$1sVar$ph_end((o2_saved_312));                    it_315=list$1sVar$ph_next((o2_saved_312))                    ){
                        free_object(((struct sType*)(__right_value289=come_call_cloner(sType_clone, it_315->mType))),it_315->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value289,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_312,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __dec_obj51=info->match_it_var,
                    __if_result__0_311=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    /*b*/ come_call_finalizer3(__dec_obj51,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                /*c*/ come_call_finalizer3(__if_result__0_311,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value290=xsprintf("come_heap_final();\n"))));
                (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_303->mHeap) {
                free_object(result_type2_303,((char*)(__right_value292=xsprintf("__result_obj__\%s",((char*)(__right_value291=int_to_string(result_num_308)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value294=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value293=int_to_string(result_num_308)))))));
            (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(result_type_275,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_303,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_type_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_fun_322=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_322->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_324=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_325=list$1sVar$ph_begin((o2_saved_324));                !list$1sVar$ph_end((o2_saved_324));                it_325=list$1sVar$ph_next((o2_saved_324))                ){
                    free_object(((struct sType*)(__right_value295=come_call_cloner(sType_clone, it_325->mType))),it_325->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value295,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_324,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj52=info->match_it_var,
                __if_result__1_323=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                /*b*/ come_call_finalizer3(__dec_obj52,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            /*c*/ come_call_finalizer3(__if_result__1_323,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value296=xsprintf("come_heap_final();\n"))));
            (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__199;
void* __right_value234 = (void*)0;
struct sType* result_280;
void* __right_value235 = (void*)0;
struct sType* __dec_obj25;
void* __right_value236 = (void*)0;
struct sType* __dec_obj26;
void* __right_value244 = (void*)0;
struct list$1sType$ph* __dec_obj30;
void* __right_value245 = (void*)0;
struct sType* __dec_obj31;
void* __right_value246 = (void*)0;
struct sType* __dec_obj32;
void* __right_value248 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value250 = (void*)0;
char* __dec_obj35;
void* __right_value251 = (void*)0;
char* __dec_obj36;
void* __right_value252 = (void*)0;
char* __dec_obj37;
void* __right_value260 = (void*)0;
struct list$1sNode$ph* __dec_obj41;
void* __right_value261 = (void*)0;
char* __dec_obj42;
void* __right_value262 = (void*)0;
struct list$1sType$ph* __dec_obj43;
void* __right_value270 = (void*)0;
struct list$1char$ph* __dec_obj47;
void* __right_value271 = (void*)0;
struct sType* __dec_obj48;
struct sType* __result_obj__213;
    if(    self==(void*)0) {
        __result_obj__199 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__199,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__199;
    }
    result_280=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_280->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj25=result_280->mOriginalLoadVarType,
        result_280->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj26=result_280->mChannelType,
        result_280->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj30=result_280->mGenericsTypes,
        result_280->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj30,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj31=result_280->mNoSolvedGenericsType,
        result_280->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_280->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj32=result_280->mAnyOriginalType,
        result_280->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_280->mSizeNum,
        result_280->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj34=result_280->mAlignas,
        result_280->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj35=result_280->mTupleName,
        result_280->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj36=result_280->mAttribute,
        result_280->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_280->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_280->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_280->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_280->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_280->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_280->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_280->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_280->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_280->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_280->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_280->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_280->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_280->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_280->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_280->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_280->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_280->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_280->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_280->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_280->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_280->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_280->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_280->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_280->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_280->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_280->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj37=result_280->mAsmName,
        result_280->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_280->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_280->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_280->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj41=result_280->mArrayNum,
        result_280->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_280->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_280->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_280->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_280->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_280->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_280->mOriginalTypeName,
        result_280->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_280->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_280->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_280->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_280->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj43=result_280->mParamTypes,
        result_280->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj43,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj47=result_280->mParamNames,
        result_280->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj47,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj48=result_280->mResultType,
        result_280->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_280->mVarArgs=self->mVarArgs;
    }
    __result_obj__213 = come_increment_ref_count(result_280);
    /*c*/ come_call_finalizer3(result_280,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__213,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_276;
struct list_item$1sType$ph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        /*c*/ come_call_finalizer3(prev_it_277,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_278;
struct list_item$1sNode$ph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        /*c*/ come_call_finalizer3(prev_it_279,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__200;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct list$1sType$ph* result_281;
struct list_item$1sType$ph* it_282;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1sType$ph* __result_obj__203;
    if(    self==((void*)0)) {
        __result_obj__200 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__200,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__200;
    }
    result_281=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1185, "struct list$1sType$ph*"))));
    it_282=self->head;
    while(it_282!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_281,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_282->item)));
        }
        else {
            list$1sType$ph_add(result_281,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_282->item)));
        }
        it_282=it_282->next;
    }
    __result_obj__203 = come_increment_ref_count(result_281);
    /*c*/ come_call_finalizer3(result_281,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__201;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__201 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value239 = (void*)0;
struct list_item$1sType$ph* litem_283;
struct sType* __dec_obj27;
void* __right_value240 = (void*)0;
struct list_item$1sType$ph* litem_284;
struct sType* __dec_obj28;
void* __right_value241 = (void*)0;
struct list_item$1sType$ph* litem_285;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__202;
    if(    self->len==0) {
        litem_283=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value239=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1204, "struct list_item$1sType$ph*"))));
        litem_283->prev=((void*)0);
        litem_283->next=((void*)0);
        __dec_obj27=litem_283->item,
        litem_283->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_283;
        self->head=litem_283;
    }
    else if(    self->len==1) {
        litem_284=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value240=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1214, "struct list_item$1sType$ph*"))));
        litem_284->prev=self->head;
        litem_284->next=((void*)0);
        __dec_obj28=litem_284->item,
        litem_284->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_284;
        self->head->next=litem_284;
    }
    else {
        litem_285=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value241=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1224, "struct list_item$1sType$ph*"))));
        litem_285->prev=self->tail;
        litem_285->next=((void*)0);
        __dec_obj29=litem_285->item,
        litem_285->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_285;
        self->tail=litem_285;
    }
    self->len++;
    __result_obj__202 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_286;
struct list_item$1sType$ph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        /*c*/ come_call_finalizer3(prev_it_287,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__204;
void* __right_value247 = (void*)0;
struct sNode* result_288;
struct sNode* __result_obj__205;
    if(    self==(void*)0) {
        __result_obj__204 = come_increment_ref_count((void*)0);
        ((__result_obj__204) ? __result_obj__204 = come_decrement_ref_count(__result_obj__204, ((struct sNode*)__result_obj__204)->finalize, ((struct sNode*)__result_obj__204)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__204;
    }
    result_288=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_288->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_288->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_288->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_288->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_288->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_288->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_288->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_288->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_288->kind=self->kind;
    }
    __result_obj__205 = come_increment_ref_count(result_288);
    ((result_288) ? result_288 = come_decrement_ref_count(result_288, ((struct sNode*)result_288)->finalize, ((struct sNode*)result_288)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__205) ? __result_obj__205 = come_decrement_ref_count(__result_obj__205, ((struct sNode*)__result_obj__205)->finalize, ((struct sNode*)__result_obj__205)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__205;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__206;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct list$1sNode$ph* result_289;
struct list_item$1sNode$ph* it_290;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sNode$ph* __result_obj__209;
    if(    self==((void*)0)) {
        __result_obj__206 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__206,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__206;
    }
    result_289=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_290=self->head;
    while(it_290!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_289,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_290->item)));
        }
        else {
            list$1sNode$ph_add(result_289,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_290->item)));
        }
        it_290=it_290->next;
    }
    __result_obj__209 = come_increment_ref_count(result_289);
    /*c*/ come_call_finalizer3(result_289,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__207;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__207 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value255 = (void*)0;
struct list_item$1sNode$ph* litem_291;
struct sNode* __dec_obj38;
void* __right_value256 = (void*)0;
struct list_item$1sNode$ph* litem_292;
struct sNode* __dec_obj39;
void* __right_value257 = (void*)0;
struct list_item$1sNode$ph* litem_293;
struct sNode* __dec_obj40;
struct list$1sNode$ph* __result_obj__208;
    if(    self->len==0) {
        litem_291=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value255=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1204, "struct list_item$1sNode$ph*"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj38=litem_291->item,
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value256=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1214, "struct list_item$1sNode$ph*"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj39=litem_292->item,
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value257=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1224, "struct list_item$1sNode$ph*"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj40=litem_293->item,
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result_obj__208 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__208;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_294;
struct list_item$1sNode$ph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*c*/ come_call_finalizer3(prev_it_295,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__210;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1char$ph* result_296;
struct list_item$1char$ph* it_297;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1char$ph* __result_obj__212;
    if(    self==((void*)0)) {
        __result_obj__210 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__210,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__210;
    }
    result_296=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1185, "struct list$1char$ph*"))));
    it_297=self->head;
    while(it_297!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_296,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_297->item)));
        }
        else {
            list$1char$ph_add(result_296,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_297->item)));
        }
        it_297=it_297->next;
    }
    __result_obj__212 = come_increment_ref_count(result_296);
    /*c*/ come_call_finalizer3(result_296,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value265 = (void*)0;
struct list_item$1char$ph* litem_298;
char* __dec_obj44;
void* __right_value266 = (void*)0;
struct list_item$1char$ph* litem_299;
char* __dec_obj45;
void* __right_value267 = (void*)0;
struct list_item$1char$ph* litem_300;
char* __dec_obj46;
struct list$1char$ph* __result_obj__211;
    if(    self->len==0) {
        litem_298=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value265=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1204, "struct list_item$1char$ph*"))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj44=litem_298->item,
        litem_298->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value266=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1214, "struct list_item$1char$ph*"))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj45=litem_299->item,
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value267=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1224, "struct list_item$1char$ph*"))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj46=litem_300->item,
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
    }
    self->len++;
    __result_obj__211 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__211;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_301;
struct list_item$1char$ph* prev_it_302;
    it_301=self->head;
    while(it_301!=((void*)0)) {
        prev_it_302=it_301;
        it_301=it_301->next;
        /*c*/ come_call_finalizer3(prev_it_302,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_313;
struct sVar* __result_obj__216;
struct sVar* __result_obj__217;
struct sVar* result_314;
struct sVar* __result_obj__218;
result_313 = (void*)0;
result_314 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_313,0,sizeof(struct sVar*));
        __result_obj__216 = result_313;
        return __result_obj__216;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__217 = self->it->item;
        return __result_obj__217;
    }
    memset(&result_314,0,sizeof(struct sVar*));
    __result_obj__218 = result_314;
    return __result_obj__218;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_316;
struct sVar* __result_obj__219;
struct sVar* __result_obj__220;
struct sVar* result_317;
struct sVar* __result_obj__221;
result_316 = (void*)0;
result_317 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_316,0,sizeof(struct sVar*));
        __result_obj__219 = result_316;
        return __result_obj__219;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__220 = self->it->item;
        return __result_obj__220;
    }
    memset(&result_317,0,sizeof(struct sVar*));
    __result_obj__221 = result_317;
    return __result_obj__221;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_318;
struct list_item$1sVar$ph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        /*c*/ come_call_finalizer3(prev_it_319,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_320;
struct list_item$1sVar$ph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        /*c*/ come_call_finalizer3(prev_it_321,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value297 = (void*)0;
char* __dec_obj53;
struct sOutputNode* __result_obj__222;
    ((struct sNodeBase*)(__right_value297=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value297,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj53=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__222 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__222,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__222;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value298 = (void*)0;
char* __result_obj__223;
    __result_obj__223 = come_increment_ref_count(((char*)(__right_value298=__builtin_string("sOutputNode"))));
    (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__223;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value299 = (void*)0;
char* __dec_obj54;
struct list$1sNode$ph* __dec_obj55;
struct sInlineAssembler* __result_obj__224;
    ((struct sNodeBase*)(__right_value299=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value299,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj54=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj55=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    /*b*/ come_call_finalizer3(__dec_obj55,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__224 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__224,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__224;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value300 = (void*)0;
char* __result_obj__225;
    __result_obj__225 = come_increment_ref_count(((char*)(__right_value300=__builtin_string("sInlineAssembler"))));
    (__right_value300 = come_decrement_ref_count(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__225;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_326;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_327;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct buffer* buf_328;
char* p_329;
_Bool dquort_330;
int num_exp_331;
void* __right_value305 = (void*)0;
struct sNode* node_332;
_Bool Value_336;
_Bool __result_obj__228;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_337;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __dec_obj56;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__230;
    source_326=(char*)come_increment_ref_count(self->source);
    come_value_327=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 188, "struct CVALUE*"))));
    buf_328=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 190, "struct buffer*"))));
    p_329=source_326;
    while(*p_329!=40) {
        buffer_append_char(buf_328,*p_329);
        p_329++;
    }
    if(    *p_329==40) {
        buffer_append_char(buf_328,*p_329);
        p_329++;
        while(*p_329==32||*p_329==9||*p_329==10) {
            buffer_append_char(buf_328,*p_329);
            p_329++;
        }
    }
    dquort_330=(_Bool)0;
    num_exp_331=0;
    while(*p_329) {
        if(        *p_329==34) {
            buffer_append_char(buf_328,*p_329);
            p_329++;
            dquort_330=!dquort_330;
        }
        else if(        dquort_330) {
            buffer_append_char(buf_328,*p_329);
            p_329++;
        }
        else if(        *p_329==40) {
            buffer_append_char(buf_328,*p_329);
            p_329++;
            node_332=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_331++));
            Value_336=node_compile(node_332,info);
            if(            !Value_336) {
                __result_obj__228 = (_Bool)0;
                ((node_332) ? node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_326 = come_decrement_ref_count(source_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_327,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_328,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            else {
            }
            come_value_337=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_328,come_value_337->c_value);
            if(            *p_329==41) {
                buffer_append_char(buf_328,*p_329);
                p_329++;
            }
            ((node_332) ? node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_337,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_328,*p_329);
            p_329++;
        }
    }
    __dec_obj56=come_value_327->c_value,
    come_value_327->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value307=buffer_to_string(buf_328)))));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj57=come_value_327->type,
    come_value_327->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 247, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_327->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_327));
    add_come_last_code(info,"%s",come_value_327->c_value);
    __result_obj__230 = (_Bool)1;
    (source_326 = come_decrement_ref_count(source_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_327,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_328,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__230;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_333;
int i_334;
struct sNode* __result_obj__226;
struct sNode* default_value_335;
struct sNode* __result_obj__227;
default_value_335 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_333=self->head;
    i_334=0;
    while(it_333!=((void*)0)) {
        if(        position==i_334) {
            __result_obj__226 = come_increment_ref_count(it_333->item);
            ((__result_obj__226) ? __result_obj__226 = come_decrement_ref_count(__result_obj__226, ((struct sNode*)__result_obj__226)->finalize, ((struct sNode*)__result_obj__226)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__226;
        }
        it_333=it_333->next;
        i_334++;
    }
    memset(&default_value_335,0,sizeof(struct sNode*));
    __result_obj__227 = come_increment_ref_count(default_value_335);
    ((default_value_335) ? default_value_335 = come_decrement_ref_count(default_value_335, ((struct sNode*)default_value_335)->finalize, ((struct sNode*)default_value_335)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__227) ? __result_obj__227 = come_decrement_ref_count(__result_obj__227, ((struct sNode*)__result_obj__227)->finalize, ((struct sNode*)__result_obj__227)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__227;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value312 = (void*)0;
struct list_item$1CVALUE$ph* litem_338;
struct CVALUE* __dec_obj58;
void* __right_value313 = (void*)0;
struct list_item$1CVALUE$ph* litem_339;
struct CVALUE* __dec_obj59;
void* __right_value314 = (void*)0;
struct list_item$1CVALUE$ph* litem_340;
struct CVALUE* __dec_obj60;
struct list$1CVALUE$ph* __result_obj__229;
    if(    self->len==0) {
        litem_338=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value312=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1274, "struct list_item$1CVALUE$ph*"))));
        litem_338->prev=((void*)0);
        litem_338->next=((void*)0);
        __dec_obj58=litem_338->item,
        litem_338->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_338;
        self->head=litem_338;
    }
    else if(    self->len==1) {
        litem_339=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value313=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1284, "struct list_item$1CVALUE$ph*"))));
        litem_339->prev=self->head;
        litem_339->next=((void*)0);
        __dec_obj59=litem_339->item,
        litem_339->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_339;
        self->head->next=litem_339;
    }
    else {
        litem_340=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value314=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1294, "struct list_item$1CVALUE$ph*"))));
        litem_340->prev=self->tail;
        litem_340->next=((void*)0);
        __dec_obj60=litem_340->item,
        litem_340->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_340;
        self->tail=litem_340;
    }
    self->len++;
    __result_obj__229 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value315 = (void*)0;
struct sCurrentNode2* __result_obj__231;
    ((struct sNodeBase*)(__right_value315=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value315,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__231 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__231,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value316 = (void*)0;
char* __result_obj__232;
    __result_obj__232 = come_increment_ref_count(((char*)(__right_value316=__builtin_string(self->sname))));
    (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__232;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value317 = (void*)0;
char* __result_obj__233;
    __result_obj__233 = come_increment_ref_count(((char*)(__right_value317=__builtin_string("sCurrentNode"))));
    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__233;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value318 = (void*)0;
char* class_name_341;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sClass* current_stack_342;
struct sVarTable* vtable_343;
struct map$2char$phsVar$ph* o2_saved_344;
char* it_347;
char* key_350;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sVar* value_351;
void* __right_value323 = (void*)0;
struct sType* type2_355;
void* __right_value324 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct tuple2$2char$phsType$ph* item_356;
void* __right_value330 = (void*)0;
struct sType* type3_367;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct tuple2$2char$phsType$ph* item2_370;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_419;
char* it_420;
char* key_421;
void* __right_value344 = (void*)0;
struct sVar* value_422;
void* __right_value345 = (void*)0;
struct sType* type2_423;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct tuple2$2char$phsType$ph* item_424;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value350 = (void*)0;
char* __dec_obj68;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sType* __dec_obj69;
_Bool __result_obj__270;
    info->current_stack_num++;
    class_name_341=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_342=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 427, "struct sClass*")),(char*)come_increment_ref_count(class_name_341),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_343=info->lv_table;
    while(vtable_343) {
        for(        o2_saved_344=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_343->mVars)),it_347=map$2char$phsVar$ph_begin((o2_saved_344));        !map$2char$phsVar$ph_end((o2_saved_344));        it_347=map$2char$phsVar$ph_next((o2_saved_344))        ){
            key_350=it_347;
            value_351=((struct sVar*)(__right_value322=map$2char$phsVar$ph$p_operator_load_element(vtable_343->mVars,((char*)(__right_value321=__builtin_string(key_350))))));
            (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value322,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_355=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_351->mType));
            type2_355->mPointerNum++;
            item_356=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 440, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_351->mCValueName)),(struct sType*)come_increment_ref_count(type2_355)));
            if(            value_351->mCValueName!=((void*)0)) {
                if(                strcmp(value_351->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_351->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_351->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_351->mType->mClass->mName,"va_list")||string_operator_equals(value_351->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_355->mArrayNum)==1) {
                    type3_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_355));
                    list$1sNode$ph_reset(type3_367->mArrayNum);
                    type3_367->mPointerNum=1;
                    type3_367->mOriginIsArray=(_Bool)1;
                    item2_370=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 460, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_351->mCValueName)),(struct sType*)come_increment_ref_count(type3_367)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_342->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_370)));
                    value_351->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_370,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_342->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_356)));
                }
            }
            /*c*/ come_call_finalizer3(type2_355,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_356,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_344,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_343=vtable_343->mParent;
    }
    output_struct(current_stack_342,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_341),(struct sClass*)come_increment_ref_count(current_stack_342));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_341,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_341);
    vtable_343=info->lv_table;
    while(vtable_343) {
        for(        o2_saved_419=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_343->mVars)),it_420=map$2char$phsVar$ph_begin((o2_saved_419));        !map$2char$phsVar$ph_end((o2_saved_419));        it_420=map$2char$phsVar$ph_next((o2_saved_419))        ){
            key_421=it_420;
            value_422=((struct sVar*)(__right_value344=map$2char$phsVar$ph$p_operator_load_element(vtable_343->mVars,key_421)));
            /*c*/ come_call_finalizer3(__right_value344,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_423=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_422->mType));
            item_424=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 489, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_422->mCValueName),(struct sType*)come_increment_ref_count(type2_423)));
            if(            value_422->mCValueName!=((void*)0)) {
                if(                strcmp(value_422->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_422->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_422->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_422->mType->mClass->mName,"va_list")||string_operator_equals(value_422->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_423->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_422->mCValueName,value_422->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_422->mCValueName,value_422->mCValueName);
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_423,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_424,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_419,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_343=vtable_343->mParent;
    }
    come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 518, "struct CVALUE*"))));
    __dec_obj68=come_value_425->c_value,
    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj69=come_value_425->type,
    come_value_425->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 521, "struct sType*")),(char*)come_increment_ref_count(class_name_341),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_425->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_425->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
    __result_obj__270 = (_Bool)1;
    (class_name_341 = come_decrement_ref_count(class_name_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_342,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_345;
char* __result_obj__234;
char* __result_obj__235;
char* result_346;
char* __result_obj__236;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_345,0,sizeof(char*));
        __result_obj__234 = result_345;
        return __result_obj__234;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__235 = self->key_list->it->item;
        return __result_obj__235;
    }
    memset(&result_346,0,sizeof(char*));
    __result_obj__236 = result_346;
    return __result_obj__236;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_348;
char* __result_obj__237;
char* __result_obj__238;
char* result_349;
char* __result_obj__239;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_348,0,sizeof(char*));
        __result_obj__237 = result_348;
        return __result_obj__237;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__238 = self->key_list->it->item;
        return __result_obj__238;
    }
    memset(&result_349,0,sizeof(char*));
    __result_obj__239 = result_349;
    return __result_obj__239;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_352;
unsigned int hash_353;
unsigned int it_354;
struct sVar* __result_obj__240;
struct sVar* __result_obj__241;
struct sVar* __result_obj__242;
struct sVar* __result_obj__243;
default_value_352 = (void*)0;
    memset(&default_value_352,0,sizeof(struct sVar*));
    hash_353=string_get_hash_key(((char*)key))%self->size;
    it_354=hash_353;
    while((_Bool)1) {
        if(        self->item_existance[it_354]) {
            if(            string_equals(self->keys[it_354],key)) {
                __result_obj__240 = come_increment_ref_count(self->items[it_354]);
                /*c*/ come_call_finalizer3(default_value_352,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__240,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__240;
            }
            it_354++;
            if(            it_354>=self->size) {
                it_354=0;
            }
            else if(            it_354==hash_353) {
                __result_obj__241 = come_increment_ref_count(default_value_352);
                /*c*/ come_call_finalizer3(default_value_352,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__241,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
        }
        else {
            __result_obj__242 = come_increment_ref_count(default_value_352);
            /*c*/ come_call_finalizer3(default_value_352,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__242,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__242;
        }
    }
    __result_obj__243 = come_increment_ref_count(default_value_352);
    /*c*/ come_call_finalizer3(default_value_352,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__244;
void* __right_value325 = (void*)0;
struct tuple2$2char$phsType$ph* result_357;
void* __right_value326 = (void*)0;
char* __dec_obj61;
void* __right_value327 = (void*)0;
struct sType* __dec_obj62;
struct tuple2$2char$phsType$ph* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__244,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__244;
    }
    result_357=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj61=result_357->v1,
        result_357->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj62=result_357->v2,
        result_357->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__245 = come_increment_ref_count(result_357);
    /*c*/ come_call_finalizer3(result_357,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__245,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_358;
    result_358=0;
    result_358+=int_get_hash_key(((int)self->v1));
    result_358+=int_get_hash_key(((int)self->v2));
    return result_358;
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
    if(    !list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_359;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_360;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_359=left->head;
    it2_360=right->head;
    while(it_359!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_359->item,it2_360->item)) {
            return (_Bool)0;
        }
        it_359=it_359->next;
        it2_360=it2_360->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_361;
struct list_item$1sType$ph* it2_362;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_361=left->head;
    it2_362=right->head;
    while(it_361!=((void*)0)) {
        if(        !sType_equals(it_361->item,it2_362->item)) {
            return (_Bool)0;
        }
        it_361=it_361->next;
        it2_362=it2_362->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_363;
struct list_item$1sNode$ph* it2_364;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_363=left->head;
    it2_364=right->head;
    while(it_363!=((void*)0)) {
        if(        !sNode_equals(it_363->item,it2_364->item)) {
            return (_Bool)0;
        }
        it_363=it_363->next;
        it2_364=it2_364->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_365;
struct list_item$1char$ph* it2_366;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_365=left->head;
    it2_366=right->head;
    while(it_365!=((void*)0)) {
        if(        !string_equals(it_365->item,it2_366->item)) {
            return (_Bool)0;
        }
        it_365=it_365->next;
        it2_366=it2_366->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj63;
struct sType* __dec_obj64;
struct tuple2$2char$phsType$ph* __result_obj__246;
    __dec_obj63=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj64=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__246 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_368;
struct list_item$1sNode$ph* prev_it_369;
struct list$1sNode$ph* __result_obj__247;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        /*c*/ come_call_finalizer3(prev_it_369,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__247 = self;
    return __result_obj__247;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value334 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_371;
struct tuple2$2char$phsType$ph* __dec_obj65;
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_372;
struct tuple2$2char$phsType$ph* __dec_obj66;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_373;
struct tuple2$2char$phsType$ph* __dec_obj67;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__248;
    if(    self->len==0) {
        litem_371=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value334=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1274, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_371->prev=((void*)0);
        litem_371->next=((void*)0);
        __dec_obj65=litem_371->item,
        litem_371->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj65,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_371;
        self->head=litem_371;
    }
    else if(    self->len==1) {
        litem_372=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value335=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1284, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_372->prev=self->head;
        litem_372->next=((void*)0);
        __dec_obj66=litem_372->item,
        litem_372->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj66,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_372;
        self->head->next=litem_372;
    }
    else {
        litem_373=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value336=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1294, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_373->prev=self->tail;
        litem_373->next=((void*)0);
        __dec_obj67=litem_373->item,
        litem_373->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj67,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_373;
        self->tail=litem_373;
    }
    self->len++;
    __result_obj__248 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_374;
int i_375;
    for(    i_374=0;    i_374<self->size;    i_374++    ){
        if(        self->item_existance[i_374]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_374],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_375=0;    i_375<self->size;    i_375++    ){
        if(        self->item_existance[i_375]) {
            if(            1) {
                (self->keys[i_375] = come_decrement_ref_count(self->keys[i_375], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_395;
unsigned int it_396;
_Bool same_key_exist_413;
char* it2_416;
struct map$2char$phsClass$ph* __result_obj__269;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_395=string_get_hash_key(((char*)key))%self->size;
    it_396=hash_395;
    while((_Bool)1) {
        if(        self->item_existance[it_396]) {
            if(            string_equals(self->keys[it_396],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_396]);
                    (self->keys[it_396] = come_decrement_ref_count(self->keys[it_396], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_396]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_396]);
                    self->keys[it_396]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_396],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_396]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_396]=item;
                }
                break;
            }
            it_396++;
            if(            it_396>=self->size) {
                it_396=0;
            }
            else if(            it_396==hash_395) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_396]=(_Bool)1;
            if(            1) {
                self->keys[it_396]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_396]=key;
            }
            if(            1) {
                self->items[it_396]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_396]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_413=(_Bool)0;
    for(    it2_416=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_416=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_416,key)) {
            same_key_exist_413=(_Bool)1;
        }
    }
    if(    !same_key_exist_413) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__269 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_376;
void* __right_value339 = (void*)0;
char** keys_377;
void* __right_value340 = (void*)0;
struct sClass** items_378;
void* __right_value341 = (void*)0;
_Bool* item_existance_379;
int len_380;
char* it_383;
struct sClass* default_value_386;
void* __right_value342 = (void*)0;
struct sClass* it2_387;
unsigned int hash_392;
int n_393;
struct sClass* default_value_394;
void* __right_value343 = (void*)0;
default_value_386 = (void*)0;
default_value_394 = (void*)0;
    size_376=self->size*10;
    keys_377=(char**)come_increment_ref_count(((char**)(__right_value339=(char**)come_calloc(1, sizeof(char*)*(1*(size_376)), "./comelang.h", 2328, "char**"))));
    items_378=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value340=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_376)), "./comelang.h", 2329, "struct sClass**"))));
    item_existance_379=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value341=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_376)), "./comelang.h", 2330, "_Bool*"))));
    len_380=0;
    for(    it_383=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_383=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_386,0,sizeof(struct sClass*));
        it2_387=((struct sClass*)(__right_value342=map$2char$phsClass$ph_at(self,it_383,(struct sClass*)come_increment_ref_count(default_value_386))));
        /*c*/ come_call_finalizer3(__right_value342,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_392=string_get_hash_key(((char*)it_383))%size_376;
        n_393=hash_392;
        while((_Bool)1) {
            if(            item_existance_379[n_393]) {
                n_393++;
                if(                n_393>=size_376) {
                    n_393=0;
                }
                else if(                n_393==hash_392) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_379[n_393]=(_Bool)1;
                keys_377[n_393]=it_383;
                items_378[n_393]=((struct sClass*)(__right_value343=map$2char$phsClass$ph_at(self,it_383,(struct sClass*)come_increment_ref_count(default_value_394))));
                /*c*/ come_call_finalizer3(__right_value343,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_380++;
                /*c*/ come_call_finalizer3(default_value_394,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_394,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_386,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_377;
    self->items=items_378;
    self->item_existance=item_existance_379;
    self->size=size_376;
    self->len=len_380;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_381;
char* __result_obj__249;
char* __result_obj__250;
char* result_382;
char* __result_obj__251;
result_381 = (void*)0;
result_382 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_381,0,sizeof(char*));
        __result_obj__249 = result_381;
        return __result_obj__249;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__250 = self->key_list->it->item;
        return __result_obj__250;
    }
    memset(&result_382,0,sizeof(char*));
    __result_obj__251 = result_382;
    return __result_obj__251;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_384;
char* __result_obj__252;
char* __result_obj__253;
char* result_385;
char* __result_obj__254;
result_384 = (void*)0;
result_385 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_384,0,sizeof(char*));
        __result_obj__252 = result_384;
        return __result_obj__252;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__253 = self->key_list->it->item;
        return __result_obj__253;
    }
    memset(&result_385,0,sizeof(char*));
    __result_obj__254 = result_385;
    return __result_obj__254;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_388;
unsigned int it_389;
struct sClass* __result_obj__255;
struct sClass* __result_obj__256;
struct sClass* __result_obj__257;
struct sClass* __result_obj__258;
    hash_388=string_get_hash_key(((char*)key))%self->size;
    it_389=hash_388;
    while((_Bool)1) {
        if(        self->item_existance[it_389]) {
            if(            string_equals(self->keys[it_389],key)) {
                __result_obj__255 = come_increment_ref_count(self->items[it_389]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__255,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__255;
            }
            it_389++;
            if(            it_389>=self->size) {
                it_389=0;
            }
            else if(            it_389==hash_388) {
                __result_obj__256 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__256,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__256;
            }
        }
        else {
            __result_obj__257 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__257,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__257;
        }
    }
    __result_obj__258 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_390;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        /*c*/ come_call_finalizer3(prev_it_391,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_397;
struct list_item$1char$ph* it_398;
struct list$1char$ph* __result_obj__262;
    it2_397=0;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        if(        string_equals(it_398->item,item)) {
            list$1char$ph_delete(self,it2_397,it2_397+1);
            break;
        }
        it2_397++;
        it_398=it_398->next;
    }
    __result_obj__262 = self;
    return __result_obj__262;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_399;
struct list$1char$ph* __result_obj__259;
struct list_item$1char$ph* it_402;
int i_403;
struct list_item$1char$ph* prev_it_404;
struct list_item$1char$ph* it_405;
int i_406;
struct list_item$1char$ph* prev_it_407;
struct list_item$1char$ph* it_408;
struct list_item$1char$ph* head_prev_it_409;
struct list_item$1char$ph* tail_it_410;
int i_411;
struct list_item$1char$ph* prev_it_412;
struct list$1char$ph* __result_obj__261;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_399=tail;
        tail=head;
        head=tmp_399;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__259 = self;
        return __result_obj__259;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_402=self->head;
        i_403=0;
        while(it_402!=((void*)0)) {
            if(            i_403<tail) {
                prev_it_404=it_402;
                it_402=it_402->next;
                i_403++;
                /*c*/ come_call_finalizer3(prev_it_404,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_403==tail) {
                self->head=it_402;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_402=it_402->next;
                i_403++;
            }
        }
    }
    else if(    tail==self->len) {
        it_405=self->head;
        i_406=0;
        while(it_405!=((void*)0)) {
            if(            i_406==head) {
                self->tail=it_405->prev;
                self->tail->next=((void*)0);
            }
            if(            i_406>=head) {
                prev_it_407=it_405;
                it_405=it_405->next;
                i_406++;
                /*c*/ come_call_finalizer3(prev_it_407,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_405=it_405->next;
                i_406++;
            }
        }
    }
    else {
        it_408=self->head;
        head_prev_it_409=((void*)0);
        tail_it_410=((void*)0);
        i_411=0;
        while(it_408!=((void*)0)) {
            if(            i_411==head) {
                head_prev_it_409=it_408->prev;
            }
            if(            i_411==tail) {
                tail_it_410=it_408;
            }
            if(            i_411>=head&&i_411<tail) {
                prev_it_412=it_408;
                it_408=it_408->next;
                i_411++;
                /*c*/ come_call_finalizer3(prev_it_412,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_408=it_408->next;
                i_411++;
            }
        }
        if(        head_prev_it_409!=((void*)0)) {
            head_prev_it_409->next=tail_it_410;
        }
        if(        tail_it_410!=((void*)0)) {
            tail_it_410->prev=head_prev_it_409;
        }
    }
    __result_obj__261 = self;
    return __result_obj__261;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_400;
struct list_item$1char$ph* prev_it_401;
struct list$1char$ph* __result_obj__260;
    it_400=self->head;
    while(it_400!=((void*)0)) {
        prev_it_401=it_400;
        it_400=it_400->next;
        /*c*/ come_call_finalizer3(prev_it_401,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__260 = self;
    return __result_obj__260;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_414;
char* __result_obj__263;
char* __result_obj__264;
char* result_415;
char* __result_obj__265;
result_414 = (void*)0;
result_415 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_414,0,sizeof(char*));
        __result_obj__263 = result_414;
        return __result_obj__263;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__264 = self->it->item;
        return __result_obj__264;
    }
    memset(&result_415,0,sizeof(char*));
    __result_obj__265 = result_415;
    return __result_obj__265;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_417;
char* __result_obj__266;
char* __result_obj__267;
char* result_418;
char* __result_obj__268;
result_417 = (void*)0;
result_418 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_417,0,sizeof(char*));
        __result_obj__266 = result_417;
        return __result_obj__266;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__267 = self->it->item;
        return __result_obj__267;
    }
    memset(&result_418,0,sizeof(char*));
    __result_obj__268 = result_418;
    return __result_obj__268;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value353 = (void*)0;
struct sLineNode* __result_obj__271;
    ((struct sNodeBase*)(__right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value353,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__271 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value354 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = come_increment_ref_count(((char*)(__right_value354=__builtin_string("sLineNode"))));
    (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_426;
void* __right_value357 = (void*)0;
char* __dec_obj70;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__273;
    come_value_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 277, "struct CVALUE*"))));
    __dec_obj70=come_value_426->c_value,
    come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj71=come_value_426->type,
    come_value_426->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 280, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_426->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_426));
    add_come_last_code(info,"%s",come_value_426->c_value);
    __result_obj__273 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_426,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value361 = (void*)0;
struct sSNameNode* __result_obj__274;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value361,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__274 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value362 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = come_increment_ref_count(((char*)(__right_value362=__builtin_string("sSNameNode"))));
    (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_427;
void* __right_value365 = (void*)0;
char* __dec_obj72;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__276;
    come_value_427=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 305, "struct CVALUE*"))));
    __dec_obj72=come_value_427->c_value,
    come_value_427->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj73=come_value_427->type,
    come_value_427->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 308, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_427->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_427));
    add_come_last_code(info,"%s",come_value_427->c_value);
    __result_obj__276 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value369 = (void*)0;
struct sFuncNode* __result_obj__277;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value369,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__277 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__277,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value370 = (void*)0;
char* __result_obj__278;
    __result_obj__278 = come_increment_ref_count(((char*)(__right_value370=__builtin_string("sFuncNode"))));
    (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__278 = come_decrement_ref_count(__result_obj__278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__278;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_428;
void* __right_value373 = (void*)0;
char* __dec_obj74;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__279;
    come_value_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 333, "struct CVALUE*"))));
    __dec_obj74=come_value_428->c_value,
    come_value_428->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value_428->type,
    come_value_428->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 336, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_428->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_428));
    add_come_last_code(info,"%s",come_value_428->c_value);
    __result_obj__279 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value377 = (void*)0;
struct sWildCard* __result_obj__280;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value377,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__280 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__280,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value378 = (void*)0;
char* __result_obj__281;
    __result_obj__281 = come_increment_ref_count(((char*)(__right_value378=__builtin_string("sWildCard"))));
    (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__281 = come_decrement_ref_count(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* value_node_429;
_Bool Value_430;
_Bool __result_obj__282;
_Bool __result_obj__283;
    value_node_429=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value379=xsprintf("Value"))),info));
    (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_430=node_compile(value_node_429,info);
    if(    !Value_430) {
        __result_obj__282 = (_Bool)0;
        ((value_node_429) ? value_node_429 = come_decrement_ref_count(value_node_429, ((struct sNode*)value_node_429)->finalize, ((struct sNode*)value_node_429)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__282;
    }
    else {
    }
    __result_obj__283 = (_Bool)1;
    ((value_node_429) ? value_node_429 = come_decrement_ref_count(value_node_429, ((struct sNode*)value_node_429)->finalize, ((struct sNode*)value_node_429)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__283;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value381 = (void*)0;
struct sCallerFuncNode* __result_obj__284;
    ((struct sNodeBase*)(__right_value381=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value381,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__284 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value382 = (void*)0;
char* __result_obj__285;
    __result_obj__285 = come_increment_ref_count(((char*)(__right_value382=__builtin_string("sCallerFuncNode"))));
    (__right_value382 = come_decrement_ref_count(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__285 = come_decrement_ref_count(__result_obj__285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value385 = (void*)0;
char* __dec_obj76;
void* __right_value386 = (void*)0;
char* __dec_obj77;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__286;
    come_value_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 385, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj76=come_value_431->c_value,
        come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj77=come_value_431->c_value,
        come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj78=come_value_431->type,
    come_value_431->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 393, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_431->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_431));
    add_come_last_code(info,"%s",come_value_431->c_value);
    __result_obj__286 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value390 = (void*)0;
struct sCallerLineNode* __result_obj__287;
    ((struct sNodeBase*)(__right_value390=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value390,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__287 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__287,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__287;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_432;
void* __right_value393 = (void*)0;
char* __dec_obj79;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj80;
_Bool __result_obj__288;
    come_value_432=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 414, "struct CVALUE*"))));
    __dec_obj79=come_value_432->c_value,
    come_value_432->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj80=come_value_432->type,
    come_value_432->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 417, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_432->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_432));
    add_come_last_code(info,"%s",come_value_432->c_value);
    __result_obj__288 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_432,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value397 = (void*)0;
char* __result_obj__289;
    __result_obj__289 = come_increment_ref_count(((char*)(__right_value397=__builtin_string("sCallerLineNode"))));
    (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__289 = come_decrement_ref_count(__result_obj__289, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__289;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value398 = (void*)0;
struct sCallerSNameNode* __result_obj__290;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value398,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__290 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_433;
void* __right_value401 = (void*)0;
char* __dec_obj81;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__291;
    come_value_433=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 442, "struct CVALUE*"))));
    __dec_obj81=come_value_433->c_value,
    come_value_433->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj82=come_value_433->type,
    come_value_433->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 445, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_433->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_433));
    add_come_last_code(info,"%s",come_value_433->c_value);
    __result_obj__291 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value405 = (void*)0;
char* __result_obj__292;
    __result_obj__292 = come_increment_ref_count(((char*)(__right_value405=__builtin_string("sCallerSNameNode"))));
    (__right_value405 = come_decrement_ref_count(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__292 = come_decrement_ref_count(__result_obj__292, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__292;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj83;
void* __right_value418 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj89;
struct list$1sType$ph* __dec_obj90;
struct buffer* __dec_obj91;
struct sFunCallNode* __result_obj__299;
    ((struct sNodeBase*)(__right_value406=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value406,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj83=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj89=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    /*b*/ come_call_finalizer3(__dec_obj89,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj90=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj90,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj91=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /*b*/ come_call_finalizer3(__dec_obj91,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__299 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__299,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value419 = (void*)0;
char* __result_obj__300;
    __result_obj__300 = come_increment_ref_count(((char*)(__right_value419=__builtin_string("sFunCallNode"))));
    (__right_value419 = come_decrement_ref_count(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__300 = come_decrement_ref_count(__result_obj__300, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__300;
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
char* fun_name_444;
struct list$1tuple2$2char$phsNode$ph$ph* params_445;
struct buffer* method_block_446;
int method_block_sline_447;
struct sVar* var__448;
struct sType* lambda_type_449;
void* __right_value420 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_450=0;
char* Err_451=0;
_Bool _if_conditional3;
_Bool __result_obj__301;
void* __right_value421 = (void*)0;
struct sType* result_type_452;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUE$ph* come_params_453;
void* __right_value424 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_456=0;
char* Err_457=0;
_Bool _if_conditional4;
_Bool __result_obj__303;
int i_458;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_459;
struct tuple2$2char$phsNode$ph* it_462;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_465=0;
struct sNode* node_466=0;
_Bool Value_467;
_Bool __result_obj__310;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value426 = (void*)0;
_Bool _if_conditional5;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_472=0;
char* Err_473=0;
_Bool _if_conditional6;
_Bool __result_obj__313;
void* __right_value432 = (void*)0;
_Bool _if_conditional7;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct buffer* buf_474;
int j_475;
struct list$1CVALUE$ph* o2_saved_476;
struct CVALUE* it_479;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_482;
void* __right_value438 = (void*)0;
char* __dec_obj92;
void* __right_value439 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__320;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sGenericsFun* generics_fun_483;
_Bool method_generics_486;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sType$ph* method_generics_types_487;
void* __right_value444 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_488=0;
struct sGenericsFun* gfun_489=0;
char* generics_fun_name_490;
void* __right_value445 = (void*)0;
struct sFun* fun_491;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1CVALUE$ph* come_params_494;
void* __right_value448 = (void*)0;
struct sFun* fun_495;
_Bool no_output_come_code_496;
_Bool __result_obj__329;
void* __right_value449 = (void*)0;
struct CVALUE* method_block_node_497;
void* __right_value450 = (void*)0;
struct sType* method_block_lambda_type_501;
void* __right_value451 = (void*)0;
struct sType* method_block_result_type_502;
void* __right_value452 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_503;
struct sType* generics_fun_method_block_result_type_504;
int method_generics_num_505;
void* __right_value456 = (void*)0;
int n_514;
struct list$1sType$ph* o2_saved_515;
struct sType* it_518;
int method_generics_num_521;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1CVALUE$ph* come_params_522;
int i_523;
struct sType* result_type_524;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_525;
struct tuple2$2char$phsNode$ph* it_526;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_527=0;
struct sNode* node_528=0;
_Bool Value_529;
_Bool __result_obj__341;
void* __right_value461 = (void*)0;
struct CVALUE* come_value_530;
int method_generics_num_534;
void* __right_value465 = (void*)0;
int n_535;
struct list$1sType$ph* o2_saved_536;
struct sType* it_537;
int method_generics_num_538;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_541=0;
struct sGenericsFun* gfun_542=0;
char* __dec_obj101;
void* __right_value469 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_543=0;
struct sGenericsFun* gfun_544=0;
char* __dec_obj102;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct list$1CVALUE$ph* come_params_545;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_546;
struct tuple2$2char$phsNode$ph* it_547;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_548=0;
struct sNode* node_549=0;
_Bool Value_550;
_Bool __result_obj__344;
void* __right_value472 = (void*)0;
struct CVALUE* come_value_551;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct buffer* buf_552;
int j_553;
struct list$1CVALUE$ph* o2_saved_554;
struct CVALUE* it_555;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value_556;
void* __right_value477 = (void*)0;
char* __dec_obj103;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj104;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj105;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj106;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj107;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj108;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj109;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj110;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj111;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj112;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj113;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj114;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj115;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj116;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj117;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj118;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj119;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj120;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj121;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj122;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj123;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj124;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj125;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj126;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* __dec_obj127;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj128;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj129;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj130;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj131;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* __dec_obj132;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* __dec_obj133;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* __dec_obj134;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* __dec_obj135;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* __dec_obj136;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sType* __dec_obj137;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj138;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sType* __dec_obj139;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj140;
_Bool __result_obj__345;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1CVALUE$ph* come_params_557;
int i_558;
struct sType* result_type_559;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_560;
struct tuple2$2char$phsNode$ph* it_561;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_562=0;
struct sNode* node_563=0;
_Bool Value_564;
_Bool __result_obj__346;
void* __right_value582 = (void*)0;
struct CVALUE* come_value_565;
struct sType* __dec_obj141;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct buffer* buf_566;
int j_567;
struct list$1CVALUE$ph* o2_saved_568;
struct CVALUE* it_569;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct CVALUE* come_value_570;
void* __right_value587 = (void*)0;
char* __dec_obj142;
struct sType* __dec_obj143;
_Bool __result_obj__347;
void* __right_value588 = (void*)0;
char* __dec_obj144;
void* __right_value589 = (void*)0;
char* __dec_obj145;
char* p_571;
int version_572;
char* p2_573;
int i_575;
void* __right_value590 = (void*)0;
char* new_fun_name_576;
void* __right_value591 = (void*)0;
_Bool _if_conditional8;
void* __right_value592 = (void*)0;
char* __dec_obj146;
void* __right_value593 = (void*)0;
char* new_fun_name_580;
void* __right_value594 = (void*)0;
_Bool _if_conditional9;
void* __right_value595 = (void*)0;
char* __dec_obj147;
void* __right_value596 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_581=0;
char* Err_582=0;
_Bool _if_conditional10;
_Bool __result_obj__352;
int i_583;
void* __right_value597 = (void*)0;
char* new_fun_name_584;
void* __right_value598 = (void*)0;
_Bool _if_conditional11;
void* __right_value599 = (void*)0;
char* __dec_obj148;
void* __right_value600 = (void*)0;
struct sFun* fun_585;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1CVALUE$ph* come_params_586;
int i_587;
struct sType* result_type_588;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_589;
struct tuple2$2char$phsNode$ph* it_590;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_591=0;
struct sNode* node_592=0;
_Bool Value_593;
_Bool __result_obj__353;
void* __right_value603 = (void*)0;
struct CVALUE* come_value_594;
struct sType* __dec_obj149;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct buffer* buf_595;
int j_596;
struct list$1CVALUE$ph* o2_saved_597;
struct CVALUE* it_598;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct CVALUE* come_value_599;
void* __right_value608 = (void*)0;
char* __dec_obj150;
struct sType* __dec_obj151;
_Bool __result_obj__354;
void* __right_value609 = (void*)0;
struct sType* result_type_600;
_Bool in_exception_value_601;
void* __right_value616 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* new_node_602;
_Bool Value_604;
_Bool __result_obj__357;
_Bool __result_obj__358;
_Bool in_exception_value_605;
void* __right_value619 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* new_node_606;
_Bool Value_607;
_Bool __result_obj__359;
_Bool __result_obj__360;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1sType$ph* param_types_608;
struct list$1sType$ph* o2_saved_609;
struct sType* it_610;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sType* it2_611;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* __dec_obj157;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1CVALUE$ph* come_params_612;
int i_613;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_614;
struct tuple2$2char$phsNode$ph* it_615;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_616=0;
struct sNode* node_617=0;
_Bool Value_618;
_Bool __result_obj__361;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_619;
int n_620;
struct list$1char$ph* o2_saved_621;
char* it_622;
void* __right_value631 = (void*)0;
_Bool _if_conditional12;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_623=0;
char* Err_624=0;
_Bool _if_conditional13;
_Bool __result_obj__362;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
_Bool _if_conditional14;
void* __right_value639 = (void*)0;
int i_630;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_631;
struct tuple2$2char$phsNode$ph* it_632;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_633=0;
struct sNode* node_634=0;
_Bool Value_635;
_Bool __result_obj__365;
void* __right_value640 = (void*)0;
struct CVALUE* come_value_636;
void* __right_value641 = (void*)0;
_Bool _if_conditional15;
_Bool Value_637;
_Bool __result_obj__366;
void* __right_value642 = (void*)0;
struct CVALUE* come_value_638;
void* __right_value643 = (void*)0;
_Bool _if_conditional16;
void* __right_value644 = (void*)0;
_Bool _if_conditional17;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_639=0;
char* Err_640=0;
_Bool _if_conditional18;
_Bool __result_obj__367;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
_Bool _if_conditional19;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
_Bool _if_conditional20;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* default_param_641;
void* __right_value656 = (void*)0;
char* param_name_645;
void* __right_value657 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_646;
char* p_647;
char* head_648;
int sline_649;
void* __right_value658 = (void*)0;
struct buffer* __dec_obj159;
void* __right_value659 = (void*)0;
struct sNode* node_650;
_Bool Value_651;
_Bool __result_obj__370;
struct buffer* __dec_obj160;
void* __right_value660 = (void*)0;
struct CVALUE* come_value_652;
void* __right_value661 = (void*)0;
_Bool _if_conditional22;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_653=0;
char* Err_654=0;
_Bool _if_conditional23;
_Bool __result_obj__371;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
_Bool _if_conditional24;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
_Bool _if_conditional25;
void* __right_value671 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_655=0;
char* Err_656=0;
_Bool _if_conditional26;
_Bool __result_obj__372;
void* __right_value672 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_657=0;
char* Err_658=0;
_Bool _if_conditional27;
_Bool __result_obj__373;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value677 = (void*)0;
struct sNode* current_stack_frame_node_659;
_Bool Value_661;
_Bool __result_obj__376;
void* __right_value678 = (void*)0;
struct CVALUE* come_value_662;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct buffer* method_block2_663;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sType* method_block_type_664;
void* __right_value683 = (void*)0;
char* class_name_665;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sClass* current_stack_frame_struct_669;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_670=0;
char* Err_671=0;
_Bool _if_conditional28;
_Bool __result_obj__381;
void* __right_value688 = (void*)0;
struct sType* result_type_672;
void* __right_value689 = (void*)0;
struct list$1sType$ph* param_types_673;
struct list$1char$ph* param_names_674;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct buffer* all_alhabet_sname_675;
char* p_676;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct list$1sType$ph* o2_saved_677;
struct sType* it_678;
struct sType* param_type_679;
void* __right_value694 = (void*)0;
char* param_name_680;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
char* param_name_681;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
char* param_name_682;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct buffer* source3_683;
char* p_684;
char* head_685;
int sline_686;
struct buffer* __dec_obj162;
void* __right_value701 = (void*)0;
struct sNode* node_687;
_Bool Value_688;
_Bool __result_obj__382;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
char* method_block_name_689;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct CVALUE* come_value2_690;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sFun* fun2_691;
void* __right_value708 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_692=0;
char* Err_693=0;
_Bool _if_conditional29;
_Bool __result_obj__383;
struct sType* method_block_type2_694;
void* __right_value709 = (void*)0;
char* __dec_obj163;
void* __right_value710 = (void*)0;
struct sType* __dec_obj164;
struct buffer* __dec_obj165;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct buffer* buf_695;
int j_696;
struct list$1CVALUE$ph* o2_saved_697;
struct CVALUE* it_698;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct CVALUE* come_value_699;
void* __right_value715 = (void*)0;
char* __dec_obj166;
void* __right_value716 = (void*)0;
struct sType* __dec_obj167;
void* __right_value717 = (void*)0;
char* __dec_obj168;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
char* __dec_obj169;
_Bool __result_obj__384;
memset(&i_575, 0, sizeof(int));
    fun_name_444=(char*)come_increment_ref_count(self->fun_name);
    params_445=self->params;
    method_block_446=self->method_block;
    method_block_sline_447=self->method_block_sline;
    var__448=get_variable_from_table(info->lv_table,fun_name_444);
    if(    var__448==((void*)0)) {
        var__448=get_variable_from_table(info->gv_table,fun_name_444);
    }
    if(    var__448) {
        lambda_type_449=var__448->mType;
        if(        string_operator_not_equals(lambda_type_449->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value420=err_msg(info,"%s is not lambda, can't call",fun_name_444)));
            come_exception_var_2_450=multiple_assign_var2->v1;
            Err_451=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_451)),            /*c*/ come_call_finalizer3(__right_value420,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __result_obj__301 = (_Bool)1;
                (Err_451 = come_decrement_ref_count(Err_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__301;
            }
            else {
            }
            (Err_451 = come_decrement_ref_count(Err_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_452=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_449->mResultType));
        result_type_452->mStatic=(_Bool)0;
        come_params_453=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 517, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_449->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_445)&&!lambda_type_449->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value424=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_444,list$1sType$ph_length(lambda_type_449->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_445))));
            come_exception_var_3_456=multiple_assign_var3->v1;
            Err_457=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_457)),            /*c*/ come_call_finalizer3(__right_value424,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__303 = (_Bool)1;
                (Err_457 = come_decrement_ref_count(Err_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_453,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__303;
            }
            else {
            }
            (Err_457 = come_decrement_ref_count(Err_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_458=0;
        for(        o2_saved_459=(params_445),it_462=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_459));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_459));        it_462=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_459))        ){
            multiple_assign_var4=it_462;
            label_465=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_466=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_467=node_compile(node_466,info);
            if(            !Value_467) {
                __result_obj__310 = (_Bool)0;
                (label_465 = come_decrement_ref_count(label_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_466) ? node_466 = come_decrement_ref_count(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_453,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__310;
            }
            else {
            }
            come_value_468=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_449->mVarArgs&&((struct sType*)(__right_value426=list$1sType$ph$p_operator_load_element(lambda_type_449->mParamTypes,i_458)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value426,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value431=check_assign_type(((char*)(__right_value429=xsprintf("\%s calling param #\%s",((char*)(__right_value427=string_to_string(fun_name_444))),((char*)(__right_value428=int_to_string(i_458)))))),((struct sType*)(__right_value430=list$1sType$ph$p_operator_load_element(lambda_type_449->mParamTypes,i_458))),come_value_468->type,come_value_468,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_4_472=multiple_assign_var5->v1;
                Err_473=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_473)),                (__right_value427 = come_decrement_ref_count(__right_value427, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value429 = come_decrement_ref_count(__right_value429, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value430,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value431,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional6) {
                    __result_obj__313 = (_Bool)1;
                    (Err_473 = come_decrement_ref_count(Err_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_465 = come_decrement_ref_count(label_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_466) ? node_466 = come_decrement_ref_count(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_468,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_453,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__313;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)(__right_value432=list$1sType$ph$p_operator_load_element(lambda_type_449->mParamTypes,i_458)))->mHeap&&come_value_468->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value432,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)(__right_value433=list$1sType$ph$p_operator_load_element(lambda_type_449->mParamTypes,i_458))),come_value_468->type,come_value_468,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value433,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                (Err_473 = come_decrement_ref_count(Err_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(come_params_453,(struct CVALUE*)come_increment_ref_count(come_value_468));
            i_458++;
            (label_465 = come_decrement_ref_count(label_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_466) ? node_466 = come_decrement_ref_count(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_468,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_474=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 552, "struct buffer*"))));
        buffer_append_str(buf_474,var__448->mCValueName);
        buffer_append_str(buf_474,"(");
        j_475=0;
        for(        o2_saved_476=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_453)),it_479=list$1CVALUE$ph_begin((o2_saved_476));        !list$1CVALUE$ph_end((o2_saved_476));        it_479=list$1CVALUE$ph_next((o2_saved_476))        ){
            buffer_append_str(buf_474,it_479->c_value);
            if(            j_475!=list$1CVALUE$ph_length(come_params_453)-1) {
                buffer_append_str(buf_474,",");
            }
            j_475++;
        }
        /*c*/ come_call_finalizer3(o2_saved_476,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_474,")");
        come_value_482=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 569, "struct CVALUE*"))));
        __dec_obj92=come_value_482->c_value,
        come_value_482->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_474));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj93=come_value_482->type,
        come_value_482->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_452));
        /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_482->type->mStatic=(_Bool)0;
        come_value_482->var=((void*)0);
        if(        lambda_type_449->mResultType->mHeap) {
            append_object_to_right_values2(come_value_482,(struct sType*)come_increment_ref_count(lambda_type_449->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_482->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_482));
        info->calling_fun=((void*)0);
        __result_obj__320 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_453,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_474,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_482,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__320;
        /*c*/ come_call_finalizer3(result_type_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_453,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_474,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_482,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_483=((struct sGenericsFun*)(__right_value441=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value440=__builtin_string(fun_name_444))),((void*)0))));
    (__right_value440 = come_decrement_ref_count(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value441,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_486=(_Bool)0;
    if(    generics_fun_483) {
        method_generics_486=list$1char$ph_length(generics_fun_483->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_486) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_487=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 594, "struct list$1sType$ph*"))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value444=make_method_generics_function((char*)come_increment_ref_count(fun_name_444),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_487),info)));
            name_488=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_489=multiple_assign_var6->v2;
            /*c*/ come_call_finalizer3(__right_value444,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_490=(char*)come_increment_ref_count(name_488);
            fun_491=((struct sFun*)(__right_value445=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_490,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value445,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_446) {
                come_params_494=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 601, "struct list$1CVALUE$ph*"))));
                fun_495=((struct sFun*)(__right_value448=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_490,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value448,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_496=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_446,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_494),fun_495,fun_name_444,method_block_sline_447,info,(_Bool)1)) {
                    __result_obj__329 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_494,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_487,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_488 = come_decrement_ref_count(name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_490 = come_decrement_ref_count(generics_fun_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__329;
                }
                info->no_output_come_code=no_output_come_code_496;
                method_block_node_497=((struct CVALUE*)(__right_value449=list$1CVALUE$ph$p_operator_load_element(come_params_494,-1)));
                /*c*/ come_call_finalizer3(__right_value449,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_501=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_497->type));
                method_block_result_type_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_503=((struct sType*)(__right_value452=list$1sType$ph$p_operator_load_element(generics_fun_483->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value452,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_504=generics_fun_method_block_lambda_type_503->mResultType;
                if(                generics_fun_method_block_result_type_504->mClass->mMethodGenerics) {
                    method_generics_num_505=generics_fun_method_block_result_type_504->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_487,method_generics_num_505,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_502)));
                }
                n_514=0;
                for(                o2_saved_515=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_503->mParamTypes)),it_518=list$1sType$ph_begin((o2_saved_515));                !list$1sType$ph_end((o2_saved_515));                it_518=list$1sType$ph_next((o2_saved_515))                ){
                    if(                    it_518->mClass->mMethodGenerics) {
                        method_generics_num_521=it_518->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_487,method_generics_num_521,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value457=list$1sType$ph$p_operator_load_element(method_block_lambda_type_501->mParamTypes,n_514))))));
                        /*c*/ come_call_finalizer3(__right_value457,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_514++;
                }
                /*c*/ come_call_finalizer3(o2_saved_515,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_494,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_501,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_522=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 633, "struct list$1CVALUE$ph*"))));
            i_523=0;
            result_type_524=((void*)0);
            for(            o2_saved_525=(params_445),it_526=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_525));            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_525));            it_526=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_525))            ){
                multiple_assign_var7=it_526;
                label_527=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_528=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_529=node_compile(node_528,info);
                if(                !Value_529) {
                    __result_obj__341 = (_Bool)0;
                    (label_527 = come_decrement_ref_count(label_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_528) ? node_528 = come_decrement_ref_count(node_528, ((struct sNode*)node_528)->finalize, ((struct sNode*)node_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_487,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_488 = come_decrement_ref_count(name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_490 = come_decrement_ref_count(generics_fun_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_522,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_524,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__341;
                }
                else {
                }
                come_value_530=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUE$ph_add(come_params_522,(struct CVALUE*)come_increment_ref_count(come_value_530));
                (label_527 = come_decrement_ref_count(label_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_528) ? node_528 = come_decrement_ref_count(node_528, ((struct sNode*)node_528)->finalize, ((struct sNode*)node_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_530,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            generics_fun_483->mResultType->mClass->mMethodGenerics) {
                method_generics_num_534=generics_fun_483->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph$p_operator_store_element(method_generics_types_487,method_generics_num_534,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_535=0;
            for(            o2_saved_536=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_483->mParamTypes)),it_537=list$1sType$ph_begin((o2_saved_536));            !list$1sType$ph_end((o2_saved_536));            it_537=list$1sType$ph_next((o2_saved_536))            ){
                if(                it_537->mClass->mMethodGenerics) {
                    method_generics_num_538=it_537->mClass->mMethodGenericsNum;
                    if(                    n_535<list$1CVALUE$ph_length(come_params_522)) {
                        list$1sType$ph$p_operator_store_element(method_generics_types_487,method_generics_num_538,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value466=list$1CVALUE$ph$p_operator_load_element(come_params_522,n_535)))->type)));
                        /*c*/ come_call_finalizer3(__right_value466,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_535++;
            }
            /*c*/ come_call_finalizer3(o2_saved_536,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_490);
            (name_488 = come_decrement_ref_count(name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value468=make_method_generics_function((char*)come_increment_ref_count(fun_name_444),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_487),info)));
            name_541=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_542=multiple_assign_var8->v2;
            /*c*/ come_call_finalizer3(__right_value468,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj101=fun_name_444,
            fun_name_444=(char*)come_increment_ref_count(name_541);
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_487,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_490 = come_decrement_ref_count(generics_fun_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_522,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_524,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_541 = come_decrement_ref_count(name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value469=make_method_generics_function((char*)come_increment_ref_count(fun_name_444),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_543=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_544=multiple_assign_var9->v2;
            /*c*/ come_call_finalizer3(__right_value469,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj102=fun_name_444,
            fun_name_444=(char*)come_increment_ref_count(name_543);
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_543 = come_decrement_ref_count(name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_444,"__builtin_memmove")||string_operator_equals(fun_name_444,"__builtin_memset")||string_operator_equals(fun_name_444,"__builtin_ffs")||string_operator_equals(fun_name_444,"__builtin_ffsl")||string_operator_equals(fun_name_444,"__builtin_ffsll")||string_operator_equals(fun_name_444,"__builtin_bswap16")||string_operator_equals(fun_name_444,"__builtin_bswap32")||string_operator_equals(fun_name_444,"__builtin_bswap64")||string_operator_equals(fun_name_444,"__builtin_constant_p")||string_operator_equals(fun_name_444,"__builtin_expect")||string_operator_equals(fun_name_444,"__builtin___memset_chk")||string_operator_equals(fun_name_444,"__builtin_object_size")||string_operator_equals(fun_name_444,"__builtin___memcpy_chk")||string_operator_equals(fun_name_444,"__builtin___strncpy_chk")||string_operator_equals(fun_name_444,"__builtin___strncat_chk")||string_operator_equals(fun_name_444,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_444,"__builtin_strrchr")||string_operator_equals(fun_name_444,"__builtin_clz")||string_operator_equals(fun_name_444,"__dsb")||string_operator_equals(fun_name_444,"__isb")||string_operator_equals(fun_name_444,"__dmb")||(strlen(fun_name_444)==strlen("__builtin_arm_")&&memcmp(fun_name_444,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_444,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_444,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_444,"__c11_atomic_store")||string_operator_equals(fun_name_444,"__c11_atomic_load")||string_operator_equals(fun_name_444,"__c11_atomic_exchange")||string_operator_equals(fun_name_444,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_444,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_444,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_444,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_444,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_444,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_444,"__c11_atomic_fetch_xor")) {
        come_params_545=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 706, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_546=(params_445),it_547=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_546));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_546));        it_547=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_546))        ){
            multiple_assign_var10=it_547;
            label_548=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_549=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_550=node_compile(node_549,info);
            if(            !Value_550) {
                __result_obj__344 = (_Bool)0;
                (label_548 = come_decrement_ref_count(label_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_549) ? node_549 = come_decrement_ref_count(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_545,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__344;
            }
            else {
            }
            come_value_551=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(come_params_545,(struct CVALUE*)come_increment_ref_count(come_value_551));
            (label_548 = come_decrement_ref_count(label_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_549) ? node_549 = come_decrement_ref_count(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_551,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 719, "struct buffer*"))));
        buffer_append_str(buf_552,fun_name_444);
        buffer_append_str(buf_552,"(");
        j_553=0;
        for(        o2_saved_554=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_545)),it_555=list$1CVALUE$ph_begin((o2_saved_554));        !list$1CVALUE$ph_end((o2_saved_554));        it_555=list$1CVALUE$ph_next((o2_saved_554))        ){
            buffer_append_str(buf_552,it_555->c_value);
            if(            j_553!=list$1CVALUE$ph_length(come_params_545)-1) {
                buffer_append_str(buf_552,",");
            }
            j_553++;
        }
        /*c*/ come_call_finalizer3(o2_saved_554,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_552,")");
        come_value_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 736, "struct CVALUE*"))));
        __dec_obj103=come_value_556->c_value,
        come_value_556->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_552));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_444,"__builtin_memmove")||string_operator_equals(fun_name_444,"__builtin_memset")) {
            __dec_obj104=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 740, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_ffs")) {
            __dec_obj105=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 743, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_ffsl")) {
            __dec_obj106=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 746, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_ffsll")) {
            __dec_obj107=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 749, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_bswap16")) {
            __dec_obj108=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 752, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_bswap32")) {
            __dec_obj109=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 755, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_bswap64")) {
            __dec_obj110=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 758, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_constant_p")) {
            __dec_obj111=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_expect")) {
            __dec_obj112=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin___memset_chk")) {
            __dec_obj113=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_556->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_object_size")) {
            __dec_obj114=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 771, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin___memcpy_chk")) {
            __dec_obj115=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_556->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_444,"__builtin___strncpy_chk")) {
            __dec_obj116=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_556->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_444,"__builtin___strncat_chk")) {
            __dec_obj117=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_556->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_strrchr")) {
            __dec_obj118=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 786, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_556->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_444,"__builtin___vsnprintf_chk")) {
            __dec_obj119=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 790, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_clz")) {
            __dec_obj120=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 793, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_thread_fence")) {
            __dec_obj121=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 796, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_signal_fence")) {
            __dec_obj122=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_exchange")) {
            __dec_obj123=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value535=list$1CVALUE$ph$p_operator_load_element(come_params_545,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value535,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_exchange_strong")) {
            __dec_obj124=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value537=list$1CVALUE$ph$p_operator_load_element(come_params_545,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value537,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_exchange_weak")) {
            __dec_obj125=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value539=list$1CVALUE$ph$p_operator_load_element(come_params_545,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value539,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_store")) {
            __dec_obj126=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_load")) {
            __dec_obj127=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value544=list$1CVALUE$ph$p_operator_load_element(come_params_545,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value544,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_556->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_fetch_add")) {
            __dec_obj128=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value546=list$1CVALUE$ph$p_operator_load_element(come_params_545,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value546,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_fetch_sub")) {
            __dec_obj129=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value548=list$1CVALUE$ph$p_operator_load_element(come_params_545,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value548,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_fetch_and")) {
            __dec_obj130=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value550=list$1CVALUE$ph$p_operator_load_element(come_params_545,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value550,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_fetch_or")) {
            __dec_obj131=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value552=list$1CVALUE$ph$p_operator_load_element(come_params_545,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value552,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__c11_atomic_fetch_xor")) {
            __dec_obj132=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value554=list$1CVALUE$ph$p_operator_load_element(come_params_545,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value554,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__dsb")) {
            __dec_obj133=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 833, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__isb")) {
            __dec_obj134=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 836, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__dmb")) {
            __dec_obj135=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 839, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_arm_cdp")) {
            __dec_obj136=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 842, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_arm_ldc")) {
            __dec_obj137=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 845, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_arm_stc")) {
            __dec_obj138=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 848, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_arm_stcl")) {
            __dec_obj139=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_444,"__builtin_arm_ldcl")) {
            __dec_obj140=come_value_556->type,
            come_value_556->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_556->var=((void*)0);
        add_come_last_code(info,"%s",come_value_556->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_556));
        __result_obj__345 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_545,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_552,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_556,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__345;
        /*c*/ come_call_finalizer3(come_params_545,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_552,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_556,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_444,"__builtin_va_arg")) {
        come_params_557=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 866, "struct list$1CVALUE$ph*"))));
        i_558=0;
        result_type_559=((void*)0);
        for(        o2_saved_560=(params_445),it_561=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_560));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_560));        it_561=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_560))        ){
            multiple_assign_var11=it_561;
            label_562=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_563=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_564=node_compile(node_563,info);
            if(            !Value_564) {
                __result_obj__346 = (_Bool)0;
                (label_562 = come_decrement_ref_count(label_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_563) ? node_563 = come_decrement_ref_count(node_563, ((struct sNode*)node_563)->finalize, ((struct sNode*)node_563)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__346;
            }
            else {
            }
            come_value_565=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_557,(struct CVALUE*)come_increment_ref_count(come_value_565));
            __dec_obj141=result_type_559,
            result_type_559=(struct sType*)come_increment_ref_count(come_value_565->type);
            /*b*/ come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_562 = come_decrement_ref_count(label_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_563) ? node_563 = come_decrement_ref_count(node_563, ((struct sNode*)node_563)->finalize, ((struct sNode*)node_563)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_565,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_566=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 884, "struct buffer*"))));
        buffer_append_str(buf_566,fun_name_444);
        buffer_append_str(buf_566,"(");
        j_567=0;
        for(        o2_saved_568=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_557)),it_569=list$1CVALUE$ph_begin((o2_saved_568));        !list$1CVALUE$ph_end((o2_saved_568));        it_569=list$1CVALUE$ph_next((o2_saved_568))        ){
            buffer_append_str(buf_566,it_569->c_value);
            if(            j_567!=list$1CVALUE$ph_length(come_params_557)-1) {
                buffer_append_str(buf_566,",");
            }
            j_567++;
        }
        /*c*/ come_call_finalizer3(o2_saved_568,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_566,")");
        come_value_570=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 901, "struct CVALUE*"))));
        __dec_obj142=come_value_570->c_value,
        come_value_570->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_566));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj143=come_value_570->type,
        come_value_570->type=(struct sType*)come_increment_ref_count(result_type_559);
        /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_570->var=((void*)0);
        add_come_last_code(info,"%s",come_value_570->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_570));
        __result_obj__347 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_566,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_570,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__347;
        /*c*/ come_call_finalizer3(come_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_566,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_570,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_444,"string")) {
        __dec_obj144=fun_name_444,
        fun_name_444=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_444,"wstring")) {
        __dec_obj145=fun_name_444,
        fun_name_444=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_444,"inherit")) {
        p_571=info->come_fun->mName;
        version_572=0;
        while(*p_571) {
            if(            *p_571==95&&*(p_571+1)==118&&xisdigit(*(p_571+2))) {
                p2_573=p_571+2;
                version_572=0;
                while(xisdigit(*p2_573)) {
                    version_572=version_572*10+(*p2_573-48);
                    p2_573++;
                }
                break;
            }
            else {
                p_571++;
            }
        }
        char real_fun_name_574[2048];
        memset(&real_fun_name_574, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_574,info->come_fun->mName,p_571-info->come_fun->mName);
        real_fun_name_574[p_571-info->come_fun->mName]=0;
        for(        i_575=version_572-1;        i_575>=1;        i_575--        ){
            new_fun_name_576=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_574,i_575));
            if(            (_if_conditional8=(((struct sFun*)(__right_value591=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_576))))),            /*c*/ come_call_finalizer3(__right_value591,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional8) {
                __dec_obj146=fun_name_444,
                fun_name_444=(char*)come_increment_ref_count(__builtin_string(new_fun_name_576));
                __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_576 = come_decrement_ref_count(new_fun_name_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_576 = come_decrement_ref_count(new_fun_name_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_575==0) {
            new_fun_name_580=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_574));
            if(            (_if_conditional9=(((struct sFun*)(__right_value594=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_580))))),            /*c*/ come_call_finalizer3(__right_value594,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __dec_obj147=fun_name_444,
                fun_name_444=(char*)come_increment_ref_count(__builtin_string(new_fun_name_580));
                __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_444,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value596=err_msg(info,"invalid inherit")));
                come_exception_var_5_581=multiple_assign_var12->v1;
                Err_582=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_582)),                /*c*/ come_call_finalizer3(__right_value596,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    __result_obj__352 = (_Bool)1;
                    (Err_582 = come_decrement_ref_count(Err_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_580 = come_decrement_ref_count(new_fun_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__352;
                }
                else {
                }
                (Err_582 = come_decrement_ref_count(Err_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_580 = come_decrement_ref_count(new_fun_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_583=128;        i_583>=1;        i_583--        ){
            new_fun_name_584=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_444,i_583));
            if(            (_if_conditional11=(((struct sFun*)(__right_value598=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_584))))),            /*c*/ come_call_finalizer3(__right_value598,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                __dec_obj148=fun_name_444,
                fun_name_444=(char*)come_increment_ref_count(__builtin_string(new_fun_name_584));
                __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_584 = come_decrement_ref_count(new_fun_name_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_584 = come_decrement_ref_count(new_fun_name_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_585=((struct sFun*)(__right_value600=map$2char$phsFun$ph_at(info->funcs,fun_name_444,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value600,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_585==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_444);
        come_params_586=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 983, "struct list$1CVALUE$ph*"))));
        i_587=0;
        result_type_588=((void*)0);
        for(        o2_saved_589=(params_445),it_590=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_589));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_589));        it_590=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_589))        ){
            multiple_assign_var13=it_590;
            label_591=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_592=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_593=node_compile(node_592,info);
            if(            !Value_593) {
                __result_obj__353 = (_Bool)0;
                (label_591 = come_decrement_ref_count(label_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_592) ? node_592 = come_decrement_ref_count(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_586,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__353;
            }
            else {
            }
            come_value_594=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_586,(struct CVALUE*)come_increment_ref_count(come_value_594));
            __dec_obj149=result_type_588,
            result_type_588=(struct sType*)come_increment_ref_count(come_value_594->type);
            /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_591 = come_decrement_ref_count(label_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_592) ? node_592 = come_decrement_ref_count(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_594,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_595=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1001, "struct buffer*"))));
        buffer_append_str(buf_595,fun_name_444);
        buffer_append_str(buf_595,"(");
        j_596=0;
        for(        o2_saved_597=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_586)),it_598=list$1CVALUE$ph_begin((o2_saved_597));        !list$1CVALUE$ph_end((o2_saved_597));        it_598=list$1CVALUE$ph_next((o2_saved_597))        ){
            buffer_append_str(buf_595,it_598->c_value);
            if(            j_596!=list$1CVALUE$ph_length(come_params_586)-1) {
                buffer_append_str(buf_595,",");
            }
            j_596++;
        }
        /*c*/ come_call_finalizer3(o2_saved_597,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_595,")");
        come_value_599=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1018, "struct CVALUE*"))));
        __dec_obj150=come_value_599->c_value,
        come_value_599->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_595));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj151=come_value_599->type,
        come_value_599->type=(struct sType*)come_increment_ref_count(result_type_588);
        /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_599->var=((void*)0);
        add_come_last_code(info,"%s",come_value_599->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_599));
        __result_obj__354 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_586,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_595,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_599,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__354;
        /*c*/ come_call_finalizer3(come_params_586,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_595,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_599,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_600=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_585->mResultType));
    result_type_600->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_600->mException&&!info->in_exception_value) {
        in_exception_value_601=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1036, "struct sNode");
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value616=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_602=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        /*c*/ come_call_finalizer3(__right_value616,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_604=node_compile(new_node_602,info);
        if(        !Value_604) {
            __result_obj__357 = (_Bool)0;
            ((new_node_602) ? new_node_602 = come_decrement_ref_count(new_node_602, ((struct sNode*)new_node_602)->finalize, ((struct sNode*)new_node_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__357;
        }
        else {
        }
        info->in_exception_value=in_exception_value_601;
        __result_obj__358 = (_Bool)1;
        ((new_node_602) ? new_node_602 = come_decrement_ref_count(new_node_602, ((struct sNode*)new_node_602)->finalize, ((struct sNode*)new_node_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__358;
        ((new_node_602) ? new_node_602 = come_decrement_ref_count(new_node_602, ((struct sNode*)new_node_602)->finalize, ((struct sNode*)new_node_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_600->mException&&!info->in_exception_value) {
        in_exception_value_605=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1048, "struct sNode");
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value619=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_606=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        /*c*/ come_call_finalizer3(__right_value619,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_607=node_compile(new_node_606,info);
        if(        !Value_607) {
            __result_obj__359 = (_Bool)0;
            ((new_node_606) ? new_node_606 = come_decrement_ref_count(new_node_606, ((struct sNode*)new_node_606)->finalize, ((struct sNode*)new_node_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__359;
        }
        else {
        }
        info->in_exception_value=in_exception_value_605;
        __result_obj__360 = (_Bool)1;
        ((new_node_606) ? new_node_606 = come_decrement_ref_count(new_node_606, ((struct sNode*)new_node_606)->finalize, ((struct sNode*)new_node_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__360;
        ((new_node_606) ? new_node_606 = come_decrement_ref_count(new_node_606, ((struct sNode*)new_node_606)->finalize, ((struct sNode*)new_node_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_608=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1058, "struct list$1sType$ph*"))));
    for(    o2_saved_609=(struct list$1sType$ph*)come_increment_ref_count((fun_585->mParamTypes)),it_610=list$1sType$ph_begin((o2_saved_609));    !list$1sType$ph_end((o2_saved_609));    it_610=list$1sType$ph_next((o2_saved_609))    ){
        it2_611=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value624=come_call_cloner(sType_clone, it_610))),info->generics_type,info));
        /*c*/ come_call_finalizer3(__right_value624,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_608,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_611)));
        /*c*/ come_call_finalizer3(it2_611,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_609,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj157=result_type_600,
    result_type_600=(struct sType*)come_increment_ref_count(solve_generics(result_type_600,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_612=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1066, "struct list$1CVALUE$ph*"))));
    for(    i_613=0;    i_613<list$1sType$ph_length(fun_585->mParamTypes)-(((method_block_446)?(2):(0)));    i_613++    ){
        list$1CVALUE$ph_add(come_params_612,((void*)0));
    }
    for(    o2_saved_614=(params_445),it_615=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_614));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_614));    it_615=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_614))    ){
        multiple_assign_var14=it_615;
        label_616=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_617=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_585->mVarArgs||string_operator_equals(fun_name_444,"__builtin_va_start")) {
        }
        else if(        label_616) {
            Value_618=node_compile(node_617,info);
            if(            !Value_618) {
                __result_obj__361 = (_Bool)0;
                (label_616 = come_decrement_ref_count(label_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_617) ? node_617 = come_decrement_ref_count(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__361;
            }
            else {
            }
            come_value_619=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            n_620=0;
            for(            o2_saved_621=(struct list$1char$ph*)come_increment_ref_count((fun_585->mParamNames)),it_622=list$1char$ph_begin((o2_saved_621));            !list$1char$ph_end((o2_saved_621));            it_622=list$1char$ph_next((o2_saved_621))            ){
                if(                string_operator_equals(label_616,it_622)) {
                    break;
                }
                n_620++;
            }
            /*c*/ come_call_finalizer3(o2_saved_621,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional12=(((struct sType*)(__right_value631=list$1sType$ph$p_operator_load_element(param_types_608,n_620))))),            /*c*/ come_call_finalizer3(__right_value631,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value636=check_assign_type(((char*)(__right_value634=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value632=string_to_string(fun_name_444))),((char*)(__right_value633=int_to_string(n_620)))))),((struct sType*)(__right_value635=list$1sType$ph$p_operator_load_element(param_types_608,n_620))),come_value_619->type,come_value_619,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_6_623=multiple_assign_var15->v1;
                Err_624=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_624)),                (__right_value632 = come_decrement_ref_count(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value633 = come_decrement_ref_count(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value634 = come_decrement_ref_count(__right_value634, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value635,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value636,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional13) {
                    __result_obj__362 = (_Bool)1;
                    (Err_624 = come_decrement_ref_count(Err_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_619,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_616 = come_decrement_ref_count(label_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_617) ? node_617 = come_decrement_ref_count(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__362;
                }
                else {
                }
                (Err_624 = come_decrement_ref_count(Err_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)(__right_value637=list$1sType$ph$p_operator_load_element(param_types_608,n_620)))&&((struct sType*)(__right_value638=list$1sType$ph$p_operator_load_element(param_types_608,n_620)))->mHeap&&come_value_619->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value637,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value638,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)(__right_value639=list$1sType$ph$p_operator_load_element(param_types_608,n_620))),come_value_619->type,come_value_619,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value639,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_612,n_620,(struct CVALUE*)come_increment_ref_count(come_value_619));
            /*c*/ come_call_finalizer3(come_value_619,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_616 = come_decrement_ref_count(label_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_617) ? node_617 = come_decrement_ref_count(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_630=0;
    for(    o2_saved_631=(params_445),it_632=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_631));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_631));    it_632=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_631))    ){
        multiple_assign_var16=it_632;
        label_633=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_634=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_585->mVarArgs||string_operator_equals(fun_name_444,"__builtin_va_start")) {
            Value_635=node_compile(node_634,info);
            if(            !Value_635) {
                __result_obj__365 = (_Bool)0;
                (label_633 = come_decrement_ref_count(label_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__365;
            }
            else {
            }
            come_value_636=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value641=list$1CVALUE$ph$p_operator_load_element(come_params_612,i_630)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value641,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_630++;
                }
            }
            list$1CVALUE$ph_replace(come_params_612,i_630,(struct CVALUE*)come_increment_ref_count(come_value_636));
            i_630++;
            /*c*/ come_call_finalizer3(come_value_636,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_633) {
        }
        else {
            Value_637=node_compile(node_634,info);
            if(            !Value_637) {
                __result_obj__366 = (_Bool)0;
                (label_633 = come_decrement_ref_count(label_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__366;
            }
            else {
            }
            come_value_638=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value643=list$1CVALUE$ph$p_operator_load_element(come_params_612,i_630)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value643,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_630++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)(__right_value644=list$1sType$ph$p_operator_load_element(param_types_608,i_630))))),            /*c*/ come_call_finalizer3(__right_value644,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value649=check_assign_type(((char*)(__right_value647=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value645=string_to_string(fun_name_444))),((char*)(__right_value646=int_to_string(i_630)))))),((struct sType*)(__right_value648=list$1sType$ph$p_operator_load_element(param_types_608,i_630))),come_value_638->type,come_value_638,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_639=multiple_assign_var17->v1;
                Err_640=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_640)),                (__right_value645 = come_decrement_ref_count(__right_value645, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value646 = come_decrement_ref_count(__right_value646, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value647 = come_decrement_ref_count(__right_value647, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value648,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value649,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional18) {
                    __result_obj__367 = (_Bool)1;
                    (Err_640 = come_decrement_ref_count(Err_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_638,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_633 = come_decrement_ref_count(label_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__367;
                }
                else {
                }
                (Err_640 = come_decrement_ref_count(Err_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)(__right_value650=list$1sType$ph$p_operator_load_element(param_types_608,i_630)))&&((struct sType*)(__right_value651=list$1sType$ph$p_operator_load_element(param_types_608,i_630)))->mHeap&&come_value_638->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value650,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value651,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)(__right_value652=list$1sType$ph$p_operator_load_element(param_types_608,i_630))),come_value_638->type,come_value_638,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value652,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_612,i_630,(struct CVALUE*)come_increment_ref_count(come_value_638));
            i_630++;
            /*c*/ come_call_finalizer3(come_value_638,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_633 = come_decrement_ref_count(label_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value653=list$1CVALUE$ph$p_operator_load_element(come_params_612,i_630)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value653,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_630++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_445)<list$1sType$ph_length(fun_585->mParamTypes)) {
        for(        ;        i_630<list$1sType$ph_length(fun_585->mParamTypes)-(((method_block_446)?(2):(0)));        i_630++        ){
            default_param_641=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value654=list$1char$ph$p_operator_load_element(fun_585->mParamDefaultParametors,i_630)))));
            (__right_value654 = come_decrement_ref_count(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_645=((char*)(__right_value656=list$1char$ph$p_operator_load_element(fun_585->mParamNames,i_630)));
            (__right_value656 = come_decrement_ref_count(__right_value656, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_641&&string_operator_not_equals(default_param_641,"")&&((struct CVALUE*)(__right_value657=list$1CVALUE$ph$p_operator_load_element(come_params_612,i_630)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value657,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional21) {
                source_646=(struct buffer*)come_increment_ref_count(info->source);
                p_647=info->p;
                head_648=info->head;
                sline_649=info->sline;
                __dec_obj159=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_641));
                /*b*/ come_call_finalizer3(__dec_obj159,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_650=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_651=node_compile(node_650,info);
                if(                !Value_651) {
                    __result_obj__370 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_646,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_650) ? node_650 = come_decrement_ref_count(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_641 = come_decrement_ref_count(default_param_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__370;
                }
                else {
                }
                __dec_obj160=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_646);
                /*b*/ come_call_finalizer3(__dec_obj160,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_647;
                info->head=head_648;
                info->sline=sline_649;
                come_value_652=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)(__right_value661=list$1sType$ph$p_operator_load_element(param_types_608,i_630))))),                /*c*/ come_call_finalizer3(__right_value661,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value666=check_assign_type(((char*)(__right_value664=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value662=string_to_string(fun_name_444))),((char*)(__right_value663=int_to_string(i_630)))))),((struct sType*)(__right_value665=list$1sType$ph$p_operator_load_element(param_types_608,i_630))),come_value_652->type,come_value_652,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_8_653=multiple_assign_var18->v1;
                    Err_654=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_654)),                    (__right_value662 = come_decrement_ref_count(__right_value662, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value663 = come_decrement_ref_count(__right_value663, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value664 = come_decrement_ref_count(__right_value664, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value665,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value666,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional23) {
                        __result_obj__371 = (_Bool)1;
                        (Err_654 = come_decrement_ref_count(Err_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(source_646,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_650) ? node_650 = come_decrement_ref_count(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(come_value_652,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (default_param_641 = come_decrement_ref_count(default_param_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__371;
                    }
                    else {
                    }
                    (Err_654 = come_decrement_ref_count(Err_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)(__right_value667=list$1sType$ph$p_operator_load_element(param_types_608,i_630)))&&((struct sType*)(__right_value668=list$1sType$ph$p_operator_load_element(param_types_608,i_630)))->mHeap&&come_value_652->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value667,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value668,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)(__right_value669=list$1sType$ph$p_operator_load_element(param_types_608,i_630))),come_value_652->type,come_value_652,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value669,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_612,i_630,(struct CVALUE*)come_increment_ref_count(come_value_652));
                /*c*/ come_call_finalizer3(source_646,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_650) ? node_650 = come_decrement_ref_count(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_652,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value670=list$1CVALUE$ph$p_operator_load_element(come_params_612,i_630)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value670,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value671=err_msg(info,"require parametor(%s)(1) %d",fun_585->mName,i_630)));
                    come_exception_var_9_655=multiple_assign_var19->v1;
                    Err_656=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_656)),                    /*c*/ come_call_finalizer3(__right_value671,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional26) {
                        __result_obj__372 = (_Bool)1;
                        (Err_656 = come_decrement_ref_count(Err_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_641 = come_decrement_ref_count(default_param_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__372;
                    }
                    else {
                    }
                    (Err_656 = come_decrement_ref_count(Err_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_641 = come_decrement_ref_count(default_param_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_585->mParamTypes)-(((method_block_446)?(2):(0)))!=list$1CVALUE$ph_length(come_params_612)&&!fun_585->mVarArgs&&string_operator_not_equals(fun_name_444,"__builtin_va_start")&&string_operator_not_equals(fun_name_444,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value672=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_444,list$1sType$ph_length(fun_585->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_445))));
        come_exception_var_10_657=multiple_assign_var20->v1;
        Err_658=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_658)),        /*c*/ come_call_finalizer3(__right_value672,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional27) {
            __result_obj__373 = (_Bool)1;
            (Err_658 = come_decrement_ref_count(Err_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__373;
        }
        else {
        }
        (Err_658 = come_decrement_ref_count(Err_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_446) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1226, "struct sNode");
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value674=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1226, "struct sCurrentNode2*")),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_659=(struct sNode*)come_increment_ref_count(_inf_value3);
        /*c*/ come_call_finalizer3(__right_value674,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_661=node_compile(current_stack_frame_node_659,info);
        if(        !Value_661) {
            __result_obj__376 = (_Bool)0;
            ((current_stack_frame_node_659) ? current_stack_frame_node_659 = come_decrement_ref_count(current_stack_frame_node_659, ((struct sNode*)current_stack_frame_node_659)->finalize, ((struct sNode*)current_stack_frame_node_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__376;
        }
        else {
        }
        come_value_662=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(come_params_612,(struct CVALUE*)come_increment_ref_count(come_value_662));
        method_block2_663=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1235, "struct buffer*"))));
        method_block_type_664=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value681=list$1sType$ph$p_operator_load_element(fun_585->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value681,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_665=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value684=list$1sType$ph$p_operator_load_element(method_block_type_664->mParamTypes,0)))->mClass=((struct sClass*)(__right_value685=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_665)));
        /*c*/ come_call_finalizer3(__right_value684,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value685,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_669=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value686=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_665)));
        /*c*/ come_call_finalizer3(__right_value686,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_664->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value687=err_msg(info,"This function does not have method block(%s)",fun_name_444)));
            come_exception_var_11_670=multiple_assign_var21->v1;
            Err_671=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_671)),            /*c*/ come_call_finalizer3(__right_value687,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional28) {
                __result_obj__381 = (_Bool)1;
                (Err_671 = come_decrement_ref_count(Err_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_659) ? current_stack_frame_node_659 = come_decrement_ref_count(current_stack_frame_node_659, ((struct sNode*)current_stack_frame_node_659)->finalize, ((struct sNode*)current_stack_frame_node_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_662,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_664,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_665 = come_decrement_ref_count(class_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__381;
            }
            else {
            }
            (Err_671 = come_decrement_ref_count(Err_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_672=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_664->mResultType));
        result_type_672->mStatic=(_Bool)0;
        param_types_673=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_block_type_664->mParamTypes));
        param_names_674=method_block_type_664->mParamNames;
        all_alhabet_sname_675=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1257, "struct buffer*"))));
        {
            p_676=info->sname;
            while(*p_676) {
                if(                xisalnum(*p_676)) {
                    buffer_append_char(all_alhabet_sname_675,*p_676++);
                }
                else {
                    p_676++;
                }
            }
        }
        buffer_append_format(method_block2_663,"%s fun_block%d_%s(",((char*)(__right_value692=make_type_name_string(result_type_672,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value693=buffer_to_string(all_alhabet_sname_675))));
        (__right_value692 = come_decrement_ref_count(__right_value692, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value693 = come_decrement_ref_count(__right_value693, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_630=0;
        for(        o2_saved_677=(struct list$1sType$ph*)come_increment_ref_count((param_types_673)),it_678=list$1sType$ph_begin((o2_saved_677));        !list$1sType$ph_end((o2_saved_677));        it_678=list$1sType$ph_next((o2_saved_677))        ){
            param_type_679=it_678;
            if(            i_630==0) {
                param_name_680=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_663,"%s",((char*)(__right_value695=make_define_var(param_type_679,param_name_680,(_Bool)0,info))));
                (__right_value695 = come_decrement_ref_count(__right_value695, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_680 = come_decrement_ref_count(param_name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_630==1) {
                param_name_681=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_663,"%s",((char*)(__right_value697=make_define_var_no_solved(param_type_679,param_name_681,(_Bool)0,(_Bool)1,info))));
                (__right_value697 = come_decrement_ref_count(__right_value697, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_681 = come_decrement_ref_count(param_name_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_682=(char*)come_increment_ref_count(xsprintf("it%d",i_630));
                buffer_append_format(method_block2_663,"%s",((char*)(__right_value699=make_define_var_no_solved(param_type_679,param_name_682,(_Bool)0,(_Bool)1,info))));
                (__right_value699 = come_decrement_ref_count(__right_value699, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_682 = come_decrement_ref_count(param_name_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_630!=list$1sType$ph_length(param_types_673)-1) {
                buffer_append_str(method_block2_663,",");
            }
            i_630++;
        }
        /*c*/ come_call_finalizer3(o2_saved_677,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_663,")\n");
        buffer_append_str(method_block2_663,((char*)(__right_value700=buffer_to_string(method_block_446))));
        (__right_value700 = come_decrement_ref_count(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_683=(struct buffer*)come_increment_ref_count(info->source);
        p_684=info->p;
        head_685=info->head;
        sline_686=info->sline;
        __dec_obj162=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_663);
        /*b*/ come_call_finalizer3(__dec_obj162,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_447;
        node_687=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_688=node_compile(node_687,info);
        if(        !Value_688) {
            __result_obj__382 = (_Bool)0;
            ((current_stack_frame_node_659) ? current_stack_frame_node_659 = come_decrement_ref_count(current_stack_frame_node_659, ((struct sNode*)current_stack_frame_node_659)->finalize, ((struct sNode*)current_stack_frame_node_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_662,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_664,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_665 = come_decrement_ref_count(class_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_673,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_675,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_683,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_687) ? node_687 = come_decrement_ref_count(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__382;
        }
        else {
        }
        method_block_name_689=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value702=buffer_to_string(all_alhabet_sname_675)))));
        (__right_value702 = come_decrement_ref_count(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_690=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1322, "struct CVALUE*"))));
        fun2_691=((struct sFun*)(__right_value707=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value706=__builtin_string(method_block_name_689))),((void*)0))));
        (__right_value706 = come_decrement_ref_count(__right_value706, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value707,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_691==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value708=err_msg(info,"method block function not found(%s)",method_block_name_689)));
            come_exception_var_12_692=multiple_assign_var22->v1;
            Err_693=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_693)),            /*c*/ come_call_finalizer3(__right_value708,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional29) {
                __result_obj__383 = (_Bool)1;
                (Err_693 = come_decrement_ref_count(Err_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_659) ? current_stack_frame_node_659 = come_decrement_ref_count(current_stack_frame_node_659, ((struct sNode*)current_stack_frame_node_659)->finalize, ((struct sNode*)current_stack_frame_node_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_662,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_664,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_665 = come_decrement_ref_count(class_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_673,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(all_alhabet_sname_675,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(source3_683,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_687) ? node_687 = come_decrement_ref_count(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_689 = come_decrement_ref_count(method_block_name_689, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value2_690,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__383;
            }
            else {
            }
            (Err_693 = come_decrement_ref_count(Err_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_694=fun2_691->mLambdaType;
        __dec_obj163=come_value2_690->c_value,
        come_value2_690->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_689));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj164=come_value2_690->type,
        come_value2_690->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_694));
        /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_690->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_612,(struct CVALUE*)come_increment_ref_count(come_value2_690));
        __dec_obj165=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_683);
        /*b*/ come_call_finalizer3(__dec_obj165,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_684;
        info->head=head_685;
        info->sline=sline_686;
        info->current_stack_frame_struct=current_stack_frame_struct_669;
        ((current_stack_frame_node_659) ? current_stack_frame_node_659 = come_decrement_ref_count(current_stack_frame_node_659, ((struct sNode*)current_stack_frame_node_659)->finalize, ((struct sNode*)current_stack_frame_node_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_662,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_664,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_665 = come_decrement_ref_count(class_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_673,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_675,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_683,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_687) ? node_687 = come_decrement_ref_count(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_689 = come_decrement_ref_count(method_block_name_689, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_690,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_695=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1348, "struct buffer*"))));
    buffer_append_str(buf_695,fun_name_444);
    buffer_append_str(buf_695,"(");
    j_696=0;
    for(    o2_saved_697=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_612)),it_698=list$1CVALUE$ph_begin((o2_saved_697));    !list$1CVALUE$ph_end((o2_saved_697));    it_698=list$1CVALUE$ph_next((o2_saved_697))    ){
        buffer_append_str(buf_695,it_698->c_value);
        if(        j_696!=list$1CVALUE$ph_length(come_params_612)-1) {
            buffer_append_str(buf_695,",");
        }
        j_696++;
    }
    /*c*/ come_call_finalizer3(o2_saved_697,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_695,")");
    come_value_699=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1365, "struct CVALUE*"))));
    __dec_obj166=come_value_699->c_value,
    come_value_699->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_695));
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj167=come_value_699->type,
    come_value_699->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_600));
    /*b*/ come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_699->type->mStatic=(_Bool)0;
    come_value_699->var=((void*)0);
    if(    fun_585->mResultType->mHeap) {
        append_object_to_right_values2(come_value_699,(struct sType*)come_increment_ref_count(result_type_600),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_444,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_444,"null_check")&&string_operator_not_equals(fun_name_444,"come_push_stackframe")&&string_operator_not_equals(fun_name_444,"come_pop_stackframe")) {
            __dec_obj168=come_value_699->c_value,
            come_value_699->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_699->c_value,come_value_699->type,info));
            __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_600->mGuardValue&&result_type_600->mPointerNum>0) {
        __dec_obj169=come_value_699->c_value,
        come_value_699->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value718=make_type_name_string(result_type_600,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_699->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    add_come_last_code(info,"%s",come_value_699->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_699));
    info->calling_fun=fun_585;
    __result_obj__384 = (_Bool)1;
    (fun_name_444 = come_decrement_ref_count(fun_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_608,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_612,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_695,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_699,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__384;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__293;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_436;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_437;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__298;
    if(    self==((void*)0)) {
        __result_obj__293 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__293,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__293;
    }
    result_436=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1185, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_437=self->head;
    while(it_437!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_436,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_437->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_436,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_437->item)));
        }
        it_437=it_437->next;
    }
    __result_obj__298 = come_increment_ref_count(result_436);
    /*c*/ come_call_finalizer3(result_436,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__298,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_434;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_435;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        prev_it_435=it_434;
        it_434=it_434->next;
        /*c*/ come_call_finalizer3(prev_it_435,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__294;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__294 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value410 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_438;
struct tuple2$2char$phsNode$ph* __dec_obj84;
void* __right_value411 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_439;
struct tuple2$2char$phsNode$ph* __dec_obj85;
void* __right_value412 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_440;
struct tuple2$2char$phsNode$ph* __dec_obj86;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__295;
    if(    self->len==0) {
        litem_438=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value410=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1204, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_438->prev=((void*)0);
        litem_438->next=((void*)0);
        __dec_obj84=litem_438->item,
        litem_438->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj84,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_438;
        self->head=litem_438;
    }
    else if(    self->len==1) {
        litem_439=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value411=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1214, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_439->prev=self->head;
        litem_439->next=((void*)0);
        __dec_obj85=litem_439->item,
        litem_439->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj85,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_439;
        self->head->next=litem_439;
    }
    else {
        litem_440=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value412=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1224, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_440->prev=self->tail;
        litem_440->next=((void*)0);
        __dec_obj86=litem_440->item,
        litem_440->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj86,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_440;
        self->tail=litem_440;
    }
    self->len++;
    __result_obj__295 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__296;
void* __right_value413 = (void*)0;
struct tuple2$2char$phsNode$ph* result_441;
void* __right_value414 = (void*)0;
char* __dec_obj87;
void* __right_value415 = (void*)0;
struct sNode* __dec_obj88;
struct tuple2$2char$phsNode$ph* __result_obj__297;
    if(    self==(void*)0) {
        __result_obj__296 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__296,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__296;
    }
    result_441=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj87=result_441->v1,
        result_441->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj88=result_441->v2,
        result_441->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__297 = come_increment_ref_count(result_441);
    /*c*/ come_call_finalizer3(result_441,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_442;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_443;
    it_442=self->head;
    while(it_442!=((void*)0)) {
        prev_it_443=it_442;
        it_442=it_442->next;
        /*c*/ come_call_finalizer3(prev_it_443,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__302;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__302 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__302,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_454;
struct list_item$1CVALUE$ph* prev_it_455;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        /*c*/ come_call_finalizer3(prev_it_455,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_460;
struct tuple2$2char$phsNode$ph* __result_obj__304;
struct tuple2$2char$phsNode$ph* __result_obj__305;
struct tuple2$2char$phsNode$ph* result_461;
struct tuple2$2char$phsNode$ph* __result_obj__306;
result_460 = (void*)0;
result_461 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_460,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__304 = result_460;
        return __result_obj__304;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__305 = self->it->item;
        return __result_obj__305;
    }
    memset(&result_461,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__306 = result_461;
    return __result_obj__306;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_463;
struct tuple2$2char$phsNode$ph* __result_obj__307;
struct tuple2$2char$phsNode$ph* __result_obj__308;
struct tuple2$2char$phsNode$ph* result_464;
struct tuple2$2char$phsNode$ph* __result_obj__309;
result_463 = (void*)0;
result_464 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_463,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__307 = result_463;
        return __result_obj__307;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__308 = self->it->item;
        return __result_obj__308;
    }
    memset(&result_464,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__309 = result_464;
    return __result_obj__309;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_469;
int i_470;
struct sType* __result_obj__311;
struct sType* default_value_471;
struct sType* __result_obj__312;
default_value_471 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_469=self->head;
    i_470=0;
    while(it_469!=((void*)0)) {
        if(        position==i_470) {
            __result_obj__311 = come_increment_ref_count(it_469->item);
            /*c*/ come_call_finalizer3(__result_obj__311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__311;
        }
        it_469=it_469->next;
        i_470++;
    }
    memset(&default_value_471,0,sizeof(struct sType*));
    __result_obj__312 = come_increment_ref_count(default_value_471);
    /*c*/ come_call_finalizer3(default_value_471,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__312,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_477;
struct CVALUE* __result_obj__314;
struct CVALUE* __result_obj__315;
struct CVALUE* result_478;
struct CVALUE* __result_obj__316;
result_477 = (void*)0;
result_478 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_477,0,sizeof(struct CVALUE*));
        __result_obj__314 = result_477;
        return __result_obj__314;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__315 = self->it->item;
        return __result_obj__315;
    }
    memset(&result_478,0,sizeof(struct CVALUE*));
    __result_obj__316 = result_478;
    return __result_obj__316;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_480;
struct CVALUE* __result_obj__317;
struct CVALUE* __result_obj__318;
struct CVALUE* result_481;
struct CVALUE* __result_obj__319;
result_480 = (void*)0;
result_481 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_480,0,sizeof(struct CVALUE*));
        __result_obj__317 = result_480;
        return __result_obj__317;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__318 = self->it->item;
        return __result_obj__318;
    }
    memset(&result_481,0,sizeof(struct CVALUE*));
    __result_obj__319 = result_481;
    return __result_obj__319;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_484;
unsigned int it_485;
struct sGenericsFun* __result_obj__321;
struct sGenericsFun* __result_obj__322;
struct sGenericsFun* __result_obj__323;
struct sGenericsFun* __result_obj__324;
    hash_484=string_get_hash_key(((char*)key))%self->size;
    it_485=hash_484;
    while((_Bool)1) {
        if(        self->item_existance[it_485]) {
            if(            string_equals(self->keys[it_485],key)) {
                __result_obj__321 = come_increment_ref_count(self->items[it_485]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__321,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__321;
            }
            it_485++;
            if(            it_485>=self->size) {
                it_485=0;
            }
            else if(            it_485==hash_484) {
                __result_obj__322 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__322,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__322;
            }
        }
        else {
            __result_obj__323 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__323,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__323;
        }
    }
    __result_obj__324 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__324,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mImplType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_492;
unsigned int it_493;
struct sFun* __result_obj__325;
struct sFun* __result_obj__326;
struct sFun* __result_obj__327;
struct sFun* __result_obj__328;
    hash_492=string_get_hash_key(((char*)key))%self->size;
    it_493=hash_492;
    while((_Bool)1) {
        if(        self->item_existance[it_493]) {
            if(            string_equals(self->keys[it_493],key)) {
                __result_obj__325 = come_increment_ref_count(self->items[it_493]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__325,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__325;
            }
            it_493++;
            if(            it_493>=self->size) {
                it_493=0;
            }
            else if(            it_493==hash_492) {
                __result_obj__326 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__326,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__326;
            }
        }
        else {
            __result_obj__327 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__327,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__327;
        }
    }
    __result_obj__328 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__328,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__328;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_498;
int i_499;
struct CVALUE* __result_obj__330;
struct CVALUE* default_value_500;
struct CVALUE* __result_obj__331;
default_value_500 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_498=self->head;
    i_499=0;
    while(it_498!=((void*)0)) {
        if(        position==i_499) {
            __result_obj__330 = come_increment_ref_count(it_498->item);
            /*c*/ come_call_finalizer3(__result_obj__330,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__330;
        }
        it_498=it_498->next;
        i_499++;
    }
    memset(&default_value_500,0,sizeof(struct CVALUE*));
    __result_obj__331 = come_increment_ref_count(default_value_500);
    /*c*/ come_call_finalizer3(default_value_500,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__331,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_506;
int i_507;
struct sType* default_value_508;
struct list$1sType$ph* __result_obj__333;
struct list_item$1sType$ph* it_512;
int i_513;
struct sType* __dec_obj97;
struct list$1sType$ph* __result_obj__334;
default_value_508 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_506=self->len;
        for(        i_507=0;        i_507<position-len_506;        i_507++        ){
            memset(&default_value_508,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_508));
            /*c*/ come_call_finalizer3(default_value_508,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__333 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__333;
    }
    it_512=self->head;
    i_513=0;
    while(it_512!=((void*)0)) {
        if(        position==i_513) {
            __dec_obj97=it_512->item,
            it_512->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_512=it_512->next;
        i_513++;
    }
    __result_obj__334 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value453 = (void*)0;
struct list_item$1sType$ph* litem_509;
struct sType* __dec_obj94;
void* __right_value454 = (void*)0;
struct list_item$1sType$ph* litem_510;
struct sType* __dec_obj95;
void* __right_value455 = (void*)0;
struct list_item$1sType$ph* litem_511;
struct sType* __dec_obj96;
struct list$1sType$ph* __result_obj__332;
    if(    self->len==0) {
        litem_509=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value453=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1274, "struct list_item$1sType$ph*"))));
        litem_509->prev=((void*)0);
        litem_509->next=((void*)0);
        __dec_obj94=litem_509->item,
        litem_509->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_509;
        self->head=litem_509;
    }
    else if(    self->len==1) {
        litem_510=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value454=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1284, "struct list_item$1sType$ph*"))));
        litem_510->prev=self->head;
        litem_510->next=((void*)0);
        __dec_obj95=litem_510->item,
        litem_510->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_510;
        self->head->next=litem_510;
    }
    else {
        litem_511=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value455=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1294, "struct list_item$1sType$ph*"))));
        litem_511->prev=self->tail;
        litem_511->next=((void*)0);
        __dec_obj96=litem_511->item,
        litem_511->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_511;
        self->tail=litem_511;
    }
    self->len++;
    __result_obj__332 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__332;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_516;
struct sType* __result_obj__335;
struct sType* __result_obj__336;
struct sType* result_517;
struct sType* __result_obj__337;
result_516 = (void*)0;
result_517 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_516,0,sizeof(struct sType*));
        __result_obj__335 = result_516;
        return __result_obj__335;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__336 = self->it->item;
        return __result_obj__336;
    }
    memset(&result_517,0,sizeof(struct sType*));
    __result_obj__337 = result_517;
    return __result_obj__337;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_519;
struct sType* __result_obj__338;
struct sType* __result_obj__339;
struct sType* result_520;
struct sType* __result_obj__340;
result_519 = (void*)0;
result_520 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_519,0,sizeof(struct sType*));
        __result_obj__338 = result_519;
        return __result_obj__338;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__339 = self->it->item;
        return __result_obj__339;
    }
    memset(&result_520,0,sizeof(struct sType*));
    __result_obj__340 = result_520;
    return __result_obj__340;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value462 = (void*)0;
struct list_item$1CVALUE$ph* litem_531;
struct CVALUE* __dec_obj98;
void* __right_value463 = (void*)0;
struct list_item$1CVALUE$ph* litem_532;
struct CVALUE* __dec_obj99;
void* __right_value464 = (void*)0;
struct list_item$1CVALUE$ph* litem_533;
struct CVALUE* __dec_obj100;
struct list$1CVALUE$ph* __result_obj__342;
    if(    self->len==0) {
        litem_531=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value462=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1204, "struct list_item$1CVALUE$ph*"))));
        litem_531->prev=((void*)0);
        litem_531->next=((void*)0);
        __dec_obj98=litem_531->item,
        litem_531->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_531;
        self->head=litem_531;
    }
    else if(    self->len==1) {
        litem_532=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value463=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1214, "struct list_item$1CVALUE$ph*"))));
        litem_532->prev=self->head;
        litem_532->next=((void*)0);
        __dec_obj99=litem_532->item,
        litem_532->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj99,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_532;
        self->head->next=litem_532;
    }
    else {
        litem_533=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value464=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1224, "struct list_item$1CVALUE$ph*"))));
        litem_533->prev=self->tail;
        litem_533->next=((void*)0);
        __dec_obj100=litem_533->item,
        litem_533->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_533;
        self->tail=litem_533;
    }
    self->len++;
    __result_obj__342 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__342;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_539;
unsigned int it_540;
struct map$2char$phsFun$ph* __result_obj__343;
    hash_539=string_get_hash_key(((char*)key))%self->size;
    it_540=hash_539;
    while((_Bool)1) {
        if(        self->item_existance[it_540]) {
            if(            string_equals(self->keys[it_540],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_540]);
                self->item_existance[it_540]=(_Bool)0;
                if(                1) {
                    (self->keys[it_540] = come_decrement_ref_count(self->keys[it_540], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_540]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_540],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_540]=((void*)0);
                self->len--;
                break;
            }
            it_540++;
            if(            it_540>=self->size) {
                it_540=0;
            }
            else if(            it_540==hash_539) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__343 = self;
    return __result_obj__343;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_577;
unsigned int hash_578;
unsigned int it_579;
struct sFun* __result_obj__348;
struct sFun* __result_obj__349;
struct sFun* __result_obj__350;
struct sFun* __result_obj__351;
default_value_577 = (void*)0;
    memset(&default_value_577,0,sizeof(struct sFun*));
    hash_578=string_get_hash_key(((char*)key))%self->size;
    it_579=hash_578;
    while((_Bool)1) {
        if(        self->item_existance[it_579]) {
            if(            string_equals(self->keys[it_579],key)) {
                __result_obj__348 = come_increment_ref_count(self->items[it_579]);
                /*c*/ come_call_finalizer3(default_value_577,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__348,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__348;
            }
            it_579++;
            if(            it_579>=self->size) {
                it_579=0;
            }
            else if(            it_579==hash_578) {
                __result_obj__349 = come_increment_ref_count(default_value_577);
                /*c*/ come_call_finalizer3(default_value_577,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__349,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__349;
            }
        }
        else {
            __result_obj__350 = come_increment_ref_count(default_value_577);
            /*c*/ come_call_finalizer3(default_value_577,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__350,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__350;
        }
    }
    __result_obj__351 = come_increment_ref_count(default_value_577);
    /*c*/ come_call_finalizer3(default_value_577,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__351,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__351;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__355;
void* __right_value610 = (void*)0;
struct sFunCallNode* result_603;
void* __right_value611 = (void*)0;
char* __dec_obj152;
void* __right_value612 = (void*)0;
char* __dec_obj153;
void* __right_value613 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj154;
void* __right_value614 = (void*)0;
struct list$1sType$ph* __dec_obj155;
void* __right_value615 = (void*)0;
struct buffer* __dec_obj156;
struct sFunCallNode* __result_obj__356;
    if(    self==(void*)0) {
        __result_obj__355 = (void*)0;
        return __result_obj__355;
    }
    result_603=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_603->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_603->sname,
        result_603->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_603->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj153=result_603->fun_name,
        result_603->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj154=result_603->params,
        result_603->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        /*b*/ come_call_finalizer3(__dec_obj154,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_603->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj155=result_603->method_generics_types,
        result_603->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj155,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj156=result_603->method_block,
        result_603->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj156,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_603->method_block_sline=self->method_block_sline;
    }
    __result_obj__356 = result_603;
    /*c*/ come_call_finalizer3(result_603,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__356;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_625;
int i_626;
struct CVALUE* default_value_627;
struct list$1CVALUE$ph* __result_obj__363;
struct list_item$1CVALUE$ph* it_628;
int i_629;
struct CVALUE* __dec_obj158;
struct list$1CVALUE$ph* __result_obj__364;
default_value_627 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_625=self->len;
        for(        i_626=0;        i_626<position-len_625;        i_626++        ){
            memset(&default_value_627,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_627));
            /*c*/ come_call_finalizer3(default_value_627,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__363 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__363;
    }
    it_628=self->head;
    i_629=0;
    while(it_628!=((void*)0)) {
        if(        position==i_629) {
            __dec_obj158=it_628->item,
            it_628->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj158,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_628=it_628->next;
        i_629++;
    }
    __result_obj__364 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__364;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_642;
int i_643;
char* __result_obj__368;
char* default_value_644;
char* __result_obj__369;
default_value_644 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_642=self->head;
    i_643=0;
    while(it_642!=((void*)0)) {
        if(        position==i_643) {
            __result_obj__368 = come_increment_ref_count(it_642->item);
            (__result_obj__368 = come_decrement_ref_count(__result_obj__368, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__368;
        }
        it_642=it_642->next;
        i_643++;
    }
    memset(&default_value_644,0,sizeof(char*));
    __result_obj__369 = come_increment_ref_count(default_value_644);
    (default_value_644 = come_decrement_ref_count(default_value_644, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__369 = come_decrement_ref_count(__result_obj__369, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__369;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__374;
void* __right_value675 = (void*)0;
struct sCurrentNode2* result_660;
void* __right_value676 = (void*)0;
char* __dec_obj161;
struct sCurrentNode2* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = (void*)0;
        return __result_obj__374;
    }
    result_660=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_660->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_660->sname,
        result_660->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_660->sline_real=self->sline_real;
    }
    __result_obj__375 = result_660;
    /*c*/ come_call_finalizer3(result_660,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__375;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_666;
unsigned int hash_667;
unsigned int it_668;
struct sClass* __result_obj__377;
struct sClass* __result_obj__378;
struct sClass* __result_obj__379;
struct sClass* __result_obj__380;
default_value_666 = (void*)0;
    memset(&default_value_666,0,sizeof(struct sClass*));
    hash_667=string_get_hash_key(((char*)key))%self->size;
    it_668=hash_667;
    while((_Bool)1) {
        if(        self->item_existance[it_668]) {
            if(            string_equals(self->keys[it_668],key)) {
                __result_obj__377 = come_increment_ref_count(self->items[it_668]);
                /*c*/ come_call_finalizer3(default_value_666,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__377,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__377;
            }
            it_668++;
            if(            it_668>=self->size) {
                it_668=0;
            }
            else if(            it_668==hash_667) {
                __result_obj__378 = come_increment_ref_count(default_value_666);
                /*c*/ come_call_finalizer3(default_value_666,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__378,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__378;
            }
        }
        else {
            __result_obj__379 = come_increment_ref_count(default_value_666);
            /*c*/ come_call_finalizer3(default_value_666,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__379,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__379;
        }
    }
    __result_obj__380 = come_increment_ref_count(default_value_666);
    /*c*/ come_call_finalizer3(default_value_666,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__380;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value720 = (void*)0;
struct buffer* __dec_obj170;
struct sComeCallNode* __result_obj__385;
    ((struct sNodeBase*)(__right_value720=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value720,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj170=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj170,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__385 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__385,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__385;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value721 = (void*)0;
char* __result_obj__386;
    __result_obj__386 = come_increment_ref_count(((char*)(__right_value721=__builtin_string("sComeCallNode"))));
    (__right_value721 = come_decrement_ref_count(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__386 = come_decrement_ref_count(__result_obj__386, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__386;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_700;
struct buffer* come_block_701;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1CVALUE$ph* come_params_702;
void* __right_value724 = (void*)0;
char* var_name_704;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sType* type__705;
void* __right_value728 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_708=0;
char* Err_709=0;
_Bool _if_conditional30;
_Bool __result_obj__391;
void* __right_value729 = (void*)0;
struct sNode* var_node_710;
_Bool Value_711;
_Bool __result_obj__392;
void* __right_value730 = (void*)0;
struct CVALUE* thread_var_value_712;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct CVALUE* come_value_713;
void* __right_value733 = (void*)0;
char* __dec_obj171;
struct sType* __dec_obj172;
void* __right_value734 = (void*)0;
struct sNode* null_node_714;
_Bool Value_715;
_Bool __result_obj__393;
void* __right_value735 = (void*)0;
struct CVALUE* __dec_obj173;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value738 = (void*)0;
struct sNode* current_stack_frame_node_716;
_Bool Value_717;
_Bool __result_obj__394;
void* __right_value739 = (void*)0;
struct CVALUE* current_stack_frame_value_718;
void* __right_value740 = (void*)0;
char* fun_name_719;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct buffer* come_block2_720;
void* __right_value743 = (void*)0;
char* class_name_721;
void* __right_value744 = (void*)0;
struct sClass* current_stack_frame_struct_722;
void* __right_value745 = (void*)0;
struct buffer* source3_723;
char* p_724;
char* head_725;
int sline_726;
struct buffer* __dec_obj174;
void* __right_value746 = (void*)0;
struct sNode* node_727;
_Bool Value_728;
_Bool __result_obj__395;
struct buffer* __dec_obj175;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct CVALUE* fun_value_729;
void* __right_value749 = (void*)0;
char* __dec_obj176;
struct sType* __dec_obj177;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct buffer* buf_730;
void* __right_value752 = (void*)0;
char* fun_name_731;
int j_732;
struct list$1CVALUE$ph* o2_saved_733;
struct CVALUE* it_734;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct CVALUE* come_value_735;
void* __right_value755 = (void*)0;
char* __dec_obj178;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sType* type_736;
void* __right_value759 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_737=0;
char* Err_738=0;
_Bool _if_conditional31;
_Bool __result_obj__396;
struct sType* __dec_obj179;
_Bool __result_obj__397;
    come_block_sline_700=self->come_block_sline;
    come_block_701=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_702=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1420, "struct list$1CVALUE$ph*"))));
    static int thread_num_703=0;
    thread_num_703++;
    var_name_704=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_703));
    type__705=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value726=map$2char$phsType$ph_at(info->types,((char*)(__right_value725=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value725 = come_decrement_ref_count(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value726,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__705==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value728=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_708=multiple_assign_var23->v1;
        Err_709=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_709)),        /*c*/ come_call_finalizer3(__right_value728,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional30) {
            __result_obj__391 = (_Bool)1;
            (Err_709 = come_decrement_ref_count(Err_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_702,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_704 = come_decrement_ref_count(var_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__391;
        }
        else {
        }
        (Err_709 = come_decrement_ref_count(Err_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_710=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_704),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__705),(_Bool)1,((void*)0),info));
    Value_711=node_compile(var_node_710,info);
    if(    !Value_711) {
        __result_obj__392 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_702,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_704 = come_decrement_ref_count(var_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_710) ? var_node_710 = come_decrement_ref_count(var_node_710, ((struct sNode*)var_node_710)->finalize, ((struct sNode*)var_node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__392;
    }
    else {
    }
    thread_var_value_712=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_713=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1443, "struct CVALUE*"))));
    __dec_obj171=come_value_713->c_value,
    come_value_713->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_712->c_value));
    __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj172=come_value_713->type,
    come_value_713->type=(struct sType*)come_increment_ref_count(thread_var_value_712->type);
    /*b*/ come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_713->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_702,(struct CVALUE*)come_increment_ref_count(come_value_713));
    null_node_714=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_715=node_compile(null_node_714,info);
    if(    !Value_715) {
        __result_obj__393 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_702,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_704 = come_decrement_ref_count(var_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_710) ? var_node_710 = come_decrement_ref_count(var_node_710, ((struct sNode*)var_node_710)->finalize, ((struct sNode*)var_node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_712,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_713,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_714) ? null_node_714 = come_decrement_ref_count(null_node_714, ((struct sNode*)null_node_714)->finalize, ((struct sNode*)null_node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__393;
    }
    else {
    }
    __dec_obj173=come_value_713,
    come_value_713=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj173,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_702,(struct CVALUE*)come_increment_ref_count(come_value_713));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1460, "struct sNode");
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value737=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1460, "struct sCurrentNode2*")),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_716=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value737,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_717=node_compile(current_stack_frame_node_716,info);
    if(    !Value_717) {
        __result_obj__394 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_702,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_704 = come_decrement_ref_count(var_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_710) ? var_node_710 = come_decrement_ref_count(var_node_710, ((struct sNode*)var_node_710)->finalize, ((struct sNode*)var_node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_712,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_713,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_714) ? null_node_714 = come_decrement_ref_count(null_node_714, ((struct sNode*)null_node_714)->finalize, ((struct sNode*)null_node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_716) ? current_stack_frame_node_716 = come_decrement_ref_count(current_stack_frame_node_716, ((struct sNode*)current_stack_frame_node_716)->finalize, ((struct sNode*)current_stack_frame_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__394;
    }
    else {
    }
    current_stack_frame_value_718=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_719=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_703));
    come_block2_720=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1470, "struct buffer*"))));
    class_name_721=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_720,"void* %s(%s* parent)\n",fun_name_719,class_name_721);
    buffer_append_str(come_block2_720,((char*)(__right_value744=buffer_to_string(come_block_701))));
    (__right_value744 = come_decrement_ref_count(__right_value744, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_722=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value745=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_721)));
    /*c*/ come_call_finalizer3(__right_value745,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_723=(struct buffer*)come_increment_ref_count(info->source);
    p_724=info->p;
    head_725=info->head;
    sline_726=info->sline;
    __dec_obj174=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_720);
    /*b*/ come_call_finalizer3(__dec_obj174,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_700;
    node_727=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_728=node_compile(node_727,info);
    if(    !Value_728) {
        __result_obj__395 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_702,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_704 = come_decrement_ref_count(var_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_710) ? var_node_710 = come_decrement_ref_count(var_node_710, ((struct sNode*)var_node_710)->finalize, ((struct sNode*)var_node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_712,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_713,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_714) ? null_node_714 = come_decrement_ref_count(null_node_714, ((struct sNode*)null_node_714)->finalize, ((struct sNode*)null_node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_716) ? current_stack_frame_node_716 = come_decrement_ref_count(current_stack_frame_node_716, ((struct sNode*)current_stack_frame_node_716)->finalize, ((struct sNode*)current_stack_frame_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_718,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_719 = come_decrement_ref_count(fun_name_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_720,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_721 = come_decrement_ref_count(class_name_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_723,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_727) ? node_727 = come_decrement_ref_count(node_727, ((struct sNode*)node_727)->finalize, ((struct sNode*)node_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__395;
    }
    else {
    }
    __dec_obj175=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_723);
    /*b*/ come_call_finalizer3(__dec_obj175,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_724;
    info->head=head_725;
    info->sline=sline_726;
    info->current_stack_frame_struct=current_stack_frame_struct_722;
    fun_value_729=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1504, "struct CVALUE*"))));
    __dec_obj176=fun_value_729->c_value,
    fun_value_729->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_719));
    __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj177=come_value_713->type,
    come_value_713->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj177,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_713->var=((void*)0);
    list$1CVALUE$ph_add(come_params_702,(struct CVALUE*)come_increment_ref_count(fun_value_729));
    list$1CVALUE$ph_add(come_params_702,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_718));
    buf_730=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1514, "struct buffer*"))));
    (fun_name_719 = come_decrement_ref_count(fun_name_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_731=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_730,"(");
    buffer_append_str(buf_730,fun_name_731);
    buffer_append_str(buf_730,"(");
    j_732=0;
    for(    o2_saved_733=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_702)),it_734=list$1CVALUE$ph_begin((o2_saved_733));    !list$1CVALUE$ph_end((o2_saved_733));    it_734=list$1CVALUE$ph_next((o2_saved_733))    ){
        buffer_append_str(buf_730,it_734->c_value);
        if(        j_732!=list$1CVALUE$ph_length(come_params_702)-1) {
            buffer_append_str(buf_730,",");
        }
        j_732++;
    }
    /*c*/ come_call_finalizer3(o2_saved_733,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_730,")");
    buffer_append_str(buf_730,", ");
    buffer_append_str(buf_730,thread_var_value_712->c_value);
    buffer_append_str(buf_730,")");
    /*c*/ come_call_finalizer3(come_value_713,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_735=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1537, "struct CVALUE*"))));
    __dec_obj178=come_value_735->c_value,
    come_value_735->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_730));
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_736=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value757=map$2char$phsType$ph_at(info->types,((char*)(__right_value756=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value756 = come_decrement_ref_count(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value757,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_736==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value759=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_737=multiple_assign_var24->v1;
        Err_738=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_738)),        /*c*/ come_call_finalizer3(__right_value759,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional31) {
            __result_obj__396 = (_Bool)1;
            (Err_738 = come_decrement_ref_count(Err_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_702,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_704 = come_decrement_ref_count(var_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((var_node_710) ? var_node_710 = come_decrement_ref_count(var_node_710, ((struct sNode*)var_node_710)->finalize, ((struct sNode*)var_node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(thread_var_value_712,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((null_node_714) ? null_node_714 = come_decrement_ref_count(null_node_714, ((struct sNode*)null_node_714)->finalize, ((struct sNode*)null_node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_716) ? current_stack_frame_node_716 = come_decrement_ref_count(current_stack_frame_node_716, ((struct sNode*)current_stack_frame_node_716)->finalize, ((struct sNode*)current_stack_frame_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(current_stack_frame_value_718,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_block2_720,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_721 = come_decrement_ref_count(class_name_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_723,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_727) ? node_727 = come_decrement_ref_count(node_727, ((struct sNode*)node_727)->finalize, ((struct sNode*)node_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(fun_value_729,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_730,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_731 = come_decrement_ref_count(fun_name_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_735,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_736,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__396;
        }
        else {
        }
        (Err_738 = come_decrement_ref_count(Err_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj179=come_value_735->type,
    come_value_735->type=(struct sType*)come_increment_ref_count(type_736);
    /*b*/ come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_735->var=((void*)0);
    add_come_last_code(info,"%s",come_value_735->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_735));
    __result_obj__397 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_702,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_704 = come_decrement_ref_count(var_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_710) ? var_node_710 = come_decrement_ref_count(var_node_710, ((struct sNode*)var_node_710)->finalize, ((struct sNode*)var_node_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_712,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_714) ? null_node_714 = come_decrement_ref_count(null_node_714, ((struct sNode*)null_node_714)->finalize, ((struct sNode*)null_node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_716) ? current_stack_frame_node_716 = come_decrement_ref_count(current_stack_frame_node_716, ((struct sNode*)current_stack_frame_node_716)->finalize, ((struct sNode*)current_stack_frame_node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_718,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_720,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_721 = come_decrement_ref_count(class_name_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_723,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_727) ? node_727 = come_decrement_ref_count(node_727, ((struct sNode*)node_727)->finalize, ((struct sNode*)node_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_729,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_730,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_731 = come_decrement_ref_count(fun_name_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_735,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_736,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__397;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_706;
unsigned int it_707;
struct sType* __result_obj__387;
struct sType* __result_obj__388;
struct sType* __result_obj__389;
struct sType* __result_obj__390;
    hash_706=string_get_hash_key(((char*)key))%self->size;
    it_707=hash_706;
    while((_Bool)1) {
        if(        self->item_existance[it_707]) {
            if(            string_equals(self->keys[it_707],key)) {
                __result_obj__387 = come_increment_ref_count(self->items[it_707]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__387,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__387;
            }
            it_707++;
            if(            it_707>=self->size) {
                it_707=0;
            }
            else if(            it_707==hash_706) {
                __result_obj__388 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__388,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__388;
            }
        }
        else {
            __result_obj__389 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__389,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__389;
        }
    }
    __result_obj__390 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__390,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__390;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value760 = (void*)0;
struct sNode* __dec_obj180;
struct sComeJoinNode* __result_obj__398;
    ((struct sNodeBase*)(__right_value760=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value760,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj180=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__398 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__398,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__398;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value761 = (void*)0;
char* __result_obj__399;
    __result_obj__399 = come_increment_ref_count(((char*)(__right_value761=__builtin_string("sComeJoinNode"))));
    (__right_value761 = come_decrement_ref_count(__right_value761, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__399 = come_decrement_ref_count(__result_obj__399, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__399;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_739;
_Bool Value_740;
_Bool __result_obj__400;
void* __right_value762 = (void*)0;
struct CVALUE* come_value_741;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct buffer* buf_742;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct CVALUE* come_value_743;
void* __right_value767 = (void*)0;
char* __dec_obj181;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sType* __dec_obj182;
_Bool __result_obj__401;
    node_739=(struct sNode*)come_increment_ref_count(self->node);
    Value_740=node_compile(node_739,info);
    if(    !Value_740) {
        __result_obj__400 = (_Bool)0;
        ((node_739) ? node_739 = come_decrement_ref_count(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__400;
    }
    else {
    }
    come_value_741=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_742=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1585, "struct buffer*"))));
    buffer_append_str(buf_742,"pthread_join(");
    buffer_append_str(buf_742,come_value_741->c_value);
    buffer_append_str(buf_742,", 0)");
    /*c*/ come_call_finalizer3(come_value_741,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_743=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1590, "struct CVALUE*"))));
    __dec_obj181=come_value_743->c_value,
    come_value_743->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_742));
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj182=come_value_743->type,
    come_value_743->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1592, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_743->var=((void*)0);
    add_come_last_code(info,"%s",come_value_743->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_743));
    __result_obj__401 = (_Bool)1;
    ((node_739) ? node_739 = come_decrement_ref_count(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_742,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_743,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__401;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value771 = (void*)0;
struct list$1sNode$ph* __dec_obj183;
struct list$1sBlock$ph* __dec_obj184;
struct sBlock* __dec_obj185;
struct sComePollNode* __result_obj__402;
    ((struct sNodeBase*)(__right_value771=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value771,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj183=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    /*b*/ come_call_finalizer3(__dec_obj183,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj184=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    /*b*/ come_call_finalizer3(__dec_obj184,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj185=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    /*b*/ come_call_finalizer3(__dec_obj185,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__402 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__402,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__402;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value772 = (void*)0;
char* __result_obj__403;
    __result_obj__403 = come_increment_ref_count(((char*)(__right_value772=__builtin_string("sComePollNode"))));
    (__right_value772 = come_decrement_ref_count(__right_value772, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__403 = come_decrement_ref_count(__result_obj__403, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__403;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_748;
struct list$1sBlock$ph* blocks_749;
int time_out_750;
int n_752;
struct list$1sNode$ph* o2_saved_753;
struct sNode* it_756;
_Bool Value_759;
_Bool __result_obj__410;
void* __right_value773 = (void*)0;
struct CVALUE* come_value_760;
int n_761;
struct list$1sNode$ph* o2_saved_762;
struct sNode* it_763;
void* __right_value774 = (void*)0;
_Bool __result_obj__413;
    vars_748=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_749=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_750=self->time_out;
    static int var_num_751=0;
    var_num_751++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_751,list$1sNode$ph_length(vars_748));
    n_752=0;
    for(    o2_saved_753=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_756=list$1sNode$ph_begin((o2_saved_753));    !list$1sNode$ph_end((o2_saved_753));    it_756=list$1sNode$ph_next((o2_saved_753))    ){
        Value_759=node_compile(it_756,info);
        if(        !Value_759) {
            __result_obj__410 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_753,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_748,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_749,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__410;
        }
        else {
        }
        come_value_760=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_751,n_752,come_value_760->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_751,n_752,1);
        n_752++;
        /*c*/ come_call_finalizer3(come_value_760,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_753,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_751,var_num_751,list$1sNode$ph_length(vars_748),time_out_750);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_751);
    n_761=0;
    for(    o2_saved_762=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_763=list$1sNode$ph_begin((o2_saved_762));    !list$1sNode$ph_end((o2_saved_762));    it_763=list$1sNode$ph_next((o2_saved_762))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_751,n_761,1);
        transpile_block(((struct sBlock*)(__right_value774=list$1sBlock$ph$p_operator_load_element(blocks_749,n_761))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value774,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_761++;
    }
    /*c*/ come_call_finalizer3(o2_saved_762,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_751);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__413 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_748,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_749,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__413;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_744;
struct list_item$1sBlock$ph* prev_it_745;
    it_744=self->head;
    while(it_744!=((void*)0)) {
        prev_it_745=it_744;
        it_744=it_744->next;
        /*c*/ come_call_finalizer3(prev_it_745,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_746;
struct list_item$1sBlock$ph* prev_it_747;
    it_746=self->head;
    while(it_746!=((void*)0)) {
        prev_it_747=it_746;
        it_746=it_746->next;
        /*c*/ come_call_finalizer3(prev_it_747,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_754;
struct sNode* __result_obj__404;
struct sNode* __result_obj__405;
struct sNode* result_755;
struct sNode* __result_obj__406;
result_754 = (void*)0;
result_755 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_754,0,sizeof(struct sNode*));
        __result_obj__404 = result_754;
        return __result_obj__404;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__405 = self->it->item;
        return __result_obj__405;
    }
    memset(&result_755,0,sizeof(struct sNode*));
    __result_obj__406 = result_755;
    return __result_obj__406;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_757;
struct sNode* __result_obj__407;
struct sNode* __result_obj__408;
struct sNode* result_758;
struct sNode* __result_obj__409;
result_757 = (void*)0;
result_758 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_757,0,sizeof(struct sNode*));
        __result_obj__407 = result_757;
        return __result_obj__407;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__408 = self->it->item;
        return __result_obj__408;
    }
    memset(&result_758,0,sizeof(struct sNode*));
    __result_obj__409 = result_758;
    return __result_obj__409;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_764;
int i_765;
struct sBlock* __result_obj__411;
struct sBlock* default_value_766;
struct sBlock* __result_obj__412;
default_value_766 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_764=self->head;
    i_765=0;
    while(it_764!=((void*)0)) {
        if(        position==i_765) {
            __result_obj__411 = come_increment_ref_count(it_764->item);
            /*c*/ come_call_finalizer3(__result_obj__411,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__411;
        }
        it_764=it_764->next;
        i_765++;
    }
    memset(&default_value_766,0,sizeof(struct sBlock*));
    __result_obj__412 = come_increment_ref_count(default_value_766);
    /*c*/ come_call_finalizer3(default_value_766,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__412,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__412;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value777 = (void*)0;
struct sNode* node_767;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj186;
struct sNode* __result_obj__414;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1675, "struct sNode");
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value776=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1675, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_767=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*c*/ come_call_finalizer3(__right_value776,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj186=node_767,
    node_767=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_767),info));
    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__414 = come_increment_ref_count(node_767);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_767) ? node_767 = come_decrement_ref_count(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__414;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value779 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value780 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj188;
struct sLambdaCall* __result_obj__415;
    ((struct sNodeBase*)(__right_value779=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value779,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj187=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj188=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    /*b*/ come_call_finalizer3(__dec_obj188,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__415 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__415,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__415;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value781 = (void*)0;
char* __result_obj__416;
    __result_obj__416 = come_increment_ref_count(((char*)(__right_value781=__builtin_string("sLambdaCall"))));
    (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__416 = come_decrement_ref_count(__result_obj__416, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__416;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_768;
struct list$1tuple2$2char$phsNode$ph$ph* params_769;
_Bool Value_770;
_Bool __result_obj__417;
void* __right_value782 = (void*)0;
struct CVALUE* come_value_771;
struct sType* lambda_type_772;
void* __right_value783 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_773=0;
char* Err_774=0;
_Bool _if_conditional32;
_Bool __result_obj__418;
void* __right_value784 = (void*)0;
struct sType* result_type_775;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1CVALUE$ph* come_params_776;
void* __right_value787 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_777=0;
char* Err_778=0;
_Bool _if_conditional33;
_Bool __result_obj__419;
_Bool __result_obj__420;
int i_779;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_780;
struct tuple2$2char$phsNode$ph* it_781;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_782=0;
struct sNode* node_783=0;
_Bool Value_784;
_Bool __result_obj__421;
void* __right_value788 = (void*)0;
struct CVALUE* come_value_785;
void* __right_value789 = (void*)0;
_Bool _if_conditional34;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_786=0;
char* Err_787=0;
_Bool _if_conditional35;
_Bool __result_obj__422;
void* __right_value794 = (void*)0;
_Bool _if_conditional36;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct buffer* buf_788;
int j_789;
struct list$1CVALUE$ph* o2_saved_790;
struct CVALUE* it_791;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct CVALUE* come_value2_792;
void* __right_value800 = (void*)0;
char* __dec_obj189;
void* __right_value801 = (void*)0;
struct sType* __dec_obj190;
_Bool __result_obj__423;
    node_768=(struct sNode*)come_increment_ref_count(self->node);
    params_769=self->params;
    Value_770=node_compile(node_768,info);
    if(    !Value_770) {
        __result_obj__417 = (_Bool)0;
        ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__417;
    }
    else {
    }
    come_value_771=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_772=come_value_771->type;
    if(    lambda_type_772->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value783=err_msg(info,"invalid lambda type")));
        come_exception_var_15_773=multiple_assign_var25->v1;
        Err_774=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_774)),        /*c*/ come_call_finalizer3(__right_value783,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional32) {
            __result_obj__418 = (_Bool)1;
            (Err_774 = come_decrement_ref_count(Err_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_771,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__418;
        }
        else {
        }
        (Err_774 = come_decrement_ref_count(Err_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_775=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_772->mResultType));
    result_type_775->mStatic=(_Bool)0;
    come_params_776=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1719, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_772->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_769)&&!lambda_type_772->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value787=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_772->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_769))));
        come_exception_var_16_777=multiple_assign_var26->v1;
        Err_778=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_778)),        /*c*/ come_call_finalizer3(__right_value787,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional33) {
            __result_obj__419 = (_Bool)1;
            (Err_778 = come_decrement_ref_count(Err_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_771,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_775,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_776,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__419;
        }
        else {
        }
        __result_obj__420 = (_Bool)0;
        (Err_778 = come_decrement_ref_count(Err_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_771,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_775,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_776,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__420;
        (Err_778 = come_decrement_ref_count(Err_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_779=0;
    for(    o2_saved_780=(params_769),it_781=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_780));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_780));    it_781=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_780))    ){
        multiple_assign_var27=it_781;
        label_782=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_783=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_784=node_compile(node_783,info);
        if(        !Value_784) {
            __result_obj__421 = (_Bool)0;
            (label_782 = come_decrement_ref_count(label_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_783) ? node_783 = come_decrement_ref_count(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_771,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_775,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_776,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__421;
        }
        else {
        }
        come_value_785=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_772->mVarArgs&&((struct sType*)(__right_value789=list$1sType$ph$p_operator_load_element(lambda_type_772->mParamTypes,i_779)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value789,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value793=check_assign_type(((char*)(__right_value791=xsprintf("calling param #\%s",((char*)(__right_value790=int_to_string(i_779)))))),((struct sType*)(__right_value792=list$1sType$ph$p_operator_load_element(lambda_type_772->mParamTypes,i_779))),come_value_785->type,come_value_785,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_786=multiple_assign_var28->v1;
            Err_787=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_787)),            (__right_value790 = come_decrement_ref_count(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value791 = come_decrement_ref_count(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value792,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value793,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional35) {
                __result_obj__422 = (_Bool)1;
                (Err_787 = come_decrement_ref_count(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_782 = come_decrement_ref_count(label_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_783) ? node_783 = come_decrement_ref_count(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_785,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_771,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_775,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_776,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__422;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)(__right_value794=list$1sType$ph$p_operator_load_element(lambda_type_772->mParamTypes,i_779)))->mHeap&&come_value_785->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value794,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)(__right_value795=list$1sType$ph$p_operator_load_element(lambda_type_772->mParamTypes,i_779))),come_value_785->type,come_value_785,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value795,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (Err_787 = come_decrement_ref_count(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(come_params_776,(struct CVALUE*)come_increment_ref_count(come_value_785));
        i_779++;
        (label_782 = come_decrement_ref_count(label_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_783) ? node_783 = come_decrement_ref_count(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_785,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_788=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1753, "struct buffer*"))));
    buffer_append_str(buf_788,"(");
    buffer_append_str(buf_788,come_value_771->c_value);
    buffer_append_str(buf_788,")");
    buffer_append_str(buf_788,"(");
    j_789=0;
    for(    o2_saved_790=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_776)),it_791=list$1CVALUE$ph_begin((o2_saved_790));    !list$1CVALUE$ph_end((o2_saved_790));    it_791=list$1CVALUE$ph_next((o2_saved_790))    ){
        buffer_append_str(buf_788,it_791->c_value);
        if(        j_789!=list$1CVALUE$ph_length(come_params_776)-1) {
            buffer_append_str(buf_788,",");
        }
        j_789++;
    }
    /*c*/ come_call_finalizer3(o2_saved_790,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_788,")");
    come_value2_792=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1772, "struct CVALUE*"))));
    __dec_obj189=come_value2_792->c_value,
    come_value2_792->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_788));
    __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_772->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_792,(struct sType*)come_increment_ref_count(lambda_type_772->mResultType),info,(_Bool)0);
    }
    __dec_obj190=come_value2_792->type,
    come_value2_792->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_775));
    /*b*/ come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_792->type->mStatic=(_Bool)0;
    come_value2_792->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_792->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_792));
    __result_obj__423 = (_Bool)1;
    ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_771,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_775,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_776,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_788,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_792,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__423;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value802 = (void*)0;
struct sType* __dec_obj191;
struct sVarArgTypeName* __result_obj__424;
    ((struct sNodeBase*)(__right_value802=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value802,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj191=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__424 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__424,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__424;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value803 = (void*)0;
char* __result_obj__425;
    __result_obj__425 = come_increment_ref_count(((char*)(__right_value803=__builtin_string("sVarArgTypeName"))));
    (__right_value803 = come_decrement_ref_count(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__425 = come_decrement_ref_count(__result_obj__425, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__425;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_793;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct CVALUE* come_value_794;
void* __right_value806 = (void*)0;
char* __dec_obj192;
struct sType* __dec_obj193;
_Bool __result_obj__426;
    type_793=(struct sType*)come_increment_ref_count(self->type);
    come_value_794=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1809, "struct CVALUE*"))));
    __dec_obj192=come_value_794->c_value,
    come_value_794->c_value=(char*)come_increment_ref_count(make_type_name_string(type_793,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj193=come_value_794->type,
    come_value_794->type=(struct sType*)come_increment_ref_count(type_793);
    /*b*/ come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_794->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_794));
    __result_obj__426 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_793,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_794,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__426;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct list$1sType$ph* method_generics_types_795;
void* __right_value809 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_796=0;
char* Err_797=0;
void* __right_value810 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_798=0;
char* name_799=0;
_Bool err_800=0;
void* __right_value811 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_801=0;
char* Err_802=0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_803;
_Bool _va_arg_804;
char* p_805;
int sline_806;
_Bool err_flag_807;
void* __right_value815 = (void*)0;
char* label_808;
void* __right_value816 = (void*)0;
char* __dec_obj194;
char* __dec_obj195;
_Bool no_comma_809;
_Bool in_fun_param_810;
void* __right_value817 = (void*)0;
struct sNode* node_811;
void* __right_value818 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
_Bool guard_break_816;
struct buffer* method_block_817;
int method_block_sline_818;
char* head_819;
void* __right_value824 = (void*)0;
char* tail_820;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct buffer* __dec_obj202;
int len_821;
void* __right_value827 = (void*)0;
char* mem_822;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value830 = (void*)0;
struct sNode* node_823;
void* __right_value831 = (void*)0;
struct sNode* __dec_obj203;
struct sNode* __result_obj__429;
    method_generics_types_795=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1823, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value809=err_msg(info,"unexpected source end")));
                come_exception_var_c1_796=multiple_assign_var29->v1;
                Err_797=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_797)?(puts(Err_797),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value809,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_797 = come_decrement_ref_count(Err_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value810=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_798=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_799=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_800=multiple_assign_var30->v3;
                /*c*/ come_call_finalizer3(__right_value810,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_800) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value811=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_801=multiple_assign_var31->v1;
                    Err_802=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_802)?(puts(Err_802),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value811,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_802 = come_decrement_ref_count(Err_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph_push_back(method_generics_types_795,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_798)));
                /*c*/ come_call_finalizer3(type_798,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_799 = come_decrement_ref_count(name_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_803=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1861, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_804=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_805=info->p;
        sline_806=info->sline;
        err_flag_807=(_Bool)0;
        label_808=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj194=label_808,
            label_808=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_807=(_Bool)1;
        }
        if(        err_flag_807==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj195=label_808,
            label_808=((void*)0);
            __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_805;
            info->sline=sline_806;
        }
        no_comma_809=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_810=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_811=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj196=node_811,
        node_811=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_811),info));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_809;
        info->in_fun_param=in_fun_param_810;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_803,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1909, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_808),(struct sNode*)come_increment_ref_count(node_811))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_808 = come_decrement_ref_count(label_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_811) ? node_811 = come_decrement_ref_count(node_811, ((struct sNode*)node_811)->finalize, ((struct sNode*)node_811)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_808 = come_decrement_ref_count(label_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_811) ? node_811 = come_decrement_ref_count(node_811, ((struct sNode*)node_811)->finalize, ((struct sNode*)node_811)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_804;
    guard_break_816=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_816=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_817=((void*)0);
    method_block_sline_818=0;
    if(    *info->p==123) {
        head_819=info->p;
        method_block_sline_818=info->sline;
        ((char*)(__right_value824=skip_block(info)));
        (__right_value824 = come_decrement_ref_count(__right_value824, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_820=info->p;
        __dec_obj202=method_block_817,
        method_block_817=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1946, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj202,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_821=tail_820-head_819;
        mem_822=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_821+1)), "05call.c", 1949, "char*"));
        memcpy(mem_822,head_819,len_821);
        mem_822[len_821]=0;
        buffer_append_str(method_block_817,mem_822);
        buffer_append_str(method_block_817,"\n");
        (mem_822 = come_decrement_ref_count(mem_822, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1959, "struct sNode");
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value829=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1959, "struct sFunCallNode*")),fun_name,params_803,guard_break_816,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_795),(struct buffer*)come_increment_ref_count(method_block_817),method_block_sline_818,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_823=(struct sNode*)come_increment_ref_count(_inf_value6);
    /*c*/ come_call_finalizer3(__right_value829,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj203=node_823,
    node_823=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_823),info));
    (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__429 = come_increment_ref_count(node_823);
    /*c*/ come_call_finalizer3(method_generics_types_795,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_803,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_817,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_823) ? node_823 = come_decrement_ref_count(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__429) ? __result_obj__429 = come_decrement_ref_count(__result_obj__429, ((struct sNode*)__result_obj__429)->finalize, ((struct sNode*)__result_obj__429)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__429;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value819 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_812;
struct tuple2$2char$phsNode$ph* __dec_obj197;
void* __right_value820 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_813;
struct tuple2$2char$phsNode$ph* __dec_obj198;
void* __right_value821 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_814;
struct tuple2$2char$phsNode$ph* __dec_obj199;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__427;
    if(    self->len==0) {
        litem_812=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value819=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1274, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_812->prev=((void*)0);
        litem_812->next=((void*)0);
        __dec_obj197=litem_812->item,
        litem_812->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj197,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_812;
        self->head=litem_812;
    }
    else if(    self->len==1) {
        litem_813=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value820=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1284, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_813->prev=self->head;
        litem_813->next=((void*)0);
        __dec_obj198=litem_813->item,
        litem_813->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj198,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_813;
        self->head->next=litem_813;
    }
    else {
        litem_814=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value821=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1294, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_814->prev=self->tail;
        litem_814->next=((void*)0);
        __dec_obj199=litem_814->item,
        litem_814->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj199,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_814;
        self->tail=litem_814;
    }
    self->len++;
    __result_obj__427 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__427;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_815;
    result_815=0;
    result_815+=int_get_hash_key(((int)self->v1));
    result_815+=int_get_hash_key(((int)self->v2));
    return result_815;
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
char* __dec_obj200;
struct sNode* __dec_obj201;
struct tuple2$2char$phsNode$ph* __result_obj__428;
    __dec_obj200=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj201=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__428 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__428,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__428;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value832 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_824=0;
char* Err_825=0;
struct sNode* __result_obj__430;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value832=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_exception_var_c3_824=multiple_assign_var32->v1;
    Err_825=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_825)?(puts(Err_825),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value832,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    stackframe();
    exit(3);
    __result_obj__430 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_825 = come_decrement_ref_count(Err_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__430) ? __result_obj__430 = come_decrement_ref_count(__result_obj__430, ((struct sNode*)__result_obj__430)->finalize, ((struct sNode*)__result_obj__430)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__430;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value839 = (void*)0;
struct sNode* __result_obj__433;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1980, "struct sNode");
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value834=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1980, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result_obj__433 = come_increment_ref_count(((struct sNode*)(__right_value839=_inf_value7)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value834,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value839) ? __right_value839 = come_decrement_ref_count(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__433) ? __result_obj__433 = come_decrement_ref_count(__result_obj__433, ((struct sNode*)__result_obj__433)->finalize, ((struct sNode*)__result_obj__433)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__433;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__431;
void* __right_value835 = (void*)0;
struct sReturnNode* result_826;
void* __right_value836 = (void*)0;
char* __dec_obj204;
void* __right_value837 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value838 = (void*)0;
char* __dec_obj206;
struct sReturnNode* __result_obj__432;
    if(    self==(void*)0) {
        __result_obj__431 = (void*)0;
        return __result_obj__431;
    }
    result_826=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_826->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj204=result_826->sname,
        result_826->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_826->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj205=result_826->value,
        result_826->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj206=result_826->value_source,
        result_826->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__432 = result_826;
    /*c*/ come_call_finalizer3(result_826,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__432;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value843 = (void*)0;
struct sNode* __result_obj__434;
char* head_827;
void* __right_value844 = (void*)0;
struct sNode* value_828;
char* tail_829;
void* __right_value845 = (void*)0;
struct sNode* __dec_obj207;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value849 = (void*)0;
struct sNode* __result_obj__435;
int nest_831;
char* head_832;
int head_sline_833;
int sline_real_834;
void* __right_value850 = (void*)0;
char* buf_835;
_Bool is_type_name__836;
_Bool is_special_word_838;
_Bool define_function_pointer_flag_839;
void* __right_value851 = (void*)0;
_Bool lambda_flag_840;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
char* word2_841;
_Bool fun_name_with_type_name_842;
void* __right_value854 = (void*)0;
char* word2_843;
_Bool call_method_generics_fun_call_844;
void* __right_value855 = (void*)0;
char* __dec_obj208;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
_Bool _if_conditional37;
int nest_845;
_Bool inline_asm_846;
void* __right_value860 = (void*)0;
char* __dec_obj209;
void* __right_value861 = (void*)0;
char* __dec_obj210;
void* __right_value862 = (void*)0;
char* __dec_obj211;
void* __right_value863 = (void*)0;
struct sNode* node_847;
struct sNode* __result_obj__436;
_Bool no_comma_848;
void* __right_value864 = (void*)0;
struct sNode* exp_849;
void* __right_value865 = (void*)0;
struct sNode* exp2_850;
void* __right_value866 = (void*)0;
struct sNode* __result_obj__437;
void* __right_value867 = (void*)0;
char* block_text_851;
char* contents_852;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value873 = (void*)0;
struct sNode* __result_obj__440;
void* __right_value874 = (void*)0;
struct sNode* node_854;
struct sNode* __result_obj__441;
void* __right_value875 = (void*)0;
struct sNode* node_855;
struct sNode* __result_obj__442;
struct buffer* come_block_856;
int come_block_sline_857;
char* head_858;
void* __right_value876 = (void*)0;
char* tail_859;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct buffer* __dec_obj214;
int len_860;
void* __right_value879 = (void*)0;
char* mem_861;
char* head_862;
_Bool no_output_come_code_863;
void* __right_value880 = (void*)0;
char* tail_864;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct buffer* __dec_obj215;
int len_865;
void* __right_value883 = (void*)0;
char* mem_866;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value889 = (void*)0;
struct sNode* node_867;
struct sNode* __result_obj__445;
struct buffer* come_block_869;
int come_block_sline_870;
void* __right_value890 = (void*)0;
struct sNode* node_871;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value896 = (void*)0;
struct sNode* __result_obj__448;
int time_out_873;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1sNode$ph* vars_874;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct list$1sBlock$ph* blocks_875;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct sBlock* else_block_876;
void* __right_value903 = (void*)0;
struct sBlock* __dec_obj220;
void* __right_value904 = (void*)0;
struct sNode* var_name_877;
void* __right_value905 = (void*)0;
struct sBlock* block_878;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value955 = (void*)0;
struct sNode* __result_obj__472;
void* __right_value956 = (void*)0;
struct sNode* node_914;
struct sNode* __result_obj__473;
void* __right_value957 = (void*)0;
struct sNode* node_915;
struct sNode* __result_obj__474;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value962 = (void*)0;
struct sNode* __result_obj__477;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value967 = (void*)0;
struct sNode* __result_obj__480;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value972 = (void*)0;
struct sNode* __result_obj__483;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value977 = (void*)0;
struct sNode* __result_obj__486;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value982 = (void*)0;
struct sNode* __result_obj__489;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value987 = (void*)0;
struct sNode* __result_obj__492;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value992 = (void*)0;
struct sNode* __result_obj__495;
void* __right_value993 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_923=0;
char* name_924=0;
_Bool err_925=0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value999 = (void*)0;
struct sNode* __result_obj__498;
void* __right_value1000 = (void*)0;
struct sNode* node_927;
struct sNode* __result_obj__499;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct buffer* buf2_928;
void* __right_value1003 = (void*)0;
char* word_929;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct list$1sNode$ph* exps_930;
void* __right_value1006 = (void*)0;
struct sNode* exp_931;
void* __right_value1007 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_932=0;
char* Err_933=0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value1015 = (void*)0;
struct sNode* __result_obj__502;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct buffer* fun_name_935;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct sType* type_936;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sClass* klass_940;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct sType* __dec_obj249;
void* __right_value1026 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_941=0;
char* Err_942=0;
void* __right_value1027 = (void*)0;
char* buf2_943;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sNode* node_944;
struct sNode* __result_obj__507;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct buffer* fun_name_945;
void* __right_value1032 = (void*)0;
char* buf2_946;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct sNode* node_947;
struct sNode* __result_obj__508;
void* __right_value1035 = (void*)0;
struct sNode* node_948;
struct sNode* __result_obj__509;
void* __right_value1036 = (void*)0;
struct sNode* node_949;
struct sNode* __result_obj__510;
void* __right_value1037 = (void*)0;
struct sNode* node_950;
struct sNode* __result_obj__511;
void* __right_value1038 = (void*)0;
struct sNode* node_951;
struct sNode* __result_obj__512;
void* __right_value1039 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_952=0;
char* Err_953=0;
struct sNode* __result_obj__513;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1993, "struct sNode");
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value842=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1993, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__434 = come_increment_ref_count(((struct sNode*)(__right_value843=_inf_value8)));
            /*c*/ come_call_finalizer3(__right_value842,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value843) ? __right_value843 = come_decrement_ref_count(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__434) ? __result_obj__434 = come_decrement_ref_count(__result_obj__434, ((struct sNode*)__result_obj__434)->finalize, ((struct sNode*)__result_obj__434)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__434;
        }
        else {
            head_827=info->p;
            value_828=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_829=info->p;
            __dec_obj207=value_828,
            value_828=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_828),info));
            (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_830[tail_829-head_827+1];
            memset(&buf_830, 0, sizeof(char)            *(tail_829-head_827+1)            );
            memcpy(buf_830,head_827,tail_829-head_827);
            buf_830[tail_829-head_827]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2005, "struct sNode");
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value848=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2005, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_828),(char*)come_increment_ref_count(__builtin_string(buf_830)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__435 = come_increment_ref_count(((struct sNode*)(__right_value849=_inf_value9)));
            ((value_828) ? value_828 = come_decrement_ref_count(value_828, ((struct sNode*)value_828)->finalize, ((struct sNode*)value_828)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value848,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value849) ? __right_value849 = come_decrement_ref_count(__right_value849, ((struct sNode*)__right_value849)->finalize, ((struct sNode*)__right_value849)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__435) ? __result_obj__435 = come_decrement_ref_count(__result_obj__435, ((struct sNode*)__result_obj__435)->finalize, ((struct sNode*)__result_obj__435)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__435;
            ((value_828) ? value_828 = come_decrement_ref_count(value_828, ((struct sNode*)value_828)->finalize, ((struct sNode*)value_828)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_831=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_831++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_831--;
                if(                nest_831==0) {
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
        head_832=info->p;
        head_sline_833=info->sline;
        sline_real_834=info->sline_real;
        info->sline_real=info->sline;
        buf_835=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__836=is_type_name(buf_835,info);
        static char* is_special_word_array_837[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_838=charppa_contained(is_special_word_array_837,19,buf_835);
        define_function_pointer_flag_839=(_Bool)0;
        if(        !is_special_word_838&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value851=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value851,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_839=(_Bool)1;
                }
            }
            info->p=head_832;
            info->sline=head_sline_833;
        }
        lambda_flag_840=(_Bool)0;
        if(        !is_special_word_838&&is_type_name__836) {
            info->p=head_832;
            info->sline=head_sline_833;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value852=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value852,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_841=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_841,"lambda")) {
                lambda_flag_840=(_Bool)1;
            }
            info->p=head_832;
            info->sline=head_sline_833;
            (word2_841 = come_decrement_ref_count(word2_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_842=(_Bool)0;
        if(        !is_special_word_838) {
            info->p=head_832;
            info->sline=head_sline_833;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_843=(char*)come_increment_ref_count(parse_word(info));
                (word2_843 = come_decrement_ref_count(word2_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_842=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_832;
            info->sline=head_sline_833;
        }
        call_method_generics_fun_call_844=(_Bool)0;
        {
            info->p=head_832;
            info->sline=head_sline_833;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj208=buf_835,
                buf_835=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_835,info)&&((struct sVar*)(__right_value857=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value856=__builtin_string(buf_835))))))==((void*)0)&&((struct sVar*)(__right_value859=map$2char$phsVar$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value858=__builtin_string(buf_835))))))==((void*)0)&&*info->p==60)),            (__right_value856 = come_decrement_ref_count(__right_value856, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value857,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value858 = come_decrement_ref_count(__right_value858, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value859,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional37) {
                nest_845=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_845++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_845==0) {
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
                    call_method_generics_fun_call_844=(_Bool)1;
                }
            }
            info->p=head_832;
            info->sline=head_sline_833;
        }
        inline_asm_846=(_Bool)0;
        {
            info->p=head_832;
            info->sline=head_sline_833;
            __dec_obj209=buf_835,
            buf_835=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_835,"asm")||string_operator_equals(buf_835,"__asm")||string_operator_equals(buf_835,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_846=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj210=buf_835,
                        buf_835=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_846=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_832;
            info->sline=head_sline_833;
        }
        parse_sharp_v5(info);
        __dec_obj211=buf_835,
        buf_835=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_840) {
            info->p=head_832;
            info->sline=head_sline_833;
            node_847=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_834;
            __result_obj__436 = come_increment_ref_count(node_847);
            ((node_847) ? node_847 = come_decrement_ref_count(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__436) ? __result_obj__436 = come_decrement_ref_count(__result_obj__436, ((struct sNode*)__result_obj__436)->finalize, ((struct sNode*)__result_obj__436)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__436;
            ((node_847) ? node_847 = come_decrement_ref_count(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_835,"_Static_assert")||string_operator_equals(buf_835,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_848=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_849=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_848;
            expected_next_character(44,info);
            exp2_850=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__437 = come_increment_ref_count(((struct sNode*)(__right_value866=static_assert_node((struct sNode*)come_increment_ref_count(exp_849),(struct sNode*)come_increment_ref_count(exp2_850),info))));
            ((exp_849) ? exp_849 = come_decrement_ref_count(exp_849, ((struct sNode*)exp_849)->finalize, ((struct sNode*)exp_849)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_850) ? exp2_850 = come_decrement_ref_count(exp2_850, ((struct sNode*)exp2_850)->finalize, ((struct sNode*)exp2_850)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value866) ? __right_value866 = come_decrement_ref_count(__right_value866, ((struct sNode*)__right_value866)->finalize, ((struct sNode*)__right_value866)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__437) ? __result_obj__437 = come_decrement_ref_count(__result_obj__437, ((struct sNode*)__result_obj__437)->finalize, ((struct sNode*)__result_obj__437)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__437;
            ((exp_849) ? exp_849 = come_decrement_ref_count(exp_849, ((struct sNode*)exp_849)->finalize, ((struct sNode*)exp_849)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_850) ? exp2_850 = come_decrement_ref_count(exp2_850, ((struct sNode*)exp2_850)->finalize, ((struct sNode*)exp2_850)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_835,"output")&&*info->p==123) {
            block_text_851=(char*)come_increment_ref_count(skip_block(info));
            contents_852=(char*)come_increment_ref_count(block_text_851);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2243, "struct sNode");
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value869=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2243, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_852),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result_obj__440 = come_increment_ref_count(((struct sNode*)(__right_value873=_inf_value10)));
            (block_text_851 = come_decrement_ref_count(block_text_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_852 = come_decrement_ref_count(contents_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value869,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value873) ? __right_value873 = come_decrement_ref_count(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__440) ? __result_obj__440 = come_decrement_ref_count(__result_obj__440, ((struct sNode*)__result_obj__440)->finalize, ((struct sNode*)__result_obj__440)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__440;
            (block_text_851 = come_decrement_ref_count(block_text_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_852 = come_decrement_ref_count(contents_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_835,"extern")) {
            node_854=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__441 = come_increment_ref_count(node_854);
            ((node_854) ? node_854 = come_decrement_ref_count(node_854, ((struct sNode*)node_854)->finalize, ((struct sNode*)node_854)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__441) ? __result_obj__441 = come_decrement_ref_count(__result_obj__441, ((struct sNode*)__result_obj__441)->finalize, ((struct sNode*)__result_obj__441)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__441;
            ((node_854) ? node_854 = come_decrement_ref_count(node_854, ((struct sNode*)node_854)->finalize, ((struct sNode*)node_854)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_835,"string")||string_operator_equals(buf_835,"wstring"))&&*info->p==40) {
            node_855=(struct sNode*)come_increment_ref_count(parse_function_call(buf_835,info,(_Bool)0));
            info->sline_real=sline_real_834;
            __result_obj__442 = come_increment_ref_count(node_855);
            ((node_855) ? node_855 = come_decrement_ref_count(node_855, ((struct sNode*)node_855)->finalize, ((struct sNode*)node_855)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__442) ? __result_obj__442 = come_decrement_ref_count(__result_obj__442, ((struct sNode*)__result_obj__442)->finalize, ((struct sNode*)__result_obj__442)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__442;
            ((node_855) ? node_855 = come_decrement_ref_count(node_855, ((struct sNode*)node_855)->finalize, ((struct sNode*)node_855)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_835,"come")) {
            come_block_856=((void*)0);
            come_block_sline_857=0;
            if(            *info->p==123) {
                head_858=info->p;
                come_block_sline_857=info->sline;
                ((char*)(__right_value876=skip_block(info)));
                (__right_value876 = come_decrement_ref_count(__right_value876, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_859=info->p;
                __dec_obj214=come_block_856,
                come_block_856=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2268, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_860=tail_859-head_858;
                mem_861=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_860+1)), "05call.c", 2271, "char*"));
                memcpy(mem_861,head_858,len_860);
                mem_861[len_860]=0;
                buffer_append_str(come_block_856,mem_861);
                buffer_append_str(come_block_856,"\n");
                (mem_861 = come_decrement_ref_count(mem_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_862=info->p;
                come_block_sline_857=info->sline;
                no_output_come_code_863=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value880=expression_v13(info)));
                ((__right_value880) ? __right_value880 = come_decrement_ref_count(__right_value880, ((struct sNode*)__right_value880)->finalize, ((struct sNode*)__right_value880)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_863;
                tail_864=info->p;
                __dec_obj215=come_block_856,
                come_block_856=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2289, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj215,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_865=tail_864-head_862;
                mem_866=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_865+1)), "05call.c", 2292, "char*"));
                memcpy(mem_866,head_862,len_865);
                mem_866[len_865]=0;
                buffer_append_str(come_block_856,"{");
                buffer_append_str(come_block_856,mem_866);
                buffer_append_str(come_block_856,"; }");
                buffer_append_str(come_block_856,"}");
                buffer_append_str(come_block_856,"\n");
                (mem_866 = come_decrement_ref_count(mem_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2303, "struct sNode");
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value885=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2303, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_856),come_block_sline_857,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_867=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value885,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_834;
            __result_obj__445 = come_increment_ref_count(node_867);
            /*c*/ come_call_finalizer3(come_block_856,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_867) ? node_867 = come_decrement_ref_count(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__445) ? __result_obj__445 = come_decrement_ref_count(__result_obj__445, ((struct sNode*)__result_obj__445)->finalize, ((struct sNode*)__result_obj__445)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__445;
            /*c*/ come_call_finalizer3(come_block_856,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_867) ? node_867 = come_decrement_ref_count(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_835,"come_join")&&*info->p==40) {
            come_block_869=((void*)0);
            come_block_sline_870=0;
            expected_next_character(40,info);
            node_871=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_834;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2317, "struct sNode");
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value892=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2317, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_871),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result_obj__448 = come_increment_ref_count(((struct sNode*)(__right_value896=_inf_value12)));
            /*c*/ come_call_finalizer3(come_block_869,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_871) ? node_871 = come_decrement_ref_count(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value892,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value896) ? __right_value896 = come_decrement_ref_count(__right_value896, ((struct sNode*)__right_value896)->finalize, ((struct sNode*)__right_value896)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__448) ? __result_obj__448 = come_decrement_ref_count(__result_obj__448, ((struct sNode*)__result_obj__448)->finalize, ((struct sNode*)__result_obj__448)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__448;
            /*c*/ come_call_finalizer3(come_block_869,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_871) ? node_871 = come_decrement_ref_count(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_835,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_873=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_873=time_out_873*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_874=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2335, "struct list$1sNode$ph*"))));
            blocks_875=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2336, "struct list$1sBlock$ph*"))));
            else_block_876=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2337, "struct sBlock*")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj220=else_block_876,
                    else_block_876=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj220,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_877=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_878=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_874,(struct sNode*)come_increment_ref_count(var_name_877));
                    list$1sBlock$ph_add(blocks_875,(struct sBlock*)come_increment_ref_count(block_878));
                    if(                    *info->p==125) {
                        ((var_name_877) ? var_name_877 = come_decrement_ref_count(var_name_877, ((struct sNode*)var_name_877)->finalize, ((struct sNode*)var_name_877)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_878,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_877) ? var_name_877 = come_decrement_ref_count(var_name_877, ((struct sNode*)var_name_877)->finalize, ((struct sNode*)var_name_877)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_878,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_834;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2367, "struct sNode");
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value910=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2367, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_874),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_875),(struct sBlock*)come_increment_ref_count(else_block_876),time_out_873,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result_obj__472 = come_increment_ref_count(((struct sNode*)(__right_value955=_inf_value13)));
            /*c*/ come_call_finalizer3(vars_874,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_875,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_876,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value910,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value955) ? __right_value955 = come_decrement_ref_count(__right_value955, ((struct sNode*)__right_value955)->finalize, ((struct sNode*)__right_value955)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__472) ? __result_obj__472 = come_decrement_ref_count(__result_obj__472, ((struct sNode*)__result_obj__472)->finalize, ((struct sNode*)__result_obj__472)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__472;
            /*c*/ come_call_finalizer3(vars_874,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_875,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_876,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_835,"none")&&*info->p==40) {
            node_914=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_834;
            __result_obj__473 = come_increment_ref_count(node_914);
            ((node_914) ? node_914 = come_decrement_ref_count(node_914, ((struct sNode*)node_914)->finalize, ((struct sNode*)node_914)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__473) ? __result_obj__473 = come_decrement_ref_count(__result_obj__473, ((struct sNode*)__result_obj__473)->finalize, ((struct sNode*)__result_obj__473)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__473;
            ((node_914) ? node_914 = come_decrement_ref_count(node_914, ((struct sNode*)node_914)->finalize, ((struct sNode*)node_914)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_835,"some")&&*info->p==40) {
            node_915=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_834;
            __result_obj__474 = come_increment_ref_count(node_915);
            ((node_915) ? node_915 = come_decrement_ref_count(node_915, ((struct sNode*)node_915)->finalize, ((struct sNode*)node_915)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__474) ? __result_obj__474 = come_decrement_ref_count(__result_obj__474, ((struct sNode*)__result_obj__474)->finalize, ((struct sNode*)__result_obj__474)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__474;
            ((node_915) ? node_915 = come_decrement_ref_count(node_915, ((struct sNode*)node_915)->finalize, ((struct sNode*)node_915)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_835,"__func__")||string_operator_equals(buf_835,"__FUNCTION__")) {
            info->sline_real=sline_real_834;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value959=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2384, "struct sFuncNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result_obj__477 = come_increment_ref_count(((struct sNode*)(__right_value962=_inf_value14)));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value959,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value962) ? __right_value962 = come_decrement_ref_count(__right_value962, ((struct sNode*)__right_value962)->finalize, ((struct sNode*)__right_value962)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__477) ? __result_obj__477 = come_decrement_ref_count(__result_obj__477, ((struct sNode*)__result_obj__477)->finalize, ((struct sNode*)__result_obj__477)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__477;
        }
        else if(        !gComeC&&string_operator_equals(buf_835,"wildcard")) {
            info->sline_real=sline_real_834;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value964=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2388, "struct sWildCard*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result_obj__480 = come_increment_ref_count(((struct sNode*)(__right_value967=_inf_value15)));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value964,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value967) ? __right_value967 = come_decrement_ref_count(__right_value967, ((struct sNode*)__right_value967)->finalize, ((struct sNode*)__right_value967)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__480) ? __result_obj__480 = come_decrement_ref_count(__result_obj__480, ((struct sNode*)__result_obj__480)->finalize, ((struct sNode*)__result_obj__480)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__480;
        }
        else if(        string_operator_equals(buf_835,"__line__")||string_operator_equals(buf_835,"__LINE__")) {
            info->sline_real=sline_real_834;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value969=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2392, "struct sLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result_obj__483 = come_increment_ref_count(((struct sNode*)(__right_value972=_inf_value16)));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value969,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value972) ? __right_value972 = come_decrement_ref_count(__right_value972, ((struct sNode*)__right_value972)->finalize, ((struct sNode*)__right_value972)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__483) ? __result_obj__483 = come_decrement_ref_count(__result_obj__483, ((struct sNode*)__result_obj__483)->finalize, ((struct sNode*)__result_obj__483)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__483;
        }
        else if(        string_operator_equals(buf_835,"__sname__")) {
            info->sline_real=sline_real_834;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode");
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value974=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2396, "struct sSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result_obj__486 = come_increment_ref_count(((struct sNode*)(__right_value977=_inf_value17)));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value974,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value977) ? __right_value977 = come_decrement_ref_count(__right_value977, ((struct sNode*)__right_value977)->finalize, ((struct sNode*)__right_value977)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__486) ? __result_obj__486 = come_decrement_ref_count(__result_obj__486, ((struct sNode*)__result_obj__486)->finalize, ((struct sNode*)__result_obj__486)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__486;
        }
        else if(        string_operator_equals(buf_835,"__caller_func__")) {
            info->sline_real=sline_real_834;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode");
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value979=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2400, "struct sCallerFuncNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result_obj__489 = come_increment_ref_count(((struct sNode*)(__right_value982=_inf_value18)));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value979,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value982) ? __right_value982 = come_decrement_ref_count(__right_value982, ((struct sNode*)__right_value982)->finalize, ((struct sNode*)__right_value982)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__489) ? __result_obj__489 = come_decrement_ref_count(__result_obj__489, ((struct sNode*)__result_obj__489)->finalize, ((struct sNode*)__result_obj__489)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__489;
        }
        else if(        string_operator_equals(buf_835,"__caller_line__")) {
            info->sline_real=sline_real_834;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2404, "struct sNode");
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value984=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2404, "struct sCallerLineNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result_obj__492 = come_increment_ref_count(((struct sNode*)(__right_value987=_inf_value19)));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value984,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value987) ? __right_value987 = come_decrement_ref_count(__right_value987, ((struct sNode*)__right_value987)->finalize, ((struct sNode*)__right_value987)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__492) ? __result_obj__492 = come_decrement_ref_count(__result_obj__492, ((struct sNode*)__result_obj__492)->finalize, ((struct sNode*)__result_obj__492)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__492;
        }
        else if(        string_operator_equals(buf_835,"__caller_sname__")) {
            info->sline_real=sline_real_834;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2408, "struct sNode");
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value989=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2408, "struct sCallerSNameNode*")),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result_obj__495 = come_increment_ref_count(((struct sNode*)(__right_value992=_inf_value20)));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value989,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value992) ? __right_value992 = come_decrement_ref_count(__right_value992, ((struct sNode*)__right_value992)->finalize, ((struct sNode*)__right_value992)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__495) ? __result_obj__495 = come_decrement_ref_count(__result_obj__495, ((struct sNode*)__result_obj__495)->finalize, ((struct sNode*)__result_obj__495)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__495;
        }
        else if(        info->va_arg&&is_type_name(buf_835,info)) {
            info->p=head_832;
            info->sline=head_sline_833;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value993=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_923=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_924=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_925=multiple_assign_var33->v3;
            /*c*/ come_call_finalizer3(__right_value993,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_834;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2417, "struct sNode");
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value995=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2417, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_923),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result_obj__498 = come_increment_ref_count(((struct sNode*)(__right_value999=_inf_value21)));
            /*c*/ come_call_finalizer3(type_923,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_924 = come_decrement_ref_count(name_924, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value995,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value999) ? __right_value999 = come_decrement_ref_count(__right_value999, ((struct sNode*)__right_value999)->finalize, ((struct sNode*)__right_value999)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__498) ? __result_obj__498 = come_decrement_ref_count(__result_obj__498, ((struct sNode*)__result_obj__498)->finalize, ((struct sNode*)__result_obj__498)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__498;
            /*c*/ come_call_finalizer3(type_923,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_924 = come_decrement_ref_count(name_924, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_835,"sizeof")||string_operator_equals(buf_835,"_Alignof")||string_operator_equals(buf_835,"_Alignas")||string_operator_equals(buf_835,"__alignof__")) {
            node_927=(struct sNode*)come_increment_ref_count(string_node_v21(buf_835,head_832,head_sline_833,info));
            info->sline_real=sline_real_834;
            __result_obj__499 = come_increment_ref_count(node_927);
            ((node_927) ? node_927 = come_decrement_ref_count(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__499) ? __result_obj__499 = come_decrement_ref_count(__result_obj__499, ((struct sNode*)__result_obj__499)->finalize, ((struct sNode*)__result_obj__499)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__499;
            ((node_927) ? node_927 = come_decrement_ref_count(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_846) {
            buf2_928=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2426, "struct buffer*"))));
            if(            *info->p!=40) {
                word_929=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_928,word_929);
                (word_929 = come_decrement_ref_count(word_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_928,40);
            exps_930=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2437, "struct list$1sNode$ph*"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_928,40);
                    info->p++;
                    exp_931=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_930,(struct sNode*)come_increment_ref_count(exp_931));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_928,41);
                    ((exp_931) ? exp_931 = come_decrement_ref_count(exp_931, ((struct sNode*)exp_931)->finalize, ((struct sNode*)exp_931)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_928,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_928,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1007=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_932=multiple_assign_var34->v1;
                    Err_933=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_933)?(puts(Err_933),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value1007,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_933 = come_decrement_ref_count(Err_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_928,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_834;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2474, "struct sNode");
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value1010=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2474, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_928)),(struct list$1sNode$ph*)come_increment_ref_count(exps_930),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result_obj__502 = come_increment_ref_count(((struct sNode*)(__right_value1015=_inf_value22)));
            /*c*/ come_call_finalizer3(buf2_928,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_930,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value1010,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value1015) ? __right_value1015 = come_decrement_ref_count(__right_value1015, ((struct sNode*)__right_value1015)->finalize, ((struct sNode*)__right_value1015)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__502) ? __result_obj__502 = come_decrement_ref_count(__result_obj__502, ((struct sNode*)__result_obj__502)->finalize, ((struct sNode*)__result_obj__502)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__502;
            /*c*/ come_call_finalizer3(buf2_928,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_930,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_842) {
            fun_name_935=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2477, "struct buffer*"))));
            buffer_append_str(fun_name_935,buf_835);
            type_936=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value1019=map$2char$phsType$ph$p_operator_load_element(info->types,((char*)(__right_value1018=buffer_to_string(fun_name_935))))))));
            (__right_value1018 = come_decrement_ref_count(__right_value1018, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value1019,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_936==((void*)0)) {
                klass_940=((struct sClass*)(__right_value1022=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value1021=buffer_to_string(fun_name_935))))));
                (__right_value1021 = come_decrement_ref_count(__right_value1021, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value1022,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_940) {
                    __dec_obj249=type_936,
                    type_936=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2487, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_835)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj249,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1026=err_msg(info,"null type(%s)",buf_835)));
                    come_exception_var_c5_941=multiple_assign_var35->v1;
                    Err_942=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_942)?(puts(Err_942),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value1026,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_942 = come_decrement_ref_count(Err_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_936->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_935,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_935,"_");
            buf2_943=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_935,buf2_943);
            node_944=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1028=buffer_to_string(fun_name_935))),info,(_Bool)0));
            (__right_value1028 = come_decrement_ref_count(__right_value1028, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_834;
            __result_obj__507 = come_increment_ref_count(node_944);
            /*c*/ come_call_finalizer3(fun_name_935,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_936,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_943 = come_decrement_ref_count(buf2_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_944) ? node_944 = come_decrement_ref_count(node_944, ((struct sNode*)node_944)->finalize, ((struct sNode*)node_944)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__507) ? __result_obj__507 = come_decrement_ref_count(__result_obj__507, ((struct sNode*)__result_obj__507)->finalize, ((struct sNode*)__result_obj__507)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__507;
            /*c*/ come_call_finalizer3(fun_name_935,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_936,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_943 = come_decrement_ref_count(buf2_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_944) ? node_944 = come_decrement_ref_count(node_944, ((struct sNode*)node_944)->finalize, ((struct sNode*)node_944)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_945=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2522, "struct buffer*"))));
            buffer_append_str(fun_name_945,buf_835);
            buffer_append_str(fun_name_945,"_");
            buf2_946=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_945,buf2_946);
            node_947=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1033=buffer_to_string(fun_name_945))),info,(_Bool)0));
            (__right_value1033 = come_decrement_ref_count(__right_value1033, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_834;
            __result_obj__508 = come_increment_ref_count(node_947);
            /*c*/ come_call_finalizer3(fun_name_945,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_946 = come_decrement_ref_count(buf2_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_947) ? node_947 = come_decrement_ref_count(node_947, ((struct sNode*)node_947)->finalize, ((struct sNode*)node_947)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__508) ? __result_obj__508 = come_decrement_ref_count(__result_obj__508, ((struct sNode*)__result_obj__508)->finalize, ((struct sNode*)__result_obj__508)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__508;
            /*c*/ come_call_finalizer3(fun_name_945,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_946 = come_decrement_ref_count(buf2_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_947) ? node_947 = come_decrement_ref_count(node_947, ((struct sNode*)node_947)->finalize, ((struct sNode*)node_947)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_844) {
            node_948=(struct sNode*)come_increment_ref_count(parse_function_call(buf_835,info,(_Bool)0));
            info->sline_real=sline_real_834;
            __result_obj__509 = come_increment_ref_count(node_948);
            ((node_948) ? node_948 = come_decrement_ref_count(node_948, ((struct sNode*)node_948)->finalize, ((struct sNode*)node_948)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__509) ? __result_obj__509 = come_decrement_ref_count(__result_obj__509, ((struct sNode*)__result_obj__509)->finalize, ((struct sNode*)__result_obj__509)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__509;
            ((node_948) ? node_948 = come_decrement_ref_count(node_948, ((struct sNode*)node_948)->finalize, ((struct sNode*)node_948)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_838&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__836)) {
            node_949=(struct sNode*)come_increment_ref_count(parse_function_call(buf_835,info,(_Bool)0));
            info->sline_real=sline_real_834;
            __result_obj__510 = come_increment_ref_count(node_949);
            ((node_949) ? node_949 = come_decrement_ref_count(node_949, ((struct sNode*)node_949)->finalize, ((struct sNode*)node_949)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__510) ? __result_obj__510 = come_decrement_ref_count(__result_obj__510, ((struct sNode*)__result_obj__510)->finalize, ((struct sNode*)__result_obj__510)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__510;
            ((node_949) ? node_949 = come_decrement_ref_count(node_949, ((struct sNode*)node_949)->finalize, ((struct sNode*)node_949)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_950=(struct sNode*)come_increment_ref_count(string_node_v21(buf_835,head_832,head_sline_833,info));
            info->sline_real=sline_real_834;
            __result_obj__511 = come_increment_ref_count(node_950);
            ((node_950) ? node_950 = come_decrement_ref_count(node_950, ((struct sNode*)node_950)->finalize, ((struct sNode*)node_950)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__511) ? __result_obj__511 = come_decrement_ref_count(__result_obj__511, ((struct sNode*)__result_obj__511)->finalize, ((struct sNode*)__result_obj__511)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__511;
            ((node_950) ? node_950 = come_decrement_ref_count(node_950, ((struct sNode*)node_950)->finalize, ((struct sNode*)node_950)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_835 = come_decrement_ref_count(buf_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_951=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__512 = come_increment_ref_count(node_951);
        ((node_951) ? node_951 = come_decrement_ref_count(node_951, ((struct sNode*)node_951)->finalize, ((struct sNode*)node_951)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__512) ? __result_obj__512 = come_decrement_ref_count(__result_obj__512, ((struct sNode*)__result_obj__512)->finalize, ((struct sNode*)__result_obj__512)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__512;
        ((node_951) ? node_951 = come_decrement_ref_count(node_951, ((struct sNode*)node_951)->finalize, ((struct sNode*)node_951)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1039=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_exception_var_c6_952=multiple_assign_var36->v1;
    Err_953=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_953)?(puts(Err_953),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value1039,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__513 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_953 = come_decrement_ref_count(Err_953, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__513) ? __result_obj__513 = come_decrement_ref_count(__result_obj__513, ((struct sNode*)__result_obj__513)->finalize, ((struct sNode*)__result_obj__513)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__513;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__438;
void* __right_value870 = (void*)0;
struct sOutputNode* result_853;
void* __right_value871 = (void*)0;
char* __dec_obj212;
void* __right_value872 = (void*)0;
char* __dec_obj213;
struct sOutputNode* __result_obj__439;
    if(    self==(void*)0) {
        __result_obj__438 = (void*)0;
        return __result_obj__438;
    }
    result_853=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_853->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_853->sname,
        result_853->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_853->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj213=result_853->contents,
        result_853->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__439 = result_853;
    /*c*/ come_call_finalizer3(result_853,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__439;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__443;
void* __right_value886 = (void*)0;
struct sComeCallNode* result_868;
void* __right_value887 = (void*)0;
char* __dec_obj216;
void* __right_value888 = (void*)0;
struct buffer* __dec_obj217;
struct sComeCallNode* __result_obj__444;
    if(    self==(void*)0) {
        __result_obj__443 = (void*)0;
        return __result_obj__443;
    }
    result_868=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_868->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj216=result_868->sname,
        result_868->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_868->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj217=result_868->come_block,
        result_868->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj217,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_868->come_block_sline=self->come_block_sline;
    }
    __result_obj__444 = result_868;
    /*c*/ come_call_finalizer3(result_868,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__444;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__446;
void* __right_value893 = (void*)0;
struct sComeJoinNode* result_872;
void* __right_value894 = (void*)0;
char* __dec_obj218;
void* __right_value895 = (void*)0;
struct sNode* __dec_obj219;
struct sComeJoinNode* __result_obj__447;
    if(    self==(void*)0) {
        __result_obj__446 = (void*)0;
        return __result_obj__446;
    }
    result_872=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_872->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj218=result_872->sname,
        result_872->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_872->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj219=result_872->node,
        result_872->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__447 = result_872;
    /*c*/ come_call_finalizer3(result_872,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__447;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__449;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__449 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__449,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__449;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value906 = (void*)0;
struct list_item$1sBlock$ph* litem_879;
struct sBlock* __dec_obj221;
void* __right_value907 = (void*)0;
struct list_item$1sBlock$ph* litem_880;
struct sBlock* __dec_obj222;
void* __right_value908 = (void*)0;
struct list_item$1sBlock$ph* litem_881;
struct sBlock* __dec_obj223;
struct list$1sBlock$ph* __result_obj__450;
    if(    self->len==0) {
        litem_879=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value906=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1204, "struct list_item$1sBlock$ph*"))));
        litem_879->prev=((void*)0);
        litem_879->next=((void*)0);
        __dec_obj221=litem_879->item,
        litem_879->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj221,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_879;
        self->head=litem_879;
    }
    else if(    self->len==1) {
        litem_880=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value907=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1214, "struct list_item$1sBlock$ph*"))));
        litem_880->prev=self->head;
        litem_880->next=((void*)0);
        __dec_obj222=litem_880->item,
        litem_880->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj222,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_880;
        self->head->next=litem_880;
    }
    else {
        litem_881=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value908=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1224, "struct list_item$1sBlock$ph*"))));
        litem_881->prev=self->tail;
        litem_881->next=((void*)0);
        __dec_obj223=litem_881->item,
        litem_881->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj223,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_881;
        self->tail=litem_881;
    }
    self->len++;
    __result_obj__450 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__450;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__451;
void* __right_value911 = (void*)0;
struct sComePollNode* result_882;
void* __right_value912 = (void*)0;
char* __dec_obj224;
void* __right_value913 = (void*)0;
struct list$1sNode$ph* __dec_obj225;
void* __right_value953 = (void*)0;
struct list$1sBlock$ph* __dec_obj235;
void* __right_value954 = (void*)0;
struct sBlock* __dec_obj236;
struct sComePollNode* __result_obj__471;
    if(    self==(void*)0) {
        __result_obj__451 = (void*)0;
        return __result_obj__451;
    }
    result_882=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_882->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj224=result_882->sname,
        result_882->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_882->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj225=result_882->vars,
        result_882->vars=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->vars));
        /*b*/ come_call_finalizer3(__dec_obj225,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj235=result_882->blocks,
        result_882->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj235,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj236=result_882->else_block,
        result_882->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj236,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_882->time_out=self->time_out;
    }
    __result_obj__471 = result_882;
    /*c*/ come_call_finalizer3(result_882,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__471;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__452;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct list$1sBlock$ph* result_883;
struct list_item$1sBlock$ph* it_884;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct list$1sBlock$ph* __result_obj__470;
    if(    self==((void*)0)) {
        __result_obj__452 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__452,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__452;
    }
    result_883=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1185, "struct list$1sBlock$ph*"))));
    it_884=self->head;
    while(it_884!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_883,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_884->item)));
        }
        else {
            list$1sBlock$ph_add(result_883,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_884->item)));
        }
        it_884=it_884->next;
    }
    __result_obj__470 = come_increment_ref_count(result_883);
    /*c*/ come_call_finalizer3(result_883,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__470,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__470;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__453;
void* __right_value916 = (void*)0;
struct sBlock* result_885;
void* __right_value921 = (void*)0;
struct list$1sNode$ph* __dec_obj226;
void* __right_value950 = (void*)0;
struct sVarTable* __dec_obj234;
struct sBlock* __result_obj__469;
    if(    self==(void*)0) {
        __result_obj__453 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__453,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__453;
    }
    result_885=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj226=result_885->mNodes,
        result_885->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj226,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj234=result_885->mVarTable,
        result_885->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj234,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_885->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__469 = come_increment_ref_count(result_885);
    /*c*/ come_call_finalizer3(result_885,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__469,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__469;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__454;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sNode$ph* result_886;
struct list_item$1sNode$ph* it_887;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct list$1sNode$ph* __result_obj__455;
    if(    self==((void*)0)) {
        __result_obj__454 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__454,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__454;
    }
    result_886=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_887=self->head;
    while(it_887!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_886,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_887->item)));
        }
        else {
            list$1sNode$ph_add(result_886,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_887->item)));
        }
        it_887=it_887->next;
    }
    __result_obj__455 = come_increment_ref_count(result_886);
    /*c*/ come_call_finalizer3(result_886,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__455,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__455;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__456;
void* __right_value922 = (void*)0;
struct sVarTable* result_888;
void* __right_value949 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj233;
struct sVarTable* __result_obj__468;
    if(    self==(void*)0) {
        __result_obj__456 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__456,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__456;
    }
    result_888=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj233=result_888->mVars,
        result_888->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph_clone, self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj233,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_888->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_888->mParent=self->mParent;
    }
    __result_obj__468 = come_increment_ref_count(result_888);
    /*c*/ come_call_finalizer3(result_888,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__468,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__468;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__457;
void* __right_value923 = (void*)0;
void* __right_value929 = (void*)0;
struct map$2char$phsVar$ph* result_890;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct list$1char$ph* __dec_obj228;
char* it_891;
struct sVar* default_value_892;
void* __right_value932 = (void*)0;
struct sVar* it2_895;
void* __right_value938 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__467;
default_value_892 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__457 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__457,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__457;
    }
    result_890=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2160, "struct map$2char$phsVar$ph*"))));
    __dec_obj228=result_890->key_list,
    result_890->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2162, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj228,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_891=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_891=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_892,0,sizeof(struct sVar*));
        it2_895=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_891,(struct sVar*)come_increment_ref_count(default_value_892)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_890,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_891)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_895)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_890,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_891)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_895)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_890,(char*)come_increment_ref_count(it_891),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_895)));
        }
        else {
            map$2char$phsVar$ph_put(result_890,(char*)come_increment_ref_count(it_891),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_895)));
        }
        /*c*/ come_call_finalizer3(default_value_892,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_895,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__467 = come_increment_ref_count(result_890);
    /*c*/ come_call_finalizer3(result_890,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__467,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__467;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
int i_889;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct list$1char$ph* __dec_obj227;
struct map$2char$phsVar$ph* __result_obj__459;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value924=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2089, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value925=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2090, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value926=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2091, "_Bool*"))));
    for(    i_889=0;    i_889<128;    i_889++    ){
        self->item_existance[i_889]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj227=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2101, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj227,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__459 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__459,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__459;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__458;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__458 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__458,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__458;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_893;
unsigned int it_894;
struct sVar* __result_obj__460;
struct sVar* __result_obj__461;
struct sVar* __result_obj__462;
struct sVar* __result_obj__463;
    hash_893=string_get_hash_key(((char*)key))%self->size;
    it_894=hash_893;
    while((_Bool)1) {
        if(        self->item_existance[it_894]) {
            if(            string_equals(self->keys[it_894],key)) {
                __result_obj__460 = come_increment_ref_count(self->items[it_894]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__460,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__460;
            }
            it_894++;
            if(            it_894>=self->size) {
                it_894=0;
            }
            else if(            it_894==hash_893) {
                __result_obj__461 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__461,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__461;
            }
        }
        else {
            __result_obj__462 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__462,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__462;
        }
    }
    __result_obj__463 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__463,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__463;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_907;
int it_908;
_Bool same_key_exist_909;
char* it2_910;
struct map$2char$phsVar$ph* __result_obj__464;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_907=string_get_hash_key(((char*)key))%self->size;
    it_908=hash_907;
    while((_Bool)1) {
        if(        self->item_existance[it_908]) {
            if(            string_equals(self->keys[it_908],key)) {
                if(                1) {
                    (self->keys[it_908] = come_decrement_ref_count(self->keys[it_908], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_908]);
                    self->keys[it_908]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_908]);
                    self->keys[it_908]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_908],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_908]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_908]=item;
                }
                break;
            }
            it_908++;
            if(            it_908>=self->size) {
                it_908=0;
            }
            else if(            it_908==hash_907) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_908]=(_Bool)1;
            if(            1) {
                self->keys[it_908]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_908]=key;
            }
            if(            1) {
                self->items[it_908]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_908]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_909=(_Bool)0;
    for(    it2_910=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_910=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_910,key)) {
            same_key_exist_909=(_Bool)1;
        }
    }
    if(    !same_key_exist_909) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__464 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__464;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_896;
void* __right_value933 = (void*)0;
char** keys_897;
void* __right_value934 = (void*)0;
struct sVar** items_898;
void* __right_value935 = (void*)0;
_Bool* item_existance_899;
int len_900;
char* it_901;
struct sVar* default_value_902;
void* __right_value936 = (void*)0;
struct sVar* it2_903;
unsigned int hash_904;
int n_905;
struct sVar* default_value_906;
void* __right_value937 = (void*)0;
default_value_902 = (void*)0;
default_value_906 = (void*)0;
    size_896=self->size*10;
    keys_897=(char**)come_increment_ref_count(((char**)(__right_value933=(char**)come_calloc(1, sizeof(char*)*(1*(size_896)), "./comelang.h", 2328, "char**"))));
    items_898=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value934=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_896)), "./comelang.h", 2329, "struct sVar**"))));
    item_existance_899=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value935=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_896)), "./comelang.h", 2330, "_Bool*"))));
    len_900=0;
    for(    it_901=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_901=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_902,0,sizeof(struct sVar*));
        it2_903=((struct sVar*)(__right_value936=map$2char$phsVar$ph_at(self,it_901,(struct sVar*)come_increment_ref_count(default_value_902))));
        /*c*/ come_call_finalizer3(__right_value936,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_904=string_get_hash_key(((char*)it_901))%size_896;
        n_905=hash_904;
        while((_Bool)1) {
            if(            item_existance_899[n_905]) {
                n_905++;
                if(                n_905>=size_896) {
                    n_905=0;
                }
                else if(                n_905==hash_904) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_899[n_905]=(_Bool)1;
                keys_897[n_905]=it_901;
                items_898[n_905]=((struct sVar*)(__right_value937=map$2char$phsVar$ph_at(self,it_901,(struct sVar*)come_increment_ref_count(default_value_906))));
                /*c*/ come_call_finalizer3(__right_value937,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_900++;
                /*c*/ come_call_finalizer3(default_value_906,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_906,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_902,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_897;
    self->items=items_898;
    self->item_existance=item_existance_899;
    self->size=size_896;
    self->len=len_900;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__465;
void* __right_value939 = (void*)0;
struct sVar* result_911;
void* __right_value940 = (void*)0;
char* __dec_obj229;
void* __right_value941 = (void*)0;
char* __dec_obj230;
void* __right_value942 = (void*)0;
struct sType* __dec_obj231;
void* __right_value943 = (void*)0;
char* __dec_obj232;
struct sVar* __result_obj__466;
    if(    self==(void*)0) {
        __result_obj__465 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__465,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__465;
    }
    result_911=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj229=result_911->mName,
        result_911->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj230=result_911->mCValueName,
        result_911->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj231=result_911->mType,
        result_911->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj231,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_911->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_911->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_911->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj232=result_911->mFunName,
        result_911->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__466 = come_increment_ref_count(result_911);
    /*c*/ come_call_finalizer3(result_911,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__466,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__466;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_912;
int i_913;
    for(    i_912=0;    i_912<self->size;    i_912++    ){
        if(        self->item_existance[i_912]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_912],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_913=0;    i_913<self->size;    i_913++    ){
        if(        self->item_existance[i_913]) {
            if(            1) {
                (self->keys[i_913] = come_decrement_ref_count(self->keys[i_913], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__475;
void* __right_value960 = (void*)0;
struct sFuncNode* result_916;
void* __right_value961 = (void*)0;
char* __dec_obj237;
struct sFuncNode* __result_obj__476;
    if(    self==(void*)0) {
        __result_obj__475 = (void*)0;
        return __result_obj__475;
    }
    result_916=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_916->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_916->sname,
        result_916->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_916->sline_real=self->sline_real;
    }
    __result_obj__476 = result_916;
    /*c*/ come_call_finalizer3(result_916,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__476;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__478;
void* __right_value965 = (void*)0;
struct sWildCard* result_917;
void* __right_value966 = (void*)0;
char* __dec_obj238;
struct sWildCard* __result_obj__479;
    if(    self==(void*)0) {
        __result_obj__478 = (void*)0;
        return __result_obj__478;
    }
    result_917=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_917->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj238=result_917->sname,
        result_917->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_917->sline_real=self->sline_real;
    }
    __result_obj__479 = result_917;
    /*c*/ come_call_finalizer3(result_917,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__479;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__481;
void* __right_value970 = (void*)0;
struct sLineNode* result_918;
void* __right_value971 = (void*)0;
char* __dec_obj239;
struct sLineNode* __result_obj__482;
    if(    self==(void*)0) {
        __result_obj__481 = (void*)0;
        return __result_obj__481;
    }
    result_918=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_918->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_918->sname,
        result_918->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_918->sline_real=self->sline_real;
    }
    __result_obj__482 = result_918;
    /*c*/ come_call_finalizer3(result_918,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__482;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__484;
void* __right_value975 = (void*)0;
struct sSNameNode* result_919;
void* __right_value976 = (void*)0;
char* __dec_obj240;
struct sSNameNode* __result_obj__485;
    if(    self==(void*)0) {
        __result_obj__484 = (void*)0;
        return __result_obj__484;
    }
    result_919=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_919->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_919->sname,
        result_919->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_919->sline_real=self->sline_real;
    }
    __result_obj__485 = result_919;
    /*c*/ come_call_finalizer3(result_919,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__485;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__487;
void* __right_value980 = (void*)0;
struct sCallerFuncNode* result_920;
void* __right_value981 = (void*)0;
char* __dec_obj241;
struct sCallerFuncNode* __result_obj__488;
    if(    self==(void*)0) {
        __result_obj__487 = (void*)0;
        return __result_obj__487;
    }
    result_920=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_920->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj241=result_920->sname,
        result_920->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_920->sline_real=self->sline_real;
    }
    __result_obj__488 = result_920;
    /*c*/ come_call_finalizer3(result_920,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__488;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__490;
void* __right_value985 = (void*)0;
struct sCallerLineNode* result_921;
void* __right_value986 = (void*)0;
char* __dec_obj242;
struct sCallerLineNode* __result_obj__491;
    if(    self==(void*)0) {
        __result_obj__490 = (void*)0;
        return __result_obj__490;
    }
    result_921=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_921->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj242=result_921->sname,
        result_921->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_921->sline_real=self->sline_real;
    }
    __result_obj__491 = result_921;
    /*c*/ come_call_finalizer3(result_921,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__491;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__493;
void* __right_value990 = (void*)0;
struct sCallerSNameNode* result_922;
void* __right_value991 = (void*)0;
char* __dec_obj243;
struct sCallerSNameNode* __result_obj__494;
    if(    self==(void*)0) {
        __result_obj__493 = (void*)0;
        return __result_obj__493;
    }
    result_922=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_922->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj243=result_922->sname,
        result_922->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_922->sline_real=self->sline_real;
    }
    __result_obj__494 = result_922;
    /*c*/ come_call_finalizer3(result_922,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__494;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__496;
void* __right_value996 = (void*)0;
struct sVarArgTypeName* result_926;
void* __right_value997 = (void*)0;
char* __dec_obj244;
void* __right_value998 = (void*)0;
struct sType* __dec_obj245;
struct sVarArgTypeName* __result_obj__497;
    if(    self==(void*)0) {
        __result_obj__496 = (void*)0;
        return __result_obj__496;
    }
    result_926=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_926->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj244=result_926->sname,
        result_926->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_926->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj245=result_926->type,
        result_926->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj245,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__497 = result_926;
    /*c*/ come_call_finalizer3(result_926,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__497;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__500;
void* __right_value1011 = (void*)0;
struct sInlineAssembler* result_934;
void* __right_value1012 = (void*)0;
char* __dec_obj246;
void* __right_value1013 = (void*)0;
char* __dec_obj247;
void* __right_value1014 = (void*)0;
struct list$1sNode$ph* __dec_obj248;
struct sInlineAssembler* __result_obj__501;
    if(    self==(void*)0) {
        __result_obj__500 = (void*)0;
        return __result_obj__500;
    }
    result_934=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_934->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj246=result_934->sname,
        result_934->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_934->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj247=result_934->source,
        result_934->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj248=result_934->exps,
        result_934->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        /*b*/ come_call_finalizer3(__dec_obj248,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__501 = result_934;
    /*c*/ come_call_finalizer3(result_934,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__501;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_937;
unsigned int hash_938;
unsigned int it_939;
struct sType* __result_obj__503;
struct sType* __result_obj__504;
struct sType* __result_obj__505;
struct sType* __result_obj__506;
default_value_937 = (void*)0;
    memset(&default_value_937,0,sizeof(struct sType*));
    hash_938=string_get_hash_key(((char*)key))%self->size;
    it_939=hash_938;
    while((_Bool)1) {
        if(        self->item_existance[it_939]) {
            if(            string_equals(self->keys[it_939],key)) {
                __result_obj__503 = come_increment_ref_count(self->items[it_939]);
                /*c*/ come_call_finalizer3(default_value_937,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__503,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__503;
            }
            it_939++;
            if(            it_939>=self->size) {
                it_939=0;
            }
            else if(            it_939==hash_938) {
                __result_obj__504 = come_increment_ref_count(default_value_937);
                /*c*/ come_call_finalizer3(default_value_937,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__504,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__504;
            }
        }
        else {
            __result_obj__505 = come_increment_ref_count(default_value_937);
            /*c*/ come_call_finalizer3(default_value_937,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__505,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__505;
        }
    }
    __result_obj__506 = come_increment_ref_count(default_value_937);
    /*c*/ come_call_finalizer3(default_value_937,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__506,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__506;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value1040 = (void*)0;
struct sNode* __result_obj__514;
    __result_obj__514 = come_increment_ref_count(((struct sNode*)(__right_value1040=expression_node_v99(info))));
    ((__right_value1040) ? __right_value1040 = come_decrement_ref_count(__right_value1040, ((struct sNode*)__right_value1040)->finalize, ((struct sNode*)__right_value1040)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__514) ? __result_obj__514 = come_decrement_ref_count(__result_obj__514, ((struct sNode*)__result_obj__514)->finalize, ((struct sNode*)__result_obj__514)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__514;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sNode* __dec_obj250;
struct sNode* __result_obj__515;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct sNode* __dec_obj251;
struct sNode* __result_obj__516;
struct sNode* __result_obj__517;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj250=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        (__dec_obj250 ? __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__515 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__515) ? __result_obj__515 = come_decrement_ref_count(__result_obj__515, ((struct sNode*)__result_obj__515)->finalize, ((struct sNode*)__result_obj__515)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__515;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj251=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        (__dec_obj251 ? __dec_obj251 = come_decrement_ref_count(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__516 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__516) ? __result_obj__516 = come_decrement_ref_count(__result_obj__516, ((struct sNode*)__result_obj__516)->finalize, ((struct sNode*)__result_obj__516)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__516;
    }
    __result_obj__517 = come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__517) ? __result_obj__517 = come_decrement_ref_count(__result_obj__517, ((struct sNode*)__result_obj__517)->finalize, ((struct sNode*)__result_obj__517)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__517;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1045 = (void*)0;
struct sNode* node_954;
void* __right_value1046 = (void*)0;
struct sNode* __dec_obj252;
struct sNode* __result_obj__518;
    node_954=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj252=node_954,
    node_954=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_954),info));
    (__dec_obj252 ? __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__518 = come_increment_ref_count(node_954);
    ((node_954) ? node_954 = come_decrement_ref_count(node_954, ((struct sNode*)node_954)->finalize, ((struct sNode*)node_954)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__518) ? __result_obj__518 = come_decrement_ref_count(__result_obj__518, ((struct sNode*)__result_obj__518)->finalize, ((struct sNode*)__result_obj__518)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__518;
}

char* get_none_generics_name(char* class_name){
char* p_955;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
char* __result_obj__519;
void* __right_value1049 = (void*)0;
char* __result_obj__520;
    p_955=class_name;
    while(*p_955) {
        if(        *p_955==36) {
            __result_obj__519 = come_increment_ref_count(((char*)(__right_value1048=charp_substring(((char*)(__right_value1047=__builtin_string(class_name))),0,p_955-class_name))));
            (__right_value1047 = come_decrement_ref_count(__right_value1047, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1048 = come_decrement_ref_count(__right_value1048, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__519 = come_decrement_ref_count(__result_obj__519, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__519;
        }
        else {
            p_955++;
        }
    }
    __result_obj__520 = come_increment_ref_count(((char*)(__right_value1049=__builtin_string(class_name))));
    (__right_value1049 = come_decrement_ref_count(__right_value1049, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__520 = come_decrement_ref_count(__result_obj__520, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__520;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct buffer* buf_956;
struct sClass* klass_957;
char* class_name_958;
int i_959;
void* __right_value1052 = (void*)0;
struct sType* type_960;
void* __right_value1053 = (void*)0;
char* type_name_961;
int i_962;
void* __right_value1054 = (void*)0;
char* __result_obj__521;
    buf_956=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2622, "struct buffer*"))));
    klass_957=generics_type->mClass;
    class_name_958=klass_957->mName;
    buffer_append_str(buf_956,class_name_958);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_956,36);
        buffer_append_char(buf_956,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_959=0;        i_959<list$1sType$ph_length(generics_type->mGenericsTypes);        i_959++        ){
            type_960=((struct sType*)(__right_value1052=list$1sType$ph$p_operator_load_element(generics_type->mGenericsTypes,i_959)));
            /*c*/ come_call_finalizer3(__right_value1052,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_961=(char*)come_increment_ref_count(create_generics_name(type_960,info));
            buffer_append_str(buf_956,type_name_961);
            buffer_append_char(buf_956,36);
            for(            i_962=0;            i_962<type_960->mPointerNum;            i_962++            ){
                buffer_append_char(buf_956,112);
            }
            if(            type_960->mHeap) {
                buffer_append_str(buf_956,"h");
            }
            (type_name_961 = come_decrement_ref_count(type_name_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__521 = come_increment_ref_count(((char*)(__right_value1054=buffer_to_string(buf_956))));
    /*c*/ come_call_finalizer3(buf_956,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1054 = come_decrement_ref_count(__right_value1054, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__521 = come_decrement_ref_count(__result_obj__521, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__521;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_963;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct buffer* buf_964;
void* __right_value1057 = (void*)0;
char* __dec_obj253;
int i_965;
void* __right_value1058 = (void*)0;
char* __dec_obj254;
void* __right_value1059 = (void*)0;
char* __dec_obj255;
int i_966;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
char* __result_obj__522;
struct_name_963 = (void*)0;
    buf_964=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2657, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj253=struct_name_963,
        struct_name_963=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_964,"$");
            }
            for(            i_965=0;            i_965<obj_type->mOriginalTypeNamePointerNum;            i_965++            ){
                buffer_append_str(buf_964,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj254=struct_name_963,
        struct_name_963=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj255=struct_name_963,
        struct_name_963=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_964,"$");
        }
        for(        i_966=0;        i_966<obj_type->mPointerNum;        i_966++        ){
            buffer_append_str(buf_964,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_964,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_964,"pa");
    }
    __result_obj__522 = come_increment_ref_count(((char*)(__right_value1061=xsprintf("%s%s_%s",struct_name_963,((char*)(__right_value1060=buffer_to_string(buf_964))),fun_name))));
    (struct_name_963 = come_decrement_ref_count(struct_name_963, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_964,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1060 = come_decrement_ref_count(__right_value1060, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1061 = come_decrement_ref_count(__right_value1061, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__522 = come_decrement_ref_count(__result_obj__522, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__522;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_967;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct buffer* buf_968;
void* __right_value1064 = (void*)0;
char* __dec_obj256;
void* __right_value1065 = (void*)0;
char* __dec_obj257;
int i_969;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
char* __result_obj__523;
struct_name_967 = (void*)0;
    buf_968=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2698, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj256=struct_name_967,
        struct_name_967=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj257=struct_name_967,
        struct_name_967=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_968,"$");
        }
        for(        i_969=0;        i_969<obj_type->mPointerNum;        i_969++        ){
            buffer_append_str(buf_968,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_968,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_968,"pa");
    }
    __result_obj__523 = come_increment_ref_count(((char*)(__right_value1067=xsprintf("%s%s_%s",struct_name_967,((char*)(__right_value1066=buffer_to_string(buf_968))),fun_name))));
    (struct_name_967 = come_decrement_ref_count(struct_name_967, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_968,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1066 = come_decrement_ref_count(__right_value1066, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1067 = come_decrement_ref_count(__right_value1067, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__523 = come_decrement_ref_count(__result_obj__523, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__523;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_970;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
struct buffer* buf_971;
void* __right_value1070 = (void*)0;
char* __dec_obj258;
int i_972;
void* __right_value1071 = (void*)0;
char* __dec_obj259;
void* __right_value1072 = (void*)0;
char* __dec_obj260;
int i_973;
void* __right_value1073 = (void*)0;
int len_975;
void* __right_value1074 = (void*)0;
char* __result_obj__524;
struct_name_970 = (void*)0;
    buf_971=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2727, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj258=struct_name_970,
        struct_name_970=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_971,"$");
            }
            for(            i_972=0;            i_972<obj_type->mOriginalTypeNamePointerNum;            i_972++            ){
                buffer_append_str(buf_971,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj259=struct_name_970,
        struct_name_970=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj260=struct_name_970,
        struct_name_970=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_971,"$");
        }
        for(        i_973=0;        i_973<obj_type->mPointerNum;        i_973++        ){
            buffer_append_str(buf_971,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_971,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_971,"pa");
    }
    char none_method_name_974[charp_length(fun_name)+1];
    memset(&none_method_name_974, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_975=string_length(struct_name_970)+string_length(((char*)(__right_value1073=buffer_to_string(buf_971))));
    (__right_value1073 = come_decrement_ref_count(__right_value1073, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_974,fun_name+len_975+1,charp_length(fun_name)-len_975-1);
    none_method_name_974[charp_length(fun_name)-len_975-1]=0;
    __result_obj__524 = come_increment_ref_count(((char*)(__right_value1074=__builtin_string(none_method_name_974))));
    (struct_name_970 = come_decrement_ref_count(struct_name_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_971,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1074 = come_decrement_ref_count(__right_value1074, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__524 = come_decrement_ref_count(__result_obj__524, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__524;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1075 = (void*)0;
char* struct_name_976;
void* __right_value1076 = (void*)0;
char* __result_obj__525;
    struct_name_976=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__525 = come_increment_ref_count(((char*)(__right_value1076=xsprintf("%s_%s",struct_name_976,fun_name))));
    (struct_name_976 = come_decrement_ref_count(struct_name_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1076 = come_decrement_ref_count(__right_value1076, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__525 = come_decrement_ref_count(__result_obj__525, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__525;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1077 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_977=0;
char* Err_978=0;
struct sNode* __result_obj__526;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1077=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_exception_var_c7_977=multiple_assign_var37->v1;
    Err_978=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_978)?(puts(Err_978),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value1077,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__526 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_978 = come_decrement_ref_count(Err_978, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__526) ? __result_obj__526 = come_decrement_ref_count(__result_obj__526, ((struct sNode*)__result_obj__526)->finalize, ((struct sNode*)__result_obj__526)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__526;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_979;
char* p_980;
int sline_981;
_Bool err_flag_982;
void* __right_value1080 = (void*)0;
char* label_983;
void* __right_value1081 = (void*)0;
char* __dec_obj261;
char* __dec_obj262;
_Bool no_comma_984;
_Bool in_fun_param_985;
void* __right_value1082 = (void*)0;
struct sNode* node_986;
void* __right_value1083 = (void*)0;
struct sNode* __dec_obj263;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1092 = (void*)0;
struct sNode* __result_obj__529;
struct sNode* __result_obj__530;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_979=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2796, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_980=info->p;
            sline_981=info->sline;
            err_flag_982=(_Bool)0;
            label_983=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj261=label_983,
                label_983=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_982=(_Bool)1;
            }
            if(            err_flag_982==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj262=label_983,
                label_983=((void*)0);
                __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_980;
                info->sline=sline_981;
            }
            no_comma_984=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_985=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_986=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj263=node_986,
            node_986=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_986),info));
            (__dec_obj263 ? __dec_obj263 = come_decrement_ref_count(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_984;
            info->in_fun_param=in_fun_param_985;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_979,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2839, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_983),(struct sNode*)come_increment_ref_count(node_986))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_983 = come_decrement_ref_count(label_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_986) ? node_986 = come_decrement_ref_count(node_986, ((struct sNode*)node_986)->finalize, ((struct sNode*)node_986)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_983 = come_decrement_ref_count(label_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_986) ? node_986 = come_decrement_ref_count(node_986, ((struct sNode*)node_986)->finalize, ((struct sNode*)node_986)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2857, "struct sNode");
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1087=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2857, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_979,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result_obj__529 = come_increment_ref_count(((struct sNode*)(__right_value1092=_inf_value23)));
        /*c*/ come_call_finalizer3(params_979,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value1087,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value1092) ? __right_value1092 = come_decrement_ref_count(__right_value1092, ((struct sNode*)__right_value1092)->finalize, ((struct sNode*)__right_value1092)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__529) ? __result_obj__529 = come_decrement_ref_count(__result_obj__529, ((struct sNode*)__result_obj__529)->finalize, ((struct sNode*)__result_obj__529)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__529;
        /*c*/ come_call_finalizer3(params_979,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__530 = come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__530) ? __result_obj__530 = come_decrement_ref_count(__result_obj__530, ((struct sNode*)__result_obj__530)->finalize, ((struct sNode*)__result_obj__530)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__530;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__527;
void* __right_value1088 = (void*)0;
struct sLambdaCall* result_987;
void* __right_value1089 = (void*)0;
char* __dec_obj264;
void* __right_value1090 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value1091 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj266;
struct sLambdaCall* __result_obj__528;
    if(    self==(void*)0) {
        __result_obj__527 = (void*)0;
        return __result_obj__527;
    }
    result_987=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_987->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj264=result_987->sname,
        result_987->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_987->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj265=result_987->node,
        result_987->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj265 ? __dec_obj265 = come_decrement_ref_count(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj266=result_987->params,
        result_987->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        /*b*/ come_call_finalizer3(__dec_obj266,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__528 = result_987;
    /*c*/ come_call_finalizer3(result_987,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__528;
}

