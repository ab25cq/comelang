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

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
    _Bool mUniq;
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
    _Bool mDefferRightValue;
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
    _Bool mExceptionGenericsType;
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
    _Bool mComma;
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
    _Bool mConstFun;
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
    _Bool mConstFun;
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
    struct sType* mObjType;
    char* mObjValue;
    _Bool mNoFree;
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
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
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
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
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
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
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
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
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
unsigned int _Bool_get_hash_key(_Bool value);
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
_Bool _Bool_clone(_Bool self);
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
char* _Bool_to_string(_Bool self);
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
int _Bool_compare(_Bool left, _Bool right);
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
void FILE_on_drop(struct _IO_FILE* self);
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
void int_times(int self, void* parent, void (*block)(void*,int));
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void sBlock_finalize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
static void sClassModule_finalize(struct sClassModule* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX1115, unsigned long  int anonymous_var_nameX1116, int anonymous_var_nameX1117);
int ppoll(struct pollfd* anonymous_var_nameX1118, unsigned long  int anonymous_var_nameX1119, const struct timespec* anonymous_var_nameX1120, const struct __sigset_t* anonymous_var_nameX1121);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
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
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
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
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
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
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
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
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
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
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
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
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
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
int i_121;
struct list$1char$* __result_obj__59;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_121=0;    i_121<num_value;    i_121++    ){
        list$1char$_push_back(self,values[i_121]);
    }
    __result_obj__59 = (struct list$1char$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_122;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_123;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_124;
struct list$1char$* __result_obj__58;
    if(    self->len==0) {
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1113, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1123, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1133, "struct list_item$1char$*"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_125;
struct list_item$1char$* prev_it_126;
    it_125=self->head;
    while(    it_125!=((void*)0)) {
        prev_it_126=it_125;
        it_125=it_125->next;
        /*c*/ come_call_finalizer3(prev_it_126,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_127;
struct list$1char$p* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_127=0;    i_127<num_value;    i_127++    ){
        list$1char$p_push_back(self,values[i_127]);
    }
    __result_obj__62 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_128;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_129;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_130;
struct list$1char$p* __result_obj__61;
    if(    self->len==0) {
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1113, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1123, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1133, "struct list_item$1char$p*"))));
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_131;
struct list_item$1char$p* prev_it_132;
    it_131=self->head;
    while(    it_131!=((void*)0)) {
        prev_it_132=it_131;
        it_131=it_131->next;
        /*c*/ come_call_finalizer3(prev_it_132,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_133;
struct list$1short$* __result_obj__65;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_133=0;    i_133<num_value;    i_133++    ){
        list$1short$_push_back(self,values[i_133]);
    }
    __result_obj__65 = (struct list$1short$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_134;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_135;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_136;
struct list$1short$* __result_obj__64;
    if(    self->len==0) {
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1113, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1123, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1133, "struct list_item$1short$*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_137;
struct list_item$1short$* prev_it_138;
    it_137=self->head;
    while(    it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*c*/ come_call_finalizer3(prev_it_138,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_139;
struct list$1int$* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1int$_push_back(self,values[i_139]);
    }
    __result_obj__68 = (struct list$1int$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_140;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_141;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_142;
struct list$1int$* __result_obj__67;
    if(    self->len==0) {
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1113, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1123, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1133, "struct list_item$1int$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__67 = self;
    return __result_obj__67;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_143;
struct list_item$1int$* prev_it_144;
    it_143=self->head;
    while(    it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_145;
struct list$1long$* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1long$_push_back(self,values[i_145]);
    }
    __result_obj__71 = (struct list$1long$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_146;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_147;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_148;
struct list$1long$* __result_obj__70;
    if(    self->len==0) {
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1113, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1123, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1133, "struct list_item$1long$*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__70 = self;
    return __result_obj__70;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_149;
struct list_item$1long$* prev_it_150;
    it_149=self->head;
    while(    it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_151;
struct list$1float$* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1float$_push_back(self,values[i_151]);
    }
    __result_obj__74 = (struct list$1float$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_152;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_153;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_154;
struct list$1float$* __result_obj__73;
    if(    self->len==0) {
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1113, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1123, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1133, "struct list_item$1float$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__73 = self;
    return __result_obj__73;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_155;
struct list_item$1float$* prev_it_156;
    it_155=self->head;
    while(    it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_157;
struct list$1double$* __result_obj__77;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1double$_push_back(self,values[i_157]);
    }
    __result_obj__77 = (struct list$1double$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_158;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_159;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_160;
struct list$1double$* __result_obj__76;
    if(    self->len==0) {
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1113, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1123, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1133, "struct list_item$1double$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__76 = self;
    return __result_obj__76;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_161;
struct list_item$1double$* prev_it_162;
    it_161=self->head;
    while(    it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__111 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*c*/ come_call_finalizer3(prev_it_197,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_201;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_202;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_203;
char* __dec_obj15;
struct list$1char$ph* __result_obj__113;
    if(    self->len==0) {
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        __dec_obj15=litem_203->item,
        litem_203->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__113 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
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
struct list_item$1sType$ph* it_239;
struct list_item$1sType$ph* prev_it_240;
    it_239=self->head;
    while(    it_239!=((void*)0)) {
        prev_it_240=it_239;
        it_239=it_239->next;
        /*c*/ come_call_finalizer3(prev_it_240,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_241;
struct list_item$1sNode$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
int i_243;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* __dec_obj20;
struct map$2char$phchar$ph* __result_obj__167;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value194=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value195=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1929, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value196=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_243=0;    i_243<128;    i_243++    ){
        self->item_existance[i_243]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj20=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj20,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__167 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__166;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__166 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__166,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_244;
struct list_item$1char$ph* prev_it_245;
    it_244=self->head;
    while(    it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        /*c*/ come_call_finalizer3(prev_it_245,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_246;
int i_247;
    for(    i_246=0;    i_246<self->size;    i_246++    ){
        if(        self->item_existance[i_246]) {
            if(            1) {
                (self->items[i_246] = come_decrement_ref_count(self->items[i_246], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_247=0;    i_247<self->size;    i_247++    ){
        if(        self->item_existance[i_247]) {
            if(            1) {
                (self->keys[i_247] = come_decrement_ref_count(self->keys[i_247], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_248;
int i_249;
    for(    i_248=0;    i_248<self->size;    i_248++    ){
        if(        self->item_existance[i_248]) {
            if(            1) {
                (self->items[i_248] = come_decrement_ref_count(self->items[i_248], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_249=0;    i_249<self->size;    i_249++    ){
        if(        self->item_existance[i_249]) {
            if(            1) {
                (self->keys[i_249] = come_decrement_ref_count(self->keys[i_249], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeader,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeaderStructs,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
int i_250;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1char$ph* __dec_obj23;
struct map$2char$phsVar$ph* __result_obj__169;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value203=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value204=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1929, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value205=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_250=0;    i_250<128;    i_250++    ){
        self->item_existance[i_250]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj23=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__169 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_251;
int i_252;
    for(    i_251=0;    i_251<self->size;    i_251++    ){
        if(        self->item_existance[i_251]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_251],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_252=0;    i_252<self->size;    i_252++    ){
        if(        self->item_existance[i_252]) {
            if(            1) {
                (self->keys[i_252] = come_decrement_ref_count(self->keys[i_252], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_253;
int i_254;
    for(    i_253=0;    i_253<self->size;    i_253++    ){
        if(        self->item_existance[i_253]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_253],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_254=0;    i_254<self->size;    i_254++    ){
        if(        self->item_existance[i_254]) {
            if(            1) {
                (self->keys[i_254] = come_decrement_ref_count(self->keys[i_254], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_255;
struct list_item$1sNode$ph* prev_it_256;
    it_255=self->head;
    while(    it_255!=((void*)0)) {
        prev_it_256=it_255;
        it_255=it_255->next;
        /*c*/ come_call_finalizer3(prev_it_256,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value218 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value219 = (void*)0;
char* __dec_obj32;
struct sReturnNode* __result_obj__176;
    ((struct sNodeBase*)(__right_value218=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value218,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj31=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj32=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__176 = (struct sReturnNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__176,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value220 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value220=__builtin_string("sReturnNode"))));
    (__right_value220 = come_decrement_ref_count(__right_value220, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_257;
void* __right_value259 = (void*)0;
struct sType* result_type_258;
void* __right_value260 = (void*)0;
struct sType* result_type2_278;
struct sType* result_type3_279;
_Bool Value_280;
_Bool __result_obj__192;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_281;
void* __right_value262 = (void*)0;
struct sType* come_value_type_282;
void* __right_value263 = (void*)0;
struct sType* __dec_obj57;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
char* type_name_284;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __if_result__0_285 = (void*)0;
struct list$1sVar$ph* o2_saved_286;
struct sVar* it_289;
void* __right_value274 = (void*)0;
struct list$1sVar$ph* __dec_obj58;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sFun* come_fun_296;
void* __if_result__1_297 = (void*)0;
struct list$1sVar$ph* o2_saved_298;
struct sVar* it_299;
void* __right_value280 = (void*)0;
struct list$1sVar$ph* __dec_obj59;
void* __right_value281 = (void*)0;
    if(    self->value) {
        come_fun_257=info->come_fun;
        result_type_258=(struct sType*)come_increment_ref_count(sType_clone(come_fun_257->mResultType));
        result_type2_278=(struct sType*)come_increment_ref_count(solve_generics(result_type_258,info->generics_type,info));
        result_type3_279=result_type2_278->mNoSolvedGenericsType;
        if(        result_type2_278->mNoSolvedGenericsType) {
            result_type3_279=result_type2_278->mNoSolvedGenericsType;
        }
        else {
            result_type3_279=result_type2_278;
        }
        Value_280=node_compile(self->value,info);
        if(        !Value_280) {
            __result_obj__192 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_258,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__192;
        }
        else {
        }
        come_value_281=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_282=(struct sType*)come_increment_ref_count(solve_generics(come_value_281->type,info->generics_type,info));
        __dec_obj57=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_281->type));
        /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_281->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_257->mBlock,info,come_value_281->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_281->c_value);
        }
        else {
            static int result_num_283=0;
            result_num_283++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value266=make_define_var(result_type2_278,((char*)(__right_value265=xsprintf("__result_obj__\%s",((char*)(__right_value264=int_to_string(result_num_283)))))),(_Bool)0,info))));
            (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_278->mClass->mName)>strlen("tuple")&&memcmp(result_type2_278->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_278,come_value_type_282,come_value_281,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2_278->mHeap) {
                    type_name_284=(char*)come_increment_ref_count(make_type_name_string(come_value_281->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value269=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value268=int_to_string(result_num_283)))))),type_name_284,come_value_281->c_value);
                    (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_284 = come_decrement_ref_count(type_name_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value271=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value270=int_to_string(result_num_283)))))),come_value_281->c_value);
                    (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value273=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value272=int_to_string(result_num_283)))))),come_value_281->c_value);
                (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_257->mBlock,info,come_value_281->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_286=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_289=list$1sVar$ph_begin((o2_saved_286));                    !list$1sVar$ph_end((o2_saved_286));                    it_289=list$1sVar$ph_next((o2_saved_286))                    ){
                        free_object(((struct sType*)(__right_value274=sType_clone(it_289->mType))),it_289->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value274,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_286,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __dec_obj58=info->match_it_var,
                    __if_result__0_285=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    /*b*/ come_call_finalizer3(__dec_obj58,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                /*c*/ come_call_finalizer3(__if_result__0_285,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value275=xsprintf("come_heap_final();\n"))));
                (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_278->mHeap) {
                free_object(result_type2_278,((char*)(__right_value277=xsprintf("__result_obj__\%s",((char*)(__right_value276=int_to_string(result_num_283)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value279=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value278=int_to_string(result_num_283)))))));
            (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(result_type_258,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_281,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_type_282,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_fun_296=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_296->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_298=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_299=list$1sVar$ph_begin((o2_saved_298));                !list$1sVar$ph_end((o2_saved_298));                it_299=list$1sVar$ph_next((o2_saved_298))                ){
                    free_object(((struct sType*)(__right_value280=sType_clone(it_299->mType))),it_299->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value280,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_298,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj59=info->match_it_var,
                __if_result__1_297=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                /*b*/ come_call_finalizer3(__dec_obj59,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            /*c*/ come_call_finalizer3(__if_result__1_297,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value281=xsprintf("come_heap_final();\n"))));
            (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
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
struct sType* __result_obj__178;
void* __right_value221 = (void*)0;
struct sType* result_259;
void* __right_value222 = (void*)0;
struct sType* __dec_obj33;
void* __right_value223 = (void*)0;
struct sType* __dec_obj34;
void* __right_value231 = (void*)0;
struct list$1sType$ph* __dec_obj38;
void* __right_value232 = (void*)0;
struct sType* __dec_obj39;
void* __right_value233 = (void*)0;
struct sType* __dec_obj40;
void* __right_value235 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj42;
void* __right_value237 = (void*)0;
char* __dec_obj43;
void* __right_value238 = (void*)0;
char* __dec_obj44;
void* __right_value239 = (void*)0;
char* __dec_obj45;
void* __right_value247 = (void*)0;
struct list$1sNode$ph* __dec_obj49;
void* __right_value248 = (void*)0;
char* __dec_obj50;
void* __right_value249 = (void*)0;
struct list$1sType$ph* __dec_obj51;
void* __right_value257 = (void*)0;
struct list$1char$ph* __dec_obj55;
void* __right_value258 = (void*)0;
struct sType* __dec_obj56;
struct sType* __result_obj__191;
    if(    self==(void*)0) {
        __result_obj__178 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__178,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_259=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_259->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj33=result_259->mOriginalLoadVarType,
        result_259->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj34=result_259->mChannelType,
        result_259->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj38=result_259->mGenericsTypes,
        result_259->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj39=result_259->mNoSolvedGenericsType,
        result_259->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_259->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj40=result_259->mAnyOriginalType,
        result_259->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj41=result_259->mSizeNum,
        result_259->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj42=result_259->mAlignas,
        result_259->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj43=result_259->mTupleName,
        result_259->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj44=result_259->mAttribute,
        result_259->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_259->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_259->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_259->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_259->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_259->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_259->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_259->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_259->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_259->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_259->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_259->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_259->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_259->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_259->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_259->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_259->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_259->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_259->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_259->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_259->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_259->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_259->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_259->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_259->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj45=result_259->mAsmName,
        result_259->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_259->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_259->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_259->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj49=result_259->mArrayNum,
        result_259->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj49,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_259->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_259->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_259->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_259->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_259->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj50=result_259->mOriginalTypeName,
        result_259->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_259->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_259->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_259->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_259->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj51=result_259->mParamTypes,
        result_259->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj51,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj55=result_259->mParamNames,
        result_259->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj55,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj56=result_259->mResultType,
        result_259->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_259->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_259->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__191 = (struct sType*)come_increment_ref_count(result_259);
    /*c*/ come_call_finalizer3(result_259,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__179;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1sType$ph* result_260;
struct list_item$1sType$ph* it_261;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1sType$ph* __result_obj__182;
    if(    self==((void*)0)) {
        __result_obj__179 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__179,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__179;
    }
    result_260=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_261=self->head;
    while(    it_261!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_260,(struct sType*)come_increment_ref_count(sType_clone(it_261->item)));
        }
        else {
            list$1sType$ph_add(result_260,(struct sType*)come_increment_ref_count(sType_clone(it_261->item)));
        }
        it_261=it_261->next;
    }
    __result_obj__182 = (struct list$1sType$ph*)come_increment_ref_count(result_260);
    /*c*/ come_call_finalizer3(result_260,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__182,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__180;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__180 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value226 = (void*)0;
struct list_item$1sType$ph* litem_262;
struct sType* __dec_obj35;
void* __right_value227 = (void*)0;
struct list_item$1sType$ph* litem_263;
struct sType* __dec_obj36;
void* __right_value228 = (void*)0;
struct list_item$1sType$ph* litem_264;
struct sType* __dec_obj37;
struct list$1sType$ph* __result_obj__181;
    if(    self->len==0) {
        litem_262=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value226=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj35=litem_262->item,
        litem_262->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value227=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj36=litem_263->item,
        litem_263->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value228=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj37=litem_264->item,
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result_obj__181 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_265;
struct list_item$1sType$ph* prev_it_266;
    it_265=self->head;
    while(    it_265!=((void*)0)) {
        prev_it_266=it_265;
        it_265=it_265->next;
        /*c*/ come_call_finalizer3(prev_it_266,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__183;
void* __right_value234 = (void*)0;
struct sNode* result_267;
struct sNode* __result_obj__184;
    if(    self==(void*)0) {
        __result_obj__183 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__183;
    }
    result_267=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_267->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_267->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_267->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_267->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_267->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_267->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_267->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_267->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_267->kind=self->kind;
    }
    __result_obj__184 = (struct sNode*)come_increment_ref_count(result_267);
    ((result_267) ? result_267 = come_decrement_ref_count(result_267, ((struct sNode*)result_267)->finalize, ((struct sNode*)result_267)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__184;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__185;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1sNode$ph* result_268;
struct list_item$1sNode$ph* it_269;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sNode$ph* __result_obj__187;
    if(    self==((void*)0)) {
        __result_obj__185 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__185,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__185;
    }
    result_268=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_269=self->head;
    while(    it_269!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_268,(struct sNode*)come_increment_ref_count(sNode_clone(it_269->item)));
        }
        else {
            list$1sNode$ph_add(result_268,(struct sNode*)come_increment_ref_count(sNode_clone(it_269->item)));
        }
        it_269=it_269->next;
    }
    __result_obj__187 = (struct list$1sNode$ph*)come_increment_ref_count(result_268);
    /*c*/ come_call_finalizer3(result_268,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value242 = (void*)0;
struct list_item$1sNode$ph* litem_270;
struct sNode* __dec_obj46;
void* __right_value243 = (void*)0;
struct list_item$1sNode$ph* litem_271;
struct sNode* __dec_obj47;
void* __right_value244 = (void*)0;
struct list_item$1sNode$ph* litem_272;
struct sNode* __dec_obj48;
struct list$1sNode$ph* __result_obj__186;
    if(    self->len==0) {
        litem_270=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value242=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_270->prev=((void*)0);
        litem_270->next=((void*)0);
        __dec_obj46=litem_270->item,
        litem_270->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_270;
        self->head=litem_270;
    }
    else if(    self->len==1) {
        litem_271=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value243=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_271->prev=self->head;
        litem_271->next=((void*)0);
        __dec_obj47=litem_271->item,
        litem_271->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_271;
        self->head->next=litem_271;
    }
    else {
        litem_272=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value244=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_272->prev=self->tail;
        litem_272->next=((void*)0);
        __dec_obj48=litem_272->item,
        litem_272->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_272;
        self->tail=litem_272;
    }
    self->len++;
    __result_obj__186 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__186;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__188;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1char$ph* result_273;
struct list_item$1char$ph* it_274;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct list$1char$ph* __result_obj__190;
    if(    self==((void*)0)) {
        __result_obj__188 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__188,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__188;
    }
    result_273=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_274=self->head;
    while(    it_274!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_273,(char*)come_increment_ref_count((char*)come_memdup(it_274->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_273,(char*)come_increment_ref_count((char*)come_memdup(it_274->item, "./comelang.h", 1032, "char*")));
        }
        it_274=it_274->next;
    }
    __result_obj__190 = (struct list$1char$ph*)come_increment_ref_count(result_273);
    /*c*/ come_call_finalizer3(result_273,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value252 = (void*)0;
struct list_item$1char$ph* litem_275;
char* __dec_obj52;
void* __right_value253 = (void*)0;
struct list_item$1char$ph* litem_276;
char* __dec_obj53;
void* __right_value254 = (void*)0;
struct list_item$1char$ph* litem_277;
char* __dec_obj54;
struct list$1char$ph* __result_obj__189;
    if(    self->len==0) {
        litem_275=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value252=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_275->prev=((void*)0);
        litem_275->next=((void*)0);
        __dec_obj52=litem_275->item,
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_275;
        self->head=litem_275;
    }
    else if(    self->len==1) {
        litem_276=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value253=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_276->prev=self->head;
        litem_276->next=((void*)0);
        __dec_obj53=litem_276->item,
        litem_276->item=(char*)come_increment_ref_count(item);
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_276;
        self->head->next=litem_276;
    }
    else {
        litem_277=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value254=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_277->prev=self->tail;
        litem_277->next=((void*)0);
        __dec_obj54=litem_277->item,
        litem_277->item=(char*)come_increment_ref_count(item);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_277;
        self->tail=litem_277;
    }
    self->len++;
    __result_obj__189 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__189;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_287;
struct sVar* __result_obj__193;
struct sVar* __result_obj__194;
struct sVar* result_288;
struct sVar* __result_obj__195;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_287,0,sizeof(struct sVar*));
        __result_obj__193 = result_287;
        return __result_obj__193;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__194 = self->it->item;
        return __result_obj__194;
    }
    memset(&result_288,0,sizeof(struct sVar*));
    __result_obj__195 = result_288;
    return __result_obj__195;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_290;
struct sVar* __result_obj__196;
struct sVar* __result_obj__197;
struct sVar* result_291;
struct sVar* __result_obj__198;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_290,0,sizeof(struct sVar*));
        __result_obj__196 = result_290;
        return __result_obj__196;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__197 = self->it->item;
        return __result_obj__197;
    }
    memset(&result_291,0,sizeof(struct sVar*));
    __result_obj__198 = result_291;
    return __result_obj__198;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_292;
struct list_item$1sVar$ph* prev_it_293;
    it_292=self->head;
    while(    it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        /*c*/ come_call_finalizer3(prev_it_293,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_294;
struct list_item$1sVar$ph* prev_it_295;
    it_294=self->head;
    while(    it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*c*/ come_call_finalizer3(prev_it_295,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value282 = (void*)0;
char* __dec_obj60;
struct sOutputNode* __result_obj__199;
    ((struct sNodeBase*)(__right_value282=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value282,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj60=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__199 = (struct sOutputNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__199,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value283 = (void*)0;
char* __result_obj__200;
    __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value283=__builtin_string("sOutputNode"))));
    (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__200;
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
void* __right_value284 = (void*)0;
char* __dec_obj61;
struct list$1sNode$ph* __dec_obj62;
struct sInlineAssembler* __result_obj__201;
    ((struct sNodeBase*)(__right_value284=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value284,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj61=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj62=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    /*b*/ come_call_finalizer3(__dec_obj62,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__201 = (struct sInlineAssembler*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value285 = (void*)0;
char* __result_obj__202;
    __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value285=__builtin_string("sInlineAssembler"))));
    (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__202;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_300;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct CVALUE* come_value_301;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct buffer* buf_302;
char* p_303;
_Bool dquort_304;
int num_exp_305;
void* __right_value290 = (void*)0;
struct sNode* node_306;
_Bool Value_313;
_Bool __result_obj__207;
void* __right_value291 = (void*)0;
struct CVALUE* come_value_314;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj63;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__209;
    source_300=(char*)come_increment_ref_count(self->source);
    come_value_301=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 179, "struct CVALUE*"))));
    buf_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 181, "struct buffer*"))));
    p_303=source_300;
    while(    *p_303!=40) {
        buffer_append_char(buf_302,*p_303);
        p_303++;
    }
    if(    *p_303==40) {
        buffer_append_char(buf_302,*p_303);
        p_303++;
        while(        *p_303==32||*p_303==9||*p_303==10) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
        }
    }
    dquort_304=(_Bool)0;
    num_exp_305=0;
    while(    *p_303) {
        if(        *p_303==34) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
            dquort_304=!dquort_304;
        }
        else if(        dquort_304) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
        }
        else if(        *p_303==40) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
            node_306=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_305++));
            Value_313=node_compile(node_306,info);
            if(            !Value_313) {
                __result_obj__207 = (_Bool)0;
                ((node_306) ? node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_300 = come_decrement_ref_count(source_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_301,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__207;
            }
            else {
            }
            come_value_314=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_302,come_value_314->c_value);
            if(            *p_303==41) {
                buffer_append_char(buf_302,*p_303);
                p_303++;
            }
            ((node_306) ? node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_314,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_302,*p_303);
            p_303++;
        }
    }
    __dec_obj63=come_value_301->c_value,
    come_value_301->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value293=buffer_to_string(buf_302)))));
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj64=come_value_301->type,
    come_value_301->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 238, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_301->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_301));
    add_come_last_code(info,"%s",come_value_301->c_value);
    __result_obj__209 = (_Bool)1;
    (source_300 = come_decrement_ref_count(source_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_301,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
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
struct list_item$1sNode$ph* it_307;
int i_308;
struct sNode* __result_obj__203;
struct sNode* default_value_309;
struct sNode* __result_obj__204;
default_value_309 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_307=self->head;
    i_308=0;
    while(    it_307!=((void*)0)) {
        if(        position==i_308) {
            __result_obj__203 = (struct sNode*)come_increment_ref_count(it_307->item);
            ((__result_obj__203) ? __result_obj__203 = come_decrement_ref_count(__result_obj__203, ((struct sNode*)__result_obj__203)->finalize, ((struct sNode*)__result_obj__203)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__203;
        }
        it_307=it_307->next;
        i_308++;
    }
    memset(&default_value_309,0,sizeof(struct sNode*));
    __result_obj__204 = (struct sNode*)come_increment_ref_count(default_value_309);
    ((default_value_309) ? default_value_309 = come_decrement_ref_count(default_value_309, ((struct sNode*)default_value_309)->finalize, ((struct sNode*)default_value_309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__204) ? __result_obj__204 = come_decrement_ref_count(__result_obj__204, ((struct sNode*)__result_obj__204)->finalize, ((struct sNode*)__result_obj__204)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__204;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_310;
int i_311;
struct sNode* __result_obj__205;
struct sNode* default_value_312;
struct sNode* __result_obj__206;
default_value_312 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_310=self->head;
    i_311=0;
    while(    it_310!=((void*)0)) {
        if(        position==i_311) {
            __result_obj__205 = (struct sNode*)come_increment_ref_count(it_310->item);
            ((__result_obj__205) ? __result_obj__205 = come_decrement_ref_count(__result_obj__205, ((struct sNode*)__result_obj__205)->finalize, ((struct sNode*)__result_obj__205)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__205;
        }
        it_310=it_310->next;
        i_311++;
    }
    memset(&default_value_312,0,sizeof(struct sNode*));
    __result_obj__206 = (struct sNode*)come_increment_ref_count(default_value_312);
    ((default_value_312) ? default_value_312 = come_decrement_ref_count(default_value_312, ((struct sNode*)default_value_312)->finalize, ((struct sNode*)default_value_312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__206) ? __result_obj__206 = come_decrement_ref_count(__result_obj__206, ((struct sNode*)__result_obj__206)->finalize, ((struct sNode*)__result_obj__206)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__206;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value298 = (void*)0;
struct list_item$1CVALUE$ph* litem_315;
struct CVALUE* __dec_obj65;
void* __right_value299 = (void*)0;
struct list_item$1CVALUE$ph* litem_316;
struct CVALUE* __dec_obj66;
void* __right_value300 = (void*)0;
struct list_item$1CVALUE$ph* litem_317;
struct CVALUE* __dec_obj67;
struct list$1CVALUE$ph* __result_obj__208;
    if(    self->len==0) {
        litem_315=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value298=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_315->prev=((void*)0);
        litem_315->next=((void*)0);
        __dec_obj65=litem_315->item,
        litem_315->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj65,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_315;
        self->head=litem_315;
    }
    else if(    self->len==1) {
        litem_316=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value299=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_316->prev=self->head;
        litem_316->next=((void*)0);
        __dec_obj66=litem_316->item,
        litem_316->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj66,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_316;
        self->head->next=litem_316;
    }
    else {
        litem_317=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value300=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_317->prev=self->tail;
        litem_317->next=((void*)0);
        __dec_obj67=litem_317->item,
        litem_317->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj67,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_317;
        self->tail=litem_317;
    }
    self->len++;
    __result_obj__208 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value301 = (void*)0;
struct sCurrentNode2* __result_obj__210;
    ((struct sNodeBase*)(__right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value301,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__210 = (struct sCurrentNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__210,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value302 = (void*)0;
char* __result_obj__211;
    __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value302=__builtin_string(self->sname))));
    (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__211;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value303 = (void*)0;
char* __result_obj__212;
    __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value303=__builtin_string("sCurrentNode"))));
    (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__212;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value304 = (void*)0;
char* class_name_318;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sClass* current_stack_319;
struct sVarTable* vtable_320;
struct map$2char$phsVar$ph* o2_saved_321;
char* it_324;
char* key_327;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sVar* value_328;
void* __right_value310 = (void*)0;
struct sType* type2_335;
void* __right_value311 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct tuple2$2char$phsType$ph* item_336;
void* __right_value317 = (void*)0;
struct sType* type3_347;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct tuple2$2char$phsType$ph* item2_350;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_397;
char* it_398;
char* key_399;
void* __right_value331 = (void*)0;
struct sVar* value_400;
void* __right_value332 = (void*)0;
struct sType* type2_401;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct tuple2$2char$phsType$ph* item_402;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value337 = (void*)0;
char* __dec_obj75;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj76;
_Bool __result_obj__253;
    info->current_stack_num++;
    class_name_318=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_319=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 484, "struct sClass*")),(char*)come_increment_ref_count(class_name_318),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
    vtable_320=info->lv_table;
    while(    vtable_320) {
        for(        o2_saved_321=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_320->mVars)),it_324=map$2char$phsVar$ph_begin((o2_saved_321));        !map$2char$phsVar$ph_end((o2_saved_321));        it_324=map$2char$phsVar$ph_next((o2_saved_321))        ){
            key_327=it_324;
            value_328=((struct sVar*)(__right_value309=map$2char$phsVar$ph_operator_load_element(vtable_320->mVars,((char*)(__right_value308=__builtin_string(key_327))))));
            (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value308 = come_decrement_ref_count(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value309,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_335=(struct sType*)come_increment_ref_count(sType_clone(value_328->mType));
            type2_335->mPointerNum++;
            item_336=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 497, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_328->mCValueName)),(struct sType*)come_increment_ref_count(type2_335)));
            if(            value_328->mCValueName!=((void*)0)) {
                if(                strcmp(value_328->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_328->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_328->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_328->mType->mClass->mName,"va_list")||string_operator_equals(value_328->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_335->mArrayNum)==1) {
                    type3_347=(struct sType*)come_increment_ref_count(sType_clone(type2_335));
                    list$1sNode$ph_reset(type3_347->mArrayNum);
                    type3_347->mPointerNum=1;
                    type3_347->mOriginIsArray=(_Bool)1;
                    item2_350=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 517, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_328->mCValueName)),(struct sType*)come_increment_ref_count(type3_347)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_319->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_350)));
                    value_328->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_350,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_319->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_336)));
                }
            }
            /*c*/ come_call_finalizer3(type2_335,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_336,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_321,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_320=vtable_320->mParent;
    }
    output_struct(current_stack_319,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_318),(struct sClass*)come_increment_ref_count(current_stack_319));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_318,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_318);
    vtable_320=info->lv_table;
    while(    vtable_320) {
        for(        o2_saved_397=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_320->mVars)),it_398=map$2char$phsVar$ph_begin((o2_saved_397));        !map$2char$phsVar$ph_end((o2_saved_397));        it_398=map$2char$phsVar$ph_next((o2_saved_397))        ){
            key_399=it_398;
            value_400=((struct sVar*)(__right_value331=map$2char$phsVar$ph_operator_load_element(vtable_320->mVars,key_399)));
            /*c*/ come_call_finalizer3(__right_value331,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_401=(struct sType*)come_increment_ref_count(sType_clone(value_400->mType));
            item_402=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 546, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_400->mCValueName),(struct sType*)come_increment_ref_count(type2_401)));
            if(            value_400->mCValueName!=((void*)0)) {
                if(                strcmp(value_400->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_400->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_400->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_400->mType->mClass->mName,"va_list")||string_operator_equals(value_400->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_400->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_401->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_400->mCValueName,value_400->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_400->mCValueName,value_400->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_401->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_400->mCValueName,value_400->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_400->mCValueName,value_400->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_401,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_402,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_397,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_320=vtable_320->mParent;
    }
    come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 585, "struct CVALUE*"))));
    __dec_obj75=come_value_403->c_value,
    come_value_403->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj76=come_value_403->type,
    come_value_403->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 588, "struct sType*")),(char*)come_increment_ref_count(class_name_318),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_403->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_403->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
    __result_obj__253 = (_Bool)1;
    (class_name_318 = come_decrement_ref_count(class_name_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_319,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_403,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_322;
char* __result_obj__213;
char* __result_obj__214;
char* result_323;
char* __result_obj__215;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_322,0,sizeof(char*));
        __result_obj__213 = result_322;
        return __result_obj__213;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__214 = self->key_list->it->item;
        return __result_obj__214;
    }
    memset(&result_323,0,sizeof(char*));
    __result_obj__215 = result_323;
    return __result_obj__215;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_325;
char* __result_obj__216;
char* __result_obj__217;
char* result_326;
char* __result_obj__218;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result_obj__216 = result_325;
        return __result_obj__216;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__217 = self->key_list->it->item;
        return __result_obj__217;
    }
    memset(&result_326,0,sizeof(char*));
    __result_obj__218 = result_326;
    return __result_obj__218;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_329;
unsigned int hash_330;
unsigned int it_331;
struct sVar* __result_obj__219;
struct sVar* __result_obj__220;
struct sVar* __result_obj__221;
struct sVar* __result_obj__222;
default_value_329 = (void*)0;
    memset(&default_value_329,0,sizeof(struct sVar*));
    hash_330=string_get_hash_key(((char*)key))%self->size;
    it_331=hash_330;
    while(    (_Bool)1) {
        if(        self->item_existance[it_331]) {
            if(            string_equals(self->keys[it_331],key)) {
                __result_obj__219 = (struct sVar*)come_increment_ref_count(self->items[it_331]);
                /*c*/ come_call_finalizer3(default_value_329,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__219,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__219;
            }
            it_331++;
            if(            it_331>=self->size) {
                it_331=0;
            }
            else if(            it_331==hash_330) {
                __result_obj__220 = (struct sVar*)come_increment_ref_count(default_value_329);
                /*c*/ come_call_finalizer3(default_value_329,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__220,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__220;
            }
        }
        else {
            __result_obj__221 = (struct sVar*)come_increment_ref_count(default_value_329);
            /*c*/ come_call_finalizer3(default_value_329,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__221,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__221;
        }
    }
    __result_obj__222 = (struct sVar*)come_increment_ref_count(default_value_329);
    /*c*/ come_call_finalizer3(default_value_329,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__222,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__222;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_332;
unsigned int hash_333;
unsigned int it_334;
struct sVar* __result_obj__223;
struct sVar* __result_obj__224;
struct sVar* __result_obj__225;
struct sVar* __result_obj__226;
default_value_332 = (void*)0;
    memset(&default_value_332,0,sizeof(struct sVar*));
    hash_333=string_get_hash_key(((char*)key))%self->size;
    it_334=hash_333;
    while(    (_Bool)1) {
        if(        self->item_existance[it_334]) {
            if(            string_equals(self->keys[it_334],key)) {
                __result_obj__223 = (struct sVar*)come_increment_ref_count(self->items[it_334]);
                /*c*/ come_call_finalizer3(default_value_332,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__223,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__223;
            }
            it_334++;
            if(            it_334>=self->size) {
                it_334=0;
            }
            else if(            it_334==hash_333) {
                __result_obj__224 = (struct sVar*)come_increment_ref_count(default_value_332);
                /*c*/ come_call_finalizer3(default_value_332,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__224,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__224;
            }
        }
        else {
            __result_obj__225 = (struct sVar*)come_increment_ref_count(default_value_332);
            /*c*/ come_call_finalizer3(default_value_332,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__225,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__225;
        }
    }
    __result_obj__226 = (struct sVar*)come_increment_ref_count(default_value_332);
    /*c*/ come_call_finalizer3(default_value_332,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
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
struct tuple2$2char$phsType$ph* __result_obj__227;
void* __right_value312 = (void*)0;
struct tuple2$2char$phsType$ph* result_337;
void* __right_value313 = (void*)0;
char* __dec_obj68;
void* __right_value314 = (void*)0;
struct sType* __dec_obj69;
struct tuple2$2char$phsType$ph* __result_obj__228;
    if(    self==(void*)0) {
        __result_obj__227 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__227,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__227;
    }
    result_337=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj68=result_337->v1,
        result_337->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj69=result_337->v2,
        result_337->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__228 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_337);
    /*c*/ come_call_finalizer3(result_337,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__228,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_338;
    result_338=0;
    result_338+=int_get_hash_key(((int)self->v1));
    result_338+=int_get_hash_key(((int)self->v2));
    return result_338;
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
    if(    !bool_equals(left->mDefferRightValue,right->mDefferRightValue)) {
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
    if(    !bool_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)) {
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
    if(    !bool_equals(left->mUniq,right->mUniq)) {
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_339;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_340;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_339=left->head;
    it2_340=right->head;
    while(    it_339!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_339->item,it2_340->item)) {
            return (_Bool)0;
        }
        it_339=it_339->next;
        it2_340=it2_340->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_341;
struct list_item$1sType$ph* it2_342;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_341=left->head;
    it2_342=right->head;
    while(    it_341!=((void*)0)) {
        if(        !sType_equals(it_341->item,it2_342->item)) {
            return (_Bool)0;
        }
        it_341=it_341->next;
        it2_342=it2_342->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_343;
struct list_item$1sNode$ph* it2_344;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_343=left->head;
    it2_344=right->head;
    while(    it_343!=((void*)0)) {
        if(        !sNode_equals(it_343->item,it2_344->item)) {
            return (_Bool)0;
        }
        it_343=it_343->next;
        it2_344=it2_344->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_345;
struct list_item$1char$ph* it2_346;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_345=left->head;
    it2_346=right->head;
    while(    it_345!=((void*)0)) {
        if(        !string_equals(it_345->item,it2_346->item)) {
            return (_Bool)0;
        }
        it_345=it_345->next;
        it2_346=it2_346->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj70;
struct sType* __dec_obj71;
struct tuple2$2char$phsType$ph* __result_obj__229;
    __dec_obj70=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj71=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__229 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__229,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
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
struct list_item$1sNode$ph* it_348;
struct list_item$1sNode$ph* prev_it_349;
struct list$1sNode$ph* __result_obj__230;
    it_348=self->head;
    while(    it_348!=((void*)0)) {
        prev_it_349=it_348;
        it_348=it_348->next;
        /*c*/ come_call_finalizer3(prev_it_349,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__230 = self;
    return __result_obj__230;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value321 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_351;
struct tuple2$2char$phsType$ph* __dec_obj72;
void* __right_value322 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_352;
struct tuple2$2char$phsType$ph* __dec_obj73;
void* __right_value323 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_353;
struct tuple2$2char$phsType$ph* __dec_obj74;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__231;
    if(    self->len==0) {
        litem_351=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value321=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_351->prev=((void*)0);
        litem_351->next=((void*)0);
        __dec_obj72=litem_351->item,
        litem_351->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj72,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_351;
        self->head=litem_351;
    }
    else if(    self->len==1) {
        litem_352=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value322=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_352->prev=self->head;
        litem_352->next=((void*)0);
        __dec_obj73=litem_352->item,
        litem_352->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj73,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_352;
        self->head->next=litem_352;
    }
    else {
        litem_353=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value323=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_353->prev=self->tail;
        litem_353->next=((void*)0);
        __dec_obj74=litem_353->item,
        litem_353->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj74,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_353;
        self->tail=litem_353;
    }
    self->len++;
    __result_obj__231 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_373;
unsigned int it_374;
_Bool same_key_exist_391;
char* it2_394;
struct map$2char$phsClass$ph* __result_obj__252;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_373=string_get_hash_key(((char*)key))%self->size;
    it_374=hash_373;
    while(    (_Bool)1) {
        if(        self->item_existance[it_374]) {
            if(            string_equals(self->keys[it_374],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_374]);
                    (self->keys[it_374] = come_decrement_ref_count(self->keys[it_374], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_374]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_374]);
                    self->keys[it_374]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_374],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_374]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_374]=item;
                }
                break;
            }
            it_374++;
            if(            it_374>=self->size) {
                it_374=0;
            }
            else if(            it_374==hash_373) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_374]=(_Bool)1;
            if(            1) {
                self->keys[it_374]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_374]=key;
            }
            if(            1) {
                self->items[it_374]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_374]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_391=(_Bool)0;
    for(    it2_394=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_394=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_394,key)) {
            same_key_exist_391=(_Bool)1;
        }
    }
    if(    !same_key_exist_391) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__252 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_354;
void* __right_value326 = (void*)0;
char** keys_355;
void* __right_value327 = (void*)0;
struct sClass** items_356;
void* __right_value328 = (void*)0;
_Bool* item_existance_357;
int len_358;
char* it_361;
struct sClass* default_value_364;
void* __right_value329 = (void*)0;
struct sClass* it2_365;
unsigned int hash_370;
int n_371;
struct sClass* default_value_372;
void* __right_value330 = (void*)0;
default_value_364 = (void*)0;
default_value_372 = (void*)0;
    size_354=self->size*10;
    keys_355=(char**)come_increment_ref_count(((char**)(__right_value326=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_354)), "./comelang.h", 2167, "char**"))));
    items_356=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value327=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_354)), "./comelang.h", 2168, "struct sClass**"))));
    item_existance_357=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value328=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_354)), "./comelang.h", 2169, "_Bool*"))));
    len_358=0;
    for(    it_361=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_361=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_364,0,sizeof(struct sClass*));
        it2_365=((struct sClass*)(__right_value329=map$2char$phsClass$ph_at(self,it_361,(struct sClass*)come_increment_ref_count(default_value_364))));
        /*c*/ come_call_finalizer3(__right_value329,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_370=string_get_hash_key(((char*)it_361))%size_354;
        n_371=hash_370;
        while(        (_Bool)1) {
            if(            item_existance_357[n_371]) {
                n_371++;
                if(                n_371>=size_354) {
                    n_371=0;
                }
                else if(                n_371==hash_370) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_357[n_371]=(_Bool)1;
                keys_355[n_371]=it_361;
                items_356[n_371]=((struct sClass*)(__right_value330=map$2char$phsClass$ph_at(self,it_361,(struct sClass*)come_increment_ref_count(default_value_372))));
                /*c*/ come_call_finalizer3(__right_value330,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_358++;
                /*c*/ come_call_finalizer3(default_value_372,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_372,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_364,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_355;
    self->items=items_356;
    self->item_existance=item_existance_357;
    self->size=size_354;
    self->len=len_358;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_359;
char* __result_obj__232;
char* __result_obj__233;
char* result_360;
char* __result_obj__234;
result_359 = (void*)0;
result_360 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_359,0,sizeof(char*));
        __result_obj__232 = result_359;
        return __result_obj__232;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__233 = self->key_list->it->item;
        return __result_obj__233;
    }
    memset(&result_360,0,sizeof(char*));
    __result_obj__234 = result_360;
    return __result_obj__234;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_362;
char* __result_obj__235;
char* __result_obj__236;
char* result_363;
char* __result_obj__237;
result_362 = (void*)0;
result_363 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_362,0,sizeof(char*));
        __result_obj__235 = result_362;
        return __result_obj__235;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__236 = self->key_list->it->item;
        return __result_obj__236;
    }
    memset(&result_363,0,sizeof(char*));
    __result_obj__237 = result_363;
    return __result_obj__237;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_366;
unsigned int it_367;
struct sClass* __result_obj__238;
struct sClass* __result_obj__239;
struct sClass* __result_obj__240;
struct sClass* __result_obj__241;
    hash_366=string_get_hash_key(((char*)key))%self->size;
    it_367=hash_366;
    while(    (_Bool)1) {
        if(        self->item_existance[it_367]) {
            if(            string_equals(self->keys[it_367],key)) {
                __result_obj__238 = (struct sClass*)come_increment_ref_count(self->items[it_367]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__238,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__238;
            }
            it_367++;
            if(            it_367>=self->size) {
                it_367=0;
            }
            else if(            it_367==hash_366) {
                __result_obj__239 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__239,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__239;
            }
        }
        else {
            __result_obj__240 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__240,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__240;
        }
    }
    __result_obj__241 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_368;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_369;
    it_368=self->head;
    while(    it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        /*c*/ come_call_finalizer3(prev_it_369,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_375;
struct list_item$1char$ph* it_376;
struct list$1char$ph* __result_obj__245;
    it2_375=0;
    it_376=self->head;
    while(    it_376!=((void*)0)) {
        if(        string_equals(it_376->item,item)) {
            list$1char$ph_delete(self,it2_375,it2_375+1);
            break;
        }
        it2_375++;
        it_376=it_376->next;
    }
    __result_obj__245 = self;
    return __result_obj__245;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_377;
struct list$1char$ph* __result_obj__242;
struct list_item$1char$ph* it_380;
int i_381;
struct list_item$1char$ph* prev_it_382;
struct list_item$1char$ph* it_383;
int i_384;
struct list_item$1char$ph* prev_it_385;
struct list_item$1char$ph* it_386;
struct list_item$1char$ph* head_prev_it_387;
struct list_item$1char$ph* tail_it_388;
int i_389;
struct list_item$1char$ph* prev_it_390;
struct list$1char$ph* __result_obj__244;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_377=tail;
        tail=head;
        head=tmp_377;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__242 = self;
        return __result_obj__242;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_380=self->head;
        i_381=0;
        while(        it_380!=((void*)0)) {
            if(            i_381<tail) {
                prev_it_382=it_380;
                it_380=it_380->next;
                i_381++;
                /*c*/ come_call_finalizer3(prev_it_382,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_381==tail) {
                self->head=it_380;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_380=it_380->next;
                i_381++;
            }
        }
    }
    else if(    tail==self->len) {
        it_383=self->head;
        i_384=0;
        while(        it_383!=((void*)0)) {
            if(            i_384==head) {
                self->tail=it_383->prev;
                self->tail->next=((void*)0);
            }
            if(            i_384>=head) {
                prev_it_385=it_383;
                it_383=it_383->next;
                i_384++;
                /*c*/ come_call_finalizer3(prev_it_385,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_383=it_383->next;
                i_384++;
            }
        }
    }
    else {
        it_386=self->head;
        head_prev_it_387=((void*)0);
        tail_it_388=((void*)0);
        i_389=0;
        while(        it_386!=((void*)0)) {
            if(            i_389==head) {
                head_prev_it_387=it_386->prev;
            }
            if(            i_389==tail) {
                tail_it_388=it_386;
            }
            if(            i_389>=head&&i_389<tail) {
                prev_it_390=it_386;
                it_386=it_386->next;
                i_389++;
                /*c*/ come_call_finalizer3(prev_it_390,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_386=it_386->next;
                i_389++;
            }
        }
        if(        head_prev_it_387!=((void*)0)) {
            head_prev_it_387->next=tail_it_388;
        }
        if(        tail_it_388!=((void*)0)) {
            tail_it_388->prev=head_prev_it_387;
        }
    }
    __result_obj__244 = self;
    return __result_obj__244;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_378;
struct list_item$1char$ph* prev_it_379;
struct list$1char$ph* __result_obj__243;
    it_378=self->head;
    while(    it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        /*c*/ come_call_finalizer3(prev_it_379,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__243 = self;
    return __result_obj__243;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_392;
char* __result_obj__246;
char* __result_obj__247;
char* result_393;
char* __result_obj__248;
result_392 = (void*)0;
result_393 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_392,0,sizeof(char*));
        __result_obj__246 = result_392;
        return __result_obj__246;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__247 = self->it->item;
        return __result_obj__247;
    }
    memset(&result_393,0,sizeof(char*));
    __result_obj__248 = result_393;
    return __result_obj__248;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_395;
char* __result_obj__249;
char* __result_obj__250;
char* result_396;
char* __result_obj__251;
result_395 = (void*)0;
result_396 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_395,0,sizeof(char*));
        __result_obj__249 = result_395;
        return __result_obj__249;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__250 = self->it->item;
        return __result_obj__250;
    }
    memset(&result_396,0,sizeof(char*));
    __result_obj__251 = result_396;
    return __result_obj__251;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value340 = (void*)0;
struct sLineNode* __result_obj__254;
    ((struct sNodeBase*)(__right_value340=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value340,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__254 = (struct sLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__254,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value341 = (void*)0;
char* __result_obj__255;
    __result_obj__255 = (char*)come_increment_ref_count(((char*)(__right_value341=__builtin_string("sLineNode"))));
    (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value344 = (void*)0;
char* __dec_obj77;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__256;
    come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 268, "struct CVALUE*"))));
    __dec_obj77=come_value_404->c_value,
    come_value_404->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj78=come_value_404->type,
    come_value_404->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 271, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_404->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
    add_come_last_code(info,"%s",come_value_404->c_value);
    __result_obj__256 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value348 = (void*)0;
struct sSNameNode* __result_obj__257;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value348,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__257 = (struct sSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value349 = (void*)0;
char* __result_obj__258;
    __result_obj__258 = (char*)come_increment_ref_count(((char*)(__right_value349=__builtin_string("sSNameNode"))));
    (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__258 = come_decrement_ref_count(__result_obj__258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__258;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value352 = (void*)0;
char* __dec_obj79;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __dec_obj80;
_Bool __result_obj__259;
    come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 296, "struct CVALUE*"))));
    __dec_obj79=come_value_405->c_value,
    come_value_405->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj80=come_value_405->type,
    come_value_405->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 299, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_405->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_405));
    add_come_last_code(info,"%s",come_value_405->c_value);
    __result_obj__259 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_405,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value356 = (void*)0;
struct sFuncNode* __result_obj__260;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value356,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__260 = (struct sFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value357 = (void*)0;
char* __result_obj__261;
    __result_obj__261 = (char*)come_increment_ref_count(((char*)(__right_value357=__builtin_string("sFuncNode"))));
    (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__261 = come_decrement_ref_count(__result_obj__261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__261;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_406;
void* __right_value360 = (void*)0;
char* __dec_obj81;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__262;
    come_value_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 324, "struct CVALUE*"))));
    __dec_obj81=come_value_406->c_value,
    come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj82=come_value_406->type,
    come_value_406->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 327, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_406->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_406));
    add_come_last_code(info,"%s",come_value_406->c_value);
    __result_obj__262 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_406,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value364 = (void*)0;
struct sWildCard* __result_obj__263;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value364,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__263 = (struct sWildCard*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value365 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = (char*)come_increment_ref_count(((char*)(__right_value365=__builtin_string("sWildCard"))));
    (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sNode* value_node_407;
_Bool Value_408;
_Bool __result_obj__265;
_Bool __result_obj__266;
    value_node_407=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value366=xsprintf("Value"))),info));
    (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_408=node_compile(value_node_407,info);
    if(    !Value_408) {
        __result_obj__265 = (_Bool)0;
        ((value_node_407) ? value_node_407 = come_decrement_ref_count(value_node_407, ((struct sNode*)value_node_407)->finalize, ((struct sNode*)value_node_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__265;
    }
    else {
    }
    __result_obj__266 = (_Bool)1;
    ((value_node_407) ? value_node_407 = come_decrement_ref_count(value_node_407, ((struct sNode*)value_node_407)->finalize, ((struct sNode*)value_node_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__266;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value368 = (void*)0;
struct sCallerFuncNode* __result_obj__267;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value368,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__267 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value369 = (void*)0;
char* __result_obj__268;
    __result_obj__268 = (char*)come_increment_ref_count(((char*)(__right_value369=__builtin_string("sCallerFuncNode"))));
    (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__268 = come_decrement_ref_count(__result_obj__268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__268;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_409;
void* __right_value372 = (void*)0;
char* __dec_obj83;
void* __right_value373 = (void*)0;
char* __dec_obj84;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__269;
    come_value_409=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 376, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj83=come_value_409->c_value,
        come_value_409->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj84=come_value_409->c_value,
        come_value_409->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj85=come_value_409->type,
    come_value_409->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 384, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_409->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_409));
    add_come_last_code(info,"%s",come_value_409->c_value);
    __result_obj__269 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_409,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value377 = (void*)0;
struct sCallerLineNode* __result_obj__270;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value377,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__270 = (struct sCallerLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct CVALUE* come_value_410;
void* __right_value380 = (void*)0;
char* __dec_obj86;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sType* __dec_obj87;
_Bool __result_obj__271;
    come_value_410=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 405, "struct CVALUE*"))));
    __dec_obj86=come_value_410->c_value,
    come_value_410->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj87=come_value_410->type,
    come_value_410->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 408, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_410->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_410));
    add_come_last_code(info,"%s",come_value_410->c_value);
    __result_obj__271 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_410,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value384 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = (char*)come_increment_ref_count(((char*)(__right_value384=__builtin_string("sCallerLineNode"))));
    (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value385 = (void*)0;
struct sCallerSNameNode* __result_obj__273;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value385,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__273 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct CVALUE* come_value_411;
void* __right_value388 = (void*)0;
char* __dec_obj88;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__274;
    come_value_411=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 433, "struct CVALUE*"))));
    __dec_obj88=come_value_411->c_value,
    come_value_411->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj89=come_value_411->type,
    come_value_411->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 436, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_411->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_411));
    add_come_last_code(info,"%s",come_value_411->c_value);
    __result_obj__274 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_411,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value392 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = (char*)come_increment_ref_count(((char*)(__right_value392=__builtin_string("sCallerSNameNode"))));
    (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
char* __dec_obj90;
void* __right_value405 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj96;
struct list$1sType$ph* __dec_obj97;
struct buffer* __dec_obj98;
struct sFunCallNode* __result_obj__282;
    ((struct sNodeBase*)(__right_value393=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value393,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj90=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj96=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj96,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj97=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj97,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj98=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /*b*/ come_call_finalizer3(__dec_obj98,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__282 = (struct sFunCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__282,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value406 = (void*)0;
char* __result_obj__283;
    __result_obj__283 = (char*)come_increment_ref_count(((char*)(__right_value406=__builtin_string("sFunCallNode"))));
    (__right_value406 = come_decrement_ref_count(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__283 = come_decrement_ref_count(__result_obj__283, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__283;
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
char* fun_name_422;
struct list$1tuple2$2char$phsNode$ph$ph* params_423;
struct buffer* method_block_424;
int method_block_sline_425;
struct sVar* var__426;
struct sType* lambda_type_427;
void* __right_value407 = (void*)0;
struct sType* result_type_428;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct list$1CVALUE$ph* come_params_429;
int i_432;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_433;
struct tuple2$2char$phsNode$ph* it_436;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label_439=0;
struct sNode* node_440=0;
_Bool Value_441;
_Bool __result_obj__291;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value411 = (void*)0;
struct sType* __dec_obj99;
void* __right_value412 = (void*)0;
_Bool _if_conditional1;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
_Bool _if_conditional2;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* buf_449;
int j_450;
struct list$1CVALUE$ph* o2_saved_451;
struct CVALUE* it_454;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value423 = (void*)0;
char* __dec_obj100;
void* __right_value424 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__302;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sGenericsFun* generics_fun_458;
_Bool method_generics_461;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1sType$ph* method_generics_types_462;
void* __right_value429 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_463=0;
struct sGenericsFun* gfun_464=0;
char* generics_fun_name_465;
void* __right_value430 = (void*)0;
struct sFun* fun_466;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1CVALUE$ph* come_params_469;
void* __right_value433 = (void*)0;
struct sFun* fun_470;
_Bool no_output_come_code_471;
_Bool __result_obj__311;
void* __right_value434 = (void*)0;
struct CVALUE* method_block_node_472;
void* __right_value435 = (void*)0;
struct sType* method_block_lambda_type_479;
void* __right_value436 = (void*)0;
struct sType* method_block_result_type_480;
void* __right_value437 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_481;
struct sType* generics_fun_method_block_result_type_482;
int method_generics_num_483;
void* __right_value441 = (void*)0;
int n_492;
struct list$1sType$ph* o2_saved_493;
struct sType* it_496;
int method_generics_num_499;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1CVALUE$ph* come_params_500;
int i_501;
struct sType* result_type_502;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_503;
struct tuple2$2char$phsNode$ph* it_504;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_505=0;
struct sNode* node_506=0;
_Bool Value_507;
_Bool __result_obj__325;
void* __right_value446 = (void*)0;
struct CVALUE* come_value_508;
void* __right_value447 = (void*)0;
struct sType* __dec_obj106;
int method_generics_num_512;
void* __right_value451 = (void*)0;
int n_513;
struct list$1sType$ph* o2_saved_514;
struct sType* it_515;
int method_generics_num_516;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_519=0;
struct sGenericsFun* gfun_520=0;
char* __dec_obj110;
void* __right_value455 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_521=0;
struct sGenericsFun* gfun_522=0;
char* __dec_obj111;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1CVALUE$ph* come_params_523;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_524;
struct tuple2$2char$phsNode$ph* it_525;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_526=0;
struct sNode* node_527=0;
_Bool Value_528;
_Bool __result_obj__328;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value459 = (void*)0;
struct sType* __dec_obj112;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct buffer* buf_530;
int j_531;
struct list$1CVALUE$ph* o2_saved_532;
struct CVALUE* it_533;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct CVALUE* come_value_534;
void* __right_value464 = (void*)0;
char* __dec_obj113;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* __dec_obj114;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* __dec_obj115;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __dec_obj116;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj117;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj118;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj119;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __dec_obj120;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj121;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj122;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj123;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj124;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj125;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj126;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj127;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj128;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj129;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj130;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj131;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj132;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj133;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj134;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj135;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj136;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj137;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj138;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj139;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj140;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj141;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj142;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* __dec_obj143;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* __dec_obj144;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj145;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sType* __dec_obj146;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* __dec_obj147;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* __dec_obj148;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* __dec_obj149;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* __dec_obj150;
_Bool __result_obj__329;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct list$1CVALUE$ph* come_params_535;
int i_536;
struct sType* result_type_537;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_538;
struct tuple2$2char$phsNode$ph* it_539;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_540=0;
struct sNode* node_541=0;
_Bool Value_542;
_Bool __result_obj__330;
void* __right_value569 = (void*)0;
struct CVALUE* come_value_543;
void* __right_value570 = (void*)0;
struct sType* __dec_obj151;
struct sType* __dec_obj152;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* buf_544;
int j_545;
struct list$1CVALUE$ph* o2_saved_546;
struct CVALUE* it_547;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_548;
void* __right_value575 = (void*)0;
char* __dec_obj153;
struct sType* __dec_obj154;
_Bool __result_obj__331;
void* __right_value576 = (void*)0;
char* __dec_obj155;
void* __right_value577 = (void*)0;
char* __dec_obj156;
char* p_549;
int version_550;
char* p2_551;
int i_553;
void* __right_value578 = (void*)0;
char* new_fun_name_554;
void* __right_value579 = (void*)0;
_Bool _if_conditional3;
void* __right_value580 = (void*)0;
char* __dec_obj157;
void* __right_value581 = (void*)0;
char* new_fun_name_561;
void* __right_value582 = (void*)0;
_Bool _if_conditional4;
void* __right_value583 = (void*)0;
char* __dec_obj158;
int i_562;
void* __right_value584 = (void*)0;
char* new_fun_name_563;
void* __right_value585 = (void*)0;
_Bool _if_conditional5;
void* __right_value586 = (void*)0;
char* __dec_obj159;
void* __right_value587 = (void*)0;
struct sFun* fun_564;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1CVALUE$ph* come_params_565;
int i_566;
struct sType* result_type_567;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_568;
struct tuple2$2char$phsNode$ph* it_569;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_570=0;
struct sNode* node_571=0;
_Bool Value_572;
_Bool __result_obj__340;
void* __right_value590 = (void*)0;
struct CVALUE* come_value_573;
void* __right_value591 = (void*)0;
struct sType* __dec_obj160;
struct sType* __dec_obj161;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct buffer* buf_574;
int j_575;
struct list$1CVALUE$ph* o2_saved_576;
struct CVALUE* it_577;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct CVALUE* come_value_578;
void* __right_value596 = (void*)0;
char* __dec_obj162;
struct sType* __dec_obj163;
_Bool __result_obj__341;
void* __right_value597 = (void*)0;
struct sType* result_type_579;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1sType$ph* param_types_580;
struct list$1sType$ph* o2_saved_581;
struct sType* it_582;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* it2_583;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* __dec_obj164;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct list$1CVALUE$ph* come_params_584;
int i_585;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_586;
struct tuple2$2char$phsNode$ph* it_587;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_588=0;
struct sNode* node_589=0;
_Bool Value_590;
_Bool __result_obj__342;
void* __right_value606 = (void*)0;
struct CVALUE* come_value_591;
void* __right_value607 = (void*)0;
struct sType* __dec_obj165;
int n_592;
struct list$1char$ph* o2_saved_593;
char* it_594;
void* __right_value608 = (void*)0;
_Bool _if_conditional6;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
_Bool _if_conditional7;
void* __right_value615 = (void*)0;
int i_600;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_601;
struct tuple2$2char$phsNode$ph* it_602;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_603=0;
struct sNode* node_604=0;
_Bool Value_605;
_Bool __result_obj__345;
void* __right_value616 = (void*)0;
struct CVALUE* come_value_606;
void* __right_value617 = (void*)0;
struct sType* __dec_obj167;
void* __right_value618 = (void*)0;
_Bool _if_conditional8;
_Bool Value_607;
_Bool __result_obj__346;
void* __right_value619 = (void*)0;
struct CVALUE* come_value_608;
void* __right_value620 = (void*)0;
struct sType* __dec_obj168;
void* __right_value621 = (void*)0;
_Bool _if_conditional9;
void* __right_value622 = (void*)0;
_Bool _if_conditional10;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
_Bool _if_conditional11;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
_Bool _if_conditional12;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
char* default_param_609;
void* __right_value633 = (void*)0;
char* param_name_616;
void* __right_value634 = (void*)0;
_Bool _if_conditional13;
struct buffer* source_617;
char* p_618;
char* head_619;
int sline_620;
void* __right_value635 = (void*)0;
struct buffer* __dec_obj169;
void* __right_value636 = (void*)0;
struct sNode* node_621;
_Bool Value_622;
_Bool __result_obj__351;
struct buffer* __dec_obj170;
void* __right_value637 = (void*)0;
struct CVALUE* come_value_623;
void* __right_value638 = (void*)0;
struct sType* __dec_obj171;
void* __right_value639 = (void*)0;
_Bool _if_conditional14;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
_Bool _if_conditional15;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
_Bool _if_conditional16;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value652 = (void*)0;
struct sNode* current_stack_frame_node_624;
_Bool Value_626;
_Bool __result_obj__354;
void* __right_value653 = (void*)0;
struct CVALUE* come_value_627;
void* __right_value654 = (void*)0;
struct sType* __dec_obj173;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct buffer* method_block2_628;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sType* method_block_type_629;
void* __right_value659 = (void*)0;
char* class_name_630;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sClass* current_stack_frame_struct_637;
void* __right_value662 = (void*)0;
int num_method_block_638;
void* __right_value663 = (void*)0;
struct sType* result_type_639;
void* __right_value664 = (void*)0;
struct list$1sType$ph* param_types_640;
struct list$1char$ph* param_names_641;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct buffer* all_alhabet_sname_642;
char* p_643;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1sType$ph* o2_saved_644;
struct sType* it_645;
struct sType* param_type_646;
void* __right_value669 = (void*)0;
char* param_name_647;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
char* param_name_648;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
char* param_name_649;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct buffer* source3_650;
char* p_651;
char* head_652;
int sline_653;
struct buffer* __dec_obj174;
void* __right_value676 = (void*)0;
struct sNode* node_654;
_Bool Value_655;
_Bool __result_obj__363;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
char* method_block_name_656;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct CVALUE* come_value2_657;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sFun* fun2_658;
struct sType* method_block_type2_659;
void* __right_value683 = (void*)0;
char* __dec_obj175;
void* __right_value684 = (void*)0;
struct sType* __dec_obj176;
struct buffer* __dec_obj177;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct buffer* buf_660;
int j_661;
struct list$1CVALUE$ph* o2_saved_662;
struct CVALUE* it_663;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct CVALUE* come_value_664;
void* __right_value689 = (void*)0;
char* __dec_obj178;
void* __right_value690 = (void*)0;
struct sType* __dec_obj179;
void* __right_value691 = (void*)0;
char* __dec_obj180;
_Bool __result_obj__364;
memset(&i_553, 0, sizeof(int));
    fun_name_422=(char*)come_increment_ref_count(self->fun_name);
    params_423=self->params;
    method_block_424=self->method_block;
    method_block_sline_425=self->method_block_sline;
    var__426=get_variable_from_table(info->lv_table,fun_name_422);
    if(    var__426==((void*)0)) {
        var__426=get_variable_from_table(info->gv_table,fun_name_422);
    }
    if(    var__426) {
        lambda_type_427=var__426->mType;
        if(        string_operator_not_equals(lambda_type_427->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_422);
        }
        result_type_428=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_427->mResultType));
        result_type_428->mStatic=(_Bool)0;
        come_params_429=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 506, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_427->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_423)&&!lambda_type_427->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_422,list$1sType$ph_length(lambda_type_427->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_423));
        }
        i_432=0;
        for(        o2_saved_433=(params_423),it_436=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_433));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_433));        it_436=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_433))        ){
            multiple_assign_var1=it_436;
            label_439=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_440=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_441=node_compile(node_440,info);
            if(            !Value_441) {
                __result_obj__291 = (_Bool)0;
                (label_439 = come_decrement_ref_count(label_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_440) ? node_440 = come_decrement_ref_count(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_429,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__291;
            }
            else {
            }
            come_value_442=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj99=come_value_442->type,
            come_value_442->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_442->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            (_if_conditional1=(lambda_type_427->mVarArgs&&((struct sType*)(__right_value412=list$1sType$ph_operator_load_element(lambda_type_427->mParamTypes,i_432)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value412,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
            }
            else {
                check_assign_type(((char*)(__right_value415=xsprintf("\%s calling param #\%s",((char*)(__right_value413=string_to_string(fun_name_422))),((char*)(__right_value414=int_to_string(i_432)))))),((struct sType*)(__right_value416=list$1sType$ph_operator_load_element(lambda_type_427->mParamTypes,i_432))),come_value_442->type,come_value_442,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value415 = come_decrement_ref_count(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value416,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional2=(((struct sType*)(__right_value417=list$1sType$ph_operator_load_element(lambda_type_427->mParamTypes,i_432)))->mHeap&&come_value_442->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value417,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)(__right_value418=list$1sType$ph_operator_load_element(lambda_type_427->mParamTypes,i_432))),come_value_442->type,come_value_442,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value418,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params_429,(struct CVALUE*)come_increment_ref_count(come_value_442));
            i_432++;
            (label_439 = come_decrement_ref_count(label_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_440) ? node_440 = come_decrement_ref_count(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_442,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 540, "struct buffer*"))));
        buffer_append_str(buf_449,var__426->mCValueName);
        buffer_append_str(buf_449,"(");
        j_450=0;
        for(        o2_saved_451=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_429)),it_454=list$1CVALUE$ph_begin((o2_saved_451));        !list$1CVALUE$ph_end((o2_saved_451));        it_454=list$1CVALUE$ph_next((o2_saved_451))        ){
            buffer_append_str(buf_449,it_454->c_value);
            if(            j_450!=list$1CVALUE$ph_length(come_params_429)-1) {
                buffer_append_str(buf_449,",");
            }
            j_450++;
        }
        /*c*/ come_call_finalizer3(o2_saved_451,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_449,")");
        come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 557, "struct CVALUE*"))));
        __dec_obj100=come_value_457->c_value,
        come_value_457->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_449));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj101=come_value_457->type,
        come_value_457->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_428));
        /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_457->type->mStatic=(_Bool)0;
        come_value_457->var=((void*)0);
        if(        lambda_type_427->mResultType->mHeap) {
            append_object_to_right_values2(come_value_457,(struct sType*)come_increment_ref_count(lambda_type_427->mResultType),info,(_Bool)0,((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_457->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
        info->calling_fun=((void*)0);
        __result_obj__302 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_429,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_449,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__302;
        /*c*/ come_call_finalizer3(result_type_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_429,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_449,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_458=((struct sGenericsFun*)(__right_value426=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value425=__builtin_string(fun_name_422))),((void*)0))));
    (__right_value425 = come_decrement_ref_count(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value426,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_461=(_Bool)0;
    if(    generics_fun_458) {
        method_generics_461=list$1char$ph_length(generics_fun_458->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_461) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_462=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 582, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value429=make_method_generics_function((char*)come_increment_ref_count(fun_name_422),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_462),info)));
            name_463=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_464=multiple_assign_var2->v2;
            /*c*/ come_call_finalizer3(__right_value429,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_465=(char*)come_increment_ref_count(name_463);
            fun_466=((struct sFun*)(__right_value430=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_465,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value430,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_424) {
                come_params_469=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 589, "struct list$1CVALUE$ph*"))));
                fun_470=((struct sFun*)(__right_value433=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_465,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value433,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_471=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_424,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_469),fun_470,fun_name_422,method_block_sline_425,info,(_Bool)1)) {
                    __result_obj__311 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_469,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__311;
                }
                info->no_output_come_code=no_output_come_code_471;
                method_block_node_472=((struct CVALUE*)(__right_value434=list$1CVALUE$ph_operator_load_element(come_params_469,-1)));
                /*c*/ come_call_finalizer3(__right_value434,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_479=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_472->type));
                method_block_result_type_480=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_481=((struct sType*)(__right_value437=list$1sType$ph_operator_load_element(generics_fun_458->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value437,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_482=generics_fun_method_block_lambda_type_481->mResultType;
                if(                generics_fun_method_block_result_type_482->mClass->mMethodGenerics) {
                    method_generics_num_483=generics_fun_method_block_result_type_482->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_483,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_480)));
                }
                n_492=0;
                for(                o2_saved_493=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_481->mParamTypes)),it_496=list$1sType$ph_begin((o2_saved_493));                !list$1sType$ph_end((o2_saved_493));                it_496=list$1sType$ph_next((o2_saved_493))                ){
                    if(                    it_496->mClass->mMethodGenerics) {
                        method_generics_num_499=it_496->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_499,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value442=list$1sType$ph_operator_load_element(method_block_lambda_type_479->mParamTypes,n_492))))));
                        /*c*/ come_call_finalizer3(__right_value442,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_492++;
                }
                /*c*/ come_call_finalizer3(o2_saved_493,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_469,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_480,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_500=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 621, "struct list$1CVALUE$ph*"))));
            i_501=0;
            result_type_502=((void*)0);
            for(            o2_saved_503=(params_423),it_504=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_503));            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_503));            it_504=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_503))            ){
                multiple_assign_var3=it_504;
                label_505=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_506=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_507=node_compile(node_506,info);
                if(                !Value_507) {
                    __result_obj__325 = (_Bool)0;
                    (label_505 = come_decrement_ref_count(label_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_506) ? node_506 = come_decrement_ref_count(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_500,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__325;
                }
                else {
                }
                come_value_508=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj106=come_value_508->type,
                come_value_508->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_508->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                list$1CVALUE$ph_add(come_params_500,(struct CVALUE*)come_increment_ref_count(come_value_508));
                (label_505 = come_decrement_ref_count(label_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_506) ? node_506 = come_decrement_ref_count(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_508,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            generics_fun_458->mResultType->mClass->mMethodGenerics) {
                method_generics_num_512=generics_fun_458->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_512,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                }
            }
            n_513=0;
            for(            o2_saved_514=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_458->mParamTypes)),it_515=list$1sType$ph_begin((o2_saved_514));            !list$1sType$ph_end((o2_saved_514));            it_515=list$1sType$ph_next((o2_saved_514))            ){
                if(                it_515->mClass->mMethodGenerics) {
                    method_generics_num_516=it_515->mClass->mMethodGenericsNum;
                    if(                    n_513<list$1CVALUE$ph_length(come_params_500)) {
                        list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_516,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value452=list$1CVALUE$ph_operator_load_element(come_params_500,n_513)))->type)));
                        /*c*/ come_call_finalizer3(__right_value452,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_513++;
            }
            /*c*/ come_call_finalizer3(o2_saved_514,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_465);
            (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value454=make_method_generics_function((char*)come_increment_ref_count(fun_name_422),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_462),info)));
            name_519=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_520=multiple_assign_var4->v2;
            /*c*/ come_call_finalizer3(__right_value454,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj110=fun_name_422,
            fun_name_422=(char*)come_increment_ref_count(name_519);
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_500,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_519 = come_decrement_ref_count(name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value455=make_method_generics_function((char*)come_increment_ref_count(fun_name_422),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_521=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_522=multiple_assign_var5->v2;
            /*c*/ come_call_finalizer3(__right_value455,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj111=fun_name_422,
            fun_name_422=(char*)come_increment_ref_count(name_521);
            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_521 = come_decrement_ref_count(name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_422,"__builtin_memmove")||string_operator_equals(fun_name_422,"__builtin_memset")||string_operator_equals(fun_name_422,"__builtin_ffs")||string_operator_equals(fun_name_422,"__builtin_ffsl")||string_operator_equals(fun_name_422,"__builtin_ffsll")||string_operator_equals(fun_name_422,"__builtin_bswap16")||string_operator_equals(fun_name_422,"__builtin_bswap32")||string_operator_equals(fun_name_422,"__builtin_bswap64")||string_operator_equals(fun_name_422,"__builtin_constant_p")||string_operator_equals(fun_name_422,"__builtin_expect")||string_operator_equals(fun_name_422,"__builtin___memset_chk")||string_operator_equals(fun_name_422,"__builtin_object_size")||string_operator_equals(fun_name_422,"__builtin___memcpy_chk")||string_operator_equals(fun_name_422,"__builtin___strncpy_chk")||string_operator_equals(fun_name_422,"__builtin___strncat_chk")||string_operator_equals(fun_name_422,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_422,"__builtin_strrchr")||string_operator_equals(fun_name_422,"__builtin_clz")||string_operator_equals(fun_name_422,"__dsb")||string_operator_equals(fun_name_422,"__isb")||string_operator_equals(fun_name_422,"__dmb")||(strlen(fun_name_422)==strlen("__builtin_arm_")&&memcmp(fun_name_422,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_422,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_422,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_422,"__c11_atomic_store")||string_operator_equals(fun_name_422,"__c11_atomic_load")||string_operator_equals(fun_name_422,"__c11_atomic_exchange")||string_operator_equals(fun_name_422,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_422,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_422,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_422,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_422,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_422,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_422,"__c11_atomic_fetch_xor")) {
        come_params_523=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 696, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_524=(params_423),it_525=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_524));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_524));        it_525=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_524))        ){
            multiple_assign_var6=it_525;
            label_526=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_527=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_528=node_compile(node_527,info);
            if(            !Value_528) {
                __result_obj__328 = (_Bool)0;
                (label_526 = come_decrement_ref_count(label_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_527) ? node_527 = come_decrement_ref_count(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__328;
            }
            else {
            }
            come_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj112=come_value_529->type,
            come_value_529->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_529->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_523,(struct CVALUE*)come_increment_ref_count(come_value_529));
            (label_526 = come_decrement_ref_count(label_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_527) ? node_527 = come_decrement_ref_count(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_529,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 711, "struct buffer*"))));
        buffer_append_str(buf_530,fun_name_422);
        buffer_append_str(buf_530,"(");
        j_531=0;
        for(        o2_saved_532=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_523)),it_533=list$1CVALUE$ph_begin((o2_saved_532));        !list$1CVALUE$ph_end((o2_saved_532));        it_533=list$1CVALUE$ph_next((o2_saved_532))        ){
            buffer_append_str(buf_530,it_533->c_value);
            if(            j_531!=list$1CVALUE$ph_length(come_params_523)-1) {
                buffer_append_str(buf_530,",");
            }
            j_531++;
        }
        /*c*/ come_call_finalizer3(o2_saved_532,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_530,")");
        come_value_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 728, "struct CVALUE*"))));
        __dec_obj113=come_value_534->c_value,
        come_value_534->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_530));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_422,"__builtin_memmove")||string_operator_equals(fun_name_422,"__builtin_memset")) {
            __dec_obj114=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_ffs")) {
            __dec_obj115=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 735, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_ffsl")) {
            __dec_obj116=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_ffsll")) {
            __dec_obj117=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_bswap16")) {
            __dec_obj118=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_bswap32")) {
            __dec_obj119=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_bswap64")) {
            __dec_obj120=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_constant_p")) {
            __dec_obj121=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_expect")) {
            __dec_obj122=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 756, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin___memset_chk")) {
            __dec_obj123=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 759, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_object_size")) {
            __dec_obj124=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 763, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin___memcpy_chk")) {
            __dec_obj125=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 766, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_422,"__builtin___strncpy_chk")) {
            __dec_obj126=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_422,"__builtin___strncat_chk")) {
            __dec_obj127=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_strrchr")) {
            __dec_obj128=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_422,"__builtin___vsnprintf_chk")) {
            __dec_obj129=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_clz")) {
            __dec_obj130=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_thread_fence")) {
            __dec_obj131=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_signal_fence")) {
            __dec_obj132=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_exchange")) {
            __dec_obj133=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value522=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value522,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_exchange_strong")) {
            __dec_obj134=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value524=list$1CVALUE$ph_operator_load_element(come_params_523,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value524,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_exchange_weak")) {
            __dec_obj135=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value526=list$1CVALUE$ph_operator_load_element(come_params_523,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value526,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_store")) {
            __dec_obj136=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_load")) {
            __dec_obj137=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value531=list$1CVALUE$ph_operator_load_element(come_params_523,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value531,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_534->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_fetch_add")) {
            __dec_obj138=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value533=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value533,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_fetch_sub")) {
            __dec_obj139=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value535=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value535,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_fetch_and")) {
            __dec_obj140=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value537=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value537,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_fetch_or")) {
            __dec_obj141=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value539=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value539,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__c11_atomic_fetch_xor")) {
            __dec_obj142=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value541=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value541,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__dsb")) {
            __dec_obj143=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__isb")) {
            __dec_obj144=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 828, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__dmb")) {
            __dec_obj145=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 831, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_arm_cdp")) {
            __dec_obj146=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_arm_ldc")) {
            __dec_obj147=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_arm_stc")) {
            __dec_obj148=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_arm_stcl")) {
            __dec_obj149=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 843, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_422,"__builtin_arm_ldcl")) {
            __dec_obj150=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 846, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_534->var=((void*)0);
        add_come_last_code(info,"%s",come_value_534->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_534));
        __result_obj__329 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_530,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_534,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__329;
        /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_530,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_534,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_422,"__builtin_va_arg")) {
        come_params_535=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 858, "struct list$1CVALUE$ph*"))));
        i_536=0;
        result_type_537=((void*)0);
        for(        o2_saved_538=(params_423),it_539=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_538));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_538));        it_539=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_538))        ){
            multiple_assign_var7=it_539;
            label_540=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_541=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_542=node_compile(node_541,info);
            if(            !Value_542) {
                __result_obj__330 = (_Bool)0;
                (label_540 = come_decrement_ref_count(label_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_541) ? node_541 = come_decrement_ref_count(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_535,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__330;
            }
            else {
            }
            come_value_543=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj151=come_value_543->type,
            come_value_543->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_543->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_535,(struct CVALUE*)come_increment_ref_count(come_value_543));
            __dec_obj152=result_type_537,
            result_type_537=(struct sType*)come_increment_ref_count(come_value_543->type);
            /*b*/ come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_540 = come_decrement_ref_count(label_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_541) ? node_541 = come_decrement_ref_count(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_543,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 878, "struct buffer*"))));
        buffer_append_str(buf_544,fun_name_422);
        buffer_append_str(buf_544,"(");
        j_545=0;
        for(        o2_saved_546=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_535)),it_547=list$1CVALUE$ph_begin((o2_saved_546));        !list$1CVALUE$ph_end((o2_saved_546));        it_547=list$1CVALUE$ph_next((o2_saved_546))        ){
            buffer_append_str(buf_544,it_547->c_value);
            if(            j_545!=list$1CVALUE$ph_length(come_params_535)-1) {
                buffer_append_str(buf_544,",");
            }
            j_545++;
        }
        /*c*/ come_call_finalizer3(o2_saved_546,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_544,")");
        come_value_548=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 895, "struct CVALUE*"))));
        __dec_obj153=come_value_548->c_value,
        come_value_548->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_544));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj154=come_value_548->type,
        come_value_548->type=(struct sType*)come_increment_ref_count(result_type_537);
        /*b*/ come_call_finalizer3(__dec_obj154,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_548->var=((void*)0);
        add_come_last_code(info,"%s",come_value_548->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_548));
        __result_obj__331 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_535,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_544,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_548,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__331;
        /*c*/ come_call_finalizer3(come_params_535,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_544,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_548,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_422,"string")) {
        __dec_obj155=fun_name_422,
        fun_name_422=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_422,"wstring")) {
        __dec_obj156=fun_name_422,
        fun_name_422=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_422,"inherit")) {
        p_549=info->come_fun->mName;
        version_550=0;
        while(        *p_549) {
            if(            *p_549==95&&*(p_549+1)==118&&xisdigit(*(p_549+2))) {
                p2_551=p_549+2;
                version_550=0;
                while(                xisdigit(*p2_551)) {
                    version_550=version_550*10+(*p2_551-48);
                    p2_551++;
                }
                break;
            }
            else {
                p_549++;
            }
        }
        char real_fun_name_552[2048];
        memset(&real_fun_name_552, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_552,info->come_fun->mName,p_549-info->come_fun->mName);
        real_fun_name_552[p_549-info->come_fun->mName]=0;
        for(        i_553=version_550-1;        i_553>=1;        i_553--        ){
            new_fun_name_554=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_552,i_553));
            if(            (_if_conditional3=(((struct sFun*)(__right_value579=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_554))))),            /*c*/ come_call_finalizer3(__right_value579,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __dec_obj157=fun_name_422,
                fun_name_422=(char*)come_increment_ref_count(__builtin_string(new_fun_name_554));
                __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_554 = come_decrement_ref_count(new_fun_name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_554 = come_decrement_ref_count(new_fun_name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_553==0) {
            new_fun_name_561=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_552));
            if(            (_if_conditional4=(((struct sFun*)(__right_value582=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_561))))),            /*c*/ come_call_finalizer3(__right_value582,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __dec_obj158=fun_name_422,
                fun_name_422=(char*)come_increment_ref_count(__builtin_string(new_fun_name_561));
                __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_422,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
            }
            (new_fun_name_561 = come_decrement_ref_count(new_fun_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_562=128;        i_562>=1;        i_562--        ){
            new_fun_name_563=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_422,i_562));
            if(            (_if_conditional5=(((struct sFun*)(__right_value585=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_563))))),            /*c*/ come_call_finalizer3(__right_value585,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
                __dec_obj159=fun_name_422,
                fun_name_422=(char*)come_increment_ref_count(__builtin_string(new_fun_name_563));
                __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_563 = come_decrement_ref_count(new_fun_name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_563 = come_decrement_ref_count(new_fun_name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_564=((struct sFun*)(__right_value587=map$2char$phsFun$ph_at(info->funcs,fun_name_422,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value587,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_564==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_422);
        come_params_565=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 975, "struct list$1CVALUE$ph*"))));
        i_566=0;
        result_type_567=((void*)0);
        for(        o2_saved_568=(params_423),it_569=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_568));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_568));        it_569=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_568))        ){
            multiple_assign_var8=it_569;
            label_570=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_571=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_572=node_compile(node_571,info);
            if(            !Value_572) {
                __result_obj__340 = (_Bool)0;
                (label_570 = come_decrement_ref_count(label_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_571) ? node_571 = come_decrement_ref_count(node_571, ((struct sNode*)node_571)->finalize, ((struct sNode*)node_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_565,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_567,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__340;
            }
            else {
            }
            come_value_573=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj160=come_value_573->type,
            come_value_573->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_573->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_565,(struct CVALUE*)come_increment_ref_count(come_value_573));
            __dec_obj161=result_type_567,
            result_type_567=(struct sType*)come_increment_ref_count(come_value_573->type);
            /*b*/ come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_570 = come_decrement_ref_count(label_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_571) ? node_571 = come_decrement_ref_count(node_571, ((struct sNode*)node_571)->finalize, ((struct sNode*)node_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_573,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_574=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 995, "struct buffer*"))));
        buffer_append_str(buf_574,fun_name_422);
        buffer_append_str(buf_574,"(");
        j_575=0;
        for(        o2_saved_576=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_565)),it_577=list$1CVALUE$ph_begin((o2_saved_576));        !list$1CVALUE$ph_end((o2_saved_576));        it_577=list$1CVALUE$ph_next((o2_saved_576))        ){
            buffer_append_str(buf_574,it_577->c_value);
            if(            j_575!=list$1CVALUE$ph_length(come_params_565)-1) {
                buffer_append_str(buf_574,",");
            }
            j_575++;
        }
        /*c*/ come_call_finalizer3(o2_saved_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_574,")");
        come_value_578=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1012, "struct CVALUE*"))));
        __dec_obj162=come_value_578->c_value,
        come_value_578->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_574));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj163=come_value_578->type,
        come_value_578->type=(struct sType*)come_increment_ref_count(result_type_567);
        /*b*/ come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_578->var=((void*)0);
        add_come_last_code(info,"%s",come_value_578->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_578));
        __result_obj__341 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_565,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_567,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_574,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_578,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__341;
        /*c*/ come_call_finalizer3(come_params_565,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_567,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_574,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_578,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_579=(struct sType*)come_increment_ref_count(sType_clone(fun_564->mResultType));
    result_type_579->mStatic=(_Bool)0;
    param_types_580=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1027, "struct list$1sType$ph*"))));
    for(    o2_saved_581=(struct list$1sType$ph*)come_increment_ref_count((fun_564->mParamTypes)),it_582=list$1sType$ph_begin((o2_saved_581));    !list$1sType$ph_end((o2_saved_581));    it_582=list$1sType$ph_next((o2_saved_581))    ){
        it2_583=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value600=sType_clone(it_582))),info->generics_type,info));
        /*c*/ come_call_finalizer3(__right_value600,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_580,(struct sType*)come_increment_ref_count(sType_clone(it2_583)));
        /*c*/ come_call_finalizer3(it2_583,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_581,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj164=result_type_579,
    result_type_579=(struct sType*)come_increment_ref_count(solve_generics(result_type_579,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_584=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1035, "struct list$1CVALUE$ph*"))));
    for(    i_585=0;    i_585<list$1sType$ph_length(fun_564->mParamTypes)-(((method_block_424)?(2):(0)));    i_585++    ){
        list$1CVALUE$ph_add(come_params_584,((void*)0));
    }
    for(    o2_saved_586=(params_423),it_587=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_586));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_586));    it_587=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_586))    ){
        multiple_assign_var9=it_587;
        label_588=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        node_589=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        fun_564->mVarArgs||string_operator_equals(fun_name_422,"__builtin_va_start")) {
        }
        else if(        label_588) {
            Value_590=node_compile(node_589,info);
            if(            !Value_590) {
                __result_obj__342 = (_Bool)0;
                (label_588 = come_decrement_ref_count(label_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_589) ? node_589 = come_decrement_ref_count(node_589, ((struct sNode*)node_589)->finalize, ((struct sNode*)node_589)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__342;
            }
            else {
            }
            come_value_591=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj165=come_value_591->type,
            come_value_591->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_591->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            n_592=0;
            for(            o2_saved_593=(struct list$1char$ph*)come_increment_ref_count((fun_564->mParamNames)),it_594=list$1char$ph_begin((o2_saved_593));            !list$1char$ph_end((o2_saved_593));            it_594=list$1char$ph_next((o2_saved_593))            ){
                if(                string_operator_equals(label_588,it_594)) {
                    break;
                }
                n_592++;
            }
            /*c*/ come_call_finalizer3(o2_saved_593,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional6=(((struct sType*)(__right_value608=list$1sType$ph_operator_load_element(param_types_580,n_592))))),            /*c*/ come_call_finalizer3(__right_value608,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                check_assign_type(((char*)(__right_value611=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value609=string_to_string(fun_name_422))),((char*)(__right_value610=int_to_string(n_592)))))),((struct sType*)(__right_value612=list$1sType$ph_operator_load_element(param_types_580,n_592))),come_value_591->type,come_value_591,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value609 = come_decrement_ref_count(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value610 = come_decrement_ref_count(__right_value610, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value611 = come_decrement_ref_count(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value612,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional7=(((struct sType*)(__right_value613=list$1sType$ph_operator_load_element(param_types_580,n_592)))&&((struct sType*)(__right_value614=list$1sType$ph_operator_load_element(param_types_580,n_592)))->mHeap&&come_value_591->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value613,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value614,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                std_move(((struct sType*)(__right_value615=list$1sType$ph_operator_load_element(param_types_580,n_592))),come_value_591->type,come_value_591,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value615,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_584,n_592,(struct CVALUE*)come_increment_ref_count(come_value_591));
            /*c*/ come_call_finalizer3(come_value_591,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_588 = come_decrement_ref_count(label_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_589) ? node_589 = come_decrement_ref_count(node_589, ((struct sNode*)node_589)->finalize, ((struct sNode*)node_589)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_600=0;
    for(    o2_saved_601=(params_423),it_602=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_601));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_601));    it_602=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_601))    ){
        multiple_assign_var10=it_602;
        label_603=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_604=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_564->mVarArgs||string_operator_equals(fun_name_422,"__builtin_va_start")) {
            Value_605=node_compile(node_604,info);
            if(            !Value_605) {
                __result_obj__345 = (_Bool)0;
                (label_603 = come_decrement_ref_count(label_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_604) ? node_604 = come_decrement_ref_count(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__345;
            }
            else {
            }
            come_value_606=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj167=come_value_606->type,
            come_value_606->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_606->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional8=(((struct CVALUE*)(__right_value618=list$1CVALUE$ph_operator_load_element(come_params_584,i_600)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value618,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    break;
                }
                else {
                    i_600++;
                }
            }
            list$1CVALUE$ph_replace(come_params_584,i_600,(struct CVALUE*)come_increment_ref_count(come_value_606));
            i_600++;
            /*c*/ come_call_finalizer3(come_value_606,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_603) {
        }
        else {
            Value_607=node_compile(node_604,info);
            if(            !Value_607) {
                __result_obj__346 = (_Bool)0;
                (label_603 = come_decrement_ref_count(label_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_604) ? node_604 = come_decrement_ref_count(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__346;
            }
            else {
            }
            come_value_608=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj168=come_value_608->type,
            come_value_608->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_608->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional9=(((struct CVALUE*)(__right_value621=list$1CVALUE$ph_operator_load_element(come_params_584,i_600)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value621,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional9) {
                    break;
                }
                else {
                    i_600++;
                }
            }
            if(            (_if_conditional10=(((struct sType*)(__right_value622=list$1sType$ph_operator_load_element(param_types_580,i_600))))),            /*c*/ come_call_finalizer3(__right_value622,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional10) {
                check_assign_type(((char*)(__right_value625=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value623=string_to_string(fun_name_422))),((char*)(__right_value624=int_to_string(i_600)))))),((struct sType*)(__right_value626=list$1sType$ph_operator_load_element(param_types_580,i_600))),come_value_608->type,come_value_608,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value623 = come_decrement_ref_count(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value624 = come_decrement_ref_count(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value625 = come_decrement_ref_count(__right_value625, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value626,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional11=(((struct sType*)(__right_value627=list$1sType$ph_operator_load_element(param_types_580,i_600)))&&((struct sType*)(__right_value628=list$1sType$ph_operator_load_element(param_types_580,i_600)))->mHeap&&come_value_608->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value627,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value628,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                std_move(((struct sType*)(__right_value629=list$1sType$ph_operator_load_element(param_types_580,i_600))),come_value_608->type,come_value_608,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value629,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_584,i_600,(struct CVALUE*)come_increment_ref_count(come_value_608));
            i_600++;
            /*c*/ come_call_finalizer3(come_value_608,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_603 = come_decrement_ref_count(label_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_604) ? node_604 = come_decrement_ref_count(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    (_Bool)1) {
        if(        (_if_conditional12=(((struct CVALUE*)(__right_value630=list$1CVALUE$ph_operator_load_element(come_params_584,i_600)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value630,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional12) {
            break;
        }
        else {
            i_600++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_423)<list$1sType$ph_length(fun_564->mParamTypes)) {
        for(        ;        i_600<list$1sType$ph_length(fun_564->mParamTypes)-(((method_block_424)?(2):(0)));        i_600++        ){
            default_param_609=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value631=list$1char$ph_operator_load_element(fun_564->mParamDefaultParametors,i_600))), "05call.c", 1144, "char*"));
            (__right_value631 = come_decrement_ref_count(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_616=((char*)(__right_value633=list$1char$ph_operator_load_element(fun_564->mParamNames,i_600)));
            (__right_value633 = come_decrement_ref_count(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional13=(default_param_609&&string_operator_not_equals(default_param_609,"")&&((struct CVALUE*)(__right_value634=list$1CVALUE$ph_operator_load_element(come_params_584,i_600)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value634,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                source_617=(struct buffer*)come_increment_ref_count(info->source);
                p_618=info->p;
                head_619=info->head;
                sline_620=info->sline;
                __dec_obj169=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_609));
                /*b*/ come_call_finalizer3(__dec_obj169,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_621=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_622=node_compile(node_621,info);
                if(                !Value_622) {
                    __result_obj__351 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_617,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_621) ? node_621 = come_decrement_ref_count(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_609 = come_decrement_ref_count(default_param_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__351;
                }
                else {
                }
                __dec_obj170=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_617);
                /*b*/ come_call_finalizer3(__dec_obj170,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_618;
                info->head=head_619;
                info->sline=sline_620;
                come_value_623=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj171=come_value_623->type,
                come_value_623->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_623->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional14=(((struct sType*)(__right_value639=list$1sType$ph_operator_load_element(param_types_580,i_600))))),                /*c*/ come_call_finalizer3(__right_value639,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional14) {
                    check_assign_type(((char*)(__right_value642=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value640=string_to_string(fun_name_422))),((char*)(__right_value641=int_to_string(i_600)))))),((struct sType*)(__right_value643=list$1sType$ph_operator_load_element(param_types_580,i_600))),come_value_623->type,come_value_623,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value640 = come_decrement_ref_count(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value641 = come_decrement_ref_count(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value642 = come_decrement_ref_count(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value643,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional15=(((struct sType*)(__right_value644=list$1sType$ph_operator_load_element(param_types_580,i_600)))&&((struct sType*)(__right_value645=list$1sType$ph_operator_load_element(param_types_580,i_600)))->mHeap&&come_value_623->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value644,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value645,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    std_move(((struct sType*)(__right_value646=list$1sType$ph_operator_load_element(param_types_580,i_600))),come_value_623->type,come_value_623,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value646,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_584,i_600,(struct CVALUE*)come_increment_ref_count(come_value_623));
                /*c*/ come_call_finalizer3(source_617,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_621) ? node_621 = come_decrement_ref_count(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_623,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value647=list$1CVALUE$ph_operator_load_element(come_params_584,i_600)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value647,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_564->mName,i_600);
                }
            }
            (default_param_609 = come_decrement_ref_count(default_param_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_564->mParamTypes)-(((method_block_424)?(2):(0)))!=list$1CVALUE$ph_length(come_params_584)&&!fun_564->mVarArgs&&string_operator_not_equals(fun_name_422,"__builtin_va_start")&&string_operator_not_equals(fun_name_422,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_422,list$1sType$ph_length(fun_564->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_423));
    }
    if(    method_block_424) {
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1194, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value649=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1194, "struct sCurrentNode2*")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_624=(struct sNode*)come_increment_ref_count(_inf_value1);
        /*c*/ come_call_finalizer3(__right_value649,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_626=node_compile(current_stack_frame_node_624,info);
        if(        !Value_626) {
            __result_obj__354 = (_Bool)0;
            ((current_stack_frame_node_624) ? current_stack_frame_node_624 = come_decrement_ref_count(current_stack_frame_node_624, ((struct sNode*)current_stack_frame_node_624)->finalize, ((struct sNode*)current_stack_frame_node_624)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__354;
        }
        else {
        }
        come_value_627=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj173=come_value_627->type,
        come_value_627->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_627->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_584,(struct CVALUE*)come_increment_ref_count(come_value_627));
        method_block2_628=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1204, "struct buffer*"))));
        method_block_type_629=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value657=list$1sType$ph_operator_load_element(fun_564->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value657,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_630=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value660=list$1sType$ph_operator_load_element(method_block_type_629->mParamTypes,0)))->mClass=((struct sClass*)(__right_value661=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_630)));
        /*c*/ come_call_finalizer3(__right_value660,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value661,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_637=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value662=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_630)));
        /*c*/ come_call_finalizer3(__right_value662,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        num_method_block_638=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_629->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_422);
        }
        result_type_639=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_629->mResultType));
        result_type_639->mStatic=(_Bool)0;
        param_types_640=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_629->mParamTypes));
        param_names_641=method_block_type_629->mParamNames;
        all_alhabet_sname_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1226, "struct buffer*"))));
        {
            p_643=info->sname;
            while(            *p_643) {
                if(                xisalnum(*p_643)) {
                    buffer_append_char(all_alhabet_sname_642,*p_643++);
                }
                else {
                    p_643++;
                }
            }
        }
        buffer_append_format(method_block2_628,"%s fun_block%d_%s(",((char*)(__right_value667=make_type_name_string(result_type_639,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),num_method_block_638,((char*)(__right_value668=buffer_to_string(all_alhabet_sname_642))));
        (__right_value667 = come_decrement_ref_count(__right_value667, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value668 = come_decrement_ref_count(__right_value668, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_600=0;
        for(        o2_saved_644=(struct list$1sType$ph*)come_increment_ref_count((param_types_640)),it_645=list$1sType$ph_begin((o2_saved_644));        !list$1sType$ph_end((o2_saved_644));        it_645=list$1sType$ph_next((o2_saved_644))        ){
            param_type_646=it_645;
            if(            i_600==0) {
                param_name_647=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_628,"%s",((char*)(__right_value670=make_define_var(param_type_646,param_name_647,(_Bool)0,info))));
                (__right_value670 = come_decrement_ref_count(__right_value670, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_647 = come_decrement_ref_count(param_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_600==1) {
                param_name_648=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_628,"%s",((char*)(__right_value672=make_define_var_no_solved(param_type_646,param_name_648,(_Bool)0,(_Bool)1,info))));
                (__right_value672 = come_decrement_ref_count(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_648 = come_decrement_ref_count(param_name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_649=(char*)come_increment_ref_count(xsprintf("it%d",i_600));
                buffer_append_format(method_block2_628,"%s",((char*)(__right_value674=make_define_var_no_solved(param_type_646,param_name_649,(_Bool)0,(_Bool)1,info))));
                (__right_value674 = come_decrement_ref_count(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_649 = come_decrement_ref_count(param_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_600!=list$1sType$ph_length(param_types_640)-1) {
                buffer_append_str(method_block2_628,",");
            }
            i_600++;
        }
        /*c*/ come_call_finalizer3(o2_saved_644,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_628,")\n");
        buffer_append_str(method_block2_628,((char*)(__right_value675=buffer_to_string(method_block_424))));
        (__right_value675 = come_decrement_ref_count(__right_value675, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_650=(struct buffer*)come_increment_ref_count(info->source);
        p_651=info->p;
        head_652=info->head;
        sline_653=info->sline;
        __dec_obj174=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_628);
        /*b*/ come_call_finalizer3(__dec_obj174,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_425;
        node_654=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_655=node_compile(node_654,info);
        if(        !Value_655) {
            __result_obj__363 = (_Bool)0;
            ((current_stack_frame_node_624) ? current_stack_frame_node_624 = come_decrement_ref_count(current_stack_frame_node_624, ((struct sNode*)current_stack_frame_node_624)->finalize, ((struct sNode*)current_stack_frame_node_624)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_627,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_628,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_629,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_630 = come_decrement_ref_count(class_name_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_640,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_654) ? node_654 = come_decrement_ref_count(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__363;
        }
        else {
        }
        method_block_name_656=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_638,((char*)(__right_value677=buffer_to_string(all_alhabet_sname_642)))));
        (__right_value677 = come_decrement_ref_count(__right_value677, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_657=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1291, "struct CVALUE*"))));
        fun2_658=((struct sFun*)(__right_value682=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value681=__builtin_string(method_block_name_656))),((void*)0))));
        (__right_value681 = come_decrement_ref_count(__right_value681, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value682,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_658==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_656);
        }
        method_block_type2_659=fun2_658->mLambdaType;
        __dec_obj175=come_value2_657->c_value,
        come_value2_657->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_656));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj176=come_value2_657->type,
        come_value2_657->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_659));
        /*b*/ come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_657->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_584,(struct CVALUE*)come_increment_ref_count(come_value2_657));
        __dec_obj177=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_650);
        /*b*/ come_call_finalizer3(__dec_obj177,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_651;
        info->head=head_652;
        info->sline=sline_653;
        info->current_stack_frame_struct=current_stack_frame_struct_637;
        ((current_stack_frame_node_624) ? current_stack_frame_node_624 = come_decrement_ref_count(current_stack_frame_node_624, ((struct sNode*)current_stack_frame_node_624)->finalize, ((struct sNode*)current_stack_frame_node_624)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_627,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_628,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_629,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_630 = come_decrement_ref_count(class_name_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_640,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_654) ? node_654 = come_decrement_ref_count(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_656 = come_decrement_ref_count(method_block_name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_657,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_660=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1315, "struct buffer*"))));
    buffer_append_str(buf_660,fun_name_422);
    buffer_append_str(buf_660,"(");
    j_661=0;
    for(    o2_saved_662=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_584)),it_663=list$1CVALUE$ph_begin((o2_saved_662));    !list$1CVALUE$ph_end((o2_saved_662));    it_663=list$1CVALUE$ph_next((o2_saved_662))    ){
        buffer_append_str(buf_660,it_663->c_value);
        if(        j_661!=list$1CVALUE$ph_length(come_params_584)-1) {
            buffer_append_str(buf_660,",");
        }
        j_661++;
    }
    /*c*/ come_call_finalizer3(o2_saved_662,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_660,")");
    come_value_664=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1332, "struct CVALUE*"))));
    __dec_obj178=come_value_664->c_value,
    come_value_664->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_660));
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj179=come_value_664->type,
    come_value_664->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_579));
    /*b*/ come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_664->type->mStatic=(_Bool)0;
    come_value_664->var=((void*)0);
    if(    fun_564->mResultType->mHeap) {
        append_object_to_right_values2(come_value_664,(struct sType*)come_increment_ref_count(result_type_579),info,(_Bool)0,((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")) {
        if(        string_operator_not_equals(fun_name_422,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_422,"null_check")&&string_operator_not_equals(fun_name_422,"come_push_stackframe")&&string_operator_not_equals(fun_name_422,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_422,"come_pop_stackframe")&&string_operator_not_equals(fun_name_422,"come_pop_stackframe_v2")) {
            __dec_obj180=come_value_664->c_value,
            come_value_664->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_664->c_value,come_value_664->type,info));
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_664->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_664));
    info->calling_fun=fun_564;
    __result_obj__364 = (_Bool)1;
    (fun_name_422 = come_decrement_ref_count(fun_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_584,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_660,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_664,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__364;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__276;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_414;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_415;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__281;
    if(    self==((void*)0)) {
        __result_obj__276 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__276,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__276;
    }
    result_414=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_415=self->head;
    while(    it_415!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_414,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_415->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_414,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_415->item)));
        }
        it_415=it_415->next;
    }
    __result_obj__281 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_414);
    /*c*/ come_call_finalizer3(result_414,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__281,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__281;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_412;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_413;
    it_412=self->head;
    while(    it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        /*c*/ come_call_finalizer3(prev_it_413,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__277;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__277 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__277,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value397 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_416;
struct tuple2$2char$phsNode$ph* __dec_obj91;
void* __right_value398 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_417;
struct tuple2$2char$phsNode$ph* __dec_obj92;
void* __right_value399 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_418;
struct tuple2$2char$phsNode$ph* __dec_obj93;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__278;
    if(    self->len==0) {
        litem_416=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value397=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_416->prev=((void*)0);
        litem_416->next=((void*)0);
        __dec_obj91=litem_416->item,
        litem_416->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj91,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_416;
        self->head=litem_416;
    }
    else if(    self->len==1) {
        litem_417=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value398=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_417->prev=self->head;
        litem_417->next=((void*)0);
        __dec_obj92=litem_417->item,
        litem_417->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_417;
        self->head->next=litem_417;
    }
    else {
        litem_418=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value399=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_418->prev=self->tail;
        litem_418->next=((void*)0);
        __dec_obj93=litem_418->item,
        litem_418->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_418;
        self->tail=litem_418;
    }
    self->len++;
    __result_obj__278 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__279;
void* __right_value400 = (void*)0;
struct tuple2$2char$phsNode$ph* result_419;
void* __right_value401 = (void*)0;
char* __dec_obj94;
void* __right_value402 = (void*)0;
struct sNode* __dec_obj95;
struct tuple2$2char$phsNode$ph* __result_obj__280;
    if(    self==(void*)0) {
        __result_obj__279 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__279,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__279;
    }
    result_419=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj94=result_419->v1,
        result_419->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj95=result_419->v2,
        result_419->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__280 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_419);
    /*c*/ come_call_finalizer3(result_419,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__280,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_420;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_421;
    it_420=self->head;
    while(    it_420!=((void*)0)) {
        prev_it_421=it_420;
        it_420=it_420->next;
        /*c*/ come_call_finalizer3(prev_it_421,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__284;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__284 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_430;
struct list_item$1CVALUE$ph* prev_it_431;
    it_430=self->head;
    while(    it_430!=((void*)0)) {
        prev_it_431=it_430;
        it_430=it_430->next;
        /*c*/ come_call_finalizer3(prev_it_431,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_434;
struct tuple2$2char$phsNode$ph* __result_obj__285;
struct tuple2$2char$phsNode$ph* __result_obj__286;
struct tuple2$2char$phsNode$ph* result_435;
struct tuple2$2char$phsNode$ph* __result_obj__287;
result_434 = (void*)0;
result_435 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_434,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__285 = result_434;
        return __result_obj__285;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__286 = self->it->item;
        return __result_obj__286;
    }
    memset(&result_435,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__287 = result_435;
    return __result_obj__287;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_437;
struct tuple2$2char$phsNode$ph* __result_obj__288;
struct tuple2$2char$phsNode$ph* __result_obj__289;
struct tuple2$2char$phsNode$ph* result_438;
struct tuple2$2char$phsNode$ph* __result_obj__290;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_437,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__288 = result_437;
        return __result_obj__288;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__289 = self->it->item;
        return __result_obj__289;
    }
    memset(&result_438,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__290 = result_438;
    return __result_obj__290;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_443;
int i_444;
struct sType* __result_obj__292;
struct sType* default_value_445;
struct sType* __result_obj__293;
default_value_445 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_443=self->head;
    i_444=0;
    while(    it_443!=((void*)0)) {
        if(        position==i_444) {
            __result_obj__292 = (struct sType*)come_increment_ref_count(it_443->item);
            /*c*/ come_call_finalizer3(__result_obj__292,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__292;
        }
        it_443=it_443->next;
        i_444++;
    }
    memset(&default_value_445,0,sizeof(struct sType*));
    __result_obj__293 = (struct sType*)come_increment_ref_count(default_value_445);
    /*c*/ come_call_finalizer3(default_value_445,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__293,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_446;
int i_447;
struct sType* __result_obj__294;
struct sType* default_value_448;
struct sType* __result_obj__295;
default_value_448 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_446=self->head;
    i_447=0;
    while(    it_446!=((void*)0)) {
        if(        position==i_447) {
            __result_obj__294 = (struct sType*)come_increment_ref_count(it_446->item);
            /*c*/ come_call_finalizer3(__result_obj__294,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__294;
        }
        it_446=it_446->next;
        i_447++;
    }
    memset(&default_value_448,0,sizeof(struct sType*));
    __result_obj__295 = (struct sType*)come_increment_ref_count(default_value_448);
    /*c*/ come_call_finalizer3(default_value_448,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__295,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_452;
struct CVALUE* __result_obj__296;
struct CVALUE* __result_obj__297;
struct CVALUE* result_453;
struct CVALUE* __result_obj__298;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_452,0,sizeof(struct CVALUE*));
        __result_obj__296 = result_452;
        return __result_obj__296;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__297 = self->it->item;
        return __result_obj__297;
    }
    memset(&result_453,0,sizeof(struct CVALUE*));
    __result_obj__298 = result_453;
    return __result_obj__298;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_455;
struct CVALUE* __result_obj__299;
struct CVALUE* __result_obj__300;
struct CVALUE* result_456;
struct CVALUE* __result_obj__301;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_455,0,sizeof(struct CVALUE*));
        __result_obj__299 = result_455;
        return __result_obj__299;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        return __result_obj__300;
    }
    memset(&result_456,0,sizeof(struct CVALUE*));
    __result_obj__301 = result_456;
    return __result_obj__301;
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
struct sGenericsFun* __result_obj__303;
struct sGenericsFun* __result_obj__304;
struct sGenericsFun* __result_obj__305;
struct sGenericsFun* __result_obj__306;
    hash_459=string_get_hash_key(((char*)key))%self->size;
    it_460=hash_459;
    while(    (_Bool)1) {
        if(        self->item_existance[it_460]) {
            if(            string_equals(self->keys[it_460],key)) {
                __result_obj__303 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_460]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__303,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__303;
            }
            it_460++;
            if(            it_460>=self->size) {
                it_460=0;
            }
            else if(            it_460==hash_459) {
                __result_obj__304 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__304,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__304;
            }
        }
        else {
            __result_obj__305 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__305,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__305;
        }
    }
    __result_obj__306 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__306,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
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
struct sFun* __result_obj__307;
struct sFun* __result_obj__308;
struct sFun* __result_obj__309;
struct sFun* __result_obj__310;
    hash_467=string_get_hash_key(((char*)key))%self->size;
    it_468=hash_467;
    while(    (_Bool)1) {
        if(        self->item_existance[it_468]) {
            if(            string_equals(self->keys[it_468],key)) {
                __result_obj__307 = (struct sFun*)come_increment_ref_count(self->items[it_468]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__307,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__307;
            }
            it_468++;
            if(            it_468>=self->size) {
                it_468=0;
            }
            else if(            it_468==hash_467) {
                __result_obj__308 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__308,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__308;
            }
        }
        else {
            __result_obj__309 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__309,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__309;
        }
    }
    __result_obj__310 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__310,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
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

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_473;
int i_474;
struct CVALUE* __result_obj__312;
struct CVALUE* default_value_475;
struct CVALUE* __result_obj__313;
default_value_475 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_473=self->head;
    i_474=0;
    while(    it_473!=((void*)0)) {
        if(        position==i_474) {
            __result_obj__312 = (struct CVALUE*)come_increment_ref_count(it_473->item);
            /*c*/ come_call_finalizer3(__result_obj__312,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__312;
        }
        it_473=it_473->next;
        i_474++;
    }
    memset(&default_value_475,0,sizeof(struct CVALUE*));
    __result_obj__313 = (struct CVALUE*)come_increment_ref_count(default_value_475);
    /*c*/ come_call_finalizer3(default_value_475,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__313,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_476;
int i_477;
struct CVALUE* __result_obj__314;
struct CVALUE* default_value_478;
struct CVALUE* __result_obj__315;
default_value_478 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_476=self->head;
    i_477=0;
    while(    it_476!=((void*)0)) {
        if(        position==i_477) {
            __result_obj__314 = (struct CVALUE*)come_increment_ref_count(it_476->item);
            /*c*/ come_call_finalizer3(__result_obj__314,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__314;
        }
        it_476=it_476->next;
        i_477++;
    }
    memset(&default_value_478,0,sizeof(struct CVALUE*));
    __result_obj__315 = (struct CVALUE*)come_increment_ref_count(default_value_478);
    /*c*/ come_call_finalizer3(default_value_478,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__315,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_484;
int i_485;
struct sType* default_value_486;
struct list$1sType$ph* __result_obj__317;
struct list_item$1sType$ph* it_490;
int i_491;
struct sType* __dec_obj105;
struct list$1sType$ph* __result_obj__318;
default_value_486 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_484=self->len;
        for(        i_485=0;        i_485<position-len_484;        i_485++        ){
            memset(&default_value_486,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_486));
            /*c*/ come_call_finalizer3(default_value_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__317 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__317;
    }
    it_490=self->head;
    i_491=0;
    while(    it_490!=((void*)0)) {
        if(        position==i_491) {
            __dec_obj105=it_490->item,
            it_490->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_490=it_490->next;
        i_491++;
    }
    __result_obj__318 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value438 = (void*)0;
struct list_item$1sType$ph* litem_487;
struct sType* __dec_obj102;
void* __right_value439 = (void*)0;
struct list_item$1sType$ph* litem_488;
struct sType* __dec_obj103;
void* __right_value440 = (void*)0;
struct list_item$1sType$ph* litem_489;
struct sType* __dec_obj104;
struct list$1sType$ph* __result_obj__316;
    if(    self->len==0) {
        litem_487=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value438=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_487->prev=((void*)0);
        litem_487->next=((void*)0);
        __dec_obj102=litem_487->item,
        litem_487->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_487;
        self->head=litem_487;
    }
    else if(    self->len==1) {
        litem_488=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value439=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_488->prev=self->head;
        litem_488->next=((void*)0);
        __dec_obj103=litem_488->item,
        litem_488->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_488;
        self->head->next=litem_488;
    }
    else {
        litem_489=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value440=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_489->prev=self->tail;
        litem_489->next=((void*)0);
        __dec_obj104=litem_489->item,
        litem_489->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_489;
        self->tail=litem_489;
    }
    self->len++;
    __result_obj__316 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_494;
struct sType* __result_obj__319;
struct sType* __result_obj__320;
struct sType* result_495;
struct sType* __result_obj__321;
result_494 = (void*)0;
result_495 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_494,0,sizeof(struct sType*));
        __result_obj__319 = result_494;
        return __result_obj__319;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__320 = self->it->item;
        return __result_obj__320;
    }
    memset(&result_495,0,sizeof(struct sType*));
    __result_obj__321 = result_495;
    return __result_obj__321;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_497;
struct sType* __result_obj__322;
struct sType* __result_obj__323;
struct sType* result_498;
struct sType* __result_obj__324;
result_497 = (void*)0;
result_498 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_497,0,sizeof(struct sType*));
        __result_obj__322 = result_497;
        return __result_obj__322;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__323 = self->it->item;
        return __result_obj__323;
    }
    memset(&result_498,0,sizeof(struct sType*));
    __result_obj__324 = result_498;
    return __result_obj__324;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value448 = (void*)0;
struct list_item$1CVALUE$ph* litem_509;
struct CVALUE* __dec_obj107;
void* __right_value449 = (void*)0;
struct list_item$1CVALUE$ph* litem_510;
struct CVALUE* __dec_obj108;
void* __right_value450 = (void*)0;
struct list_item$1CVALUE$ph* litem_511;
struct CVALUE* __dec_obj109;
struct list$1CVALUE$ph* __result_obj__326;
    if(    self->len==0) {
        litem_509=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value448=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1043, "struct list_item$1CVALUE$ph*"))));
        litem_509->prev=((void*)0);
        litem_509->next=((void*)0);
        __dec_obj107=litem_509->item,
        litem_509->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_509;
        self->head=litem_509;
    }
    else if(    self->len==1) {
        litem_510=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value449=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1053, "struct list_item$1CVALUE$ph*"))));
        litem_510->prev=self->head;
        litem_510->next=((void*)0);
        __dec_obj108=litem_510->item,
        litem_510->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj108,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_510;
        self->head->next=litem_510;
    }
    else {
        litem_511=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value450=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1063, "struct list_item$1CVALUE$ph*"))));
        litem_511->prev=self->tail;
        litem_511->next=((void*)0);
        __dec_obj109=litem_511->item,
        litem_511->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj109,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_511;
        self->tail=litem_511;
    }
    self->len++;
    __result_obj__326 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__326;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_517;
