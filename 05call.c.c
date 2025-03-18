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
_Bool bool_value(_Bool self);
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
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
int poll(struct pollfd* anonymous_var_nameX1006, unsigned long  int anonymous_var_nameX1007, int anonymous_var_nameX1008);
int ppoll(struct pollfd* anonymous_var_nameX1009, unsigned long  int anonymous_var_nameX1010, const struct timespec* anonymous_var_nameX1011, const struct __sigset_t* anonymous_var_nameX1012);
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

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_132;
struct list$1char$* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_132=0;    i_132<num_value;    i_132++    ){
        list$1char$_push_back(self,values[i_132]);
    }
    __result_obj__63 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_133;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_134;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_135;
struct list$1char$* __result_obj__62;
    if(    self->len==0) {
        litem_133=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1227, "struct list_item$1char$*"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        litem_133->item=item;
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1) {
        litem_134=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1237, "struct list_item$1char$*"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1247, "struct list_item$1char$*"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_136;
struct list_item$1char$* prev_it_137;
    it_136=self->head;
    while(it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*c*/ come_call_finalizer3(prev_it_137,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_138;
struct list$1char$p* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_138=0;    i_138<num_value;    i_138++    ){
        list$1char$p_push_back(self,values[i_138]);
    }
    __result_obj__66 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_139;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_140;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_141;
struct list$1char$p* __result_obj__65;
    if(    self->len==0) {
        litem_139=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1227, "struct list_item$1char$p*"))));
        litem_139->prev=((void*)0);
        litem_139->next=((void*)0);
        litem_139->item=item;
        self->tail=litem_139;
        self->head=litem_139;
    }
    else if(    self->len==1) {
        litem_140=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1237, "struct list_item$1char$p*"))));
        litem_140->prev=self->head;
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head->next=litem_140;
    }
    else {
        litem_141=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1247, "struct list_item$1char$p*"))));
        litem_141->prev=self->tail;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail->next=litem_141;
        self->tail=litem_141;
    }
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_142;
struct list_item$1char$p* prev_it_143;
    it_142=self->head;
    while(it_142!=((void*)0)) {
        prev_it_143=it_142;
        it_142=it_142->next;
        /*c*/ come_call_finalizer3(prev_it_143,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_144;
struct list$1short$* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_144=0;    i_144<num_value;    i_144++    ){
        list$1short$_push_back(self,values[i_144]);
    }
    __result_obj__69 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_145;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_146;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_147;
struct list$1short$* __result_obj__68;
    if(    self->len==0) {
        litem_145=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1227, "struct list_item$1short$*"))));
        litem_145->prev=((void*)0);
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail=litem_145;
        self->head=litem_145;
    }
    else if(    self->len==1) {
        litem_146=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1237, "struct list_item$1short$*"))));
        litem_146->prev=self->head;
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head->next=litem_146;
    }
    else {
        litem_147=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1247, "struct list_item$1short$*"))));
        litem_147->prev=self->tail;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail->next=litem_147;
        self->tail=litem_147;
    }
    self->len++;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_148;
struct list_item$1short$* prev_it_149;
    it_148=self->head;
    while(it_148!=((void*)0)) {
        prev_it_149=it_148;
        it_148=it_148->next;
        /*c*/ come_call_finalizer3(prev_it_149,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_150;
struct list$1int$* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_150=0;    i_150<num_value;    i_150++    ){
        list$1int$_push_back(self,values[i_150]);
    }
    __result_obj__72 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_151;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_152;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_153;
struct list$1int$* __result_obj__71;
    if(    self->len==0) {
        litem_151=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1227, "struct list_item$1int$*"))));
        litem_151->prev=((void*)0);
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail=litem_151;
        self->head=litem_151;
    }
    else if(    self->len==1) {
        litem_152=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1237, "struct list_item$1int$*"))));
        litem_152->prev=self->head;
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head->next=litem_152;
    }
    else {
        litem_153=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1247, "struct list_item$1int$*"))));
        litem_153->prev=self->tail;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail->next=litem_153;
        self->tail=litem_153;
    }
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_154;
struct list_item$1int$* prev_it_155;
    it_154=self->head;
    while(it_154!=((void*)0)) {
        prev_it_155=it_154;
        it_154=it_154->next;
        /*c*/ come_call_finalizer3(prev_it_155,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_156;
struct list$1long$* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_156=0;    i_156<num_value;    i_156++    ){
        list$1long$_push_back(self,values[i_156]);
    }
    __result_obj__75 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__75,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__75;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_157;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_158;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_159;
struct list$1long$* __result_obj__74;
    if(    self->len==0) {
        litem_157=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1227, "struct list_item$1long$*"))));
        litem_157->prev=((void*)0);
        litem_157->next=((void*)0);
        litem_157->item=item;
        self->tail=litem_157;
        self->head=litem_157;
    }
    else if(    self->len==1) {
        litem_158=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1237, "struct list_item$1long$*"))));
        litem_158->prev=self->head;
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head->next=litem_158;
    }
    else {
        litem_159=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1247, "struct list_item$1long$*"))));
        litem_159->prev=self->tail;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail->next=litem_159;
        self->tail=litem_159;
    }
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_160;
struct list_item$1long$* prev_it_161;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        prev_it_161=it_160;
        it_160=it_160->next;
        /*c*/ come_call_finalizer3(prev_it_161,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_162;
struct list$1float$* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_162=0;    i_162<num_value;    i_162++    ){
        list$1float$_push_back(self,values[i_162]);
    }
    __result_obj__78 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__78,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_163;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_164;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_165;
struct list$1float$* __result_obj__77;
    if(    self->len==0) {
        litem_163=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1227, "struct list_item$1float$*"))));
        litem_163->prev=((void*)0);
        litem_163->next=((void*)0);
        litem_163->item=item;
        self->tail=litem_163;
        self->head=litem_163;
    }
    else if(    self->len==1) {
        litem_164=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1237, "struct list_item$1float$*"))));
        litem_164->prev=self->head;
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head->next=litem_164;
    }
    else {
        litem_165=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1247, "struct list_item$1float$*"))));
        litem_165->prev=self->tail;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail->next=litem_165;
        self->tail=litem_165;
    }
    self->len++;
    __result_obj__77 = self;
    return __result_obj__77;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_166;
struct list_item$1float$* prev_it_167;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        prev_it_167=it_166;
        it_166=it_166->next;
        /*c*/ come_call_finalizer3(prev_it_167,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_168;
struct list$1double$* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_168=0;    i_168<num_value;    i_168++    ){
        list$1double$_push_back(self,values[i_168]);
    }
    __result_obj__81 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__81,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_169;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_170;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_171;
struct list$1double$* __result_obj__80;
    if(    self->len==0) {
        litem_169=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1227, "struct list_item$1double$*"))));
        litem_169->prev=((void*)0);
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail=litem_169;
        self->head=litem_169;
    }
    else if(    self->len==1) {
        litem_170=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1237, "struct list_item$1double$*"))));
        litem_170->prev=self->head;
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head->next=litem_170;
    }
    else {
        litem_171=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1247, "struct list_item$1double$*"))));
        litem_171->prev=self->tail;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail->next=litem_171;
        self->tail=litem_171;
    }
    self->len++;
    __result_obj__80 = self;
    return __result_obj__80;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_172;
struct list_item$1double$* prev_it_173;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*c*/ come_call_finalizer3(prev_it_173,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__115 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__115,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__115;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_207;
struct list_item$1char$ph* prev_it_208;
    it_207=self->head;
    while(it_207!=((void*)0)) {
        prev_it_208=it_207;
        it_207=it_207->next;
        /*c*/ come_call_finalizer3(prev_it_208,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_212;
char* __dec_obj13;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_213;
char* __dec_obj14;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_214;
char* __dec_obj15;
struct list$1char$ph* __result_obj__117;
    if(    self->len==0) {
        litem_212=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1227, "struct list_item$1char$ph*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        __dec_obj13=litem_212->item,
        litem_212->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1237, "struct list_item$1char$ph*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        __dec_obj14=litem_213->item,
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1247, "struct list_item$1char$ph*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        __dec_obj15=litem_214->item,
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__117 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__117;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value186 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value187 = (void*)0;
char* __dec_obj17;
struct sReturnNode* __result_obj__167;
    ((struct sNodeBase*)(__right_value186=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value186,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj17=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__167 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__167,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value188 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = come_increment_ref_count(((char*)(__right_value188=__builtin_string("sReturnNode"))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__168;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_249;
void* __right_value227 = (void*)0;
struct sType* result_type_250;
void* __right_value228 = (void*)0;
struct sType* result_type2_278;
struct sType* result_type3_279;
void* __right_value229 = (void*)0;
_Bool _if_conditional1;
void* __right_value230 = (void*)0;
struct sNode* __dec_obj42;
_Bool Value_280;
_Bool __result_obj__184;
void* __right_value231 = (void*)0;
struct CVALUE* come_value_281;
void* __right_value232 = (void*)0;
struct sType* come_value_type_282;
void* __right_value233 = (void*)0;
struct sType* __dec_obj43;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_284=0;
char* Err_285=0;
_Bool _if_conditional2;
_Bool __result_obj__185;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __if_result__0_286 = (void*)0;
struct list$1sVar$ph* o2_saved_287;
struct sVar* it_290;
void* __right_value244 = (void*)0;
struct list$1sVar$ph* __dec_obj44;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sFun* come_fun_297;
void* __if_result__1_298 = (void*)0;
struct list$1sVar$ph* o2_saved_299;
struct sVar* it_300;
void* __right_value250 = (void*)0;
struct list$1sVar$ph* __dec_obj45;
void* __right_value251 = (void*)0;
    if(    self->value) {
        come_fun_249=info->come_fun;
        result_type_250=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_249->mResultType));
        result_type2_278=(struct sType*)come_increment_ref_count(solve_generics(result_type_250,info->generics_type,info));
        result_type3_279=result_type2_278->mNoSolvedGenericsType;
        if(        result_type2_278->mNoSolvedGenericsType) {
            result_type3_279=result_type2_278->mNoSolvedGenericsType;
        }
        else {
            result_type3_279=result_type2_278;
        }
        if(        result_type_250->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value229=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj42=self->value,
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
        }
        Value_280=node_compile(self->value,info);
        if(        !Value_280) {
            __result_obj__184 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_250,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__184;
        }
        else {
        }
        come_value_281=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_282=(struct sType*)come_increment_ref_count(solve_generics(come_value_281->type,info->generics_type,info));
        __dec_obj43=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_281->type));
        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_281->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_249->mBlock,info,come_value_281->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_281->c_value);
        }
        else {
            static int result_num_283=0;
            result_num_283++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value236=make_define_var(result_type2_278,((char*)(__right_value235=xsprintf("__result_obj__\%s",((char*)(__right_value234=int_to_string(result_num_283)))))),(_Bool)0,info))));
            (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value236 = come_decrement_ref_count(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_278->mClass->mName)>strlen("tuple")&&memcmp(result_type2_278->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value237=check_assign_type("result type",result_type2_278,come_value_type_282,come_value_281,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_284=multiple_assign_var1->v1;
                    Err_285=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_285)),                    /*c*/ come_call_finalizer3(__right_value237,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional2) {
                        __result_obj__185 = (_Bool)1;
                        (Err_285 = come_decrement_ref_count(Err_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_250,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_value_281,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_value_type_282,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__185;
                    }
                    else {
                    }
                    (Err_285 = come_decrement_ref_count(Err_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                result_type2_278->mHeap) {
                    add_come_code(info,((char*)(__right_value239=xsprintf("__result_obj__\%s = come_increment_ref_count(%%s);\n",((char*)(__right_value238=int_to_string(result_num_283)))))),come_value_281->c_value);
                    (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value241=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value240=int_to_string(result_num_283)))))),come_value_281->c_value);
                    (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value243=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value242=int_to_string(result_num_283)))))),come_value_281->c_value);
                (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_249->mBlock,info,come_value_281->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_287=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_290=list$1sVar$ph_begin((o2_saved_287));                    !list$1sVar$ph_end((o2_saved_287));                    it_290=list$1sVar$ph_next((o2_saved_287))                    ){
                        free_object(((struct sType*)(__right_value244=come_call_cloner(sType_clone, it_290->mType))),it_290->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value244,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_287,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __dec_obj44=info->match_it_var,
                    __if_result__0_286=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    /*b*/ come_call_finalizer3(__dec_obj44,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                /*c*/ come_call_finalizer3(__if_result__0_286,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value245=xsprintf("come_heap_final();\n"))));
                (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_278->mHeap) {
                free_object(result_type2_278,((char*)(__right_value247=xsprintf("__result_obj__\%s",((char*)(__right_value246=int_to_string(result_num_283)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value249=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value248=int_to_string(result_num_283)))))));
            (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(result_type_250,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_281,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_type_282,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_fun_297=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_297->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_299=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_300=list$1sVar$ph_begin((o2_saved_299));                !list$1sVar$ph_end((o2_saved_299));                it_300=list$1sVar$ph_next((o2_saved_299))                ){
                    free_object(((struct sType*)(__right_value250=come_call_cloner(sType_clone, it_300->mType))),it_300->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value250,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_299,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj45=info->match_it_var,
                __if_result__1_298=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                /*b*/ come_call_finalizer3(__dec_obj45,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            /*c*/ come_call_finalizer3(__if_result__1_298,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value251=xsprintf("come_heap_final();\n"))));
            (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sType* __result_obj__169;
void* __right_value189 = (void*)0;
struct sType* result_255;
void* __right_value190 = (void*)0;
struct sType* __dec_obj18;
void* __right_value191 = (void*)0;
struct sType* __dec_obj19;
void* __right_value199 = (void*)0;
struct list$1sType$ph* __dec_obj23;
void* __right_value200 = (void*)0;
struct sType* __dec_obj24;
void* __right_value201 = (void*)0;
struct sType* __dec_obj25;
void* __right_value203 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value204 = (void*)0;
struct sNode* __dec_obj27;
void* __right_value205 = (void*)0;
char* __dec_obj28;
void* __right_value206 = (void*)0;
char* __dec_obj29;
void* __right_value207 = (void*)0;
char* __dec_obj30;
void* __right_value215 = (void*)0;
struct list$1sNode$ph* __dec_obj34;
void* __right_value216 = (void*)0;
char* __dec_obj35;
void* __right_value217 = (void*)0;
struct list$1sType$ph* __dec_obj36;
void* __right_value225 = (void*)0;
struct list$1char$ph* __dec_obj40;
void* __right_value226 = (void*)0;
struct sType* __dec_obj41;
struct sType* __result_obj__183;
    if(    self==(void*)0) {
        __result_obj__169 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__169,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__169;
    }
    result_255=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_255->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj18=result_255->mOriginalLoadVarType,
        result_255->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj19=result_255->mChannelType,
        result_255->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj23=result_255->mGenericsTypes,
        result_255->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj23,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj24=result_255->mNoSolvedGenericsType,
        result_255->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_255->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj25=result_255->mAnyOriginalType,
        result_255->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj26=result_255->mSizeNum,
        result_255->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj27=result_255->mAlignas,
        result_255->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj28=result_255->mTupleName,
        result_255->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj29=result_255->mAttribute,
        result_255->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_255->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_255->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_255->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_255->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_255->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_255->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_255->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_255->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_255->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_255->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_255->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_255->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_255->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_255->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_255->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_255->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_255->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_255->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_255->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_255->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_255->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_255->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_255->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj30=result_255->mAsmName,
        result_255->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_255->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_255->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_255->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj34=result_255->mArrayNum,
        result_255->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_255->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_255->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_255->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_255->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_255->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj35=result_255->mOriginalTypeName,
        result_255->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_255->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_255->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_255->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_255->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj36=result_255->mParamTypes,
        result_255->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj36,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj40=result_255->mParamNames,
        result_255->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj41=result_255->mResultType,
        result_255->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_255->mVarArgs=self->mVarArgs;
    }
    __result_obj__183 = come_increment_ref_count(result_255);
    /*c*/ come_call_finalizer3(result_255,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
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
struct list_item$1sType$ph* it_251;
struct list_item$1sType$ph* prev_it_252;
    it_251=self->head;
    while(it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        /*c*/ come_call_finalizer3(prev_it_252,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_253;
struct list_item$1sNode$ph* prev_it_254;
    it_253=self->head;
    while(it_253!=((void*)0)) {
        prev_it_254=it_253;
        it_253=it_253->next;
        /*c*/ come_call_finalizer3(prev_it_254,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__170;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1sType$ph* result_256;
struct list_item$1sType$ph* it_257;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1sType$ph* __result_obj__173;
    if(    self==((void*)0)) {
        __result_obj__170 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__170,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__170;
    }
    result_256=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_257=self->head;
    while(it_257!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_256,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_257->item)));
        }
        else {
            list$1sType$ph_add(result_256,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_257->item)));
        }
        it_257=it_257->next;
    }
    __result_obj__173 = come_increment_ref_count(result_256);
    /*c*/ come_call_finalizer3(result_256,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value194 = (void*)0;
struct list_item$1sType$ph* litem_258;
struct sType* __dec_obj20;
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_259;
struct sType* __dec_obj21;
void* __right_value196 = (void*)0;
struct list_item$1sType$ph* litem_260;
struct sType* __dec_obj22;
struct list$1sType$ph* __result_obj__172;
    if(    self->len==0) {
        litem_258=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value194=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_258->prev=((void*)0);
        litem_258->next=((void*)0);
        __dec_obj20=litem_258->item,
        litem_258->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_258;
        self->head=litem_258;
    }
    else if(    self->len==1) {
        litem_259=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_259->prev=self->head;
        litem_259->next=((void*)0);
        __dec_obj21=litem_259->item,
        litem_259->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_259;
        self->head->next=litem_259;
    }
    else {
        litem_260=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_260->prev=self->tail;
        litem_260->next=((void*)0);
        __dec_obj22=litem_260->item,
        litem_260->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_260;
        self->tail=litem_260;
    }
    self->len++;
    __result_obj__172 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_261;
struct list_item$1sType$ph* prev_it_262;
    it_261=self->head;
    while(it_261!=((void*)0)) {
        prev_it_262=it_261;
        it_261=it_261->next;
        /*c*/ come_call_finalizer3(prev_it_262,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__174;
void* __right_value202 = (void*)0;
struct sNode* result_263;
struct sNode* __result_obj__175;
    if(    self==(void*)0) {
        __result_obj__174 = come_increment_ref_count((void*)0);
        ((__result_obj__174) ? __result_obj__174 = come_decrement_ref_count(__result_obj__174, ((struct sNode*)__result_obj__174)->finalize, ((struct sNode*)__result_obj__174)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__174;
    }
    result_263=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_263->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_263->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_263->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_263->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_263->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_263->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_263->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_263->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_263->kind=self->kind;
    }
    __result_obj__175 = come_increment_ref_count(result_263);
    ((result_263) ? result_263 = come_decrement_ref_count(result_263, ((struct sNode*)result_263)->finalize, ((struct sNode*)result_263)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__176;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct list$1sNode$ph* result_264;
struct list_item$1sNode$ph* it_265;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sNode$ph* __result_obj__179;
    if(    self==((void*)0)) {
        __result_obj__176 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__176,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__176;
    }
    result_264=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_265=self->head;
    while(it_265!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_264,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_265->item)));
        }
        else {
            list$1sNode$ph_add(result_264,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_265->item)));
        }
        it_265=it_265->next;
    }
    __result_obj__179 = come_increment_ref_count(result_264);
    /*c*/ come_call_finalizer3(result_264,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__177;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__177 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value210 = (void*)0;
struct list_item$1sNode$ph* litem_266;
struct sNode* __dec_obj31;
void* __right_value211 = (void*)0;
struct list_item$1sNode$ph* litem_267;
struct sNode* __dec_obj32;
void* __right_value212 = (void*)0;
struct list_item$1sNode$ph* litem_268;
struct sNode* __dec_obj33;
struct list$1sNode$ph* __result_obj__178;
    if(    self->len==0) {
        litem_266=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value210=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_266->prev=((void*)0);
        litem_266->next=((void*)0);
        __dec_obj31=litem_266->item,
        litem_266->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_266;
        self->head=litem_266;
    }
    else if(    self->len==1) {
        litem_267=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value211=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_267->prev=self->head;
        litem_267->next=((void*)0);
        __dec_obj32=litem_267->item,
        litem_267->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_267;
        self->head->next=litem_267;
    }
    else {
        litem_268=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value212=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_268->prev=self->tail;
        litem_268->next=((void*)0);
        __dec_obj33=litem_268->item,
        litem_268->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_268;
        self->tail=litem_268;
    }
    self->len++;
    __result_obj__178 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__178;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_269;
struct list_item$1sNode$ph* prev_it_270;
    it_269=self->head;
    while(it_269!=((void*)0)) {
        prev_it_270=it_269;
        it_269=it_269->next;
        /*c*/ come_call_finalizer3(prev_it_270,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__180;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1char$ph* result_271;
struct list_item$1char$ph* it_272;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1char$ph* __result_obj__182;
    if(    self==((void*)0)) {
        __result_obj__180 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__180;
    }
    result_271=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_272=self->head;
    while(it_272!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_271,(char*)come_increment_ref_count((char*)come_memdup(it_272->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_271,(char*)come_increment_ref_count((char*)come_memdup(it_272->item, "./comelang.h", 1146, "char*")));
        }
        it_272=it_272->next;
    }
    __result_obj__182 = come_increment_ref_count(result_271);
    /*c*/ come_call_finalizer3(result_271,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__182,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value220 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj37;
void* __right_value221 = (void*)0;
struct list_item$1char$ph* litem_274;
char* __dec_obj38;
void* __right_value222 = (void*)0;
struct list_item$1char$ph* litem_275;
char* __dec_obj39;
struct list$1char$ph* __result_obj__181;
    if(    self->len==0) {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value220=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_273->prev=((void*)0);
        litem_273->next=((void*)0);
        __dec_obj37=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_273;
        self->head=litem_273;
    }
    else if(    self->len==1) {
        litem_274=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value221=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_274->prev=self->head;
        litem_274->next=((void*)0);
        __dec_obj38=litem_274->item,
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_274;
        self->head->next=litem_274;
    }
    else {
        litem_275=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value222=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_275->prev=self->tail;
        litem_275->next=((void*)0);
        __dec_obj39=litem_275->item,
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_275;
        self->tail=litem_275;
    }
    self->len++;
    __result_obj__181 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__181;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_276;
struct list_item$1char$ph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        /*c*/ come_call_finalizer3(prev_it_277,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct sVar* result_288;
struct sVar* __result_obj__186;
struct sVar* __result_obj__187;
struct sVar* result_289;
struct sVar* __result_obj__188;
result_288 = (void*)0;
result_289 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_288,0,sizeof(struct sVar*));
        __result_obj__186 = result_288;
        return __result_obj__186;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__187 = self->it->item;
        return __result_obj__187;
    }
    memset(&result_289,0,sizeof(struct sVar*));
    __result_obj__188 = result_289;
    return __result_obj__188;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_291;
struct sVar* __result_obj__189;
struct sVar* __result_obj__190;
struct sVar* result_292;
struct sVar* __result_obj__191;
result_291 = (void*)0;
result_292 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_291,0,sizeof(struct sVar*));
        __result_obj__189 = result_291;
        return __result_obj__189;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__190 = self->it->item;
        return __result_obj__190;
    }
    memset(&result_292,0,sizeof(struct sVar*));
    __result_obj__191 = result_292;
    return __result_obj__191;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_293;
struct list_item$1sVar$ph* prev_it_294;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        prev_it_294=it_293;
        it_293=it_293->next;
        /*c*/ come_call_finalizer3(prev_it_294,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sVar$ph* it_295;
struct list_item$1sVar$ph* prev_it_296;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        /*c*/ come_call_finalizer3(prev_it_296,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value252 = (void*)0;
char* __dec_obj46;
struct sOutputNode* __result_obj__192;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value252,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj46=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__192 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__192,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value253 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = come_increment_ref_count(((char*)(__right_value253=__builtin_string("sOutputNode"))));
    (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__193;
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
void* __right_value254 = (void*)0;
char* __dec_obj47;
struct list$1sNode$ph* __dec_obj48;
struct sInlineAssembler* __result_obj__194;
    ((struct sNodeBase*)(__right_value254=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value254,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj47=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    /*b*/ come_call_finalizer3(__dec_obj48,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__194 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__194,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value255 = (void*)0;
char* __result_obj__195;
    __result_obj__195 = come_increment_ref_count(((char*)(__right_value255=__builtin_string("sInlineAssembler"))));
    (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__195;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_301;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_302;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct buffer* buf_303;
char* p_304;
_Bool dquort_305;
int num_exp_306;
void* __right_value260 = (void*)0;
struct sNode* node_307;
_Bool Value_311;
_Bool __result_obj__198;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_312;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* __dec_obj49;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__200;
    source_301=(char*)come_increment_ref_count(self->source);
    come_value_302=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 188, "struct CVALUE*"))));
    buf_303=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 190, "struct buffer*"))));
    p_304=source_301;
    while(*p_304!=40) {
        buffer_append_char(buf_303,*p_304);
        p_304++;
    }
    if(    *p_304==40) {
        buffer_append_char(buf_303,*p_304);
        p_304++;
        while(*p_304==32||*p_304==9||*p_304==10) {
            buffer_append_char(buf_303,*p_304);
            p_304++;
        }
    }
    dquort_305=(_Bool)0;
    num_exp_306=0;
    while(*p_304) {
        if(        *p_304==34) {
            buffer_append_char(buf_303,*p_304);
            p_304++;
            dquort_305=!dquort_305;
        }
        else if(        dquort_305) {
            buffer_append_char(buf_303,*p_304);
            p_304++;
        }
        else if(        *p_304==40) {
            buffer_append_char(buf_303,*p_304);
            p_304++;
            node_307=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_306++));
            Value_311=node_compile(node_307,info);
            if(            !Value_311) {
                __result_obj__198 = (_Bool)0;
                ((node_307) ? node_307 = come_decrement_ref_count(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_301 = come_decrement_ref_count(source_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_302,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_303,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__198;
            }
            else {
            }
            come_value_312=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_303,come_value_312->c_value);
            if(            *p_304==41) {
                buffer_append_char(buf_303,*p_304);
                p_304++;
            }
            ((node_307) ? node_307 = come_decrement_ref_count(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_312,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_303,*p_304);
            p_304++;
        }
    }
    __dec_obj49=come_value_302->c_value,
    come_value_302->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value262=buffer_to_string(buf_303)))));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj50=come_value_302->type,
    come_value_302->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 247, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_302->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_302));
    add_come_last_code(info,"%s",come_value_302->c_value);
    __result_obj__200 = (_Bool)1;
    (source_301 = come_decrement_ref_count(source_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_302,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_303,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
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
struct list_item$1sNode$ph* it_308;
int i_309;
struct sNode* __result_obj__196;
struct sNode* default_value_310;
struct sNode* __result_obj__197;
default_value_310 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_308=self->head;
    i_309=0;
    while(it_308!=((void*)0)) {
        if(        position==i_309) {
            __result_obj__196 = come_increment_ref_count(it_308->item);
            ((__result_obj__196) ? __result_obj__196 = come_decrement_ref_count(__result_obj__196, ((struct sNode*)__result_obj__196)->finalize, ((struct sNode*)__result_obj__196)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__196;
        }
        it_308=it_308->next;
        i_309++;
    }
    memset(&default_value_310,0,sizeof(struct sNode*));
    __result_obj__197 = come_increment_ref_count(default_value_310);
    ((default_value_310) ? default_value_310 = come_decrement_ref_count(default_value_310, ((struct sNode*)default_value_310)->finalize, ((struct sNode*)default_value_310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__197) ? __result_obj__197 = come_decrement_ref_count(__result_obj__197, ((struct sNode*)__result_obj__197)->finalize, ((struct sNode*)__result_obj__197)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__197;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value267 = (void*)0;
struct list_item$1CVALUE$ph* litem_313;
struct CVALUE* __dec_obj51;
void* __right_value268 = (void*)0;
struct list_item$1CVALUE$ph* litem_314;
struct CVALUE* __dec_obj52;
void* __right_value269 = (void*)0;
struct list_item$1CVALUE$ph* litem_315;
struct CVALUE* __dec_obj53;
struct list$1CVALUE$ph* __result_obj__199;
    if(    self->len==0) {
        litem_313=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value267=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_313->prev=((void*)0);
        litem_313->next=((void*)0);
        __dec_obj51=litem_313->item,
        litem_313->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_313;
        self->head=litem_313;
    }
    else if(    self->len==1) {
        litem_314=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value268=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_314->prev=self->head;
        litem_314->next=((void*)0);
        __dec_obj52=litem_314->item,
        litem_314->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_314;
        self->head->next=litem_314;
    }
    else {
        litem_315=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value269=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_315->prev=self->tail;
        litem_315->next=((void*)0);
        __dec_obj53=litem_315->item,
        litem_315->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_315;
        self->tail=litem_315;
    }
    self->len++;
    __result_obj__199 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value270 = (void*)0;
struct sCurrentNode2* __result_obj__201;
    ((struct sNodeBase*)(__right_value270=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value270,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__201 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value271 = (void*)0;
char* __result_obj__202;
    __result_obj__202 = come_increment_ref_count(((char*)(__right_value271=__builtin_string(self->sname))));
    (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__202;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value272 = (void*)0;
char* __result_obj__203;
    __result_obj__203 = come_increment_ref_count(((char*)(__right_value272=__builtin_string("sCurrentNode"))));
    (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__203;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value273 = (void*)0;
char* class_name_316;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sClass* current_stack_317;
struct sVarTable* vtable_318;
struct map$2char$phsVar$ph* o2_saved_319;
char* it_322;
char* key_325;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sVar* value_326;
void* __right_value278 = (void*)0;
struct sType* type2_330;
void* __right_value279 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct tuple2$2char$phsType$ph* item_331;
void* __right_value285 = (void*)0;
struct sType* type3_342;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct tuple2$2char$phsType$ph* item2_345;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_394;
char* it_395;
char* key_396;
void* __right_value299 = (void*)0;
struct sVar* value_397;
void* __right_value300 = (void*)0;
struct sType* type2_398;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct tuple2$2char$phsType$ph* item_399;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value305 = (void*)0;
char* __dec_obj61;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__240;
    info->current_stack_num++;
    class_name_316=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_317=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 424, "struct sClass*")),(char*)come_increment_ref_count(class_name_316),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_318=info->lv_table;
    while(vtable_318) {
        for(        o2_saved_319=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_318->mVars)),it_322=map$2char$phsVar$ph_begin((o2_saved_319));        !map$2char$phsVar$ph_end((o2_saved_319));        it_322=map$2char$phsVar$ph_next((o2_saved_319))        ){
            key_325=it_322;
            value_326=((struct sVar*)(__right_value277=map$2char$phsVar$ph$p_operator_load_element(vtable_318->mVars,((char*)(__right_value276=__builtin_string(key_325))))));
            (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value277,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_330=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_326->mType));
            type2_330->mPointerNum++;
            item_331=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 437, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_326->mCValueName)),(struct sType*)come_increment_ref_count(type2_330)));
            if(            value_326->mCValueName!=((void*)0)) {
                if(                strcmp(value_326->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_326->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_326->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_326->mType->mClass->mName,"va_list")||string_operator_equals(value_326->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_330->mArrayNum)==1) {
                    type3_342=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_330));
                    list$1sNode$ph_reset(type3_342->mArrayNum);
                    type3_342->mPointerNum=1;
                    type3_342->mOriginIsArray=(_Bool)1;
                    item2_345=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 457, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_326->mCValueName)),(struct sType*)come_increment_ref_count(type3_342)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_317->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_345)));
                    value_326->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_345,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_317->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_331)));
                }
            }
            /*c*/ come_call_finalizer3(type2_330,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_331,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_319,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_318=vtable_318->mParent;
    }
    output_struct(current_stack_317,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_316),(struct sClass*)come_increment_ref_count(current_stack_317));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_316,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_316);
    vtable_318=info->lv_table;
    while(vtable_318) {
        for(        o2_saved_394=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_318->mVars)),it_395=map$2char$phsVar$ph_begin((o2_saved_394));        !map$2char$phsVar$ph_end((o2_saved_394));        it_395=map$2char$phsVar$ph_next((o2_saved_394))        ){
            key_396=it_395;
            value_397=((struct sVar*)(__right_value299=map$2char$phsVar$ph$p_operator_load_element(vtable_318->mVars,key_396)));
            /*c*/ come_call_finalizer3(__right_value299,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_398=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_397->mType));
            item_399=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 486, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_397->mCValueName),(struct sType*)come_increment_ref_count(type2_398)));
            if(            value_397->mCValueName!=((void*)0)) {
                if(                strcmp(value_397->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_397->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_397->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_397->mType->mClass->mName,"va_list")||string_operator_equals(value_397->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_398->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_397->mCValueName,value_397->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_397->mCValueName,value_397->mCValueName);
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_398,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_399,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_394,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_318=vtable_318->mParent;
    }
    come_value_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 515, "struct CVALUE*"))));
    __dec_obj61=come_value_400->c_value,
    come_value_400->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj62=come_value_400->type,
    come_value_400->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 518, "struct sType*")),(char*)come_increment_ref_count(class_name_316),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_400->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_400->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_400));
    __result_obj__240 = (_Bool)1;
    (class_name_316 = come_decrement_ref_count(class_name_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_317,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_320;
char* __result_obj__204;
char* __result_obj__205;
char* result_321;
char* __result_obj__206;
result_320 = (void*)0;
result_321 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_320,0,sizeof(char*));
        __result_obj__204 = result_320;
        return __result_obj__204;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__205 = self->key_list->it->item;
        return __result_obj__205;
    }
    memset(&result_321,0,sizeof(char*));
    __result_obj__206 = result_321;
    return __result_obj__206;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_323;
char* __result_obj__207;
char* __result_obj__208;
char* result_324;
char* __result_obj__209;
result_323 = (void*)0;
result_324 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_323,0,sizeof(char*));
        __result_obj__207 = result_323;
        return __result_obj__207;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__208 = self->key_list->it->item;
        return __result_obj__208;
    }
    memset(&result_324,0,sizeof(char*));
    __result_obj__209 = result_324;
    return __result_obj__209;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_327;
unsigned int hash_328;
unsigned int it_329;
struct sVar* __result_obj__210;
struct sVar* __result_obj__211;
struct sVar* __result_obj__212;
struct sVar* __result_obj__213;
default_value_327 = (void*)0;
    memset(&default_value_327,0,sizeof(struct sVar*));
    hash_328=string_get_hash_key(((char*)key))%self->size;
    it_329=hash_328;
    while((_Bool)1) {
        if(        self->item_existance[it_329]) {
            if(            string_equals(self->keys[it_329],key)) {
                __result_obj__210 = come_increment_ref_count(self->items[it_329]);
                /*c*/ come_call_finalizer3(default_value_327,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__210,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__210;
            }
            it_329++;
            if(            it_329>=self->size) {
                it_329=0;
            }
            else if(            it_329==hash_328) {
                __result_obj__211 = come_increment_ref_count(default_value_327);
                /*c*/ come_call_finalizer3(default_value_327,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__211,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__211;
            }
        }
        else {
            __result_obj__212 = come_increment_ref_count(default_value_327);
            /*c*/ come_call_finalizer3(default_value_327,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__212,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__212;
        }
    }
    __result_obj__213 = come_increment_ref_count(default_value_327);
    /*c*/ come_call_finalizer3(default_value_327,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__213,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
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
struct tuple2$2char$phsType$ph* __result_obj__214;
void* __right_value280 = (void*)0;
struct tuple2$2char$phsType$ph* result_332;
void* __right_value281 = (void*)0;
char* __dec_obj54;
void* __right_value282 = (void*)0;
struct sType* __dec_obj55;
struct tuple2$2char$phsType$ph* __result_obj__215;
    if(    self==(void*)0) {
        __result_obj__214 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__214,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__214;
    }
    result_332=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_332->v1,
        result_332->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_332->v2,
        result_332->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__215 = come_increment_ref_count(result_332);
    /*c*/ come_call_finalizer3(result_332,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_333;
    result_333=0;
    result_333+=int_get_hash_key(((int)self->v1));
    result_333+=int_get_hash_key(((int)self->v2));
    return result_333;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_334;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_335;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_334=left->head;
    it2_335=right->head;
    while(it_334!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_334->item,it2_335->item)) {
            return (_Bool)0;
        }
        it_334=it_334->next;
        it2_335=it2_335->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_336;
struct list_item$1sType$ph* it2_337;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_336=left->head;
    it2_337=right->head;
    while(it_336!=((void*)0)) {
        if(        !sType_equals(it_336->item,it2_337->item)) {
            return (_Bool)0;
        }
        it_336=it_336->next;
        it2_337=it2_337->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_338;
struct list_item$1sNode$ph* it2_339;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_338=left->head;
    it2_339=right->head;
    while(it_338!=((void*)0)) {
        if(        !sNode_equals(it_338->item,it2_339->item)) {
            return (_Bool)0;
        }
        it_338=it_338->next;
        it2_339=it2_339->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_340;
struct list_item$1char$ph* it2_341;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_340=left->head;
    it2_341=right->head;
    while(it_340!=((void*)0)) {
        if(        !string_equals(it_340->item,it2_341->item)) {
            return (_Bool)0;
        }
        it_340=it_340->next;
        it2_341=it2_341->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj56;
struct sType* __dec_obj57;
struct tuple2$2char$phsType$ph* __result_obj__216;
    __dec_obj56=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__216 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__216,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
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
struct list_item$1sNode$ph* it_343;
struct list_item$1sNode$ph* prev_it_344;
struct list$1sNode$ph* __result_obj__217;
    it_343=self->head;
    while(it_343!=((void*)0)) {
        prev_it_344=it_343;
        it_343=it_343->next;
        /*c*/ come_call_finalizer3(prev_it_344,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__217 = self;
    return __result_obj__217;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value289 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_346;
struct tuple2$2char$phsType$ph* __dec_obj58;
void* __right_value290 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_347;
struct tuple2$2char$phsType$ph* __dec_obj59;
void* __right_value291 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_348;
struct tuple2$2char$phsType$ph* __dec_obj60;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__218;
    if(    self->len==0) {
        litem_346=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value289=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1227, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_346->prev=((void*)0);
        litem_346->next=((void*)0);
        __dec_obj58=litem_346->item,
        litem_346->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_346;
        self->head=litem_346;
    }
    else if(    self->len==1) {
        litem_347=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value290=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1237, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_347->prev=self->head;
        litem_347->next=((void*)0);
        __dec_obj59=litem_347->item,
        litem_347->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_347;
        self->head->next=litem_347;
    }
    else {
        litem_348=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value291=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1247, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_348->prev=self->tail;
        litem_348->next=((void*)0);
        __dec_obj60=litem_348->item,
        litem_348->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_348;
        self->tail=litem_348;
    }
    self->len++;
    __result_obj__218 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_349;
int i_350;
    for(    i_349=0;    i_349<self->size;    i_349++    ){
        if(        self->item_existance[i_349]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_349],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_350=0;    i_350<self->size;    i_350++    ){
        if(        self->item_existance[i_350]) {
            if(            1) {
                (self->keys[i_350] = come_decrement_ref_count(self->keys[i_350], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_370;
unsigned int it_371;
_Bool same_key_exist_388;
char* it2_391;
struct map$2char$phsClass$ph* __result_obj__239;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_370=string_get_hash_key(((char*)key))%self->size;
    it_371=hash_370;
    while((_Bool)1) {
        if(        self->item_existance[it_371]) {
            if(            string_equals(self->keys[it_371],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_371]);
                    (self->keys[it_371] = come_decrement_ref_count(self->keys[it_371], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_371]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_371]);
                    self->keys[it_371]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_371],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_371]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_371]=item;
                }
                break;
            }
            it_371++;
            if(            it_371>=self->size) {
                it_371=0;
            }
            else if(            it_371==hash_370) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_371]=(_Bool)1;
            if(            1) {
                self->keys[it_371]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_371]=key;
            }
            if(            1) {
                self->items[it_371]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_371]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_388=(_Bool)0;
    for(    it2_391=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_391=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_391,key)) {
            same_key_exist_388=(_Bool)1;
        }
    }
    if(    !same_key_exist_388) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__239 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_351;
void* __right_value294 = (void*)0;
char** keys_352;
void* __right_value295 = (void*)0;
struct sClass** items_353;
void* __right_value296 = (void*)0;
_Bool* item_existance_354;
int len_355;
char* it_358;
struct sClass* default_value_361;
void* __right_value297 = (void*)0;
struct sClass* it2_362;
unsigned int hash_367;
int n_368;
struct sClass* default_value_369;
void* __right_value298 = (void*)0;
default_value_361 = (void*)0;
default_value_369 = (void*)0;
    size_351=self->size*10;
    keys_352=(char**)come_increment_ref_count(((char**)(__right_value294=(char**)come_calloc(1, sizeof(char*)*(1*(size_351)), "./comelang.h", 2281, "char**"))));
    items_353=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value295=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_351)), "./comelang.h", 2282, "struct sClass**"))));
    item_existance_354=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value296=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_351)), "./comelang.h", 2283, "_Bool*"))));
    len_355=0;
    for(    it_358=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_358=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_361,0,sizeof(struct sClass*));
        it2_362=((struct sClass*)(__right_value297=map$2char$phsClass$ph_at(self,it_358,(struct sClass*)come_increment_ref_count(default_value_361))));
        /*c*/ come_call_finalizer3(__right_value297,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_367=string_get_hash_key(((char*)it_358))%size_351;
        n_368=hash_367;
        while((_Bool)1) {
            if(            item_existance_354[n_368]) {
                n_368++;
                if(                n_368>=size_351) {
                    n_368=0;
                }
                else if(                n_368==hash_367) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_354[n_368]=(_Bool)1;
                keys_352[n_368]=it_358;
                items_353[n_368]=((struct sClass*)(__right_value298=map$2char$phsClass$ph_at(self,it_358,(struct sClass*)come_increment_ref_count(default_value_369))));
                /*c*/ come_call_finalizer3(__right_value298,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_355++;
                /*c*/ come_call_finalizer3(default_value_369,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_369,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_361,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_352;
    self->items=items_353;
    self->item_existance=item_existance_354;
    self->size=size_351;
    self->len=len_355;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_356;
char* __result_obj__219;
char* __result_obj__220;
char* result_357;
char* __result_obj__221;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result_obj__219 = result_356;
        return __result_obj__219;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__220 = self->key_list->it->item;
        return __result_obj__220;
    }
    memset(&result_357,0,sizeof(char*));
    __result_obj__221 = result_357;
    return __result_obj__221;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_359;
char* __result_obj__222;
char* __result_obj__223;
char* result_360;
char* __result_obj__224;
result_359 = (void*)0;
result_360 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_359,0,sizeof(char*));
        __result_obj__222 = result_359;
        return __result_obj__222;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__223 = self->key_list->it->item;
        return __result_obj__223;
    }
    memset(&result_360,0,sizeof(char*));
    __result_obj__224 = result_360;
    return __result_obj__224;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_363;
unsigned int it_364;
struct sClass* __result_obj__225;
struct sClass* __result_obj__226;
struct sClass* __result_obj__227;
struct sClass* __result_obj__228;
    hash_363=string_get_hash_key(((char*)key))%self->size;
    it_364=hash_363;
    while((_Bool)1) {
        if(        self->item_existance[it_364]) {
            if(            string_equals(self->keys[it_364],key)) {
                __result_obj__225 = come_increment_ref_count(self->items[it_364]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__225,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__225;
            }
            it_364++;
            if(            it_364>=self->size) {
                it_364=0;
            }
            else if(            it_364==hash_363) {
                __result_obj__226 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__226,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__226;
            }
        }
        else {
            __result_obj__227 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__227,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__227;
        }
    }
    __result_obj__228 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__228,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_365;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_366;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        prev_it_366=it_365;
        it_365=it_365->next;
        /*c*/ come_call_finalizer3(prev_it_366,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_372;
struct list_item$1char$ph* it_373;
struct list$1char$ph* __result_obj__232;
    it2_372=0;
    it_373=self->head;
    while(it_373!=((void*)0)) {
        if(        string_equals(it_373->item,item)) {
            list$1char$ph_delete(self,it2_372,it2_372+1);
            break;
        }
        it2_372++;
        it_373=it_373->next;
    }
    __result_obj__232 = self;
    return __result_obj__232;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_374;
struct list$1char$ph* __result_obj__229;
struct list_item$1char$ph* it_377;
int i_378;
struct list_item$1char$ph* prev_it_379;
struct list_item$1char$ph* it_380;
int i_381;
struct list_item$1char$ph* prev_it_382;
struct list_item$1char$ph* it_383;
struct list_item$1char$ph* head_prev_it_384;
struct list_item$1char$ph* tail_it_385;
int i_386;
struct list_item$1char$ph* prev_it_387;
struct list$1char$ph* __result_obj__231;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_374=tail;
        tail=head;
        head=tmp_374;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__229 = self;
        return __result_obj__229;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_377=self->head;
        i_378=0;
        while(it_377!=((void*)0)) {
            if(            i_378<tail) {
                prev_it_379=it_377;
                it_377=it_377->next;
                i_378++;
                /*c*/ come_call_finalizer3(prev_it_379,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_378==tail) {
                self->head=it_377;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_377=it_377->next;
                i_378++;
            }
        }
    }
    else if(    tail==self->len) {
        it_380=self->head;
        i_381=0;
        while(it_380!=((void*)0)) {
            if(            i_381==head) {
                self->tail=it_380->prev;
                self->tail->next=((void*)0);
            }
            if(            i_381>=head) {
                prev_it_382=it_380;
                it_380=it_380->next;
                i_381++;
                /*c*/ come_call_finalizer3(prev_it_382,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_380=it_380->next;
                i_381++;
            }
        }
    }
    else {
        it_383=self->head;
        head_prev_it_384=((void*)0);
        tail_it_385=((void*)0);
        i_386=0;
        while(it_383!=((void*)0)) {
            if(            i_386==head) {
                head_prev_it_384=it_383->prev;
            }
            if(            i_386==tail) {
                tail_it_385=it_383;
            }
            if(            i_386>=head&&i_386<tail) {
                prev_it_387=it_383;
                it_383=it_383->next;
                i_386++;
                /*c*/ come_call_finalizer3(prev_it_387,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_383=it_383->next;
                i_386++;
            }
        }
        if(        head_prev_it_384!=((void*)0)) {
            head_prev_it_384->next=tail_it_385;
        }
        if(        tail_it_385!=((void*)0)) {
            tail_it_385->prev=head_prev_it_384;
        }
    }
    __result_obj__231 = self;
    return __result_obj__231;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_375;
struct list_item$1char$ph* prev_it_376;
struct list$1char$ph* __result_obj__230;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        /*c*/ come_call_finalizer3(prev_it_376,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__230 = self;
    return __result_obj__230;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_389;
char* __result_obj__233;
char* __result_obj__234;
char* result_390;
char* __result_obj__235;
result_389 = (void*)0;
result_390 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_389,0,sizeof(char*));
        __result_obj__233 = result_389;
        return __result_obj__233;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__234 = self->it->item;
        return __result_obj__234;
    }
    memset(&result_390,0,sizeof(char*));
    __result_obj__235 = result_390;
    return __result_obj__235;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_392;
char* __result_obj__236;
char* __result_obj__237;
char* result_393;
char* __result_obj__238;
result_392 = (void*)0;
result_393 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_392,0,sizeof(char*));
        __result_obj__236 = result_392;
        return __result_obj__236;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__237 = self->it->item;
        return __result_obj__237;
    }
    memset(&result_393,0,sizeof(char*));
    __result_obj__238 = result_393;
    return __result_obj__238;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value308 = (void*)0;
struct sLineNode* __result_obj__241;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value308,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__241 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__242;
    __result_obj__242 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sLineNode"))));
    (__right_value309 = come_decrement_ref_count(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value312 = (void*)0;
char* __dec_obj63;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__243;
    come_value_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 277, "struct CVALUE*"))));
    __dec_obj63=come_value_401->c_value,
    come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj64=come_value_401->type,
    come_value_401->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 280, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_401->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_401));
    add_come_last_code(info,"%s",come_value_401->c_value);
    __result_obj__243 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_401,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value316 = (void*)0;
struct sSNameNode* __result_obj__244;
    ((struct sNodeBase*)(__right_value316=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value316,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__244 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value317 = (void*)0;
char* __result_obj__245;
    __result_obj__245 = come_increment_ref_count(((char*)(__right_value317=__builtin_string("sSNameNode"))));
    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__245;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value320 = (void*)0;
char* __dec_obj65;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__246;
    come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 305, "struct CVALUE*"))));
    __dec_obj65=come_value_402->c_value,
    come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj66=come_value_402->type,
    come_value_402->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 308, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_402->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
    add_come_last_code(info,"%s",come_value_402->c_value);
    __result_obj__246 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_402,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value324 = (void*)0;
struct sFuncNode* __result_obj__247;
    ((struct sNodeBase*)(__right_value324=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value324,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__247 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__247,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value325 = (void*)0;
char* __result_obj__248;
    __result_obj__248 = come_increment_ref_count(((char*)(__right_value325=__builtin_string("sFuncNode"))));
    (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__248;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value328 = (void*)0;
char* __dec_obj67;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__249;
    come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 333, "struct CVALUE*"))));
    __dec_obj67=come_value_403->c_value,
    come_value_403->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj68=come_value_403->type,
    come_value_403->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 336, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_403->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
    add_come_last_code(info,"%s",come_value_403->c_value);
    __result_obj__249 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_403,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value332 = (void*)0;
struct sWildCard* __result_obj__250;
    ((struct sNodeBase*)(__right_value332=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value332,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__250 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__250,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value333 = (void*)0;
char* __result_obj__251;
    __result_obj__251 = come_increment_ref_count(((char*)(__right_value333=__builtin_string("sWildCard"))));
    (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__251 = come_decrement_ref_count(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* value_node_404;
_Bool Value_405;
_Bool __result_obj__252;
_Bool __result_obj__253;
    value_node_404=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value334=xsprintf("Value"))),info));
    (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_405=node_compile(value_node_404,info);
    if(    !Value_405) {
        __result_obj__252 = (_Bool)0;
        ((value_node_404) ? value_node_404 = come_decrement_ref_count(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__252;
    }
    else {
    }
    __result_obj__253 = (_Bool)1;
    ((value_node_404) ? value_node_404 = come_decrement_ref_count(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__253;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value336 = (void*)0;
struct sCallerFuncNode* __result_obj__254;
    ((struct sNodeBase*)(__right_value336=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value336,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__254 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__254,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value337 = (void*)0;
char* __result_obj__255;
    __result_obj__255 = come_increment_ref_count(((char*)(__right_value337=__builtin_string("sCallerFuncNode"))));
    (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_406;
void* __right_value340 = (void*)0;
char* __dec_obj69;
void* __right_value341 = (void*)0;
char* __dec_obj70;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__256;
    come_value_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 385, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj69=come_value_406->c_value,
        come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj70=come_value_406->c_value,
        come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj71=come_value_406->type,
    come_value_406->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 393, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_406->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_406));
    add_come_last_code(info,"%s",come_value_406->c_value);
    __result_obj__256 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_406,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value345 = (void*)0;
struct sCallerLineNode* __result_obj__257;
    ((struct sNodeBase*)(__right_value345=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value345,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__257 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct CVALUE* come_value_407;
void* __right_value348 = (void*)0;
char* __dec_obj72;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__258;
    come_value_407=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 414, "struct CVALUE*"))));
    __dec_obj72=come_value_407->c_value,
    come_value_407->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj73=come_value_407->type,
    come_value_407->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 417, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_407->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_407));
    add_come_last_code(info,"%s",come_value_407->c_value);
    __result_obj__258 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value352 = (void*)0;
char* __result_obj__259;
    __result_obj__259 = come_increment_ref_count(((char*)(__right_value352=__builtin_string("sCallerLineNode"))));
    (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value353 = (void*)0;
struct sCallerSNameNode* __result_obj__260;
    ((struct sNodeBase*)(__right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value353,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__260 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value356 = (void*)0;
char* __dec_obj74;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__261;
    come_value_408=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 442, "struct CVALUE*"))));
    __dec_obj74=come_value_408->c_value,
    come_value_408->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value_408->type,
    come_value_408->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 445, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_408->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_408));
    add_come_last_code(info,"%s",come_value_408->c_value);
    __result_obj__261 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value360 = (void*)0;