unsigned int it_518;
struct map$2char$phsFun$ph* __result_obj__327;
    hash_517=string_get_hash_key(((char*)key))%self->size;
    it_518=hash_517;
    while(    (_Bool)1) {
        if(        self->item_existance[it_518]) {
            if(            string_equals(self->keys[it_518],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_518]);
                self->item_existance[it_518]=(_Bool)0;
                if(                1) {
                    (self->keys[it_518] = come_decrement_ref_count(self->keys[it_518], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_518]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_518],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_518]=((void*)0);
                self->len--;
                break;
            }
            it_518++;
            if(            it_518>=self->size) {
                it_518=0;
            }
            else if(            it_518==hash_517) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__327 = self;
    return __result_obj__327;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_555;
unsigned int hash_556;
unsigned int it_557;
struct sFun* __result_obj__332;
struct sFun* __result_obj__333;
struct sFun* __result_obj__334;
struct sFun* __result_obj__335;
default_value_555 = (void*)0;
    memset(&default_value_555,0,sizeof(struct sFun*));
    hash_556=string_get_hash_key(((char*)key))%self->size;
    it_557=hash_556;
    while(    (_Bool)1) {
        if(        self->item_existance[it_557]) {
            if(            string_equals(self->keys[it_557],key)) {
                __result_obj__332 = (struct sFun*)come_increment_ref_count(self->items[it_557]);
                /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__332,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__332;
            }
            it_557++;
            if(            it_557>=self->size) {
                it_557=0;
            }
            else if(            it_557==hash_556) {
                __result_obj__333 = (struct sFun*)come_increment_ref_count(default_value_555);
                /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__333,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__333;
            }
        }
        else {
            __result_obj__334 = (struct sFun*)come_increment_ref_count(default_value_555);
            /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__334,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__334;
        }
    }
    __result_obj__335 = (struct sFun*)come_increment_ref_count(default_value_555);
    /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__335,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_558;
unsigned int hash_559;
unsigned int it_560;
struct sFun* __result_obj__336;
struct sFun* __result_obj__337;
struct sFun* __result_obj__338;
struct sFun* __result_obj__339;
default_value_558 = (void*)0;
    memset(&default_value_558,0,sizeof(struct sFun*));
    hash_559=string_get_hash_key(((char*)key))%self->size;
    it_560=hash_559;
    while(    (_Bool)1) {
        if(        self->item_existance[it_560]) {
            if(            string_equals(self->keys[it_560],key)) {
                __result_obj__336 = (struct sFun*)come_increment_ref_count(self->items[it_560]);
                /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__336,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__336;
            }
            it_560++;
            if(            it_560>=self->size) {
                it_560=0;
            }
            else if(            it_560==hash_559) {
                __result_obj__337 = (struct sFun*)come_increment_ref_count(default_value_558);
                /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__337,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__337;
            }
        }
        else {
            __result_obj__338 = (struct sFun*)come_increment_ref_count(default_value_558);
            /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__338,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__338;
        }
    }
    __result_obj__339 = (struct sFun*)come_increment_ref_count(default_value_558);
    /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__339,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__339;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_595;
int i_596;
struct CVALUE* default_value_597;
struct list$1CVALUE$ph* __result_obj__343;
struct list_item$1CVALUE$ph* it_598;
int i_599;
struct CVALUE* __dec_obj166;
struct list$1CVALUE$ph* __result_obj__344;
default_value_597 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_595=self->len;
        for(        i_596=0;        i_596<position-len_595;        i_596++        ){
            memset(&default_value_597,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_597));
            /*c*/ come_call_finalizer3(default_value_597,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__343 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__343;
    }
    it_598=self->head;
    i_599=0;
    while(    it_598!=((void*)0)) {
        if(        position==i_599) {
            __dec_obj166=it_598->item,
            it_598->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj166,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_598=it_598->next;
        i_599++;
    }
    __result_obj__344 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__344;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_610;
int i_611;
char* __result_obj__347;
char* default_value_612;
char* __result_obj__348;
default_value_612 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_610=self->head;
    i_611=0;
    while(    it_610!=((void*)0)) {
        if(        position==i_611) {
            __result_obj__347 = (char*)come_increment_ref_count(it_610->item);
            (__result_obj__347 = come_decrement_ref_count(__result_obj__347, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__347;
        }
        it_610=it_610->next;
        i_611++;
    }
    memset(&default_value_612,0,sizeof(char*));
    __result_obj__348 = (char*)come_increment_ref_count(default_value_612);
    (default_value_612 = come_decrement_ref_count(default_value_612, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__348 = come_decrement_ref_count(__result_obj__348, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__348;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_613;
int i_614;
char* __result_obj__349;
char* default_value_615;
char* __result_obj__350;
default_value_615 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_613=self->head;
    i_614=0;
    while(    it_613!=((void*)0)) {
        if(        position==i_614) {
            __result_obj__349 = (char*)come_increment_ref_count(it_613->item);
            (__result_obj__349 = come_decrement_ref_count(__result_obj__349, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__349;
        }
        it_613=it_613->next;
        i_614++;
    }
    memset(&default_value_615,0,sizeof(char*));
    __result_obj__350 = (char*)come_increment_ref_count(default_value_615);
    (default_value_615 = come_decrement_ref_count(default_value_615, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__350 = come_decrement_ref_count(__result_obj__350, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__350;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__352;
void* __right_value650 = (void*)0;
struct sCurrentNode2* result_625;
void* __right_value651 = (void*)0;
char* __dec_obj172;
struct sCurrentNode2* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = (void*)0;
        return __result_obj__352;
    }
    result_625=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_625->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj172=result_625->sname,
        result_625->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode2_clone", 5, "char*"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_625->sline_real=self->sline_real;
    }
    __result_obj__353 = result_625;
    /*c*/ come_call_finalizer3(result_625,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__353;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_631;
unsigned int hash_632;
unsigned int it_633;
struct sClass* __result_obj__355;
struct sClass* __result_obj__356;
struct sClass* __result_obj__357;
struct sClass* __result_obj__358;
default_value_631 = (void*)0;
    memset(&default_value_631,0,sizeof(struct sClass*));
    hash_632=string_get_hash_key(((char*)key))%self->size;
    it_633=hash_632;
    while(    (_Bool)1) {
        if(        self->item_existance[it_633]) {
            if(            string_equals(self->keys[it_633],key)) {
                __result_obj__355 = (struct sClass*)come_increment_ref_count(self->items[it_633]);
                /*c*/ come_call_finalizer3(default_value_631,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__355,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__355;
            }
            it_633++;
            if(            it_633>=self->size) {
                it_633=0;
            }
            else if(            it_633==hash_632) {
                __result_obj__356 = (struct sClass*)come_increment_ref_count(default_value_631);
                /*c*/ come_call_finalizer3(default_value_631,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__356,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__356;
            }
        }
        else {
            __result_obj__357 = (struct sClass*)come_increment_ref_count(default_value_631);
            /*c*/ come_call_finalizer3(default_value_631,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__357,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__357;
        }
    }
    __result_obj__358 = (struct sClass*)come_increment_ref_count(default_value_631);
    /*c*/ come_call_finalizer3(default_value_631,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__358,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__358;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_634;
unsigned int hash_635;
unsigned int it_636;
struct sClass* __result_obj__359;
struct sClass* __result_obj__360;
struct sClass* __result_obj__361;
struct sClass* __result_obj__362;
default_value_634 = (void*)0;
    memset(&default_value_634,0,sizeof(struct sClass*));
    hash_635=string_get_hash_key(((char*)key))%self->size;
    it_636=hash_635;
    while(    (_Bool)1) {
        if(        self->item_existance[it_636]) {
            if(            string_equals(self->keys[it_636],key)) {
                __result_obj__359 = (struct sClass*)come_increment_ref_count(self->items[it_636]);
                /*c*/ come_call_finalizer3(default_value_634,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__359;
            }
            it_636++;
            if(            it_636>=self->size) {
                it_636=0;
            }
            else if(            it_636==hash_635) {
                __result_obj__360 = (struct sClass*)come_increment_ref_count(default_value_634);
                /*c*/ come_call_finalizer3(default_value_634,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__360,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__360;
            }
        }
        else {
            __result_obj__361 = (struct sClass*)come_increment_ref_count(default_value_634);
            /*c*/ come_call_finalizer3(default_value_634,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__361,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__361;
        }
    }
    __result_obj__362 = (struct sClass*)come_increment_ref_count(default_value_634);
    /*c*/ come_call_finalizer3(default_value_634,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__362,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value692 = (void*)0;
struct buffer* __dec_obj181;
struct sComeCallNode* __result_obj__365;
    ((struct sNodeBase*)(__right_value692=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value692,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj181=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj181,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__365 = (struct sComeCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__365,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__365;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value693 = (void*)0;
char* __result_obj__366;
    __result_obj__366 = (char*)come_increment_ref_count(((char*)(__right_value693=__builtin_string("sComeCallNode"))));
    (__right_value693 = come_decrement_ref_count(__right_value693, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__366 = come_decrement_ref_count(__result_obj__366, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__366;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_665;
struct buffer* come_block_666;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct list$1CVALUE$ph* come_params_667;
void* __right_value696 = (void*)0;
char* var_name_669;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sType* type__670;
void* __right_value700 = (void*)0;
struct sNode* var_node_673;
_Bool Value_674;
_Bool __result_obj__371;
void* __right_value701 = (void*)0;
struct CVALUE* thread_var_value_675;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct CVALUE* come_value_676;
void* __right_value704 = (void*)0;
char* __dec_obj182;
struct sType* __dec_obj183;
void* __right_value705 = (void*)0;
struct sNode* null_node_677;
_Bool Value_678;
_Bool __result_obj__372;
void* __right_value706 = (void*)0;
struct CVALUE* __dec_obj184;
void* __right_value707 = (void*)0;
struct sType* __dec_obj185;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value710 = (void*)0;
struct sNode* current_stack_frame_node_679;
_Bool Value_680;
_Bool __result_obj__373;
void* __right_value711 = (void*)0;
struct CVALUE* current_stack_frame_value_681;
void* __right_value712 = (void*)0;
char* fun_name_682;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct buffer* come_block2_683;
void* __right_value715 = (void*)0;
char* class_name_684;
void* __right_value716 = (void*)0;
struct sClass* current_stack_frame_struct_685;
void* __right_value717 = (void*)0;
struct buffer* source3_686;
char* p_687;
char* head_688;
int sline_689;
struct buffer* __dec_obj186;
void* __right_value718 = (void*)0;
struct sNode* node_690;
_Bool in_method_block_691;
_Bool Value_692;
_Bool __result_obj__374;
struct buffer* __dec_obj187;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct CVALUE* fun_value_693;
void* __right_value721 = (void*)0;
char* __dec_obj188;
struct sType* __dec_obj189;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct buffer* buf_694;
void* __right_value724 = (void*)0;
char* fun_name_695;
int j_696;
struct list$1CVALUE$ph* o2_saved_697;
struct CVALUE* it_698;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct CVALUE* come_value_699;
void* __right_value727 = (void*)0;
char* __dec_obj190;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sType* type_700;
struct sType* __dec_obj191;
_Bool __result_obj__375;
    come_block_sline_665=self->come_block_sline;
    come_block_666=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_667=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1383, "struct list$1CVALUE$ph*"))));
    static int thread_num_668=0;
    thread_num_668++;
    var_name_669=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_668));
    type__670=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value698=map$2char$phsType$ph_at(info->types,((char*)(__right_value697=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value697 = come_decrement_ref_count(__right_value697, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value698,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__670==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    var_node_673=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_669),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__670),(_Bool)1,((void*)0),info,(_Bool)0));
    Value_674=node_compile(var_node_673,info);
    if(    !Value_674) {
        __result_obj__371 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_666,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_667,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_669 = come_decrement_ref_count(var_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_673) ? var_node_673 = come_decrement_ref_count(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__371;
    }
    else {
    }
    thread_var_value_675=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_676=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1404, "struct CVALUE*"))));
    __dec_obj182=come_value_676->c_value,
    come_value_676->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_675->c_value));
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj183=come_value_676->type,
    come_value_676->type=(struct sType*)come_increment_ref_count(thread_var_value_675->type);
    /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_676->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_667,(struct CVALUE*)come_increment_ref_count(come_value_676));
    null_node_677=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_678=node_compile(null_node_677,info);
    if(    !Value_678) {
        __result_obj__372 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_666,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_667,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_669 = come_decrement_ref_count(var_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_673) ? var_node_673 = come_decrement_ref_count(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_676,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_677) ? null_node_677 = come_decrement_ref_count(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__372;
    }
    else {
    }
    __dec_obj184=come_value_676,
    come_value_676=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj184,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj185=come_value_676->type,
    come_value_676->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_676->type,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_667,(struct CVALUE*)come_increment_ref_count(come_value_676));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1423, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value709=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1423, "struct sCurrentNode2*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_679=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value709,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_680=node_compile(current_stack_frame_node_679,info);
    if(    !Value_680) {
        __result_obj__373 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_666,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_667,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_669 = come_decrement_ref_count(var_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_673) ? var_node_673 = come_decrement_ref_count(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_676,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_677) ? null_node_677 = come_decrement_ref_count(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_679) ? current_stack_frame_node_679 = come_decrement_ref_count(current_stack_frame_node_679, ((struct sNode*)current_stack_frame_node_679)->finalize, ((struct sNode*)current_stack_frame_node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__373;
    }
    else {
    }
    current_stack_frame_value_681=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_682=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_668));
    come_block2_683=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1433, "struct buffer*"))));
    class_name_684=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_683,"void* %s(%s* parent)\n",fun_name_682,class_name_684);
    buffer_append_str(come_block2_683,((char*)(__right_value716=buffer_to_string(come_block_666))));
    (__right_value716 = come_decrement_ref_count(__right_value716, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_685=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value717=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_684)));
    /*c*/ come_call_finalizer3(__right_value717,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_686=(struct buffer*)come_increment_ref_count(info->source);
    p_687=info->p;
    head_688=info->head;
    sline_689=info->sline;
    __dec_obj186=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_683);
    /*b*/ come_call_finalizer3(__dec_obj186,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_665;
    node_690=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_691=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_692=node_compile(node_690,info);
    if(    !Value_692) {
        __result_obj__374 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_666,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_667,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_669 = come_decrement_ref_count(var_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_673) ? var_node_673 = come_decrement_ref_count(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_676,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_677) ? null_node_677 = come_decrement_ref_count(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_679) ? current_stack_frame_node_679 = come_decrement_ref_count(current_stack_frame_node_679, ((struct sNode*)current_stack_frame_node_679)->finalize, ((struct sNode*)current_stack_frame_node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_681,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_682 = come_decrement_ref_count(fun_name_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_683,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_684 = come_decrement_ref_count(class_name_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_686,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_690) ? node_690 = come_decrement_ref_count(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__374;
    }
    else {
    }
    info->in_method_block=in_method_block_691;
    __dec_obj187=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_686);
    /*b*/ come_call_finalizer3(__dec_obj187,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_687;
    info->head=head_688;
    info->sline=sline_689;
    info->current_stack_frame_struct=current_stack_frame_struct_685;
    fun_value_693=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1478, "struct CVALUE*"))));
    __dec_obj188=fun_value_693->c_value,
    fun_value_693->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_682));
    __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj189=come_value_676->type,
    come_value_676->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_676->var=((void*)0);
    list$1CVALUE$ph_add(come_params_667,(struct CVALUE*)come_increment_ref_count(fun_value_693));
    list$1CVALUE$ph_add(come_params_667,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_681));
    buf_694=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1488, "struct buffer*"))));
    (fun_name_682 = come_decrement_ref_count(fun_name_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_695=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_694,"(");
    buffer_append_str(buf_694,fun_name_695);
    buffer_append_str(buf_694,"(");
    j_696=0;
    for(    o2_saved_697=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_667)),it_698=list$1CVALUE$ph_begin((o2_saved_697));    !list$1CVALUE$ph_end((o2_saved_697));    it_698=list$1CVALUE$ph_next((o2_saved_697))    ){
        buffer_append_str(buf_694,it_698->c_value);
        if(        j_696!=list$1CVALUE$ph_length(come_params_667)-1) {
            buffer_append_str(buf_694,",");
        }
        j_696++;
    }
    /*c*/ come_call_finalizer3(o2_saved_697,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_694,")");
    buffer_append_str(buf_694,", ");
    buffer_append_str(buf_694,thread_var_value_675->c_value);
    buffer_append_str(buf_694,")");
    /*c*/ come_call_finalizer3(come_value_676,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_699=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1511, "struct CVALUE*"))));
    __dec_obj190=come_value_699->c_value,
    come_value_699->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_694));
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_700=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value729=map$2char$phsType$ph_at(info->types,((char*)(__right_value728=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value728 = come_decrement_ref_count(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value729,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_700==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj191=come_value_699->type,
    come_value_699->type=(struct sType*)come_increment_ref_count(type_700);
    /*b*/ come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_699->var=((void*)0);
    add_come_last_code(info,"%s",come_value_699->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_699));
    __result_obj__375 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_666,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_667,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_669 = come_decrement_ref_count(var_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_673) ? var_node_673 = come_decrement_ref_count(var_node_673, ((struct sNode*)var_node_673)->finalize, ((struct sNode*)var_node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_675,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_677) ? null_node_677 = come_decrement_ref_count(null_node_677, ((struct sNode*)null_node_677)->finalize, ((struct sNode*)null_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_679) ? current_stack_frame_node_679 = come_decrement_ref_count(current_stack_frame_node_679, ((struct sNode*)current_stack_frame_node_679)->finalize, ((struct sNode*)current_stack_frame_node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_681,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_683,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_684 = come_decrement_ref_count(class_name_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_686,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_690) ? node_690 = come_decrement_ref_count(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_693,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_694,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_695 = come_decrement_ref_count(fun_name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_699,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_700,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__375;
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
unsigned int hash_671;
unsigned int it_672;
struct sType* __result_obj__367;
struct sType* __result_obj__368;
struct sType* __result_obj__369;
struct sType* __result_obj__370;
    hash_671=string_get_hash_key(((char*)key))%self->size;
    it_672=hash_671;
    while(    (_Bool)1) {
        if(        self->item_existance[it_672]) {
            if(            string_equals(self->keys[it_672],key)) {
                __result_obj__367 = (struct sType*)come_increment_ref_count(self->items[it_672]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__367;
            }
            it_672++;
            if(            it_672>=self->size) {
                it_672=0;
            }
            else if(            it_672==hash_671) {
                __result_obj__368 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__368,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__368;
            }
        }
        else {
            __result_obj__369 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__369,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__369;
        }
    }
    __result_obj__370 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__370,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__370;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value731 = (void*)0;
struct sNode* __dec_obj192;
struct sComeJoinNode* __result_obj__376;
    ((struct sNodeBase*)(__right_value731=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value731,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj192=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__376 = (struct sComeJoinNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__376,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__376;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value732 = (void*)0;
char* __result_obj__377;
    __result_obj__377 = (char*)come_increment_ref_count(((char*)(__right_value732=__builtin_string("sComeJoinNode"))));
    (__right_value732 = come_decrement_ref_count(__right_value732, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__377 = come_decrement_ref_count(__result_obj__377, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__377;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_701;
_Bool Value_702;
_Bool __result_obj__378;
void* __right_value733 = (void*)0;
struct CVALUE* come_value_703;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct buffer* buf_704;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct CVALUE* come_value_705;
void* __right_value738 = (void*)0;
char* __dec_obj193;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sType* __dec_obj194;
_Bool __result_obj__379;
    node_701=(struct sNode*)come_increment_ref_count(self->node);
    Value_702=node_compile(node_701,info);
    if(    !Value_702) {
        __result_obj__378 = (_Bool)0;
        ((node_701) ? node_701 = come_decrement_ref_count(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__378;
    }
    else {
    }
    come_value_703=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_704=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1558, "struct buffer*"))));
    buffer_append_str(buf_704,"pthread_join(");
    buffer_append_str(buf_704,come_value_703->c_value);
    buffer_append_str(buf_704,", 0)");
    /*c*/ come_call_finalizer3(come_value_703,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_705=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1563, "struct CVALUE*"))));
    __dec_obj193=come_value_705->c_value,
    come_value_705->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_704));
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj194=come_value_705->type,
    come_value_705->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1565, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj194,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_705->var=((void*)0);
    add_come_last_code(info,"%s",come_value_705->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_705));
    __result_obj__379 = (_Bool)1;
    ((node_701) ? node_701 = come_decrement_ref_count(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_704,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_705,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__379;
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
void* __right_value742 = (void*)0;
struct list$1sNode$ph* __dec_obj195;
struct list$1sBlock$ph* __dec_obj196;
struct sBlock* __dec_obj197;
struct sComePollNode* __result_obj__380;
    ((struct sNodeBase*)(__right_value742=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value742,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj195=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    /*b*/ come_call_finalizer3(__dec_obj195,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj196=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    /*b*/ come_call_finalizer3(__dec_obj196,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj197=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    /*b*/ come_call_finalizer3(__dec_obj197,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__380 = (struct sComePollNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__380,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__380;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value743 = (void*)0;
char* __result_obj__381;
    __result_obj__381 = (char*)come_increment_ref_count(((char*)(__right_value743=__builtin_string("sComePollNode"))));
    (__right_value743 = come_decrement_ref_count(__right_value743, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__381 = come_decrement_ref_count(__result_obj__381, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__381;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_710;
struct list$1sBlock$ph* blocks_711;
int time_out_712;
int n_714;
struct list$1sNode$ph* o2_saved_715;
struct sNode* it_718;
_Bool Value_721;
_Bool __result_obj__388;
void* __right_value744 = (void*)0;
struct CVALUE* come_value_722;
int n_723;
struct list$1sNode$ph* o2_saved_724;
struct sNode* it_725;
void* __right_value745 = (void*)0;
_Bool __result_obj__393;
    vars_710=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_711=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_712=self->time_out;
    static int var_num_713=0;
    var_num_713++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_713,list$1sNode$ph_length(vars_710));
    n_714=0;
    for(    o2_saved_715=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_718=list$1sNode$ph_begin((o2_saved_715));    !list$1sNode$ph_end((o2_saved_715));    it_718=list$1sNode$ph_next((o2_saved_715))    ){
        Value_721=node_compile(it_718,info);
        if(        !Value_721) {
            __result_obj__388 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_715,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_710,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_711,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__388;
        }
        else {
        }
        come_value_722=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_713,n_714,come_value_722->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_713,n_714,1);
        n_714++;
        /*c*/ come_call_finalizer3(come_value_722,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_715,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_713,var_num_713,list$1sNode$ph_length(vars_710),time_out_712);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_713);
    n_723=0;
    for(    o2_saved_724=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_725=list$1sNode$ph_begin((o2_saved_724));    !list$1sNode$ph_end((o2_saved_724));    it_725=list$1sNode$ph_next((o2_saved_724))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_713,n_723,1);
        transpile_block(((struct sBlock*)(__right_value745=list$1sBlock$ph_operator_load_element(blocks_711,n_723))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value745,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_723++;
    }
    /*c*/ come_call_finalizer3(o2_saved_724,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_713);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__393 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_710,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_711,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__393;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_706;
struct list_item$1sBlock$ph* prev_it_707;
    it_706=self->head;
    while(    it_706!=((void*)0)) {
        prev_it_707=it_706;
        it_706=it_706->next;
        /*c*/ come_call_finalizer3(prev_it_707,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sBlock$ph* it_708;
struct list_item$1sBlock$ph* prev_it_709;
    it_708=self->head;
    while(    it_708!=((void*)0)) {
        prev_it_709=it_708;
        it_708=it_708->next;
        /*c*/ come_call_finalizer3(prev_it_709,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_716;
struct sNode* __result_obj__382;
struct sNode* __result_obj__383;
struct sNode* result_717;
struct sNode* __result_obj__384;
result_716 = (void*)0;
result_717 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_716,0,sizeof(struct sNode*));
        __result_obj__382 = result_716;
        return __result_obj__382;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__383 = self->it->item;
        return __result_obj__383;
    }
    memset(&result_717,0,sizeof(struct sNode*));
    __result_obj__384 = result_717;
    return __result_obj__384;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_719;
struct sNode* __result_obj__385;
struct sNode* __result_obj__386;
struct sNode* result_720;
struct sNode* __result_obj__387;
result_719 = (void*)0;
result_720 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_719,0,sizeof(struct sNode*));
        __result_obj__385 = result_719;
        return __result_obj__385;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__386 = self->it->item;
        return __result_obj__386;
    }
    memset(&result_720,0,sizeof(struct sNode*));
    __result_obj__387 = result_720;
    return __result_obj__387;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_726;
int i_727;
struct sBlock* __result_obj__389;
struct sBlock* default_value_728;
struct sBlock* __result_obj__390;
default_value_728 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_726=self->head;
    i_727=0;
    while(    it_726!=((void*)0)) {
        if(        position==i_727) {
            __result_obj__389 = (struct sBlock*)come_increment_ref_count(it_726->item);
            /*c*/ come_call_finalizer3(__result_obj__389,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__389;
        }
        it_726=it_726->next;
        i_727++;
    }
    memset(&default_value_728,0,sizeof(struct sBlock*));
    __result_obj__390 = (struct sBlock*)come_increment_ref_count(default_value_728);
    /*c*/ come_call_finalizer3(default_value_728,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__390,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__390;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_729;
int i_730;
struct sBlock* __result_obj__391;
struct sBlock* default_value_731;
struct sBlock* __result_obj__392;
default_value_731 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_729=self->head;
    i_730=0;
    while(    it_729!=((void*)0)) {
        if(        position==i_730) {
            __result_obj__391 = (struct sBlock*)come_increment_ref_count(it_729->item);
            /*c*/ come_call_finalizer3(__result_obj__391,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__391;
        }
        it_729=it_729->next;
        i_730++;
    }
    memset(&default_value_731,0,sizeof(struct sBlock*));
    __result_obj__392 = (struct sBlock*)come_increment_ref_count(default_value_731);
    /*c*/ come_call_finalizer3(default_value_731,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__392,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__392;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value754 = (void*)0;
struct sNode* node_732;
void* __right_value755 = (void*)0;
struct sNode* __dec_obj203;
struct sNode* __result_obj__396;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1648, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value747=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1648, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_732=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value747,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj203=node_732,
    node_732=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_732),info));
    (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__396 = (struct sNode*)come_increment_ref_count(node_732);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_732) ? node_732 = come_decrement_ref_count(node_732, ((struct sNode*)node_732)->finalize, ((struct sNode*)node_732)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__396) ? __result_obj__396 = come_decrement_ref_count(__result_obj__396, ((struct sNode*)__result_obj__396)->finalize, ((struct sNode*)__result_obj__396)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__396;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__394;
void* __right_value748 = (void*)0;
struct sFunCallNode* result_733;
void* __right_value749 = (void*)0;
char* __dec_obj198;
void* __right_value750 = (void*)0;
char* __dec_obj199;
void* __right_value751 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj200;
void* __right_value752 = (void*)0;
struct list$1sType$ph* __dec_obj201;
void* __right_value753 = (void*)0;
struct buffer* __dec_obj202;
struct sFunCallNode* __result_obj__395;
    if(    self==(void*)0) {
        __result_obj__394 = (void*)0;
        return __result_obj__394;
    }
    result_733=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_733->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=result_733->sname,
        result_733->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_733->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj199=result_733->fun_name,
        result_733->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj200=result_733->params,
        result_733->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj200,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_733->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj201=result_733->method_generics_types,
        result_733->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj201,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj202=result_733->method_block,
        result_733->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj202,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_733->method_block_sline=self->method_block_sline;
    }
    __result_obj__395 = result_733;
    /*c*/ come_call_finalizer3(result_733,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__395;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value756 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value757 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj205;
struct sLambdaCall* __result_obj__397;
    ((struct sNodeBase*)(__right_value756=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value756,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj204=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj205=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj205,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__397 = (struct sLambdaCall*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__397,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__397;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value758 = (void*)0;
char* __result_obj__398;
    __result_obj__398 = (char*)come_increment_ref_count(((char*)(__right_value758=__builtin_string("sLambdaCall"))));
    (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__398 = come_decrement_ref_count(__result_obj__398, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__398;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_734;
struct list$1tuple2$2char$phsNode$ph$ph* params_735;
_Bool Value_736;
_Bool __result_obj__399;
void* __right_value759 = (void*)0;
struct CVALUE* come_value_737;
struct sType* lambda_type_738;
void* __right_value760 = (void*)0;
struct sType* result_type_739;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct list$1CVALUE$ph* come_params_740;
_Bool __result_obj__400;
int i_741;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_742;
struct tuple2$2char$phsNode$ph* it_743;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_744=0;
struct sNode* node_745=0;
_Bool Value_746;
_Bool __result_obj__401;
void* __right_value763 = (void*)0;
struct CVALUE* come_value_747;
void* __right_value764 = (void*)0;
struct sType* __dec_obj206;
void* __right_value765 = (void*)0;
_Bool _if_conditional17;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
_Bool _if_conditional18;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct buffer* buf_748;
int j_749;
struct list$1CVALUE$ph* o2_saved_750;
struct CVALUE* it_751;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct CVALUE* come_value2_752;
void* __right_value775 = (void*)0;
char* __dec_obj207;
void* __right_value776 = (void*)0;
struct sType* __dec_obj208;
_Bool __result_obj__402;
    node_734=(struct sNode*)come_increment_ref_count(self->node);
    params_735=self->params;
    Value_736=node_compile(node_734,info);
    if(    !Value_736) {
        __result_obj__399 = (_Bool)0;
        ((node_734) ? node_734 = come_decrement_ref_count(node_734, ((struct sNode*)node_734)->finalize, ((struct sNode*)node_734)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__399;
    }
    else {
    }
    come_value_737=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_738=come_value_737->type;
    if(    lambda_type_738->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
    }
    result_type_739=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_738->mResultType));
    result_type_739->mStatic=(_Bool)0;
    come_params_740=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1690, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_738->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_735)&&!lambda_type_738->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_738->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_735));
        __result_obj__400 = (_Bool)0;
        ((node_734) ? node_734 = come_decrement_ref_count(node_734, ((struct sNode*)node_734)->finalize, ((struct sNode*)node_734)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_737,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_739,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_740,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__400;
    }
    i_741=0;
    for(    o2_saved_742=(params_735),it_743=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_742));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_742));    it_743=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_742))    ){
        multiple_assign_var11=it_743;
        label_744=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_745=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        Value_746=node_compile(node_745,info);
        if(        !Value_746) {
            __result_obj__401 = (_Bool)0;
            (label_744 = come_decrement_ref_count(label_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_745) ? node_745 = come_decrement_ref_count(node_745, ((struct sNode*)node_745)->finalize, ((struct sNode*)node_745)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_734) ? node_734 = come_decrement_ref_count(node_734, ((struct sNode*)node_734)->finalize, ((struct sNode*)node_734)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_737,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_739,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_740,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__401;
        }
        else {
        }
        come_value_747=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj206=come_value_747->type,
        come_value_747->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_747->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        (_if_conditional17=(lambda_type_738->mVarArgs&&((struct sType*)(__right_value765=list$1sType$ph_operator_load_element(lambda_type_738->mParamTypes,i_741)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value765,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional17) {
        }
        else {
            check_assign_type(((char*)(__right_value767=xsprintf("calling param #\%s",((char*)(__right_value766=int_to_string(i_741)))))),((struct sType*)(__right_value768=list$1sType$ph_operator_load_element(lambda_type_738->mParamTypes,i_741))),come_value_747->type,come_value_747,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value766 = come_decrement_ref_count(__right_value766, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value767 = come_decrement_ref_count(__right_value767, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value768,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional18=(((struct sType*)(__right_value769=list$1sType$ph_operator_load_element(lambda_type_738->mParamTypes,i_741)))->mHeap&&come_value_747->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value769,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                std_move(((struct sType*)(__right_value770=list$1sType$ph_operator_load_element(lambda_type_738->mParamTypes,i_741))),come_value_747->type,come_value_747,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value770,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params_740,(struct CVALUE*)come_increment_ref_count(come_value_747));
        i_741++;
        (label_744 = come_decrement_ref_count(label_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_745) ? node_745 = come_decrement_ref_count(node_745, ((struct sNode*)node_745)->finalize, ((struct sNode*)node_745)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_747,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_748=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1722, "struct buffer*"))));
    buffer_append_str(buf_748,"(");
    buffer_append_str(buf_748,come_value_737->c_value);
    buffer_append_str(buf_748,")");
    buffer_append_str(buf_748,"(");
    j_749=0;
    for(    o2_saved_750=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_740)),it_751=list$1CVALUE$ph_begin((o2_saved_750));    !list$1CVALUE$ph_end((o2_saved_750));    it_751=list$1CVALUE$ph_next((o2_saved_750))    ){
        buffer_append_str(buf_748,it_751->c_value);
        if(        j_749!=list$1CVALUE$ph_length(come_params_740)-1) {
            buffer_append_str(buf_748,",");
        }
        j_749++;
    }
    /*c*/ come_call_finalizer3(o2_saved_750,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_748,")");
    come_value2_752=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1741, "struct CVALUE*"))));
    __dec_obj207=come_value2_752->c_value,
    come_value2_752->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_748));
    __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_738->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_752,(struct sType*)come_increment_ref_count(lambda_type_738->mResultType),info,(_Bool)0,((void*)0),((void*)0));
    }
    __dec_obj208=come_value2_752->type,
    come_value2_752->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_739));
    /*b*/ come_call_finalizer3(__dec_obj208,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_752->type->mStatic=(_Bool)0;
    come_value2_752->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_752->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_752));
    __result_obj__402 = (_Bool)1;
    ((node_734) ? node_734 = come_decrement_ref_count(node_734, ((struct sNode*)node_734)->finalize, ((struct sNode*)node_734)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_737,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_739,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_740,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_748,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_752,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__402;
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
void* __right_value777 = (void*)0;
struct sType* __dec_obj209;
struct sVarArgTypeName* __result_obj__403;
    ((struct sNodeBase*)(__right_value777=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value777,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj209=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj209,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__403 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__403,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__403;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value778 = (void*)0;
char* __result_obj__404;
    __result_obj__404 = (char*)come_increment_ref_count(((char*)(__right_value778=__builtin_string("sVarArgTypeName"))));
    (__right_value778 = come_decrement_ref_count(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__404 = come_decrement_ref_count(__result_obj__404, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__404;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_753;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct CVALUE* come_value_754;
void* __right_value781 = (void*)0;
char* __dec_obj210;
struct sType* __dec_obj211;
_Bool __result_obj__405;
    type_753=(struct sType*)come_increment_ref_count(self->type);
    come_value_754=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1778, "struct CVALUE*"))));
    __dec_obj210=come_value_754->c_value,
    come_value_754->c_value=(char*)come_increment_ref_count(make_type_name_string(type_753,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj211=come_value_754->type,
    come_value_754->type=(struct sType*)come_increment_ref_count(type_753);
    /*b*/ come_call_finalizer3(__dec_obj211,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_754->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_754));
    __result_obj__405 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_753,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_754,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__405;
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
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct list$1sType$ph* method_generics_types_755;
void* __right_value784 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_756=0;
char* name_757=0;
_Bool err_758=0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_759;
_Bool _va_arg_760;
char* p_761;
int sline_762;
_Bool err_flag_763;
void* __right_value788 = (void*)0;
char* label_764;
void* __right_value789 = (void*)0;
char* __dec_obj212;
char* __dec_obj213;
_Bool no_comma_765;
_Bool in_fun_param_766;
void* __right_value790 = (void*)0;
struct sNode* node_767;
void* __right_value791 = (void*)0;
struct sNode* __dec_obj214;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct buffer* method_block_772;
int method_block_sline_773;
char* head_774;
void* __right_value797 = (void*)0;
char* tail_775;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct buffer* __dec_obj220;
int len_776;
void* __right_value800 = (void*)0;
char* mem_777;
_Bool guard_break_778;
struct sNode* node_779;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value803 = (void*)0;
struct sNode* __dec_obj221;
void* __right_value804 = (void*)0;
struct sNode* __dec_obj222;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value807 = (void*)0;
struct sNode* __dec_obj223;
void* __right_value808 = (void*)0;
struct sNode* __dec_obj224;
struct sNode* __result_obj__408;
node_779 = (void*)0;
    method_generics_types_755=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1792, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
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
                multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value784=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_756=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_757=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                err_758=multiple_assign_var12->v3;
                /*c*/ come_call_finalizer3(__right_value784,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_758) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_755,(struct sType*)come_increment_ref_count(sType_clone(type_756)));
                /*c*/ come_call_finalizer3(type_756,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_757 = come_decrement_ref_count(name_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_759=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1830, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_760=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_761=info->p;
        sline_762=info->sline;
        err_flag_763=(_Bool)0;
        label_764=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj212=label_764,
            label_764=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_763=(_Bool)1;
        }
        if(        err_flag_763==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj213=label_764,
            label_764=((void*)0);
            __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_761;
            info->sline=sline_762;
        }
        no_comma_765=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_766=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_767=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj214=node_767,
        node_767=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_767),info));
        (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_765;
        info->in_fun_param=in_fun_param_766;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_759,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1878, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_764),(struct sNode*)come_increment_ref_count(node_767))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_764 = come_decrement_ref_count(label_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_767) ? node_767 = come_decrement_ref_count(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_764 = come_decrement_ref_count(label_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_767) ? node_767 = come_decrement_ref_count(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_760;
    parse_sharp_v5(info);
    method_block_772=((void*)0);
    method_block_sline_773=0;
    if(    *info->p==123) {
        head_774=info->p;
        method_block_sline_773=info->sline;
        ((char*)(__right_value797=skip_block(info)));
        (__right_value797 = come_decrement_ref_count(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_775=info->p;
        __dec_obj220=method_block_772,
        method_block_772=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1908, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_776=tail_775-head_774;
        mem_777=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_776+1)), "05call.c", 1911, "char*"));
        memcpy(mem_777,head_774,len_776);
        mem_777[len_776]=0;
        buffer_append_str(method_block_772,mem_777);
        buffer_append_str(method_block_772,"\n");
        (mem_777 = come_decrement_ref_count(mem_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    guard_break_778=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_778=(_Bool)1;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1929, "struct sNode");
        _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value802=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1929, "struct sFunCallNode*")),fun_name,params_759,guard_break_778,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_755),(struct buffer*)come_increment_ref_count(method_block_772),method_block_sline_773,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sFunCallNode_finalize;
        _inf_value4->clone=(void*)sFunCallNode_clone;
        _inf_value4->compile=(void*)sFunCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sFunCallNode_terminated;
        _inf_value4->kind=(void*)sFunCallNode_kind;
        __dec_obj221=node_779,
        node_779=(struct sNode*)come_increment_ref_count(_inf_value4);
        (__dec_obj221 ? __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value802,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj222=node_779,
        node_779=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_779),info));
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    else {
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1934, "struct sNode");
        _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value806=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1934, "struct sFunCallNode*")),fun_name,params_759,guard_break_778,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_755),(struct buffer*)come_increment_ref_count(method_block_772),method_block_sline_773,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sFunCallNode_finalize;
        _inf_value5->clone=(void*)sFunCallNode_clone;
        _inf_value5->compile=(void*)sFunCallNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sFunCallNode_terminated;
        _inf_value5->kind=(void*)sFunCallNode_kind;
        __dec_obj223=node_779,
        node_779=(struct sNode*)come_increment_ref_count(_inf_value5);
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value806,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj224=node_779,
        node_779=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_779),info));
        (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    parse_sharp_v5(info);
    __result_obj__408 = (struct sNode*)come_increment_ref_count(node_779);
    /*c*/ come_call_finalizer3(method_generics_types_755,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_759,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_772,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_779) ? node_779 = come_decrement_ref_count(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__408) ? __result_obj__408 = come_decrement_ref_count(__result_obj__408, ((struct sNode*)__result_obj__408)->finalize, ((struct sNode*)__result_obj__408)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__408;
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
void* __right_value792 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_768;
struct tuple2$2char$phsNode$ph* __dec_obj215;
void* __right_value793 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_769;
struct tuple2$2char$phsNode$ph* __dec_obj216;
void* __right_value794 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_770;
struct tuple2$2char$phsNode$ph* __dec_obj217;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__406;
    if(    self->len==0) {
        litem_768=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value792=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_768->prev=((void*)0);
        litem_768->next=((void*)0);
        __dec_obj215=litem_768->item,
        litem_768->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj215,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_768;
        self->head=litem_768;
    }
    else if(    self->len==1) {
        litem_769=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value793=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_769->prev=self->head;
        litem_769->next=((void*)0);
        __dec_obj216=litem_769->item,
        litem_769->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj216,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_769;
        self->head->next=litem_769;
    }
    else {
        litem_770=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value794=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_770->prev=self->tail;
        litem_770->next=((void*)0);
        __dec_obj217=litem_770->item,
        litem_770->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj217,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_770;
        self->tail=litem_770;
    }
    self->len++;
    __result_obj__406 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__406;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_771;
    result_771=0;
    result_771+=int_get_hash_key(((int)self->v1));
    result_771+=int_get_hash_key(((int)self->v2));
    return result_771;
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
char* __dec_obj218;
struct sNode* __dec_obj219;
struct tuple2$2char$phsNode$ph* __result_obj__407;
    __dec_obj218=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj219=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__407 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__407,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__407;
}

struct sNode* expression_node_v1(struct sInfo* info){
struct sNode* __result_obj__409;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p);
    stackframe_v2();
    exit(3);
    __result_obj__409 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__409) ? __result_obj__409 = come_decrement_ref_count(__result_obj__409, ((struct sNode*)__result_obj__409)->finalize, ((struct sNode*)__result_obj__409)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__409;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value815 = (void*)0;
struct sNode* __result_obj__412;
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1958, "struct sNode");
    _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value810=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1958, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sReturnNode_finalize;
    _inf_value6->clone=(void*)sReturnNode_clone;
    _inf_value6->compile=(void*)sReturnNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sReturnNode_kind;
    __result_obj__412 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value815=_inf_value6)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value810,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value815) ? __right_value815 = come_decrement_ref_count(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__412) ? __result_obj__412 = come_decrement_ref_count(__result_obj__412, ((struct sNode*)__result_obj__412)->finalize, ((struct sNode*)__result_obj__412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__412;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__410;
void* __right_value811 = (void*)0;
struct sReturnNode* result_780;
void* __right_value812 = (void*)0;
char* __dec_obj225;
void* __right_value813 = (void*)0;
struct sNode* __dec_obj226;
void* __right_value814 = (void*)0;
char* __dec_obj227;
struct sReturnNode* __result_obj__411;
    if(    self==(void*)0) {
        __result_obj__410 = (void*)0;
        return __result_obj__410;
    }
    result_780=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_780->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj225=result_780->sname,
        result_780->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_780->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj226=result_780->value,
        result_780->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj226 ? __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj227=result_780->value_source,
        result_780->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__411 = result_780;
    /*c*/ come_call_finalizer3(result_780,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__411;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value819 = (void*)0;
struct sNode* __result_obj__413;
char* head_781;
void* __right_value820 = (void*)0;
struct sNode* value_782;
char* tail_783;
void* __right_value821 = (void*)0;
struct sNode* __dec_obj228;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value825 = (void*)0;
struct sNode* __result_obj__414;
int nest_785;
char* head_786;
int head_sline_787;
int sline_real_788;
void* __right_value826 = (void*)0;
char* buf_789;
_Bool is_type_name__790;
_Bool is_special_word_792;
_Bool define_function_pointer_flag_793;
void* __right_value827 = (void*)0;
_Bool lambda_flag_794;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
char* word2_795;
_Bool fun_name_with_type_name_796;
void* __right_value830 = (void*)0;
char* word2_797;
_Bool call_method_generics_fun_call_798;
void* __right_value831 = (void*)0;
char* __dec_obj229;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
_Bool _if_conditional19;
int nest_799;
_Bool inline_asm_800;
void* __right_value838 = (void*)0;
char* __dec_obj230;
void* __right_value839 = (void*)0;
char* __dec_obj231;
void* __right_value840 = (void*)0;
char* __dec_obj232;
void* __right_value841 = (void*)0;
struct sNode* node_801;
struct sNode* __result_obj__415;
_Bool no_comma_802;
void* __right_value842 = (void*)0;
struct sNode* exp_803;
void* __right_value843 = (void*)0;
struct sNode* exp2_804;
void* __right_value844 = (void*)0;
struct sNode* __result_obj__416;
void* __right_value845 = (void*)0;
char* block_text_805;
char* contents_806;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct sNode* _inf_value9;
struct sOutputNode* _inf_obj_value9;
void* __right_value851 = (void*)0;
struct sNode* __result_obj__419;
void* __right_value852 = (void*)0;
struct sNode* node_808;
struct sNode* __result_obj__420;
void* __right_value853 = (void*)0;
struct sNode* node_809;
struct sNode* __result_obj__421;
struct buffer* come_block_810;
int come_block_sline_811;
char* head_812;
void* __right_value854 = (void*)0;
char* tail_813;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct buffer* __dec_obj235;
int len_814;
void* __right_value857 = (void*)0;
char* mem_815;
char* head_816;
_Bool no_output_come_code_817;
void* __right_value858 = (void*)0;
char* tail_818;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct buffer* __dec_obj236;
int len_819;
void* __right_value861 = (void*)0;
char* mem_820;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sNode* _inf_value10;
struct sComeCallNode* _inf_obj_value10;
void* __right_value867 = (void*)0;
struct sNode* node_821;
struct sNode* __result_obj__424;
struct buffer* come_block_823;
int come_block_sline_824;
void* __right_value868 = (void*)0;
struct sNode* node_825;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sNode* _inf_value11;
struct sComeJoinNode* _inf_obj_value11;
void* __right_value874 = (void*)0;
struct sNode* __result_obj__427;
int time_out_827;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct list$1sNode$ph* vars_828;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1sBlock$ph* blocks_829;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sBlock* else_block_830;
void* __right_value881 = (void*)0;
struct sBlock* __dec_obj241;
void* __right_value882 = (void*)0;
struct sNode* var_name_831;
void* __right_value883 = (void*)0;
struct sBlock* block_832;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct sNode* _inf_value12;
struct sComePollNode* _inf_obj_value12;
void* __right_value928 = (void*)0;
struct sNode* __result_obj__449;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sNode* _inf_value13;
struct sFuncNode* _inf_obj_value13;
void* __right_value933 = (void*)0;
struct sNode* __result_obj__452;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct sNode* _inf_value14;
struct sWildCard* _inf_obj_value14;
void* __right_value938 = (void*)0;
struct sNode* __result_obj__455;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct sNode* _inf_value15;
struct sLineNode* _inf_obj_value15;
void* __right_value943 = (void*)0;
struct sNode* __result_obj__458;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct sNode* _inf_value16;
struct sSNameNode* _inf_obj_value16;
void* __right_value948 = (void*)0;
struct sNode* __result_obj__461;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sNode* _inf_value17;
struct sCallerFuncNode* _inf_obj_value17;
void* __right_value953 = (void*)0;
struct sNode* __result_obj__464;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sNode* _inf_value18;
struct sCallerLineNode* _inf_obj_value18;
void* __right_value958 = (void*)0;
struct sNode* __result_obj__467;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* _inf_value19;
struct sCallerSNameNode* _inf_obj_value19;
void* __right_value963 = (void*)0;
struct sNode* __result_obj__470;
void* __right_value964 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_872=0;
char* name_873=0;
_Bool err_874=0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* _inf_value20;
struct sVarArgTypeName* _inf_obj_value20;
void* __right_value970 = (void*)0;
struct sNode* __result_obj__473;
void* __right_value971 = (void*)0;
struct sNode* node_876;
struct sNode* __result_obj__474;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct buffer* buf2_877;
void* __right_value974 = (void*)0;
char* word_878;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct list$1sNode$ph* exps_879;
void* __right_value977 = (void*)0;
struct sNode* exp_880;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sNode* _inf_value21;
struct sInlineAssembler* _inf_obj_value21;
void* __right_value985 = (void*)0;
struct sNode* __result_obj__477;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct buffer* fun_name_882;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sType* type_883;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sClass* klass_890;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sType* __dec_obj269;
void* __right_value998 = (void*)0;
char* buf2_891;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sNode* node_892;
struct sNode* __result_obj__486;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct buffer* fun_name_893;
void* __right_value1003 = (void*)0;
char* buf2_894;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct sNode* node_895;
struct sNode* __result_obj__487;
void* __right_value1006 = (void*)0;
struct sNode* node_896;
struct sNode* __result_obj__488;
void* __right_value1007 = (void*)0;
struct sNode* node_897;
struct sNode* __result_obj__489;
void* __right_value1008 = (void*)0;
struct sNode* node_898;
struct sNode* __result_obj__490;
void* __right_value1009 = (void*)0;
struct sNode* node_899;
struct sNode* __result_obj__491;
struct sNode* __result_obj__492;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1971, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value818=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1971, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result_obj__413 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value819=_inf_value7)));
            /*c*/ come_call_finalizer3(__right_value818,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value819) ? __right_value819 = come_decrement_ref_count(__right_value819, ((struct sNode*)__right_value819)->finalize, ((struct sNode*)__right_value819)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__413) ? __result_obj__413 = come_decrement_ref_count(__result_obj__413, ((struct sNode*)__result_obj__413)->finalize, ((struct sNode*)__result_obj__413)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__413;
        }
        else {
            head_781=info->p;
            value_782=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_783=info->p;
            __dec_obj228=value_782,
            value_782=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_782),info));
            (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_784[tail_783-head_781+1];
            memset(&buf_784, 0, sizeof(char)            *(tail_783-head_781+1)            );
            memcpy(buf_784,head_781,tail_783-head_781);
            buf_784[tail_783-head_781]=0;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1983, "struct sNode");
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value824=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1983, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_782),(char*)come_increment_ref_count(__builtin_string(buf_784)),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__414 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value825=_inf_value8)));
            ((value_782) ? value_782 = come_decrement_ref_count(value_782, ((struct sNode*)value_782)->finalize, ((struct sNode*)value_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value824,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value825) ? __right_value825 = come_decrement_ref_count(__right_value825, ((struct sNode*)__right_value825)->finalize, ((struct sNode*)__right_value825)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__414;
            ((value_782) ? value_782 = come_decrement_ref_count(value_782, ((struct sNode*)value_782)->finalize, ((struct sNode*)value_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_785=0;
        while(        1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_785++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_785--;
                if(                nest_785==0) {
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
        while(        1) {
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
        head_786=info->p;
        head_sline_787=info->sline;
        sline_real_788=info->sline_real;
        info->sline_real=info->sline;
        buf_789=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__790=is_type_name(buf_789,info);
        static char* is_special_word_array_791[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_792=charppa_contained(is_special_word_array_791,19,buf_789);
        define_function_pointer_flag_793=(_Bool)0;
        if(        !is_special_word_792&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value827=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value827,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_793=(_Bool)1;
                }
            }
            info->p=head_786;
            info->sline=head_sline_787;
        }
        lambda_flag_794=(_Bool)0;
        if(        !is_special_word_792&&is_type_name__790) {
            info->p=head_786;
            info->sline=head_sline_787;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value828=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value828,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_795=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_795,"lambda")) {
                lambda_flag_794=(_Bool)1;
            }
            info->p=head_786;
            info->sline=head_sline_787;
            (word2_795 = come_decrement_ref_count(word2_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_796=(_Bool)0;
        if(        !is_special_word_792) {
            info->p=head_786;
            info->sline=head_sline_787;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_797=(char*)come_increment_ref_count(parse_word(info));
                (word2_797 = come_decrement_ref_count(word2_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_796=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_786;
            info->sline=head_sline_787;
        }
        call_method_generics_fun_call_798=(_Bool)0;
        {
            info->p=head_786;
            info->sline=head_sline_787;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj229=buf_789,
                buf_789=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional19=(!is_type_name(buf_789,info)&&((struct sVar*)(__right_value834=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value833=__builtin_string(buf_789))))))==((void*)0)&&((struct sVar*)(__right_value837=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value836=__builtin_string(buf_789))))))==((void*)0)&&*info->p==60)),            (__right_value832 = come_decrement_ref_count(__right_value832, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value833 = come_decrement_ref_count(__right_value833, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value834,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value835 = come_decrement_ref_count(__right_value835, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value836 = come_decrement_ref_count(__right_value836, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value837,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                nest_799=0;
                while(                *info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_799++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_799==0) {
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
                    call_method_generics_fun_call_798=(_Bool)1;
                }
            }
            info->p=head_786;
            info->sline=head_sline_787;
        }
        inline_asm_800=(_Bool)0;
        {
            info->p=head_786;
            info->sline=head_sline_787;
            __dec_obj230=buf_789,
            buf_789=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_789,"asm")||string_operator_equals(buf_789,"__asm")||string_operator_equals(buf_789,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_800=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj231=buf_789,
                        buf_789=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_800=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_786;
            info->sline=head_sline_787;
        }
        parse_sharp_v5(info);
        __dec_obj232=buf_789,
        buf_789=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_794) {
            info->p=head_786;
            info->sline=head_sline_787;
            node_801=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_788;
            __result_obj__415 = (struct sNode*)come_increment_ref_count(node_801);
            ((node_801) ? node_801 = come_decrement_ref_count(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__415) ? __result_obj__415 = come_decrement_ref_count(__result_obj__415, ((struct sNode*)__result_obj__415)->finalize, ((struct sNode*)__result_obj__415)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__415;
            ((node_801) ? node_801 = come_decrement_ref_count(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_789,"_Static_assert")||string_operator_equals(buf_789,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_802=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_803=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_802;
            expected_next_character(44,info);
            exp2_804=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__416 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value844=static_assert_node((struct sNode*)come_increment_ref_count(exp_803),(struct sNode*)come_increment_ref_count(exp2_804),info))));
            ((exp_803) ? exp_803 = come_decrement_ref_count(exp_803, ((struct sNode*)exp_803)->finalize, ((struct sNode*)exp_803)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_804) ? exp2_804 = come_decrement_ref_count(exp2_804, ((struct sNode*)exp2_804)->finalize, ((struct sNode*)exp2_804)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value844) ? __right_value844 = come_decrement_ref_count(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__416) ? __result_obj__416 = come_decrement_ref_count(__result_obj__416, ((struct sNode*)__result_obj__416)->finalize, ((struct sNode*)__result_obj__416)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__416;
            ((exp_803) ? exp_803 = come_decrement_ref_count(exp_803, ((struct sNode*)exp_803)->finalize, ((struct sNode*)exp_803)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_804) ? exp2_804 = come_decrement_ref_count(exp2_804, ((struct sNode*)exp2_804)->finalize, ((struct sNode*)exp2_804)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_789,"output")&&*info->p==123) {
            block_text_805=(char*)come_increment_ref_count(skip_block(info));
            contents_806=(char*)come_increment_ref_count(block_text_805);
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2221, "struct sNode");
            _inf_obj_value9=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value847=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2221, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_806),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sOutputNode_finalize;
            _inf_value9->clone=(void*)sOutputNode_clone;
            _inf_value9->compile=(void*)sOutputNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sOutputNode_kind;
            __result_obj__419 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value851=_inf_value9)));
            (block_text_805 = come_decrement_ref_count(block_text_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_806 = come_decrement_ref_count(contents_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value847,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value851) ? __right_value851 = come_decrement_ref_count(__right_value851, ((struct sNode*)__right_value851)->finalize, ((struct sNode*)__right_value851)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__419) ? __result_obj__419 = come_decrement_ref_count(__result_obj__419, ((struct sNode*)__result_obj__419)->finalize, ((struct sNode*)__result_obj__419)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__419;
            (block_text_805 = come_decrement_ref_count(block_text_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_806 = come_decrement_ref_count(contents_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_789,"extern")) {
            node_808=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__420 = (struct sNode*)come_increment_ref_count(node_808);
            ((node_808) ? node_808 = come_decrement_ref_count(node_808, ((struct sNode*)node_808)->finalize, ((struct sNode*)node_808)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__420) ? __result_obj__420 = come_decrement_ref_count(__result_obj__420, ((struct sNode*)__result_obj__420)->finalize, ((struct sNode*)__result_obj__420)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__420;
            ((node_808) ? node_808 = come_decrement_ref_count(node_808, ((struct sNode*)node_808)->finalize, ((struct sNode*)node_808)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_789,"string")||string_operator_equals(buf_789,"wstring"))&&*info->p==40) {
            node_809=(struct sNode*)come_increment_ref_count(parse_function_call(buf_789,info,(_Bool)0));
            info->sline_real=sline_real_788;
            __result_obj__421 = (struct sNode*)come_increment_ref_count(node_809);
            ((node_809) ? node_809 = come_decrement_ref_count(node_809, ((struct sNode*)node_809)->finalize, ((struct sNode*)node_809)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__421) ? __result_obj__421 = come_decrement_ref_count(__result_obj__421, ((struct sNode*)__result_obj__421)->finalize, ((struct sNode*)__result_obj__421)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__421;
            ((node_809) ? node_809 = come_decrement_ref_count(node_809, ((struct sNode*)node_809)->finalize, ((struct sNode*)node_809)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_789,"come")) {
            come_block_810=((void*)0);
            come_block_sline_811=0;
            if(            *info->p==123) {
                head_812=info->p;
                come_block_sline_811=info->sline;
                ((char*)(__right_value854=skip_block(info)));
                (__right_value854 = come_decrement_ref_count(__right_value854, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_813=info->p;
                __dec_obj235=come_block_810,
                come_block_810=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2246, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj235,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_814=tail_813-head_812;
                mem_815=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_814+1)), "05call.c", 2249, "char*"));
                memcpy(mem_815,head_812,len_814);
                mem_815[len_814]=0;
                buffer_append_str(come_block_810,mem_815);
                buffer_append_str(come_block_810,"\n");
                (mem_815 = come_decrement_ref_count(mem_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_816=info->p;
                come_block_sline_811=info->sline;
                no_output_come_code_817=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value858=expression_v13(info)));
                ((__right_value858) ? __right_value858 = come_decrement_ref_count(__right_value858, ((struct sNode*)__right_value858)->finalize, ((struct sNode*)__right_value858)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_817;
                tail_818=info->p;
                __dec_obj236=come_block_810,
                come_block_810=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2267, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj236,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_819=tail_818-head_816;
                mem_820=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_819+1)), "05call.c", 2270, "char*"));
                memcpy(mem_820,head_816,len_819);
                mem_820[len_819]=0;
                buffer_append_str(come_block_810,"{");
                buffer_append_str(come_block_810,mem_820);
                buffer_append_str(come_block_810,"; }");
                buffer_append_str(come_block_810,"return (void*)0;\n}");
                buffer_append_str(come_block_810,"\n");
                (mem_820 = come_decrement_ref_count(mem_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2281, "struct sNode");
            _inf_obj_value10=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value863=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2281, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_810),come_block_sline_811,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeCallNode_finalize;
            _inf_value10->clone=(void*)sComeCallNode_clone;
            _inf_value10->compile=(void*)sComeCallNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeCallNode_terminated;
            _inf_value10->kind=(void*)sComeCallNode_kind;
            node_821=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value863,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_788;
            __result_obj__424 = (struct sNode*)come_increment_ref_count(node_821);
            /*c*/ come_call_finalizer3(come_block_810,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_821) ? node_821 = come_decrement_ref_count(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__424) ? __result_obj__424 = come_decrement_ref_count(__result_obj__424, ((struct sNode*)__result_obj__424)->finalize, ((struct sNode*)__result_obj__424)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__424;
            /*c*/ come_call_finalizer3(come_block_810,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_821) ? node_821 = come_decrement_ref_count(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_789,"come_join")&&*info->p==40) {
            come_block_823=((void*)0);
            come_block_sline_824=0;
            expected_next_character(40,info);
            node_825=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_788;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode");
            _inf_obj_value11=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value870=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2295, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_825),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeJoinNode_finalize;
            _inf_value11->clone=(void*)sComeJoinNode_clone;
            _inf_value11->compile=(void*)sComeJoinNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeJoinNode_terminated;
            _inf_value11->kind=(void*)sComeJoinNode_kind;
            __result_obj__427 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value874=_inf_value11)));
            /*c*/ come_call_finalizer3(come_block_823,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_825) ? node_825 = come_decrement_ref_count(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value870,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value874) ? __right_value874 = come_decrement_ref_count(__right_value874, ((struct sNode*)__right_value874)->finalize, ((struct sNode*)__right_value874)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__427) ? __result_obj__427 = come_decrement_ref_count(__result_obj__427, ((struct sNode*)__result_obj__427)->finalize, ((struct sNode*)__result_obj__427)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__427;
            /*c*/ come_call_finalizer3(come_block_823,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_825) ? node_825 = come_decrement_ref_count(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_789,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_827=1;
            if(            *info->p==40) {
                info->p++;
                while(                xisdigit(*info->p)) {
                    time_out_827=time_out_827*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_828=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2313, "struct list$1sNode$ph*"))));
            blocks_829=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2314, "struct list$1sBlock$ph*"))));
            else_block_830=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2315, "struct sBlock*"))));
            while(            1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj241=else_block_830,
                    else_block_830=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj241,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_831=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_832=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_828,(struct sNode*)come_increment_ref_count(var_name_831));
                    list$1sBlock$ph_add(blocks_829,(struct sBlock*)come_increment_ref_count(block_832));
                    if(                    *info->p==125) {
                        ((var_name_831) ? var_name_831 = come_decrement_ref_count(var_name_831, ((struct sNode*)var_name_831)->finalize, ((struct sNode*)var_name_831)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_832,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_831) ? var_name_831 = come_decrement_ref_count(var_name_831, ((struct sNode*)var_name_831)->finalize, ((struct sNode*)var_name_831)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_832,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_788;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2345, "struct sNode");
            _inf_obj_value12=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value888=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2345, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_828),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_829),(struct sBlock*)come_increment_ref_count(else_block_830),time_out_827,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComePollNode_finalize;
            _inf_value12->clone=(void*)sComePollNode_clone;
            _inf_value12->compile=(void*)sComePollNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComePollNode_terminated;
            _inf_value12->kind=(void*)sComePollNode_kind;
            __result_obj__449 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value928=_inf_value12)));
            /*c*/ come_call_finalizer3(vars_828,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_829,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_830,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value888,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value928) ? __right_value928 = come_decrement_ref_count(__right_value928, ((struct sNode*)__right_value928)->finalize, ((struct sNode*)__right_value928)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__449) ? __result_obj__449 = come_decrement_ref_count(__result_obj__449, ((struct sNode*)__result_obj__449)->finalize, ((struct sNode*)__result_obj__449)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__449;
            /*c*/ come_call_finalizer3(vars_828,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_829,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_830,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(buf_789,"__func__")||string_operator_equals(buf_789,"__FUNCTION__")) {
            info->sline_real=sline_real_788;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2350, "struct sNode");
            _inf_obj_value13=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value930=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2350, "struct sFuncNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFuncNode_finalize;
            _inf_value13->clone=(void*)sFuncNode_clone;
            _inf_value13->compile=(void*)sFuncNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFuncNode_kind;
            __result_obj__452 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value933=_inf_value13)));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value930,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value933) ? __right_value933 = come_decrement_ref_count(__right_value933, ((struct sNode*)__right_value933)->finalize, ((struct sNode*)__right_value933)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__452) ? __result_obj__452 = come_decrement_ref_count(__result_obj__452, ((struct sNode*)__result_obj__452)->finalize, ((struct sNode*)__result_obj__452)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__452;
        }
        else if(        !gComeC&&string_operator_equals(buf_789,"wildcard")) {
            info->sline_real=sline_real_788;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2354, "struct sNode");
            _inf_obj_value14=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value935=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2354, "struct sWildCard*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sWildCard_finalize;
            _inf_value14->clone=(void*)sWildCard_clone;
            _inf_value14->compile=(void*)sWildCard_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sWildCard_kind;
            __result_obj__455 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value938=_inf_value14)));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value935,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value938) ? __right_value938 = come_decrement_ref_count(__right_value938, ((struct sNode*)__right_value938)->finalize, ((struct sNode*)__right_value938)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__455) ? __result_obj__455 = come_decrement_ref_count(__result_obj__455, ((struct sNode*)__result_obj__455)->finalize, ((struct sNode*)__result_obj__455)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__455;
        }
        else if(        string_operator_equals(buf_789,"__line__")||string_operator_equals(buf_789,"__LINE__")) {
            info->sline_real=sline_real_788;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2358, "struct sNode");
            _inf_obj_value15=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value940=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2358, "struct sLineNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLineNode_finalize;
            _inf_value15->clone=(void*)sLineNode_clone;
            _inf_value15->compile=(void*)sLineNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLineNode_kind;
            __result_obj__458 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value943=_inf_value15)));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value940,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value943) ? __right_value943 = come_decrement_ref_count(__right_value943, ((struct sNode*)__right_value943)->finalize, ((struct sNode*)__right_value943)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__458) ? __result_obj__458 = come_decrement_ref_count(__result_obj__458, ((struct sNode*)__result_obj__458)->finalize, ((struct sNode*)__result_obj__458)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__458;
        }
        else if(        string_operator_equals(buf_789,"__sname__")) {
            info->sline_real=sline_real_788;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2362, "struct sNode");
            _inf_obj_value16=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value945=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2362, "struct sSNameNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sSNameNode_finalize;
            _inf_value16->clone=(void*)sSNameNode_clone;
            _inf_value16->compile=(void*)sSNameNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sSNameNode_kind;
            __result_obj__461 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value948=_inf_value16)));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value945,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value948) ? __right_value948 = come_decrement_ref_count(__right_value948, ((struct sNode*)__right_value948)->finalize, ((struct sNode*)__right_value948)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__461) ? __result_obj__461 = come_decrement_ref_count(__result_obj__461, ((struct sNode*)__result_obj__461)->finalize, ((struct sNode*)__result_obj__461)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__461;
        }
        else if(        string_operator_equals(buf_789,"__caller_func__")) {
            info->sline_real=sline_real_788;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2366, "struct sNode");
            _inf_obj_value17=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value950=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2366, "struct sCallerFuncNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value17->clone=(void*)sCallerFuncNode_clone;
            _inf_value17->compile=(void*)sCallerFuncNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerFuncNode_kind;
            __result_obj__464 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value953=_inf_value17)));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value950,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value953) ? __right_value953 = come_decrement_ref_count(__right_value953, ((struct sNode*)__right_value953)->finalize, ((struct sNode*)__right_value953)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__464) ? __result_obj__464 = come_decrement_ref_count(__result_obj__464, ((struct sNode*)__result_obj__464)->finalize, ((struct sNode*)__result_obj__464)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__464;
        }
        else if(        string_operator_equals(buf_789,"__caller_line__")) {
            info->sline_real=sline_real_788;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2370, "struct sNode");
            _inf_obj_value18=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value955=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2370, "struct sCallerLineNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerLineNode_finalize;
            _inf_value18->clone=(void*)sCallerLineNode_clone;
            _inf_value18->compile=(void*)sCallerLineNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerLineNode_kind;
            __result_obj__467 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value958=_inf_value18)));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value955,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value958) ? __right_value958 = come_decrement_ref_count(__right_value958, ((struct sNode*)__right_value958)->finalize, ((struct sNode*)__right_value958)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__467) ? __result_obj__467 = come_decrement_ref_count(__result_obj__467, ((struct sNode*)__result_obj__467)->finalize, ((struct sNode*)__result_obj__467)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__467;
        }
        else if(        string_operator_equals(buf_789,"__caller_sname__")) {
            info->sline_real=sline_real_788;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2374, "struct sNode");
            _inf_obj_value19=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value960=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2374, "struct sCallerSNameNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value19->clone=(void*)sCallerSNameNode_clone;
            _inf_value19->compile=(void*)sCallerSNameNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerSNameNode_kind;
            __result_obj__470 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value963=_inf_value19)));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value960,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value963) ? __right_value963 = come_decrement_ref_count(__right_value963, ((struct sNode*)__right_value963)->finalize, ((struct sNode*)__right_value963)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__470) ? __result_obj__470 = come_decrement_ref_count(__result_obj__470, ((struct sNode*)__result_obj__470)->finalize, ((struct sNode*)__result_obj__470)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__470;
        }
        else if(        info->va_arg&&is_type_name(buf_789,info)) {
            info->p=head_786;
            info->sline=head_sline_787;
            multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value964=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_872=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_873=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_874=multiple_assign_var13->v3;
            /*c*/ come_call_finalizer3(__right_value964,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_788;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2383, "struct sNode");
            _inf_obj_value20=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value966=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2383, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_872),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value20->clone=(void*)sVarArgTypeName_clone;
            _inf_value20->compile=(void*)sVarArgTypeName_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sVarArgTypeName_kind;
            __result_obj__473 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value970=_inf_value20)));
            /*c*/ come_call_finalizer3(type_872,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_873 = come_decrement_ref_count(name_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value966,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value970) ? __right_value970 = come_decrement_ref_count(__right_value970, ((struct sNode*)__right_value970)->finalize, ((struct sNode*)__right_value970)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__473) ? __result_obj__473 = come_decrement_ref_count(__result_obj__473, ((struct sNode*)__result_obj__473)->finalize, ((struct sNode*)__result_obj__473)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__473;
            /*c*/ come_call_finalizer3(type_872,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_873 = come_decrement_ref_count(name_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_789,"sizeof")||string_operator_equals(buf_789,"_Alignof")||string_operator_equals(buf_789,"_Alignas")||string_operator_equals(buf_789,"__alignof__")) {
            node_876=(struct sNode*)come_increment_ref_count(string_node_v21(buf_789,head_786,head_sline_787,info));
            info->sline_real=sline_real_788;
            __result_obj__474 = (struct sNode*)come_increment_ref_count(node_876);
            ((node_876) ? node_876 = come_decrement_ref_count(node_876, ((struct sNode*)node_876)->finalize, ((struct sNode*)node_876)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__474) ? __result_obj__474 = come_decrement_ref_count(__result_obj__474, ((struct sNode*)__result_obj__474)->finalize, ((struct sNode*)__result_obj__474)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__474;
            ((node_876) ? node_876 = come_decrement_ref_count(node_876, ((struct sNode*)node_876)->finalize, ((struct sNode*)node_876)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_800) {
            buf2_877=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2392, "struct buffer*"))));
            if(            *info->p!=40) {
                word_878=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_877,word_878);
                (word_878 = come_decrement_ref_count(word_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_877,40);
            exps_879=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2403, "struct list$1sNode$ph*"))));
            while(            (_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_877,40);
                    info->p++;
                    exp_880=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_879,(struct sNode*)come_increment_ref_count(exp_880));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_877,41);
                    ((exp_880) ? exp_880 = come_decrement_ref_count(exp_880, ((struct sNode*)exp_880)->finalize, ((struct sNode*)exp_880)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_877,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_877,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_877,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_788;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2440, "struct sNode");
            _inf_obj_value21=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value980=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2440, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_877)),(struct list$1sNode$ph*)come_increment_ref_count(exps_879),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sInlineAssembler_finalize;
            _inf_value21->clone=(void*)sInlineAssembler_clone;
            _inf_value21->compile=(void*)sInlineAssembler_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sInlineAssembler_kind;
            __result_obj__477 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value985=_inf_value21)));
            /*c*/ come_call_finalizer3(buf2_877,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_879,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value980,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value985) ? __right_value985 = come_decrement_ref_count(__right_value985, ((struct sNode*)__right_value985)->finalize, ((struct sNode*)__right_value985)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__477) ? __result_obj__477 = come_decrement_ref_count(__result_obj__477, ((struct sNode*)__result_obj__477)->finalize, ((struct sNode*)__result_obj__477)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__477;
            /*c*/ come_call_finalizer3(buf2_877,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_879,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_796) {
            fun_name_882=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2443, "struct buffer*"))));
            buffer_append_str(fun_name_882,buf_789);
            type_883=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value990=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value989=buffer_to_string(fun_name_882))))))));
            (__right_value988 = come_decrement_ref_count(__right_value988, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value989 = come_decrement_ref_count(__right_value989, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value990,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_883==((void*)0)) {
                klass_890=((struct sClass*)(__right_value994=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value993=buffer_to_string(fun_name_882))))));
                (__right_value992 = come_decrement_ref_count(__right_value992, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value993 = come_decrement_ref_count(__right_value993, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value994,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_890) {
                    __dec_obj269=type_883,
                    type_883=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2453, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_789)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj269,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_789);
                    exit(2);
                }
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_883->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_882,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_882,"_");
            buf2_891=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_882,buf2_891);
            node_892=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value999=buffer_to_string(fun_name_882))),info,(_Bool)0));
            (__right_value999 = come_decrement_ref_count(__right_value999, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_788;
            __result_obj__486 = (struct sNode*)come_increment_ref_count(node_892);
            /*c*/ come_call_finalizer3(fun_name_882,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_883,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_891 = come_decrement_ref_count(buf2_891, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_892) ? node_892 = come_decrement_ref_count(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__486) ? __result_obj__486 = come_decrement_ref_count(__result_obj__486, ((struct sNode*)__result_obj__486)->finalize, ((struct sNode*)__result_obj__486)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__486;
            /*c*/ come_call_finalizer3(fun_name_882,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_883,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_891 = come_decrement_ref_count(buf2_891, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_892) ? node_892 = come_decrement_ref_count(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_893=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2488, "struct buffer*"))));
            buffer_append_str(fun_name_893,buf_789);
            buffer_append_str(fun_name_893,"_");
            buf2_894=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_893,buf2_894);
            node_895=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1004=buffer_to_string(fun_name_893))),info,(_Bool)0));
            (__right_value1004 = come_decrement_ref_count(__right_value1004, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_788;
            __result_obj__487 = (struct sNode*)come_increment_ref_count(node_895);
            /*c*/ come_call_finalizer3(fun_name_893,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_894 = come_decrement_ref_count(buf2_894, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_895) ? node_895 = come_decrement_ref_count(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__487) ? __result_obj__487 = come_decrement_ref_count(__result_obj__487, ((struct sNode*)__result_obj__487)->finalize, ((struct sNode*)__result_obj__487)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__487;
            /*c*/ come_call_finalizer3(fun_name_893,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_894 = come_decrement_ref_count(buf2_894, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_895) ? node_895 = come_decrement_ref_count(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_798) {
            node_896=(struct sNode*)come_increment_ref_count(parse_function_call(buf_789,info,(_Bool)0));
            info->sline_real=sline_real_788;
            __result_obj__488 = (struct sNode*)come_increment_ref_count(node_896);
            ((node_896) ? node_896 = come_decrement_ref_count(node_896, ((struct sNode*)node_896)->finalize, ((struct sNode*)node_896)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__488) ? __result_obj__488 = come_decrement_ref_count(__result_obj__488, ((struct sNode*)__result_obj__488)->finalize, ((struct sNode*)__result_obj__488)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__488;
            ((node_896) ? node_896 = come_decrement_ref_count(node_896, ((struct sNode*)node_896)->finalize, ((struct sNode*)node_896)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_792&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__790)) {
            node_897=(struct sNode*)come_increment_ref_count(parse_function_call(buf_789,info,(_Bool)0));
            info->sline_real=sline_real_788;
            __result_obj__489 = (struct sNode*)come_increment_ref_count(node_897);
            ((node_897) ? node_897 = come_decrement_ref_count(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__489) ? __result_obj__489 = come_decrement_ref_count(__result_obj__489, ((struct sNode*)__result_obj__489)->finalize, ((struct sNode*)__result_obj__489)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__489;
            ((node_897) ? node_897 = come_decrement_ref_count(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_898=(struct sNode*)come_increment_ref_count(string_node_v21(buf_789,head_786,head_sline_787,info));
            info->sline_real=sline_real_788;
            __result_obj__490 = (struct sNode*)come_increment_ref_count(node_898);
            ((node_898) ? node_898 = come_decrement_ref_count(node_898, ((struct sNode*)node_898)->finalize, ((struct sNode*)node_898)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__490) ? __result_obj__490 = come_decrement_ref_count(__result_obj__490, ((struct sNode*)__result_obj__490)->finalize, ((struct sNode*)__result_obj__490)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__490;
            ((node_898) ? node_898 = come_decrement_ref_count(node_898, ((struct sNode*)node_898)->finalize, ((struct sNode*)node_898)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_789 = come_decrement_ref_count(buf_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_899=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__491 = (struct sNode*)come_increment_ref_count(node_899);
        ((node_899) ? node_899 = come_decrement_ref_count(node_899, ((struct sNode*)node_899)->finalize, ((struct sNode*)node_899)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__491) ? __result_obj__491 = come_decrement_ref_count(__result_obj__491, ((struct sNode*)__result_obj__491)->finalize, ((struct sNode*)__result_obj__491)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__491;
        ((node_899) ? node_899 = come_decrement_ref_count(node_899, ((struct sNode*)node_899)->finalize, ((struct sNode*)node_899)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    err_msg(info,"unexpected operator(%c)",*info->p);
    exit(2);
    __result_obj__492 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__492) ? __result_obj__492 = come_decrement_ref_count(__result_obj__492, ((struct sNode*)__result_obj__492)->finalize, ((struct sNode*)__result_obj__492)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__492;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__417;
void* __right_value848 = (void*)0;
struct sOutputNode* result_807;
void* __right_value849 = (void*)0;
char* __dec_obj233;
void* __right_value850 = (void*)0;
char* __dec_obj234;
struct sOutputNode* __result_obj__418;
    if(    self==(void*)0) {
        __result_obj__417 = (void*)0;
        return __result_obj__417;
    }
    result_807=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_807->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_807->sname,
        result_807->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_807->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj234=result_807->contents,
        result_807->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__418 = result_807;
    /*c*/ come_call_finalizer3(result_807,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__418;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__422;
void* __right_value864 = (void*)0;
struct sComeCallNode* result_822;
void* __right_value865 = (void*)0;
char* __dec_obj237;
void* __right_value866 = (void*)0;
struct buffer* __dec_obj238;
struct sComeCallNode* __result_obj__423;
    if(    self==(void*)0) {
        __result_obj__422 = (void*)0;
        return __result_obj__422;
    }
    result_822=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_822->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_822->sname,
        result_822->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_822->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj238=result_822->come_block,
        result_822->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj238,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_822->come_block_sline=self->come_block_sline;
    }
    __result_obj__423 = result_822;
    /*c*/ come_call_finalizer3(result_822,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__423;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__425;
void* __right_value871 = (void*)0;
struct sComeJoinNode* result_826;
void* __right_value872 = (void*)0;
char* __dec_obj239;
void* __right_value873 = (void*)0;
struct sNode* __dec_obj240;
struct sComeJoinNode* __result_obj__426;
    if(    self==(void*)0) {
        __result_obj__425 = (void*)0;
        return __result_obj__425;
    }
    result_826=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_826->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_826->sname,
        result_826->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_826->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj240=result_826->node,
        result_826->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__426 = result_826;
    /*c*/ come_call_finalizer3(result_826,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__426;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__428;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__428 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__428,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__428;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value884 = (void*)0;
struct list_item$1sBlock$ph* litem_833;
struct sBlock* __dec_obj242;
void* __right_value885 = (void*)0;
struct list_item$1sBlock$ph* litem_834;
struct sBlock* __dec_obj243;
void* __right_value886 = (void*)0;
struct list_item$1sBlock$ph* litem_835;
struct sBlock* __dec_obj244;
struct list$1sBlock$ph* __result_obj__429;
    if(    self->len==0) {
        litem_833=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value884=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1043, "struct list_item$1sBlock$ph*"))));
        litem_833->prev=((void*)0);
        litem_833->next=((void*)0);
        __dec_obj242=litem_833->item,
        litem_833->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj242,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_833;
        self->head=litem_833;
    }
    else if(    self->len==1) {
        litem_834=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value885=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1053, "struct list_item$1sBlock$ph*"))));
        litem_834->prev=self->head;
        litem_834->next=((void*)0);
        __dec_obj243=litem_834->item,
        litem_834->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj243,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_834;
        self->head->next=litem_834;
    }
    else {
        litem_835=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value886=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1063, "struct list_item$1sBlock$ph*"))));
        litem_835->prev=self->tail;
        litem_835->next=((void*)0);
        __dec_obj244=litem_835->item,
        litem_835->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj244,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_835;
        self->tail=litem_835;
    }
    self->len++;
    __result_obj__429 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__429;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__430;
void* __right_value889 = (void*)0;
struct sComePollNode* result_836;
void* __right_value890 = (void*)0;
char* __dec_obj245;
void* __right_value891 = (void*)0;
struct list$1sNode$ph* __dec_obj246;
void* __right_value926 = (void*)0;
struct list$1sBlock$ph* __dec_obj255;
void* __right_value927 = (void*)0;
struct sBlock* __dec_obj256;
struct sComePollNode* __result_obj__448;
    if(    self==(void*)0) {
        __result_obj__430 = (void*)0;
        return __result_obj__430;
    }
    result_836=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_836->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_836->sname,
        result_836->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_836->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj246=result_836->vars,
        result_836->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        /*b*/ come_call_finalizer3(__dec_obj246,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj255=result_836->blocks,
        result_836->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj255,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj256=result_836->else_block,
        result_836->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj256,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_836->time_out=self->time_out;
    }
    __result_obj__448 = result_836;
    /*c*/ come_call_finalizer3(result_836,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__448;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__431;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct list$1sBlock$ph* result_837;
struct list_item$1sBlock$ph* it_838;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct list$1sBlock$ph* __result_obj__447;
    if(    self==((void*)0)) {
        __result_obj__431 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__431,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__431;
    }
    result_837=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1024, "struct list$1sBlock$ph*"))));
    it_838=self->head;
    while(    it_838!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_837,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_838->item)));
        }
        else {
            list$1sBlock$ph_add(result_837,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_838->item)));
        }
        it_838=it_838->next;
    }
    __result_obj__447 = (struct list$1sBlock$ph*)come_increment_ref_count(result_837);
    /*c*/ come_call_finalizer3(result_837,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__447,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__447;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__432;
void* __right_value894 = (void*)0;
struct sBlock* result_839;
void* __right_value899 = (void*)0;
struct list$1sNode$ph* __dec_obj247;
void* __right_value923 = (void*)0;
struct sVarTable* __dec_obj254;
struct sBlock* __result_obj__446;
    if(    self==(void*)0) {
        __result_obj__432 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__432,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__432;
    }
    result_839=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj247=result_839->mNodes,
        result_839->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj247,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj254=result_839->mVarTable,
        result_839->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj254,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_839->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__446 = (struct sBlock*)come_increment_ref_count(result_839);
    /*c*/ come_call_finalizer3(result_839,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__446,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__446;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__433;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1sNode$ph* result_840;
struct list_item$1sNode$ph* it_841;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1sNode$ph* __result_obj__434;
    if(    self==((void*)0)) {
        __result_obj__433 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__433,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__433;
    }
    result_840=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_841=self->head;
    while(    it_841!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_840,(struct sNode*)come_increment_ref_count(sNode_clone(it_841->item)));
        }
        else {
            list$1sNode$ph_add(result_840,(struct sNode*)come_increment_ref_count(sNode_clone(it_841->item)));
        }
        it_841=it_841->next;
    }
    __result_obj__434 = (struct list$1sNode$ph*)come_increment_ref_count(result_840);
    /*c*/ come_call_finalizer3(result_840,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__434,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__434;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__435;
void* __right_value900 = (void*)0;
struct sVarTable* result_842;
void* __right_value922 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj253;
struct sVarTable* __result_obj__445;
    if(    self==(void*)0) {
        __result_obj__435 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__435,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__435;
    }
    result_842=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj253=result_842->mVars,
        result_842->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj253,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_842->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_842->mParent=self->mParent;
    }
    __result_obj__445 = (struct sVarTable*)come_increment_ref_count(result_842);
    /*c*/ come_call_finalizer3(result_842,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__445,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__445;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__436;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct map$2char$phsVar$ph* result_843;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct list$1char$ph* __dec_obj248;
char* it_844;
struct sVar* default_value_845;
void* __right_value905 = (void*)0;
struct sVar* it2_848;
void* __right_value911 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__444;
default_value_845 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__436 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__436,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__436;
    }
    result_843=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1999, "struct map$2char$phsVar$ph*"))));
    __dec_obj248=result_843->key_list,
    result_843->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2001, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj248,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_844=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_844=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_845,0,sizeof(struct sVar*));
        it2_848=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_844,(struct sVar*)come_increment_ref_count(default_value_845)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_843,(char*)come_increment_ref_count((char*)come_memdup(it_844, "./comelang.h", 2010, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_848)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_843,(char*)come_increment_ref_count((char*)come_memdup(it_844, "./comelang.h", 2013, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_848)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_843,(char*)come_increment_ref_count(it_844),(struct sVar*)come_increment_ref_count(sVar_clone(it2_848)));
        }
        else {
            map$2char$phsVar$ph_put(result_843,(char*)come_increment_ref_count(it_844),(struct sVar*)come_increment_ref_count(sVar_clone(it2_848)));
        }
        /*c*/ come_call_finalizer3(default_value_845,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_848,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__444 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_843);
    /*c*/ come_call_finalizer3(result_843,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__444,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__444;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_846;
unsigned int it_847;
struct sVar* __result_obj__437;
struct sVar* __result_obj__438;
struct sVar* __result_obj__439;
struct sVar* __result_obj__440;
    hash_846=string_get_hash_key(((char*)key))%self->size;
    it_847=hash_846;
    while(    (_Bool)1) {
        if(        self->item_existance[it_847]) {
            if(            string_equals(self->keys[it_847],key)) {
                __result_obj__437 = (struct sVar*)come_increment_ref_count(self->items[it_847]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__437,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__437;
            }
            it_847++;
            if(            it_847>=self->size) {
                it_847=0;
            }
            else if(            it_847==hash_846) {
                __result_obj__438 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__438,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__438;
            }
        }
        else {
            __result_obj__439 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__439,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__439;
        }
    }
    __result_obj__440 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__440,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__440;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_860;
int it_861;
_Bool same_key_exist_862;
char* it2_863;
struct map$2char$phsVar$ph* __result_obj__441;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_860=string_get_hash_key(((char*)key))%self->size;
    it_861=hash_860;
    while(    (_Bool)1) {
        if(        self->item_existance[it_861]) {
            if(            string_equals(self->keys[it_861],key)) {
                if(                1) {
                    (self->keys[it_861] = come_decrement_ref_count(self->keys[it_861], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_861]);
                    self->keys[it_861]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_861]);
                    self->keys[it_861]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_861],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_861]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_861]=item;
                }
                break;
            }
            it_861++;
            if(            it_861>=self->size) {
                it_861=0;
            }
            else if(            it_861==hash_860) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_861]=(_Bool)1;
            if(            1) {
                self->keys[it_861]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_861]=key;
            }
            if(            1) {
                self->items[it_861]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_861]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_862=(_Bool)0;
    for(    it2_863=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_863=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_863,key)) {
            same_key_exist_862=(_Bool)1;
        }
    }
    if(    !same_key_exist_862) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__441 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__441;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_849;