char* __result_obj__262;
    __result_obj__262 = come_increment_ref_count(((char*)(__right_value360=__builtin_string("sCallerSNameNode"))));
    (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__262 = come_decrement_ref_count(__result_obj__262, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__262;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* __dec_obj76;
void* __right_value373 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj82;
struct list$1sType$ph* __dec_obj83;
struct buffer* __dec_obj84;
struct sFunCallNode* __result_obj__269;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value361,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj76=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj82=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    /*b*/ come_call_finalizer3(__dec_obj82,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj83=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj83,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj84=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /*b*/ come_call_finalizer3(__dec_obj84,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__269 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__269,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value374 = (void*)0;
char* __result_obj__270;
    __result_obj__270 = come_increment_ref_count(((char*)(__right_value374=__builtin_string("sFunCallNode"))));
    (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__270 = come_decrement_ref_count(__result_obj__270, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__270;
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
char* fun_name_419;
struct list$1tuple2$2char$phsNode$ph$ph* params_420;
struct buffer* method_block_421;
int method_block_sline_422;
struct sVar* var__423;
struct sType* lambda_type_424;
void* __right_value375 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_425=0;
char* Err_426=0;
_Bool _if_conditional3;
_Bool __result_obj__271;
void* __right_value376 = (void*)0;
struct sType* result_type_427;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1CVALUE$ph* come_params_428;
void* __right_value379 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_431=0;
char* Err_432=0;
_Bool _if_conditional4;
_Bool __result_obj__273;
int i_433;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_434;
struct tuple2$2char$phsNode$ph* it_437;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_440=0;
struct sNode* node_441=0;
_Bool Value_442;
_Bool __result_obj__280;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value381 = (void*)0;
_Bool _if_conditional5;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_447=0;
char* Err_448=0;
_Bool _if_conditional6;
_Bool __result_obj__283;
void* __right_value387 = (void*)0;
_Bool _if_conditional7;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* buf_449;
int j_450;
struct list$1CVALUE$ph* o2_saved_451;
struct CVALUE* it_454;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value393 = (void*)0;
char* __dec_obj85;
void* __right_value394 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__290;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sGenericsFun* generics_fun_458;
_Bool method_generics_461;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1sType$ph* method_generics_types_462;
void* __right_value399 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_463=0;
struct sGenericsFun* gfun_464=0;
char* generics_fun_name_465;
void* __right_value400 = (void*)0;
struct sFun* fun_466;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct list$1CVALUE$ph* come_params_469;
void* __right_value403 = (void*)0;
struct sFun* fun_470;
_Bool no_output_come_code_471;
_Bool __result_obj__299;
void* __right_value404 = (void*)0;
struct CVALUE* method_block_node_472;
void* __right_value405 = (void*)0;
struct sType* method_block_lambda_type_476;
void* __right_value406 = (void*)0;
struct sType* method_block_result_type_477;
void* __right_value407 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_478;
struct sType* generics_fun_method_block_result_type_479;
int method_generics_num_480;
void* __right_value411 = (void*)0;
int n_489;
struct list$1sType$ph* o2_saved_490;
struct sType* it_493;
int method_generics_num_496;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct list$1CVALUE$ph* come_params_497;
int i_498;
struct sType* result_type_499;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_500;
struct tuple2$2char$phsNode$ph* it_501;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_502=0;
struct sNode* node_503=0;
_Bool Value_504;
_Bool __result_obj__311;
void* __right_value416 = (void*)0;
struct CVALUE* come_value_505;
int method_generics_num_509;
void* __right_value420 = (void*)0;
int n_510;
struct list$1sType$ph* o2_saved_511;
struct sType* it_512;
int method_generics_num_513;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_516=0;
struct sGenericsFun* gfun_517=0;
char* __dec_obj94;
void* __right_value424 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_518=0;
struct sGenericsFun* gfun_519=0;
char* __dec_obj95;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct list$1CVALUE$ph* come_params_520;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_521;
struct tuple2$2char$phsNode$ph* it_522;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_523=0;
struct sNode* node_524=0;
_Bool Value_525;
_Bool __result_obj__314;
void* __right_value427 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct buffer* buf_527;
int j_528;
struct list$1CVALUE$ph* o2_saved_529;
struct CVALUE* it_530;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct CVALUE* come_value_531;
void* __right_value432 = (void*)0;
char* __dec_obj96;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* __dec_obj97;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sType* __dec_obj98;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sType* __dec_obj99;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* __dec_obj100;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* __dec_obj101;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sType* __dec_obj102;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* __dec_obj103;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* __dec_obj104;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* __dec_obj105;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* __dec_obj106;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj107;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sType* __dec_obj108;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __dec_obj109;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* __dec_obj110;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* __dec_obj111;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj112;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj113;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj114;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj115;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj116;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj117;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj118;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj119;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj120;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj121;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj122;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj123;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj124;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj125;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj126;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj127;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj128;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj129;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj130;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj131;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj132;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj133;
_Bool __result_obj__315;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1CVALUE$ph* come_params_532;
int i_533;
struct sType* result_type_534;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_535;
struct tuple2$2char$phsNode$ph* it_536;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_537=0;
struct sNode* node_538=0;
_Bool Value_539;
_Bool __result_obj__316;
void* __right_value537 = (void*)0;
struct CVALUE* come_value_540;
struct sType* __dec_obj134;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct buffer* buf_541;
int j_542;
struct list$1CVALUE$ph* o2_saved_543;
struct CVALUE* it_544;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct CVALUE* come_value_545;
void* __right_value542 = (void*)0;
char* __dec_obj135;
struct sType* __dec_obj136;
_Bool __result_obj__317;
void* __right_value543 = (void*)0;
char* __dec_obj137;
void* __right_value544 = (void*)0;
char* __dec_obj138;
char* p_546;
int version_547;
char* p2_548;
int i_550;
void* __right_value545 = (void*)0;
char* new_fun_name_551;
void* __right_value546 = (void*)0;
_Bool _if_conditional8;
void* __right_value547 = (void*)0;
char* __dec_obj139;
void* __right_value548 = (void*)0;
char* new_fun_name_555;
void* __right_value549 = (void*)0;
_Bool _if_conditional9;
void* __right_value550 = (void*)0;
char* __dec_obj140;
void* __right_value551 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_556=0;
char* Err_557=0;
_Bool _if_conditional10;
_Bool __result_obj__322;
int i_558;
void* __right_value552 = (void*)0;
char* new_fun_name_559;
void* __right_value553 = (void*)0;
_Bool _if_conditional11;
void* __right_value554 = (void*)0;
char* __dec_obj141;
void* __right_value555 = (void*)0;
struct sFun* fun_560;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1CVALUE$ph* come_params_561;
int i_562;
struct sType* result_type_563;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_564;
struct tuple2$2char$phsNode$ph* it_565;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_566=0;
struct sNode* node_567=0;
_Bool Value_568;
_Bool __result_obj__323;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_569;
struct sType* __dec_obj142;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct buffer* buf_570;
int j_571;
struct list$1CVALUE$ph* o2_saved_572;
struct CVALUE* it_573;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct CVALUE* come_value_574;
void* __right_value563 = (void*)0;
char* __dec_obj143;
struct sType* __dec_obj144;
_Bool __result_obj__324;
void* __right_value564 = (void*)0;
struct sType* result_type_575;
_Bool in_exception_value_576;
void* __right_value571 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* new_node_577;
_Bool Value_579;
_Bool __result_obj__327;
_Bool __result_obj__328;
_Bool in_exception_value_580;
void* __right_value574 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* new_node_581;
_Bool Value_582;
_Bool __result_obj__329;
_Bool __result_obj__330;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1sType$ph* param_types_583;
struct list$1sType$ph* o2_saved_584;
struct sType* it_585;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* it2_586;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sType* __dec_obj150;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct list$1CVALUE$ph* come_params_587;
int i_588;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_589;
struct tuple2$2char$phsNode$ph* it_590;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_591=0;
struct sNode* node_592=0;
_Bool Value_593;
_Bool __result_obj__331;
void* __right_value585 = (void*)0;
struct CVALUE* come_value_594;
int n_595;
struct list$1char$ph* o2_saved_596;
char* it_597;
void* __right_value586 = (void*)0;
_Bool _if_conditional12;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_598=0;
char* Err_599=0;
_Bool _if_conditional13;
_Bool __result_obj__332;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
_Bool _if_conditional14;
void* __right_value594 = (void*)0;
int i_605;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_606;
struct tuple2$2char$phsNode$ph* it_607;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_608=0;
struct sNode* node_609=0;
_Bool Value_610;
_Bool __result_obj__335;
void* __right_value595 = (void*)0;
struct CVALUE* come_value_611;
void* __right_value596 = (void*)0;
_Bool _if_conditional15;
_Bool Value_612;
_Bool __result_obj__336;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_613;
void* __right_value598 = (void*)0;
_Bool _if_conditional16;
void* __right_value599 = (void*)0;
_Bool _if_conditional17;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_614=0;
char* Err_615=0;
_Bool _if_conditional18;
_Bool __result_obj__337;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
_Bool _if_conditional19;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
_Bool _if_conditional20;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
char* default_param_616;
void* __right_value611 = (void*)0;
char* param_name_620;
void* __right_value612 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_621;
char* p_622;
char* head_623;
int sline_624;
void* __right_value613 = (void*)0;
struct buffer* __dec_obj152;
void* __right_value614 = (void*)0;
struct sNode* node_625;
_Bool Value_626;
_Bool __result_obj__340;
struct buffer* __dec_obj153;
void* __right_value615 = (void*)0;
struct CVALUE* come_value_627;
void* __right_value616 = (void*)0;
_Bool _if_conditional22;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_628=0;
char* Err_629=0;
_Bool _if_conditional23;
_Bool __result_obj__341;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
_Bool _if_conditional24;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
_Bool _if_conditional25;
void* __right_value626 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_630=0;
char* Err_631=0;
_Bool _if_conditional26;
_Bool __result_obj__342;
void* __right_value627 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_632=0;
char* Err_633=0;
_Bool _if_conditional27;
_Bool __result_obj__343;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value632 = (void*)0;
struct sNode* current_stack_frame_node_634;
_Bool Value_636;
_Bool __result_obj__346;
void* __right_value633 = (void*)0;
struct CVALUE* come_value_637;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct buffer* method_block2_638;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sType* method_block_type_639;
void* __right_value638 = (void*)0;
char* class_name_640;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sClass* current_stack_frame_struct_644;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_645=0;
char* Err_646=0;
_Bool _if_conditional28;
_Bool __result_obj__351;
void* __right_value643 = (void*)0;
struct sType* result_type_647;
void* __right_value644 = (void*)0;
struct list$1sType$ph* param_types_648;
struct list$1char$ph* param_names_649;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct buffer* all_alhabet_sname_650;
char* p_651;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sType$ph* o2_saved_652;
struct sType* it_653;
struct sType* param_type_654;
void* __right_value649 = (void*)0;
char* param_name_655;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
char* param_name_656;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* param_name_657;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct buffer* source3_658;
char* p_659;
char* head_660;
int sline_661;
struct buffer* __dec_obj155;
void* __right_value656 = (void*)0;
struct sNode* node_662;
_Bool Value_663;
_Bool __result_obj__352;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* method_block_name_664;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct CVALUE* come_value2_665;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sFun* fun2_666;
void* __right_value663 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_667=0;
char* Err_668=0;
_Bool _if_conditional29;
_Bool __result_obj__353;
struct sType* method_block_type2_669;
void* __right_value664 = (void*)0;
char* __dec_obj156;
void* __right_value665 = (void*)0;
struct sType* __dec_obj157;
struct buffer* __dec_obj158;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct buffer* buf_670;
int j_671;
struct list$1CVALUE$ph* o2_saved_672;
struct CVALUE* it_673;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct CVALUE* come_value_674;
void* __right_value670 = (void*)0;
char* __dec_obj159;
void* __right_value671 = (void*)0;
struct sType* __dec_obj160;
void* __right_value672 = (void*)0;
char* __dec_obj161;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
char* __dec_obj162;
_Bool __result_obj__354;
memset(&i_550, 0, sizeof(int));
    fun_name_419=(char*)come_increment_ref_count(self->fun_name);
    params_420=self->params;
    method_block_421=self->method_block;
    method_block_sline_422=self->method_block_sline;
    var__423=get_variable_from_table(info->lv_table,fun_name_419);
    if(    var__423==((void*)0)) {
        var__423=get_variable_from_table(info->gv_table,fun_name_419);
    }
    if(    var__423) {
        lambda_type_424=var__423->mType;
        if(        string_operator_not_equals(lambda_type_424->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value375=err_msg(info,"%s is not lambda, can't call",fun_name_419)));
            come_exception_var_2_425=multiple_assign_var2->v1;
            Err_426=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_426)),            /*c*/ come_call_finalizer3(__right_value375,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __result_obj__271 = (_Bool)1;
                (Err_426 = come_decrement_ref_count(Err_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__271;
            }
            else {
            }
            (Err_426 = come_decrement_ref_count(Err_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_424->mResultType));
        result_type_427->mStatic=(_Bool)0;
        come_params_428=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 517, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_424->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_420)&&!lambda_type_424->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value379=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_419,list$1sType$ph_length(lambda_type_424->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_420))));
            come_exception_var_3_431=multiple_assign_var3->v1;
            Err_432=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_432)),            /*c*/ come_call_finalizer3(__right_value379,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__273 = (_Bool)1;
                (Err_432 = come_decrement_ref_count(Err_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_427,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_428,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__273;
            }
            else {
            }
            (Err_432 = come_decrement_ref_count(Err_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_433=0;
        for(        o2_saved_434=(params_420),it_437=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_434));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_434));        it_437=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_434))        ){
            multiple_assign_var4=it_437;
            label_440=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_441=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_442=node_compile(node_441,info);
            if(            !Value_442) {
                __result_obj__280 = (_Bool)0;
                (label_440 = come_decrement_ref_count(label_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_441) ? node_441 = come_decrement_ref_count(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_427,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_428,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__280;
            }
            else {
            }
            come_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_424->mVarArgs&&((struct sType*)(__right_value381=list$1sType$ph$p_operator_load_element(lambda_type_424->mParamTypes,i_433)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value381,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value386=check_assign_type(((char*)(__right_value384=xsprintf("\%s calling param #\%s",((char*)(__right_value382=string_to_string(fun_name_419))),((char*)(__right_value383=int_to_string(i_433)))))),((struct sType*)(__right_value385=list$1sType$ph$p_operator_load_element(lambda_type_424->mParamTypes,i_433))),come_value_443->type,come_value_443,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_4_447=multiple_assign_var5->v1;
                Err_448=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_448)),                (__right_value382 = come_decrement_ref_count(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value383 = come_decrement_ref_count(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value385,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value386,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional6) {
                    __result_obj__283 = (_Bool)1;
                    (Err_448 = come_decrement_ref_count(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_440 = come_decrement_ref_count(label_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_441) ? node_441 = come_decrement_ref_count(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_443,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_427,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_428,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__283;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)(__right_value387=list$1sType$ph$p_operator_load_element(lambda_type_424->mParamTypes,i_433)))->mHeap&&come_value_443->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value387,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)(__right_value388=list$1sType$ph$p_operator_load_element(lambda_type_424->mParamTypes,i_433))),come_value_443->type,come_value_443,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value388,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                (Err_448 = come_decrement_ref_count(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(come_params_428,(struct CVALUE*)come_increment_ref_count(come_value_443));
            i_433++;
            (label_440 = come_decrement_ref_count(label_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_441) ? node_441 = come_decrement_ref_count(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_443,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 552, "struct buffer*"))));
        buffer_append_str(buf_449,var__423->mCValueName);
        buffer_append_str(buf_449,"(");
        j_450=0;
        for(        o2_saved_451=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_428)),it_454=list$1CVALUE$ph_begin((o2_saved_451));        !list$1CVALUE$ph_end((o2_saved_451));        it_454=list$1CVALUE$ph_next((o2_saved_451))        ){
            buffer_append_str(buf_449,it_454->c_value);
            if(            j_450!=list$1CVALUE$ph_length(come_params_428)-1) {
                buffer_append_str(buf_449,",");
            }
            j_450++;
        }
        /*c*/ come_call_finalizer3(o2_saved_451,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_449,")");
        come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 569, "struct CVALUE*"))));
        __dec_obj85=come_value_457->c_value,
        come_value_457->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_449));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj86=come_value_457->type,
        come_value_457->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_427));
        /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_457->type->mStatic=(_Bool)0;
        come_value_457->var=((void*)0);
        if(        lambda_type_424->mResultType->mHeap) {
            append_object_to_right_values2(come_value_457,(struct sType*)come_increment_ref_count(lambda_type_424->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_457->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
        info->calling_fun=((void*)0);
        __result_obj__290 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_427,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_428,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_449,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__290;
        /*c*/ come_call_finalizer3(result_type_427,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_428,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_449,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_458=((struct sGenericsFun*)(__right_value396=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value395=__builtin_string(fun_name_419))),((void*)0))));
    (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value396,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_461=(_Bool)0;
    if(    generics_fun_458) {
        method_generics_461=list$1char$ph_length(generics_fun_458->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_461) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_462=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 594, "struct list$1sType$ph*"))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value399=make_method_generics_function((char*)come_increment_ref_count(fun_name_419),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_462),info)));
            name_463=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_464=multiple_assign_var6->v2;
            /*c*/ come_call_finalizer3(__right_value399,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_465=(char*)come_increment_ref_count(name_463);
            fun_466=((struct sFun*)(__right_value400=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_465,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value400,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_421) {
                come_params_469=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 601, "struct list$1CVALUE$ph*"))));
                fun_470=((struct sFun*)(__right_value403=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_465,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value403,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_471=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_421,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_469),fun_470,fun_name_419,method_block_sline_422,info,(_Bool)1)) {
                    __result_obj__299 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_469,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__299;
                }
                info->no_output_come_code=no_output_come_code_471;
                method_block_node_472=((struct CVALUE*)(__right_value404=list$1CVALUE$ph$p_operator_load_element(come_params_469,-1)));
                /*c*/ come_call_finalizer3(__right_value404,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_476=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_472->type));
                method_block_result_type_477=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_478=((struct sType*)(__right_value407=list$1sType$ph$p_operator_load_element(generics_fun_458->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value407,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_479=generics_fun_method_block_lambda_type_478->mResultType;
                if(                generics_fun_method_block_result_type_479->mClass->mMethodGenerics) {
                    method_generics_num_480=generics_fun_method_block_result_type_479->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_480,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_477)));
                }
                n_489=0;
                for(                o2_saved_490=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_478->mParamTypes)),it_493=list$1sType$ph_begin((o2_saved_490));                !list$1sType$ph_end((o2_saved_490));                it_493=list$1sType$ph_next((o2_saved_490))                ){
                    if(                    it_493->mClass->mMethodGenerics) {
                        method_generics_num_496=it_493->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_496,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value412=list$1sType$ph$p_operator_load_element(method_block_lambda_type_476->mParamTypes,n_489))))));
                        /*c*/ come_call_finalizer3(__right_value412,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_489++;
                }
                /*c*/ come_call_finalizer3(o2_saved_490,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_469,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_476,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_477,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_497=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 633, "struct list$1CVALUE$ph*"))));
            i_498=0;
            result_type_499=((void*)0);
            for(            o2_saved_500=(params_420),it_501=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_500));            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_500));            it_501=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_500))            ){
                multiple_assign_var7=it_501;
                label_502=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_503=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_504=node_compile(node_503,info);
                if(                !Value_504) {
                    __result_obj__311 = (_Bool)0;
                    (label_502 = come_decrement_ref_count(label_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_503) ? node_503 = come_decrement_ref_count(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_497,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__311;
                }
                else {
                }
                come_value_505=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUE$ph_add(come_params_497,(struct CVALUE*)come_increment_ref_count(come_value_505));
                (label_502 = come_decrement_ref_count(label_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_503) ? node_503 = come_decrement_ref_count(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_505,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            generics_fun_458->mResultType->mClass->mMethodGenerics) {
                method_generics_num_509=generics_fun_458->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_509,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_510=0;
            for(            o2_saved_511=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_458->mParamTypes)),it_512=list$1sType$ph_begin((o2_saved_511));            !list$1sType$ph_end((o2_saved_511));            it_512=list$1sType$ph_next((o2_saved_511))            ){
                if(                it_512->mClass->mMethodGenerics) {
                    method_generics_num_513=it_512->mClass->mMethodGenericsNum;
                    if(                    n_510<list$1CVALUE$ph_length(come_params_497)) {
                        list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_513,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value421=list$1CVALUE$ph$p_operator_load_element(come_params_497,n_510)))->type)));
                        /*c*/ come_call_finalizer3(__right_value421,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_510++;
            }
            /*c*/ come_call_finalizer3(o2_saved_511,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_465);
            (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value423=make_method_generics_function((char*)come_increment_ref_count(fun_name_419),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_462),info)));
            name_516=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_517=multiple_assign_var8->v2;
            /*c*/ come_call_finalizer3(__right_value423,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj94=fun_name_419,
            fun_name_419=(char*)come_increment_ref_count(name_516);
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_497,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_516 = come_decrement_ref_count(name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value424=make_method_generics_function((char*)come_increment_ref_count(fun_name_419),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_518=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_519=multiple_assign_var9->v2;
            /*c*/ come_call_finalizer3(__right_value424,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj95=fun_name_419,
            fun_name_419=(char*)come_increment_ref_count(name_518);
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_518 = come_decrement_ref_count(name_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_419,"__builtin_memmove")||string_operator_equals(fun_name_419,"__builtin_memset")||string_operator_equals(fun_name_419,"__builtin_ffs")||string_operator_equals(fun_name_419,"__builtin_ffsl")||string_operator_equals(fun_name_419,"__builtin_ffsll")||string_operator_equals(fun_name_419,"__builtin_bswap16")||string_operator_equals(fun_name_419,"__builtin_bswap32")||string_operator_equals(fun_name_419,"__builtin_bswap64")||string_operator_equals(fun_name_419,"__builtin_constant_p")||string_operator_equals(fun_name_419,"__builtin_expect")||string_operator_equals(fun_name_419,"__builtin___memset_chk")||string_operator_equals(fun_name_419,"__builtin_object_size")||string_operator_equals(fun_name_419,"__builtin___memcpy_chk")||string_operator_equals(fun_name_419,"__builtin___strncpy_chk")||string_operator_equals(fun_name_419,"__builtin___strncat_chk")||string_operator_equals(fun_name_419,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_419,"__builtin_strrchr")||string_operator_equals(fun_name_419,"__builtin_clz")||string_operator_equals(fun_name_419,"__dsb")||string_operator_equals(fun_name_419,"__isb")||string_operator_equals(fun_name_419,"__dmb")||(strlen(fun_name_419)==strlen("__builtin_arm_")&&memcmp(fun_name_419,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_419,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_419,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_419,"__c11_atomic_store")||string_operator_equals(fun_name_419,"__c11_atomic_load")||string_operator_equals(fun_name_419,"__c11_atomic_exchange")||string_operator_equals(fun_name_419,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_419,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_419,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_419,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_419,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_419,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_419,"__c11_atomic_fetch_xor")) {
        come_params_520=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 706, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_521=(params_420),it_522=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_521));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_521));        it_522=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_521))        ){
            multiple_assign_var10=it_522;
            label_523=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_524=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_525=node_compile(node_524,info);
            if(            !Value_525) {
                __result_obj__314 = (_Bool)0;
                (label_523 = come_decrement_ref_count(label_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_524) ? node_524 = come_decrement_ref_count(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_520,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__314;
            }
            else {
            }
            come_value_526=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(come_params_520,(struct CVALUE*)come_increment_ref_count(come_value_526));
            (label_523 = come_decrement_ref_count(label_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_524) ? node_524 = come_decrement_ref_count(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_526,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 719, "struct buffer*"))));
        buffer_append_str(buf_527,fun_name_419);
        buffer_append_str(buf_527,"(");
        j_528=0;
        for(        o2_saved_529=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_520)),it_530=list$1CVALUE$ph_begin((o2_saved_529));        !list$1CVALUE$ph_end((o2_saved_529));        it_530=list$1CVALUE$ph_next((o2_saved_529))        ){
            buffer_append_str(buf_527,it_530->c_value);
            if(            j_528!=list$1CVALUE$ph_length(come_params_520)-1) {
                buffer_append_str(buf_527,",");
            }
            j_528++;
        }
        /*c*/ come_call_finalizer3(o2_saved_529,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_527,")");
        come_value_531=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 736, "struct CVALUE*"))));
        __dec_obj96=come_value_531->c_value,
        come_value_531->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_527));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_419,"__builtin_memmove")||string_operator_equals(fun_name_419,"__builtin_memset")) {
            __dec_obj97=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 740, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_ffs")) {
            __dec_obj98=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 743, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_ffsl")) {
            __dec_obj99=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 746, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_ffsll")) {
            __dec_obj100=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 749, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_bswap16")) {
            __dec_obj101=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 752, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_bswap32")) {
            __dec_obj102=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 755, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_bswap64")) {
            __dec_obj103=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 758, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_constant_p")) {
            __dec_obj104=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_expect")) {
            __dec_obj105=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin___memset_chk")) {
            __dec_obj106=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_531->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_object_size")) {
            __dec_obj107=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 771, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin___memcpy_chk")) {
            __dec_obj108=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_531->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_419,"__builtin___strncpy_chk")) {
            __dec_obj109=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_531->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_419,"__builtin___strncat_chk")) {
            __dec_obj110=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_531->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_strrchr")) {
            __dec_obj111=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 786, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_531->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_419,"__builtin___vsnprintf_chk")) {
            __dec_obj112=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 790, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_clz")) {
            __dec_obj113=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 793, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_thread_fence")) {
            __dec_obj114=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 796, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_signal_fence")) {
            __dec_obj115=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_exchange")) {
            __dec_obj116=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value490=list$1CVALUE$ph$p_operator_load_element(come_params_520,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value490,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_exchange_strong")) {
            __dec_obj117=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value492=list$1CVALUE$ph$p_operator_load_element(come_params_520,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value492,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_exchange_weak")) {
            __dec_obj118=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value494=list$1CVALUE$ph$p_operator_load_element(come_params_520,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value494,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_store")) {
            __dec_obj119=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_load")) {
            __dec_obj120=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value499=list$1CVALUE$ph$p_operator_load_element(come_params_520,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value499,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_531->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_fetch_add")) {
            __dec_obj121=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value501=list$1CVALUE$ph$p_operator_load_element(come_params_520,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value501,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_fetch_sub")) {
            __dec_obj122=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value503=list$1CVALUE$ph$p_operator_load_element(come_params_520,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value503,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_fetch_and")) {
            __dec_obj123=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value505=list$1CVALUE$ph$p_operator_load_element(come_params_520,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value505,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_fetch_or")) {
            __dec_obj124=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value507=list$1CVALUE$ph$p_operator_load_element(come_params_520,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value507,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__c11_atomic_fetch_xor")) {
            __dec_obj125=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value509=list$1CVALUE$ph$p_operator_load_element(come_params_520,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value509,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__dsb")) {
            __dec_obj126=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 833, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__isb")) {
            __dec_obj127=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 836, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__dmb")) {
            __dec_obj128=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 839, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_arm_cdp")) {
            __dec_obj129=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 842, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_arm_ldc")) {
            __dec_obj130=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 845, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_arm_stc")) {
            __dec_obj131=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 848, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_arm_stcl")) {
            __dec_obj132=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_419,"__builtin_arm_ldcl")) {
            __dec_obj133=come_value_531->type,
            come_value_531->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_531->var=((void*)0);
        add_come_last_code(info,"%s",come_value_531->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_531));
        __result_obj__315 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_520,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_527,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__315;
        /*c*/ come_call_finalizer3(come_params_520,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_527,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_419,"__builtin_va_arg")) {
        come_params_532=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 866, "struct list$1CVALUE$ph*"))));
        i_533=0;
        result_type_534=((void*)0);
        for(        o2_saved_535=(params_420),it_536=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_535));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_535));        it_536=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_535))        ){
            multiple_assign_var11=it_536;
            label_537=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_538=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_539=node_compile(node_538,info);
            if(            !Value_539) {
                __result_obj__316 = (_Bool)0;
                (label_537 = come_decrement_ref_count(label_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_538) ? node_538 = come_decrement_ref_count(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_532,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_534,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__316;
            }
            else {
            }
            come_value_540=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_532,(struct CVALUE*)come_increment_ref_count(come_value_540));
            __dec_obj134=result_type_534,
            result_type_534=(struct sType*)come_increment_ref_count(come_value_540->type);
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_537 = come_decrement_ref_count(label_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_538) ? node_538 = come_decrement_ref_count(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_540,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_541=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 884, "struct buffer*"))));
        buffer_append_str(buf_541,fun_name_419);
        buffer_append_str(buf_541,"(");
        j_542=0;
        for(        o2_saved_543=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_532)),it_544=list$1CVALUE$ph_begin((o2_saved_543));        !list$1CVALUE$ph_end((o2_saved_543));        it_544=list$1CVALUE$ph_next((o2_saved_543))        ){
            buffer_append_str(buf_541,it_544->c_value);
            if(            j_542!=list$1CVALUE$ph_length(come_params_532)-1) {
                buffer_append_str(buf_541,",");
            }
            j_542++;
        }
        /*c*/ come_call_finalizer3(o2_saved_543,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_541,")");
        come_value_545=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 901, "struct CVALUE*"))));
        __dec_obj135=come_value_545->c_value,
        come_value_545->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_541));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj136=come_value_545->type,
        come_value_545->type=(struct sType*)come_increment_ref_count(result_type_534);
        /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_545->var=((void*)0);
        add_come_last_code(info,"%s",come_value_545->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_545));
        __result_obj__317 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_532,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_534,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_541,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_545,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__317;
        /*c*/ come_call_finalizer3(come_params_532,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_534,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_541,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_545,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_419,"string")) {
        __dec_obj137=fun_name_419,
        fun_name_419=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_419,"wstring")) {
        __dec_obj138=fun_name_419,
        fun_name_419=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_419,"inherit")) {
        p_546=info->come_fun->mName;
        version_547=0;
        while(*p_546) {
            if(            *p_546==95&&*(p_546+1)==118&&xisdigit(*(p_546+2))) {
                p2_548=p_546+2;
                version_547=0;
                while(xisdigit(*p2_548)) {
                    version_547=version_547*10+(*p2_548-48);
                    p2_548++;
                }
                break;
            }
            else {
                p_546++;
            }
        }
        char real_fun_name_549[2048];
        memset(&real_fun_name_549, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_549,info->come_fun->mName,p_546-info->come_fun->mName);
        real_fun_name_549[p_546-info->come_fun->mName]=0;
        for(        i_550=version_547-1;        i_550>=1;        i_550--        ){
            new_fun_name_551=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_549,i_550));
            if(            (_if_conditional8=(((struct sFun*)(__right_value546=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_551))))),            /*c*/ come_call_finalizer3(__right_value546,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional8) {
                __dec_obj139=fun_name_419,
                fun_name_419=(char*)come_increment_ref_count(__builtin_string(new_fun_name_551));
                __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_551 = come_decrement_ref_count(new_fun_name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_551 = come_decrement_ref_count(new_fun_name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_550==0) {
            new_fun_name_555=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_549));
            if(            (_if_conditional9=(((struct sFun*)(__right_value549=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_555))))),            /*c*/ come_call_finalizer3(__right_value549,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __dec_obj140=fun_name_419,
                fun_name_419=(char*)come_increment_ref_count(__builtin_string(new_fun_name_555));
                __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_419,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value551=err_msg(info,"invalid inherit")));
                come_exception_var_5_556=multiple_assign_var12->v1;
                Err_557=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_557)),                /*c*/ come_call_finalizer3(__right_value551,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    __result_obj__322 = (_Bool)1;
                    (Err_557 = come_decrement_ref_count(Err_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_555 = come_decrement_ref_count(new_fun_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__322;
                }
                else {
                }
                (Err_557 = come_decrement_ref_count(Err_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_555 = come_decrement_ref_count(new_fun_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_558=128;        i_558>=1;        i_558--        ){
            new_fun_name_559=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_419,i_558));
            if(            (_if_conditional11=(((struct sFun*)(__right_value553=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_559))))),            /*c*/ come_call_finalizer3(__right_value553,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                __dec_obj141=fun_name_419,
                fun_name_419=(char*)come_increment_ref_count(__builtin_string(new_fun_name_559));
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_559 = come_decrement_ref_count(new_fun_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_559 = come_decrement_ref_count(new_fun_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_560=((struct sFun*)(__right_value555=map$2char$phsFun$ph_at(info->funcs,fun_name_419,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value555,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_560==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_419);
        come_params_561=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 983, "struct list$1CVALUE$ph*"))));
        i_562=0;
        result_type_563=((void*)0);
        for(        o2_saved_564=(params_420),it_565=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_564));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_564));        it_565=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_564))        ){
            multiple_assign_var13=it_565;
            label_566=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_567=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_568=node_compile(node_567,info);
            if(            !Value_568) {
                __result_obj__323 = (_Bool)0;
                (label_566 = come_decrement_ref_count(label_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_567) ? node_567 = come_decrement_ref_count(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_561,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_563,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__323;
            }
            else {
            }
            come_value_569=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_561,(struct CVALUE*)come_increment_ref_count(come_value_569));
            __dec_obj142=result_type_563,
            result_type_563=(struct sType*)come_increment_ref_count(come_value_569->type);
            /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_566 = come_decrement_ref_count(label_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_567) ? node_567 = come_decrement_ref_count(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_569,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_570=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1001, "struct buffer*"))));
        buffer_append_str(buf_570,fun_name_419);
        buffer_append_str(buf_570,"(");
        j_571=0;
        for(        o2_saved_572=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_561)),it_573=list$1CVALUE$ph_begin((o2_saved_572));        !list$1CVALUE$ph_end((o2_saved_572));        it_573=list$1CVALUE$ph_next((o2_saved_572))        ){
            buffer_append_str(buf_570,it_573->c_value);
            if(            j_571!=list$1CVALUE$ph_length(come_params_561)-1) {
                buffer_append_str(buf_570,",");
            }
            j_571++;
        }
        /*c*/ come_call_finalizer3(o2_saved_572,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_570,")");
        come_value_574=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1018, "struct CVALUE*"))));
        __dec_obj143=come_value_574->c_value,
        come_value_574->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_570));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj144=come_value_574->type,
        come_value_574->type=(struct sType*)come_increment_ref_count(result_type_563);
        /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_574->var=((void*)0);
        add_come_last_code(info,"%s",come_value_574->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_574));
        __result_obj__324 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_561,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_563,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_570,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_574,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__324;
        /*c*/ come_call_finalizer3(come_params_561,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_563,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_570,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_574,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_575=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_560->mResultType));
    result_type_575->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_575->mException&&!info->in_exception_value) {
        in_exception_value_576=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1036, "struct sNode");
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value571=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_577=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        /*c*/ come_call_finalizer3(__right_value571,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_579=node_compile(new_node_577,info);
        if(        !Value_579) {
            __result_obj__327 = (_Bool)0;
            ((new_node_577) ? new_node_577 = come_decrement_ref_count(new_node_577, ((struct sNode*)new_node_577)->finalize, ((struct sNode*)new_node_577)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__327;
        }
        else {
        }
        info->in_exception_value=in_exception_value_576;
        __result_obj__328 = (_Bool)1;
        ((new_node_577) ? new_node_577 = come_decrement_ref_count(new_node_577, ((struct sNode*)new_node_577)->finalize, ((struct sNode*)new_node_577)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__328;
        ((new_node_577) ? new_node_577 = come_decrement_ref_count(new_node_577, ((struct sNode*)new_node_577)->finalize, ((struct sNode*)new_node_577)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_575->mException&&!info->in_exception_value) {
        in_exception_value_580=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1048, "struct sNode");
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value574=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_581=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        /*c*/ come_call_finalizer3(__right_value574,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_582=node_compile(new_node_581,info);
        if(        !Value_582) {
            __result_obj__329 = (_Bool)0;
            ((new_node_581) ? new_node_581 = come_decrement_ref_count(new_node_581, ((struct sNode*)new_node_581)->finalize, ((struct sNode*)new_node_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__329;
        }
        else {
        }
        info->in_exception_value=in_exception_value_580;
        __result_obj__330 = (_Bool)1;
        ((new_node_581) ? new_node_581 = come_decrement_ref_count(new_node_581, ((struct sNode*)new_node_581)->finalize, ((struct sNode*)new_node_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__330;
        ((new_node_581) ? new_node_581 = come_decrement_ref_count(new_node_581, ((struct sNode*)new_node_581)->finalize, ((struct sNode*)new_node_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_583=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1058, "struct list$1sType$ph*"))));
    for(    o2_saved_584=(struct list$1sType$ph*)come_increment_ref_count((fun_560->mParamTypes)),it_585=list$1sType$ph_begin((o2_saved_584));    !list$1sType$ph_end((o2_saved_584));    it_585=list$1sType$ph_next((o2_saved_584))    ){
        it2_586=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value579=come_call_cloner(sType_clone, it_585))),info->generics_type,info));
        /*c*/ come_call_finalizer3(__right_value579,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_583,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_586)));
        /*c*/ come_call_finalizer3(it2_586,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_584,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj150=result_type_575,
    result_type_575=(struct sType*)come_increment_ref_count(solve_generics(result_type_575,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_587=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1066, "struct list$1CVALUE$ph*"))));
    for(    i_588=0;    i_588<list$1sType$ph_length(fun_560->mParamTypes)-(((method_block_421)?(2):(0)));    i_588++    ){
        list$1CVALUE$ph_add(come_params_587,((void*)0));
    }
    for(    o2_saved_589=(params_420),it_590=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_589));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_589));    it_590=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_589))    ){
        multiple_assign_var14=it_590;
        label_591=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_592=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_560->mVarArgs||string_operator_equals(fun_name_419,"__builtin_va_start")) {
        }
        else if(        label_591) {
            Value_593=node_compile(node_592,info);
            if(            !Value_593) {
                __result_obj__331 = (_Bool)0;
                (label_591 = come_decrement_ref_count(label_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_592) ? node_592 = come_decrement_ref_count(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__331;
            }
            else {
            }
            come_value_594=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            n_595=0;
            for(            o2_saved_596=(struct list$1char$ph*)come_increment_ref_count((fun_560->mParamNames)),it_597=list$1char$ph_begin((o2_saved_596));            !list$1char$ph_end((o2_saved_596));            it_597=list$1char$ph_next((o2_saved_596))            ){
                if(                string_operator_equals(label_591,it_597)) {
                    break;
                }
                n_595++;
            }
            /*c*/ come_call_finalizer3(o2_saved_596,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional12=(((struct sType*)(__right_value586=list$1sType$ph$p_operator_load_element(param_types_583,n_595))))),            /*c*/ come_call_finalizer3(__right_value586,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value591=check_assign_type(((char*)(__right_value589=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value587=string_to_string(fun_name_419))),((char*)(__right_value588=int_to_string(n_595)))))),((struct sType*)(__right_value590=list$1sType$ph$p_operator_load_element(param_types_583,n_595))),come_value_594->type,come_value_594,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_6_598=multiple_assign_var15->v1;
                Err_599=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_599)),                (__right_value587 = come_decrement_ref_count(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value588 = come_decrement_ref_count(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value589 = come_decrement_ref_count(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value590,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value591,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional13) {
                    __result_obj__332 = (_Bool)1;
                    (Err_599 = come_decrement_ref_count(Err_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_594,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_591 = come_decrement_ref_count(label_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_592) ? node_592 = come_decrement_ref_count(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__332;
                }
                else {
                }
                (Err_599 = come_decrement_ref_count(Err_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)(__right_value592=list$1sType$ph$p_operator_load_element(param_types_583,n_595)))&&((struct sType*)(__right_value593=list$1sType$ph$p_operator_load_element(param_types_583,n_595)))->mHeap&&come_value_594->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value592,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value593,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)(__right_value594=list$1sType$ph$p_operator_load_element(param_types_583,n_595))),come_value_594->type,come_value_594,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value594,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_587,n_595,(struct CVALUE*)come_increment_ref_count(come_value_594));
            /*c*/ come_call_finalizer3(come_value_594,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_591 = come_decrement_ref_count(label_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_592) ? node_592 = come_decrement_ref_count(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_605=0;
    for(    o2_saved_606=(params_420),it_607=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_606));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_606));    it_607=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_606))    ){
        multiple_assign_var16=it_607;
        label_608=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_609=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_560->mVarArgs||string_operator_equals(fun_name_419,"__builtin_va_start")) {
            Value_610=node_compile(node_609,info);
            if(            !Value_610) {
                __result_obj__335 = (_Bool)0;
                (label_608 = come_decrement_ref_count(label_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_609) ? node_609 = come_decrement_ref_count(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__335;
            }
            else {
            }
            come_value_611=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value596=list$1CVALUE$ph$p_operator_load_element(come_params_587,i_605)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value596,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_605++;
                }
            }
            list$1CVALUE$ph_replace(come_params_587,i_605,(struct CVALUE*)come_increment_ref_count(come_value_611));
            i_605++;
            /*c*/ come_call_finalizer3(come_value_611,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_608) {
        }
        else {
            Value_612=node_compile(node_609,info);
            if(            !Value_612) {
                __result_obj__336 = (_Bool)0;
                (label_608 = come_decrement_ref_count(label_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_609) ? node_609 = come_decrement_ref_count(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__336;
            }
            else {
            }
            come_value_613=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value598=list$1CVALUE$ph$p_operator_load_element(come_params_587,i_605)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value598,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_605++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)(__right_value599=list$1sType$ph$p_operator_load_element(param_types_583,i_605))))),            /*c*/ come_call_finalizer3(__right_value599,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value604=check_assign_type(((char*)(__right_value602=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value600=string_to_string(fun_name_419))),((char*)(__right_value601=int_to_string(i_605)))))),((struct sType*)(__right_value603=list$1sType$ph$p_operator_load_element(param_types_583,i_605))),come_value_613->type,come_value_613,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_614=multiple_assign_var17->v1;
                Err_615=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_615)),                (__right_value600 = come_decrement_ref_count(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value601 = come_decrement_ref_count(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value603,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value604,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional18) {
                    __result_obj__337 = (_Bool)1;
                    (Err_615 = come_decrement_ref_count(Err_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_613,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_608 = come_decrement_ref_count(label_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_609) ? node_609 = come_decrement_ref_count(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__337;
                }
                else {
                }
                (Err_615 = come_decrement_ref_count(Err_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)(__right_value605=list$1sType$ph$p_operator_load_element(param_types_583,i_605)))&&((struct sType*)(__right_value606=list$1sType$ph$p_operator_load_element(param_types_583,i_605)))->mHeap&&come_value_613->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value605,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value606,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)(__right_value607=list$1sType$ph$p_operator_load_element(param_types_583,i_605))),come_value_613->type,come_value_613,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value607,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_587,i_605,(struct CVALUE*)come_increment_ref_count(come_value_613));
            i_605++;
            /*c*/ come_call_finalizer3(come_value_613,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_608 = come_decrement_ref_count(label_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_609) ? node_609 = come_decrement_ref_count(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value608=list$1CVALUE$ph$p_operator_load_element(come_params_587,i_605)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value608,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_605++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_420)<list$1sType$ph_length(fun_560->mParamTypes)) {
        for(        ;        i_605<list$1sType$ph_length(fun_560->mParamTypes)-(((method_block_421)?(2):(0)));        i_605++        ){
            default_param_616=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value609=list$1char$ph$p_operator_load_element(fun_560->mParamDefaultParametors,i_605))), "05call.c", 1173, "char*"));
            (__right_value609 = come_decrement_ref_count(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_620=((char*)(__right_value611=list$1char$ph$p_operator_load_element(fun_560->mParamNames,i_605)));
            (__right_value611 = come_decrement_ref_count(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_616&&string_operator_not_equals(default_param_616,"")&&((struct CVALUE*)(__right_value612=list$1CVALUE$ph$p_operator_load_element(come_params_587,i_605)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value612,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional21) {
                source_621=(struct buffer*)come_increment_ref_count(info->source);
                p_622=info->p;
                head_623=info->head;
                sline_624=info->sline;
                __dec_obj152=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_616));
                /*b*/ come_call_finalizer3(__dec_obj152,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_625=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_626=node_compile(node_625,info);
                if(                !Value_626) {
                    __result_obj__340 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_621,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_625) ? node_625 = come_decrement_ref_count(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_616 = come_decrement_ref_count(default_param_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__340;
                }
                else {
                }
                __dec_obj153=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_621);
                /*b*/ come_call_finalizer3(__dec_obj153,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_622;
                info->head=head_623;
                info->sline=sline_624;
                come_value_627=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)(__right_value616=list$1sType$ph$p_operator_load_element(param_types_583,i_605))))),                /*c*/ come_call_finalizer3(__right_value616,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value621=check_assign_type(((char*)(__right_value619=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value617=string_to_string(fun_name_419))),((char*)(__right_value618=int_to_string(i_605)))))),((struct sType*)(__right_value620=list$1sType$ph$p_operator_load_element(param_types_583,i_605))),come_value_627->type,come_value_627,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_8_628=multiple_assign_var18->v1;
                    Err_629=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_629)),                    (__right_value617 = come_decrement_ref_count(__right_value617, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value618 = come_decrement_ref_count(__right_value618, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value619 = come_decrement_ref_count(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value620,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value621,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional23) {
                        __result_obj__341 = (_Bool)1;
                        (Err_629 = come_decrement_ref_count(Err_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(source_621,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_625) ? node_625 = come_decrement_ref_count(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(come_value_627,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (default_param_616 = come_decrement_ref_count(default_param_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__341;
                    }
                    else {
                    }
                    (Err_629 = come_decrement_ref_count(Err_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)(__right_value622=list$1sType$ph$p_operator_load_element(param_types_583,i_605)))&&((struct sType*)(__right_value623=list$1sType$ph$p_operator_load_element(param_types_583,i_605)))->mHeap&&come_value_627->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value622,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value623,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)(__right_value624=list$1sType$ph$p_operator_load_element(param_types_583,i_605))),come_value_627->type,come_value_627,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value624,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_587,i_605,(struct CVALUE*)come_increment_ref_count(come_value_627));
                /*c*/ come_call_finalizer3(source_621,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_625) ? node_625 = come_decrement_ref_count(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_627,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value625=list$1CVALUE$ph$p_operator_load_element(come_params_587,i_605)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value625,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value626=err_msg(info,"require parametor(%s)(1) %d",fun_560->mName,i_605)));
                    come_exception_var_9_630=multiple_assign_var19->v1;
                    Err_631=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_631)),                    /*c*/ come_call_finalizer3(__right_value626,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional26) {
                        __result_obj__342 = (_Bool)1;
                        (Err_631 = come_decrement_ref_count(Err_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_616 = come_decrement_ref_count(default_param_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__342;
                    }
                    else {
                    }
                    (Err_631 = come_decrement_ref_count(Err_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_616 = come_decrement_ref_count(default_param_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_560->mParamTypes)-(((method_block_421)?(2):(0)))!=list$1CVALUE$ph_length(come_params_587)&&!fun_560->mVarArgs&&string_operator_not_equals(fun_name_419,"__builtin_va_start")&&string_operator_not_equals(fun_name_419,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value627=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_419,list$1sType$ph_length(fun_560->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_420))));
        come_exception_var_10_632=multiple_assign_var20->v1;
        Err_633=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_633)),        /*c*/ come_call_finalizer3(__right_value627,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional27) {
            __result_obj__343 = (_Bool)1;
            (Err_633 = come_decrement_ref_count(Err_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__343;
        }
        else {
        }
        (Err_633 = come_decrement_ref_count(Err_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_421) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1226, "struct sNode");
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value629=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1226, "struct sCurrentNode2*")),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_634=(struct sNode*)come_increment_ref_count(_inf_value3);
        /*c*/ come_call_finalizer3(__right_value629,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_636=node_compile(current_stack_frame_node_634,info);
        if(        !Value_636) {
            __result_obj__346 = (_Bool)0;
            ((current_stack_frame_node_634) ? current_stack_frame_node_634 = come_decrement_ref_count(current_stack_frame_node_634, ((struct sNode*)current_stack_frame_node_634)->finalize, ((struct sNode*)current_stack_frame_node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__346;
        }
        else {
        }
        come_value_637=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(come_params_587,(struct CVALUE*)come_increment_ref_count(come_value_637));
        method_block2_638=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1235, "struct buffer*"))));
        method_block_type_639=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value636=list$1sType$ph$p_operator_load_element(fun_560->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value636,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_640=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value639=list$1sType$ph$p_operator_load_element(method_block_type_639->mParamTypes,0)))->mClass=((struct sClass*)(__right_value640=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_640)));
        /*c*/ come_call_finalizer3(__right_value639,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value640,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_644=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value641=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_640)));
        /*c*/ come_call_finalizer3(__right_value641,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_639->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value642=err_msg(info,"This function does not have method block(%s)",fun_name_419)));
            come_exception_var_11_645=multiple_assign_var21->v1;
            Err_646=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_646)),            /*c*/ come_call_finalizer3(__right_value642,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional28) {
                __result_obj__351 = (_Bool)1;
                (Err_646 = come_decrement_ref_count(Err_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_634) ? current_stack_frame_node_634 = come_decrement_ref_count(current_stack_frame_node_634, ((struct sNode*)current_stack_frame_node_634)->finalize, ((struct sNode*)current_stack_frame_node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_637,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_638,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_640 = come_decrement_ref_count(class_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__351;
            }
            else {
            }
            (Err_646 = come_decrement_ref_count(Err_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_647=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_639->mResultType));
        result_type_647->mStatic=(_Bool)0;
        param_types_648=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_block_type_639->mParamTypes));
        param_names_649=method_block_type_639->mParamNames;
        all_alhabet_sname_650=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1257, "struct buffer*"))));
        {
            p_651=info->sname;
            while(*p_651) {
                if(                xisalnum(*p_651)) {
                    buffer_append_char(all_alhabet_sname_650,*p_651++);
                }
                else {
                    p_651++;
                }
            }
        }
        buffer_append_format(method_block2_638,"%s fun_block%d_%s(",((char*)(__right_value647=make_type_name_string(result_type_647,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value648=buffer_to_string(all_alhabet_sname_650))));
        (__right_value647 = come_decrement_ref_count(__right_value647, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value648 = come_decrement_ref_count(__right_value648, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_605=0;
        for(        o2_saved_652=(struct list$1sType$ph*)come_increment_ref_count((param_types_648)),it_653=list$1sType$ph_begin((o2_saved_652));        !list$1sType$ph_end((o2_saved_652));        it_653=list$1sType$ph_next((o2_saved_652))        ){
            param_type_654=it_653;
            if(            i_605==0) {
                param_name_655=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_638,"%s",((char*)(__right_value650=make_define_var(param_type_654,param_name_655,(_Bool)0,info))));
                (__right_value650 = come_decrement_ref_count(__right_value650, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_655 = come_decrement_ref_count(param_name_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_605==1) {
                param_name_656=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_638,"%s",((char*)(__right_value652=make_define_var_no_solved(param_type_654,param_name_656,(_Bool)0,(_Bool)1,info))));
                (__right_value652 = come_decrement_ref_count(__right_value652, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_656 = come_decrement_ref_count(param_name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_657=(char*)come_increment_ref_count(xsprintf("it%d",i_605));
                buffer_append_format(method_block2_638,"%s",((char*)(__right_value654=make_define_var_no_solved(param_type_654,param_name_657,(_Bool)0,(_Bool)1,info))));
                (__right_value654 = come_decrement_ref_count(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_657 = come_decrement_ref_count(param_name_657, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_605!=list$1sType$ph_length(param_types_648)-1) {
                buffer_append_str(method_block2_638,",");
            }
            i_605++;
        }
        /*c*/ come_call_finalizer3(o2_saved_652,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_638,")\n");
        buffer_append_str(method_block2_638,((char*)(__right_value655=buffer_to_string(method_block_421))));
        (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_658=(struct buffer*)come_increment_ref_count(info->source);
        p_659=info->p;
        head_660=info->head;
        sline_661=info->sline;
        __dec_obj155=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_638);
        /*b*/ come_call_finalizer3(__dec_obj155,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_422;
        node_662=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_663=node_compile(node_662,info);
        if(        !Value_663) {
            __result_obj__352 = (_Bool)0;
            ((current_stack_frame_node_634) ? current_stack_frame_node_634 = come_decrement_ref_count(current_stack_frame_node_634, ((struct sNode*)current_stack_frame_node_634)->finalize, ((struct sNode*)current_stack_frame_node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_637,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_638,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_640 = come_decrement_ref_count(class_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_648,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__352;
        }
        else {
        }
        method_block_name_664=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value657=buffer_to_string(all_alhabet_sname_650)))));
        (__right_value657 = come_decrement_ref_count(__right_value657, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_665=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1322, "struct CVALUE*"))));
        fun2_666=((struct sFun*)(__right_value662=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value661=__builtin_string(method_block_name_664))),((void*)0))));
        (__right_value661 = come_decrement_ref_count(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value662,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_666==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value663=err_msg(info,"method block function not found(%s)",method_block_name_664)));
            come_exception_var_12_667=multiple_assign_var22->v1;
            Err_668=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_668)),            /*c*/ come_call_finalizer3(__right_value663,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional29) {
                __result_obj__353 = (_Bool)1;
                (Err_668 = come_decrement_ref_count(Err_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_634) ? current_stack_frame_node_634 = come_decrement_ref_count(current_stack_frame_node_634, ((struct sNode*)current_stack_frame_node_634)->finalize, ((struct sNode*)current_stack_frame_node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_637,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_638,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_640 = come_decrement_ref_count(class_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_648,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(all_alhabet_sname_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(source3_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_664 = come_decrement_ref_count(method_block_name_664, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value2_665,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__353;
            }
            else {
            }
            (Err_668 = come_decrement_ref_count(Err_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_669=fun2_666->mLambdaType;
        __dec_obj156=come_value2_665->c_value,
        come_value2_665->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_664));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj157=come_value2_665->type,
        come_value2_665->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_669));
        /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_665->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_587,(struct CVALUE*)come_increment_ref_count(come_value2_665));
        __dec_obj158=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_658);
        /*b*/ come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_659;
        info->head=head_660;
        info->sline=sline_661;
        info->current_stack_frame_struct=current_stack_frame_struct_644;
        ((current_stack_frame_node_634) ? current_stack_frame_node_634 = come_decrement_ref_count(current_stack_frame_node_634, ((struct sNode*)current_stack_frame_node_634)->finalize, ((struct sNode*)current_stack_frame_node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_637,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_638,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_640 = come_decrement_ref_count(class_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_648,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_664 = come_decrement_ref_count(method_block_name_664, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_665,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_670=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1348, "struct buffer*"))));
    buffer_append_str(buf_670,fun_name_419);
    buffer_append_str(buf_670,"(");
    j_671=0;
    for(    o2_saved_672=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_587)),it_673=list$1CVALUE$ph_begin((o2_saved_672));    !list$1CVALUE$ph_end((o2_saved_672));    it_673=list$1CVALUE$ph_next((o2_saved_672))    ){
        buffer_append_str(buf_670,it_673->c_value);
        if(        j_671!=list$1CVALUE$ph_length(come_params_587)-1) {
            buffer_append_str(buf_670,",");
        }
        j_671++;
    }
    /*c*/ come_call_finalizer3(o2_saved_672,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_670,")");
    come_value_674=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1365, "struct CVALUE*"))));
    __dec_obj159=come_value_674->c_value,
    come_value_674->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_670));
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj160=come_value_674->type,
    come_value_674->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_575));
    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_674->type->mStatic=(_Bool)0;
    come_value_674->var=((void*)0);
    if(    fun_560->mResultType->mHeap) {
        append_object_to_right_values2(come_value_674,(struct sType*)come_increment_ref_count(result_type_575),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_419,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_419,"null_check")&&string_operator_not_equals(fun_name_419,"come_push_stackframe")&&string_operator_not_equals(fun_name_419,"come_pop_stackframe")) {
            __dec_obj161=come_value_674->c_value,
            come_value_674->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_674->c_value,come_value_674->type,info));
            __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_575->mGuardValue&&result_type_575->mPointerNum>0) {
        __dec_obj162=come_value_674->c_value,
        come_value_674->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value673=make_type_name_string(result_type_575,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_674->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value673 = come_decrement_ref_count(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    add_come_last_code(info,"%s",come_value_674->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_674));
    info->calling_fun=fun_560;
    __result_obj__354 = (_Bool)1;
    (fun_name_419 = come_decrement_ref_count(fun_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_583,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_587,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_670,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_674,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__354;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__263;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_411;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_412;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__268;
    if(    self==((void*)0)) {
        __result_obj__263 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__263,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__263;
    }
    result_411=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_412=self->head;
    while(it_412!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_411,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_412->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_411,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_412->item)));
        }
        it_412=it_412->next;
    }
    __result_obj__268 = come_increment_ref_count(result_411);
    /*c*/ come_call_finalizer3(result_411,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__268,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_409;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_410;
    it_409=self->head;
    while(it_409!=((void*)0)) {
        prev_it_410=it_409;
        it_409=it_409->next;
        /*c*/ come_call_finalizer3(prev_it_410,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__264;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__264 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value365 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_413;
struct tuple2$2char$phsNode$ph* __dec_obj77;
void* __right_value366 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_414;
struct tuple2$2char$phsNode$ph* __dec_obj78;
void* __right_value367 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_415;
struct tuple2$2char$phsNode$ph* __dec_obj79;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__265;
    if(    self->len==0) {
        litem_413=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value365=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_413->prev=((void*)0);
        litem_413->next=((void*)0);
        __dec_obj77=litem_413->item,
        litem_413->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_413;
        self->head=litem_413;
    }
    else if(    self->len==1) {
        litem_414=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value366=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_414->prev=self->head;
        litem_414->next=((void*)0);
        __dec_obj78=litem_414->item,
        litem_414->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_414;
        self->head->next=litem_414;
    }
    else {
        litem_415=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value367=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_415->prev=self->tail;
        litem_415->next=((void*)0);
        __dec_obj79=litem_415->item,
        litem_415->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_415;
        self->tail=litem_415;
    }
    self->len++;
    __result_obj__265 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__266;
void* __right_value368 = (void*)0;
struct tuple2$2char$phsNode$ph* result_416;
void* __right_value369 = (void*)0;
char* __dec_obj80;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj81;
struct tuple2$2char$phsNode$ph* __result_obj__267;
    if(    self==(void*)0) {
        __result_obj__266 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__266,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__266;
    }
    result_416=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj80=result_416->v1,
        result_416->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj81=result_416->v2,
        result_416->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__267 = come_increment_ref_count(result_416);
    /*c*/ come_call_finalizer3(result_416,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_417;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_418;
    it_417=self->head;
    while(it_417!=((void*)0)) {
        prev_it_418=it_417;
        it_417=it_417->next;
        /*c*/ come_call_finalizer3(prev_it_418,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1CVALUE$ph* __result_obj__272;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__272 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__272,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_429;
struct list_item$1CVALUE$ph* prev_it_430;
    it_429=self->head;
    while(it_429!=((void*)0)) {
        prev_it_430=it_429;
        it_429=it_429->next;
        /*c*/ come_call_finalizer3(prev_it_430,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_435;
struct tuple2$2char$phsNode$ph* __result_obj__274;
struct tuple2$2char$phsNode$ph* __result_obj__275;
struct tuple2$2char$phsNode$ph* result_436;
struct tuple2$2char$phsNode$ph* __result_obj__276;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_435,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__274 = result_435;
        return __result_obj__274;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__275 = self->it->item;
        return __result_obj__275;
    }
    memset(&result_436,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__276 = result_436;
    return __result_obj__276;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_438;
struct tuple2$2char$phsNode$ph* __result_obj__277;
struct tuple2$2char$phsNode$ph* __result_obj__278;
struct tuple2$2char$phsNode$ph* result_439;
struct tuple2$2char$phsNode$ph* __result_obj__279;
result_438 = (void*)0;
result_439 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_438,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__277 = result_438;
        return __result_obj__277;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__278 = self->it->item;
        return __result_obj__278;
    }
    memset(&result_439,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__279 = result_439;
    return __result_obj__279;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_444;
int i_445;
struct sType* __result_obj__281;
struct sType* default_value_446;
struct sType* __result_obj__282;
default_value_446 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_444=self->head;
    i_445=0;
    while(it_444!=((void*)0)) {
        if(        position==i_445) {
            __result_obj__281 = come_increment_ref_count(it_444->item);
            /*c*/ come_call_finalizer3(__result_obj__281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__281;
        }
        it_444=it_444->next;
        i_445++;
    }
    memset(&default_value_446,0,sizeof(struct sType*));
    __result_obj__282 = come_increment_ref_count(default_value_446);
    /*c*/ come_call_finalizer3(default_value_446,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__282,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_452;
struct CVALUE* __result_obj__284;
struct CVALUE* __result_obj__285;
struct CVALUE* result_453;
struct CVALUE* __result_obj__286;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_452,0,sizeof(struct CVALUE*));
        __result_obj__284 = result_452;
        return __result_obj__284;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__285 = self->it->item;
        return __result_obj__285;
    }
    memset(&result_453,0,sizeof(struct CVALUE*));
    __result_obj__286 = result_453;
    return __result_obj__286;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_455;
struct CVALUE* __result_obj__287;
struct CVALUE* __result_obj__288;
struct CVALUE* result_456;
struct CVALUE* __result_obj__289;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_455,0,sizeof(struct CVALUE*));
        __result_obj__287 = result_455;
        return __result_obj__287;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__288 = self->it->item;
        return __result_obj__288;
    }
    memset(&result_456,0,sizeof(struct CVALUE*));
    __result_obj__289 = result_456;
    return __result_obj__289;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_459;
unsigned int it_460;
struct sGenericsFun* __result_obj__291;
struct sGenericsFun* __result_obj__292;
struct sGenericsFun* __result_obj__293;
struct sGenericsFun* __result_obj__294;
    hash_459=string_get_hash_key(((char*)key))%self->size;
    it_460=hash_459;
    while((_Bool)1) {
        if(        self->item_existance[it_460]) {
            if(            string_equals(self->keys[it_460],key)) {
                __result_obj__291 = come_increment_ref_count(self->items[it_460]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__291,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__291;
            }
            it_460++;
            if(            it_460>=self->size) {
                it_460=0;
            }
            else if(            it_460==hash_459) {
                __result_obj__292 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__292,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__292;
            }
        }
        else {
            __result_obj__293 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__293,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__293;
        }
    }
    __result_obj__294 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
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
unsigned int hash_467;
unsigned int it_468;
struct sFun* __result_obj__295;
struct sFun* __result_obj__296;
struct sFun* __result_obj__297;
struct sFun* __result_obj__298;
    hash_467=string_get_hash_key(((char*)key))%self->size;
    it_468=hash_467;
    while((_Bool)1) {
        if(        self->item_existance[it_468]) {
            if(            string_equals(self->keys[it_468],key)) {
                __result_obj__295 = come_increment_ref_count(self->items[it_468]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__295,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__295;
            }
            it_468++;
            if(            it_468>=self->size) {
                it_468=0;
            }
            else if(            it_468==hash_467) {
                __result_obj__296 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__296,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__296;
            }
        }
        else {
            __result_obj__297 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__297,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__297;
        }
    }
    __result_obj__298 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__298,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
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
struct list_item$1CVALUE$ph* it_473;
int i_474;
struct CVALUE* __result_obj__300;
struct CVALUE* default_value_475;
struct CVALUE* __result_obj__301;
default_value_475 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_473=self->head;
    i_474=0;
    while(it_473!=((void*)0)) {
        if(        position==i_474) {
            __result_obj__300 = come_increment_ref_count(it_473->item);
            /*c*/ come_call_finalizer3(__result_obj__300,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__300;
        }
        it_473=it_473->next;
        i_474++;
    }
    memset(&default_value_475,0,sizeof(struct CVALUE*));
    __result_obj__301 = come_increment_ref_count(default_value_475);
    /*c*/ come_call_finalizer3(default_value_475,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__301,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_481;
int i_482;
struct sType* default_value_483;
struct list$1sType$ph* __result_obj__303;
struct list_item$1sType$ph* it_487;
int i_488;
struct sType* __dec_obj90;
struct list$1sType$ph* __result_obj__304;
default_value_483 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_481=self->len;
        for(        i_482=0;        i_482<position-len_481;        i_482++        ){
            memset(&default_value_483,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_483));
            /*c*/ come_call_finalizer3(default_value_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__303 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__303;
    }
    it_487=self->head;
    i_488=0;
    while(it_487!=((void*)0)) {
        if(        position==i_488) {
            __dec_obj90=it_487->item,
            it_487->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_487=it_487->next;
        i_488++;
    }
    __result_obj__304 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value408 = (void*)0;
struct list_item$1sType$ph* litem_484;
struct sType* __dec_obj87;
void* __right_value409 = (void*)0;
struct list_item$1sType$ph* litem_485;
struct sType* __dec_obj88;
void* __right_value410 = (void*)0;
struct list_item$1sType$ph* litem_486;
struct sType* __dec_obj89;
struct list$1sType$ph* __result_obj__302;
    if(    self->len==0) {
        litem_484=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value408=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1227, "struct list_item$1sType$ph*"))));
        litem_484->prev=((void*)0);
        litem_484->next=((void*)0);
        __dec_obj87=litem_484->item,
        litem_484->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_484;
        self->head=litem_484;
    }
    else if(    self->len==1) {
        litem_485=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value409=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1237, "struct list_item$1sType$ph*"))));
        litem_485->prev=self->head;
        litem_485->next=((void*)0);
        __dec_obj88=litem_485->item,
        litem_485->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_485;
        self->head->next=litem_485;
    }
    else {
        litem_486=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value410=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1247, "struct list_item$1sType$ph*"))));
        litem_486->prev=self->tail;
        litem_486->next=((void*)0);
        __dec_obj89=litem_486->item,
        litem_486->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_486;
        self->tail=litem_486;
    }
    self->len++;
    __result_obj__302 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_491;
struct sType* __result_obj__305;
struct sType* __result_obj__306;
struct sType* result_492;
struct sType* __result_obj__307;
result_491 = (void*)0;
result_492 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_491,0,sizeof(struct sType*));
        __result_obj__305 = result_491;
        return __result_obj__305;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__306 = self->it->item;
        return __result_obj__306;
    }
    memset(&result_492,0,sizeof(struct sType*));
    __result_obj__307 = result_492;
    return __result_obj__307;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_494;
struct sType* __result_obj__308;
struct sType* __result_obj__309;
struct sType* result_495;
struct sType* __result_obj__310;
result_494 = (void*)0;
result_495 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_494,0,sizeof(struct sType*));
        __result_obj__308 = result_494;
        return __result_obj__308;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__309 = self->it->item;
        return __result_obj__309;
    }
    memset(&result_495,0,sizeof(struct sType*));
    __result_obj__310 = result_495;
    return __result_obj__310;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value417 = (void*)0;
struct list_item$1CVALUE$ph* litem_506;
struct CVALUE* __dec_obj91;
void* __right_value418 = (void*)0;
struct list_item$1CVALUE$ph* litem_507;
struct CVALUE* __dec_obj92;
void* __right_value419 = (void*)0;
struct list_item$1CVALUE$ph* litem_508;
struct CVALUE* __dec_obj93;
struct list$1CVALUE$ph* __result_obj__312;
    if(    self->len==0) {
        litem_506=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value417=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1157, "struct list_item$1CVALUE$ph*"))));
        litem_506->prev=((void*)0);
        litem_506->next=((void*)0);
        __dec_obj91=litem_506->item,
        litem_506->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj91,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_506;
        self->head=litem_506;
    }
    else if(    self->len==1) {
        litem_507=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value418=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1167, "struct list_item$1CVALUE$ph*"))));
        litem_507->prev=self->head;
        litem_507->next=((void*)0);
        __dec_obj92=litem_507->item,
        litem_507->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_507;
        self->head->next=litem_507;
    }
    else {
        litem_508=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value419=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1177, "struct list_item$1CVALUE$ph*"))));
        litem_508->prev=self->tail;
        litem_508->next=((void*)0);
        __dec_obj93=litem_508->item,
        litem_508->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_508;
        self->tail=litem_508;
    }
    self->len++;
    __result_obj__312 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_514;