void* __right_value906 = (void*)0;
char** keys_850;
void* __right_value907 = (void*)0;
struct sVar** items_851;
void* __right_value908 = (void*)0;
_Bool* item_existance_852;
int len_853;
char* it_854;
struct sVar* default_value_855;
void* __right_value909 = (void*)0;
struct sVar* it2_856;
unsigned int hash_857;
int n_858;
struct sVar* default_value_859;
void* __right_value910 = (void*)0;
default_value_855 = (void*)0;
default_value_859 = (void*)0;
    size_849=self->size*10;
    keys_850=(char**)come_increment_ref_count(((char**)(__right_value906=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_849)), "./comelang.h", 2167, "char**"))));
    items_851=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value907=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_849)), "./comelang.h", 2168, "struct sVar**"))));
    item_existance_852=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value908=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_849)), "./comelang.h", 2169, "_Bool*"))));
    len_853=0;
    for(    it_854=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_854=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_855,0,sizeof(struct sVar*));
        it2_856=((struct sVar*)(__right_value909=map$2char$phsVar$ph_at(self,it_854,(struct sVar*)come_increment_ref_count(default_value_855))));
        /*c*/ come_call_finalizer3(__right_value909,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_857=string_get_hash_key(((char*)it_854))%size_849;
        n_858=hash_857;
        while(        (_Bool)1) {
            if(            item_existance_852[n_858]) {
                n_858++;
                if(                n_858>=size_849) {
                    n_858=0;
                }
                else if(                n_858==hash_857) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_852[n_858]=(_Bool)1;
                keys_850[n_858]=it_854;
                items_851[n_858]=((struct sVar*)(__right_value910=map$2char$phsVar$ph_at(self,it_854,(struct sVar*)come_increment_ref_count(default_value_859))));
                /*c*/ come_call_finalizer3(__right_value910,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_853++;
                /*c*/ come_call_finalizer3(default_value_859,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_859,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_855,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_850;
    self->items=items_851;
    self->item_existance=item_existance_852;
    self->size=size_849;
    self->len=len_853;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__442;
void* __right_value912 = (void*)0;
struct sVar* result_864;
void* __right_value913 = (void*)0;
char* __dec_obj249;
void* __right_value914 = (void*)0;
char* __dec_obj250;
void* __right_value915 = (void*)0;
struct sType* __dec_obj251;
void* __right_value916 = (void*)0;
char* __dec_obj252;
struct sVar* __result_obj__443;
    if(    self==(void*)0) {
        __result_obj__442 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__442,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__442;
    }
    result_864=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj249=result_864->mName,
        result_864->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj250=result_864->mCValueName,
        result_864->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj251=result_864->mType,
        result_864->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj251,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_864->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_864->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_864->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_864->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj252=result_864->mFunName,
        result_864->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__443 = (struct sVar*)come_increment_ref_count(result_864);
    /*c*/ come_call_finalizer3(result_864,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__443,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__443;
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__450;
void* __right_value931 = (void*)0;
struct sFuncNode* result_865;
void* __right_value932 = (void*)0;
char* __dec_obj257;
struct sFuncNode* __result_obj__451;
    if(    self==(void*)0) {
        __result_obj__450 = (void*)0;
        return __result_obj__450;
    }
    result_865=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_865->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj257=result_865->sname,
        result_865->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_865->sline_real=self->sline_real;
    }
    __result_obj__451 = result_865;
    /*c*/ come_call_finalizer3(result_865,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__451;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__453;
void* __right_value936 = (void*)0;
struct sWildCard* result_866;
void* __right_value937 = (void*)0;
char* __dec_obj258;
struct sWildCard* __result_obj__454;
    if(    self==(void*)0) {
        __result_obj__453 = (void*)0;
        return __result_obj__453;
    }
    result_866=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_866->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj258=result_866->sname,
        result_866->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_866->sline_real=self->sline_real;
    }
    __result_obj__454 = result_866;
    /*c*/ come_call_finalizer3(result_866,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__454;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__456;
void* __right_value941 = (void*)0;
struct sLineNode* result_867;
void* __right_value942 = (void*)0;
char* __dec_obj259;
struct sLineNode* __result_obj__457;
    if(    self==(void*)0) {
        __result_obj__456 = (void*)0;
        return __result_obj__456;
    }
    result_867=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_867->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_867->sname,
        result_867->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_867->sline_real=self->sline_real;
    }
    __result_obj__457 = result_867;
    /*c*/ come_call_finalizer3(result_867,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__457;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__459;
void* __right_value946 = (void*)0;
struct sSNameNode* result_868;
void* __right_value947 = (void*)0;
char* __dec_obj260;
struct sSNameNode* __result_obj__460;
    if(    self==(void*)0) {
        __result_obj__459 = (void*)0;
        return __result_obj__459;
    }
    result_868=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_868->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_868->sname,
        result_868->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_868->sline_real=self->sline_real;
    }
    __result_obj__460 = result_868;
    /*c*/ come_call_finalizer3(result_868,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__460;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__462;
void* __right_value951 = (void*)0;
struct sCallerFuncNode* result_869;
void* __right_value952 = (void*)0;
char* __dec_obj261;
struct sCallerFuncNode* __result_obj__463;
    if(    self==(void*)0) {
        __result_obj__462 = (void*)0;
        return __result_obj__462;
    }
    result_869=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_869->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj261=result_869->sname,
        result_869->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_869->sline_real=self->sline_real;
    }
    __result_obj__463 = result_869;
    /*c*/ come_call_finalizer3(result_869,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__463;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__465;
void* __right_value956 = (void*)0;
struct sCallerLineNode* result_870;
void* __right_value957 = (void*)0;
char* __dec_obj262;
struct sCallerLineNode* __result_obj__466;
    if(    self==(void*)0) {
        __result_obj__465 = (void*)0;
        return __result_obj__465;
    }
    result_870=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_870->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj262=result_870->sname,
        result_870->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_870->sline_real=self->sline_real;
    }
    __result_obj__466 = result_870;
    /*c*/ come_call_finalizer3(result_870,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__466;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__468;
void* __right_value961 = (void*)0;
struct sCallerSNameNode* result_871;
void* __right_value962 = (void*)0;
char* __dec_obj263;
struct sCallerSNameNode* __result_obj__469;
    if(    self==(void*)0) {
        __result_obj__468 = (void*)0;
        return __result_obj__468;
    }
    result_871=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_871->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_871->sname,
        result_871->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_871->sline_real=self->sline_real;
    }
    __result_obj__469 = result_871;
    /*c*/ come_call_finalizer3(result_871,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__469;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__471;
void* __right_value967 = (void*)0;
struct sVarArgTypeName* result_875;
void* __right_value968 = (void*)0;
char* __dec_obj264;
void* __right_value969 = (void*)0;
struct sType* __dec_obj265;
struct sVarArgTypeName* __result_obj__472;
    if(    self==(void*)0) {
        __result_obj__471 = (void*)0;
        return __result_obj__471;
    }
    result_875=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_875->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj264=result_875->sname,
        result_875->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_875->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj265=result_875->type,
        result_875->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj265,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__472 = result_875;
    /*c*/ come_call_finalizer3(result_875,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__472;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__475;
void* __right_value981 = (void*)0;
struct sInlineAssembler* result_881;
void* __right_value982 = (void*)0;
char* __dec_obj266;
void* __right_value983 = (void*)0;
char* __dec_obj267;
void* __right_value984 = (void*)0;
struct list$1sNode$ph* __dec_obj268;
struct sInlineAssembler* __result_obj__476;
    if(    self==(void*)0) {
        __result_obj__475 = (void*)0;
        return __result_obj__475;
    }
    result_881=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_881->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_881->sname,
        result_881->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_881->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj267=result_881->source,
        result_881->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj268=result_881->exps,
        result_881->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj268,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__476 = result_881;
    /*c*/ come_call_finalizer3(result_881,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__476;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_884;
unsigned int hash_885;
unsigned int it_886;
struct sType* __result_obj__478;
struct sType* __result_obj__479;
struct sType* __result_obj__480;
struct sType* __result_obj__481;
default_value_884 = (void*)0;
    memset(&default_value_884,0,sizeof(struct sType*));
    hash_885=string_get_hash_key(((char*)key))%self->size;
    it_886=hash_885;
    while(    (_Bool)1) {
        if(        self->item_existance[it_886]) {
            if(            string_equals(self->keys[it_886],key)) {
                __result_obj__478 = (struct sType*)come_increment_ref_count(self->items[it_886]);
                /*c*/ come_call_finalizer3(default_value_884,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__478,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__478;
            }
            it_886++;
            if(            it_886>=self->size) {
                it_886=0;
            }
            else if(            it_886==hash_885) {
                __result_obj__479 = (struct sType*)come_increment_ref_count(default_value_884);
                /*c*/ come_call_finalizer3(default_value_884,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__479;
            }
        }
        else {
            __result_obj__480 = (struct sType*)come_increment_ref_count(default_value_884);
            /*c*/ come_call_finalizer3(default_value_884,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__480,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__480;
        }
    }
    __result_obj__481 = (struct sType*)come_increment_ref_count(default_value_884);
    /*c*/ come_call_finalizer3(default_value_884,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__481,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__481;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_887;
unsigned int hash_888;
unsigned int it_889;
struct sType* __result_obj__482;
struct sType* __result_obj__483;
struct sType* __result_obj__484;
struct sType* __result_obj__485;
default_value_887 = (void*)0;
    memset(&default_value_887,0,sizeof(struct sType*));
    hash_888=string_get_hash_key(((char*)key))%self->size;
    it_889=hash_888;
    while(    (_Bool)1) {
        if(        self->item_existance[it_889]) {
            if(            string_equals(self->keys[it_889],key)) {
                __result_obj__482 = (struct sType*)come_increment_ref_count(self->items[it_889]);
                /*c*/ come_call_finalizer3(default_value_887,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__482,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__482;
            }
            it_889++;
            if(            it_889>=self->size) {
                it_889=0;
            }
            else if(            it_889==hash_888) {
                __result_obj__483 = (struct sType*)come_increment_ref_count(default_value_887);
                /*c*/ come_call_finalizer3(default_value_887,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__483;
            }
        }
        else {
            __result_obj__484 = (struct sType*)come_increment_ref_count(default_value_887);
            /*c*/ come_call_finalizer3(default_value_887,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__484;
        }
    }
    __result_obj__485 = (struct sType*)come_increment_ref_count(default_value_887);
    /*c*/ come_call_finalizer3(default_value_887,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__485,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__485;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value1010 = (void*)0;
struct sNode* __result_obj__493;
    __result_obj__493 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1010=expression_node_v99(info))));
    ((__right_value1010) ? __right_value1010 = come_decrement_ref_count(__right_value1010, ((struct sNode*)__right_value1010)->finalize, ((struct sNode*)__right_value1010)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__493) ? __result_obj__493 = come_decrement_ref_count(__result_obj__493, ((struct sNode*)__result_obj__493)->finalize, ((struct sNode*)__result_obj__493)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__493;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sNode* __dec_obj270;
struct sNode* __result_obj__494;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sNode* __dec_obj271;
struct sNode* __result_obj__495;
struct sNode* __result_obj__496;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj270=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj270 ? __dec_obj270 = come_decrement_ref_count(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__494 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__494) ? __result_obj__494 = come_decrement_ref_count(__result_obj__494, ((struct sNode*)__result_obj__494)->finalize, ((struct sNode*)__result_obj__494)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__494;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj271=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj271 ? __dec_obj271 = come_decrement_ref_count(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__495 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__495) ? __result_obj__495 = come_decrement_ref_count(__result_obj__495, ((struct sNode*)__result_obj__495)->finalize, ((struct sNode*)__result_obj__495)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__495;
    }
    __result_obj__496 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__496) ? __result_obj__496 = come_decrement_ref_count(__result_obj__496, ((struct sNode*)__result_obj__496)->finalize, ((struct sNode*)__result_obj__496)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__496;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1015 = (void*)0;
struct sNode* node_900;
void* __right_value1016 = (void*)0;
struct sNode* __dec_obj272;
struct sNode* __result_obj__497;
    node_900=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj272=node_900,
    node_900=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_900),info));
    (__dec_obj272 ? __dec_obj272 = come_decrement_ref_count(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__497 = (struct sNode*)come_increment_ref_count(node_900);
    ((node_900) ? node_900 = come_decrement_ref_count(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__497) ? __result_obj__497 = come_decrement_ref_count(__result_obj__497, ((struct sNode*)__result_obj__497)->finalize, ((struct sNode*)__result_obj__497)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__497;
}

char* get_none_generics_name(char* class_name){
char* p_901;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
char* __result_obj__498;
void* __right_value1019 = (void*)0;
char* __result_obj__499;
    p_901=class_name;
    while(    *p_901) {
        if(        *p_901==36) {
            __result_obj__498 = (char*)come_increment_ref_count(((char*)(__right_value1018=charp_substring(((char*)(__right_value1017=__builtin_string(class_name))),0,p_901-class_name))));
            (__right_value1017 = come_decrement_ref_count(__right_value1017, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1018 = come_decrement_ref_count(__right_value1018, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__498 = come_decrement_ref_count(__result_obj__498, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__498;
        }
        else {
            p_901++;
        }
    }
    __result_obj__499 = (char*)come_increment_ref_count(((char*)(__right_value1019=__builtin_string(class_name))));
    (__right_value1019 = come_decrement_ref_count(__right_value1019, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__499 = come_decrement_ref_count(__result_obj__499, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__499;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct buffer* buf_902;
struct sClass* klass_903;
char* class_name_904;
int i_905;
void* __right_value1022 = (void*)0;
struct sType* type_906;
void* __right_value1023 = (void*)0;
char* type_name_907;
int i_908;
void* __right_value1024 = (void*)0;
char* __result_obj__500;
    buf_902=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2588, "struct buffer*"))));
    klass_903=generics_type->mClass;
    class_name_904=klass_903->mName;
    buffer_append_str(buf_902,class_name_904);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_902,36);
        buffer_append_char(buf_902,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_905=0;        i_905<list$1sType$ph_length(generics_type->mGenericsTypes);        i_905++        ){
            type_906=((struct sType*)(__right_value1022=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_905)));
            /*c*/ come_call_finalizer3(__right_value1022,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_907=(char*)come_increment_ref_count(create_generics_name(type_906,info));
            buffer_append_str(buf_902,type_name_907);
            buffer_append_char(buf_902,36);
            for(            i_908=0;            i_908<type_906->mPointerNum;            i_908++            ){
                buffer_append_char(buf_902,112);
            }
            if(            type_906->mHeap) {
                buffer_append_str(buf_902,"h");
            }
            (type_name_907 = come_decrement_ref_count(type_name_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__500 = (char*)come_increment_ref_count(((char*)(__right_value1024=buffer_to_string(buf_902))));
    /*c*/ come_call_finalizer3(buf_902,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1024 = come_decrement_ref_count(__right_value1024, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__500 = come_decrement_ref_count(__result_obj__500, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__500;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_909;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct buffer* buf_910;
void* __right_value1027 = (void*)0;
char* __dec_obj273;
void* __right_value1028 = (void*)0;
char* __dec_obj274;
int i_911;
void* __right_value1029 = (void*)0;
char* __dec_obj275;
void* __right_value1030 = (void*)0;
char* __dec_obj276;
void* __right_value1031 = (void*)0;
char* __dec_obj277;
int i_912;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
char* __result_obj__501;
struct_name_909 = (void*)0;
    buf_910=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2623, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj273=struct_name_909,
        struct_name_909=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_909,"_Bool")) {
            __dec_obj274=struct_name_909,
            struct_name_909=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_910,"$");
            }
            for(            i_911=0;            i_911<obj_type->mOriginalTypeNamePointerNum;            i_911++            ){
                buffer_append_str(buf_910,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj275=struct_name_909,
        struct_name_909=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_909,"_Bool")) {
            __dec_obj276=struct_name_909,
            struct_name_909=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj277=struct_name_909,
        struct_name_909=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_910,"$");
        }
        for(        i_912=0;        i_912<obj_type->mPointerNum;        i_912++        ){
            buffer_append_str(buf_910,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_910,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_910,"pa");
    }
    __result_obj__501 = (char*)come_increment_ref_count(((char*)(__right_value1033=xsprintf("%s%s_%s",struct_name_909,((char*)(__right_value1032=buffer_to_string(buf_910))),fun_name))));
    (struct_name_909 = come_decrement_ref_count(struct_name_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_910,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1032 = come_decrement_ref_count(__right_value1032, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1033 = come_decrement_ref_count(__right_value1033, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__501 = come_decrement_ref_count(__result_obj__501, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__501;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_913;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct buffer* buf_914;
void* __right_value1036 = (void*)0;
char* __dec_obj278;
void* __right_value1037 = (void*)0;
char* __dec_obj279;
void* __right_value1038 = (void*)0;
char* __dec_obj280;
int i_915;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
char* __result_obj__502;
struct_name_913 = (void*)0;
    buf_914=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2670, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj278=struct_name_913,
        struct_name_913=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj278 = come_decrement_ref_count(__dec_obj278, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_913,"_Bool")) {
            __dec_obj279=struct_name_913,
            struct_name_913=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj279 = come_decrement_ref_count(__dec_obj279, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj280=struct_name_913,
        struct_name_913=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj280 = come_decrement_ref_count(__dec_obj280, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_914,"$");
        }
        for(        i_915=0;        i_915<obj_type->mPointerNum;        i_915++        ){
            buffer_append_str(buf_914,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_914,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_914,"pa");
    }
    __result_obj__502 = (char*)come_increment_ref_count(((char*)(__right_value1040=xsprintf("%s%s_%s",struct_name_913,((char*)(__right_value1039=buffer_to_string(buf_914))),fun_name))));
    (struct_name_913 = come_decrement_ref_count(struct_name_913, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_914,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1039 = come_decrement_ref_count(__right_value1039, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1040 = come_decrement_ref_count(__right_value1040, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__502 = come_decrement_ref_count(__result_obj__502, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__502;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_916;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct buffer* buf_917;
void* __right_value1043 = (void*)0;
char* __dec_obj281;
void* __right_value1044 = (void*)0;
char* __dec_obj282;
int i_918;
void* __right_value1045 = (void*)0;
char* __dec_obj283;
void* __right_value1046 = (void*)0;
char* __dec_obj284;
void* __right_value1047 = (void*)0;
char* __dec_obj285;
int i_919;
void* __right_value1048 = (void*)0;
int len_921;
void* __right_value1049 = (void*)0;
char* __result_obj__503;
struct_name_916 = (void*)0;
    buf_917=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2702, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj281=struct_name_916,
        struct_name_916=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj281 = come_decrement_ref_count(__dec_obj281, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_916,"_Bool")) {
            __dec_obj282=struct_name_916,
            struct_name_916=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_917,"$");
            }
            for(            i_918=0;            i_918<obj_type->mOriginalTypeNamePointerNum;            i_918++            ){
                buffer_append_str(buf_917,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj283=struct_name_916,
        struct_name_916=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj283 = come_decrement_ref_count(__dec_obj283, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_916,"_Bool")) {
            __dec_obj284=struct_name_916,
            struct_name_916=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj284 = come_decrement_ref_count(__dec_obj284, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj285=struct_name_916,
        struct_name_916=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj285 = come_decrement_ref_count(__dec_obj285, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_917,"$");
        }
        for(        i_919=0;        i_919<obj_type->mPointerNum;        i_919++        ){
            buffer_append_str(buf_917,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_917,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_917,"pa");
    }
    char none_method_name_920[charp_length(fun_name)+1];
    memset(&none_method_name_920, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_921=string_length(struct_name_916)+string_length(((char*)(__right_value1048=buffer_to_string(buf_917))));
    (__right_value1048 = come_decrement_ref_count(__right_value1048, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_920,fun_name+len_921+1,charp_length(fun_name)-len_921-1);
    none_method_name_920[charp_length(fun_name)-len_921-1]=0;
    __result_obj__503 = (char*)come_increment_ref_count(((char*)(__right_value1049=__builtin_string(none_method_name_920))));
    (struct_name_916 = come_decrement_ref_count(struct_name_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_917,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1049 = come_decrement_ref_count(__right_value1049, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__503 = come_decrement_ref_count(__result_obj__503, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__503;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1050 = (void*)0;
char* struct_name_922;
void* __right_value1051 = (void*)0;
char* __dec_obj286;
void* __right_value1052 = (void*)0;
char* __result_obj__504;
    struct_name_922=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name_922,"_Bool")) {
        __dec_obj286=struct_name_922,
        struct_name_922=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj286 = come_decrement_ref_count(__dec_obj286, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__504 = (char*)come_increment_ref_count(((char*)(__right_value1052=xsprintf("%s_%s",struct_name_922,fun_name))));
    (struct_name_922 = come_decrement_ref_count(struct_name_922, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1052 = come_decrement_ref_count(__right_value1052, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__504 = come_decrement_ref_count(__result_obj__504, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__504;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
struct sNode* __result_obj__505;
    err_msg(info,"unexpected word(%s)(2)",buf);
    exit(2);
    __result_obj__505 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__505) ? __result_obj__505 = come_decrement_ref_count(__result_obj__505, ((struct sNode*)__result_obj__505)->finalize, ((struct sNode*)__result_obj__505)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__505;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_923;
char* p_924;
int sline_925;
_Bool err_flag_926;
void* __right_value1055 = (void*)0;
char* label_927;
void* __right_value1056 = (void*)0;
char* __dec_obj287;
char* __dec_obj288;
_Bool no_comma_928;
_Bool in_fun_param_929;
void* __right_value1057 = (void*)0;
struct sNode* node_930;
void* __right_value1058 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct sNode* _inf_value22;
struct sLambdaCall* _inf_obj_value22;
void* __right_value1067 = (void*)0;
struct sNode* __result_obj__508;
struct sNode* __result_obj__509;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_923=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2780, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_924=info->p;
            sline_925=info->sline;
            err_flag_926=(_Bool)0;
            label_927=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj287=label_927,
                label_927=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj287 = come_decrement_ref_count(__dec_obj287, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_926=(_Bool)1;
            }
            if(            err_flag_926==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj288=label_927,
                label_927=((void*)0);
                __dec_obj288 = come_decrement_ref_count(__dec_obj288, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_924;
                info->sline=sline_925;
            }
            no_comma_928=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_929=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_930=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj289=node_930,
            node_930=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_930),info));
            (__dec_obj289 ? __dec_obj289 = come_decrement_ref_count(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_928;
            info->in_fun_param=in_fun_param_929;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_923,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2823, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_927),(struct sNode*)come_increment_ref_count(node_930))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_927 = come_decrement_ref_count(label_927, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_930) ? node_930 = come_decrement_ref_count(node_930, ((struct sNode*)node_930)->finalize, ((struct sNode*)node_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_927 = come_decrement_ref_count(label_927, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_930) ? node_930 = come_decrement_ref_count(node_930, ((struct sNode*)node_930)->finalize, ((struct sNode*)node_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2841, "struct sNode");
        _inf_obj_value22=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1062=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2841, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_923,info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sLambdaCall_finalize;
        _inf_value22->clone=(void*)sLambdaCall_clone;
        _inf_value22->compile=(void*)sLambdaCall_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sLambdaCall_kind;
        __result_obj__508 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1067=_inf_value22)));
        /*c*/ come_call_finalizer3(params_923,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value1062,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value1067) ? __right_value1067 = come_decrement_ref_count(__right_value1067, ((struct sNode*)__right_value1067)->finalize, ((struct sNode*)__right_value1067)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__508) ? __result_obj__508 = come_decrement_ref_count(__result_obj__508, ((struct sNode*)__result_obj__508)->finalize, ((struct sNode*)__result_obj__508)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__508;
        /*c*/ come_call_finalizer3(params_923,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__509 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__509) ? __result_obj__509 = come_decrement_ref_count(__result_obj__509, ((struct sNode*)__result_obj__509)->finalize, ((struct sNode*)__result_obj__509)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__509;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__506;
void* __right_value1063 = (void*)0;
struct sLambdaCall* result_931;
void* __right_value1064 = (void*)0;
char* __dec_obj290;
void* __right_value1065 = (void*)0;
struct sNode* __dec_obj291;
void* __right_value1066 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj292;
struct sLambdaCall* __result_obj__507;
    if(    self==(void*)0) {
        __result_obj__506 = (void*)0;
        return __result_obj__506;
    }
    result_931=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_931->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj290=result_931->sname,
        result_931->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj290 = come_decrement_ref_count(__dec_obj290, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_931->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj291=result_931->node,
        result_931->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj291 ? __dec_obj291 = come_decrement_ref_count(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj292=result_931->params,
        result_931->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj292,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__507 = result_931;
    /*c*/ come_call_finalizer3(result_931,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__507;
}