unsigned int it_515;
struct map$2char$phsFun$ph* __result_obj__313;
    hash_514=string_get_hash_key(((char*)key))%self->size;
    it_515=hash_514;
    while((_Bool)1) {
        if(        self->item_existance[it_515]) {
            if(            string_equals(self->keys[it_515],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_515]);
                self->item_existance[it_515]=(_Bool)0;
                if(                1) {
                    (self->keys[it_515] = come_decrement_ref_count(self->keys[it_515], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_515]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_515],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_515]=((void*)0);
                self->len--;
                break;
            }
            it_515++;
            if(            it_515>=self->size) {
                it_515=0;
            }
            else if(            it_515==hash_514) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__313 = self;
    return __result_obj__313;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_552;
unsigned int hash_553;
unsigned int it_554;
struct sFun* __result_obj__318;
struct sFun* __result_obj__319;
struct sFun* __result_obj__320;
struct sFun* __result_obj__321;
default_value_552 = (void*)0;
    memset(&default_value_552,0,sizeof(struct sFun*));
    hash_553=string_get_hash_key(((char*)key))%self->size;
    it_554=hash_553;
    while((_Bool)1) {
        if(        self->item_existance[it_554]) {
            if(            string_equals(self->keys[it_554],key)) {
                __result_obj__318 = come_increment_ref_count(self->items[it_554]);
                /*c*/ come_call_finalizer3(default_value_552,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__318,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__318;
            }
            it_554++;
            if(            it_554>=self->size) {
                it_554=0;
            }
            else if(            it_554==hash_553) {
                __result_obj__319 = come_increment_ref_count(default_value_552);
                /*c*/ come_call_finalizer3(default_value_552,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__319,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__319;
            }
        }
        else {
            __result_obj__320 = come_increment_ref_count(default_value_552);
            /*c*/ come_call_finalizer3(default_value_552,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__320,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__320;
        }
    }
    __result_obj__321 = come_increment_ref_count(default_value_552);
    /*c*/ come_call_finalizer3(default_value_552,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__321,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__325;
void* __right_value565 = (void*)0;
struct sFunCallNode* result_578;
void* __right_value566 = (void*)0;
char* __dec_obj145;
void* __right_value567 = (void*)0;
char* __dec_obj146;
void* __right_value568 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj147;
void* __right_value569 = (void*)0;
struct list$1sType$ph* __dec_obj148;
void* __right_value570 = (void*)0;
struct buffer* __dec_obj149;
struct sFunCallNode* __result_obj__326;
    if(    self==(void*)0) {
        __result_obj__325 = (void*)0;
        return __result_obj__325;
    }
    result_578=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_578->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj145=result_578->sname,
        result_578->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj146=result_578->fun_name,
        result_578->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj147=result_578->params,
        result_578->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        /*b*/ come_call_finalizer3(__dec_obj147,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj148=result_578->method_generics_types,
        result_578->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj148,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj149=result_578->method_block,
        result_578->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj149,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->method_block_sline=self->method_block_sline;
    }
    __result_obj__326 = result_578;
    /*c*/ come_call_finalizer3(result_578,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__326;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_600;
int i_601;
struct CVALUE* default_value_602;
struct list$1CVALUE$ph* __result_obj__333;
struct list_item$1CVALUE$ph* it_603;
int i_604;
struct CVALUE* __dec_obj151;
struct list$1CVALUE$ph* __result_obj__334;
default_value_602 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_600=self->len;
        for(        i_601=0;        i_601<position-len_600;        i_601++        ){
            memset(&default_value_602,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_602));
            /*c*/ come_call_finalizer3(default_value_602,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__333 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__333;
    }
    it_603=self->head;
    i_604=0;
    while(it_603!=((void*)0)) {
        if(        position==i_604) {
            __dec_obj151=it_603->item,
            it_603->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj151,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_603=it_603->next;
        i_604++;
    }
    __result_obj__334 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_617;
int i_618;
char* __result_obj__338;
char* default_value_619;
char* __result_obj__339;
default_value_619 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_617=self->head;
    i_618=0;
    while(it_617!=((void*)0)) {
        if(        position==i_618) {
            __result_obj__338 = come_increment_ref_count(it_617->item);
            (__result_obj__338 = come_decrement_ref_count(__result_obj__338, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__338;
        }
        it_617=it_617->next;
        i_618++;
    }
    memset(&default_value_619,0,sizeof(char*));
    __result_obj__339 = come_increment_ref_count(default_value_619);
    (default_value_619 = come_decrement_ref_count(default_value_619, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__339 = come_decrement_ref_count(__result_obj__339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__339;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__344;
void* __right_value630 = (void*)0;
struct sCurrentNode2* result_635;
void* __right_value631 = (void*)0;
char* __dec_obj154;
struct sCurrentNode2* __result_obj__345;
    if(    self==(void*)0) {
        __result_obj__344 = (void*)0;
        return __result_obj__344;
    }
    result_635=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_635->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_635->sname,
        result_635->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode2_clone", 5, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->sline_real=self->sline_real;
    }
    __result_obj__345 = result_635;
    /*c*/ come_call_finalizer3(result_635,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__345;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_641;
unsigned int hash_642;
unsigned int it_643;
struct sClass* __result_obj__347;
struct sClass* __result_obj__348;
struct sClass* __result_obj__349;
struct sClass* __result_obj__350;
default_value_641 = (void*)0;
    memset(&default_value_641,0,sizeof(struct sClass*));
    hash_642=string_get_hash_key(((char*)key))%self->size;
    it_643=hash_642;
    while((_Bool)1) {
        if(        self->item_existance[it_643]) {
            if(            string_equals(self->keys[it_643],key)) {
                __result_obj__347 = come_increment_ref_count(self->items[it_643]);
                /*c*/ come_call_finalizer3(default_value_641,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__347,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__347;
            }
            it_643++;
            if(            it_643>=self->size) {
                it_643=0;
            }
            else if(            it_643==hash_642) {
                __result_obj__348 = come_increment_ref_count(default_value_641);
                /*c*/ come_call_finalizer3(default_value_641,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__348,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__348;
            }
        }
        else {
            __result_obj__349 = come_increment_ref_count(default_value_641);
            /*c*/ come_call_finalizer3(default_value_641,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__349,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__349;
        }
    }
    __result_obj__350 = come_increment_ref_count(default_value_641);
    /*c*/ come_call_finalizer3(default_value_641,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__350,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__350;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value675 = (void*)0;
struct buffer* __dec_obj163;
struct sComeCallNode* __result_obj__355;
    ((struct sNodeBase*)(__right_value675=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value675,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj163=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj163,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__355 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__355,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__355;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value676 = (void*)0;
char* __result_obj__356;
    __result_obj__356 = come_increment_ref_count(((char*)(__right_value676=__builtin_string("sComeCallNode"))));
    (__right_value676 = come_decrement_ref_count(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__356 = come_decrement_ref_count(__result_obj__356, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__356;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_675;
struct buffer* come_block_676;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1CVALUE$ph* come_params_677;
void* __right_value679 = (void*)0;
char* var_name_679;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sType* type__680;
void* __right_value683 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_683=0;
char* Err_684=0;
_Bool _if_conditional30;
_Bool __result_obj__361;
void* __right_value684 = (void*)0;
struct sNode* var_node_685;
_Bool Value_686;
_Bool __result_obj__362;
void* __right_value685 = (void*)0;
struct CVALUE* thread_var_value_687;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct CVALUE* come_value_688;
void* __right_value688 = (void*)0;
char* __dec_obj164;
struct sType* __dec_obj165;
void* __right_value689 = (void*)0;
struct sNode* null_node_689;
_Bool Value_690;
_Bool __result_obj__363;
void* __right_value690 = (void*)0;
struct CVALUE* __dec_obj166;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value693 = (void*)0;
struct sNode* current_stack_frame_node_691;
_Bool Value_692;
_Bool __result_obj__364;
void* __right_value694 = (void*)0;
struct CVALUE* current_stack_frame_value_693;
void* __right_value695 = (void*)0;
char* fun_name_694;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct buffer* come_block2_695;
void* __right_value698 = (void*)0;
char* class_name_696;
void* __right_value699 = (void*)0;
struct sClass* current_stack_frame_struct_697;
void* __right_value700 = (void*)0;
struct buffer* source3_698;
char* p_699;
char* head_700;
int sline_701;
struct buffer* __dec_obj167;
void* __right_value701 = (void*)0;
struct sNode* node_702;
_Bool Value_703;
_Bool __result_obj__365;
struct buffer* __dec_obj168;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct CVALUE* fun_value_704;
void* __right_value704 = (void*)0;
char* __dec_obj169;
struct sType* __dec_obj170;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct buffer* buf_705;
void* __right_value707 = (void*)0;
char* fun_name_706;
int j_707;
struct list$1CVALUE$ph* o2_saved_708;
struct CVALUE* it_709;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct CVALUE* come_value_710;
void* __right_value710 = (void*)0;
char* __dec_obj171;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sType* type_711;
void* __right_value714 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_712=0;
char* Err_713=0;
_Bool _if_conditional31;
_Bool __result_obj__366;
struct sType* __dec_obj172;
_Bool __result_obj__367;
    come_block_sline_675=self->come_block_sline;
    come_block_676=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_677=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1420, "struct list$1CVALUE$ph*"))));
    static int thread_num_678=0;
    thread_num_678++;
    var_name_679=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_678));
    type__680=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value681=map$2char$phsType$ph_at(info->types,((char*)(__right_value680=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value680 = come_decrement_ref_count(__right_value680, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value681,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__680==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value683=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_683=multiple_assign_var23->v1;
        Err_684=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_684)),        /*c*/ come_call_finalizer3(__right_value683,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional30) {
            __result_obj__361 = (_Bool)1;
            (Err_684 = come_decrement_ref_count(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_677,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_679 = come_decrement_ref_count(var_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__361;
        }
        else {
        }
        (Err_684 = come_decrement_ref_count(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_685=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_679),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__680),(_Bool)1,((void*)0),info));
    Value_686=node_compile(var_node_685,info);
    if(    !Value_686) {
        __result_obj__362 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_677,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_679 = come_decrement_ref_count(var_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_685) ? var_node_685 = come_decrement_ref_count(var_node_685, ((struct sNode*)var_node_685)->finalize, ((struct sNode*)var_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__362;
    }
    else {
    }
    thread_var_value_687=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_688=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1443, "struct CVALUE*"))));
    __dec_obj164=come_value_688->c_value,
    come_value_688->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_687->c_value));
    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj165=come_value_688->type,
    come_value_688->type=(struct sType*)come_increment_ref_count(thread_var_value_687->type);
    /*b*/ come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_688->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_677,(struct CVALUE*)come_increment_ref_count(come_value_688));
    null_node_689=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_690=node_compile(null_node_689,info);
    if(    !Value_690) {
        __result_obj__363 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_677,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_679 = come_decrement_ref_count(var_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_685) ? var_node_685 = come_decrement_ref_count(var_node_685, ((struct sNode*)var_node_685)->finalize, ((struct sNode*)var_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_687,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_688,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_689) ? null_node_689 = come_decrement_ref_count(null_node_689, ((struct sNode*)null_node_689)->finalize, ((struct sNode*)null_node_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__363;
    }
    else {
    }
    __dec_obj166=come_value_688,
    come_value_688=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj166,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_677,(struct CVALUE*)come_increment_ref_count(come_value_688));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1460, "struct sNode");
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value692=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1460, "struct sCurrentNode2*")),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_691=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value692,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_692=node_compile(current_stack_frame_node_691,info);
    if(    !Value_692) {
        __result_obj__364 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_677,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_679 = come_decrement_ref_count(var_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_685) ? var_node_685 = come_decrement_ref_count(var_node_685, ((struct sNode*)var_node_685)->finalize, ((struct sNode*)var_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_687,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_688,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_689) ? null_node_689 = come_decrement_ref_count(null_node_689, ((struct sNode*)null_node_689)->finalize, ((struct sNode*)null_node_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_691) ? current_stack_frame_node_691 = come_decrement_ref_count(current_stack_frame_node_691, ((struct sNode*)current_stack_frame_node_691)->finalize, ((struct sNode*)current_stack_frame_node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__364;
    }
    else {
    }
    current_stack_frame_value_693=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_694=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_678));
    come_block2_695=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1470, "struct buffer*"))));
    class_name_696=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_695,"void* %s(%s* parent)\n",fun_name_694,class_name_696);
    buffer_append_str(come_block2_695,((char*)(__right_value699=buffer_to_string(come_block_676))));
    (__right_value699 = come_decrement_ref_count(__right_value699, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_697=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value700=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_696)));
    /*c*/ come_call_finalizer3(__right_value700,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_698=(struct buffer*)come_increment_ref_count(info->source);
    p_699=info->p;
    head_700=info->head;
    sline_701=info->sline;
    __dec_obj167=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_695);
    /*b*/ come_call_finalizer3(__dec_obj167,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_675;
    node_702=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_703=node_compile(node_702,info);
    if(    !Value_703) {
        __result_obj__365 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_677,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_679 = come_decrement_ref_count(var_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_685) ? var_node_685 = come_decrement_ref_count(var_node_685, ((struct sNode*)var_node_685)->finalize, ((struct sNode*)var_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_687,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_688,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_689) ? null_node_689 = come_decrement_ref_count(null_node_689, ((struct sNode*)null_node_689)->finalize, ((struct sNode*)null_node_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_691) ? current_stack_frame_node_691 = come_decrement_ref_count(current_stack_frame_node_691, ((struct sNode*)current_stack_frame_node_691)->finalize, ((struct sNode*)current_stack_frame_node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_693,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_694 = come_decrement_ref_count(fun_name_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_695,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_696 = come_decrement_ref_count(class_name_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__365;
    }
    else {
    }
    __dec_obj168=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_698);
    /*b*/ come_call_finalizer3(__dec_obj168,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_699;
    info->head=head_700;
    info->sline=sline_701;
    info->current_stack_frame_struct=current_stack_frame_struct_697;
    fun_value_704=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1504, "struct CVALUE*"))));
    __dec_obj169=fun_value_704->c_value,
    fun_value_704->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_694));
    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj170=come_value_688->type,
    come_value_688->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_688->var=((void*)0);
    list$1CVALUE$ph_add(come_params_677,(struct CVALUE*)come_increment_ref_count(fun_value_704));
    list$1CVALUE$ph_add(come_params_677,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_693));
    buf_705=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1514, "struct buffer*"))));
    (fun_name_694 = come_decrement_ref_count(fun_name_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_706=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_705,"(");
    buffer_append_str(buf_705,fun_name_706);
    buffer_append_str(buf_705,"(");
    j_707=0;
    for(    o2_saved_708=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_677)),it_709=list$1CVALUE$ph_begin((o2_saved_708));    !list$1CVALUE$ph_end((o2_saved_708));    it_709=list$1CVALUE$ph_next((o2_saved_708))    ){
        buffer_append_str(buf_705,it_709->c_value);
        if(        j_707!=list$1CVALUE$ph_length(come_params_677)-1) {
            buffer_append_str(buf_705,",");
        }
        j_707++;
    }
    /*c*/ come_call_finalizer3(o2_saved_708,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_705,")");
    buffer_append_str(buf_705,", ");
    buffer_append_str(buf_705,thread_var_value_687->c_value);
    buffer_append_str(buf_705,")");
    /*c*/ come_call_finalizer3(come_value_688,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_710=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1537, "struct CVALUE*"))));
    __dec_obj171=come_value_710->c_value,
    come_value_710->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_705));
    __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_711=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value712=map$2char$phsType$ph_at(info->types,((char*)(__right_value711=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value711 = come_decrement_ref_count(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value712,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_711==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value714=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_712=multiple_assign_var24->v1;
        Err_713=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_713)),        /*c*/ come_call_finalizer3(__right_value714,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional31) {
            __result_obj__366 = (_Bool)1;
            (Err_713 = come_decrement_ref_count(Err_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_677,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_679 = come_decrement_ref_count(var_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((var_node_685) ? var_node_685 = come_decrement_ref_count(var_node_685, ((struct sNode*)var_node_685)->finalize, ((struct sNode*)var_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(thread_var_value_687,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((null_node_689) ? null_node_689 = come_decrement_ref_count(null_node_689, ((struct sNode*)null_node_689)->finalize, ((struct sNode*)null_node_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_691) ? current_stack_frame_node_691 = come_decrement_ref_count(current_stack_frame_node_691, ((struct sNode*)current_stack_frame_node_691)->finalize, ((struct sNode*)current_stack_frame_node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(current_stack_frame_value_693,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_block2_695,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_696 = come_decrement_ref_count(class_name_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(fun_value_704,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_705,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_706 = come_decrement_ref_count(fun_name_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_710,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_711,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__366;
        }
        else {
        }
        (Err_713 = come_decrement_ref_count(Err_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj172=come_value_710->type,
    come_value_710->type=(struct sType*)come_increment_ref_count(type_711);
    /*b*/ come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_710->var=((void*)0);
    add_come_last_code(info,"%s",come_value_710->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_710));
    __result_obj__367 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_677,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_679 = come_decrement_ref_count(var_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_685) ? var_node_685 = come_decrement_ref_count(var_node_685, ((struct sNode*)var_node_685)->finalize, ((struct sNode*)var_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_687,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_689) ? null_node_689 = come_decrement_ref_count(null_node_689, ((struct sNode*)null_node_689)->finalize, ((struct sNode*)null_node_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_691) ? current_stack_frame_node_691 = come_decrement_ref_count(current_stack_frame_node_691, ((struct sNode*)current_stack_frame_node_691)->finalize, ((struct sNode*)current_stack_frame_node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_693,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_695,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_696 = come_decrement_ref_count(class_name_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_704,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_705,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_706 = come_decrement_ref_count(fun_name_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_710,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_711,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__367;
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
unsigned int hash_681;
unsigned int it_682;
struct sType* __result_obj__357;
struct sType* __result_obj__358;
struct sType* __result_obj__359;
struct sType* __result_obj__360;
    hash_681=string_get_hash_key(((char*)key))%self->size;
    it_682=hash_681;
    while((_Bool)1) {
        if(        self->item_existance[it_682]) {
            if(            string_equals(self->keys[it_682],key)) {
                __result_obj__357 = come_increment_ref_count(self->items[it_682]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__357,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__357;
            }
            it_682++;
            if(            it_682>=self->size) {
                it_682=0;
            }
            else if(            it_682==hash_681) {
                __result_obj__358 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__358;
            }
        }
        else {
            __result_obj__359 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__359,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__359;
        }
    }
    __result_obj__360 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__360,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__360;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value715 = (void*)0;
struct sNode* __dec_obj173;
struct sComeJoinNode* __result_obj__368;
    ((struct sNodeBase*)(__right_value715=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value715,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj173=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__368 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__368,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__368;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value716 = (void*)0;
char* __result_obj__369;
    __result_obj__369 = come_increment_ref_count(((char*)(__right_value716=__builtin_string("sComeJoinNode"))));
    (__right_value716 = come_decrement_ref_count(__right_value716, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__369 = come_decrement_ref_count(__result_obj__369, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__369;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_714;
_Bool Value_715;
_Bool __result_obj__370;
void* __right_value717 = (void*)0;
struct CVALUE* come_value_716;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct buffer* buf_717;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct CVALUE* come_value_718;
void* __right_value722 = (void*)0;
char* __dec_obj174;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sType* __dec_obj175;
_Bool __result_obj__371;
    node_714=(struct sNode*)come_increment_ref_count(self->node);
    Value_715=node_compile(node_714,info);
    if(    !Value_715) {
        __result_obj__370 = (_Bool)0;
        ((node_714) ? node_714 = come_decrement_ref_count(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__370;
    }
    else {
    }
    come_value_716=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_717=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1585, "struct buffer*"))));
    buffer_append_str(buf_717,"pthread_join(");
    buffer_append_str(buf_717,come_value_716->c_value);
    buffer_append_str(buf_717,", 0)");
    /*c*/ come_call_finalizer3(come_value_716,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_718=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1590, "struct CVALUE*"))));
    __dec_obj174=come_value_718->c_value,
    come_value_718->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_717));
    __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj175=come_value_718->type,
    come_value_718->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1592, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_718->var=((void*)0);
    add_come_last_code(info,"%s",come_value_718->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_718));
    __result_obj__371 = (_Bool)1;
    ((node_714) ? node_714 = come_decrement_ref_count(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_717,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_718,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
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
void* __right_value726 = (void*)0;
struct list$1sNode$ph* __dec_obj176;
struct list$1sBlock$ph* __dec_obj177;
struct sBlock* __dec_obj178;
struct sComePollNode* __result_obj__372;
    ((struct sNodeBase*)(__right_value726=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value726,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj176=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    /*b*/ come_call_finalizer3(__dec_obj176,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj177=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    /*b*/ come_call_finalizer3(__dec_obj177,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj178=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    /*b*/ come_call_finalizer3(__dec_obj178,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__372 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__372,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__372;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value727 = (void*)0;
char* __result_obj__373;
    __result_obj__373 = come_increment_ref_count(((char*)(__right_value727=__builtin_string("sComePollNode"))));
    (__right_value727 = come_decrement_ref_count(__right_value727, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__373 = come_decrement_ref_count(__result_obj__373, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__373;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_723;
struct list$1sBlock$ph* blocks_724;
int time_out_725;
int n_727;
struct list$1sNode$ph* o2_saved_728;
struct sNode* it_731;
_Bool Value_734;
_Bool __result_obj__380;
void* __right_value728 = (void*)0;
struct CVALUE* come_value_735;
int n_736;
struct list$1sNode$ph* o2_saved_737;
struct sNode* it_738;
void* __right_value729 = (void*)0;
_Bool __result_obj__383;
    vars_723=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_724=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_725=self->time_out;
    static int var_num_726=0;
    var_num_726++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_726,list$1sNode$ph_length(vars_723));
    n_727=0;
    for(    o2_saved_728=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_731=list$1sNode$ph_begin((o2_saved_728));    !list$1sNode$ph_end((o2_saved_728));    it_731=list$1sNode$ph_next((o2_saved_728))    ){
        Value_734=node_compile(it_731,info);
        if(        !Value_734) {
            __result_obj__380 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_728,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_723,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_724,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__380;
        }
        else {
        }
        come_value_735=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_726,n_727,come_value_735->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_726,n_727,1);
        n_727++;
        /*c*/ come_call_finalizer3(come_value_735,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_728,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_726,var_num_726,list$1sNode$ph_length(vars_723),time_out_725);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_726);
    n_736=0;
    for(    o2_saved_737=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_738=list$1sNode$ph_begin((o2_saved_737));    !list$1sNode$ph_end((o2_saved_737));    it_738=list$1sNode$ph_next((o2_saved_737))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_726,n_736,1);
        transpile_block(((struct sBlock*)(__right_value729=list$1sBlock$ph$p_operator_load_element(blocks_724,n_736))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value729,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_736++;
    }
    /*c*/ come_call_finalizer3(o2_saved_737,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_726);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__383 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_723,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_724,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__383;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_719;
struct list_item$1sBlock$ph* prev_it_720;
    it_719=self->head;
    while(it_719!=((void*)0)) {
        prev_it_720=it_719;
        it_719=it_719->next;
        /*c*/ come_call_finalizer3(prev_it_720,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sBlock$ph* it_721;
struct list_item$1sBlock$ph* prev_it_722;
    it_721=self->head;
    while(it_721!=((void*)0)) {
        prev_it_722=it_721;
        it_721=it_721->next;
        /*c*/ come_call_finalizer3(prev_it_722,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_729;
struct sNode* __result_obj__374;
struct sNode* __result_obj__375;
struct sNode* result_730;
struct sNode* __result_obj__376;
result_729 = (void*)0;
result_730 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_729,0,sizeof(struct sNode*));
        __result_obj__374 = result_729;
        return __result_obj__374;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__375 = self->it->item;
        return __result_obj__375;
    }
    memset(&result_730,0,sizeof(struct sNode*));
    __result_obj__376 = result_730;
    return __result_obj__376;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_732;
struct sNode* __result_obj__377;
struct sNode* __result_obj__378;
struct sNode* result_733;
struct sNode* __result_obj__379;
result_732 = (void*)0;
result_733 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_732,0,sizeof(struct sNode*));
        __result_obj__377 = result_732;
        return __result_obj__377;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__378 = self->it->item;
        return __result_obj__378;
    }
    memset(&result_733,0,sizeof(struct sNode*));
    __result_obj__379 = result_733;
    return __result_obj__379;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_739;
int i_740;
struct sBlock* __result_obj__381;
struct sBlock* default_value_741;
struct sBlock* __result_obj__382;
default_value_741 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_739=self->head;
    i_740=0;
    while(it_739!=((void*)0)) {
        if(        position==i_740) {
            __result_obj__381 = come_increment_ref_count(it_739->item);
            /*c*/ come_call_finalizer3(__result_obj__381,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__381;
        }
        it_739=it_739->next;
        i_740++;
    }
    memset(&default_value_741,0,sizeof(struct sBlock*));
    __result_obj__382 = come_increment_ref_count(default_value_741);
    /*c*/ come_call_finalizer3(default_value_741,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__382,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__382;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value732 = (void*)0;
struct sNode* node_742;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj179;
struct sNode* __result_obj__384;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1675, "struct sNode");
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value731=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1675, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_742=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*c*/ come_call_finalizer3(__right_value731,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj179=node_742,
    node_742=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_742),info));
    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__384 = come_increment_ref_count(node_742);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_742) ? node_742 = come_decrement_ref_count(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__384;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value734 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value735 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj181;
struct sLambdaCall* __result_obj__385;
    ((struct sNodeBase*)(__right_value734=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value734,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj180=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj181=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    /*b*/ come_call_finalizer3(__dec_obj181,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__385 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__385,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__385;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value736 = (void*)0;
char* __result_obj__386;
    __result_obj__386 = come_increment_ref_count(((char*)(__right_value736=__builtin_string("sLambdaCall"))));
    (__right_value736 = come_decrement_ref_count(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__386 = come_decrement_ref_count(__result_obj__386, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__386;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_743;
struct list$1tuple2$2char$phsNode$ph$ph* params_744;
_Bool Value_745;
_Bool __result_obj__387;
void* __right_value737 = (void*)0;
struct CVALUE* come_value_746;
struct sType* lambda_type_747;
void* __right_value738 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_748=0;
char* Err_749=0;
_Bool _if_conditional32;
_Bool __result_obj__388;
void* __right_value739 = (void*)0;
struct sType* result_type_750;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1CVALUE$ph* come_params_751;
void* __right_value742 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_752=0;
char* Err_753=0;
_Bool _if_conditional33;
_Bool __result_obj__389;
_Bool __result_obj__390;
int i_754;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_755;
struct tuple2$2char$phsNode$ph* it_756;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_757=0;
struct sNode* node_758=0;
_Bool Value_759;
_Bool __result_obj__391;
void* __right_value743 = (void*)0;
struct CVALUE* come_value_760;
void* __right_value744 = (void*)0;
_Bool _if_conditional34;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_761=0;
char* Err_762=0;
_Bool _if_conditional35;
_Bool __result_obj__392;
void* __right_value749 = (void*)0;
_Bool _if_conditional36;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct buffer* buf_763;
int j_764;
struct list$1CVALUE$ph* o2_saved_765;
struct CVALUE* it_766;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct CVALUE* come_value2_767;
void* __right_value755 = (void*)0;
char* __dec_obj182;
void* __right_value756 = (void*)0;
struct sType* __dec_obj183;
_Bool __result_obj__393;
    node_743=(struct sNode*)come_increment_ref_count(self->node);
    params_744=self->params;
    Value_745=node_compile(node_743,info);
    if(    !Value_745) {
        __result_obj__387 = (_Bool)0;
        ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__387;
    }
    else {
    }
    come_value_746=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_747=come_value_746->type;
    if(    lambda_type_747->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value738=err_msg(info,"invalid lambda type")));
        come_exception_var_15_748=multiple_assign_var25->v1;
        Err_749=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_749)),        /*c*/ come_call_finalizer3(__right_value738,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional32) {
            __result_obj__388 = (_Bool)1;
            (Err_749 = come_decrement_ref_count(Err_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_746,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__388;
        }
        else {
        }
        (Err_749 = come_decrement_ref_count(Err_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_750=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_747->mResultType));
    result_type_750->mStatic=(_Bool)0;
    come_params_751=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1719, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_747->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_744)&&!lambda_type_747->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value742=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_747->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_744))));
        come_exception_var_16_752=multiple_assign_var26->v1;
        Err_753=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_753)),        /*c*/ come_call_finalizer3(__right_value742,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional33) {
            __result_obj__389 = (_Bool)1;
            (Err_753 = come_decrement_ref_count(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_746,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_750,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_751,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__389;
        }
        else {
        }
        __result_obj__390 = (_Bool)0;
        (Err_753 = come_decrement_ref_count(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_746,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_750,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_751,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__390;
        (Err_753 = come_decrement_ref_count(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_754=0;
    for(    o2_saved_755=(params_744),it_756=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_755));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_755));    it_756=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_755))    ){
        multiple_assign_var27=it_756;
        label_757=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_758=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_759=node_compile(node_758,info);
        if(        !Value_759) {
            __result_obj__391 = (_Bool)0;
            (label_757 = come_decrement_ref_count(label_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_758) ? node_758 = come_decrement_ref_count(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_746,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_750,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_751,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__391;
        }
        else {
        }
        come_value_760=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_747->mVarArgs&&((struct sType*)(__right_value744=list$1sType$ph$p_operator_load_element(lambda_type_747->mParamTypes,i_754)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value744,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value748=check_assign_type(((char*)(__right_value746=xsprintf("calling param #\%s",((char*)(__right_value745=int_to_string(i_754)))))),((struct sType*)(__right_value747=list$1sType$ph$p_operator_load_element(lambda_type_747->mParamTypes,i_754))),come_value_760->type,come_value_760,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_761=multiple_assign_var28->v1;
            Err_762=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_762)),            (__right_value745 = come_decrement_ref_count(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value746 = come_decrement_ref_count(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value747,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value748,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional35) {
                __result_obj__392 = (_Bool)1;
                (Err_762 = come_decrement_ref_count(Err_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_757 = come_decrement_ref_count(label_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_758) ? node_758 = come_decrement_ref_count(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_760,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_746,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_750,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_751,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__392;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)(__right_value749=list$1sType$ph$p_operator_load_element(lambda_type_747->mParamTypes,i_754)))->mHeap&&come_value_760->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value749,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)(__right_value750=list$1sType$ph$p_operator_load_element(lambda_type_747->mParamTypes,i_754))),come_value_760->type,come_value_760,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value750,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (Err_762 = come_decrement_ref_count(Err_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(come_params_751,(struct CVALUE*)come_increment_ref_count(come_value_760));
        i_754++;
        (label_757 = come_decrement_ref_count(label_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_758) ? node_758 = come_decrement_ref_count(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_760,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_763=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1753, "struct buffer*"))));
    buffer_append_str(buf_763,"(");
    buffer_append_str(buf_763,come_value_746->c_value);
    buffer_append_str(buf_763,")");
    buffer_append_str(buf_763,"(");
    j_764=0;
    for(    o2_saved_765=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_751)),it_766=list$1CVALUE$ph_begin((o2_saved_765));    !list$1CVALUE$ph_end((o2_saved_765));    it_766=list$1CVALUE$ph_next((o2_saved_765))    ){
        buffer_append_str(buf_763,it_766->c_value);
        if(        j_764!=list$1CVALUE$ph_length(come_params_751)-1) {
            buffer_append_str(buf_763,",");
        }
        j_764++;
    }
    /*c*/ come_call_finalizer3(o2_saved_765,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_763,")");
    come_value2_767=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1772, "struct CVALUE*"))));
    __dec_obj182=come_value2_767->c_value,
    come_value2_767->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_763));
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_747->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_767,(struct sType*)come_increment_ref_count(lambda_type_747->mResultType),info,(_Bool)0);
    }
    __dec_obj183=come_value2_767->type,
    come_value2_767->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_750));
    /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_767->type->mStatic=(_Bool)0;
    come_value2_767->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_767->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_767));
    __result_obj__393 = (_Bool)1;
    ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_746,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_750,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_751,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_763,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_767,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__393;
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
void* __right_value757 = (void*)0;
struct sType* __dec_obj184;
struct sVarArgTypeName* __result_obj__394;
    ((struct sNodeBase*)(__right_value757=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value757,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj184=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__394 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__394,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__394;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value758 = (void*)0;
char* __result_obj__395;
    __result_obj__395 = come_increment_ref_count(((char*)(__right_value758=__builtin_string("sVarArgTypeName"))));
    (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__395 = come_decrement_ref_count(__result_obj__395, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__395;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_768;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct CVALUE* come_value_769;
void* __right_value761 = (void*)0;
char* __dec_obj185;
struct sType* __dec_obj186;
_Bool __result_obj__396;
    type_768=(struct sType*)come_increment_ref_count(self->type);
    come_value_769=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1809, "struct CVALUE*"))));
    __dec_obj185=come_value_769->c_value,
    come_value_769->c_value=(char*)come_increment_ref_count(make_type_name_string(type_768,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj186=come_value_769->type,
    come_value_769->type=(struct sType*)come_increment_ref_count(type_768);
    /*b*/ come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_769->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_769));
    __result_obj__396 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_768,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_769,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__396;
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
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1sType$ph* method_generics_types_770;
void* __right_value764 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_771=0;
char* Err_772=0;
void* __right_value765 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_773=0;
char* name_774=0;
_Bool err_775=0;
void* __right_value766 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_776=0;
char* Err_777=0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_778;
_Bool _va_arg_779;
char* p_780;
int sline_781;
_Bool err_flag_782;
void* __right_value770 = (void*)0;
char* label_783;
void* __right_value771 = (void*)0;
char* __dec_obj187;
char* __dec_obj188;
_Bool no_comma_784;
_Bool in_fun_param_785;
void* __right_value772 = (void*)0;
struct sNode* node_786;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
_Bool guard_break_791;
struct buffer* method_block_792;
int method_block_sline_793;
char* head_794;
void* __right_value779 = (void*)0;
char* tail_795;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct buffer* __dec_obj195;
int len_796;
void* __right_value782 = (void*)0;
char* mem_797;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value785 = (void*)0;
struct sNode* node_798;
void* __right_value786 = (void*)0;
struct sNode* __dec_obj196;
struct sNode* __result_obj__399;
    method_generics_types_770=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1823, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value764=err_msg(info,"unexpected source end")));
                come_exception_var_c1_771=multiple_assign_var29->v1;
                Err_772=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_772)?(puts(Err_772),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value764,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_772 = come_decrement_ref_count(Err_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value765=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_773=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_774=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_775=multiple_assign_var30->v3;
                /*c*/ come_call_finalizer3(__right_value765,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_775) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value766=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_776=multiple_assign_var31->v1;
                    Err_777=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_777)?(puts(Err_777),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value766,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_777 = come_decrement_ref_count(Err_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph_push_back(method_generics_types_770,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_773)));
                /*c*/ come_call_finalizer3(type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_774 = come_decrement_ref_count(name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_778=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1861, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_779=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_780=info->p;
        sline_781=info->sline;
        err_flag_782=(_Bool)0;
        label_783=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj187=label_783,
            label_783=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_782=(_Bool)1;
        }
        if(        err_flag_782==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj188=label_783,
            label_783=((void*)0);
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_780;
            info->sline=sline_781;
        }
        no_comma_784=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_785=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_786=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj189=node_786,
        node_786=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_786),info));
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_784;
        info->in_fun_param=in_fun_param_785;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_778,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1909, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_783),(struct sNode*)come_increment_ref_count(node_786))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_783 = come_decrement_ref_count(label_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_786) ? node_786 = come_decrement_ref_count(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_783 = come_decrement_ref_count(label_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_786) ? node_786 = come_decrement_ref_count(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_779;
    guard_break_791=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_791=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_792=((void*)0);
    method_block_sline_793=0;
    if(    *info->p==123) {
        head_794=info->p;
        method_block_sline_793=info->sline;
        ((char*)(__right_value779=skip_block(info)));
        (__right_value779 = come_decrement_ref_count(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_795=info->p;
        __dec_obj195=method_block_792,
        method_block_792=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1946, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj195,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_796=tail_795-head_794;
        mem_797=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_796+1)), "05call.c", 1949, "char*"));
        memcpy(mem_797,head_794,len_796);
        mem_797[len_796]=0;
        buffer_append_str(method_block_792,mem_797);
        buffer_append_str(method_block_792,"\n");
        (mem_797 = come_decrement_ref_count(mem_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1959, "struct sNode");
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value784=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1959, "struct sFunCallNode*")),fun_name,params_778,guard_break_791,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_770),(struct buffer*)come_increment_ref_count(method_block_792),method_block_sline_793,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_798=(struct sNode*)come_increment_ref_count(_inf_value6);
    /*c*/ come_call_finalizer3(__right_value784,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj196=node_798,
    node_798=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_798),info));
    (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__399 = come_increment_ref_count(node_798);
    /*c*/ come_call_finalizer3(method_generics_types_770,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_778,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_792,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_798) ? node_798 = come_decrement_ref_count(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__399) ? __result_obj__399 = come_decrement_ref_count(__result_obj__399, ((struct sNode*)__result_obj__399)->finalize, ((struct sNode*)__result_obj__399)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__399;
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
void* __right_value774 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_787;
struct tuple2$2char$phsNode$ph* __dec_obj190;
void* __right_value775 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_788;
struct tuple2$2char$phsNode$ph* __dec_obj191;
void* __right_value776 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_789;
struct tuple2$2char$phsNode$ph* __dec_obj192;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__397;
    if(    self->len==0) {
        litem_787=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value774=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1227, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_787->prev=((void*)0);
        litem_787->next=((void*)0);
        __dec_obj190=litem_787->item,
        litem_787->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj190,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_787;
        self->head=litem_787;
    }
    else if(    self->len==1) {
        litem_788=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value775=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1237, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_788->prev=self->head;
        litem_788->next=((void*)0);
        __dec_obj191=litem_788->item,
        litem_788->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj191,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_788;
        self->head->next=litem_788;
    }
    else {
        litem_789=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value776=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1247, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_789->prev=self->tail;
        litem_789->next=((void*)0);
        __dec_obj192=litem_789->item,
        litem_789->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj192,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_789;
        self->tail=litem_789;
    }
    self->len++;
    __result_obj__397 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__397;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_790;
    result_790=0;
    result_790+=int_get_hash_key(((int)self->v1));
    result_790+=int_get_hash_key(((int)self->v2));
    return result_790;
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
char* __dec_obj193;
struct sNode* __dec_obj194;
struct tuple2$2char$phsNode$ph* __result_obj__398;
    __dec_obj193=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj194=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__398 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__398,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__398;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value787 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_799=0;
char* Err_800=0;
struct sNode* __result_obj__400;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value787=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_exception_var_c3_799=multiple_assign_var32->v1;
    Err_800=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_800)?(puts(Err_800),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value787,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    stackframe();
    exit(3);
    __result_obj__400 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_800 = come_decrement_ref_count(Err_800, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__400) ? __result_obj__400 = come_decrement_ref_count(__result_obj__400, ((struct sNode*)__result_obj__400)->finalize, ((struct sNode*)__result_obj__400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__400;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value794 = (void*)0;
struct sNode* __result_obj__403;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1980, "struct sNode");
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value789=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1980, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result_obj__403 = come_increment_ref_count(((struct sNode*)(__right_value794=_inf_value7)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value789,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value794) ? __right_value794 = come_decrement_ref_count(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__403;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__401;
void* __right_value790 = (void*)0;
struct sReturnNode* result_801;
void* __right_value791 = (void*)0;
char* __dec_obj197;
void* __right_value792 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value793 = (void*)0;
char* __dec_obj199;
struct sReturnNode* __result_obj__402;
    if(    self==(void*)0) {
        __result_obj__401 = (void*)0;
        return __result_obj__401;
    }
    result_801=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_801->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_801->sname,
        result_801->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_801->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj198=result_801->value,
        result_801->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj199=result_801->value_source,
        result_801->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__402 = result_801;
    /*c*/ come_call_finalizer3(result_801,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__402;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value798 = (void*)0;
struct sNode* __result_obj__404;
char* head_802;
void* __right_value799 = (void*)0;
struct sNode* value_803;
char* tail_804;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj200;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value804 = (void*)0;
struct sNode* __result_obj__405;
int nest_806;
char* head_807;
int head_sline_808;
int sline_real_809;
void* __right_value805 = (void*)0;
char* buf_810;
_Bool is_type_name__811;
_Bool is_special_word_813;
_Bool define_function_pointer_flag_814;
void* __right_value806 = (void*)0;
_Bool lambda_flag_815;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
char* word2_816;
_Bool fun_name_with_type_name_817;
void* __right_value809 = (void*)0;
char* word2_818;
_Bool call_method_generics_fun_call_819;
void* __right_value810 = (void*)0;
char* __dec_obj201;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
_Bool _if_conditional37;
int nest_820;
_Bool inline_asm_821;
void* __right_value815 = (void*)0;
char* __dec_obj202;
void* __right_value816 = (void*)0;
char* __dec_obj203;
void* __right_value817 = (void*)0;
char* __dec_obj204;
void* __right_value818 = (void*)0;
struct sNode* node_822;
struct sNode* __result_obj__406;
_Bool no_comma_823;
void* __right_value819 = (void*)0;
struct sNode* exp_824;
void* __right_value820 = (void*)0;
struct sNode* exp2_825;
void* __right_value821 = (void*)0;
struct sNode* __result_obj__407;
void* __right_value822 = (void*)0;
char* block_text_826;
char* contents_827;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value828 = (void*)0;
struct sNode* __result_obj__410;
void* __right_value829 = (void*)0;
struct sNode* node_829;
struct sNode* __result_obj__411;
void* __right_value830 = (void*)0;
struct sNode* node_830;
struct sNode* __result_obj__412;
struct buffer* come_block_831;
int come_block_sline_832;
char* head_833;
void* __right_value831 = (void*)0;
char* tail_834;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* __dec_obj207;
int len_835;
void* __right_value834 = (void*)0;
char* mem_836;
char* head_837;
_Bool no_output_come_code_838;
void* __right_value835 = (void*)0;
char* tail_839;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct buffer* __dec_obj208;
int len_840;
void* __right_value838 = (void*)0;
char* mem_841;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value844 = (void*)0;
struct sNode* node_842;
struct sNode* __result_obj__415;
struct buffer* come_block_844;
int come_block_sline_845;
void* __right_value845 = (void*)0;
struct sNode* node_846;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value851 = (void*)0;
struct sNode* __result_obj__418;
int time_out_848;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct list$1sNode$ph* vars_849;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1sBlock$ph* blocks_850;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sBlock* else_block_851;
void* __right_value858 = (void*)0;
struct sBlock* __dec_obj213;
void* __right_value859 = (void*)0;
struct sNode* var_name_852;
void* __right_value860 = (void*)0;
struct sBlock* block_853;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value910 = (void*)0;
struct sNode* __result_obj__442;
void* __right_value911 = (void*)0;
struct sNode* node_889;
struct sNode* __result_obj__443;
void* __right_value912 = (void*)0;
struct sNode* node_890;
struct sNode* __result_obj__444;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value917 = (void*)0;
struct sNode* __result_obj__447;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value922 = (void*)0;
struct sNode* __result_obj__450;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value927 = (void*)0;
struct sNode* __result_obj__453;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value932 = (void*)0;
struct sNode* __result_obj__456;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value937 = (void*)0;
struct sNode* __result_obj__459;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value942 = (void*)0;
struct sNode* __result_obj__462;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value947 = (void*)0;
struct sNode* __result_obj__465;
void* __right_value948 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_898=0;
char* name_899=0;
_Bool err_900=0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value954 = (void*)0;
struct sNode* __result_obj__468;
void* __right_value955 = (void*)0;
struct sNode* node_902;
struct sNode* __result_obj__469;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct buffer* buf2_903;
void* __right_value958 = (void*)0;
char* word_904;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct list$1sNode$ph* exps_905;
void* __right_value961 = (void*)0;
struct sNode* exp_906;
void* __right_value962 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_907=0;
char* Err_908=0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value970 = (void*)0;
struct sNode* __result_obj__472;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct buffer* fun_name_910;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sType* type_911;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct sClass* klass_915;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sType* __dec_obj242;
void* __right_value981 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_916=0;
char* Err_917=0;
void* __right_value982 = (void*)0;
char* buf2_918;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sNode* node_919;
struct sNode* __result_obj__477;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct buffer* fun_name_920;
void* __right_value987 = (void*)0;
char* buf2_921;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sNode* node_922;
struct sNode* __result_obj__478;
void* __right_value990 = (void*)0;
struct sNode* node_923;
struct sNode* __result_obj__479;
void* __right_value991 = (void*)0;
struct sNode* node_924;
struct sNode* __result_obj__480;
void* __right_value992 = (void*)0;
struct sNode* node_925;
struct sNode* __result_obj__481;
void* __right_value993 = (void*)0;
struct sNode* node_926;
struct sNode* __result_obj__482;
void* __right_value994 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_927=0;
char* Err_928=0;
struct sNode* __result_obj__483;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1993, "struct sNode");
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value797=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1993, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__404 = come_increment_ref_count(((struct sNode*)(__right_value798=_inf_value8)));
            /*c*/ come_call_finalizer3(__right_value797,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value798) ? __right_value798 = come_decrement_ref_count(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__404) ? __result_obj__404 = come_decrement_ref_count(__result_obj__404, ((struct sNode*)__result_obj__404)->finalize, ((struct sNode*)__result_obj__404)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__404;
        }
        else {
            head_802=info->p;
            value_803=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_804=info->p;
            __dec_obj200=value_803,
            value_803=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_803),info));
            (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_805[tail_804-head_802+1];
            memset(&buf_805, 0, sizeof(char)            *(tail_804-head_802+1)            );
            memcpy(buf_805,head_802,tail_804-head_802);
            buf_805[tail_804-head_802]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2005, "struct sNode");
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value803=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2005, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_803),(char*)come_increment_ref_count(__builtin_string(buf_805)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__405 = come_increment_ref_count(((struct sNode*)(__right_value804=_inf_value9)));
            ((value_803) ? value_803 = come_decrement_ref_count(value_803, ((struct sNode*)value_803)->finalize, ((struct sNode*)value_803)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value803,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value804) ? __right_value804 = come_decrement_ref_count(__right_value804, ((struct sNode*)__right_value804)->finalize, ((struct sNode*)__right_value804)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__405) ? __result_obj__405 = come_decrement_ref_count(__result_obj__405, ((struct sNode*)__result_obj__405)->finalize, ((struct sNode*)__result_obj__405)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__405;
            ((value_803) ? value_803 = come_decrement_ref_count(value_803, ((struct sNode*)value_803)->finalize, ((struct sNode*)value_803)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_806=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_806++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_806--;
                if(                nest_806==0) {
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
        head_807=info->p;
        head_sline_808=info->sline;
        sline_real_809=info->sline_real;
        info->sline_real=info->sline;
        buf_810=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__811=is_type_name(buf_810,info);
        static char* is_special_word_array_812[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_813=charppa_contained(is_special_word_array_812,19,buf_810);
        define_function_pointer_flag_814=(_Bool)0;
        if(        !is_special_word_813&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value806=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value806,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_814=(_Bool)1;
                }
            }
            info->p=head_807;
            info->sline=head_sline_808;
        }
        lambda_flag_815=(_Bool)0;
        if(        !is_special_word_813&&is_type_name__811) {
            info->p=head_807;
            info->sline=head_sline_808;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value807=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value807,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_816=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_816,"lambda")) {
                lambda_flag_815=(_Bool)1;
            }
            info->p=head_807;
            info->sline=head_sline_808;
            (word2_816 = come_decrement_ref_count(word2_816, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_817=(_Bool)0;
        if(        !is_special_word_813) {
            info->p=head_807;
            info->sline=head_sline_808;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_818=(char*)come_increment_ref_count(parse_word(info));
                (word2_818 = come_decrement_ref_count(word2_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_817=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_807;
            info->sline=head_sline_808;
        }
        call_method_generics_fun_call_819=(_Bool)0;
        {
            info->p=head_807;
            info->sline=head_sline_808;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj201=buf_810,
                buf_810=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_810,info)&&((struct sVar*)(__right_value812=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value811=__builtin_string(buf_810))))))==((void*)0)&&((struct sVar*)(__right_value814=map$2char$phsVar$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value813=__builtin_string(buf_810))))))==((void*)0)&&*info->p==60)),            (__right_value811 = come_decrement_ref_count(__right_value811, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value812,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value813 = come_decrement_ref_count(__right_value813, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value814,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional37) {
                nest_820=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_820++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_820==0) {
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
                    call_method_generics_fun_call_819=(_Bool)1;
                }
            }
            info->p=head_807;
            info->sline=head_sline_808;
        }
        inline_asm_821=(_Bool)0;
        {
            info->p=head_807;
            info->sline=head_sline_808;
            __dec_obj202=buf_810,
            buf_810=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_810,"asm")||string_operator_equals(buf_810,"__asm")||string_operator_equals(buf_810,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_821=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj203=buf_810,
                        buf_810=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_821=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_807;
            info->sline=head_sline_808;
        }
        parse_sharp_v5(info);
        __dec_obj204=buf_810,
        buf_810=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_815) {
            info->p=head_807;
            info->sline=head_sline_808;
            node_822=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_809;
            __result_obj__406 = come_increment_ref_count(node_822);
            ((node_822) ? node_822 = come_decrement_ref_count(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__406) ? __result_obj__406 = come_decrement_ref_count(__result_obj__406, ((struct sNode*)__result_obj__406)->finalize, ((struct sNode*)__result_obj__406)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__406;
            ((node_822) ? node_822 = come_decrement_ref_count(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_810,"_Static_assert")||string_operator_equals(buf_810,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_823=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_824=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_823;
            expected_next_character(44,info);
            exp2_825=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__407 = come_increment_ref_count(((struct sNode*)(__right_value821=static_assert_node((struct sNode*)come_increment_ref_count(exp_824),(struct sNode*)come_increment_ref_count(exp2_825),info))));
            ((exp_824) ? exp_824 = come_decrement_ref_count(exp_824, ((struct sNode*)exp_824)->finalize, ((struct sNode*)exp_824)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_825) ? exp2_825 = come_decrement_ref_count(exp2_825, ((struct sNode*)exp2_825)->finalize, ((struct sNode*)exp2_825)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value821) ? __right_value821 = come_decrement_ref_count(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__407) ? __result_obj__407 = come_decrement_ref_count(__result_obj__407, ((struct sNode*)__result_obj__407)->finalize, ((struct sNode*)__result_obj__407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__407;
            ((exp_824) ? exp_824 = come_decrement_ref_count(exp_824, ((struct sNode*)exp_824)->finalize, ((struct sNode*)exp_824)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_825) ? exp2_825 = come_decrement_ref_count(exp2_825, ((struct sNode*)exp2_825)->finalize, ((struct sNode*)exp2_825)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_810,"output")&&*info->p==123) {
            block_text_826=(char*)come_increment_ref_count(skip_block(info));
            contents_827=(char*)come_increment_ref_count(block_text_826);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2243, "struct sNode");
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value824=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2243, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_827),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result_obj__410 = come_increment_ref_count(((struct sNode*)(__right_value828=_inf_value10)));
            (block_text_826 = come_decrement_ref_count(block_text_826, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_827 = come_decrement_ref_count(contents_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value824,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value828) ? __right_value828 = come_decrement_ref_count(__right_value828, ((struct sNode*)__right_value828)->finalize, ((struct sNode*)__right_value828)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__410) ? __result_obj__410 = come_decrement_ref_count(__result_obj__410, ((struct sNode*)__result_obj__410)->finalize, ((struct sNode*)__result_obj__410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__410;
            (block_text_826 = come_decrement_ref_count(block_text_826, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_827 = come_decrement_ref_count(contents_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_810,"extern")) {
            node_829=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__411 = come_increment_ref_count(node_829);
            ((node_829) ? node_829 = come_decrement_ref_count(node_829, ((struct sNode*)node_829)->finalize, ((struct sNode*)node_829)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__411;
            ((node_829) ? node_829 = come_decrement_ref_count(node_829, ((struct sNode*)node_829)->finalize, ((struct sNode*)node_829)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_810,"string")||string_operator_equals(buf_810,"wstring"))&&*info->p==40) {
            node_830=(struct sNode*)come_increment_ref_count(parse_function_call(buf_810,info,(_Bool)0));
            info->sline_real=sline_real_809;
            __result_obj__412 = come_increment_ref_count(node_830);
            ((node_830) ? node_830 = come_decrement_ref_count(node_830, ((struct sNode*)node_830)->finalize, ((struct sNode*)node_830)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__412) ? __result_obj__412 = come_decrement_ref_count(__result_obj__412, ((struct sNode*)__result_obj__412)->finalize, ((struct sNode*)__result_obj__412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__412;
            ((node_830) ? node_830 = come_decrement_ref_count(node_830, ((struct sNode*)node_830)->finalize, ((struct sNode*)node_830)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_810,"come")) {
            come_block_831=((void*)0);
            come_block_sline_832=0;
            if(            *info->p==123) {
                head_833=info->p;
                come_block_sline_832=info->sline;
                ((char*)(__right_value831=skip_block(info)));
                (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_834=info->p;
                __dec_obj207=come_block_831,
                come_block_831=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2268, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj207,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_835=tail_834-head_833;
                mem_836=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_835+1)), "05call.c", 2271, "char*"));
                memcpy(mem_836,head_833,len_835);
                mem_836[len_835]=0;
                buffer_append_str(come_block_831,mem_836);
                buffer_append_str(come_block_831,"\n");
                (mem_836 = come_decrement_ref_count(mem_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_837=info->p;
                come_block_sline_832=info->sline;
                no_output_come_code_838=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value835=expression_v13(info)));
                ((__right_value835) ? __right_value835 = come_decrement_ref_count(__right_value835, ((struct sNode*)__right_value835)->finalize, ((struct sNode*)__right_value835)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_838;
                tail_839=info->p;
                __dec_obj208=come_block_831,
                come_block_831=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2289, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj208,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_840=tail_839-head_837;
                mem_841=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_840+1)), "05call.c", 2292, "char*"));
                memcpy(mem_841,head_837,len_840);
                mem_841[len_840]=0;
                buffer_append_str(come_block_831,"{");
                buffer_append_str(come_block_831,mem_841);
                buffer_append_str(come_block_831,"; }");
                buffer_append_str(come_block_831,"}");
                buffer_append_str(come_block_831,"\n");
                (mem_841 = come_decrement_ref_count(mem_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2303, "struct sNode");
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value840=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2303, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_831),come_block_sline_832,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_842=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value840,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_809;
            __result_obj__415 = come_increment_ref_count(node_842);
            /*c*/ come_call_finalizer3(come_block_831,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_842) ? node_842 = come_decrement_ref_count(node_842, ((struct sNode*)node_842)->finalize, ((struct sNode*)node_842)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__415) ? __result_obj__415 = come_decrement_ref_count(__result_obj__415, ((struct sNode*)__result_obj__415)->finalize, ((struct sNode*)__result_obj__415)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__415;
            /*c*/ come_call_finalizer3(come_block_831,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_842) ? node_842 = come_decrement_ref_count(node_842, ((struct sNode*)node_842)->finalize, ((struct sNode*)node_842)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_810,"come_join")&&*info->p==40) {
            come_block_844=((void*)0);
            come_block_sline_845=0;
            expected_next_character(40,info);
            node_846=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_809;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2317, "struct sNode");
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value847=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2317, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_846),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result_obj__418 = come_increment_ref_count(((struct sNode*)(__right_value851=_inf_value12)));
            /*c*/ come_call_finalizer3(come_block_844,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_846) ? node_846 = come_decrement_ref_count(node_846, ((struct sNode*)node_846)->finalize, ((struct sNode*)node_846)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value847,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value851) ? __right_value851 = come_decrement_ref_count(__right_value851, ((struct sNode*)__right_value851)->finalize, ((struct sNode*)__right_value851)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__418) ? __result_obj__418 = come_decrement_ref_count(__result_obj__418, ((struct sNode*)__result_obj__418)->finalize, ((struct sNode*)__result_obj__418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__418;
            /*c*/ come_call_finalizer3(come_block_844,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_846) ? node_846 = come_decrement_ref_count(node_846, ((struct sNode*)node_846)->finalize, ((struct sNode*)node_846)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_810,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_848=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_848=time_out_848*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_849=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2335, "struct list$1sNode$ph*"))));
            blocks_850=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2336, "struct list$1sBlock$ph*"))));
            else_block_851=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2337, "struct sBlock*")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj213=else_block_851,
                    else_block_851=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj213,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_852=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_853=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_849,(struct sNode*)come_increment_ref_count(var_name_852));
                    list$1sBlock$ph_add(blocks_850,(struct sBlock*)come_increment_ref_count(block_853));
                    if(                    *info->p==125) {
                        ((var_name_852) ? var_name_852 = come_decrement_ref_count(var_name_852, ((struct sNode*)var_name_852)->finalize, ((struct sNode*)var_name_852)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_853,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_852) ? var_name_852 = come_decrement_ref_count(var_name_852, ((struct sNode*)var_name_852)->finalize, ((struct sNode*)var_name_852)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_853,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_809;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2367, "struct sNode");
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value865=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2367, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_849),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_850),(struct sBlock*)come_increment_ref_count(else_block_851),time_out_848,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result_obj__442 = come_increment_ref_count(((struct sNode*)(__right_value910=_inf_value13)));
            /*c*/ come_call_finalizer3(vars_849,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_850,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_851,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value865,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value910) ? __right_value910 = come_decrement_ref_count(__right_value910, ((struct sNode*)__right_value910)->finalize, ((struct sNode*)__right_value910)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__442) ? __result_obj__442 = come_decrement_ref_count(__result_obj__442, ((struct sNode*)__result_obj__442)->finalize, ((struct sNode*)__result_obj__442)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__442;
            /*c*/ come_call_finalizer3(vars_849,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_850,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_851,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_810,"none")&&*info->p==40) {
            node_889=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_809;
            __result_obj__443 = come_increment_ref_count(node_889);
            ((node_889) ? node_889 = come_decrement_ref_count(node_889, ((struct sNode*)node_889)->finalize, ((struct sNode*)node_889)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__443) ? __result_obj__443 = come_decrement_ref_count(__result_obj__443, ((struct sNode*)__result_obj__443)->finalize, ((struct sNode*)__result_obj__443)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__443;
            ((node_889) ? node_889 = come_decrement_ref_count(node_889, ((struct sNode*)node_889)->finalize, ((struct sNode*)node_889)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_810,"some")&&*info->p==40) {
            node_890=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_809;
            __result_obj__444 = come_increment_ref_count(node_890);
            ((node_890) ? node_890 = come_decrement_ref_count(node_890, ((struct sNode*)node_890)->finalize, ((struct sNode*)node_890)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__444) ? __result_obj__444 = come_decrement_ref_count(__result_obj__444, ((struct sNode*)__result_obj__444)->finalize, ((struct sNode*)__result_obj__444)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__444;
            ((node_890) ? node_890 = come_decrement_ref_count(node_890, ((struct sNode*)node_890)->finalize, ((struct sNode*)node_890)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_810,"__func__")||string_operator_equals(buf_810,"__FUNCTION__")) {
            info->sline_real=sline_real_809;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value914=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2384, "struct sFuncNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result_obj__447 = come_increment_ref_count(((struct sNode*)(__right_value917=_inf_value14)));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value914,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value917) ? __right_value917 = come_decrement_ref_count(__right_value917, ((struct sNode*)__right_value917)->finalize, ((struct sNode*)__right_value917)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__447) ? __result_obj__447 = come_decrement_ref_count(__result_obj__447, ((struct sNode*)__result_obj__447)->finalize, ((struct sNode*)__result_obj__447)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__447;
        }
        else if(        !gComeC&&string_operator_equals(buf_810,"wildcard")) {
            info->sline_real=sline_real_809;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value919=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2388, "struct sWildCard*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result_obj__450 = come_increment_ref_count(((struct sNode*)(__right_value922=_inf_value15)));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value919,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value922) ? __right_value922 = come_decrement_ref_count(__right_value922, ((struct sNode*)__right_value922)->finalize, ((struct sNode*)__right_value922)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__450) ? __result_obj__450 = come_decrement_ref_count(__result_obj__450, ((struct sNode*)__result_obj__450)->finalize, ((struct sNode*)__result_obj__450)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__450;
        }
        else if(        string_operator_equals(buf_810,"__line__")||string_operator_equals(buf_810,"__LINE__")) {
            info->sline_real=sline_real_809;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value924=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2392, "struct sLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result_obj__453 = come_increment_ref_count(((struct sNode*)(__right_value927=_inf_value16)));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value924,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value927) ? __right_value927 = come_decrement_ref_count(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__453) ? __result_obj__453 = come_decrement_ref_count(__result_obj__453, ((struct sNode*)__result_obj__453)->finalize, ((struct sNode*)__result_obj__453)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__453;
        }
        else if(        string_operator_equals(buf_810,"__sname__")) {
            info->sline_real=sline_real_809;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode");
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value929=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2396, "struct sSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result_obj__456 = come_increment_ref_count(((struct sNode*)(__right_value932=_inf_value17)));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value929,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value932) ? __right_value932 = come_decrement_ref_count(__right_value932, ((struct sNode*)__right_value932)->finalize, ((struct sNode*)__right_value932)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__456) ? __result_obj__456 = come_decrement_ref_count(__result_obj__456, ((struct sNode*)__result_obj__456)->finalize, ((struct sNode*)__result_obj__456)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__456;
        }
        else if(        string_operator_equals(buf_810,"__caller_func__")) {
            info->sline_real=sline_real_809;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode");
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value934=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2400, "struct sCallerFuncNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result_obj__459 = come_increment_ref_count(((struct sNode*)(__right_value937=_inf_value18)));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value934,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value937) ? __right_value937 = come_decrement_ref_count(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__459) ? __result_obj__459 = come_decrement_ref_count(__result_obj__459, ((struct sNode*)__result_obj__459)->finalize, ((struct sNode*)__result_obj__459)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__459;
        }
        else if(        string_operator_equals(buf_810,"__caller_line__")) {
            info->sline_real=sline_real_809;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2404, "struct sNode");
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value939=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2404, "struct sCallerLineNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result_obj__462 = come_increment_ref_count(((struct sNode*)(__right_value942=_inf_value19)));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value939,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value942) ? __right_value942 = come_decrement_ref_count(__right_value942, ((struct sNode*)__right_value942)->finalize, ((struct sNode*)__right_value942)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__462) ? __result_obj__462 = come_decrement_ref_count(__result_obj__462, ((struct sNode*)__result_obj__462)->finalize, ((struct sNode*)__result_obj__462)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__462;
        }
        else if(        string_operator_equals(buf_810,"__caller_sname__")) {
            info->sline_real=sline_real_809;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2408, "struct sNode");
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value944=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2408, "struct sCallerSNameNode*")),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result_obj__465 = come_increment_ref_count(((struct sNode*)(__right_value947=_inf_value20)));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value944,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value947) ? __right_value947 = come_decrement_ref_count(__right_value947, ((struct sNode*)__right_value947)->finalize, ((struct sNode*)__right_value947)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__465) ? __result_obj__465 = come_decrement_ref_count(__result_obj__465, ((struct sNode*)__result_obj__465)->finalize, ((struct sNode*)__result_obj__465)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__465;
        }
        else if(        info->va_arg&&is_type_name(buf_810,info)) {
            info->p=head_807;
            info->sline=head_sline_808;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value948=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_898=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_899=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_900=multiple_assign_var33->v3;
            /*c*/ come_call_finalizer3(__right_value948,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_809;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2417, "struct sNode");
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value950=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2417, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_898),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result_obj__468 = come_increment_ref_count(((struct sNode*)(__right_value954=_inf_value21)));
            /*c*/ come_call_finalizer3(type_898,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_899 = come_decrement_ref_count(name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value950,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value954) ? __right_value954 = come_decrement_ref_count(__right_value954, ((struct sNode*)__right_value954)->finalize, ((struct sNode*)__right_value954)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__468) ? __result_obj__468 = come_decrement_ref_count(__result_obj__468, ((struct sNode*)__result_obj__468)->finalize, ((struct sNode*)__result_obj__468)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__468;
            /*c*/ come_call_finalizer3(type_898,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_899 = come_decrement_ref_count(name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_810,"sizeof")||string_operator_equals(buf_810,"_Alignof")||string_operator_equals(buf_810,"_Alignas")||string_operator_equals(buf_810,"__alignof__")) {
            node_902=(struct sNode*)come_increment_ref_count(string_node_v21(buf_810,head_807,head_sline_808,info));
            info->sline_real=sline_real_809;
            __result_obj__469 = come_increment_ref_count(node_902);
            ((node_902) ? node_902 = come_decrement_ref_count(node_902, ((struct sNode*)node_902)->finalize, ((struct sNode*)node_902)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__469) ? __result_obj__469 = come_decrement_ref_count(__result_obj__469, ((struct sNode*)__result_obj__469)->finalize, ((struct sNode*)__result_obj__469)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__469;
            ((node_902) ? node_902 = come_decrement_ref_count(node_902, ((struct sNode*)node_902)->finalize, ((struct sNode*)node_902)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_821) {
            buf2_903=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2426, "struct buffer*"))));
            if(            *info->p!=40) {
                word_904=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_903,word_904);
                (word_904 = come_decrement_ref_count(word_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_903,40);
            exps_905=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2437, "struct list$1sNode$ph*"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_903,40);
                    info->p++;
                    exp_906=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_905,(struct sNode*)come_increment_ref_count(exp_906));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_903,41);
                    ((exp_906) ? exp_906 = come_decrement_ref_count(exp_906, ((struct sNode*)exp_906)->finalize, ((struct sNode*)exp_906)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_903,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_903,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value962=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_907=multiple_assign_var34->v1;
                    Err_908=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_908)?(puts(Err_908),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value962,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_908 = come_decrement_ref_count(Err_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_903,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_809;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2474, "struct sNode");
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value965=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2474, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_903)),(struct list$1sNode$ph*)come_increment_ref_count(exps_905),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result_obj__472 = come_increment_ref_count(((struct sNode*)(__right_value970=_inf_value22)));
            /*c*/ come_call_finalizer3(buf2_903,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_905,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value965,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value970) ? __right_value970 = come_decrement_ref_count(__right_value970, ((struct sNode*)__right_value970)->finalize, ((struct sNode*)__right_value970)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__472) ? __result_obj__472 = come_decrement_ref_count(__result_obj__472, ((struct sNode*)__result_obj__472)->finalize, ((struct sNode*)__result_obj__472)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__472;
            /*c*/ come_call_finalizer3(buf2_903,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_905,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_817) {
            fun_name_910=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2477, "struct buffer*"))));
            buffer_append_str(fun_name_910,buf_810);
            type_911=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value974=map$2char$phsType$ph$p_operator_load_element(info->types,((char*)(__right_value973=buffer_to_string(fun_name_910))))))));
            (__right_value973 = come_decrement_ref_count(__right_value973, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value974,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_911==((void*)0)) {
                klass_915=((struct sClass*)(__right_value977=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value976=buffer_to_string(fun_name_910))))));
                (__right_value976 = come_decrement_ref_count(__right_value976, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value977,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_915) {
                    __dec_obj242=type_911,
                    type_911=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2487, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_810)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj242,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value981=err_msg(info,"null type(%s)",buf_810)));
                    come_exception_var_c5_916=multiple_assign_var35->v1;
                    Err_917=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_917)?(puts(Err_917),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value981,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_917 = come_decrement_ref_count(Err_917, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_911->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_910,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_910,"_");
            buf2_918=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_910,buf2_918);
            node_919=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value983=buffer_to_string(fun_name_910))),info,(_Bool)0));
            (__right_value983 = come_decrement_ref_count(__right_value983, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_809;
            __result_obj__477 = come_increment_ref_count(node_919);
            /*c*/ come_call_finalizer3(fun_name_910,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_911,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_918 = come_decrement_ref_count(buf2_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_919) ? node_919 = come_decrement_ref_count(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__477) ? __result_obj__477 = come_decrement_ref_count(__result_obj__477, ((struct sNode*)__result_obj__477)->finalize, ((struct sNode*)__result_obj__477)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__477;
            /*c*/ come_call_finalizer3(fun_name_910,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_911,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_918 = come_decrement_ref_count(buf2_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_919) ? node_919 = come_decrement_ref_count(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_920=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2522, "struct buffer*"))));
            buffer_append_str(fun_name_920,buf_810);
            buffer_append_str(fun_name_920,"_");
            buf2_921=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_920,buf2_921);
            node_922=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value988=buffer_to_string(fun_name_920))),info,(_Bool)0));
            (__right_value988 = come_decrement_ref_count(__right_value988, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_809;
            __result_obj__478 = come_increment_ref_count(node_922);
            /*c*/ come_call_finalizer3(fun_name_920,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_921 = come_decrement_ref_count(buf2_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_922) ? node_922 = come_decrement_ref_count(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__478) ? __result_obj__478 = come_decrement_ref_count(__result_obj__478, ((struct sNode*)__result_obj__478)->finalize, ((struct sNode*)__result_obj__478)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__478;
            /*c*/ come_call_finalizer3(fun_name_920,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_921 = come_decrement_ref_count(buf2_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_922) ? node_922 = come_decrement_ref_count(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_819) {
            node_923=(struct sNode*)come_increment_ref_count(parse_function_call(buf_810,info,(_Bool)0));
            info->sline_real=sline_real_809;
            __result_obj__479 = come_increment_ref_count(node_923);
            ((node_923) ? node_923 = come_decrement_ref_count(node_923, ((struct sNode*)node_923)->finalize, ((struct sNode*)node_923)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__479) ? __result_obj__479 = come_decrement_ref_count(__result_obj__479, ((struct sNode*)__result_obj__479)->finalize, ((struct sNode*)__result_obj__479)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__479;
            ((node_923) ? node_923 = come_decrement_ref_count(node_923, ((struct sNode*)node_923)->finalize, ((struct sNode*)node_923)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_813&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__811)) {
            node_924=(struct sNode*)come_increment_ref_count(parse_function_call(buf_810,info,(_Bool)0));
            info->sline_real=sline_real_809;
            __result_obj__480 = come_increment_ref_count(node_924);
            ((node_924) ? node_924 = come_decrement_ref_count(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__480) ? __result_obj__480 = come_decrement_ref_count(__result_obj__480, ((struct sNode*)__result_obj__480)->finalize, ((struct sNode*)__result_obj__480)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__480;
            ((node_924) ? node_924 = come_decrement_ref_count(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_925=(struct sNode*)come_increment_ref_count(string_node_v21(buf_810,head_807,head_sline_808,info));
            info->sline_real=sline_real_809;
            __result_obj__481 = come_increment_ref_count(node_925);
            ((node_925) ? node_925 = come_decrement_ref_count(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__481) ? __result_obj__481 = come_decrement_ref_count(__result_obj__481, ((struct sNode*)__result_obj__481)->finalize, ((struct sNode*)__result_obj__481)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__481;
            ((node_925) ? node_925 = come_decrement_ref_count(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_810 = come_decrement_ref_count(buf_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_926=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__482 = come_increment_ref_count(node_926);
        ((node_926) ? node_926 = come_decrement_ref_count(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__482) ? __result_obj__482 = come_decrement_ref_count(__result_obj__482, ((struct sNode*)__result_obj__482)->finalize, ((struct sNode*)__result_obj__482)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__482;
        ((node_926) ? node_926 = come_decrement_ref_count(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value994=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_exception_var_c6_927=multiple_assign_var36->v1;
    Err_928=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_928)?(puts(Err_928),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value994,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__483 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_928 = come_decrement_ref_count(Err_928, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__483) ? __result_obj__483 = come_decrement_ref_count(__result_obj__483, ((struct sNode*)__result_obj__483)->finalize, ((struct sNode*)__result_obj__483)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__483;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__408;
void* __right_value825 = (void*)0;
struct sOutputNode* result_828;
void* __right_value826 = (void*)0;
char* __dec_obj205;
void* __right_value827 = (void*)0;
char* __dec_obj206;
struct sOutputNode* __result_obj__409;
    if(    self==(void*)0) {
        __result_obj__408 = (void*)0;
        return __result_obj__408;
    }
    result_828=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_828->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj205=result_828->sname,
        result_828->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_828->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj206=result_828->contents,
        result_828->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__409 = result_828;
    /*c*/ come_call_finalizer3(result_828,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__409;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__413;
void* __right_value841 = (void*)0;
struct sComeCallNode* result_843;
void* __right_value842 = (void*)0;
char* __dec_obj209;
void* __right_value843 = (void*)0;
struct buffer* __dec_obj210;
struct sComeCallNode* __result_obj__414;
    if(    self==(void*)0) {
        __result_obj__413 = (void*)0;
        return __result_obj__413;
    }
    result_843=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_843->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj209=result_843->sname,
        result_843->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_843->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj210=result_843->come_block,
        result_843->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_843->come_block_sline=self->come_block_sline;
    }
    __result_obj__414 = result_843;
    /*c*/ come_call_finalizer3(result_843,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__414;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__416;
void* __right_value848 = (void*)0;
struct sComeJoinNode* result_847;
void* __right_value849 = (void*)0;
char* __dec_obj211;
void* __right_value850 = (void*)0;
struct sNode* __dec_obj212;
struct sComeJoinNode* __result_obj__417;
    if(    self==(void*)0) {
        __result_obj__416 = (void*)0;
        return __result_obj__416;
    }
    result_847=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_847->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_847->sname,
        result_847->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_847->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj212=result_847->node,
        result_847->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__417 = result_847;
    /*c*/ come_call_finalizer3(result_847,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__417;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__419;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__419 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__419,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__419;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value861 = (void*)0;
struct list_item$1sBlock$ph* litem_854;
struct sBlock* __dec_obj214;
void* __right_value862 = (void*)0;
struct list_item$1sBlock$ph* litem_855;
struct sBlock* __dec_obj215;
void* __right_value863 = (void*)0;
struct list_item$1sBlock$ph* litem_856;
struct sBlock* __dec_obj216;
struct list$1sBlock$ph* __result_obj__420;
    if(    self->len==0) {
        litem_854=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value861=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1157, "struct list_item$1sBlock$ph*"))));
        litem_854->prev=((void*)0);
        litem_854->next=((void*)0);
        __dec_obj214=litem_854->item,
        litem_854->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj214,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_854;
        self->head=litem_854;
    }
    else if(    self->len==1) {
        litem_855=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value862=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1167, "struct list_item$1sBlock$ph*"))));
        litem_855->prev=self->head;
        litem_855->next=((void*)0);
        __dec_obj215=litem_855->item,
        litem_855->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj215,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_855;
        self->head->next=litem_855;
    }
    else {
        litem_856=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value863=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1177, "struct list_item$1sBlock$ph*"))));
        litem_856->prev=self->tail;
        litem_856->next=((void*)0);
        __dec_obj216=litem_856->item,
        litem_856->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj216,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_856;
        self->tail=litem_856;
    }
    self->len++;
    __result_obj__420 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__420;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__421;
void* __right_value866 = (void*)0;
struct sComePollNode* result_857;
void* __right_value867 = (void*)0;
char* __dec_obj217;
void* __right_value868 = (void*)0;
struct list$1sNode$ph* __dec_obj218;
void* __right_value908 = (void*)0;
struct list$1sBlock$ph* __dec_obj228;
void* __right_value909 = (void*)0;
struct sBlock* __dec_obj229;
struct sComePollNode* __result_obj__441;
    if(    self==(void*)0) {
        __result_obj__421 = (void*)0;
        return __result_obj__421;
    }
    result_857=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_857->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj217=result_857->sname,
        result_857->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_857->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj218=result_857->vars,
        result_857->vars=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->vars));
        /*b*/ come_call_finalizer3(__dec_obj218,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj228=result_857->blocks,
        result_857->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj228,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj229=result_857->else_block,
        result_857->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj229,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_857->time_out=self->time_out;
    }
    __result_obj__441 = result_857;
    /*c*/ come_call_finalizer3(result_857,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__441;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__422;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct list$1sBlock$ph* result_858;
struct list_item$1sBlock$ph* it_859;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1sBlock$ph* __result_obj__440;
    if(    self==((void*)0)) {
        __result_obj__422 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__422,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__422;
    }
    result_858=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1138, "struct list$1sBlock$ph*"))));
    it_859=self->head;
    while(it_859!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_858,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_859->item)));
        }
        else {
            list$1sBlock$ph_add(result_858,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_859->item)));
        }
        it_859=it_859->next;
    }
    __result_obj__440 = come_increment_ref_count(result_858);
    /*c*/ come_call_finalizer3(result_858,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__440,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__440;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__423;
void* __right_value871 = (void*)0;
struct sBlock* result_860;
void* __right_value876 = (void*)0;
struct list$1sNode$ph* __dec_obj219;
void* __right_value905 = (void*)0;
struct sVarTable* __dec_obj227;
struct sBlock* __result_obj__439;
    if(    self==(void*)0) {
        __result_obj__423 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__423,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__423;
    }
    result_860=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj219=result_860->mNodes,
        result_860->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj219,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj227=result_860->mVarTable,
        result_860->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj227,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_860->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__439 = come_increment_ref_count(result_860);
    /*c*/ come_call_finalizer3(result_860,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__439,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__439;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__424;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct list$1sNode$ph* result_861;
struct list_item$1sNode$ph* it_862;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1sNode$ph* __result_obj__425;
    if(    self==((void*)0)) {
        __result_obj__424 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__424,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__424;
    }
    result_861=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_862=self->head;
    while(it_862!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_861,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_862->item)));
        }
        else {
            list$1sNode$ph_add(result_861,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_862->item)));
        }
        it_862=it_862->next;
    }
    __result_obj__425 = come_increment_ref_count(result_861);
    /*c*/ come_call_finalizer3(result_861,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__425,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__425;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__426;
void* __right_value877 = (void*)0;
struct sVarTable* result_863;
void* __right_value904 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj226;
struct sVarTable* __result_obj__438;
    if(    self==(void*)0) {
        __result_obj__426 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__426,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__426;
    }
    result_863=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj226=result_863->mVars,
        result_863->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph_clone, self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj226,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_863->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_863->mParent=self->mParent;
    }
    __result_obj__438 = come_increment_ref_count(result_863);
    /*c*/ come_call_finalizer3(result_863,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__438,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__438;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__427;
void* __right_value878 = (void*)0;
void* __right_value884 = (void*)0;
struct map$2char$phsVar$ph* result_865;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct list$1char$ph* __dec_obj221;
char* it_866;
struct sVar* default_value_867;
void* __right_value887 = (void*)0;
struct sVar* it2_870;
void* __right_value893 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__437;
default_value_867 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__427 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__427,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__427;
    }
    result_865=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2113, "struct map$2char$phsVar$ph*"))));
    __dec_obj221=result_865->key_list,
    result_865->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2115, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj221,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_866=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_866=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_867,0,sizeof(struct sVar*));
        it2_870=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_866,(struct sVar*)come_increment_ref_count(default_value_867)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_865,(char*)come_increment_ref_count((char*)come_memdup(it_866, "./comelang.h", 2124, "char*")),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_870)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_865,(char*)come_increment_ref_count((char*)come_memdup(it_866, "./comelang.h", 2127, "char*")),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_870)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_865,(char*)come_increment_ref_count(it_866),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_870)));
        }
        else {
            map$2char$phsVar$ph_put(result_865,(char*)come_increment_ref_count(it_866),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_870)));
        }
        /*c*/ come_call_finalizer3(default_value_867,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_870,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__437 = come_increment_ref_count(result_865);
    /*c*/ come_call_finalizer3(result_865,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__437,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__437;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
int i_864;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct list$1char$ph* __dec_obj220;
struct map$2char$phsVar$ph* __result_obj__429;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value879=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2042, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value880=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2043, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value881=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2044, "_Bool*"))));
    for(    i_864=0;    i_864<128;    i_864++    ){
        self->item_existance[i_864]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj220=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2054, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj220,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__429 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__429,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__429;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__428;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__428 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__428,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__428;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_868;
unsigned int it_869;
struct sVar* __result_obj__430;
struct sVar* __result_obj__431;
struct sVar* __result_obj__432;
struct sVar* __result_obj__433;
    hash_868=string_get_hash_key(((char*)key))%self->size;
    it_869=hash_868;
    while((_Bool)1) {
        if(        self->item_existance[it_869]) {
            if(            string_equals(self->keys[it_869],key)) {
                __result_obj__430 = come_increment_ref_count(self->items[it_869]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__430,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__430;
            }
            it_869++;
            if(            it_869>=self->size) {
                it_869=0;
            }
            else if(            it_869==hash_868) {
                __result_obj__431 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__431,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__431;
            }
        }
        else {
            __result_obj__432 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__432,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__432;
        }
    }
    __result_obj__433 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__433,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__433;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_882;
int it_883;
_Bool same_key_exist_884;
char* it2_885;
struct map$2char$phsVar$ph* __result_obj__434;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_882=string_get_hash_key(((char*)key))%self->size;
    it_883=hash_882;
    while((_Bool)1) {
        if(        self->item_existance[it_883]) {
            if(            string_equals(self->keys[it_883],key)) {
                if(                1) {
                    (self->keys[it_883] = come_decrement_ref_count(self->keys[it_883], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_883]);
                    self->keys[it_883]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_883]);
                    self->keys[it_883]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_883],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_883]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_883]=item;
                }
                break;
            }
            it_883++;
            if(            it_883>=self->size) {
                it_883=0;
            }
            else if(            it_883==hash_882) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_883]=(_Bool)1;
            if(            1) {
                self->keys[it_883]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_883]=key;
            }
            if(            1) {
                self->items[it_883]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_883]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_884=(_Bool)0;
    for(    it2_885=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_885=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_885,key)) {
            same_key_exist_884=(_Bool)1;
        }
    }
    if(    !same_key_exist_884) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__434 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__434;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_871;
void* __right_value888 = (void*)0;
char** keys_872;
void* __right_value889 = (void*)0;
struct sVar** items_873;
void* __right_value890 = (void*)0;
_Bool* item_existance_874;
int len_875;
char* it_876;
struct sVar* default_value_877;
void* __right_value891 = (void*)0;
struct sVar* it2_878;
unsigned int hash_879;
int n_880;
struct sVar* default_value_881;
void* __right_value892 = (void*)0;
default_value_877 = (void*)0;
default_value_881 = (void*)0;
    size_871=self->size*10;
    keys_872=(char**)come_increment_ref_count(((char**)(__right_value888=(char**)come_calloc(1, sizeof(char*)*(1*(size_871)), "./comelang.h", 2281, "char**"))));
    items_873=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value889=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_871)), "./comelang.h", 2282, "struct sVar**"))));
    item_existance_874=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value890=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_871)), "./comelang.h", 2283, "_Bool*"))));
    len_875=0;
    for(    it_876=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_876=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_877,0,sizeof(struct sVar*));
        it2_878=((struct sVar*)(__right_value891=map$2char$phsVar$ph_at(self,it_876,(struct sVar*)come_increment_ref_count(default_value_877))));
        /*c*/ come_call_finalizer3(__right_value891,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_879=string_get_hash_key(((char*)it_876))%size_871;
        n_880=hash_879;
        while((_Bool)1) {
            if(            item_existance_874[n_880]) {
                n_880++;
                if(                n_880>=size_871) {
                    n_880=0;
                }
                else if(                n_880==hash_879) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_874[n_880]=(_Bool)1;
                keys_872[n_880]=it_876;
                items_873[n_880]=((struct sVar*)(__right_value892=map$2char$phsVar$ph_at(self,it_876,(struct sVar*)come_increment_ref_count(default_value_881))));
                /*c*/ come_call_finalizer3(__right_value892,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_875++;
                /*c*/ come_call_finalizer3(default_value_881,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_881,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_877,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_872;
    self->items=items_873;
    self->item_existance=item_existance_874;
    self->size=size_871;
    self->len=len_875;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__435;
void* __right_value894 = (void*)0;
struct sVar* result_886;
void* __right_value895 = (void*)0;
char* __dec_obj222;
void* __right_value896 = (void*)0;
char* __dec_obj223;
void* __right_value897 = (void*)0;
struct sType* __dec_obj224;
void* __right_value898 = (void*)0;
char* __dec_obj225;
struct sVar* __result_obj__436;
    if(    self==(void*)0) {
        __result_obj__435 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__435,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__435;
    }
    result_886=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj222=result_886->mName,
        result_886->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj223=result_886->mCValueName,
        result_886->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj224=result_886->mType,
        result_886->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj224,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_886->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_886->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_886->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj225=result_886->mFunName,
        result_886->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__436 = come_increment_ref_count(result_886);
    /*c*/ come_call_finalizer3(result_886,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__436,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__436;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_887;
int i_888;
    for(    i_887=0;    i_887<self->size;    i_887++    ){
        if(        self->item_existance[i_887]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_887],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_888=0;    i_888<self->size;    i_888++    ){
        if(        self->item_existance[i_888]) {
            if(            1) {
                (self->keys[i_888] = come_decrement_ref_count(self->keys[i_888], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__445;
void* __right_value915 = (void*)0;
struct sFuncNode* result_891;
void* __right_value916 = (void*)0;
char* __dec_obj230;
struct sFuncNode* __result_obj__446;
    if(    self==(void*)0) {
        __result_obj__445 = (void*)0;
        return __result_obj__445;
    }
    result_891=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_891->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_891->sname,
        result_891->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_891->sline_real=self->sline_real;
    }
    __result_obj__446 = result_891;
    /*c*/ come_call_finalizer3(result_891,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__446;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__448;
void* __right_value920 = (void*)0;
struct sWildCard* result_892;
void* __right_value921 = (void*)0;
char* __dec_obj231;
struct sWildCard* __result_obj__449;
    if(    self==(void*)0) {
        __result_obj__448 = (void*)0;
        return __result_obj__448;
    }
    result_892=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_892->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj231=result_892->sname,
        result_892->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_892->sline_real=self->sline_real;
    }
    __result_obj__449 = result_892;
    /*c*/ come_call_finalizer3(result_892,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__449;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__451;
void* __right_value925 = (void*)0;
struct sLineNode* result_893;
void* __right_value926 = (void*)0;
char* __dec_obj232;
struct sLineNode* __result_obj__452;
    if(    self==(void*)0) {
        __result_obj__451 = (void*)0;
        return __result_obj__451;
    }
    result_893=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_893->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_893->sname,
        result_893->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_893->sline_real=self->sline_real;
    }
    __result_obj__452 = result_893;
    /*c*/ come_call_finalizer3(result_893,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__452;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__454;
void* __right_value930 = (void*)0;
struct sSNameNode* result_894;
void* __right_value931 = (void*)0;
char* __dec_obj233;
struct sSNameNode* __result_obj__455;
    if(    self==(void*)0) {
        __result_obj__454 = (void*)0;
        return __result_obj__454;
    }
    result_894=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_894->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_894->sname,
        result_894->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_894->sline_real=self->sline_real;
    }
    __result_obj__455 = result_894;
    /*c*/ come_call_finalizer3(result_894,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__455;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__457;
void* __right_value935 = (void*)0;
struct sCallerFuncNode* result_895;
void* __right_value936 = (void*)0;
char* __dec_obj234;
struct sCallerFuncNode* __result_obj__458;
    if(    self==(void*)0) {
        __result_obj__457 = (void*)0;
        return __result_obj__457;
    }
    result_895=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_895->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_895->sname,
        result_895->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_895->sline_real=self->sline_real;
    }
    __result_obj__458 = result_895;
    /*c*/ come_call_finalizer3(result_895,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__458;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__460;
void* __right_value940 = (void*)0;
struct sCallerLineNode* result_896;
void* __right_value941 = (void*)0;
char* __dec_obj235;
struct sCallerLineNode* __result_obj__461;
    if(    self==(void*)0) {
        __result_obj__460 = (void*)0;
        return __result_obj__460;
    }
    result_896=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_896->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj235=result_896->sname,
        result_896->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_896->sline_real=self->sline_real;
    }
    __result_obj__461 = result_896;
    /*c*/ come_call_finalizer3(result_896,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__461;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__463;
void* __right_value945 = (void*)0;
struct sCallerSNameNode* result_897;
void* __right_value946 = (void*)0;
char* __dec_obj236;
struct sCallerSNameNode* __result_obj__464;
    if(    self==(void*)0) {
        __result_obj__463 = (void*)0;
        return __result_obj__463;
    }
    result_897=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_897->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_897->sname,
        result_897->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_897->sline_real=self->sline_real;
    }
    __result_obj__464 = result_897;
    /*c*/ come_call_finalizer3(result_897,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__464;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__466;
void* __right_value951 = (void*)0;
struct sVarArgTypeName* result_901;
void* __right_value952 = (void*)0;
char* __dec_obj237;
void* __right_value953 = (void*)0;
struct sType* __dec_obj238;
struct sVarArgTypeName* __result_obj__467;
    if(    self==(void*)0) {
        __result_obj__466 = (void*)0;
        return __result_obj__466;
    }
    result_901=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_901->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_901->sname,
        result_901->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_901->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj238=result_901->type,
        result_901->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj238,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__467 = result_901;
    /*c*/ come_call_finalizer3(result_901,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__467;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__470;
void* __right_value966 = (void*)0;
struct sInlineAssembler* result_909;
void* __right_value967 = (void*)0;
char* __dec_obj239;
void* __right_value968 = (void*)0;
char* __dec_obj240;
void* __right_value969 = (void*)0;
struct list$1sNode$ph* __dec_obj241;
struct sInlineAssembler* __result_obj__471;
    if(    self==(void*)0) {
        __result_obj__470 = (void*)0;
        return __result_obj__470;
    }
    result_909=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_909->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_909->sname,
        result_909->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_909->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj240=result_909->source,
        result_909->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj241=result_909->exps,
        result_909->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        /*b*/ come_call_finalizer3(__dec_obj241,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__471 = result_909;
    /*c*/ come_call_finalizer3(result_909,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__471;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_912;
unsigned int hash_913;
unsigned int it_914;
struct sType* __result_obj__473;
struct sType* __result_obj__474;
struct sType* __result_obj__475;
struct sType* __result_obj__476;
default_value_912 = (void*)0;
    memset(&default_value_912,0,sizeof(struct sType*));
    hash_913=string_get_hash_key(((char*)key))%self->size;
    it_914=hash_913;
    while((_Bool)1) {
        if(        self->item_existance[it_914]) {
            if(            string_equals(self->keys[it_914],key)) {
                __result_obj__473 = come_increment_ref_count(self->items[it_914]);
                /*c*/ come_call_finalizer3(default_value_912,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__473,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__473;
            }
            it_914++;
            if(            it_914>=self->size) {
                it_914=0;
            }
            else if(            it_914==hash_913) {
                __result_obj__474 = come_increment_ref_count(default_value_912);
                /*c*/ come_call_finalizer3(default_value_912,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__474,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__474;
            }
        }
        else {
            __result_obj__475 = come_increment_ref_count(default_value_912);
            /*c*/ come_call_finalizer3(default_value_912,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__475;
        }
    }
    __result_obj__476 = come_increment_ref_count(default_value_912);
    /*c*/ come_call_finalizer3(default_value_912,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__476,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__476;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value995 = (void*)0;
struct sNode* __result_obj__484;
    __result_obj__484 = come_increment_ref_count(((struct sNode*)(__right_value995=expression_node_v99(info))));
    ((__right_value995) ? __right_value995 = come_decrement_ref_count(__right_value995, ((struct sNode*)__right_value995)->finalize, ((struct sNode*)__right_value995)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__484) ? __result_obj__484 = come_decrement_ref_count(__result_obj__484, ((struct sNode*)__result_obj__484)->finalize, ((struct sNode*)__result_obj__484)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__484;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sNode* __dec_obj243;
struct sNode* __result_obj__485;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sNode* __dec_obj244;
struct sNode* __result_obj__486;
struct sNode* __result_obj__487;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj243=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__485 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__485) ? __result_obj__485 = come_decrement_ref_count(__result_obj__485, ((struct sNode*)__result_obj__485)->finalize, ((struct sNode*)__result_obj__485)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__485;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj244=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__486 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__486) ? __result_obj__486 = come_decrement_ref_count(__result_obj__486, ((struct sNode*)__result_obj__486)->finalize, ((struct sNode*)__result_obj__486)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__486;
    }
    __result_obj__487 = come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__487) ? __result_obj__487 = come_decrement_ref_count(__result_obj__487, ((struct sNode*)__result_obj__487)->finalize, ((struct sNode*)__result_obj__487)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__487;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1000 = (void*)0;
struct sNode* node_929;
void* __right_value1001 = (void*)0;
struct sNode* __dec_obj245;
struct sNode* __result_obj__488;
    node_929=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj245=node_929,
    node_929=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_929),info));
    (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__488 = come_increment_ref_count(node_929);
    ((node_929) ? node_929 = come_decrement_ref_count(node_929, ((struct sNode*)node_929)->finalize, ((struct sNode*)node_929)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__488) ? __result_obj__488 = come_decrement_ref_count(__result_obj__488, ((struct sNode*)__result_obj__488)->finalize, ((struct sNode*)__result_obj__488)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__488;
}

char* get_none_generics_name(char* class_name){
char* p_930;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
char* __result_obj__489;
void* __right_value1004 = (void*)0;
char* __result_obj__490;
    p_930=class_name;
    while(*p_930) {
        if(        *p_930==36) {
            __result_obj__489 = come_increment_ref_count(((char*)(__right_value1003=charp_substring(((char*)(__right_value1002=__builtin_string(class_name))),0,p_930-class_name))));
            (__right_value1002 = come_decrement_ref_count(__right_value1002, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1003 = come_decrement_ref_count(__right_value1003, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__489 = come_decrement_ref_count(__result_obj__489, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__489;
        }
        else {
            p_930++;
        }
    }
    __result_obj__490 = come_increment_ref_count(((char*)(__right_value1004=__builtin_string(class_name))));
    (__right_value1004 = come_decrement_ref_count(__right_value1004, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__490 = come_decrement_ref_count(__result_obj__490, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__490;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct buffer* buf_931;
struct sClass* klass_932;
char* class_name_933;
int i_934;
void* __right_value1007 = (void*)0;
struct sType* type_935;
void* __right_value1008 = (void*)0;
char* type_name_936;
int i_937;
void* __right_value1009 = (void*)0;
char* __result_obj__491;
    buf_931=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2622, "struct buffer*"))));
    klass_932=generics_type->mClass;
    class_name_933=klass_932->mName;
    buffer_append_str(buf_931,class_name_933);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_931,36);
        buffer_append_char(buf_931,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_934=0;        i_934<list$1sType$ph_length(generics_type->mGenericsTypes);        i_934++        ){
            type_935=((struct sType*)(__right_value1007=list$1sType$ph$p_operator_load_element(generics_type->mGenericsTypes,i_934)));
            /*c*/ come_call_finalizer3(__right_value1007,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_936=(char*)come_increment_ref_count(create_generics_name(type_935,info));
            buffer_append_str(buf_931,type_name_936);
            buffer_append_char(buf_931,36);
            for(            i_937=0;            i_937<type_935->mPointerNum;            i_937++            ){
                buffer_append_char(buf_931,112);
            }
            if(            type_935->mHeap) {
                buffer_append_str(buf_931,"h");
            }
            (type_name_936 = come_decrement_ref_count(type_name_936, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__491 = come_increment_ref_count(((char*)(__right_value1009=buffer_to_string(buf_931))));
    /*c*/ come_call_finalizer3(buf_931,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1009 = come_decrement_ref_count(__right_value1009, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__491 = come_decrement_ref_count(__result_obj__491, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__491;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_938;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct buffer* buf_939;
void* __right_value1012 = (void*)0;
char* __dec_obj246;
int i_940;
void* __right_value1013 = (void*)0;
char* __dec_obj247;
void* __right_value1014 = (void*)0;
char* __dec_obj248;
int i_941;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
char* __result_obj__492;
struct_name_938 = (void*)0;
    buf_939=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2657, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj246=struct_name_938,
        struct_name_938=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_939,"$");
            }
            for(            i_940=0;            i_940<obj_type->mOriginalTypeNamePointerNum;            i_940++            ){
                buffer_append_str(buf_939,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj247=struct_name_938,
        struct_name_938=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj248=struct_name_938,
        struct_name_938=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_939,"$");
        }
        for(        i_941=0;        i_941<obj_type->mPointerNum;        i_941++        ){
            buffer_append_str(buf_939,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_939,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_939,"pa");
    }
    __result_obj__492 = come_increment_ref_count(((char*)(__right_value1016=xsprintf("%s%s_%s",struct_name_938,((char*)(__right_value1015=buffer_to_string(buf_939))),fun_name))));
    (struct_name_938 = come_decrement_ref_count(struct_name_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_939,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1015 = come_decrement_ref_count(__right_value1015, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1016 = come_decrement_ref_count(__right_value1016, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__492 = come_decrement_ref_count(__result_obj__492, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__492;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_942;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct buffer* buf_943;
void* __right_value1019 = (void*)0;
char* __dec_obj249;
void* __right_value1020 = (void*)0;
char* __dec_obj250;
int i_944;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
char* __result_obj__493;
struct_name_942 = (void*)0;
    buf_943=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2698, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj249=struct_name_942,
        struct_name_942=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj250=struct_name_942,
        struct_name_942=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_943,"$");
        }
        for(        i_944=0;        i_944<obj_type->mPointerNum;        i_944++        ){
            buffer_append_str(buf_943,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_943,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_943,"pa");
    }
    __result_obj__493 = come_increment_ref_count(((char*)(__right_value1022=xsprintf("%s%s_%s",struct_name_942,((char*)(__right_value1021=buffer_to_string(buf_943))),fun_name))));
    (struct_name_942 = come_decrement_ref_count(struct_name_942, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_943,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1021 = come_decrement_ref_count(__right_value1021, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1022 = come_decrement_ref_count(__right_value1022, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__493 = come_decrement_ref_count(__result_obj__493, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__493;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_945;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct buffer* buf_946;
void* __right_value1025 = (void*)0;
char* __dec_obj251;
int i_947;
void* __right_value1026 = (void*)0;
char* __dec_obj252;
void* __right_value1027 = (void*)0;
char* __dec_obj253;
int i_948;
void* __right_value1028 = (void*)0;
int len_950;
void* __right_value1029 = (void*)0;
char* __result_obj__494;
struct_name_945 = (void*)0;
    buf_946=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2727, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj251=struct_name_945,
        struct_name_945=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_946,"$");
            }
            for(            i_947=0;            i_947<obj_type->mOriginalTypeNamePointerNum;            i_947++            ){
                buffer_append_str(buf_946,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj252=struct_name_945,
        struct_name_945=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj253=struct_name_945,
        struct_name_945=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_946,"$");
        }
        for(        i_948=0;        i_948<obj_type->mPointerNum;        i_948++        ){
            buffer_append_str(buf_946,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_946,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_946,"pa");
    }
    char none_method_name_949[charp_length(fun_name)+1];
    memset(&none_method_name_949, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_950=string_length(struct_name_945)+string_length(((char*)(__right_value1028=buffer_to_string(buf_946))));
    (__right_value1028 = come_decrement_ref_count(__right_value1028, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_949,fun_name+len_950+1,charp_length(fun_name)-len_950-1);
    none_method_name_949[charp_length(fun_name)-len_950-1]=0;
    __result_obj__494 = come_increment_ref_count(((char*)(__right_value1029=__builtin_string(none_method_name_949))));
    (struct_name_945 = come_decrement_ref_count(struct_name_945, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_946,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1029 = come_decrement_ref_count(__right_value1029, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__494 = come_decrement_ref_count(__result_obj__494, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__494;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1030 = (void*)0;
char* struct_name_951;
void* __right_value1031 = (void*)0;
char* __result_obj__495;
    struct_name_951=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__495 = come_increment_ref_count(((char*)(__right_value1031=xsprintf("%s_%s",struct_name_951,fun_name))));
    (struct_name_951 = come_decrement_ref_count(struct_name_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1031 = come_decrement_ref_count(__right_value1031, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__495 = come_decrement_ref_count(__result_obj__495, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__495;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1032 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_952=0;
char* Err_953=0;
struct sNode* __result_obj__496;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1032=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_exception_var_c7_952=multiple_assign_var37->v1;
    Err_953=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_953)?(puts(Err_953),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value1032,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__496 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_953 = come_decrement_ref_count(Err_953, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__496) ? __result_obj__496 = come_decrement_ref_count(__result_obj__496, ((struct sNode*)__result_obj__496)->finalize, ((struct sNode*)__result_obj__496)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__496;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_954;
char* p_955;
int sline_956;
_Bool err_flag_957;
void* __right_value1035 = (void*)0;
char* label_958;
void* __right_value1036 = (void*)0;
char* __dec_obj254;
char* __dec_obj255;
_Bool no_comma_959;
_Bool in_fun_param_960;
void* __right_value1037 = (void*)0;
struct sNode* node_961;
void* __right_value1038 = (void*)0;
struct sNode* __dec_obj256;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1047 = (void*)0;
struct sNode* __result_obj__499;
struct sNode* __result_obj__500;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_954=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2796, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_955=info->p;
            sline_956=info->sline;
            err_flag_957=(_Bool)0;
            label_958=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj254=label_958,
                label_958=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_957=(_Bool)1;
            }
            if(            err_flag_957==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj255=label_958,
                label_958=((void*)0);
                __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_955;
                info->sline=sline_956;
            }
            no_comma_959=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_960=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_961=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj256=node_961,
            node_961=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_961),info));
            (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_959;
            info->in_fun_param=in_fun_param_960;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_954,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2839, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_958),(struct sNode*)come_increment_ref_count(node_961))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_958 = come_decrement_ref_count(label_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_961) ? node_961 = come_decrement_ref_count(node_961, ((struct sNode*)node_961)->finalize, ((struct sNode*)node_961)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_958 = come_decrement_ref_count(label_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_961) ? node_961 = come_decrement_ref_count(node_961, ((struct sNode*)node_961)->finalize, ((struct sNode*)node_961)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2857, "struct sNode");
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1042=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2857, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_954,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result_obj__499 = come_increment_ref_count(((struct sNode*)(__right_value1047=_inf_value23)));
        /*c*/ come_call_finalizer3(params_954,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value1042,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value1047) ? __right_value1047 = come_decrement_ref_count(__right_value1047, ((struct sNode*)__right_value1047)->finalize, ((struct sNode*)__right_value1047)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__499) ? __result_obj__499 = come_decrement_ref_count(__result_obj__499, ((struct sNode*)__result_obj__499)->finalize, ((struct sNode*)__result_obj__499)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__499;
        /*c*/ come_call_finalizer3(params_954,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__500 = come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__500) ? __result_obj__500 = come_decrement_ref_count(__result_obj__500, ((struct sNode*)__result_obj__500)->finalize, ((struct sNode*)__result_obj__500)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__500;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__497;
void* __right_value1043 = (void*)0;
struct sLambdaCall* result_962;
void* __right_value1044 = (void*)0;
char* __dec_obj257;
void* __right_value1045 = (void*)0;
struct sNode* __dec_obj258;
void* __right_value1046 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj259;
struct sLambdaCall* __result_obj__498;
    if(    self==(void*)0) {
        __result_obj__497 = (void*)0;
        return __result_obj__497;
    }
    result_962=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_962->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj257=result_962->sname,
        result_962->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_962->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj258=result_962->node,
        result_962->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj259=result_962->params,
        result_962->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        /*b*/ come_call_finalizer3(__dec_obj259,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__498 = result_962;
    /*c*/ come_call_finalizer3(result_962,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__498;
}

