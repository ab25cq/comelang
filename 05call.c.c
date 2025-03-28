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
    _Bool in_method_block;
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
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
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info, _Bool skip_exception);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX951, unsigned long  int anonymous_var_nameX952, int anonymous_var_nameX953);
int ppoll(struct pollfd* anonymous_var_nameX954, unsigned long  int anonymous_var_nameX955, const struct timespec* anonymous_var_nameX956, const struct __sigset_t* anonymous_var_nameX957);
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
static void sBlock_finalize(struct sBlock* self);
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
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
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
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1111, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1121, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1131, "struct list_item$1char$*"))));
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
    while(it_125!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1111, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1121, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1131, "struct list_item$1char$p*"))));
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
    while(it_131!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1111, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1121, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1131, "struct list_item$1short$*"))));
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
    while(it_137!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1111, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1121, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1131, "struct list_item$1int$*"))));
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
    while(it_143!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1111, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1121, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1131, "struct list_item$1long$*"))));
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
    while(it_149!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1111, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1121, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1131, "struct list_item$1float$*"))));
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
    while(it_155!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1111, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1121, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1131, "struct list_item$1double$*"))));
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
    while(it_161!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
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
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1111, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1121, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1131, "struct list_item$1char$ph*"))));
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

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value187 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value188 = (void*)0;
char* __dec_obj17;
struct sReturnNode* __result_obj__163;
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value187,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj17=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__163 = (struct sReturnNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__163,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__163;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value189 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string("sReturnNode"))));
    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__164;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_239;
void* __right_value228 = (void*)0;
struct sType* result_type_240;
void* __right_value229 = (void*)0;
struct sType* result_type2_268;
struct sType* result_type3_269;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
_Bool _if_conditional1;
void* __right_value232 = (void*)0;
struct sNode* __dec_obj42;
_Bool Value_270;
_Bool __result_obj__180;
void* __right_value233 = (void*)0;
struct CVALUE* come_value_271;
void* __right_value234 = (void*)0;
struct sType* come_value_type_272;
void* __right_value235 = (void*)0;
struct sType* __dec_obj43;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_274=0;
char* Err_275=0;
_Bool _if_conditional2;
_Bool __result_obj__181;
void* __right_value240 = (void*)0;
char* type_name_276;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __if_result__0_277 = (void*)0;
struct list$1sVar$ph* o2_saved_278;
struct sVar* it_281;
void* __right_value247 = (void*)0;
struct list$1sVar$ph* __dec_obj44;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sFun* come_fun_288;
void* __if_result__1_289 = (void*)0;
struct list$1sVar$ph* o2_saved_290;
struct sVar* it_291;
void* __right_value253 = (void*)0;
struct list$1sVar$ph* __dec_obj45;
void* __right_value254 = (void*)0;
    if(    self->value) {
        come_fun_239=info->come_fun;
        result_type_240=(struct sType*)come_increment_ref_count(sType_clone(come_fun_239->mResultType));
        result_type2_268=(struct sType*)come_increment_ref_count(solve_generics(result_type_240,info->generics_type,info,(_Bool)0));
        result_type3_269=result_type2_268->mNoSolvedGenericsType;
        if(        result_type2_268->mNoSolvedGenericsType) {
            result_type3_269=result_type2_268->mNoSolvedGenericsType;
        }
        else {
            result_type3_269=result_type2_268;
        }
        if(        result_type_240->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value231=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj42=self->value,
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
        }
        Value_270=node_compile(self->value,info);
        if(        !Value_270) {
            __result_obj__180 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__180;
        }
        else {
        }
        come_value_271=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_272=(struct sType*)come_increment_ref_count(solve_generics(come_value_271->type,info->generics_type,info,(_Bool)0));
        __dec_obj43=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_271->type));
        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_271->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_239->mBlock,info,come_value_271->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_271->c_value);
        }
        else {
            static int result_num_273=0;
            result_num_273++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value238=make_define_var(result_type2_268,((char*)(__right_value237=xsprintf("__result_obj__\%s",((char*)(__right_value236=int_to_string(result_num_273)))))),(_Bool)0,info))));
            (__right_value236 = come_decrement_ref_count(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_268->mClass->mName)>strlen("tuple")&&memcmp(result_type2_268->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value239=check_assign_type("result type",result_type2_268,come_value_type_272,come_value_271,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_274=multiple_assign_var1->v1;
                    Err_275=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_275)),                    /*c*/ come_call_finalizer3(__right_value239,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional2) {
                        __result_obj__181 = (_Bool)1;
                        (Err_275 = come_decrement_ref_count(Err_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_value_271,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_value_type_272,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__181;
                    }
                    else {
                    }
                    (Err_275 = come_decrement_ref_count(Err_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                result_type2_268->mHeap) {
                    type_name_276=(char*)come_increment_ref_count(make_type_name_string(come_value_271->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value242=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value241=int_to_string(result_num_273)))))),type_name_276,come_value_271->c_value);
                    (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_276 = come_decrement_ref_count(type_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value244=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value243=int_to_string(result_num_273)))))),come_value_271->c_value);
                    (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value246=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value245=int_to_string(result_num_273)))))),come_value_271->c_value);
                (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_239->mBlock,info,come_value_271->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_278=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_281=list$1sVar$ph_begin((o2_saved_278));                    !list$1sVar$ph_end((o2_saved_278));                    it_281=list$1sVar$ph_next((o2_saved_278))                    ){
                        free_object(((struct sType*)(__right_value247=sType_clone(it_281->mType))),it_281->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value247,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_278,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __dec_obj44=info->match_it_var,
                    __if_result__0_277=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    /*b*/ come_call_finalizer3(__dec_obj44,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                /*c*/ come_call_finalizer3(__if_result__0_277,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value248=xsprintf("come_heap_final();\n"))));
                (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_268->mHeap) {
                free_object(result_type2_268,((char*)(__right_value250=xsprintf("__result_obj__\%s",((char*)(__right_value249=int_to_string(result_num_273)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value252=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value251=int_to_string(result_num_273)))))));
            (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(result_type_240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_271,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_type_272,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_fun_288=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_288->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_290=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_291=list$1sVar$ph_begin((o2_saved_290));                !list$1sVar$ph_end((o2_saved_290));                it_291=list$1sVar$ph_next((o2_saved_290))                ){
                    free_object(((struct sType*)(__right_value253=sType_clone(it_291->mType))),it_291->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value253,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_290,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj45=info->match_it_var,
                __if_result__1_289=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                /*b*/ come_call_finalizer3(__dec_obj45,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            /*c*/ come_call_finalizer3(__if_result__1_289,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value254=xsprintf("come_heap_final();\n"))));
            (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sType* __result_obj__165;
void* __right_value190 = (void*)0;
struct sType* result_245;
void* __right_value191 = (void*)0;
struct sType* __dec_obj18;
void* __right_value192 = (void*)0;
struct sType* __dec_obj19;
void* __right_value200 = (void*)0;
struct list$1sType$ph* __dec_obj23;
void* __right_value201 = (void*)0;
struct sType* __dec_obj24;
void* __right_value202 = (void*)0;
struct sType* __dec_obj25;
void* __right_value204 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value205 = (void*)0;
struct sNode* __dec_obj27;
void* __right_value206 = (void*)0;
char* __dec_obj28;
void* __right_value207 = (void*)0;
char* __dec_obj29;
void* __right_value208 = (void*)0;
char* __dec_obj30;
void* __right_value216 = (void*)0;
struct list$1sNode$ph* __dec_obj34;
void* __right_value217 = (void*)0;
char* __dec_obj35;
void* __right_value218 = (void*)0;
struct list$1sType$ph* __dec_obj36;
void* __right_value226 = (void*)0;
struct list$1char$ph* __dec_obj40;
void* __right_value227 = (void*)0;
struct sType* __dec_obj41;
struct sType* __result_obj__179;
    if(    self==(void*)0) {
        __result_obj__165 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__165,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__165;
    }
    result_245=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_245->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj18=result_245->mOriginalLoadVarType,
        result_245->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj19=result_245->mChannelType,
        result_245->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj23=result_245->mGenericsTypes,
        result_245->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj23,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj24=result_245->mNoSolvedGenericsType,
        result_245->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj25=result_245->mAnyOriginalType,
        result_245->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj26=result_245->mSizeNum,
        result_245->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj27=result_245->mAlignas,
        result_245->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj28=result_245->mTupleName,
        result_245->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj29=result_245->mAttribute,
        result_245->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_245->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_245->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_245->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_245->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_245->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_245->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_245->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_245->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_245->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_245->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_245->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_245->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_245->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_245->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_245->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_245->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_245->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_245->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_245->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_245->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_245->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_245->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_245->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj30=result_245->mAsmName,
        result_245->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_245->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_245->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj34=result_245->mArrayNum,
        result_245->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_245->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj35=result_245->mOriginalTypeName,
        result_245->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_245->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_245->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj36=result_245->mParamTypes,
        result_245->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj36,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj40=result_245->mParamNames,
        result_245->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj41=result_245->mResultType,
        result_245->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mVarArgs=self->mVarArgs;
    }
    __result_obj__179 = (struct sType*)come_increment_ref_count(result_245);
    /*c*/ come_call_finalizer3(result_245,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
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
struct list_item$1sType$ph* it_241;
struct list_item$1sType$ph* prev_it_242;
    it_241=self->head;
    while(it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_243;
struct list_item$1sNode$ph* prev_it_244;
    it_243=self->head;
    while(it_243!=((void*)0)) {
        prev_it_244=it_243;
        it_243=it_243->next;
        /*c*/ come_call_finalizer3(prev_it_244,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__166;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct list$1sType$ph* result_246;
struct list_item$1sType$ph* it_247;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct list$1sType$ph* __result_obj__169;
    if(    self==((void*)0)) {
        __result_obj__166 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__166,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__166;
    }
    result_246=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1022, "struct list$1sType$ph*"))));
    it_247=self->head;
    while(it_247!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_246,(struct sType*)come_increment_ref_count(sType_clone(it_247->item)));
        }
        else {
            list$1sType$ph_add(result_246,(struct sType*)come_increment_ref_count(sType_clone(it_247->item)));
        }
        it_247=it_247->next;
    }
    __result_obj__169 = (struct list$1sType$ph*)come_increment_ref_count(result_246);
    /*c*/ come_call_finalizer3(result_246,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__167;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__167 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_248;
struct sType* __dec_obj20;
void* __right_value196 = (void*)0;
struct list_item$1sType$ph* litem_249;
struct sType* __dec_obj21;
void* __right_value197 = (void*)0;
struct list_item$1sType$ph* litem_250;
struct sType* __dec_obj22;
struct list$1sType$ph* __result_obj__168;
    if(    self->len==0) {
        litem_248=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1041, "struct list_item$1sType$ph*"))));
        litem_248->prev=((void*)0);
        litem_248->next=((void*)0);
        __dec_obj20=litem_248->item,
        litem_248->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_248;
        self->head=litem_248;
    }
    else if(    self->len==1) {
        litem_249=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1051, "struct list_item$1sType$ph*"))));
        litem_249->prev=self->head;
        litem_249->next=((void*)0);
        __dec_obj21=litem_249->item,
        litem_249->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_249;
        self->head->next=litem_249;
    }
    else {
        litem_250=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value197=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1061, "struct list_item$1sType$ph*"))));
        litem_250->prev=self->tail;
        litem_250->next=((void*)0);
        __dec_obj22=litem_250->item,
        litem_250->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_250;
        self->tail=litem_250;
    }
    self->len++;
    __result_obj__168 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__168;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_251;
struct list_item$1sType$ph* prev_it_252;
    it_251=self->head;
    while(it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        /*c*/ come_call_finalizer3(prev_it_252,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__170;
void* __right_value203 = (void*)0;
struct sNode* result_253;
struct sNode* __result_obj__171;
    if(    self==(void*)0) {
        __result_obj__170 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__170) ? __result_obj__170 = come_decrement_ref_count(__result_obj__170, ((struct sNode*)__result_obj__170)->finalize, ((struct sNode*)__result_obj__170)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__170;
    }
    result_253=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_253->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_253->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_253->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_253->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_253->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_253->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_253->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_253->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_253->kind=self->kind;
    }
    __result_obj__171 = (struct sNode*)come_increment_ref_count(result_253);
    ((result_253) ? result_253 = come_decrement_ref_count(result_253, ((struct sNode*)result_253)->finalize, ((struct sNode*)result_253)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__171) ? __result_obj__171 = come_decrement_ref_count(__result_obj__171, ((struct sNode*)__result_obj__171)->finalize, ((struct sNode*)__result_obj__171)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__171;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__172;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct list$1sNode$ph* result_254;
struct list_item$1sNode$ph* it_255;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1sNode$ph* __result_obj__175;
    if(    self==((void*)0)) {
        __result_obj__172 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__172,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__172;
    }
    result_254=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_255=self->head;
    while(it_255!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_254,(struct sNode*)come_increment_ref_count(sNode_clone(it_255->item)));
        }
        else {
            list$1sNode$ph_add(result_254,(struct sNode*)come_increment_ref_count(sNode_clone(it_255->item)));
        }
        it_255=it_255->next;
    }
    __result_obj__175 = (struct list$1sNode$ph*)come_increment_ref_count(result_254);
    /*c*/ come_call_finalizer3(result_254,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__173;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__173 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value211 = (void*)0;
struct list_item$1sNode$ph* litem_256;
struct sNode* __dec_obj31;
void* __right_value212 = (void*)0;
struct list_item$1sNode$ph* litem_257;
struct sNode* __dec_obj32;
void* __right_value213 = (void*)0;
struct list_item$1sNode$ph* litem_258;
struct sNode* __dec_obj33;
struct list$1sNode$ph* __result_obj__174;
    if(    self->len==0) {
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value211=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1041, "struct list_item$1sNode$ph*"))));
        litem_256->prev=((void*)0);
        litem_256->next=((void*)0);
        __dec_obj31=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_256;
        self->head=litem_256;
    }
    else if(    self->len==1) {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value212=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1051, "struct list_item$1sNode$ph*"))));
        litem_257->prev=self->head;
        litem_257->next=((void*)0);
        __dec_obj32=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_257;
        self->head->next=litem_257;
    }
    else {
        litem_258=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value213=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1061, "struct list_item$1sNode$ph*"))));
        litem_258->prev=self->tail;
        litem_258->next=((void*)0);
        __dec_obj33=litem_258->item,
        litem_258->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_258;
        self->tail=litem_258;
    }
    self->len++;
    __result_obj__174 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__174;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_259;
struct list_item$1sNode$ph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*c*/ come_call_finalizer3(prev_it_260,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__176;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1char$ph* result_261;
struct list_item$1char$ph* it_262;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1char$ph* __result_obj__178;
    if(    self==((void*)0)) {
        __result_obj__176 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__176,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__176;
    }
    result_261=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1022, "struct list$1char$ph*"))));
    it_262=self->head;
    while(it_262!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_261,(char*)come_increment_ref_count((char*)come_memdup(it_262->item, "./comelang.h", 1027, "char*")));
        }
        else {
            list$1char$ph_add(result_261,(char*)come_increment_ref_count((char*)come_memdup(it_262->item, "./comelang.h", 1030, "char*")));
        }
        it_262=it_262->next;
    }
    __result_obj__178 = (struct list$1char$ph*)come_increment_ref_count(result_261);
    /*c*/ come_call_finalizer3(result_261,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__178;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value221 = (void*)0;
struct list_item$1char$ph* litem_263;
char* __dec_obj37;
void* __right_value222 = (void*)0;
struct list_item$1char$ph* litem_264;
char* __dec_obj38;
void* __right_value223 = (void*)0;
struct list_item$1char$ph* litem_265;
char* __dec_obj39;
struct list$1char$ph* __result_obj__177;
    if(    self->len==0) {
        litem_263=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value221=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1041, "struct list_item$1char$ph*"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj37=litem_263->item,
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1) {
        litem_264=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value222=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1051, "struct list_item$1char$ph*"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj38=litem_264->item,
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value223=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1061, "struct list_item$1char$ph*"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        __dec_obj39=litem_265->item,
        litem_265->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result_obj__177 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_266;
struct list_item$1char$ph* prev_it_267;
    it_266=self->head;
    while(it_266!=((void*)0)) {
        prev_it_267=it_266;
        it_266=it_266->next;
        /*c*/ come_call_finalizer3(prev_it_267,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct sVar* result_279;
struct sVar* __result_obj__182;
struct sVar* __result_obj__183;
struct sVar* result_280;
struct sVar* __result_obj__184;
result_279 = (void*)0;
result_280 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_279,0,sizeof(struct sVar*));
        __result_obj__182 = result_279;
        return __result_obj__182;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__183 = self->it->item;
        return __result_obj__183;
    }
    memset(&result_280,0,sizeof(struct sVar*));
    __result_obj__184 = result_280;
    return __result_obj__184;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_282;
struct sVar* __result_obj__185;
struct sVar* __result_obj__186;
struct sVar* result_283;
struct sVar* __result_obj__187;
result_282 = (void*)0;
result_283 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_282,0,sizeof(struct sVar*));
        __result_obj__185 = result_282;
        return __result_obj__185;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__186 = self->it->item;
        return __result_obj__186;
    }
    memset(&result_283,0,sizeof(struct sVar*));
    __result_obj__187 = result_283;
    return __result_obj__187;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_284;
struct list_item$1sVar$ph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        /*c*/ come_call_finalizer3(prev_it_285,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sVar$ph* it_286;
struct list_item$1sVar$ph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        /*c*/ come_call_finalizer3(prev_it_287,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value255 = (void*)0;
char* __dec_obj46;
struct sOutputNode* __result_obj__188;
    ((struct sNodeBase*)(__right_value255=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value255,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj46=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__188 = (struct sOutputNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__188,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value256 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value256=__builtin_string("sOutputNode"))));
    (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__189;
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
void* __right_value257 = (void*)0;
char* __dec_obj47;
struct list$1sNode$ph* __dec_obj48;
struct sInlineAssembler* __result_obj__190;
    ((struct sNodeBase*)(__right_value257=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value257,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj47=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    /*b*/ come_call_finalizer3(__dec_obj48,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__190 = (struct sInlineAssembler*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value258 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value258=__builtin_string("sInlineAssembler"))));
    (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__191;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_292;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct CVALUE* come_value_293;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct buffer* buf_294;
char* p_295;
_Bool dquort_296;
int num_exp_297;
void* __right_value263 = (void*)0;
struct sNode* node_298;
_Bool Value_305;
_Bool __result_obj__196;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
char* __dec_obj49;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__198;
    source_292=(char*)come_increment_ref_count(self->source);
    come_value_293=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 189, "struct CVALUE*"))));
    buf_294=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 191, "struct buffer*"))));
    p_295=source_292;
    while(*p_295!=40) {
        buffer_append_char(buf_294,*p_295);
        p_295++;
    }
    if(    *p_295==40) {
        buffer_append_char(buf_294,*p_295);
        p_295++;
        while(*p_295==32||*p_295==9||*p_295==10) {
            buffer_append_char(buf_294,*p_295);
            p_295++;
        }
    }
    dquort_296=(_Bool)0;
    num_exp_297=0;
    while(*p_295) {
        if(        *p_295==34) {
            buffer_append_char(buf_294,*p_295);
            p_295++;
            dquort_296=!dquort_296;
        }
        else if(        dquort_296) {
            buffer_append_char(buf_294,*p_295);
            p_295++;
        }
        else if(        *p_295==40) {
            buffer_append_char(buf_294,*p_295);
            p_295++;
            node_298=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_297++));
            Value_305=node_compile(node_298,info);
            if(            !Value_305) {
                __result_obj__196 = (_Bool)0;
                ((node_298) ? node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_292 = come_decrement_ref_count(source_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_294,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__196;
            }
            else {
            }
            come_value_306=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_294,come_value_306->c_value);
            if(            *p_295==41) {
                buffer_append_char(buf_294,*p_295);
                p_295++;
            }
            ((node_298) ? node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_294,*p_295);
            p_295++;
        }
    }
    __dec_obj49=come_value_293->c_value,
    come_value_293->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value266=buffer_to_string(buf_294)))));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj50=come_value_293->type,
    come_value_293->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 248, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_293->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_293));
    add_come_last_code(info,"%s",come_value_293->c_value);
    __result_obj__198 = (_Bool)1;
    (source_292 = come_decrement_ref_count(source_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_294,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
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
struct list_item$1sNode$ph* it_299;
int i_300;
struct sNode* __result_obj__192;
struct sNode* default_value_301;
struct sNode* __result_obj__193;
default_value_301 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_299=self->head;
    i_300=0;
    while(it_299!=((void*)0)) {
        if(        position==i_300) {
            __result_obj__192 = (struct sNode*)come_increment_ref_count(it_299->item);
            ((__result_obj__192) ? __result_obj__192 = come_decrement_ref_count(__result_obj__192, ((struct sNode*)__result_obj__192)->finalize, ((struct sNode*)__result_obj__192)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__192;
        }
        it_299=it_299->next;
        i_300++;
    }
    memset(&default_value_301,0,sizeof(struct sNode*));
    __result_obj__193 = (struct sNode*)come_increment_ref_count(default_value_301);
    ((default_value_301) ? default_value_301 = come_decrement_ref_count(default_value_301, ((struct sNode*)default_value_301)->finalize, ((struct sNode*)default_value_301)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__193) ? __result_obj__193 = come_decrement_ref_count(__result_obj__193, ((struct sNode*)__result_obj__193)->finalize, ((struct sNode*)__result_obj__193)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__193;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_302;
int i_303;
struct sNode* __result_obj__194;
struct sNode* default_value_304;
struct sNode* __result_obj__195;
default_value_304 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_302=self->head;
    i_303=0;
    while(it_302!=((void*)0)) {
        if(        position==i_303) {
            __result_obj__194 = (struct sNode*)come_increment_ref_count(it_302->item);
            ((__result_obj__194) ? __result_obj__194 = come_decrement_ref_count(__result_obj__194, ((struct sNode*)__result_obj__194)->finalize, ((struct sNode*)__result_obj__194)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__194;
        }
        it_302=it_302->next;
        i_303++;
    }
    memset(&default_value_304,0,sizeof(struct sNode*));
    __result_obj__195 = (struct sNode*)come_increment_ref_count(default_value_304);
    ((default_value_304) ? default_value_304 = come_decrement_ref_count(default_value_304, ((struct sNode*)default_value_304)->finalize, ((struct sNode*)default_value_304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__195) ? __result_obj__195 = come_decrement_ref_count(__result_obj__195, ((struct sNode*)__result_obj__195)->finalize, ((struct sNode*)__result_obj__195)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__195;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value271 = (void*)0;
struct list_item$1CVALUE$ph* litem_307;
struct CVALUE* __dec_obj51;
void* __right_value272 = (void*)0;
struct list_item$1CVALUE$ph* litem_308;
struct CVALUE* __dec_obj52;
void* __right_value273 = (void*)0;
struct list_item$1CVALUE$ph* litem_309;
struct CVALUE* __dec_obj53;
struct list$1CVALUE$ph* __result_obj__197;
    if(    self->len==0) {
        litem_307=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value271=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1111, "struct list_item$1CVALUE$ph*"))));
        litem_307->prev=((void*)0);
        litem_307->next=((void*)0);
        __dec_obj51=litem_307->item,
        litem_307->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_307;
        self->head=litem_307;
    }
    else if(    self->len==1) {
        litem_308=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value272=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1121, "struct list_item$1CVALUE$ph*"))));
        litem_308->prev=self->head;
        litem_308->next=((void*)0);
        __dec_obj52=litem_308->item,
        litem_308->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_308;
        self->head->next=litem_308;
    }
    else {
        litem_309=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value273=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1131, "struct list_item$1CVALUE$ph*"))));
        litem_309->prev=self->tail;
        litem_309->next=((void*)0);
        __dec_obj53=litem_309->item,
        litem_309->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_309;
        self->tail=litem_309;
    }
    self->len++;
    __result_obj__197 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value274 = (void*)0;
struct sCurrentNode2* __result_obj__199;
    ((struct sNodeBase*)(__right_value274=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value274,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__199 = (struct sCurrentNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value275 = (void*)0;
char* __result_obj__200;
    __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value275=__builtin_string(self->sname))));
    (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__200;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value276 = (void*)0;
char* __result_obj__201;
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value276=__builtin_string("sCurrentNode"))));
    (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__201;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value277 = (void*)0;
char* class_name_310;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sClass* current_stack_311;
struct sVarTable* vtable_312;
struct map$2char$phsVar$ph* o2_saved_313;
char* it_316;
char* key_319;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sVar* value_320;
void* __right_value283 = (void*)0;
struct sType* type2_327;
void* __right_value284 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct tuple2$2char$phsType$ph* item_328;
void* __right_value290 = (void*)0;
struct sType* type3_339;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct tuple2$2char$phsType$ph* item2_342;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_391;
char* it_392;
char* key_393;
void* __right_value304 = (void*)0;
struct sVar* value_394;
void* __right_value305 = (void*)0;
struct sType* type2_395;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct tuple2$2char$phsType$ph* item_396;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value310 = (void*)0;
char* __dec_obj61;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__242;
    info->current_stack_num++;
    class_name_310=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_311=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 432, "struct sClass*")),(char*)come_increment_ref_count(class_name_310),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_312=info->lv_table;
    while(vtable_312) {
        for(        o2_saved_313=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_312->mVars)),it_316=map$2char$phsVar$ph_begin((o2_saved_313));        !map$2char$phsVar$ph_end((o2_saved_313));        it_316=map$2char$phsVar$ph_next((o2_saved_313))        ){
            key_319=it_316;
            value_320=((struct sVar*)(__right_value282=map$2char$phsVar$ph_operator_load_element(vtable_312->mVars,((char*)(__right_value281=__builtin_string(key_319))))));
            (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value282,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_327=(struct sType*)come_increment_ref_count(sType_clone(value_320->mType));
            type2_327->mPointerNum++;
            item_328=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 445, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_320->mCValueName)),(struct sType*)come_increment_ref_count(type2_327)));
            if(            value_320->mCValueName!=((void*)0)) {
                if(                strcmp(value_320->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_320->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_320->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_320->mType->mClass->mName,"va_list")||string_operator_equals(value_320->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_327->mArrayNum)==1) {
                    type3_339=(struct sType*)come_increment_ref_count(sType_clone(type2_327));
                    list$1sNode$ph_reset(type3_339->mArrayNum);
                    type3_339->mPointerNum=1;
                    type3_339->mOriginIsArray=(_Bool)1;
                    item2_342=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 465, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_320->mCValueName)),(struct sType*)come_increment_ref_count(type3_339)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_311->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_342)));
                    value_320->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_342,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_311->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_328)));
                }
            }
            /*c*/ come_call_finalizer3(type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_328,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_313,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_312=vtable_312->mParent;
    }
    output_struct(current_stack_311,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_310),(struct sClass*)come_increment_ref_count(current_stack_311));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_310,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_310);
    vtable_312=info->lv_table;
    while(vtable_312) {
        for(        o2_saved_391=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_312->mVars)),it_392=map$2char$phsVar$ph_begin((o2_saved_391));        !map$2char$phsVar$ph_end((o2_saved_391));        it_392=map$2char$phsVar$ph_next((o2_saved_391))        ){
            key_393=it_392;
            value_394=((struct sVar*)(__right_value304=map$2char$phsVar$ph_operator_load_element(vtable_312->mVars,key_393)));
            /*c*/ come_call_finalizer3(__right_value304,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_395=(struct sType*)come_increment_ref_count(sType_clone(value_394->mType));
            item_396=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 494, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_394->mCValueName),(struct sType*)come_increment_ref_count(type2_395)));
            if(            value_394->mCValueName!=((void*)0)) {
                if(                strcmp(value_394->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_394->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_394->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_394->mType->mClass->mName,"va_list")||string_operator_equals(value_394->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_394->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_395->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_394->mCValueName,value_394->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_394->mCValueName,value_394->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_395->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_394->mCValueName,value_394->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_394->mCValueName,value_394->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_395,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_396,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_391,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_312=vtable_312->mParent;
    }
    come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 533, "struct CVALUE*"))));
    __dec_obj61=come_value_397->c_value,
    come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj62=come_value_397->type,
    come_value_397->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 536, "struct sType*")),(char*)come_increment_ref_count(class_name_310),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_397->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_397->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
    __result_obj__242 = (_Bool)1;
    (class_name_310 = come_decrement_ref_count(class_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_311,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_314;
char* __result_obj__202;
char* __result_obj__203;
char* result_315;
char* __result_obj__204;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(char*));
        __result_obj__202 = result_314;
        return __result_obj__202;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__203 = self->key_list->it->item;
        return __result_obj__203;
    }
    memset(&result_315,0,sizeof(char*));
    __result_obj__204 = result_315;
    return __result_obj__204;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_317;
char* __result_obj__205;
char* __result_obj__206;
char* result_318;
char* __result_obj__207;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_317,0,sizeof(char*));
        __result_obj__205 = result_317;
        return __result_obj__205;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__206 = self->key_list->it->item;
        return __result_obj__206;
    }
    memset(&result_318,0,sizeof(char*));
    __result_obj__207 = result_318;
    return __result_obj__207;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_321;
unsigned int hash_322;
unsigned int it_323;
struct sVar* __result_obj__208;
struct sVar* __result_obj__209;
struct sVar* __result_obj__210;
struct sVar* __result_obj__211;
default_value_321 = (void*)0;
    memset(&default_value_321,0,sizeof(struct sVar*));
    hash_322=string_get_hash_key(((char*)key))%self->size;
    it_323=hash_322;
    while((_Bool)1) {
        if(        self->item_existance[it_323]) {
            if(            string_equals(self->keys[it_323],key)) {
                __result_obj__208 = (struct sVar*)come_increment_ref_count(self->items[it_323]);
                /*c*/ come_call_finalizer3(default_value_321,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__208,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__208;
            }
            it_323++;
            if(            it_323>=self->size) {
                it_323=0;
            }
            else if(            it_323==hash_322) {
                __result_obj__209 = (struct sVar*)come_increment_ref_count(default_value_321);
                /*c*/ come_call_finalizer3(default_value_321,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__209,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__209;
            }
        }
        else {
            __result_obj__210 = (struct sVar*)come_increment_ref_count(default_value_321);
            /*c*/ come_call_finalizer3(default_value_321,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__210,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__210;
        }
    }
    __result_obj__211 = (struct sVar*)come_increment_ref_count(default_value_321);
    /*c*/ come_call_finalizer3(default_value_321,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_324;
unsigned int hash_325;
unsigned int it_326;
struct sVar* __result_obj__212;
struct sVar* __result_obj__213;
struct sVar* __result_obj__214;
struct sVar* __result_obj__215;
default_value_324 = (void*)0;
    memset(&default_value_324,0,sizeof(struct sVar*));
    hash_325=string_get_hash_key(((char*)key))%self->size;
    it_326=hash_325;
    while((_Bool)1) {
        if(        self->item_existance[it_326]) {
            if(            string_equals(self->keys[it_326],key)) {
                __result_obj__212 = (struct sVar*)come_increment_ref_count(self->items[it_326]);
                /*c*/ come_call_finalizer3(default_value_324,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__212,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__212;
            }
            it_326++;
            if(            it_326>=self->size) {
                it_326=0;
            }
            else if(            it_326==hash_325) {
                __result_obj__213 = (struct sVar*)come_increment_ref_count(default_value_324);
                /*c*/ come_call_finalizer3(default_value_324,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__213,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__213;
            }
        }
        else {
            __result_obj__214 = (struct sVar*)come_increment_ref_count(default_value_324);
            /*c*/ come_call_finalizer3(default_value_324,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__214,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__214;
        }
    }
    __result_obj__215 = (struct sVar*)come_increment_ref_count(default_value_324);
    /*c*/ come_call_finalizer3(default_value_324,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
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
struct tuple2$2char$phsType$ph* __result_obj__216;
void* __right_value285 = (void*)0;
struct tuple2$2char$phsType$ph* result_329;
void* __right_value286 = (void*)0;
char* __dec_obj54;
void* __right_value287 = (void*)0;
struct sType* __dec_obj55;
struct tuple2$2char$phsType$ph* __result_obj__217;
    if(    self==(void*)0) {
        __result_obj__216 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__216,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__216;
    }
    result_329=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_329->v1,
        result_329->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_329->v2,
        result_329->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__217 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_329);
    /*c*/ come_call_finalizer3(result_329,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_330;
    result_330=0;
    result_330+=int_get_hash_key(((int)self->v1));
    result_330+=int_get_hash_key(((int)self->v2));
    return result_330;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_331;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(it_331!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_331->item,it2_332->item)) {
            return (_Bool)0;
        }
        it_331=it_331->next;
        it2_332=it2_332->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_333;
struct list_item$1sType$ph* it2_334;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_333=left->head;
    it2_334=right->head;
    while(it_333!=((void*)0)) {
        if(        !sType_equals(it_333->item,it2_334->item)) {
            return (_Bool)0;
        }
        it_333=it_333->next;
        it2_334=it2_334->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_335;
struct list_item$1sNode$ph* it2_336;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_335=left->head;
    it2_336=right->head;
    while(it_335!=((void*)0)) {
        if(        !sNode_equals(it_335->item,it2_336->item)) {
            return (_Bool)0;
        }
        it_335=it_335->next;
        it2_336=it2_336->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_337;
struct list_item$1char$ph* it2_338;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_337=left->head;
    it2_338=right->head;
    while(it_337!=((void*)0)) {
        if(        !string_equals(it_337->item,it2_338->item)) {
            return (_Bool)0;
        }
        it_337=it_337->next;
        it2_338=it2_338->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj56;
struct sType* __dec_obj57;
struct tuple2$2char$phsType$ph* __result_obj__218;
    __dec_obj56=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__218 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
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
struct list_item$1sNode$ph* it_340;
struct list_item$1sNode$ph* prev_it_341;
struct list$1sNode$ph* __result_obj__219;
    it_340=self->head;
    while(it_340!=((void*)0)) {
        prev_it_341=it_340;
        it_340=it_340->next;
        /*c*/ come_call_finalizer3(prev_it_341,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__219 = self;
    return __result_obj__219;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value294 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_343;
struct tuple2$2char$phsType$ph* __dec_obj58;
void* __right_value295 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_344;
struct tuple2$2char$phsType$ph* __dec_obj59;
void* __right_value296 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_345;
struct tuple2$2char$phsType$ph* __dec_obj60;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__220;
    if(    self->len==0) {
        litem_343=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value294=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1111, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_343->prev=((void*)0);
        litem_343->next=((void*)0);
        __dec_obj58=litem_343->item,
        litem_343->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_343;
        self->head=litem_343;
    }
    else if(    self->len==1) {
        litem_344=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value295=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1121, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_344->prev=self->head;
        litem_344->next=((void*)0);
        __dec_obj59=litem_344->item,
        litem_344->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_344;
        self->head->next=litem_344;
    }
    else {
        litem_345=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value296=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1131, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_345->prev=self->tail;
        litem_345->next=((void*)0);
        __dec_obj60=litem_345->item,
        litem_345->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_345;
        self->tail=litem_345;
    }
    self->len++;
    __result_obj__220 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_346;
int i_347;
    for(    i_346=0;    i_346<self->size;    i_346++    ){
        if(        self->item_existance[i_346]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_346],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_347=0;    i_347<self->size;    i_347++    ){
        if(        self->item_existance[i_347]) {
            if(            1) {
                (self->keys[i_347] = come_decrement_ref_count(self->keys[i_347], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_367;
unsigned int it_368;
_Bool same_key_exist_385;
char* it2_388;
struct map$2char$phsClass$ph* __result_obj__241;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_367=string_get_hash_key(((char*)key))%self->size;
    it_368=hash_367;
    while((_Bool)1) {
        if(        self->item_existance[it_368]) {
            if(            string_equals(self->keys[it_368],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_368]);
                    (self->keys[it_368] = come_decrement_ref_count(self->keys[it_368], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_368]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_368]);
                    self->keys[it_368]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_368],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_368]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_368]=item;
                }
                break;
            }
            it_368++;
            if(            it_368>=self->size) {
                it_368=0;
            }
            else if(            it_368==hash_367) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_368]=(_Bool)1;
            if(            1) {
                self->keys[it_368]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_368]=key;
            }
            if(            1) {
                self->items[it_368]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_368]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_385=(_Bool)0;
    for(    it2_388=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_388=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_388,key)) {
            same_key_exist_385=(_Bool)1;
        }
    }
    if(    !same_key_exist_385) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__241 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_348;
void* __right_value299 = (void*)0;
char** keys_349;
void* __right_value300 = (void*)0;
struct sClass** items_350;
void* __right_value301 = (void*)0;
_Bool* item_existance_351;
int len_352;
char* it_355;
struct sClass* default_value_358;
void* __right_value302 = (void*)0;
struct sClass* it2_359;
unsigned int hash_364;
int n_365;
struct sClass* default_value_366;
void* __right_value303 = (void*)0;
default_value_358 = (void*)0;
default_value_366 = (void*)0;
    size_348=self->size*10;
    keys_349=(char**)come_increment_ref_count(((char**)(__right_value299=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_348)), "./comelang.h", 2165, "char**"))));
    items_350=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value300=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_348)), "./comelang.h", 2166, "struct sClass**"))));
    item_existance_351=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value301=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_348)), "./comelang.h", 2167, "_Bool*"))));
    len_352=0;
    for(    it_355=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_355=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_358,0,sizeof(struct sClass*));
        it2_359=((struct sClass*)(__right_value302=map$2char$phsClass$ph_at(self,it_355,(struct sClass*)come_increment_ref_count(default_value_358))));
        /*c*/ come_call_finalizer3(__right_value302,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_364=string_get_hash_key(((char*)it_355))%size_348;
        n_365=hash_364;
        while((_Bool)1) {
            if(            item_existance_351[n_365]) {
                n_365++;
                if(                n_365>=size_348) {
                    n_365=0;
                }
                else if(                n_365==hash_364) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_351[n_365]=(_Bool)1;
                keys_349[n_365]=it_355;
                items_350[n_365]=((struct sClass*)(__right_value303=map$2char$phsClass$ph_at(self,it_355,(struct sClass*)come_increment_ref_count(default_value_366))));
                /*c*/ come_call_finalizer3(__right_value303,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_352++;
                /*c*/ come_call_finalizer3(default_value_366,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_366,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_358,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_349;
    self->items=items_350;
    self->item_existance=item_existance_351;
    self->size=size_348;
    self->len=len_352;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_353;
char* __result_obj__221;
char* __result_obj__222;
char* result_354;
char* __result_obj__223;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result_obj__221 = result_353;
        return __result_obj__221;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__222 = self->key_list->it->item;
        return __result_obj__222;
    }
    memset(&result_354,0,sizeof(char*));
    __result_obj__223 = result_354;
    return __result_obj__223;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_356;
char* __result_obj__224;
char* __result_obj__225;
char* result_357;
char* __result_obj__226;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result_obj__224 = result_356;
        return __result_obj__224;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__225 = self->key_list->it->item;
        return __result_obj__225;
    }
    memset(&result_357,0,sizeof(char*));
    __result_obj__226 = result_357;
    return __result_obj__226;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_360;
unsigned int it_361;
struct sClass* __result_obj__227;
struct sClass* __result_obj__228;
struct sClass* __result_obj__229;
struct sClass* __result_obj__230;
    hash_360=string_get_hash_key(((char*)key))%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            string_equals(self->keys[it_361],key)) {
                __result_obj__227 = (struct sClass*)come_increment_ref_count(self->items[it_361]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__227,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__227;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                __result_obj__228 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__228,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
        }
        else {
            __result_obj__229 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__229,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__229;
        }
    }
    __result_obj__230 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__230,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__230;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_362;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_363;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        prev_it_363=it_362;
        it_362=it_362->next;
        /*c*/ come_call_finalizer3(prev_it_363,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_369;
struct list_item$1char$ph* it_370;
struct list$1char$ph* __result_obj__234;
    it2_369=0;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        if(        string_equals(it_370->item,item)) {
            list$1char$ph_delete(self,it2_369,it2_369+1);
            break;
        }
        it2_369++;
        it_370=it_370->next;
    }
    __result_obj__234 = self;
    return __result_obj__234;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_371;
struct list$1char$ph* __result_obj__231;
struct list_item$1char$ph* it_374;
int i_375;
struct list_item$1char$ph* prev_it_376;
struct list_item$1char$ph* it_377;
int i_378;
struct list_item$1char$ph* prev_it_379;
struct list_item$1char$ph* it_380;
struct list_item$1char$ph* head_prev_it_381;
struct list_item$1char$ph* tail_it_382;
int i_383;
struct list_item$1char$ph* prev_it_384;
struct list$1char$ph* __result_obj__233;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_371=tail;
        tail=head;
        head=tmp_371;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__231 = self;
        return __result_obj__231;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_374=self->head;
        i_375=0;
        while(it_374!=((void*)0)) {
            if(            i_375<tail) {
                prev_it_376=it_374;
                it_374=it_374->next;
                i_375++;
                /*c*/ come_call_finalizer3(prev_it_376,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_375==tail) {
                self->head=it_374;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_374=it_374->next;
                i_375++;
            }
        }
    }
    else if(    tail==self->len) {
        it_377=self->head;
        i_378=0;
        while(it_377!=((void*)0)) {
            if(            i_378==head) {
                self->tail=it_377->prev;
                self->tail->next=((void*)0);
            }
            if(            i_378>=head) {
                prev_it_379=it_377;
                it_377=it_377->next;
                i_378++;
                /*c*/ come_call_finalizer3(prev_it_379,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_377=it_377->next;
                i_378++;
            }
        }
    }
    else {
        it_380=self->head;
        head_prev_it_381=((void*)0);
        tail_it_382=((void*)0);
        i_383=0;
        while(it_380!=((void*)0)) {
            if(            i_383==head) {
                head_prev_it_381=it_380->prev;
            }
            if(            i_383==tail) {
                tail_it_382=it_380;
            }
            if(            i_383>=head&&i_383<tail) {
                prev_it_384=it_380;
                it_380=it_380->next;
                i_383++;
                /*c*/ come_call_finalizer3(prev_it_384,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_380=it_380->next;
                i_383++;
            }
        }
        if(        head_prev_it_381!=((void*)0)) {
            head_prev_it_381->next=tail_it_382;
        }
        if(        tail_it_382!=((void*)0)) {
            tail_it_382->prev=head_prev_it_381;
        }
    }
    __result_obj__233 = self;
    return __result_obj__233;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_372;
struct list_item$1char$ph* prev_it_373;
struct list$1char$ph* __result_obj__232;
    it_372=self->head;
    while(it_372!=((void*)0)) {
        prev_it_373=it_372;
        it_372=it_372->next;
        /*c*/ come_call_finalizer3(prev_it_373,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__232 = self;
    return __result_obj__232;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_386;
char* __result_obj__235;
char* __result_obj__236;
char* result_387;
char* __result_obj__237;
result_386 = (void*)0;
result_387 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_386,0,sizeof(char*));
        __result_obj__235 = result_386;
        return __result_obj__235;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__236 = self->it->item;
        return __result_obj__236;
    }
    memset(&result_387,0,sizeof(char*));
    __result_obj__237 = result_387;
    return __result_obj__237;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_389;
char* __result_obj__238;
char* __result_obj__239;
char* result_390;
char* __result_obj__240;
result_389 = (void*)0;
result_390 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_389,0,sizeof(char*));
        __result_obj__238 = result_389;
        return __result_obj__238;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__239 = self->it->item;
        return __result_obj__239;
    }
    memset(&result_390,0,sizeof(char*));
    __result_obj__240 = result_390;
    return __result_obj__240;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value313 = (void*)0;
struct sLineNode* __result_obj__243;
    ((struct sNodeBase*)(__right_value313=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value313,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__243 = (struct sLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value314 = (void*)0;
char* __result_obj__244;
    __result_obj__244 = (char*)come_increment_ref_count(((char*)(__right_value314=__builtin_string("sLineNode"))));
    (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value317 = (void*)0;
char* __dec_obj63;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__245;
    come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 278, "struct CVALUE*"))));
    __dec_obj63=come_value_398->c_value,
    come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj64=come_value_398->type,
    come_value_398->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 281, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_398->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
    add_come_last_code(info,"%s",come_value_398->c_value);
    __result_obj__245 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_398,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value321 = (void*)0;
struct sSNameNode* __result_obj__246;
    ((struct sNodeBase*)(__right_value321=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value321,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__246 = (struct sSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value322 = (void*)0;
char* __result_obj__247;
    __result_obj__247 = (char*)come_increment_ref_count(((char*)(__right_value322=__builtin_string("sSNameNode"))));
    (__right_value322 = come_decrement_ref_count(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__247;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_399;
void* __right_value325 = (void*)0;
char* __dec_obj65;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__248;
    come_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 306, "struct CVALUE*"))));
    __dec_obj65=come_value_399->c_value,
    come_value_399->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj66=come_value_399->type,
    come_value_399->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 309, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_399->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_399));
    add_come_last_code(info,"%s",come_value_399->c_value);
    __result_obj__248 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_399,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value329 = (void*)0;
struct sFuncNode* __result_obj__249;
    ((struct sNodeBase*)(__right_value329=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value329,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__249 = (struct sFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value330 = (void*)0;
char* __result_obj__250;
    __result_obj__250 = (char*)come_increment_ref_count(((char*)(__right_value330=__builtin_string("sFuncNode"))));
    (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__250 = come_decrement_ref_count(__result_obj__250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__250;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value333 = (void*)0;
char* __dec_obj67;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__251;
    come_value_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 334, "struct CVALUE*"))));
    __dec_obj67=come_value_400->c_value,
    come_value_400->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj68=come_value_400->type,
    come_value_400->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 337, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_400->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_400));
    add_come_last_code(info,"%s",come_value_400->c_value);
    __result_obj__251 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value337 = (void*)0;
struct sWildCard* __result_obj__252;
    ((struct sNodeBase*)(__right_value337=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value337,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__252 = (struct sWildCard*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__252,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value338 = (void*)0;
char* __result_obj__253;
    __result_obj__253 = (char*)come_increment_ref_count(((char*)(__right_value338=__builtin_string("sWildCard"))));
    (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__253 = come_decrement_ref_count(__result_obj__253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* value_node_401;
_Bool Value_402;
_Bool __result_obj__254;
_Bool __result_obj__255;
    value_node_401=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value339=xsprintf("Value"))),info));
    (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_402=node_compile(value_node_401,info);
    if(    !Value_402) {
        __result_obj__254 = (_Bool)0;
        ((value_node_401) ? value_node_401 = come_decrement_ref_count(value_node_401, ((struct sNode*)value_node_401)->finalize, ((struct sNode*)value_node_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__254;
    }
    else {
    }
    __result_obj__255 = (_Bool)1;
    ((value_node_401) ? value_node_401 = come_decrement_ref_count(value_node_401, ((struct sNode*)value_node_401)->finalize, ((struct sNode*)value_node_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__255;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value341 = (void*)0;
struct sCallerFuncNode* __result_obj__256;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value341,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__256 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__256,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value342 = (void*)0;
char* __result_obj__257;
    __result_obj__257 = (char*)come_increment_ref_count(((char*)(__right_value342=__builtin_string("sCallerFuncNode"))));
    (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__257 = come_decrement_ref_count(__result_obj__257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__257;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value345 = (void*)0;
char* __dec_obj69;
void* __right_value346 = (void*)0;
char* __dec_obj70;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__258;
    come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 386, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj69=come_value_403->c_value,
        come_value_403->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj70=come_value_403->c_value,
        come_value_403->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj71=come_value_403->type,
    come_value_403->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 394, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_403->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
    add_come_last_code(info,"%s",come_value_403->c_value);
    __result_obj__258 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_403,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
struct sCallerLineNode* __result_obj__259;
    ((struct sNodeBase*)(__right_value350=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value350,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__259 = (struct sCallerLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__259,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value353 = (void*)0;
char* __dec_obj72;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__260;
    come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 415, "struct CVALUE*"))));
    __dec_obj72=come_value_404->c_value,
    come_value_404->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj73=come_value_404->type,
    come_value_404->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 418, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_404->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
    add_come_last_code(info,"%s",come_value_404->c_value);
    __result_obj__260 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value357 = (void*)0;
char* __result_obj__261;
    __result_obj__261 = (char*)come_increment_ref_count(((char*)(__right_value357=__builtin_string("sCallerLineNode"))));
    (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__261 = come_decrement_ref_count(__result_obj__261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__261;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
struct sCallerSNameNode* __result_obj__262;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value358,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__262 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value361 = (void*)0;
char* __dec_obj74;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__263;
    come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 443, "struct CVALUE*"))));
    __dec_obj74=come_value_405->c_value,
    come_value_405->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value_405->type,
    come_value_405->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 446, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_405->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_405));
    add_come_last_code(info,"%s",come_value_405->c_value);
    __result_obj__263 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_405,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value365 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = (char*)come_increment_ref_count(((char*)(__right_value365=__builtin_string("sCallerSNameNode"))));
    (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __dec_obj76;
void* __right_value378 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj82;
struct list$1sType$ph* __dec_obj83;
struct buffer* __dec_obj84;
struct sFunCallNode* __result_obj__271;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value366,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj76=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj82=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj82,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj83=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj83,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj84=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /*b*/ come_call_finalizer3(__dec_obj84,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__271 = (struct sFunCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value379 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = (char*)come_increment_ref_count(((char*)(__right_value379=__builtin_string("sFunCallNode"))));
    (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
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
char* fun_name_416;
struct list$1tuple2$2char$phsNode$ph$ph* params_417;
struct buffer* method_block_418;
int method_block_sline_419;
struct sVar* var__420;
struct sType* lambda_type_421;
void* __right_value380 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_422=0;
char* Err_423=0;
_Bool _if_conditional3;
_Bool __result_obj__273;
void* __right_value381 = (void*)0;
struct sType* result_type_424;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1CVALUE$ph* come_params_425;
void* __right_value384 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_428=0;
char* Err_429=0;
_Bool _if_conditional4;
_Bool __result_obj__275;
int i_430;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_431;
struct tuple2$2char$phsNode$ph* it_434;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_437=0;
struct sNode* node_438=0;
_Bool Value_439;
_Bool __result_obj__282;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_440;
void* __right_value386 = (void*)0;
_Bool _if_conditional5;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_447=0;
char* Err_448=0;
_Bool _if_conditional6;
_Bool __result_obj__287;
void* __right_value392 = (void*)0;
_Bool _if_conditional7;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct buffer* buf_449;
int j_450;
struct list$1CVALUE$ph* o2_saved_451;
struct CVALUE* it_454;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value398 = (void*)0;
char* __dec_obj85;
void* __right_value399 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__294;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sGenericsFun* generics_fun_458;
_Bool method_generics_461;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1sType$ph* method_generics_types_462;
void* __right_value404 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_463=0;
struct sGenericsFun* gfun_464=0;
char* generics_fun_name_465;
void* __right_value405 = (void*)0;
struct sFun* fun_466;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1CVALUE$ph* come_params_469;
void* __right_value408 = (void*)0;
struct sFun* fun_470;
_Bool no_output_come_code_471;
_Bool __result_obj__303;
void* __right_value409 = (void*)0;
struct CVALUE* method_block_node_472;
void* __right_value410 = (void*)0;
struct sType* method_block_lambda_type_479;
void* __right_value411 = (void*)0;
struct sType* method_block_result_type_480;
void* __right_value412 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_481;
struct sType* generics_fun_method_block_result_type_482;
int method_generics_num_483;
void* __right_value416 = (void*)0;
int n_492;
struct list$1sType$ph* o2_saved_493;
struct sType* it_496;
int method_generics_num_499;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct list$1CVALUE$ph* come_params_500;
int i_501;
struct sType* result_type_502;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_503;
struct tuple2$2char$phsNode$ph* it_504;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_505=0;
struct sNode* node_506=0;
_Bool Value_507;
_Bool __result_obj__317;
void* __right_value421 = (void*)0;
struct CVALUE* come_value_508;
int method_generics_num_512;
void* __right_value425 = (void*)0;
int n_513;
struct list$1sType$ph* o2_saved_514;
struct sType* it_515;
int method_generics_num_516;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_519=0;
struct sGenericsFun* gfun_520=0;
char* __dec_obj94;
void* __right_value429 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_521=0;
struct sGenericsFun* gfun_522=0;
char* __dec_obj95;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1CVALUE$ph* come_params_523;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_524;
struct tuple2$2char$phsNode$ph* it_525;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_526=0;
struct sNode* node_527=0;
_Bool Value_528;
_Bool __result_obj__320;
void* __right_value432 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct buffer* buf_530;
int j_531;
struct list$1CVALUE$ph* o2_saved_532;
struct CVALUE* it_533;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_534;
void* __right_value437 = (void*)0;
char* __dec_obj96;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* __dec_obj97;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* __dec_obj98;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* __dec_obj99;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* __dec_obj100;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* __dec_obj101;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* __dec_obj102;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* __dec_obj103;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* __dec_obj104;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* __dec_obj105;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* __dec_obj106;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* __dec_obj107;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __dec_obj108;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj109;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj110;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj111;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __dec_obj112;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj113;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj114;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj115;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj116;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj117;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj118;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj119;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj120;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj121;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj122;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj123;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj124;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj125;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj126;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj127;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj128;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj129;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj130;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj131;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj132;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* __dec_obj133;
_Bool __result_obj__321;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1CVALUE$ph* come_params_535;
int i_536;
struct sType* result_type_537;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_538;
struct tuple2$2char$phsNode$ph* it_539;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_540=0;
struct sNode* node_541=0;
_Bool Value_542;
_Bool __result_obj__322;
void* __right_value542 = (void*)0;
struct CVALUE* come_value_543;
struct sType* __dec_obj134;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct buffer* buf_544;
int j_545;
struct list$1CVALUE$ph* o2_saved_546;
struct CVALUE* it_547;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct CVALUE* come_value_548;
void* __right_value547 = (void*)0;
char* __dec_obj135;
struct sType* __dec_obj136;
_Bool __result_obj__323;
void* __right_value548 = (void*)0;
char* __dec_obj137;
void* __right_value549 = (void*)0;
char* __dec_obj138;
char* p_549;
int version_550;
char* p2_551;
int i_553;
void* __right_value550 = (void*)0;
char* new_fun_name_554;
void* __right_value551 = (void*)0;
_Bool _if_conditional8;
void* __right_value552 = (void*)0;
char* __dec_obj139;
void* __right_value553 = (void*)0;
char* new_fun_name_561;
void* __right_value554 = (void*)0;
_Bool _if_conditional9;
void* __right_value555 = (void*)0;
char* __dec_obj140;
void* __right_value556 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_562=0;
char* Err_563=0;
_Bool _if_conditional10;
_Bool __result_obj__332;
int i_564;
void* __right_value557 = (void*)0;
char* new_fun_name_565;
void* __right_value558 = (void*)0;
_Bool _if_conditional11;
void* __right_value559 = (void*)0;
char* __dec_obj141;
void* __right_value560 = (void*)0;
struct sFun* fun_566;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1CVALUE$ph* come_params_567;
int i_568;
struct sType* result_type_569;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_570;
struct tuple2$2char$phsNode$ph* it_571;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_572=0;
struct sNode* node_573=0;
_Bool Value_574;
_Bool __result_obj__333;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_575;
struct sType* __dec_obj142;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct buffer* buf_576;
int j_577;
struct list$1CVALUE$ph* o2_saved_578;
struct CVALUE* it_579;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_580;
void* __right_value568 = (void*)0;
char* __dec_obj143;
struct sType* __dec_obj144;
_Bool __result_obj__334;
void* __right_value569 = (void*)0;
struct sType* result_type_581;
_Bool in_exception_value_582;
void* __right_value576 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* new_node_583;
_Bool Value_585;
_Bool __result_obj__337;
_Bool __result_obj__338;
_Bool in_exception_value_586;
void* __right_value579 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* new_node_587;
_Bool Value_588;
_Bool __result_obj__339;
_Bool __result_obj__340;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct list$1sType$ph* param_types_589;
struct list$1sType$ph* o2_saved_590;
struct sType* it_591;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sType* it2_592;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* __dec_obj150;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1CVALUE$ph* come_params_593;
int i_594;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_595;
struct tuple2$2char$phsNode$ph* it_596;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_597=0;
struct sNode* node_598=0;
_Bool Value_599;
_Bool __result_obj__341;
void* __right_value590 = (void*)0;
struct CVALUE* come_value_600;
int n_601;
struct list$1char$ph* o2_saved_602;
char* it_603;
void* __right_value591 = (void*)0;
_Bool _if_conditional12;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_604=0;
char* Err_605=0;
_Bool _if_conditional13;
_Bool __result_obj__342;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
_Bool _if_conditional14;
void* __right_value599 = (void*)0;
int i_611;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_612;
struct tuple2$2char$phsNode$ph* it_613;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_614=0;
struct sNode* node_615=0;
_Bool Value_616;
_Bool __result_obj__345;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_617;
void* __right_value601 = (void*)0;
_Bool _if_conditional15;
_Bool Value_618;
_Bool __result_obj__346;
void* __right_value602 = (void*)0;
struct CVALUE* come_value_619;
void* __right_value603 = (void*)0;
_Bool _if_conditional16;
void* __right_value604 = (void*)0;
_Bool _if_conditional17;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_620=0;
char* Err_621=0;
_Bool _if_conditional18;
_Bool __result_obj__347;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
_Bool _if_conditional19;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
_Bool _if_conditional20;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
char* default_param_622;
void* __right_value616 = (void*)0;
char* param_name_629;
void* __right_value617 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_630;
char* p_631;
char* head_632;
int sline_633;
void* __right_value618 = (void*)0;
struct buffer* __dec_obj152;
void* __right_value619 = (void*)0;
struct sNode* node_634;
_Bool Value_635;
_Bool __result_obj__352;
struct buffer* __dec_obj153;
void* __right_value620 = (void*)0;
struct CVALUE* come_value_636;
void* __right_value621 = (void*)0;
_Bool _if_conditional22;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_637=0;
char* Err_638=0;
_Bool _if_conditional23;
_Bool __result_obj__353;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
_Bool _if_conditional24;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
_Bool _if_conditional25;
void* __right_value631 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_639=0;
char* Err_640=0;
_Bool _if_conditional26;
_Bool __result_obj__354;
void* __right_value632 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_641=0;
char* Err_642=0;
_Bool _if_conditional27;
_Bool __result_obj__355;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value637 = (void*)0;
struct sNode* current_stack_frame_node_643;
_Bool Value_645;
_Bool __result_obj__358;
void* __right_value638 = (void*)0;
struct CVALUE* come_value_646;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct buffer* method_block2_647;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sType* method_block_type_648;
void* __right_value643 = (void*)0;
char* class_name_649;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sClass* current_stack_frame_struct_656;
void* __right_value646 = (void*)0;
int num_method_block_657;
void* __right_value647 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_658=0;
char* Err_659=0;
_Bool _if_conditional28;
_Bool __result_obj__367;
void* __right_value648 = (void*)0;
struct sType* result_type_660;
void* __right_value649 = (void*)0;
struct list$1sType$ph* param_types_661;
struct list$1char$ph* param_names_662;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct buffer* all_alhabet_sname_663;
char* p_664;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1sType$ph* o2_saved_665;
struct sType* it_666;
struct sType* param_type_667;
void* __right_value654 = (void*)0;
char* param_name_668;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
char* param_name_669;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* param_name_670;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct buffer* source3_671;
char* p_672;
char* head_673;
int sline_674;
struct buffer* __dec_obj155;
void* __right_value661 = (void*)0;
struct sNode* node_675;
_Bool Value_676;
_Bool __result_obj__368;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
char* method_block_name_677;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct CVALUE* come_value2_678;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sFun* fun2_679;
void* __right_value668 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_680=0;
char* Err_681=0;
_Bool _if_conditional29;
_Bool __result_obj__369;
struct sType* method_block_type2_682;
void* __right_value669 = (void*)0;
char* __dec_obj156;
void* __right_value670 = (void*)0;
struct sType* __dec_obj157;
struct buffer* __dec_obj158;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct buffer* buf_683;
int j_684;
struct list$1CVALUE$ph* o2_saved_685;
struct CVALUE* it_686;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct CVALUE* come_value_687;
void* __right_value675 = (void*)0;
char* __dec_obj159;
void* __right_value676 = (void*)0;
struct sType* __dec_obj160;
void* __right_value677 = (void*)0;
char* __dec_obj161;
_Bool __result_obj__370;
memset(&i_553, 0, sizeof(int));
    fun_name_416=(char*)come_increment_ref_count(self->fun_name);
    params_417=self->params;
    method_block_418=self->method_block;
    method_block_sline_419=self->method_block_sline;
    var__420=get_variable_from_table(info->lv_table,fun_name_416);
    if(    var__420==((void*)0)) {
        var__420=get_variable_from_table(info->gv_table,fun_name_416);
    }
    if(    var__420) {
        lambda_type_421=var__420->mType;
        if(        string_operator_not_equals(lambda_type_421->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value380=err_msg(info,"%s is not lambda, can't call",fun_name_416)));
            come_exception_var_2_422=multiple_assign_var2->v1;
            Err_423=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_423)),            /*c*/ come_call_finalizer3(__right_value380,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __result_obj__273 = (_Bool)1;
                (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__273;
            }
            else {
            }
            (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_424=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_421->mResultType));
        result_type_424->mStatic=(_Bool)0;
        come_params_425=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 518, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_421->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_417)&&!lambda_type_421->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value384=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_416,list$1sType$ph_length(lambda_type_421->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_417))));
            come_exception_var_3_428=multiple_assign_var3->v1;
            Err_429=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_429)),            /*c*/ come_call_finalizer3(__right_value384,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__275 = (_Bool)1;
                (Err_429 = come_decrement_ref_count(Err_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_424,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__275;
            }
            else {
            }
            (Err_429 = come_decrement_ref_count(Err_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_430=0;
        for(        o2_saved_431=(params_417),it_434=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_431));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_431));        it_434=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_431))        ){
            multiple_assign_var4=it_434;
            label_437=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_438=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_439=node_compile(node_438,info);
            if(            !Value_439) {
                __result_obj__282 = (_Bool)0;
                (label_437 = come_decrement_ref_count(label_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_424,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__282;
            }
            else {
            }
            come_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_421->mVarArgs&&((struct sType*)(__right_value386=list$1sType$ph_operator_load_element(lambda_type_421->mParamTypes,i_430)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value386,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value391=check_assign_type(((char*)(__right_value389=xsprintf("\%s calling param #\%s",((char*)(__right_value387=string_to_string(fun_name_416))),((char*)(__right_value388=int_to_string(i_430)))))),((struct sType*)(__right_value390=list$1sType$ph_operator_load_element(lambda_type_421->mParamTypes,i_430))),come_value_440->type,come_value_440,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_4_447=multiple_assign_var5->v1;
                Err_448=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_448)),                (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value390,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value391,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional6) {
                    __result_obj__287 = (_Bool)1;
                    (Err_448 = come_decrement_ref_count(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_437 = come_decrement_ref_count(label_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_424,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__287;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)(__right_value392=list$1sType$ph_operator_load_element(lambda_type_421->mParamTypes,i_430)))->mHeap&&come_value_440->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value392,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)(__right_value393=list$1sType$ph_operator_load_element(lambda_type_421->mParamTypes,i_430))),come_value_440->type,come_value_440,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value393,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                (Err_448 = come_decrement_ref_count(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(come_params_425,(struct CVALUE*)come_increment_ref_count(come_value_440));
            i_430++;
            (label_437 = come_decrement_ref_count(label_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 553, "struct buffer*"))));
        buffer_append_str(buf_449,var__420->mCValueName);
        buffer_append_str(buf_449,"(");
        j_450=0;
        for(        o2_saved_451=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_425)),it_454=list$1CVALUE$ph_begin((o2_saved_451));        !list$1CVALUE$ph_end((o2_saved_451));        it_454=list$1CVALUE$ph_next((o2_saved_451))        ){
            buffer_append_str(buf_449,it_454->c_value);
            if(            j_450!=list$1CVALUE$ph_length(come_params_425)-1) {
                buffer_append_str(buf_449,",");
            }
            j_450++;
        }
        /*c*/ come_call_finalizer3(o2_saved_451,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_449,")");
        come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 570, "struct CVALUE*"))));
        __dec_obj85=come_value_457->c_value,
        come_value_457->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_449));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj86=come_value_457->type,
        come_value_457->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_424));
        /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_457->type->mStatic=(_Bool)0;
        come_value_457->var=((void*)0);
        if(        lambda_type_421->mResultType->mHeap) {
            append_object_to_right_values2(come_value_457,(struct sType*)come_increment_ref_count(lambda_type_421->mResultType),info,(_Bool)0,((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_457->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
        info->calling_fun=((void*)0);
        __result_obj__294 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_424,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_449,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__294;
        /*c*/ come_call_finalizer3(result_type_424,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_449,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_458=((struct sGenericsFun*)(__right_value401=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value400=__builtin_string(fun_name_416))),((void*)0))));
    (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value401,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_461=(_Bool)0;
    if(    generics_fun_458) {
        method_generics_461=list$1char$ph_length(generics_fun_458->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_461) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_462=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 595, "struct list$1sType$ph*"))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value404=make_method_generics_function((char*)come_increment_ref_count(fun_name_416),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_462),info)));
            name_463=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_464=multiple_assign_var6->v2;
            /*c*/ come_call_finalizer3(__right_value404,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_465=(char*)come_increment_ref_count(name_463);
            fun_466=((struct sFun*)(__right_value405=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_465,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value405,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_418) {
                come_params_469=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 602, "struct list$1CVALUE$ph*"))));
                fun_470=((struct sFun*)(__right_value408=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_465,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value408,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_471=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_418,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_469),fun_470,fun_name_416,method_block_sline_419,info,(_Bool)1)) {
                    __result_obj__303 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_469,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__303;
                }
                info->no_output_come_code=no_output_come_code_471;
                method_block_node_472=((struct CVALUE*)(__right_value409=list$1CVALUE$ph_operator_load_element(come_params_469,-1)));
                /*c*/ come_call_finalizer3(__right_value409,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_479=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_472->type));
                method_block_result_type_480=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_481=((struct sType*)(__right_value412=list$1sType$ph_operator_load_element(generics_fun_458->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value412,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_482=generics_fun_method_block_lambda_type_481->mResultType;
                if(                generics_fun_method_block_result_type_482->mClass->mMethodGenerics) {
                    method_generics_num_483=generics_fun_method_block_result_type_482->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_483,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_480)));
                }
                n_492=0;
                for(                o2_saved_493=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_481->mParamTypes)),it_496=list$1sType$ph_begin((o2_saved_493));                !list$1sType$ph_end((o2_saved_493));                it_496=list$1sType$ph_next((o2_saved_493))                ){
                    if(                    it_496->mClass->mMethodGenerics) {
                        method_generics_num_499=it_496->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_499,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value417=list$1sType$ph_operator_load_element(method_block_lambda_type_479->mParamTypes,n_492))))));
                        /*c*/ come_call_finalizer3(__right_value417,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_492++;
                }
                /*c*/ come_call_finalizer3(o2_saved_493,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_469,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_480,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_500=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 634, "struct list$1CVALUE$ph*"))));
            i_501=0;
            result_type_502=((void*)0);
            for(            o2_saved_503=(params_417),it_504=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_503));            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_503));            it_504=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_503))            ){
                multiple_assign_var7=it_504;
                label_505=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_506=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_507=node_compile(node_506,info);
                if(                !Value_507) {
                    __result_obj__317 = (_Bool)0;
                    (label_505 = come_decrement_ref_count(label_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_506) ? node_506 = come_decrement_ref_count(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_500,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__317;
                }
                else {
                }
                come_value_508=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
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
                        list$1sType$ph$p_operator_store_element(method_generics_types_462,method_generics_num_516,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value426=list$1CVALUE$ph_operator_load_element(come_params_500,n_513)))->type)));
                        /*c*/ come_call_finalizer3(__right_value426,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_513++;
            }
            /*c*/ come_call_finalizer3(o2_saved_514,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_465);
            (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value428=make_method_generics_function((char*)come_increment_ref_count(fun_name_416),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_462),info)));
            name_519=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_520=multiple_assign_var8->v2;
            /*c*/ come_call_finalizer3(__right_value428,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj94=fun_name_416,
            fun_name_416=(char*)come_increment_ref_count(name_519);
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_462,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_465 = come_decrement_ref_count(generics_fun_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_500,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_519 = come_decrement_ref_count(name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value429=make_method_generics_function((char*)come_increment_ref_count(fun_name_416),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_521=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_522=multiple_assign_var9->v2;
            /*c*/ come_call_finalizer3(__right_value429,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj95=fun_name_416,
            fun_name_416=(char*)come_increment_ref_count(name_521);
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_521 = come_decrement_ref_count(name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_416,"__builtin_memmove")||string_operator_equals(fun_name_416,"__builtin_memset")||string_operator_equals(fun_name_416,"__builtin_ffs")||string_operator_equals(fun_name_416,"__builtin_ffsl")||string_operator_equals(fun_name_416,"__builtin_ffsll")||string_operator_equals(fun_name_416,"__builtin_bswap16")||string_operator_equals(fun_name_416,"__builtin_bswap32")||string_operator_equals(fun_name_416,"__builtin_bswap64")||string_operator_equals(fun_name_416,"__builtin_constant_p")||string_operator_equals(fun_name_416,"__builtin_expect")||string_operator_equals(fun_name_416,"__builtin___memset_chk")||string_operator_equals(fun_name_416,"__builtin_object_size")||string_operator_equals(fun_name_416,"__builtin___memcpy_chk")||string_operator_equals(fun_name_416,"__builtin___strncpy_chk")||string_operator_equals(fun_name_416,"__builtin___strncat_chk")||string_operator_equals(fun_name_416,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_416,"__builtin_strrchr")||string_operator_equals(fun_name_416,"__builtin_clz")||string_operator_equals(fun_name_416,"__dsb")||string_operator_equals(fun_name_416,"__isb")||string_operator_equals(fun_name_416,"__dmb")||(strlen(fun_name_416)==strlen("__builtin_arm_")&&memcmp(fun_name_416,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_416,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_416,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_416,"__c11_atomic_store")||string_operator_equals(fun_name_416,"__c11_atomic_load")||string_operator_equals(fun_name_416,"__c11_atomic_exchange")||string_operator_equals(fun_name_416,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_416,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_416,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_416,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_416,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_416,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_416,"__c11_atomic_fetch_xor")) {
        come_params_523=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 707, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_524=(params_417),it_525=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_524));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_524));        it_525=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_524))        ){
            multiple_assign_var10=it_525;
            label_526=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_527=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_528=node_compile(node_527,info);
            if(            !Value_528) {
                __result_obj__320 = (_Bool)0;
                (label_526 = come_decrement_ref_count(label_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_527) ? node_527 = come_decrement_ref_count(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__320;
            }
            else {
            }
            come_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(come_params_523,(struct CVALUE*)come_increment_ref_count(come_value_529));
            (label_526 = come_decrement_ref_count(label_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_527) ? node_527 = come_decrement_ref_count(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_529,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 720, "struct buffer*"))));
        buffer_append_str(buf_530,fun_name_416);
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
        come_value_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 737, "struct CVALUE*"))));
        __dec_obj96=come_value_534->c_value,
        come_value_534->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_530));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_416,"__builtin_memmove")||string_operator_equals(fun_name_416,"__builtin_memset")) {
            __dec_obj97=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_ffs")) {
            __dec_obj98=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_ffsl")) {
            __dec_obj99=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_ffsll")) {
            __dec_obj100=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_bswap16")) {
            __dec_obj101=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_bswap32")) {
            __dec_obj102=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 756, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_bswap64")) {
            __dec_obj103=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 759, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_constant_p")) {
            __dec_obj104=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 762, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_expect")) {
            __dec_obj105=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 765, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin___memset_chk")) {
            __dec_obj106=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 768, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_object_size")) {
            __dec_obj107=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 772, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin___memcpy_chk")) {
            __dec_obj108=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 775, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_416,"__builtin___strncpy_chk")) {
            __dec_obj109=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_416,"__builtin___strncat_chk")) {
            __dec_obj110=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 783, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_strrchr")) {
            __dec_obj111=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 787, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_534->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_416,"__builtin___vsnprintf_chk")) {
            __dec_obj112=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_clz")) {
            __dec_obj113=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 794, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_thread_fence")) {
            __dec_obj114=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 797, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_signal_fence")) {
            __dec_obj115=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 800, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_exchange")) {
            __dec_obj116=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value495=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value495,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_exchange_strong")) {
            __dec_obj117=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value497=list$1CVALUE$ph_operator_load_element(come_params_523,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value497,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_exchange_weak")) {
            __dec_obj118=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value499=list$1CVALUE$ph_operator_load_element(come_params_523,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value499,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_store")) {
            __dec_obj119=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 812, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_load")) {
            __dec_obj120=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value504=list$1CVALUE$ph_operator_load_element(come_params_523,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value504,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_534->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_fetch_add")) {
            __dec_obj121=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value506=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value506,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_fetch_sub")) {
            __dec_obj122=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value508=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value508,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_fetch_and")) {
            __dec_obj123=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value510=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value510,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_fetch_or")) {
            __dec_obj124=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value512=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value512,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__c11_atomic_fetch_xor")) {
            __dec_obj125=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value514=list$1CVALUE$ph_operator_load_element(come_params_523,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value514,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__dsb")) {
            __dec_obj126=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__isb")) {
            __dec_obj127=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__dmb")) {
            __dec_obj128=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_arm_cdp")) {
            __dec_obj129=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 843, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_arm_ldc")) {
            __dec_obj130=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 846, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_arm_stc")) {
            __dec_obj131=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 849, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_arm_stcl")) {
            __dec_obj132=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 852, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_416,"__builtin_arm_ldcl")) {
            __dec_obj133=come_value_534->type,
            come_value_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 855, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_534->var=((void*)0);
        add_come_last_code(info,"%s",come_value_534->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_534));
        __result_obj__321 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_530,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_534,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__321;
        /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_530,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_534,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_416,"__builtin_va_arg")) {
        come_params_535=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 867, "struct list$1CVALUE$ph*"))));
        i_536=0;
        result_type_537=((void*)0);
        for(        o2_saved_538=(params_417),it_539=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_538));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_538));        it_539=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_538))        ){
            multiple_assign_var11=it_539;
            label_540=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_541=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_542=node_compile(node_541,info);
            if(            !Value_542) {
                __result_obj__322 = (_Bool)0;
                (label_540 = come_decrement_ref_count(label_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_541) ? node_541 = come_decrement_ref_count(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_535,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__322;
            }
            else {
            }
            come_value_543=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_535,(struct CVALUE*)come_increment_ref_count(come_value_543));
            __dec_obj134=result_type_537,
            result_type_537=(struct sType*)come_increment_ref_count(come_value_543->type);
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_540 = come_decrement_ref_count(label_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_541) ? node_541 = come_decrement_ref_count(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_543,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 885, "struct buffer*"))));
        buffer_append_str(buf_544,fun_name_416);
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
        come_value_548=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 902, "struct CVALUE*"))));
        __dec_obj135=come_value_548->c_value,
        come_value_548->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_544));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj136=come_value_548->type,
        come_value_548->type=(struct sType*)come_increment_ref_count(result_type_537);
        /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_548->var=((void*)0);
        add_come_last_code(info,"%s",come_value_548->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_548));
        __result_obj__323 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_535,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_544,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_548,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__323;
        /*c*/ come_call_finalizer3(come_params_535,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_544,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_548,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_416,"string")) {
        __dec_obj137=fun_name_416,
        fun_name_416=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_416,"wstring")) {
        __dec_obj138=fun_name_416,
        fun_name_416=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_416,"inherit")) {
        p_549=info->come_fun->mName;
        version_550=0;
        while(*p_549) {
            if(            *p_549==95&&*(p_549+1)==118&&xisdigit(*(p_549+2))) {
                p2_551=p_549+2;
                version_550=0;
                while(xisdigit(*p2_551)) {
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
            if(            (_if_conditional8=(((struct sFun*)(__right_value551=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_554))))),            /*c*/ come_call_finalizer3(__right_value551,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional8) {
                __dec_obj139=fun_name_416,
                fun_name_416=(char*)come_increment_ref_count(__builtin_string(new_fun_name_554));
                __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_554 = come_decrement_ref_count(new_fun_name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_554 = come_decrement_ref_count(new_fun_name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_553==0) {
            new_fun_name_561=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_552));
            if(            (_if_conditional9=(((struct sFun*)(__right_value554=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_561))))),            /*c*/ come_call_finalizer3(__right_value554,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __dec_obj140=fun_name_416,
                fun_name_416=(char*)come_increment_ref_count(__builtin_string(new_fun_name_561));
                __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_416,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value556=err_msg(info,"invalid inherit")));
                come_exception_var_5_562=multiple_assign_var12->v1;
                Err_563=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_563)),                /*c*/ come_call_finalizer3(__right_value556,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    __result_obj__332 = (_Bool)1;
                    (Err_563 = come_decrement_ref_count(Err_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_561 = come_decrement_ref_count(new_fun_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__332;
                }
                else {
                }
                (Err_563 = come_decrement_ref_count(Err_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_561 = come_decrement_ref_count(new_fun_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_564=128;        i_564>=1;        i_564--        ){
            new_fun_name_565=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_416,i_564));
            if(            (_if_conditional11=(((struct sFun*)(__right_value558=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_565))))),            /*c*/ come_call_finalizer3(__right_value558,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                __dec_obj141=fun_name_416,
                fun_name_416=(char*)come_increment_ref_count(__builtin_string(new_fun_name_565));
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_565 = come_decrement_ref_count(new_fun_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_565 = come_decrement_ref_count(new_fun_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_566=((struct sFun*)(__right_value560=map$2char$phsFun$ph_at(info->funcs,fun_name_416,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value560,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_566==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_416);
        come_params_567=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 984, "struct list$1CVALUE$ph*"))));
        i_568=0;
        result_type_569=((void*)0);
        for(        o2_saved_570=(params_417),it_571=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_570));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_570));        it_571=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_570))        ){
            multiple_assign_var13=it_571;
            label_572=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_573=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_574=node_compile(node_573,info);
            if(            !Value_574) {
                __result_obj__333 = (_Bool)0;
                (label_572 = come_decrement_ref_count(label_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_573) ? node_573 = come_decrement_ref_count(node_573, ((struct sNode*)node_573)->finalize, ((struct sNode*)node_573)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_567,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_569,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__333;
            }
            else {
            }
            come_value_575=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_567,(struct CVALUE*)come_increment_ref_count(come_value_575));
            __dec_obj142=result_type_569,
            result_type_569=(struct sType*)come_increment_ref_count(come_value_575->type);
            /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_572 = come_decrement_ref_count(label_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_573) ? node_573 = come_decrement_ref_count(node_573, ((struct sNode*)node_573)->finalize, ((struct sNode*)node_573)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_575,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_576=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1002, "struct buffer*"))));
        buffer_append_str(buf_576,fun_name_416);
        buffer_append_str(buf_576,"(");
        j_577=0;
        for(        o2_saved_578=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_567)),it_579=list$1CVALUE$ph_begin((o2_saved_578));        !list$1CVALUE$ph_end((o2_saved_578));        it_579=list$1CVALUE$ph_next((o2_saved_578))        ){
            buffer_append_str(buf_576,it_579->c_value);
            if(            j_577!=list$1CVALUE$ph_length(come_params_567)-1) {
                buffer_append_str(buf_576,",");
            }
            j_577++;
        }
        /*c*/ come_call_finalizer3(o2_saved_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_576,")");
        come_value_580=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1019, "struct CVALUE*"))));
        __dec_obj143=come_value_580->c_value,
        come_value_580->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_576));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj144=come_value_580->type,
        come_value_580->type=(struct sType*)come_increment_ref_count(result_type_569);
        /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_580->var=((void*)0);
        add_come_last_code(info,"%s",come_value_580->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_580));
        __result_obj__334 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_567,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_569,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_576,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_580,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__334;
        /*c*/ come_call_finalizer3(come_params_567,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_569,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_576,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_580,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_581=(struct sType*)come_increment_ref_count(sType_clone(fun_566->mResultType));
    result_type_581->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_581->mException&&!info->in_exception_value) {
        in_exception_value_582=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1037, "struct sNode");
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value576=sFunCallNode_clone(self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_583=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        /*c*/ come_call_finalizer3(__right_value576,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_585=node_compile(new_node_583,info);
        if(        !Value_585) {
            __result_obj__337 = (_Bool)0;
            ((new_node_583) ? new_node_583 = come_decrement_ref_count(new_node_583, ((struct sNode*)new_node_583)->finalize, ((struct sNode*)new_node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__337;
        }
        else {
        }
        info->in_exception_value=in_exception_value_582;
        __result_obj__338 = (_Bool)1;
        ((new_node_583) ? new_node_583 = come_decrement_ref_count(new_node_583, ((struct sNode*)new_node_583)->finalize, ((struct sNode*)new_node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__338;
        ((new_node_583) ? new_node_583 = come_decrement_ref_count(new_node_583, ((struct sNode*)new_node_583)->finalize, ((struct sNode*)new_node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_581->mException&&!info->in_exception_value) {
        in_exception_value_586=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1049, "struct sNode");
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value579=sFunCallNode_clone(self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_587=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        /*c*/ come_call_finalizer3(__right_value579,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_588=node_compile(new_node_587,info);
        if(        !Value_588) {
            __result_obj__339 = (_Bool)0;
            ((new_node_587) ? new_node_587 = come_decrement_ref_count(new_node_587, ((struct sNode*)new_node_587)->finalize, ((struct sNode*)new_node_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__339;
        }
        else {
        }
        info->in_exception_value=in_exception_value_586;
        __result_obj__340 = (_Bool)1;
        ((new_node_587) ? new_node_587 = come_decrement_ref_count(new_node_587, ((struct sNode*)new_node_587)->finalize, ((struct sNode*)new_node_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__340;
        ((new_node_587) ? new_node_587 = come_decrement_ref_count(new_node_587, ((struct sNode*)new_node_587)->finalize, ((struct sNode*)new_node_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_589=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1059, "struct list$1sType$ph*"))));
    for(    o2_saved_590=(struct list$1sType$ph*)come_increment_ref_count((fun_566->mParamTypes)),it_591=list$1sType$ph_begin((o2_saved_590));    !list$1sType$ph_end((o2_saved_590));    it_591=list$1sType$ph_next((o2_saved_590))    ){
        it2_592=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value584=sType_clone(it_591))),info->generics_type,info,(_Bool)0));
        /*c*/ come_call_finalizer3(__right_value584,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_589,(struct sType*)come_increment_ref_count(sType_clone(it2_592)));
        /*c*/ come_call_finalizer3(it2_592,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_590,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj150=result_type_581,
    result_type_581=(struct sType*)come_increment_ref_count(solve_generics(result_type_581,info->generics_type,info,(_Bool)0));
    /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_593=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1067, "struct list$1CVALUE$ph*"))));
    for(    i_594=0;    i_594<list$1sType$ph_length(fun_566->mParamTypes)-(((method_block_418)?(2):(0)));    i_594++    ){
        list$1CVALUE$ph_add(come_params_593,((void*)0));
    }
    for(    o2_saved_595=(params_417),it_596=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_595));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_595));    it_596=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_595))    ){
        multiple_assign_var14=it_596;
        label_597=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_598=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_566->mVarArgs||string_operator_equals(fun_name_416,"__builtin_va_start")) {
        }
        else if(        label_597) {
            Value_599=node_compile(node_598,info);
            if(            !Value_599) {
                __result_obj__341 = (_Bool)0;
                (label_597 = come_decrement_ref_count(label_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_598) ? node_598 = come_decrement_ref_count(node_598, ((struct sNode*)node_598)->finalize, ((struct sNode*)node_598)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__341;
            }
            else {
            }
            come_value_600=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            n_601=0;
            for(            o2_saved_602=(struct list$1char$ph*)come_increment_ref_count((fun_566->mParamNames)),it_603=list$1char$ph_begin((o2_saved_602));            !list$1char$ph_end((o2_saved_602));            it_603=list$1char$ph_next((o2_saved_602))            ){
                if(                string_operator_equals(label_597,it_603)) {
                    break;
                }
                n_601++;
            }
            /*c*/ come_call_finalizer3(o2_saved_602,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional12=(((struct sType*)(__right_value591=list$1sType$ph_operator_load_element(param_types_589,n_601))))),            /*c*/ come_call_finalizer3(__right_value591,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value596=check_assign_type(((char*)(__right_value594=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value592=string_to_string(fun_name_416))),((char*)(__right_value593=int_to_string(n_601)))))),((struct sType*)(__right_value595=list$1sType$ph_operator_load_element(param_types_589,n_601))),come_value_600->type,come_value_600,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_6_604=multiple_assign_var15->v1;
                Err_605=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_605)),                (__right_value592 = come_decrement_ref_count(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value593 = come_decrement_ref_count(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value594 = come_decrement_ref_count(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value595,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value596,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional13) {
                    __result_obj__342 = (_Bool)1;
                    (Err_605 = come_decrement_ref_count(Err_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_600,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_597 = come_decrement_ref_count(label_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_598) ? node_598 = come_decrement_ref_count(node_598, ((struct sNode*)node_598)->finalize, ((struct sNode*)node_598)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__342;
                }
                else {
                }
                (Err_605 = come_decrement_ref_count(Err_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)(__right_value597=list$1sType$ph_operator_load_element(param_types_589,n_601)))&&((struct sType*)(__right_value598=list$1sType$ph_operator_load_element(param_types_589,n_601)))->mHeap&&come_value_600->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value597,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value598,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)(__right_value599=list$1sType$ph_operator_load_element(param_types_589,n_601))),come_value_600->type,come_value_600,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value599,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_593,n_601,(struct CVALUE*)come_increment_ref_count(come_value_600));
            /*c*/ come_call_finalizer3(come_value_600,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_597 = come_decrement_ref_count(label_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_598) ? node_598 = come_decrement_ref_count(node_598, ((struct sNode*)node_598)->finalize, ((struct sNode*)node_598)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_611=0;
    for(    o2_saved_612=(params_417),it_613=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_612));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_612));    it_613=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_612))    ){
        multiple_assign_var16=it_613;
        label_614=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_615=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_566->mVarArgs||string_operator_equals(fun_name_416,"__builtin_va_start")) {
            Value_616=node_compile(node_615,info);
            if(            !Value_616) {
                __result_obj__345 = (_Bool)0;
                (label_614 = come_decrement_ref_count(label_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__345;
            }
            else {
            }
            come_value_617=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value601=list$1CVALUE$ph_operator_load_element(come_params_593,i_611)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value601,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_611++;
                }
            }
            list$1CVALUE$ph_replace(come_params_593,i_611,(struct CVALUE*)come_increment_ref_count(come_value_617));
            i_611++;
            /*c*/ come_call_finalizer3(come_value_617,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_614) {
        }
        else {
            Value_618=node_compile(node_615,info);
            if(            !Value_618) {
                __result_obj__346 = (_Bool)0;
                (label_614 = come_decrement_ref_count(label_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__346;
            }
            else {
            }
            come_value_619=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value603=list$1CVALUE$ph_operator_load_element(come_params_593,i_611)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value603,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_611++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)(__right_value604=list$1sType$ph_operator_load_element(param_types_589,i_611))))),            /*c*/ come_call_finalizer3(__right_value604,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value609=check_assign_type(((char*)(__right_value607=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value605=string_to_string(fun_name_416))),((char*)(__right_value606=int_to_string(i_611)))))),((struct sType*)(__right_value608=list$1sType$ph_operator_load_element(param_types_589,i_611))),come_value_619->type,come_value_619,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_620=multiple_assign_var17->v1;
                Err_621=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_621)),                (__right_value605 = come_decrement_ref_count(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value606 = come_decrement_ref_count(__right_value606, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value607 = come_decrement_ref_count(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value608,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value609,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional18) {
                    __result_obj__347 = (_Bool)1;
                    (Err_621 = come_decrement_ref_count(Err_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_619,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_614 = come_decrement_ref_count(label_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__347;
                }
                else {
                }
                (Err_621 = come_decrement_ref_count(Err_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)(__right_value610=list$1sType$ph_operator_load_element(param_types_589,i_611)))&&((struct sType*)(__right_value611=list$1sType$ph_operator_load_element(param_types_589,i_611)))->mHeap&&come_value_619->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value610,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value611,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)(__right_value612=list$1sType$ph_operator_load_element(param_types_589,i_611))),come_value_619->type,come_value_619,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value612,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_593,i_611,(struct CVALUE*)come_increment_ref_count(come_value_619));
            i_611++;
            /*c*/ come_call_finalizer3(come_value_619,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_614 = come_decrement_ref_count(label_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value613=list$1CVALUE$ph_operator_load_element(come_params_593,i_611)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value613,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_611++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_417)<list$1sType$ph_length(fun_566->mParamTypes)) {
        for(        ;        i_611<list$1sType$ph_length(fun_566->mParamTypes)-(((method_block_418)?(2):(0)));        i_611++        ){
            default_param_622=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value614=list$1char$ph_operator_load_element(fun_566->mParamDefaultParametors,i_611))), "05call.c", 1174, "char*"));
            (__right_value614 = come_decrement_ref_count(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_629=((char*)(__right_value616=list$1char$ph_operator_load_element(fun_566->mParamNames,i_611)));
            (__right_value616 = come_decrement_ref_count(__right_value616, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_622&&string_operator_not_equals(default_param_622,"")&&((struct CVALUE*)(__right_value617=list$1CVALUE$ph_operator_load_element(come_params_593,i_611)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value617,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional21) {
                source_630=(struct buffer*)come_increment_ref_count(info->source);
                p_631=info->p;
                head_632=info->head;
                sline_633=info->sline;
                __dec_obj152=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_622));
                /*b*/ come_call_finalizer3(__dec_obj152,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_634=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_635=node_compile(node_634,info);
                if(                !Value_635) {
                    __result_obj__352 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_630,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_622 = come_decrement_ref_count(default_param_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__352;
                }
                else {
                }
                __dec_obj153=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_630);
                /*b*/ come_call_finalizer3(__dec_obj153,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_631;
                info->head=head_632;
                info->sline=sline_633;
                come_value_636=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)(__right_value621=list$1sType$ph_operator_load_element(param_types_589,i_611))))),                /*c*/ come_call_finalizer3(__right_value621,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value626=check_assign_type(((char*)(__right_value624=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value622=string_to_string(fun_name_416))),((char*)(__right_value623=int_to_string(i_611)))))),((struct sType*)(__right_value625=list$1sType$ph_operator_load_element(param_types_589,i_611))),come_value_636->type,come_value_636,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_8_637=multiple_assign_var18->v1;
                    Err_638=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_638)),                    (__right_value622 = come_decrement_ref_count(__right_value622, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value623 = come_decrement_ref_count(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value624 = come_decrement_ref_count(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value625,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value626,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional23) {
                        __result_obj__353 = (_Bool)1;
                        (Err_638 = come_decrement_ref_count(Err_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(source_630,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(come_value_636,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (default_param_622 = come_decrement_ref_count(default_param_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__353;
                    }
                    else {
                    }
                    (Err_638 = come_decrement_ref_count(Err_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)(__right_value627=list$1sType$ph_operator_load_element(param_types_589,i_611)))&&((struct sType*)(__right_value628=list$1sType$ph_operator_load_element(param_types_589,i_611)))->mHeap&&come_value_636->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value627,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value628,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)(__right_value629=list$1sType$ph_operator_load_element(param_types_589,i_611))),come_value_636->type,come_value_636,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value629,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_593,i_611,(struct CVALUE*)come_increment_ref_count(come_value_636));
                /*c*/ come_call_finalizer3(source_630,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_636,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value630=list$1CVALUE$ph_operator_load_element(come_params_593,i_611)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value630,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value631=err_msg(info,"require parametor(%s)(1) %d",fun_566->mName,i_611)));
                    come_exception_var_9_639=multiple_assign_var19->v1;
                    Err_640=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_640)),                    /*c*/ come_call_finalizer3(__right_value631,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional26) {
                        __result_obj__354 = (_Bool)1;
                        (Err_640 = come_decrement_ref_count(Err_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_622 = come_decrement_ref_count(default_param_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__354;
                    }
                    else {
                    }
                    (Err_640 = come_decrement_ref_count(Err_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_622 = come_decrement_ref_count(default_param_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_566->mParamTypes)-(((method_block_418)?(2):(0)))!=list$1CVALUE$ph_length(come_params_593)&&!fun_566->mVarArgs&&string_operator_not_equals(fun_name_416,"__builtin_va_start")&&string_operator_not_equals(fun_name_416,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value632=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_416,list$1sType$ph_length(fun_566->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_417))));
        come_exception_var_10_641=multiple_assign_var20->v1;
        Err_642=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_642)),        /*c*/ come_call_finalizer3(__right_value632,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional27) {
            __result_obj__355 = (_Bool)1;
            (Err_642 = come_decrement_ref_count(Err_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__355;
        }
        else {
        }
        (Err_642 = come_decrement_ref_count(Err_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_418) {
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1227, "struct sNode");
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value634=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1227, "struct sCurrentNode2*")),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_643=(struct sNode*)come_increment_ref_count(_inf_value3);
        /*c*/ come_call_finalizer3(__right_value634,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_645=node_compile(current_stack_frame_node_643,info);
        if(        !Value_645) {
            __result_obj__358 = (_Bool)0;
            ((current_stack_frame_node_643) ? current_stack_frame_node_643 = come_decrement_ref_count(current_stack_frame_node_643, ((struct sNode*)current_stack_frame_node_643)->finalize, ((struct sNode*)current_stack_frame_node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__358;
        }
        else {
        }
        come_value_646=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(come_params_593,(struct CVALUE*)come_increment_ref_count(come_value_646));
        method_block2_647=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1236, "struct buffer*"))));
        method_block_type_648=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value641=list$1sType$ph_operator_load_element(fun_566->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value641,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_649=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value644=list$1sType$ph_operator_load_element(method_block_type_648->mParamTypes,0)))->mClass=((struct sClass*)(__right_value645=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_649)));
        /*c*/ come_call_finalizer3(__right_value644,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value645,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_656=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value646=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_649)));
        /*c*/ come_call_finalizer3(__right_value646,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        num_method_block_657=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_648->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value647=err_msg(info,"This function does not have method block(%s)",fun_name_416)));
            come_exception_var_11_658=multiple_assign_var21->v1;
            Err_659=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_659)),            /*c*/ come_call_finalizer3(__right_value647,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional28) {
                __result_obj__367 = (_Bool)1;
                (Err_659 = come_decrement_ref_count(Err_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_643) ? current_stack_frame_node_643 = come_decrement_ref_count(current_stack_frame_node_643, ((struct sNode*)current_stack_frame_node_643)->finalize, ((struct sNode*)current_stack_frame_node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_646,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_647,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_648,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_649 = come_decrement_ref_count(class_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__367;
            }
            else {
            }
            (Err_659 = come_decrement_ref_count(Err_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_660=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_648->mResultType));
        result_type_660->mStatic=(_Bool)0;
        param_types_661=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_648->mParamTypes));
        param_names_662=method_block_type_648->mParamNames;
        all_alhabet_sname_663=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1260, "struct buffer*"))));
        {
            p_664=info->sname;
            while(*p_664) {
                if(                xisalnum(*p_664)) {
                    buffer_append_char(all_alhabet_sname_663,*p_664++);
                }
                else {
                    p_664++;
                }
            }
        }
        buffer_append_format(method_block2_647,"%s fun_block%d_%s(",((char*)(__right_value652=make_type_name_string(result_type_660,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),num_method_block_657,((char*)(__right_value653=buffer_to_string(all_alhabet_sname_663))));
        (__right_value652 = come_decrement_ref_count(__right_value652, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value653 = come_decrement_ref_count(__right_value653, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_611=0;
        for(        o2_saved_665=(struct list$1sType$ph*)come_increment_ref_count((param_types_661)),it_666=list$1sType$ph_begin((o2_saved_665));        !list$1sType$ph_end((o2_saved_665));        it_666=list$1sType$ph_next((o2_saved_665))        ){
            param_type_667=it_666;
            if(            i_611==0) {
                param_name_668=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_647,"%s",((char*)(__right_value655=make_define_var(param_type_667,param_name_668,(_Bool)0,info))));
                (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_668 = come_decrement_ref_count(param_name_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_611==1) {
                param_name_669=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_647,"%s",((char*)(__right_value657=make_define_var_no_solved(param_type_667,param_name_669,(_Bool)0,(_Bool)1,info))));
                (__right_value657 = come_decrement_ref_count(__right_value657, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_669 = come_decrement_ref_count(param_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_670=(char*)come_increment_ref_count(xsprintf("it%d",i_611));
                buffer_append_format(method_block2_647,"%s",((char*)(__right_value659=make_define_var_no_solved(param_type_667,param_name_670,(_Bool)0,(_Bool)1,info))));
                (__right_value659 = come_decrement_ref_count(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_670 = come_decrement_ref_count(param_name_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_611!=list$1sType$ph_length(param_types_661)-1) {
                buffer_append_str(method_block2_647,",");
            }
            i_611++;
        }
        /*c*/ come_call_finalizer3(o2_saved_665,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_647,")\n");
        buffer_append_str(method_block2_647,((char*)(__right_value660=buffer_to_string(method_block_418))));
        (__right_value660 = come_decrement_ref_count(__right_value660, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_671=(struct buffer*)come_increment_ref_count(info->source);
        p_672=info->p;
        head_673=info->head;
        sline_674=info->sline;
        __dec_obj155=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_647);
        /*b*/ come_call_finalizer3(__dec_obj155,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_419;
        node_675=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_676=node_compile(node_675,info);
        if(        !Value_676) {
            __result_obj__368 = (_Bool)0;
            ((current_stack_frame_node_643) ? current_stack_frame_node_643 = come_decrement_ref_count(current_stack_frame_node_643, ((struct sNode*)current_stack_frame_node_643)->finalize, ((struct sNode*)current_stack_frame_node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_646,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_647,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_648,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_649 = come_decrement_ref_count(class_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_660,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_661,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_671,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_675) ? node_675 = come_decrement_ref_count(node_675, ((struct sNode*)node_675)->finalize, ((struct sNode*)node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__368;
        }
        else {
        }
        method_block_name_677=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_657,((char*)(__right_value662=buffer_to_string(all_alhabet_sname_663)))));
        (__right_value662 = come_decrement_ref_count(__right_value662, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_678=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1325, "struct CVALUE*"))));
        fun2_679=((struct sFun*)(__right_value667=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value666=__builtin_string(method_block_name_677))),((void*)0))));
        (__right_value666 = come_decrement_ref_count(__right_value666, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value667,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_679==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value668=err_msg(info,"method block function not found(%s)",method_block_name_677)));
            come_exception_var_12_680=multiple_assign_var22->v1;
            Err_681=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_681)),            /*c*/ come_call_finalizer3(__right_value668,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional29) {
                __result_obj__369 = (_Bool)1;
                (Err_681 = come_decrement_ref_count(Err_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_643) ? current_stack_frame_node_643 = come_decrement_ref_count(current_stack_frame_node_643, ((struct sNode*)current_stack_frame_node_643)->finalize, ((struct sNode*)current_stack_frame_node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_646,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_647,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_648,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_649 = come_decrement_ref_count(class_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_660,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_661,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(all_alhabet_sname_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(source3_671,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_675) ? node_675 = come_decrement_ref_count(node_675, ((struct sNode*)node_675)->finalize, ((struct sNode*)node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_677 = come_decrement_ref_count(method_block_name_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value2_678,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__369;
            }
            else {
            }
            (Err_681 = come_decrement_ref_count(Err_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_682=fun2_679->mLambdaType;
        __dec_obj156=come_value2_678->c_value,
        come_value2_678->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_677));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj157=come_value2_678->type,
        come_value2_678->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_682));
        /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_678->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_593,(struct CVALUE*)come_increment_ref_count(come_value2_678));
        __dec_obj158=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_671);
        /*b*/ come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_672;
        info->head=head_673;
        info->sline=sline_674;
        info->current_stack_frame_struct=current_stack_frame_struct_656;
        ((current_stack_frame_node_643) ? current_stack_frame_node_643 = come_decrement_ref_count(current_stack_frame_node_643, ((struct sNode*)current_stack_frame_node_643)->finalize, ((struct sNode*)current_stack_frame_node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_646,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_647,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_648,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_649 = come_decrement_ref_count(class_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_660,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_661,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_663,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_671,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_675) ? node_675 = come_decrement_ref_count(node_675, ((struct sNode*)node_675)->finalize, ((struct sNode*)node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_677 = come_decrement_ref_count(method_block_name_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_678,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_683=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1351, "struct buffer*"))));
    buffer_append_str(buf_683,fun_name_416);
    buffer_append_str(buf_683,"(");
    j_684=0;
    for(    o2_saved_685=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_593)),it_686=list$1CVALUE$ph_begin((o2_saved_685));    !list$1CVALUE$ph_end((o2_saved_685));    it_686=list$1CVALUE$ph_next((o2_saved_685))    ){
        buffer_append_str(buf_683,it_686->c_value);
        if(        j_684!=list$1CVALUE$ph_length(come_params_593)-1) {
            buffer_append_str(buf_683,",");
        }
        j_684++;
    }
    /*c*/ come_call_finalizer3(o2_saved_685,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_683,")");
    come_value_687=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1368, "struct CVALUE*"))));
    __dec_obj159=come_value_687->c_value,
    come_value_687->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_683));
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj160=come_value_687->type,
    come_value_687->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_581));
    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_687->type->mStatic=(_Bool)0;
    come_value_687->var=((void*)0);
    if(    fun_566->mResultType->mHeap) {
        append_object_to_right_values2(come_value_687,(struct sType*)come_increment_ref_count(result_type_581),info,(_Bool)0,((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")) {
        if(        string_operator_not_equals(fun_name_416,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_416,"null_check")&&string_operator_not_equals(fun_name_416,"come_push_stackframe")&&string_operator_not_equals(fun_name_416,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_416,"come_pop_stackframe")&&string_operator_not_equals(fun_name_416,"come_pop_stackframe_v2")) {
            __dec_obj161=come_value_687->c_value,
            come_value_687->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_687->c_value,come_value_687->type,info));
            __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_687->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_687));
    info->calling_fun=fun_566;
    __result_obj__370 = (_Bool)1;
    (fun_name_416 = come_decrement_ref_count(fun_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_593,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_683,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_687,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__370;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__265;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_408;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_409;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__270;
    if(    self==((void*)0)) {
        __result_obj__265 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__265,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__265;
    }
    result_408=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1022, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_409=self->head;
    while(it_409!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_408,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_409->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_408,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_409->item)));
        }
        it_409=it_409->next;
    }
    __result_obj__270 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_408);
    /*c*/ come_call_finalizer3(result_408,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_406;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_407;
    it_406=self->head;
    while(it_406!=((void*)0)) {
        prev_it_407=it_406;
        it_406=it_406->next;
        /*c*/ come_call_finalizer3(prev_it_407,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__266;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__266 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value370 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_410;
struct tuple2$2char$phsNode$ph* __dec_obj77;
void* __right_value371 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_411;
struct tuple2$2char$phsNode$ph* __dec_obj78;
void* __right_value372 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_412;
struct tuple2$2char$phsNode$ph* __dec_obj79;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__267;
    if(    self->len==0) {
        litem_410=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value370=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1041, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_410->prev=((void*)0);
        litem_410->next=((void*)0);
        __dec_obj77=litem_410->item,
        litem_410->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_410;
        self->head=litem_410;
    }
    else if(    self->len==1) {
        litem_411=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value371=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1051, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_411->prev=self->head;
        litem_411->next=((void*)0);
        __dec_obj78=litem_411->item,
        litem_411->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_411;
        self->head->next=litem_411;
    }
    else {
        litem_412=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value372=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1061, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_412->prev=self->tail;
        litem_412->next=((void*)0);
        __dec_obj79=litem_412->item,
        litem_412->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_412;
        self->tail=litem_412;
    }
    self->len++;
    __result_obj__267 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__268;
void* __right_value373 = (void*)0;
struct tuple2$2char$phsNode$ph* result_413;
void* __right_value374 = (void*)0;
char* __dec_obj80;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj81;
struct tuple2$2char$phsNode$ph* __result_obj__269;
    if(    self==(void*)0) {
        __result_obj__268 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__268,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__268;
    }
    result_413=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj80=result_413->v1,
        result_413->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj81=result_413->v2,
        result_413->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__269 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_413);
    /*c*/ come_call_finalizer3(result_413,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__269,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_414;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_415;
    it_414=self->head;
    while(it_414!=((void*)0)) {
        prev_it_415=it_414;
        it_414=it_414->next;
        /*c*/ come_call_finalizer3(prev_it_415,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1CVALUE$ph* __result_obj__274;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__274 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_426;
struct list_item$1CVALUE$ph* prev_it_427;
    it_426=self->head;
    while(it_426!=((void*)0)) {
        prev_it_427=it_426;
        it_426=it_426->next;
        /*c*/ come_call_finalizer3(prev_it_427,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_432;
struct tuple2$2char$phsNode$ph* __result_obj__276;
struct tuple2$2char$phsNode$ph* __result_obj__277;
struct tuple2$2char$phsNode$ph* result_433;
struct tuple2$2char$phsNode$ph* __result_obj__278;
result_432 = (void*)0;
result_433 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_432,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__276 = result_432;
        return __result_obj__276;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__277 = self->it->item;
        return __result_obj__277;
    }
    memset(&result_433,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__278 = result_433;
    return __result_obj__278;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_435;
struct tuple2$2char$phsNode$ph* __result_obj__279;
struct tuple2$2char$phsNode$ph* __result_obj__280;
struct tuple2$2char$phsNode$ph* result_436;
struct tuple2$2char$phsNode$ph* __result_obj__281;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_435,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__279 = result_435;
        return __result_obj__279;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__280 = self->it->item;
        return __result_obj__280;
    }
    memset(&result_436,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__281 = result_436;
    return __result_obj__281;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_441;
int i_442;
struct sType* __result_obj__283;
struct sType* default_value_443;
struct sType* __result_obj__284;
default_value_443 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_441=self->head;
    i_442=0;
    while(it_441!=((void*)0)) {
        if(        position==i_442) {
            __result_obj__283 = (struct sType*)come_increment_ref_count(it_441->item);
            /*c*/ come_call_finalizer3(__result_obj__283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__283;
        }
        it_441=it_441->next;
        i_442++;
    }
    memset(&default_value_443,0,sizeof(struct sType*));
    __result_obj__284 = (struct sType*)come_increment_ref_count(default_value_443);
    /*c*/ come_call_finalizer3(default_value_443,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_444;
int i_445;
struct sType* __result_obj__285;
struct sType* default_value_446;
struct sType* __result_obj__286;
default_value_446 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_444=self->head;
    i_445=0;
    while(it_444!=((void*)0)) {
        if(        position==i_445) {
            __result_obj__285 = (struct sType*)come_increment_ref_count(it_444->item);
            /*c*/ come_call_finalizer3(__result_obj__285,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__285;
        }
        it_444=it_444->next;
        i_445++;
    }
    memset(&default_value_446,0,sizeof(struct sType*));
    __result_obj__286 = (struct sType*)come_increment_ref_count(default_value_446);
    /*c*/ come_call_finalizer3(default_value_446,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__286,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_452;
struct CVALUE* __result_obj__288;
struct CVALUE* __result_obj__289;
struct CVALUE* result_453;
struct CVALUE* __result_obj__290;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_452,0,sizeof(struct CVALUE*));
        __result_obj__288 = result_452;
        return __result_obj__288;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__289 = self->it->item;
        return __result_obj__289;
    }
    memset(&result_453,0,sizeof(struct CVALUE*));
    __result_obj__290 = result_453;
    return __result_obj__290;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_455;
struct CVALUE* __result_obj__291;
struct CVALUE* __result_obj__292;
struct CVALUE* result_456;
struct CVALUE* __result_obj__293;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_455,0,sizeof(struct CVALUE*));
        __result_obj__291 = result_455;
        return __result_obj__291;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__292 = self->it->item;
        return __result_obj__292;
    }
    memset(&result_456,0,sizeof(struct CVALUE*));
    __result_obj__293 = result_456;
    return __result_obj__293;
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
struct sGenericsFun* __result_obj__295;
struct sGenericsFun* __result_obj__296;
struct sGenericsFun* __result_obj__297;
struct sGenericsFun* __result_obj__298;
    hash_459=string_get_hash_key(((char*)key))%self->size;
    it_460=hash_459;
    while((_Bool)1) {
        if(        self->item_existance[it_460]) {
            if(            string_equals(self->keys[it_460],key)) {
                __result_obj__295 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_460]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__295,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__295;
            }
            it_460++;
            if(            it_460>=self->size) {
                it_460=0;
            }
            else if(            it_460==hash_459) {
                __result_obj__296 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__296,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__296;
            }
        }
        else {
            __result_obj__297 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__297,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__297;
        }
    }
    __result_obj__298 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__298,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
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
struct sFun* __result_obj__299;
struct sFun* __result_obj__300;
struct sFun* __result_obj__301;
struct sFun* __result_obj__302;
    hash_467=string_get_hash_key(((char*)key))%self->size;
    it_468=hash_467;
    while((_Bool)1) {
        if(        self->item_existance[it_468]) {
            if(            string_equals(self->keys[it_468],key)) {
                __result_obj__299 = (struct sFun*)come_increment_ref_count(self->items[it_468]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__299,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__299;
            }
            it_468++;
            if(            it_468>=self->size) {
                it_468=0;
            }
            else if(            it_468==hash_467) {
                __result_obj__300 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__300,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__300;
            }
        }
        else {
            __result_obj__301 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__301,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__301;
        }
    }
    __result_obj__302 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__302,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
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
struct CVALUE* __result_obj__304;
struct CVALUE* default_value_475;
struct CVALUE* __result_obj__305;
default_value_475 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_473=self->head;
    i_474=0;
    while(it_473!=((void*)0)) {
        if(        position==i_474) {
            __result_obj__304 = (struct CVALUE*)come_increment_ref_count(it_473->item);
            /*c*/ come_call_finalizer3(__result_obj__304,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__304;
        }
        it_473=it_473->next;
        i_474++;
    }
    memset(&default_value_475,0,sizeof(struct CVALUE*));
    __result_obj__305 = (struct CVALUE*)come_increment_ref_count(default_value_475);
    /*c*/ come_call_finalizer3(default_value_475,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__305,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_476;
int i_477;
struct CVALUE* __result_obj__306;
struct CVALUE* default_value_478;
struct CVALUE* __result_obj__307;
default_value_478 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_476=self->head;
    i_477=0;
    while(it_476!=((void*)0)) {
        if(        position==i_477) {
            __result_obj__306 = (struct CVALUE*)come_increment_ref_count(it_476->item);
            /*c*/ come_call_finalizer3(__result_obj__306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__306;
        }
        it_476=it_476->next;
        i_477++;
    }
    memset(&default_value_478,0,sizeof(struct CVALUE*));
    __result_obj__307 = (struct CVALUE*)come_increment_ref_count(default_value_478);
    /*c*/ come_call_finalizer3(default_value_478,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__307,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__307;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_484;
int i_485;
struct sType* default_value_486;
struct list$1sType$ph* __result_obj__309;
struct list_item$1sType$ph* it_490;
int i_491;
struct sType* __dec_obj90;
struct list$1sType$ph* __result_obj__310;
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
        __result_obj__309 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__309;
    }
    it_490=self->head;
    i_491=0;
    while(it_490!=((void*)0)) {
        if(        position==i_491) {
            __dec_obj90=it_490->item,
            it_490->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_490=it_490->next;
        i_491++;
    }
    __result_obj__310 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value413 = (void*)0;
struct list_item$1sType$ph* litem_487;
struct sType* __dec_obj87;
void* __right_value414 = (void*)0;
struct list_item$1sType$ph* litem_488;
struct sType* __dec_obj88;
void* __right_value415 = (void*)0;
struct list_item$1sType$ph* litem_489;
struct sType* __dec_obj89;
struct list$1sType$ph* __result_obj__308;
    if(    self->len==0) {
        litem_487=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value413=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1111, "struct list_item$1sType$ph*"))));
        litem_487->prev=((void*)0);
        litem_487->next=((void*)0);
        __dec_obj87=litem_487->item,
        litem_487->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_487;
        self->head=litem_487;
    }
    else if(    self->len==1) {
        litem_488=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value414=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1121, "struct list_item$1sType$ph*"))));
        litem_488->prev=self->head;
        litem_488->next=((void*)0);
        __dec_obj88=litem_488->item,
        litem_488->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_488;
        self->head->next=litem_488;
    }
    else {
        litem_489=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value415=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1131, "struct list_item$1sType$ph*"))));
        litem_489->prev=self->tail;
        litem_489->next=((void*)0);
        __dec_obj89=litem_489->item,
        litem_489->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_489;
        self->tail=litem_489;
    }
    self->len++;
    __result_obj__308 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_494;
struct sType* __result_obj__311;
struct sType* __result_obj__312;
struct sType* result_495;
struct sType* __result_obj__313;
result_494 = (void*)0;
result_495 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_494,0,sizeof(struct sType*));
        __result_obj__311 = result_494;
        return __result_obj__311;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__312 = self->it->item;
        return __result_obj__312;
    }
    memset(&result_495,0,sizeof(struct sType*));
    __result_obj__313 = result_495;
    return __result_obj__313;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_497;
struct sType* __result_obj__314;
struct sType* __result_obj__315;
struct sType* result_498;
struct sType* __result_obj__316;
result_497 = (void*)0;
result_498 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_497,0,sizeof(struct sType*));
        __result_obj__314 = result_497;
        return __result_obj__314;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__315 = self->it->item;
        return __result_obj__315;
    }
    memset(&result_498,0,sizeof(struct sType*));
    __result_obj__316 = result_498;
    return __result_obj__316;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value422 = (void*)0;
struct list_item$1CVALUE$ph* litem_509;
struct CVALUE* __dec_obj91;
void* __right_value423 = (void*)0;
struct list_item$1CVALUE$ph* litem_510;
struct CVALUE* __dec_obj92;
void* __right_value424 = (void*)0;
struct list_item$1CVALUE$ph* litem_511;
struct CVALUE* __dec_obj93;
struct list$1CVALUE$ph* __result_obj__318;
    if(    self->len==0) {
        litem_509=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value422=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1041, "struct list_item$1CVALUE$ph*"))));
        litem_509->prev=((void*)0);
        litem_509->next=((void*)0);
        __dec_obj91=litem_509->item,
        litem_509->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj91,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_509;
        self->head=litem_509;
    }
    else if(    self->len==1) {
        litem_510=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value423=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1051, "struct list_item$1CVALUE$ph*"))));
        litem_510->prev=self->head;
        litem_510->next=((void*)0);
        __dec_obj92=litem_510->item,
        litem_510->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_510;
        self->head->next=litem_510;
    }
    else {
        litem_511=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value424=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1061, "struct list_item$1CVALUE$ph*"))));
        litem_511->prev=self->tail;
        litem_511->next=((void*)0);
        __dec_obj93=litem_511->item,
        litem_511->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_511;
        self->tail=litem_511;
    }
    self->len++;
    __result_obj__318 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_517;
unsigned int it_518;
struct map$2char$phsFun$ph* __result_obj__319;
    hash_517=string_get_hash_key(((char*)key))%self->size;
    it_518=hash_517;
    while((_Bool)1) {
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
    __result_obj__319 = self;
    return __result_obj__319;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_555;
unsigned int hash_556;
unsigned int it_557;
struct sFun* __result_obj__324;
struct sFun* __result_obj__325;
struct sFun* __result_obj__326;
struct sFun* __result_obj__327;
default_value_555 = (void*)0;
    memset(&default_value_555,0,sizeof(struct sFun*));
    hash_556=string_get_hash_key(((char*)key))%self->size;
    it_557=hash_556;
    while((_Bool)1) {
        if(        self->item_existance[it_557]) {
            if(            string_equals(self->keys[it_557],key)) {
                __result_obj__324 = (struct sFun*)come_increment_ref_count(self->items[it_557]);
                /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__324,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__324;
            }
            it_557++;
            if(            it_557>=self->size) {
                it_557=0;
            }
            else if(            it_557==hash_556) {
                __result_obj__325 = (struct sFun*)come_increment_ref_count(default_value_555);
                /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__325,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__325;
            }
        }
        else {
            __result_obj__326 = (struct sFun*)come_increment_ref_count(default_value_555);
            /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__326,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__326;
        }
    }
    __result_obj__327 = (struct sFun*)come_increment_ref_count(default_value_555);
    /*c*/ come_call_finalizer3(default_value_555,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__327,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_558;
unsigned int hash_559;
unsigned int it_560;
struct sFun* __result_obj__328;
struct sFun* __result_obj__329;
struct sFun* __result_obj__330;
struct sFun* __result_obj__331;
default_value_558 = (void*)0;
    memset(&default_value_558,0,sizeof(struct sFun*));
    hash_559=string_get_hash_key(((char*)key))%self->size;
    it_560=hash_559;
    while((_Bool)1) {
        if(        self->item_existance[it_560]) {
            if(            string_equals(self->keys[it_560],key)) {
                __result_obj__328 = (struct sFun*)come_increment_ref_count(self->items[it_560]);
                /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__328,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__328;
            }
            it_560++;
            if(            it_560>=self->size) {
                it_560=0;
            }
            else if(            it_560==hash_559) {
                __result_obj__329 = (struct sFun*)come_increment_ref_count(default_value_558);
                /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__329,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__329;
            }
        }
        else {
            __result_obj__330 = (struct sFun*)come_increment_ref_count(default_value_558);
            /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__330,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__330;
        }
    }
    __result_obj__331 = (struct sFun*)come_increment_ref_count(default_value_558);
    /*c*/ come_call_finalizer3(default_value_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__331,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__335;
void* __right_value570 = (void*)0;
struct sFunCallNode* result_584;
void* __right_value571 = (void*)0;
char* __dec_obj145;
void* __right_value572 = (void*)0;
char* __dec_obj146;
void* __right_value573 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj147;
void* __right_value574 = (void*)0;
struct list$1sType$ph* __dec_obj148;
void* __right_value575 = (void*)0;
struct buffer* __dec_obj149;
struct sFunCallNode* __result_obj__336;
    if(    self==(void*)0) {
        __result_obj__335 = (void*)0;
        return __result_obj__335;
    }
    result_584=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj145=result_584->sname,
        result_584->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj146=result_584->fun_name,
        result_584->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj147=result_584->params,
        result_584->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj147,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj148=result_584->method_generics_types,
        result_584->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj148,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj149=result_584->method_block,
        result_584->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj149,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->method_block_sline=self->method_block_sline;
    }
    __result_obj__336 = result_584;
    /*c*/ come_call_finalizer3(result_584,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__336;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_606;
int i_607;
struct CVALUE* default_value_608;
struct list$1CVALUE$ph* __result_obj__343;
struct list_item$1CVALUE$ph* it_609;
int i_610;
struct CVALUE* __dec_obj151;
struct list$1CVALUE$ph* __result_obj__344;
default_value_608 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_606=self->len;
        for(        i_607=0;        i_607<position-len_606;        i_607++        ){
            memset(&default_value_608,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_608));
            /*c*/ come_call_finalizer3(default_value_608,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__343 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__343;
    }
    it_609=self->head;
    i_610=0;
    while(it_609!=((void*)0)) {
        if(        position==i_610) {
            __dec_obj151=it_609->item,
            it_609->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj151,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_609=it_609->next;
        i_610++;
    }
    __result_obj__344 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__344;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_623;
int i_624;
char* __result_obj__348;
char* default_value_625;
char* __result_obj__349;
default_value_625 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_623=self->head;
    i_624=0;
    while(it_623!=((void*)0)) {
        if(        position==i_624) {
            __result_obj__348 = (char*)come_increment_ref_count(it_623->item);
            (__result_obj__348 = come_decrement_ref_count(__result_obj__348, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__348;
        }
        it_623=it_623->next;
        i_624++;
    }
    memset(&default_value_625,0,sizeof(char*));
    __result_obj__349 = (char*)come_increment_ref_count(default_value_625);
    (default_value_625 = come_decrement_ref_count(default_value_625, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__349 = come_decrement_ref_count(__result_obj__349, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__349;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_626;
int i_627;
char* __result_obj__350;
char* default_value_628;
char* __result_obj__351;
default_value_628 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_626=self->head;
    i_627=0;
    while(it_626!=((void*)0)) {
        if(        position==i_627) {
            __result_obj__350 = (char*)come_increment_ref_count(it_626->item);
            (__result_obj__350 = come_decrement_ref_count(__result_obj__350, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__350;
        }
        it_626=it_626->next;
        i_627++;
    }
    memset(&default_value_628,0,sizeof(char*));
    __result_obj__351 = (char*)come_increment_ref_count(default_value_628);
    (default_value_628 = come_decrement_ref_count(default_value_628, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__351 = come_decrement_ref_count(__result_obj__351, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__351;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__356;
void* __right_value635 = (void*)0;
struct sCurrentNode2* result_644;
void* __right_value636 = (void*)0;
char* __dec_obj154;
struct sCurrentNode2* __result_obj__357;
    if(    self==(void*)0) {
        __result_obj__356 = (void*)0;
        return __result_obj__356;
    }
    result_644=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_644->sname,
        result_644->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode2_clone", 5, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_644->sline_real=self->sline_real;
    }
    __result_obj__357 = result_644;
    /*c*/ come_call_finalizer3(result_644,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__357;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_650;
unsigned int hash_651;
unsigned int it_652;
struct sClass* __result_obj__359;
struct sClass* __result_obj__360;
struct sClass* __result_obj__361;
struct sClass* __result_obj__362;
default_value_650 = (void*)0;
    memset(&default_value_650,0,sizeof(struct sClass*));
    hash_651=string_get_hash_key(((char*)key))%self->size;
    it_652=hash_651;
    while((_Bool)1) {
        if(        self->item_existance[it_652]) {
            if(            string_equals(self->keys[it_652],key)) {
                __result_obj__359 = (struct sClass*)come_increment_ref_count(self->items[it_652]);
                /*c*/ come_call_finalizer3(default_value_650,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__359;
            }
            it_652++;
            if(            it_652>=self->size) {
                it_652=0;
            }
            else if(            it_652==hash_651) {
                __result_obj__360 = (struct sClass*)come_increment_ref_count(default_value_650);
                /*c*/ come_call_finalizer3(default_value_650,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__360,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__360;
            }
        }
        else {
            __result_obj__361 = (struct sClass*)come_increment_ref_count(default_value_650);
            /*c*/ come_call_finalizer3(default_value_650,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__361,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__361;
        }
    }
    __result_obj__362 = (struct sClass*)come_increment_ref_count(default_value_650);
    /*c*/ come_call_finalizer3(default_value_650,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__362,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_653;
unsigned int hash_654;
unsigned int it_655;
struct sClass* __result_obj__363;
struct sClass* __result_obj__364;
struct sClass* __result_obj__365;
struct sClass* __result_obj__366;
default_value_653 = (void*)0;
    memset(&default_value_653,0,sizeof(struct sClass*));
    hash_654=string_get_hash_key(((char*)key))%self->size;
    it_655=hash_654;
    while((_Bool)1) {
        if(        self->item_existance[it_655]) {
            if(            string_equals(self->keys[it_655],key)) {
                __result_obj__363 = (struct sClass*)come_increment_ref_count(self->items[it_655]);
                /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__363,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__363;
            }
            it_655++;
            if(            it_655>=self->size) {
                it_655=0;
            }
            else if(            it_655==hash_654) {
                __result_obj__364 = (struct sClass*)come_increment_ref_count(default_value_653);
                /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__364,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__364;
            }
        }
        else {
            __result_obj__365 = (struct sClass*)come_increment_ref_count(default_value_653);
            /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__365,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__365;
        }
    }
    __result_obj__366 = (struct sClass*)come_increment_ref_count(default_value_653);
    /*c*/ come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__366,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__366;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value678 = (void*)0;
struct buffer* __dec_obj162;
struct sComeCallNode* __result_obj__371;
    ((struct sNodeBase*)(__right_value678=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value678,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj162=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj162,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__371 = (struct sComeCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__371,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value679 = (void*)0;
char* __result_obj__372;
    __result_obj__372 = (char*)come_increment_ref_count(((char*)(__right_value679=__builtin_string("sComeCallNode"))));
    (__right_value679 = come_decrement_ref_count(__right_value679, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__372 = come_decrement_ref_count(__result_obj__372, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__372;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_688;
struct buffer* come_block_689;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1CVALUE$ph* come_params_690;
void* __right_value682 = (void*)0;
char* var_name_692;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sType* type__693;
void* __right_value686 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_696=0;
char* Err_697=0;
_Bool _if_conditional30;
_Bool __result_obj__377;
void* __right_value687 = (void*)0;
struct sNode* var_node_698;
_Bool Value_699;
_Bool __result_obj__378;
void* __right_value688 = (void*)0;
struct CVALUE* thread_var_value_700;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct CVALUE* come_value_701;
void* __right_value691 = (void*)0;
char* __dec_obj163;
struct sType* __dec_obj164;
void* __right_value692 = (void*)0;
struct sNode* null_node_702;
_Bool Value_703;
_Bool __result_obj__379;
void* __right_value693 = (void*)0;
struct CVALUE* __dec_obj165;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value696 = (void*)0;
struct sNode* current_stack_frame_node_704;
_Bool Value_705;
_Bool __result_obj__380;
void* __right_value697 = (void*)0;
struct CVALUE* current_stack_frame_value_706;
void* __right_value698 = (void*)0;
char* fun_name_707;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct buffer* come_block2_708;
void* __right_value701 = (void*)0;
char* class_name_709;
void* __right_value702 = (void*)0;
struct sClass* current_stack_frame_struct_710;
void* __right_value703 = (void*)0;
struct buffer* source3_711;
char* p_712;
char* head_713;
int sline_714;
struct buffer* __dec_obj166;
void* __right_value704 = (void*)0;
struct sNode* node_715;
_Bool in_method_block_716;
_Bool Value_717;
_Bool __result_obj__381;
struct buffer* __dec_obj167;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct CVALUE* fun_value_718;
void* __right_value707 = (void*)0;
char* __dec_obj168;
struct sType* __dec_obj169;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct buffer* buf_719;
void* __right_value710 = (void*)0;
char* fun_name_720;
int j_721;
struct list$1CVALUE$ph* o2_saved_722;
struct CVALUE* it_723;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct CVALUE* come_value_724;
void* __right_value713 = (void*)0;
char* __dec_obj170;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sType* type_725;
void* __right_value717 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_726=0;
char* Err_727=0;
_Bool _if_conditional31;
_Bool __result_obj__382;
struct sType* __dec_obj171;
_Bool __result_obj__383;
    come_block_sline_688=self->come_block_sline;
    come_block_689=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_690=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1419, "struct list$1CVALUE$ph*"))));
    static int thread_num_691=0;
    thread_num_691++;
    var_name_692=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_691));
    type__693=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value684=map$2char$phsType$ph_at(info->types,((char*)(__right_value683=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value684,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__693==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value686=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_696=multiple_assign_var23->v1;
        Err_697=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_697)),        /*c*/ come_call_finalizer3(__right_value686,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional30) {
            __result_obj__377 = (_Bool)1;
            (Err_697 = come_decrement_ref_count(Err_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_689,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_690,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_692 = come_decrement_ref_count(var_name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__377;
        }
        else {
        }
        (Err_697 = come_decrement_ref_count(Err_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_698=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_692),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__693),(_Bool)1,((void*)0),info));
    Value_699=node_compile(var_node_698,info);
    if(    !Value_699) {
        __result_obj__378 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_689,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_690,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_692 = come_decrement_ref_count(var_name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_698) ? var_node_698 = come_decrement_ref_count(var_node_698, ((struct sNode*)var_node_698)->finalize, ((struct sNode*)var_node_698)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__378;
    }
    else {
    }
    thread_var_value_700=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_701=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1442, "struct CVALUE*"))));
    __dec_obj163=come_value_701->c_value,
    come_value_701->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_700->c_value));
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj164=come_value_701->type,
    come_value_701->type=(struct sType*)come_increment_ref_count(thread_var_value_700->type);
    /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_701->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_690,(struct CVALUE*)come_increment_ref_count(come_value_701));
    null_node_702=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_703=node_compile(null_node_702,info);
    if(    !Value_703) {
        __result_obj__379 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_689,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_690,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_692 = come_decrement_ref_count(var_name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_698) ? var_node_698 = come_decrement_ref_count(var_node_698, ((struct sNode*)var_node_698)->finalize, ((struct sNode*)var_node_698)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_700,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_701,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_702) ? null_node_702 = come_decrement_ref_count(null_node_702, ((struct sNode*)null_node_702)->finalize, ((struct sNode*)null_node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__379;
    }
    else {
    }
    __dec_obj165=come_value_701,
    come_value_701=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj165,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_690,(struct CVALUE*)come_increment_ref_count(come_value_701));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1459, "struct sNode");
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value695=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1459, "struct sCurrentNode2*")),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_704=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value695,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_705=node_compile(current_stack_frame_node_704,info);
    if(    !Value_705) {
        __result_obj__380 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_689,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_690,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_692 = come_decrement_ref_count(var_name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_698) ? var_node_698 = come_decrement_ref_count(var_node_698, ((struct sNode*)var_node_698)->finalize, ((struct sNode*)var_node_698)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_700,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_701,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_702) ? null_node_702 = come_decrement_ref_count(null_node_702, ((struct sNode*)null_node_702)->finalize, ((struct sNode*)null_node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_704) ? current_stack_frame_node_704 = come_decrement_ref_count(current_stack_frame_node_704, ((struct sNode*)current_stack_frame_node_704)->finalize, ((struct sNode*)current_stack_frame_node_704)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
    }
    else {
    }
    current_stack_frame_value_706=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_707=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_691));
    come_block2_708=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1469, "struct buffer*"))));
    class_name_709=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_708,"void* %s(%s* parent)\n",fun_name_707,class_name_709);
    buffer_append_str(come_block2_708,((char*)(__right_value702=buffer_to_string(come_block_689))));
    (__right_value702 = come_decrement_ref_count(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_710=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value703=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_709)));
    /*c*/ come_call_finalizer3(__right_value703,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_711=(struct buffer*)come_increment_ref_count(info->source);
    p_712=info->p;
    head_713=info->head;
    sline_714=info->sline;
    __dec_obj166=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_708);
    /*b*/ come_call_finalizer3(__dec_obj166,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_688;
    node_715=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_716=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_717=node_compile(node_715,info);
    if(    !Value_717) {
        __result_obj__381 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_689,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_690,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_692 = come_decrement_ref_count(var_name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_698) ? var_node_698 = come_decrement_ref_count(var_node_698, ((struct sNode*)var_node_698)->finalize, ((struct sNode*)var_node_698)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_700,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_701,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_702) ? null_node_702 = come_decrement_ref_count(null_node_702, ((struct sNode*)null_node_702)->finalize, ((struct sNode*)null_node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_704) ? current_stack_frame_node_704 = come_decrement_ref_count(current_stack_frame_node_704, ((struct sNode*)current_stack_frame_node_704)->finalize, ((struct sNode*)current_stack_frame_node_704)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_706,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_707 = come_decrement_ref_count(fun_name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_708,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_709 = come_decrement_ref_count(class_name_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_711,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_715) ? node_715 = come_decrement_ref_count(node_715, ((struct sNode*)node_715)->finalize, ((struct sNode*)node_715)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
    }
    else {
    }
    info->in_method_block=in_method_block_716;
    __dec_obj167=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_711);
    /*b*/ come_call_finalizer3(__dec_obj167,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_712;
    info->head=head_713;
    info->sline=sline_714;
    info->current_stack_frame_struct=current_stack_frame_struct_710;
    fun_value_718=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1514, "struct CVALUE*"))));
    __dec_obj168=fun_value_718->c_value,
    fun_value_718->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_707));
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj169=come_value_701->type,
    come_value_701->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_701->var=((void*)0);
    list$1CVALUE$ph_add(come_params_690,(struct CVALUE*)come_increment_ref_count(fun_value_718));
    list$1CVALUE$ph_add(come_params_690,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_706));
    buf_719=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1524, "struct buffer*"))));
    (fun_name_707 = come_decrement_ref_count(fun_name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_720=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_719,"(");
    buffer_append_str(buf_719,fun_name_720);
    buffer_append_str(buf_719,"(");
    j_721=0;
    for(    o2_saved_722=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_690)),it_723=list$1CVALUE$ph_begin((o2_saved_722));    !list$1CVALUE$ph_end((o2_saved_722));    it_723=list$1CVALUE$ph_next((o2_saved_722))    ){
        buffer_append_str(buf_719,it_723->c_value);
        if(        j_721!=list$1CVALUE$ph_length(come_params_690)-1) {
            buffer_append_str(buf_719,",");
        }
        j_721++;
    }
    /*c*/ come_call_finalizer3(o2_saved_722,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_719,")");
    buffer_append_str(buf_719,", ");
    buffer_append_str(buf_719,thread_var_value_700->c_value);
    buffer_append_str(buf_719,")");
    /*c*/ come_call_finalizer3(come_value_701,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_724=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1547, "struct CVALUE*"))));
    __dec_obj170=come_value_724->c_value,
    come_value_724->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_719));
    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_725=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value715=map$2char$phsType$ph_at(info->types,((char*)(__right_value714=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value715,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_725==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value717=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_726=multiple_assign_var24->v1;
        Err_727=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_727)),        /*c*/ come_call_finalizer3(__right_value717,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional31) {
            __result_obj__382 = (_Bool)1;
            (Err_727 = come_decrement_ref_count(Err_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_689,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_690,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_692 = come_decrement_ref_count(var_name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((var_node_698) ? var_node_698 = come_decrement_ref_count(var_node_698, ((struct sNode*)var_node_698)->finalize, ((struct sNode*)var_node_698)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(thread_var_value_700,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((null_node_702) ? null_node_702 = come_decrement_ref_count(null_node_702, ((struct sNode*)null_node_702)->finalize, ((struct sNode*)null_node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_704) ? current_stack_frame_node_704 = come_decrement_ref_count(current_stack_frame_node_704, ((struct sNode*)current_stack_frame_node_704)->finalize, ((struct sNode*)current_stack_frame_node_704)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(current_stack_frame_value_706,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_block2_708,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_709 = come_decrement_ref_count(class_name_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_711,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_715) ? node_715 = come_decrement_ref_count(node_715, ((struct sNode*)node_715)->finalize, ((struct sNode*)node_715)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(fun_value_718,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_719,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_720 = come_decrement_ref_count(fun_name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_724,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_725,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__382;
        }
        else {
        }
        (Err_727 = come_decrement_ref_count(Err_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj171=come_value_724->type,
    come_value_724->type=(struct sType*)come_increment_ref_count(type_725);
    /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_724->var=((void*)0);
    add_come_last_code(info,"%s",come_value_724->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_724));
    __result_obj__383 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_689,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_690,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_692 = come_decrement_ref_count(var_name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_698) ? var_node_698 = come_decrement_ref_count(var_node_698, ((struct sNode*)var_node_698)->finalize, ((struct sNode*)var_node_698)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_700,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_702) ? null_node_702 = come_decrement_ref_count(null_node_702, ((struct sNode*)null_node_702)->finalize, ((struct sNode*)null_node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_704) ? current_stack_frame_node_704 = come_decrement_ref_count(current_stack_frame_node_704, ((struct sNode*)current_stack_frame_node_704)->finalize, ((struct sNode*)current_stack_frame_node_704)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_706,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_708,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_709 = come_decrement_ref_count(class_name_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_711,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_715) ? node_715 = come_decrement_ref_count(node_715, ((struct sNode*)node_715)->finalize, ((struct sNode*)node_715)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_718,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_719,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_720 = come_decrement_ref_count(fun_name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_724,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_725,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__383;
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
unsigned int hash_694;
unsigned int it_695;
struct sType* __result_obj__373;
struct sType* __result_obj__374;
struct sType* __result_obj__375;
struct sType* __result_obj__376;
    hash_694=string_get_hash_key(((char*)key))%self->size;
    it_695=hash_694;
    while((_Bool)1) {
        if(        self->item_existance[it_695]) {
            if(            string_equals(self->keys[it_695],key)) {
                __result_obj__373 = (struct sType*)come_increment_ref_count(self->items[it_695]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__373,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__373;
            }
            it_695++;
            if(            it_695>=self->size) {
                it_695=0;
            }
            else if(            it_695==hash_694) {
                __result_obj__374 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__374,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__374;
            }
        }
        else {
            __result_obj__375 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__375,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__375;
        }
    }
    __result_obj__376 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__376,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__376;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value718 = (void*)0;
struct sNode* __dec_obj172;
struct sComeJoinNode* __result_obj__384;
    ((struct sNodeBase*)(__right_value718=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value718,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj172=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__384 = (struct sComeJoinNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__384,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__384;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value719 = (void*)0;
char* __result_obj__385;
    __result_obj__385 = (char*)come_increment_ref_count(((char*)(__right_value719=__builtin_string("sComeJoinNode"))));
    (__right_value719 = come_decrement_ref_count(__right_value719, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__385 = come_decrement_ref_count(__result_obj__385, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__385;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_728;
_Bool Value_729;
_Bool __result_obj__386;
void* __right_value720 = (void*)0;
struct CVALUE* come_value_730;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct buffer* buf_731;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct CVALUE* come_value_732;
void* __right_value725 = (void*)0;
char* __dec_obj173;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* __dec_obj174;
_Bool __result_obj__387;
    node_728=(struct sNode*)come_increment_ref_count(self->node);
    Value_729=node_compile(node_728,info);
    if(    !Value_729) {
        __result_obj__386 = (_Bool)0;
        ((node_728) ? node_728 = come_decrement_ref_count(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__386;
    }
    else {
    }
    come_value_730=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_731=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1596, "struct buffer*"))));
    buffer_append_str(buf_731,"pthread_join(");
    buffer_append_str(buf_731,come_value_730->c_value);
    buffer_append_str(buf_731,", 0)");
    /*c*/ come_call_finalizer3(come_value_730,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_732=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1601, "struct CVALUE*"))));
    __dec_obj173=come_value_732->c_value,
    come_value_732->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_731));
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj174=come_value_732->type,
    come_value_732->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1603, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_732->var=((void*)0);
    add_come_last_code(info,"%s",come_value_732->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_732));
    __result_obj__387 = (_Bool)1;
    ((node_728) ? node_728 = come_decrement_ref_count(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_731,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_732,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__387;
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
void* __right_value729 = (void*)0;
struct list$1sNode$ph* __dec_obj175;
struct list$1sBlock$ph* __dec_obj176;
struct sBlock* __dec_obj177;
struct sComePollNode* __result_obj__388;
    ((struct sNodeBase*)(__right_value729=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value729,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj175=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    /*b*/ come_call_finalizer3(__dec_obj175,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj176=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    /*b*/ come_call_finalizer3(__dec_obj176,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj177=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    /*b*/ come_call_finalizer3(__dec_obj177,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__388 = (struct sComePollNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__388,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__388;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value730 = (void*)0;
char* __result_obj__389;
    __result_obj__389 = (char*)come_increment_ref_count(((char*)(__right_value730=__builtin_string("sComePollNode"))));
    (__right_value730 = come_decrement_ref_count(__right_value730, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__389 = come_decrement_ref_count(__result_obj__389, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__389;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_737;
struct list$1sBlock$ph* blocks_738;
int time_out_739;
int n_741;
struct list$1sNode$ph* o2_saved_742;
struct sNode* it_745;
_Bool Value_748;
_Bool __result_obj__396;
void* __right_value731 = (void*)0;
struct CVALUE* come_value_749;
int n_750;
struct list$1sNode$ph* o2_saved_751;
struct sNode* it_752;
void* __right_value732 = (void*)0;
_Bool __result_obj__401;
    vars_737=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_738=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_739=self->time_out;
    static int var_num_740=0;
    var_num_740++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_740,list$1sNode$ph_length(vars_737));
    n_741=0;
    for(    o2_saved_742=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_745=list$1sNode$ph_begin((o2_saved_742));    !list$1sNode$ph_end((o2_saved_742));    it_745=list$1sNode$ph_next((o2_saved_742))    ){
        Value_748=node_compile(it_745,info);
        if(        !Value_748) {
            __result_obj__396 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_742,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_737,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_738,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__396;
        }
        else {
        }
        come_value_749=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_740,n_741,come_value_749->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_740,n_741,1);
        n_741++;
        /*c*/ come_call_finalizer3(come_value_749,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_742,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_740,var_num_740,list$1sNode$ph_length(vars_737),time_out_739);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_740);
    n_750=0;
    for(    o2_saved_751=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_752=list$1sNode$ph_begin((o2_saved_751));    !list$1sNode$ph_end((o2_saved_751));    it_752=list$1sNode$ph_next((o2_saved_751))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_740,n_750,1);
        transpile_block(((struct sBlock*)(__right_value732=list$1sBlock$ph_operator_load_element(blocks_738,n_750))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value732,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_750++;
    }
    /*c*/ come_call_finalizer3(o2_saved_751,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_740);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__401 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_737,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_738,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__401;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_733;
struct list_item$1sBlock$ph* prev_it_734;
    it_733=self->head;
    while(it_733!=((void*)0)) {
        prev_it_734=it_733;
        it_733=it_733->next;
        /*c*/ come_call_finalizer3(prev_it_734,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sBlock$ph* it_735;
struct list_item$1sBlock$ph* prev_it_736;
    it_735=self->head;
    while(it_735!=((void*)0)) {
        prev_it_736=it_735;
        it_735=it_735->next;
        /*c*/ come_call_finalizer3(prev_it_736,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_743;
struct sNode* __result_obj__390;
struct sNode* __result_obj__391;
struct sNode* result_744;
struct sNode* __result_obj__392;
result_743 = (void*)0;
result_744 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_743,0,sizeof(struct sNode*));
        __result_obj__390 = result_743;
        return __result_obj__390;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__391 = self->it->item;
        return __result_obj__391;
    }
    memset(&result_744,0,sizeof(struct sNode*));
    __result_obj__392 = result_744;
    return __result_obj__392;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_746;
struct sNode* __result_obj__393;
struct sNode* __result_obj__394;
struct sNode* result_747;
struct sNode* __result_obj__395;
result_746 = (void*)0;
result_747 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_746,0,sizeof(struct sNode*));
        __result_obj__393 = result_746;
        return __result_obj__393;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__394 = self->it->item;
        return __result_obj__394;
    }
    memset(&result_747,0,sizeof(struct sNode*));
    __result_obj__395 = result_747;
    return __result_obj__395;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_753;
int i_754;
struct sBlock* __result_obj__397;
struct sBlock* default_value_755;
struct sBlock* __result_obj__398;
default_value_755 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_753=self->head;
    i_754=0;
    while(it_753!=((void*)0)) {
        if(        position==i_754) {
            __result_obj__397 = (struct sBlock*)come_increment_ref_count(it_753->item);
            /*c*/ come_call_finalizer3(__result_obj__397,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__397;
        }
        it_753=it_753->next;
        i_754++;
    }
    memset(&default_value_755,0,sizeof(struct sBlock*));
    __result_obj__398 = (struct sBlock*)come_increment_ref_count(default_value_755);
    /*c*/ come_call_finalizer3(default_value_755,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__398,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__398;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_756;
int i_757;
struct sBlock* __result_obj__399;
struct sBlock* default_value_758;
struct sBlock* __result_obj__400;
default_value_758 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_756=self->head;
    i_757=0;
    while(it_756!=((void*)0)) {
        if(        position==i_757) {
            __result_obj__399 = (struct sBlock*)come_increment_ref_count(it_756->item);
            /*c*/ come_call_finalizer3(__result_obj__399,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__399;
        }
        it_756=it_756->next;
        i_757++;
    }
    memset(&default_value_758,0,sizeof(struct sBlock*));
    __result_obj__400 = (struct sBlock*)come_increment_ref_count(default_value_758);
    /*c*/ come_call_finalizer3(default_value_758,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__400,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__400;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value735 = (void*)0;
struct sNode* node_759;
void* __right_value736 = (void*)0;
struct sNode* __dec_obj178;
struct sNode* __result_obj__402;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1686, "struct sNode");
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value734=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1686, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_759=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*c*/ come_call_finalizer3(__right_value734,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj178=node_759,
    node_759=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_759),info));
    (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__402 = (struct sNode*)come_increment_ref_count(node_759);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_759) ? node_759 = come_decrement_ref_count(node_759, ((struct sNode*)node_759)->finalize, ((struct sNode*)node_759)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__402) ? __result_obj__402 = come_decrement_ref_count(__result_obj__402, ((struct sNode*)__result_obj__402)->finalize, ((struct sNode*)__result_obj__402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__402;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value737 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value738 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj180;
struct sLambdaCall* __result_obj__403;
    ((struct sNodeBase*)(__right_value737=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value737,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj179=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj180=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj180,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__403 = (struct sLambdaCall*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__403,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__403;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value739 = (void*)0;
char* __result_obj__404;
    __result_obj__404 = (char*)come_increment_ref_count(((char*)(__right_value739=__builtin_string("sLambdaCall"))));
    (__right_value739 = come_decrement_ref_count(__right_value739, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__404 = come_decrement_ref_count(__result_obj__404, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__404;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_760;
struct list$1tuple2$2char$phsNode$ph$ph* params_761;
_Bool Value_762;
_Bool __result_obj__405;
void* __right_value740 = (void*)0;
struct CVALUE* come_value_763;
struct sType* lambda_type_764;
void* __right_value741 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_765=0;
char* Err_766=0;
_Bool _if_conditional32;
_Bool __result_obj__406;
void* __right_value742 = (void*)0;
struct sType* result_type_767;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct list$1CVALUE$ph* come_params_768;
void* __right_value745 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_769=0;
char* Err_770=0;
_Bool _if_conditional33;
_Bool __result_obj__407;
_Bool __result_obj__408;
int i_771;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_772;
struct tuple2$2char$phsNode$ph* it_773;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_774=0;
struct sNode* node_775=0;
_Bool Value_776;
_Bool __result_obj__409;
void* __right_value746 = (void*)0;
struct CVALUE* come_value_777;
void* __right_value747 = (void*)0;
_Bool _if_conditional34;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_778=0;
char* Err_779=0;
_Bool _if_conditional35;
_Bool __result_obj__410;
void* __right_value752 = (void*)0;
_Bool _if_conditional36;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct buffer* buf_780;
int j_781;
struct list$1CVALUE$ph* o2_saved_782;
struct CVALUE* it_783;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct CVALUE* come_value2_784;
void* __right_value758 = (void*)0;
char* __dec_obj181;
void* __right_value759 = (void*)0;
struct sType* __dec_obj182;
_Bool __result_obj__411;
    node_760=(struct sNode*)come_increment_ref_count(self->node);
    params_761=self->params;
    Value_762=node_compile(node_760,info);
    if(    !Value_762) {
        __result_obj__405 = (_Bool)0;
        ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__405;
    }
    else {
    }
    come_value_763=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_764=come_value_763->type;
    if(    lambda_type_764->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value741=err_msg(info,"invalid lambda type")));
        come_exception_var_15_765=multiple_assign_var25->v1;
        Err_766=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_766)),        /*c*/ come_call_finalizer3(__right_value741,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional32) {
            __result_obj__406 = (_Bool)1;
            (Err_766 = come_decrement_ref_count(Err_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_763,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__406;
        }
        else {
        }
        (Err_766 = come_decrement_ref_count(Err_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_767=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_764->mResultType));
    result_type_767->mStatic=(_Bool)0;
    come_params_768=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1730, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_764->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_761)&&!lambda_type_764->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value745=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_764->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_761))));
        come_exception_var_16_769=multiple_assign_var26->v1;
        Err_770=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_770)),        /*c*/ come_call_finalizer3(__right_value745,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional33) {
            __result_obj__407 = (_Bool)1;
            (Err_770 = come_decrement_ref_count(Err_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_763,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_767,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_768,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__407;
        }
        else {
        }
        __result_obj__408 = (_Bool)0;
        (Err_770 = come_decrement_ref_count(Err_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_763,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_767,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_768,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__408;
        (Err_770 = come_decrement_ref_count(Err_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_771=0;
    for(    o2_saved_772=(params_761),it_773=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_772));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_772));    it_773=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_772))    ){
        multiple_assign_var27=it_773;
        label_774=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_775=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_776=node_compile(node_775,info);
        if(        !Value_776) {
            __result_obj__409 = (_Bool)0;
            (label_774 = come_decrement_ref_count(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_775) ? node_775 = come_decrement_ref_count(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_763,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_767,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_768,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__409;
        }
        else {
        }
        come_value_777=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_764->mVarArgs&&((struct sType*)(__right_value747=list$1sType$ph_operator_load_element(lambda_type_764->mParamTypes,i_771)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value747,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value751=check_assign_type(((char*)(__right_value749=xsprintf("calling param #\%s",((char*)(__right_value748=int_to_string(i_771)))))),((struct sType*)(__right_value750=list$1sType$ph_operator_load_element(lambda_type_764->mParamTypes,i_771))),come_value_777->type,come_value_777,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_778=multiple_assign_var28->v1;
            Err_779=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_779)),            (__right_value748 = come_decrement_ref_count(__right_value748, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value749 = come_decrement_ref_count(__right_value749, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value750,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value751,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional35) {
                __result_obj__410 = (_Bool)1;
                (Err_779 = come_decrement_ref_count(Err_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_774 = come_decrement_ref_count(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_775) ? node_775 = come_decrement_ref_count(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_777,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_763,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_767,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_768,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__410;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)(__right_value752=list$1sType$ph_operator_load_element(lambda_type_764->mParamTypes,i_771)))->mHeap&&come_value_777->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value752,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)(__right_value753=list$1sType$ph_operator_load_element(lambda_type_764->mParamTypes,i_771))),come_value_777->type,come_value_777,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value753,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (Err_779 = come_decrement_ref_count(Err_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(come_params_768,(struct CVALUE*)come_increment_ref_count(come_value_777));
        i_771++;
        (label_774 = come_decrement_ref_count(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_775) ? node_775 = come_decrement_ref_count(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_777,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_780=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1764, "struct buffer*"))));
    buffer_append_str(buf_780,"(");
    buffer_append_str(buf_780,come_value_763->c_value);
    buffer_append_str(buf_780,")");
    buffer_append_str(buf_780,"(");
    j_781=0;
    for(    o2_saved_782=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_768)),it_783=list$1CVALUE$ph_begin((o2_saved_782));    !list$1CVALUE$ph_end((o2_saved_782));    it_783=list$1CVALUE$ph_next((o2_saved_782))    ){
        buffer_append_str(buf_780,it_783->c_value);
        if(        j_781!=list$1CVALUE$ph_length(come_params_768)-1) {
            buffer_append_str(buf_780,",");
        }
        j_781++;
    }
    /*c*/ come_call_finalizer3(o2_saved_782,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_780,")");
    come_value2_784=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1783, "struct CVALUE*"))));
    __dec_obj181=come_value2_784->c_value,
    come_value2_784->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_780));
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_764->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_784,(struct sType*)come_increment_ref_count(lambda_type_764->mResultType),info,(_Bool)0,((void*)0),((void*)0));
    }
    __dec_obj182=come_value2_784->type,
    come_value2_784->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_767));
    /*b*/ come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_784->type->mStatic=(_Bool)0;
    come_value2_784->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_784->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_784));
    __result_obj__411 = (_Bool)1;
    ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_763,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_767,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_768,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_780,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_784,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__411;
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
void* __right_value760 = (void*)0;
struct sType* __dec_obj183;
struct sVarArgTypeName* __result_obj__412;
    ((struct sNodeBase*)(__right_value760=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value760,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj183=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__412 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__412,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__412;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value761 = (void*)0;
char* __result_obj__413;
    __result_obj__413 = (char*)come_increment_ref_count(((char*)(__right_value761=__builtin_string("sVarArgTypeName"))));
    (__right_value761 = come_decrement_ref_count(__right_value761, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__413 = come_decrement_ref_count(__result_obj__413, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__413;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_785;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct CVALUE* come_value_786;
void* __right_value764 = (void*)0;
char* __dec_obj184;
struct sType* __dec_obj185;
_Bool __result_obj__414;
    type_785=(struct sType*)come_increment_ref_count(self->type);
    come_value_786=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1820, "struct CVALUE*"))));
    __dec_obj184=come_value_786->c_value,
    come_value_786->c_value=(char*)come_increment_ref_count(make_type_name_string(type_785,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj185=come_value_786->type,
    come_value_786->type=(struct sType*)come_increment_ref_count(type_785);
    /*b*/ come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_786->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_786));
    __result_obj__414 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_786,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__414;
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
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1sType$ph* method_generics_types_787;
void* __right_value767 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_788=0;
char* Err_789=0;
void* __right_value768 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_790=0;
char* name_791=0;
_Bool err_792=0;
void* __right_value769 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_793=0;
char* Err_794=0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_795;
_Bool _va_arg_796;
char* p_797;
int sline_798;
_Bool err_flag_799;
void* __right_value773 = (void*)0;
char* label_800;
void* __right_value774 = (void*)0;
char* __dec_obj186;
char* __dec_obj187;
_Bool no_comma_801;
_Bool in_fun_param_802;
void* __right_value775 = (void*)0;
struct sNode* node_803;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct buffer* method_block_808;
int method_block_sline_809;
char* head_810;
void* __right_value782 = (void*)0;
char* tail_811;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct buffer* __dec_obj194;
int len_812;
void* __right_value785 = (void*)0;
char* mem_813;
_Bool guard_break_814;
struct sNode* node_815;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value788 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value789 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value790 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sNode* _inf_value7;
struct sFunCallNode* _inf_obj_value7;
void* __right_value793 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value794 = (void*)0;
struct sNode* __dec_obj199;
struct sNode* __result_obj__417;
node_815 = (void*)0;
    method_generics_types_787=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1834, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value767=err_msg(info,"unexpected source end")));
                come_exception_var_c1_788=multiple_assign_var29->v1;
                Err_789=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_789)?(puts(Err_789),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value767,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_789 = come_decrement_ref_count(Err_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value768=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_790=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_791=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_792=multiple_assign_var30->v3;
                /*c*/ come_call_finalizer3(__right_value768,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_792) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value769=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_793=multiple_assign_var31->v1;
                    Err_794=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_794)?(puts(Err_794),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value769,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_794 = come_decrement_ref_count(Err_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph_push_back(method_generics_types_787,(struct sType*)come_increment_ref_count(sType_clone(type_790)));
                /*c*/ come_call_finalizer3(type_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_791 = come_decrement_ref_count(name_791, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_795=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1872, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_796=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_797=info->p;
        sline_798=info->sline;
        err_flag_799=(_Bool)0;
        label_800=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj186=label_800,
            label_800=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_799=(_Bool)1;
        }
        if(        err_flag_799==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj187=label_800,
            label_800=((void*)0);
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_797;
            info->sline=sline_798;
        }
        no_comma_801=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_802=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_803=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj188=node_803,
        node_803=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_803),info));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_801;
        info->in_fun_param=in_fun_param_802;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_795,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1920, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_800),(struct sNode*)come_increment_ref_count(node_803))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_800 = come_decrement_ref_count(label_800, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_803) ? node_803 = come_decrement_ref_count(node_803, ((struct sNode*)node_803)->finalize, ((struct sNode*)node_803)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_800 = come_decrement_ref_count(label_800, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_803) ? node_803 = come_decrement_ref_count(node_803, ((struct sNode*)node_803)->finalize, ((struct sNode*)node_803)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_796;
    parse_sharp_v5(info);
    method_block_808=((void*)0);
    method_block_sline_809=0;
    if(    *info->p==123) {
        head_810=info->p;
        method_block_sline_809=info->sline;
        ((char*)(__right_value782=skip_block(info)));
        (__right_value782 = come_decrement_ref_count(__right_value782, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_811=info->p;
        __dec_obj194=method_block_808,
        method_block_808=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1950, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj194,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_812=tail_811-head_810;
        mem_813=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_812+1)), "05call.c", 1953, "char*"));
        memcpy(mem_813,head_810,len_812);
        mem_813[len_812]=0;
        buffer_append_str(method_block_808,mem_813);
        buffer_append_str(method_block_808,"\n");
        (mem_813 = come_decrement_ref_count(mem_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    guard_break_814=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1969, "struct sNode");
        _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value787=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1969, "struct sFunCallNode*")),fun_name,params_795,guard_break_814,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_787),(struct buffer*)come_increment_ref_count(method_block_808),method_block_sline_809,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunCallNode_finalize;
        _inf_value6->clone=(void*)sFunCallNode_clone;
        _inf_value6->compile=(void*)sFunCallNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sFunCallNode_terminated;
        _inf_value6->kind=(void*)sFunCallNode_kind;
        __dec_obj195=node_815,
        node_815=(struct sNode*)come_increment_ref_count(_inf_value6);
        (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value787,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj196=node_815,
        node_815=(struct sNode*)come_increment_ref_count(create_guard_break_method_call((struct sNode*)come_increment_ref_count(node_815),info));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __dec_obj197=node_815,
        node_815=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_815),info));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    else {
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1976, "struct sNode");
        _inf_obj_value7=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value792=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1976, "struct sFunCallNode*")),fun_name,params_795,guard_break_814,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_787),(struct buffer*)come_increment_ref_count(method_block_808),method_block_sline_809,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFunCallNode_finalize;
        _inf_value7->clone=(void*)sFunCallNode_clone;
        _inf_value7->compile=(void*)sFunCallNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sFunCallNode_terminated;
        _inf_value7->kind=(void*)sFunCallNode_kind;
        __dec_obj198=node_815,
        node_815=(struct sNode*)come_increment_ref_count(_inf_value7);
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value792,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj199=node_815,
        node_815=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_815),info));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    parse_sharp_v5(info);
    __result_obj__417 = (struct sNode*)come_increment_ref_count(node_815);
    /*c*/ come_call_finalizer3(method_generics_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_795,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_808,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_815) ? node_815 = come_decrement_ref_count(node_815, ((struct sNode*)node_815)->finalize, ((struct sNode*)node_815)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__417) ? __result_obj__417 = come_decrement_ref_count(__result_obj__417, ((struct sNode*)__result_obj__417)->finalize, ((struct sNode*)__result_obj__417)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__417;
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
void* __right_value777 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_804;
struct tuple2$2char$phsNode$ph* __dec_obj189;
void* __right_value778 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_805;
struct tuple2$2char$phsNode$ph* __dec_obj190;
void* __right_value779 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_806;
struct tuple2$2char$phsNode$ph* __dec_obj191;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__415;
    if(    self->len==0) {
        litem_804=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value777=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1111, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_804->prev=((void*)0);
        litem_804->next=((void*)0);
        __dec_obj189=litem_804->item,
        litem_804->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj189,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_804;
        self->head=litem_804;
    }
    else if(    self->len==1) {
        litem_805=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value778=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1121, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_805->prev=self->head;
        litem_805->next=((void*)0);
        __dec_obj190=litem_805->item,
        litem_805->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj190,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_805;
        self->head->next=litem_805;
    }
    else {
        litem_806=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value779=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1131, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_806->prev=self->tail;
        litem_806->next=((void*)0);
        __dec_obj191=litem_806->item,
        litem_806->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj191,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_806;
        self->tail=litem_806;
    }
    self->len++;
    __result_obj__415 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__415;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_807;
    result_807=0;
    result_807+=int_get_hash_key(((int)self->v1));
    result_807+=int_get_hash_key(((int)self->v2));
    return result_807;
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
char* __dec_obj192;
struct sNode* __dec_obj193;
struct tuple2$2char$phsNode$ph* __result_obj__416;
    __dec_obj192=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj193=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__416 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__416,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__416;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value795 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_816=0;
char* Err_817=0;
struct sNode* __result_obj__418;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value795=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_exception_var_c3_816=multiple_assign_var32->v1;
    Err_817=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_817)?(puts(Err_817),exit(2)):(0));
    /*c*/ come_call_finalizer3(__right_value795,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    stackframe_v2();
    exit(3);
    __result_obj__418 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (Err_817 = come_decrement_ref_count(Err_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__418) ? __result_obj__418 = come_decrement_ref_count(__result_obj__418, ((struct sNode*)__result_obj__418)->finalize, ((struct sNode*)__result_obj__418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__418;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value802 = (void*)0;
struct sNode* __result_obj__421;
    _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2000, "struct sNode");
    _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value797=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2000, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sReturnNode_finalize;
    _inf_value8->clone=(void*)sReturnNode_clone;
    _inf_value8->compile=(void*)sReturnNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sNodeBase_terminated;
    _inf_value8->kind=(void*)sReturnNode_kind;
    __result_obj__421 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value802=_inf_value8)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value797,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value802) ? __right_value802 = come_decrement_ref_count(__right_value802, ((struct sNode*)__right_value802)->finalize, ((struct sNode*)__right_value802)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__421) ? __result_obj__421 = come_decrement_ref_count(__result_obj__421, ((struct sNode*)__result_obj__421)->finalize, ((struct sNode*)__result_obj__421)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__421;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__419;
void* __right_value798 = (void*)0;
struct sReturnNode* result_818;
void* __right_value799 = (void*)0;
char* __dec_obj200;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value801 = (void*)0;
char* __dec_obj202;
struct sReturnNode* __result_obj__420;
    if(    self==(void*)0) {
        __result_obj__419 = (void*)0;
        return __result_obj__419;
    }
    result_818=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_818->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_818->sname,
        result_818->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_818->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj201=result_818->value,
        result_818->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj202=result_818->value_source,
        result_818->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__420 = result_818;
    /*c*/ come_call_finalizer3(result_818,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__420;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value806 = (void*)0;
struct sNode* __result_obj__422;
char* head_819;
void* __right_value807 = (void*)0;
struct sNode* value_820;
char* tail_821;
void* __right_value808 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value10;
struct sReturnNode* _inf_obj_value10;
void* __right_value812 = (void*)0;
struct sNode* __result_obj__423;
int nest_823;
char* head_824;
int head_sline_825;
int sline_real_826;
void* __right_value813 = (void*)0;
char* buf_827;
_Bool is_type_name__828;
_Bool is_special_word_830;
_Bool define_function_pointer_flag_831;
void* __right_value814 = (void*)0;
_Bool lambda_flag_832;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
char* word2_833;
_Bool fun_name_with_type_name_834;
void* __right_value817 = (void*)0;
char* word2_835;
_Bool call_method_generics_fun_call_836;
void* __right_value818 = (void*)0;
char* __dec_obj204;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
_Bool _if_conditional37;
int nest_837;
_Bool inline_asm_838;
void* __right_value825 = (void*)0;
char* __dec_obj205;
void* __right_value826 = (void*)0;
char* __dec_obj206;
void* __right_value827 = (void*)0;
char* __dec_obj207;
void* __right_value828 = (void*)0;
struct sNode* node_839;
struct sNode* __result_obj__424;
_Bool no_comma_840;
void* __right_value829 = (void*)0;
struct sNode* exp_841;
void* __right_value830 = (void*)0;
struct sNode* exp2_842;
void* __right_value831 = (void*)0;
struct sNode* __result_obj__425;
void* __right_value832 = (void*)0;
char* block_text_843;
char* contents_844;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value11;
struct sOutputNode* _inf_obj_value11;
void* __right_value838 = (void*)0;
struct sNode* __result_obj__428;
void* __right_value839 = (void*)0;
struct sNode* node_846;
struct sNode* __result_obj__429;
void* __right_value840 = (void*)0;
struct sNode* node_847;
struct sNode* __result_obj__430;
struct buffer* come_block_848;
int come_block_sline_849;
char* head_850;
void* __right_value841 = (void*)0;
char* tail_851;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct buffer* __dec_obj210;
int len_852;
void* __right_value844 = (void*)0;
char* mem_853;
char* head_854;
_Bool no_output_come_code_855;
void* __right_value845 = (void*)0;
char* tail_856;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct buffer* __dec_obj211;
int len_857;
void* __right_value848 = (void*)0;
char* mem_858;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sNode* _inf_value12;
struct sComeCallNode* _inf_obj_value12;
void* __right_value854 = (void*)0;
struct sNode* node_859;
struct sNode* __result_obj__433;
struct buffer* come_block_861;
int come_block_sline_862;
void* __right_value855 = (void*)0;
struct sNode* node_863;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sNode* _inf_value13;
struct sComeJoinNode* _inf_obj_value13;
void* __right_value861 = (void*)0;
struct sNode* __result_obj__436;
int time_out_865;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct list$1sNode$ph* vars_866;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct list$1sBlock$ph* blocks_867;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sBlock* else_block_868;
void* __right_value868 = (void*)0;
struct sBlock* __dec_obj216;
void* __right_value869 = (void*)0;
struct sNode* var_name_869;
void* __right_value870 = (void*)0;
struct sBlock* block_870;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct sNode* _inf_value14;
struct sComePollNode* _inf_obj_value14;
void* __right_value920 = (void*)0;
struct sNode* __result_obj__460;
void* __right_value921 = (void*)0;
struct sNode* node_906;
struct sNode* __result_obj__461;
void* __right_value922 = (void*)0;
struct sNode* node_907;
struct sNode* __result_obj__462;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value15;
struct sFuncNode* _inf_obj_value15;
void* __right_value927 = (void*)0;
struct sNode* __result_obj__465;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sNode* _inf_value16;
struct sWildCard* _inf_obj_value16;
void* __right_value932 = (void*)0;
struct sNode* __result_obj__468;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value17;
struct sLineNode* _inf_obj_value17;
void* __right_value937 = (void*)0;
struct sNode* __result_obj__471;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* _inf_value18;
struct sSNameNode* _inf_obj_value18;
void* __right_value942 = (void*)0;
struct sNode* __result_obj__474;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sNode* _inf_value19;
struct sCallerFuncNode* _inf_obj_value19;
void* __right_value947 = (void*)0;
struct sNode* __result_obj__477;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sNode* _inf_value20;
struct sCallerLineNode* _inf_obj_value20;
void* __right_value952 = (void*)0;
struct sNode* __result_obj__480;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sNode* _inf_value21;
struct sCallerSNameNode* _inf_obj_value21;
void* __right_value957 = (void*)0;
struct sNode* __result_obj__483;
void* __right_value958 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_915=0;
char* name_916=0;
_Bool err_917=0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* _inf_value22;
struct sVarArgTypeName* _inf_obj_value22;
void* __right_value964 = (void*)0;
struct sNode* __result_obj__486;
void* __right_value965 = (void*)0;
struct sNode* node_919;
struct sNode* __result_obj__487;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct buffer* buf2_920;
void* __right_value968 = (void*)0;
char* word_921;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct list$1sNode$ph* exps_922;
void* __right_value971 = (void*)0;
struct sNode* exp_923;
void* __right_value972 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_924=0;
char* Err_925=0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* _inf_value23;
struct sInlineAssembler* _inf_obj_value23;
void* __right_value980 = (void*)0;
struct sNode* __result_obj__490;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct buffer* fun_name_927;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct sType* type_928;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sClass* klass_935;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct sType* __dec_obj245;
void* __right_value993 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_936=0;
char* Err_937=0;
void* __right_value994 = (void*)0;
char* buf2_938;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sNode* node_939;
struct sNode* __result_obj__499;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct buffer* fun_name_940;
void* __right_value999 = (void*)0;
char* buf2_941;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct sNode* node_942;
struct sNode* __result_obj__500;
void* __right_value1002 = (void*)0;
struct sNode* node_943;
struct sNode* __result_obj__501;
void* __right_value1003 = (void*)0;
struct sNode* node_944;
struct sNode* __result_obj__502;
void* __right_value1004 = (void*)0;
struct sNode* node_945;
struct sNode* __result_obj__503;
void* __right_value1005 = (void*)0;
struct sNode* node_946;
struct sNode* __result_obj__504;
void* __right_value1006 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_947=0;
char* Err_948=0;
struct sNode* __result_obj__505;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2013, "struct sNode");
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value805=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2013, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__422 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value806=_inf_value9)));
            /*c*/ come_call_finalizer3(__right_value805,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value806) ? __right_value806 = come_decrement_ref_count(__right_value806, ((struct sNode*)__right_value806)->finalize, ((struct sNode*)__right_value806)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__422) ? __result_obj__422 = come_decrement_ref_count(__result_obj__422, ((struct sNode*)__result_obj__422)->finalize, ((struct sNode*)__result_obj__422)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__422;
        }
        else {
            head_819=info->p;
            value_820=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_821=info->p;
            __dec_obj203=value_820,
            value_820=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_820),info));
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_822[tail_821-head_819+1];
            memset(&buf_822, 0, sizeof(char)            *(tail_821-head_819+1)            );
            memcpy(buf_822,head_819,tail_821-head_819);
            buf_822[tail_821-head_819]=0;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2025, "struct sNode");
            _inf_obj_value10=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value811=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2025, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_820),(char*)come_increment_ref_count(__builtin_string(buf_822)),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sReturnNode_finalize;
            _inf_value10->clone=(void*)sReturnNode_clone;
            _inf_value10->compile=(void*)sReturnNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sReturnNode_kind;
            __result_obj__423 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value812=_inf_value10)));
            ((value_820) ? value_820 = come_decrement_ref_count(value_820, ((struct sNode*)value_820)->finalize, ((struct sNode*)value_820)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value811,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value812) ? __right_value812 = come_decrement_ref_count(__right_value812, ((struct sNode*)__right_value812)->finalize, ((struct sNode*)__right_value812)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__423) ? __result_obj__423 = come_decrement_ref_count(__result_obj__423, ((struct sNode*)__result_obj__423)->finalize, ((struct sNode*)__result_obj__423)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__423;
            ((value_820) ? value_820 = come_decrement_ref_count(value_820, ((struct sNode*)value_820)->finalize, ((struct sNode*)value_820)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_823=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_823++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_823--;
                if(                nest_823==0) {
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
        head_824=info->p;
        head_sline_825=info->sline;
        sline_real_826=info->sline_real;
        info->sline_real=info->sline;
        buf_827=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__828=is_type_name(buf_827,info);
        static char* is_special_word_array_829[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_830=charppa_contained(is_special_word_array_829,19,buf_827);
        define_function_pointer_flag_831=(_Bool)0;
        if(        !is_special_word_830&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value814=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value814,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_831=(_Bool)1;
                }
            }
            info->p=head_824;
            info->sline=head_sline_825;
        }
        lambda_flag_832=(_Bool)0;
        if(        !is_special_word_830&&is_type_name__828) {
            info->p=head_824;
            info->sline=head_sline_825;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value815=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value815,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_833=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_833,"lambda")) {
                lambda_flag_832=(_Bool)1;
            }
            info->p=head_824;
            info->sline=head_sline_825;
            (word2_833 = come_decrement_ref_count(word2_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_834=(_Bool)0;
        if(        !is_special_word_830) {
            info->p=head_824;
            info->sline=head_sline_825;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_835=(char*)come_increment_ref_count(parse_word(info));
                (word2_835 = come_decrement_ref_count(word2_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_834=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_824;
            info->sline=head_sline_825;
        }
        call_method_generics_fun_call_836=(_Bool)0;
        {
            info->p=head_824;
            info->sline=head_sline_825;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj204=buf_827,
                buf_827=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_827,info)&&((struct sVar*)(__right_value821=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value820=__builtin_string(buf_827))))))==((void*)0)&&((struct sVar*)(__right_value824=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value823=__builtin_string(buf_827))))))==((void*)0)&&*info->p==60)),            (__right_value819 = come_decrement_ref_count(__right_value819, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value820 = come_decrement_ref_count(__right_value820, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value821,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value822 = come_decrement_ref_count(__right_value822, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value823 = come_decrement_ref_count(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value824,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional37) {
                nest_837=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_837++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_837==0) {
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
                    call_method_generics_fun_call_836=(_Bool)1;
                }
            }
            info->p=head_824;
            info->sline=head_sline_825;
        }
        inline_asm_838=(_Bool)0;
        {
            info->p=head_824;
            info->sline=head_sline_825;
            __dec_obj205=buf_827,
            buf_827=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_827,"asm")||string_operator_equals(buf_827,"__asm")||string_operator_equals(buf_827,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_838=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj206=buf_827,
                        buf_827=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_838=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_824;
            info->sline=head_sline_825;
        }
        parse_sharp_v5(info);
        __dec_obj207=buf_827,
        buf_827=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_832) {
            info->p=head_824;
            info->sline=head_sline_825;
            node_839=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_826;
            __result_obj__424 = (struct sNode*)come_increment_ref_count(node_839);
            ((node_839) ? node_839 = come_decrement_ref_count(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__424) ? __result_obj__424 = come_decrement_ref_count(__result_obj__424, ((struct sNode*)__result_obj__424)->finalize, ((struct sNode*)__result_obj__424)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__424;
            ((node_839) ? node_839 = come_decrement_ref_count(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_827,"_Static_assert")||string_operator_equals(buf_827,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_840=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_841=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_840;
            expected_next_character(44,info);
            exp2_842=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__425 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value831=static_assert_node((struct sNode*)come_increment_ref_count(exp_841),(struct sNode*)come_increment_ref_count(exp2_842),info))));
            ((exp_841) ? exp_841 = come_decrement_ref_count(exp_841, ((struct sNode*)exp_841)->finalize, ((struct sNode*)exp_841)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_842) ? exp2_842 = come_decrement_ref_count(exp2_842, ((struct sNode*)exp2_842)->finalize, ((struct sNode*)exp2_842)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value831) ? __right_value831 = come_decrement_ref_count(__right_value831, ((struct sNode*)__right_value831)->finalize, ((struct sNode*)__right_value831)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__425) ? __result_obj__425 = come_decrement_ref_count(__result_obj__425, ((struct sNode*)__result_obj__425)->finalize, ((struct sNode*)__result_obj__425)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__425;
            ((exp_841) ? exp_841 = come_decrement_ref_count(exp_841, ((struct sNode*)exp_841)->finalize, ((struct sNode*)exp_841)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_842) ? exp2_842 = come_decrement_ref_count(exp2_842, ((struct sNode*)exp2_842)->finalize, ((struct sNode*)exp2_842)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_827,"output")&&*info->p==123) {
            block_text_843=(char*)come_increment_ref_count(skip_block(info));
            contents_844=(char*)come_increment_ref_count(block_text_843);
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2263, "struct sNode");
            _inf_obj_value11=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value834=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2263, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_844),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sOutputNode_finalize;
            _inf_value11->clone=(void*)sOutputNode_clone;
            _inf_value11->compile=(void*)sOutputNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sOutputNode_kind;
            __result_obj__428 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value838=_inf_value11)));
            (block_text_843 = come_decrement_ref_count(block_text_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_844 = come_decrement_ref_count(contents_844, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value834,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value838) ? __right_value838 = come_decrement_ref_count(__right_value838, ((struct sNode*)__right_value838)->finalize, ((struct sNode*)__right_value838)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__428) ? __result_obj__428 = come_decrement_ref_count(__result_obj__428, ((struct sNode*)__result_obj__428)->finalize, ((struct sNode*)__result_obj__428)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__428;
            (block_text_843 = come_decrement_ref_count(block_text_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_844 = come_decrement_ref_count(contents_844, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_827,"extern")) {
            node_846=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__429 = (struct sNode*)come_increment_ref_count(node_846);
            ((node_846) ? node_846 = come_decrement_ref_count(node_846, ((struct sNode*)node_846)->finalize, ((struct sNode*)node_846)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__429) ? __result_obj__429 = come_decrement_ref_count(__result_obj__429, ((struct sNode*)__result_obj__429)->finalize, ((struct sNode*)__result_obj__429)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__429;
            ((node_846) ? node_846 = come_decrement_ref_count(node_846, ((struct sNode*)node_846)->finalize, ((struct sNode*)node_846)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_827,"string")||string_operator_equals(buf_827,"wstring"))&&*info->p==40) {
            node_847=(struct sNode*)come_increment_ref_count(parse_function_call(buf_827,info,(_Bool)0));
            info->sline_real=sline_real_826;
            __result_obj__430 = (struct sNode*)come_increment_ref_count(node_847);
            ((node_847) ? node_847 = come_decrement_ref_count(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__430) ? __result_obj__430 = come_decrement_ref_count(__result_obj__430, ((struct sNode*)__result_obj__430)->finalize, ((struct sNode*)__result_obj__430)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__430;
            ((node_847) ? node_847 = come_decrement_ref_count(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_827,"come")) {
            come_block_848=((void*)0);
            come_block_sline_849=0;
            if(            *info->p==123) {
                head_850=info->p;
                come_block_sline_849=info->sline;
                ((char*)(__right_value841=skip_block(info)));
                (__right_value841 = come_decrement_ref_count(__right_value841, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_851=info->p;
                __dec_obj210=come_block_848,
                come_block_848=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2288, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_852=tail_851-head_850;
                mem_853=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_852+1)), "05call.c", 2291, "char*"));
                memcpy(mem_853,head_850,len_852);
                mem_853[len_852]=0;
                buffer_append_str(come_block_848,mem_853);
                buffer_append_str(come_block_848,"\n");
                (mem_853 = come_decrement_ref_count(mem_853, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_854=info->p;
                come_block_sline_849=info->sline;
                no_output_come_code_855=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value845=expression_v13(info)));
                ((__right_value845) ? __right_value845 = come_decrement_ref_count(__right_value845, ((struct sNode*)__right_value845)->finalize, ((struct sNode*)__right_value845)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_855;
                tail_856=info->p;
                __dec_obj211=come_block_848,
                come_block_848=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2309, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj211,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_857=tail_856-head_854;
                mem_858=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_857+1)), "05call.c", 2312, "char*"));
                memcpy(mem_858,head_854,len_857);
                mem_858[len_857]=0;
                buffer_append_str(come_block_848,"{");
                buffer_append_str(come_block_848,mem_858);
                buffer_append_str(come_block_848,"; }");
                buffer_append_str(come_block_848,"return (void*)0;\n}");
                buffer_append_str(come_block_848,"\n");
                (mem_858 = come_decrement_ref_count(mem_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2323, "struct sNode");
            _inf_obj_value12=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value850=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2323, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_848),come_block_sline_849,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeCallNode_finalize;
            _inf_value12->clone=(void*)sComeCallNode_clone;
            _inf_value12->compile=(void*)sComeCallNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeCallNode_terminated;
            _inf_value12->kind=(void*)sComeCallNode_kind;
            node_859=(struct sNode*)come_increment_ref_count(_inf_value12);
            /*c*/ come_call_finalizer3(__right_value850,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_826;
            __result_obj__433 = (struct sNode*)come_increment_ref_count(node_859);
            /*c*/ come_call_finalizer3(come_block_848,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_859) ? node_859 = come_decrement_ref_count(node_859, ((struct sNode*)node_859)->finalize, ((struct sNode*)node_859)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__433) ? __result_obj__433 = come_decrement_ref_count(__result_obj__433, ((struct sNode*)__result_obj__433)->finalize, ((struct sNode*)__result_obj__433)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__433;
            /*c*/ come_call_finalizer3(come_block_848,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_859) ? node_859 = come_decrement_ref_count(node_859, ((struct sNode*)node_859)->finalize, ((struct sNode*)node_859)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_827,"come_join")&&*info->p==40) {
            come_block_861=((void*)0);
            come_block_sline_862=0;
            expected_next_character(40,info);
            node_863=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_826;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2337, "struct sNode");
            _inf_obj_value13=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value857=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2337, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_863),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComeJoinNode_finalize;
            _inf_value13->clone=(void*)sComeJoinNode_clone;
            _inf_value13->compile=(void*)sComeJoinNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComeJoinNode_terminated;
            _inf_value13->kind=(void*)sComeJoinNode_kind;
            __result_obj__436 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value861=_inf_value13)));
            /*c*/ come_call_finalizer3(come_block_861,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_863) ? node_863 = come_decrement_ref_count(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value857,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value861) ? __right_value861 = come_decrement_ref_count(__right_value861, ((struct sNode*)__right_value861)->finalize, ((struct sNode*)__right_value861)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__436) ? __result_obj__436 = come_decrement_ref_count(__result_obj__436, ((struct sNode*)__result_obj__436)->finalize, ((struct sNode*)__result_obj__436)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__436;
            /*c*/ come_call_finalizer3(come_block_861,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_863) ? node_863 = come_decrement_ref_count(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_827,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_865=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_865=time_out_865*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_866=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2355, "struct list$1sNode$ph*"))));
            blocks_867=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2356, "struct list$1sBlock$ph*"))));
            else_block_868=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2357, "struct sBlock*")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj216=else_block_868,
                    else_block_868=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj216,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_869=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_870=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_866,(struct sNode*)come_increment_ref_count(var_name_869));
                    list$1sBlock$ph_add(blocks_867,(struct sBlock*)come_increment_ref_count(block_870));
                    if(                    *info->p==125) {
                        ((var_name_869) ? var_name_869 = come_decrement_ref_count(var_name_869, ((struct sNode*)var_name_869)->finalize, ((struct sNode*)var_name_869)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_870,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_869) ? var_name_869 = come_decrement_ref_count(var_name_869, ((struct sNode*)var_name_869)->finalize, ((struct sNode*)var_name_869)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_870,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_826;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2387, "struct sNode");
            _inf_obj_value14=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value875=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2387, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_866),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_867),(struct sBlock*)come_increment_ref_count(else_block_868),time_out_865,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sComePollNode_finalize;
            _inf_value14->clone=(void*)sComePollNode_clone;
            _inf_value14->compile=(void*)sComePollNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sComePollNode_terminated;
            _inf_value14->kind=(void*)sComePollNode_kind;
            __result_obj__460 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value920=_inf_value14)));
            /*c*/ come_call_finalizer3(vars_866,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_867,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_868,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value875,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value920) ? __right_value920 = come_decrement_ref_count(__right_value920, ((struct sNode*)__right_value920)->finalize, ((struct sNode*)__right_value920)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__460) ? __result_obj__460 = come_decrement_ref_count(__result_obj__460, ((struct sNode*)__result_obj__460)->finalize, ((struct sNode*)__result_obj__460)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__460;
            /*c*/ come_call_finalizer3(vars_866,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_867,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_868,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_827,"none")&&*info->p==40) {
            node_906=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_826;
            __result_obj__461 = (struct sNode*)come_increment_ref_count(node_906);
            ((node_906) ? node_906 = come_decrement_ref_count(node_906, ((struct sNode*)node_906)->finalize, ((struct sNode*)node_906)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__461) ? __result_obj__461 = come_decrement_ref_count(__result_obj__461, ((struct sNode*)__result_obj__461)->finalize, ((struct sNode*)__result_obj__461)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__461;
            ((node_906) ? node_906 = come_decrement_ref_count(node_906, ((struct sNode*)node_906)->finalize, ((struct sNode*)node_906)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_827,"some")&&*info->p==40) {
            node_907=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_826;
            __result_obj__462 = (struct sNode*)come_increment_ref_count(node_907);
            ((node_907) ? node_907 = come_decrement_ref_count(node_907, ((struct sNode*)node_907)->finalize, ((struct sNode*)node_907)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__462) ? __result_obj__462 = come_decrement_ref_count(__result_obj__462, ((struct sNode*)__result_obj__462)->finalize, ((struct sNode*)__result_obj__462)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__462;
            ((node_907) ? node_907 = come_decrement_ref_count(node_907, ((struct sNode*)node_907)->finalize, ((struct sNode*)node_907)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_827,"__func__")||string_operator_equals(buf_827,"__FUNCTION__")) {
            info->sline_real=sline_real_826;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2404, "struct sNode");
            _inf_obj_value15=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value924=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2404, "struct sFuncNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFuncNode_finalize;
            _inf_value15->clone=(void*)sFuncNode_clone;
            _inf_value15->compile=(void*)sFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFuncNode_kind;
            __result_obj__465 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value927=_inf_value15)));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value924,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value927) ? __right_value927 = come_decrement_ref_count(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__465) ? __result_obj__465 = come_decrement_ref_count(__result_obj__465, ((struct sNode*)__result_obj__465)->finalize, ((struct sNode*)__result_obj__465)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__465;
        }
        else if(        !gComeC&&string_operator_equals(buf_827,"wildcard")) {
            info->sline_real=sline_real_826;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2408, "struct sNode");
            _inf_obj_value16=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value929=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2408, "struct sWildCard*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sWildCard_finalize;
            _inf_value16->clone=(void*)sWildCard_clone;
            _inf_value16->compile=(void*)sWildCard_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sWildCard_kind;
            __result_obj__468 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value932=_inf_value16)));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value929,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value932) ? __right_value932 = come_decrement_ref_count(__right_value932, ((struct sNode*)__right_value932)->finalize, ((struct sNode*)__right_value932)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__468) ? __result_obj__468 = come_decrement_ref_count(__result_obj__468, ((struct sNode*)__result_obj__468)->finalize, ((struct sNode*)__result_obj__468)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__468;
        }
        else if(        string_operator_equals(buf_827,"__line__")||string_operator_equals(buf_827,"__LINE__")) {
            info->sline_real=sline_real_826;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2412, "struct sNode");
            _inf_obj_value17=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value934=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2412, "struct sLineNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sLineNode_finalize;
            _inf_value17->clone=(void*)sLineNode_clone;
            _inf_value17->compile=(void*)sLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sLineNode_kind;
            __result_obj__471 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value937=_inf_value17)));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value934,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value937) ? __right_value937 = come_decrement_ref_count(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__471) ? __result_obj__471 = come_decrement_ref_count(__result_obj__471, ((struct sNode*)__result_obj__471)->finalize, ((struct sNode*)__result_obj__471)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__471;
        }
        else if(        string_operator_equals(buf_827,"__sname__")) {
            info->sline_real=sline_real_826;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2416, "struct sNode");
            _inf_obj_value18=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value939=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2416, "struct sSNameNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sSNameNode_finalize;
            _inf_value18->clone=(void*)sSNameNode_clone;
            _inf_value18->compile=(void*)sSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sSNameNode_kind;
            __result_obj__474 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value942=_inf_value18)));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value939,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value942) ? __right_value942 = come_decrement_ref_count(__right_value942, ((struct sNode*)__right_value942)->finalize, ((struct sNode*)__right_value942)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__474) ? __result_obj__474 = come_decrement_ref_count(__result_obj__474, ((struct sNode*)__result_obj__474)->finalize, ((struct sNode*)__result_obj__474)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__474;
        }
        else if(        string_operator_equals(buf_827,"__caller_func__")) {
            info->sline_real=sline_real_826;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2420, "struct sNode");
            _inf_obj_value19=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value944=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2420, "struct sCallerFuncNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value19->clone=(void*)sCallerFuncNode_clone;
            _inf_value19->compile=(void*)sCallerFuncNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerFuncNode_kind;
            __result_obj__477 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value947=_inf_value19)));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value944,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value947) ? __right_value947 = come_decrement_ref_count(__right_value947, ((struct sNode*)__right_value947)->finalize, ((struct sNode*)__right_value947)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__477) ? __result_obj__477 = come_decrement_ref_count(__result_obj__477, ((struct sNode*)__result_obj__477)->finalize, ((struct sNode*)__result_obj__477)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__477;
        }
        else if(        string_operator_equals(buf_827,"__caller_line__")) {
            info->sline_real=sline_real_826;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2424, "struct sNode");
            _inf_obj_value20=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value949=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2424, "struct sCallerLineNode*")),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerLineNode_finalize;
            _inf_value20->clone=(void*)sCallerLineNode_clone;
            _inf_value20->compile=(void*)sCallerLineNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerLineNode_kind;
            __result_obj__480 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value952=_inf_value20)));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value949,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value952) ? __right_value952 = come_decrement_ref_count(__right_value952, ((struct sNode*)__right_value952)->finalize, ((struct sNode*)__right_value952)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__480) ? __result_obj__480 = come_decrement_ref_count(__result_obj__480, ((struct sNode*)__result_obj__480)->finalize, ((struct sNode*)__result_obj__480)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__480;
        }
        else if(        string_operator_equals(buf_827,"__caller_sname__")) {
            info->sline_real=sline_real_826;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2428, "struct sNode");
            _inf_obj_value21=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value954=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2428, "struct sCallerSNameNode*")),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value21->clone=(void*)sCallerSNameNode_clone;
            _inf_value21->compile=(void*)sCallerSNameNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sCallerSNameNode_kind;
            __result_obj__483 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value957=_inf_value21)));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value954,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value957) ? __right_value957 = come_decrement_ref_count(__right_value957, ((struct sNode*)__right_value957)->finalize, ((struct sNode*)__right_value957)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__483) ? __result_obj__483 = come_decrement_ref_count(__result_obj__483, ((struct sNode*)__result_obj__483)->finalize, ((struct sNode*)__result_obj__483)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__483;
        }
        else if(        info->va_arg&&is_type_name(buf_827,info)) {
            info->p=head_824;
            info->sline=head_sline_825;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value958=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_915=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_916=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_917=multiple_assign_var33->v3;
            /*c*/ come_call_finalizer3(__right_value958,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_826;
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2437, "struct sNode");
            _inf_obj_value22=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value960=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2437, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_915),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value22->clone=(void*)sVarArgTypeName_clone;
            _inf_value22->compile=(void*)sVarArgTypeName_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sVarArgTypeName_kind;
            __result_obj__486 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value964=_inf_value22)));
            /*c*/ come_call_finalizer3(type_915,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_916 = come_decrement_ref_count(name_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value960,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value964) ? __right_value964 = come_decrement_ref_count(__right_value964, ((struct sNode*)__right_value964)->finalize, ((struct sNode*)__right_value964)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__486) ? __result_obj__486 = come_decrement_ref_count(__result_obj__486, ((struct sNode*)__result_obj__486)->finalize, ((struct sNode*)__result_obj__486)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__486;
            /*c*/ come_call_finalizer3(type_915,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_916 = come_decrement_ref_count(name_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_827,"sizeof")||string_operator_equals(buf_827,"_Alignof")||string_operator_equals(buf_827,"_Alignas")||string_operator_equals(buf_827,"__alignof__")) {
            node_919=(struct sNode*)come_increment_ref_count(string_node_v21(buf_827,head_824,head_sline_825,info));
            info->sline_real=sline_real_826;
            __result_obj__487 = (struct sNode*)come_increment_ref_count(node_919);
            ((node_919) ? node_919 = come_decrement_ref_count(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__487) ? __result_obj__487 = come_decrement_ref_count(__result_obj__487, ((struct sNode*)__result_obj__487)->finalize, ((struct sNode*)__result_obj__487)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__487;
            ((node_919) ? node_919 = come_decrement_ref_count(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_838) {
            buf2_920=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2446, "struct buffer*"))));
            if(            *info->p!=40) {
                word_921=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_920,word_921);
                (word_921 = come_decrement_ref_count(word_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_920,40);
            exps_922=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2457, "struct list$1sNode$ph*"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_920,40);
                    info->p++;
                    exp_923=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_922,(struct sNode*)come_increment_ref_count(exp_923));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_920,41);
                    ((exp_923) ? exp_923 = come_decrement_ref_count(exp_923, ((struct sNode*)exp_923)->finalize, ((struct sNode*)exp_923)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_920,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_920,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value972=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_924=multiple_assign_var34->v1;
                    Err_925=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_925)?(puts(Err_925),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value972,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_925 = come_decrement_ref_count(Err_925, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_920,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_826;
            _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2494, "struct sNode");
            _inf_obj_value23=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value975=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2494, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_920)),(struct list$1sNode$ph*)come_increment_ref_count(exps_922),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sInlineAssembler_finalize;
            _inf_value23->clone=(void*)sInlineAssembler_clone;
            _inf_value23->compile=(void*)sInlineAssembler_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sInlineAssembler_kind;
            __result_obj__490 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value980=_inf_value23)));
            /*c*/ come_call_finalizer3(buf2_920,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_922,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value975,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value980) ? __right_value980 = come_decrement_ref_count(__right_value980, ((struct sNode*)__right_value980)->finalize, ((struct sNode*)__right_value980)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__490) ? __result_obj__490 = come_decrement_ref_count(__result_obj__490, ((struct sNode*)__result_obj__490)->finalize, ((struct sNode*)__result_obj__490)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__490;
            /*c*/ come_call_finalizer3(buf2_920,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_922,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_834) {
            fun_name_927=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2497, "struct buffer*"))));
            buffer_append_str(fun_name_927,buf_827);
            type_928=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value985=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value984=buffer_to_string(fun_name_927))))))));
            (__right_value983 = come_decrement_ref_count(__right_value983, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value984 = come_decrement_ref_count(__right_value984, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value985,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_928==((void*)0)) {
                klass_935=((struct sClass*)(__right_value989=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value988=buffer_to_string(fun_name_927))))));
                (__right_value987 = come_decrement_ref_count(__right_value987, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value988 = come_decrement_ref_count(__right_value988, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value989,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_935) {
                    __dec_obj245=type_928,
                    type_928=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2507, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_827)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj245,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value993=err_msg(info,"null type(%s)",buf_827)));
                    come_exception_var_c5_936=multiple_assign_var35->v1;
                    Err_937=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_937)?(puts(Err_937),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value993,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_937 = come_decrement_ref_count(Err_937, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_928->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_927,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_927,"_");
            buf2_938=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_927,buf2_938);
            node_939=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value995=buffer_to_string(fun_name_927))),info,(_Bool)0));
            (__right_value995 = come_decrement_ref_count(__right_value995, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_826;
            __result_obj__499 = (struct sNode*)come_increment_ref_count(node_939);
            /*c*/ come_call_finalizer3(fun_name_927,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_928,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_938 = come_decrement_ref_count(buf2_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_939) ? node_939 = come_decrement_ref_count(node_939, ((struct sNode*)node_939)->finalize, ((struct sNode*)node_939)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__499) ? __result_obj__499 = come_decrement_ref_count(__result_obj__499, ((struct sNode*)__result_obj__499)->finalize, ((struct sNode*)__result_obj__499)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__499;
            /*c*/ come_call_finalizer3(fun_name_927,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_928,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_938 = come_decrement_ref_count(buf2_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_939) ? node_939 = come_decrement_ref_count(node_939, ((struct sNode*)node_939)->finalize, ((struct sNode*)node_939)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_940=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2542, "struct buffer*"))));
            buffer_append_str(fun_name_940,buf_827);
            buffer_append_str(fun_name_940,"_");
            buf2_941=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_940,buf2_941);
            node_942=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1000=buffer_to_string(fun_name_940))),info,(_Bool)0));
            (__right_value1000 = come_decrement_ref_count(__right_value1000, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_826;
            __result_obj__500 = (struct sNode*)come_increment_ref_count(node_942);
            /*c*/ come_call_finalizer3(fun_name_940,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_941 = come_decrement_ref_count(buf2_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_942) ? node_942 = come_decrement_ref_count(node_942, ((struct sNode*)node_942)->finalize, ((struct sNode*)node_942)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__500) ? __result_obj__500 = come_decrement_ref_count(__result_obj__500, ((struct sNode*)__result_obj__500)->finalize, ((struct sNode*)__result_obj__500)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__500;
            /*c*/ come_call_finalizer3(fun_name_940,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_941 = come_decrement_ref_count(buf2_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_942) ? node_942 = come_decrement_ref_count(node_942, ((struct sNode*)node_942)->finalize, ((struct sNode*)node_942)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_836) {
            node_943=(struct sNode*)come_increment_ref_count(parse_function_call(buf_827,info,(_Bool)0));
            info->sline_real=sline_real_826;
            __result_obj__501 = (struct sNode*)come_increment_ref_count(node_943);
            ((node_943) ? node_943 = come_decrement_ref_count(node_943, ((struct sNode*)node_943)->finalize, ((struct sNode*)node_943)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__501) ? __result_obj__501 = come_decrement_ref_count(__result_obj__501, ((struct sNode*)__result_obj__501)->finalize, ((struct sNode*)__result_obj__501)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__501;
            ((node_943) ? node_943 = come_decrement_ref_count(node_943, ((struct sNode*)node_943)->finalize, ((struct sNode*)node_943)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_830&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__828)) {
            node_944=(struct sNode*)come_increment_ref_count(parse_function_call(buf_827,info,(_Bool)0));
            info->sline_real=sline_real_826;
            __result_obj__502 = (struct sNode*)come_increment_ref_count(node_944);
            ((node_944) ? node_944 = come_decrement_ref_count(node_944, ((struct sNode*)node_944)->finalize, ((struct sNode*)node_944)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__502) ? __result_obj__502 = come_decrement_ref_count(__result_obj__502, ((struct sNode*)__result_obj__502)->finalize, ((struct sNode*)__result_obj__502)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__502;
            ((node_944) ? node_944 = come_decrement_ref_count(node_944, ((struct sNode*)node_944)->finalize, ((struct sNode*)node_944)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_945=(struct sNode*)come_increment_ref_count(string_node_v21(buf_827,head_824,head_sline_825,info));
            info->sline_real=sline_real_826;
            __result_obj__503 = (struct sNode*)come_increment_ref_count(node_945);
            ((node_945) ? node_945 = come_decrement_ref_count(node_945, ((struct sNode*)node_945)->finalize, ((struct sNode*)node_945)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__503) ? __result_obj__503 = come_decrement_ref_count(__result_obj__503, ((struct sNode*)__result_obj__503)->finalize, ((struct sNode*)__result_obj__503)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__503;
            ((node_945) ? node_945 = come_decrement_ref_count(node_945, ((struct sNode*)node_945)->finalize, ((struct sNode*)node_945)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_827 = come_decrement_ref_count(buf_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_946=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__504 = (struct sNode*)come_increment_ref_count(node_946);
        ((node_946) ? node_946 = come_decrement_ref_count(node_946, ((struct sNode*)node_946)->finalize, ((struct sNode*)node_946)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__504) ? __result_obj__504 = come_decrement_ref_count(__result_obj__504, ((struct sNode*)__result_obj__504)->finalize, ((struct sNode*)__result_obj__504)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__504;
        ((node_946) ? node_946 = come_decrement_ref_count(node_946, ((struct sNode*)node_946)->finalize, ((struct sNode*)node_946)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1006=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_exception_var_c6_947=multiple_assign_var36->v1;
    Err_948=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_948)?(puts(Err_948),exit(2)):(0));
    /*c*/ come_call_finalizer3(__right_value1006,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__505 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (Err_948 = come_decrement_ref_count(Err_948, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__505) ? __result_obj__505 = come_decrement_ref_count(__result_obj__505, ((struct sNode*)__result_obj__505)->finalize, ((struct sNode*)__result_obj__505)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__505;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__426;
void* __right_value835 = (void*)0;
struct sOutputNode* result_845;
void* __right_value836 = (void*)0;
char* __dec_obj208;
void* __right_value837 = (void*)0;
char* __dec_obj209;
struct sOutputNode* __result_obj__427;
    if(    self==(void*)0) {
        __result_obj__426 = (void*)0;
        return __result_obj__426;
    }
    result_845=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_845->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj208=result_845->sname,
        result_845->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_845->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj209=result_845->contents,
        result_845->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__427 = result_845;
    /*c*/ come_call_finalizer3(result_845,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__427;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__431;
void* __right_value851 = (void*)0;
struct sComeCallNode* result_860;
void* __right_value852 = (void*)0;
char* __dec_obj212;
void* __right_value853 = (void*)0;
struct buffer* __dec_obj213;
struct sComeCallNode* __result_obj__432;
    if(    self==(void*)0) {
        __result_obj__431 = (void*)0;
        return __result_obj__431;
    }
    result_860=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_860->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_860->sname,
        result_860->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_860->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj213=result_860->come_block,
        result_860->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj213,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_860->come_block_sline=self->come_block_sline;
    }
    __result_obj__432 = result_860;
    /*c*/ come_call_finalizer3(result_860,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__432;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__434;
void* __right_value858 = (void*)0;
struct sComeJoinNode* result_864;
void* __right_value859 = (void*)0;
char* __dec_obj214;
void* __right_value860 = (void*)0;
struct sNode* __dec_obj215;
struct sComeJoinNode* __result_obj__435;
    if(    self==(void*)0) {
        __result_obj__434 = (void*)0;
        return __result_obj__434;
    }
    result_864=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_864->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj214=result_864->sname,
        result_864->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_864->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj215=result_864->node,
        result_864->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__435 = result_864;
    /*c*/ come_call_finalizer3(result_864,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__435;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__437;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__437 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__437,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__437;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value871 = (void*)0;
struct list_item$1sBlock$ph* litem_871;
struct sBlock* __dec_obj217;
void* __right_value872 = (void*)0;
struct list_item$1sBlock$ph* litem_872;
struct sBlock* __dec_obj218;
void* __right_value873 = (void*)0;
struct list_item$1sBlock$ph* litem_873;
struct sBlock* __dec_obj219;
struct list$1sBlock$ph* __result_obj__438;
    if(    self->len==0) {
        litem_871=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value871=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1041, "struct list_item$1sBlock$ph*"))));
        litem_871->prev=((void*)0);
        litem_871->next=((void*)0);
        __dec_obj217=litem_871->item,
        litem_871->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj217,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_871;
        self->head=litem_871;
    }
    else if(    self->len==1) {
        litem_872=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value872=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1051, "struct list_item$1sBlock$ph*"))));
        litem_872->prev=self->head;
        litem_872->next=((void*)0);
        __dec_obj218=litem_872->item,
        litem_872->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj218,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_872;
        self->head->next=litem_872;
    }
    else {
        litem_873=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value873=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1061, "struct list_item$1sBlock$ph*"))));
        litem_873->prev=self->tail;
        litem_873->next=((void*)0);
        __dec_obj219=litem_873->item,
        litem_873->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj219,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_873;
        self->tail=litem_873;
    }
    self->len++;
    __result_obj__438 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__438;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__439;
void* __right_value876 = (void*)0;
struct sComePollNode* result_874;
void* __right_value877 = (void*)0;
char* __dec_obj220;
void* __right_value878 = (void*)0;
struct list$1sNode$ph* __dec_obj221;
void* __right_value918 = (void*)0;
struct list$1sBlock$ph* __dec_obj231;
void* __right_value919 = (void*)0;
struct sBlock* __dec_obj232;
struct sComePollNode* __result_obj__459;
    if(    self==(void*)0) {
        __result_obj__439 = (void*)0;
        return __result_obj__439;
    }
    result_874=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_874->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj220=result_874->sname,
        result_874->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_874->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj221=result_874->vars,
        result_874->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        /*b*/ come_call_finalizer3(__dec_obj221,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj231=result_874->blocks,
        result_874->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj231,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj232=result_874->else_block,
        result_874->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj232,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_874->time_out=self->time_out;
    }
    __result_obj__459 = result_874;
    /*c*/ come_call_finalizer3(result_874,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__459;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__440;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct list$1sBlock$ph* result_875;
struct list_item$1sBlock$ph* it_876;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct list$1sBlock$ph* __result_obj__458;
    if(    self==((void*)0)) {
        __result_obj__440 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__440,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__440;
    }
    result_875=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1022, "struct list$1sBlock$ph*"))));
    it_876=self->head;
    while(it_876!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_875,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_876->item)));
        }
        else {
            list$1sBlock$ph_add(result_875,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_876->item)));
        }
        it_876=it_876->next;
    }
    __result_obj__458 = (struct list$1sBlock$ph*)come_increment_ref_count(result_875);
    /*c*/ come_call_finalizer3(result_875,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__458,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__458;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__441;
void* __right_value881 = (void*)0;
struct sBlock* result_877;
void* __right_value886 = (void*)0;
struct list$1sNode$ph* __dec_obj222;
void* __right_value915 = (void*)0;
struct sVarTable* __dec_obj230;
struct sBlock* __result_obj__457;
    if(    self==(void*)0) {
        __result_obj__441 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__441,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__441;
    }
    result_877=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj222=result_877->mNodes,
        result_877->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj222,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj230=result_877->mVarTable,
        result_877->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj230,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_877->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__457 = (struct sBlock*)come_increment_ref_count(result_877);
    /*c*/ come_call_finalizer3(result_877,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__457,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__457;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__442;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct list$1sNode$ph* result_878;
struct list_item$1sNode$ph* it_879;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct list$1sNode$ph* __result_obj__443;
    if(    self==((void*)0)) {
        __result_obj__442 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__442,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__442;
    }
    result_878=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_879=self->head;
    while(it_879!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_878,(struct sNode*)come_increment_ref_count(sNode_clone(it_879->item)));
        }
        else {
            list$1sNode$ph_add(result_878,(struct sNode*)come_increment_ref_count(sNode_clone(it_879->item)));
        }
        it_879=it_879->next;
    }
    __result_obj__443 = (struct list$1sNode$ph*)come_increment_ref_count(result_878);
    /*c*/ come_call_finalizer3(result_878,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__443,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__443;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__444;
void* __right_value887 = (void*)0;
struct sVarTable* result_880;
void* __right_value914 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj229;
struct sVarTable* __result_obj__456;
    if(    self==(void*)0) {
        __result_obj__444 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__444,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__444;
    }
    result_880=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj229=result_880->mVars,
        result_880->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj229,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_880->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_880->mParent=self->mParent;
    }
    __result_obj__456 = (struct sVarTable*)come_increment_ref_count(result_880);
    /*c*/ come_call_finalizer3(result_880,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__456,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__456;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__445;
void* __right_value888 = (void*)0;
void* __right_value894 = (void*)0;
struct map$2char$phsVar$ph* result_882;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1char$ph* __dec_obj224;
char* it_883;
struct sVar* default_value_884;
void* __right_value897 = (void*)0;
struct sVar* it2_887;
void* __right_value903 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__455;
default_value_884 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__445 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__445,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__445;
    }
    result_882=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1997, "struct map$2char$phsVar$ph*"))));
    __dec_obj224=result_882->key_list,
    result_882->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1999, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj224,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_883=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_883=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_884,0,sizeof(struct sVar*));
        it2_887=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_883,(struct sVar*)come_increment_ref_count(default_value_884)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_882,(char*)come_increment_ref_count((char*)come_memdup(it_883, "./comelang.h", 2008, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_887)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_882,(char*)come_increment_ref_count((char*)come_memdup(it_883, "./comelang.h", 2011, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_887)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_882,(char*)come_increment_ref_count(it_883),(struct sVar*)come_increment_ref_count(sVar_clone(it2_887)));
        }
        else {
            map$2char$phsVar$ph_put(result_882,(char*)come_increment_ref_count(it_883),(struct sVar*)come_increment_ref_count(sVar_clone(it2_887)));
        }
        /*c*/ come_call_finalizer3(default_value_884,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_887,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__455 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_882);
    /*c*/ come_call_finalizer3(result_882,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__455,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__455;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
int i_881;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct list$1char$ph* __dec_obj223;
struct map$2char$phsVar$ph* __result_obj__447;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value889=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1926, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value890=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1927, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value891=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1928, "_Bool*"))));
    for(    i_881=0;    i_881<128;    i_881++    ){
        self->item_existance[i_881]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj223=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1938, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj223,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__447 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__447,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__447;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__446;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__446 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__446,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__446;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_885;
unsigned int it_886;
struct sVar* __result_obj__448;
struct sVar* __result_obj__449;
struct sVar* __result_obj__450;
struct sVar* __result_obj__451;
    hash_885=string_get_hash_key(((char*)key))%self->size;
    it_886=hash_885;
    while((_Bool)1) {
        if(        self->item_existance[it_886]) {
            if(            string_equals(self->keys[it_886],key)) {
                __result_obj__448 = (struct sVar*)come_increment_ref_count(self->items[it_886]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__448,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__448;
            }
            it_886++;
            if(            it_886>=self->size) {
                it_886=0;
            }
            else if(            it_886==hash_885) {
                __result_obj__449 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__449,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__449;
            }
        }
        else {
            __result_obj__450 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__450,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__450;
        }
    }
    __result_obj__451 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__451,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__451;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_899;
int it_900;
_Bool same_key_exist_901;
char* it2_902;
struct map$2char$phsVar$ph* __result_obj__452;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_899=string_get_hash_key(((char*)key))%self->size;
    it_900=hash_899;
    while((_Bool)1) {
        if(        self->item_existance[it_900]) {
            if(            string_equals(self->keys[it_900],key)) {
                if(                1) {
                    (self->keys[it_900] = come_decrement_ref_count(self->keys[it_900], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_900]);
                    self->keys[it_900]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_900]);
                    self->keys[it_900]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_900],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_900]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_900]=item;
                }
                break;
            }
            it_900++;
            if(            it_900>=self->size) {
                it_900=0;
            }
            else if(            it_900==hash_899) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_900]=(_Bool)1;
            if(            1) {
                self->keys[it_900]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_900]=key;
            }
            if(            1) {
                self->items[it_900]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_900]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_901=(_Bool)0;
    for(    it2_902=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_902=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_902,key)) {
            same_key_exist_901=(_Bool)1;
        }
    }
    if(    !same_key_exist_901) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__452 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__452;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_888;
void* __right_value898 = (void*)0;
char** keys_889;
void* __right_value899 = (void*)0;
struct sVar** items_890;
void* __right_value900 = (void*)0;
_Bool* item_existance_891;
int len_892;
char* it_893;
struct sVar* default_value_894;
void* __right_value901 = (void*)0;
struct sVar* it2_895;
unsigned int hash_896;
int n_897;
struct sVar* default_value_898;
void* __right_value902 = (void*)0;
default_value_894 = (void*)0;
default_value_898 = (void*)0;
    size_888=self->size*10;
    keys_889=(char**)come_increment_ref_count(((char**)(__right_value898=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_888)), "./comelang.h", 2165, "char**"))));
    items_890=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value899=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_888)), "./comelang.h", 2166, "struct sVar**"))));
    item_existance_891=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value900=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_888)), "./comelang.h", 2167, "_Bool*"))));
    len_892=0;
    for(    it_893=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_893=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_894,0,sizeof(struct sVar*));
        it2_895=((struct sVar*)(__right_value901=map$2char$phsVar$ph_at(self,it_893,(struct sVar*)come_increment_ref_count(default_value_894))));
        /*c*/ come_call_finalizer3(__right_value901,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_896=string_get_hash_key(((char*)it_893))%size_888;
        n_897=hash_896;
        while((_Bool)1) {
            if(            item_existance_891[n_897]) {
                n_897++;
                if(                n_897>=size_888) {
                    n_897=0;
                }
                else if(                n_897==hash_896) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_891[n_897]=(_Bool)1;
                keys_889[n_897]=it_893;
                items_890[n_897]=((struct sVar*)(__right_value902=map$2char$phsVar$ph_at(self,it_893,(struct sVar*)come_increment_ref_count(default_value_898))));
                /*c*/ come_call_finalizer3(__right_value902,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_892++;
                /*c*/ come_call_finalizer3(default_value_898,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_898,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_894,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_889;
    self->items=items_890;
    self->item_existance=item_existance_891;
    self->size=size_888;
    self->len=len_892;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__453;
void* __right_value904 = (void*)0;
struct sVar* result_903;
void* __right_value905 = (void*)0;
char* __dec_obj225;
void* __right_value906 = (void*)0;
char* __dec_obj226;
void* __right_value907 = (void*)0;
struct sType* __dec_obj227;
void* __right_value908 = (void*)0;
char* __dec_obj228;
struct sVar* __result_obj__454;
    if(    self==(void*)0) {
        __result_obj__453 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__453,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__453;
    }
    result_903=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj225=result_903->mName,
        result_903->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj226=result_903->mCValueName,
        result_903->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj227=result_903->mType,
        result_903->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj227,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_903->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_903->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_903->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj228=result_903->mFunName,
        result_903->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__454 = (struct sVar*)come_increment_ref_count(result_903);
    /*c*/ come_call_finalizer3(result_903,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__454,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__454;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_904;
int i_905;
    for(    i_904=0;    i_904<self->size;    i_904++    ){
        if(        self->item_existance[i_904]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_904],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_905=0;    i_905<self->size;    i_905++    ){
        if(        self->item_existance[i_905]) {
            if(            1) {
                (self->keys[i_905] = come_decrement_ref_count(self->keys[i_905], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__463;
void* __right_value925 = (void*)0;
struct sFuncNode* result_908;
void* __right_value926 = (void*)0;
char* __dec_obj233;
struct sFuncNode* __result_obj__464;
    if(    self==(void*)0) {
        __result_obj__463 = (void*)0;
        return __result_obj__463;
    }
    result_908=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_908->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_908->sname,
        result_908->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_908->sline_real=self->sline_real;
    }
    __result_obj__464 = result_908;
    /*c*/ come_call_finalizer3(result_908,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__464;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__466;
void* __right_value930 = (void*)0;
struct sWildCard* result_909;
void* __right_value931 = (void*)0;
char* __dec_obj234;
struct sWildCard* __result_obj__467;
    if(    self==(void*)0) {
        __result_obj__466 = (void*)0;
        return __result_obj__466;
    }
    result_909=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_909->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_909->sname,
        result_909->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_909->sline_real=self->sline_real;
    }
    __result_obj__467 = result_909;
    /*c*/ come_call_finalizer3(result_909,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__467;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__469;
void* __right_value935 = (void*)0;
struct sLineNode* result_910;
void* __right_value936 = (void*)0;
char* __dec_obj235;
struct sLineNode* __result_obj__470;
    if(    self==(void*)0) {
        __result_obj__469 = (void*)0;
        return __result_obj__469;
    }
    result_910=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_910->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj235=result_910->sname,
        result_910->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_910->sline_real=self->sline_real;
    }
    __result_obj__470 = result_910;
    /*c*/ come_call_finalizer3(result_910,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__470;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__472;
void* __right_value940 = (void*)0;
struct sSNameNode* result_911;
void* __right_value941 = (void*)0;
char* __dec_obj236;
struct sSNameNode* __result_obj__473;
    if(    self==(void*)0) {
        __result_obj__472 = (void*)0;
        return __result_obj__472;
    }
    result_911=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_911->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_911->sname,
        result_911->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_911->sline_real=self->sline_real;
    }
    __result_obj__473 = result_911;
    /*c*/ come_call_finalizer3(result_911,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__473;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__475;
void* __right_value945 = (void*)0;
struct sCallerFuncNode* result_912;
void* __right_value946 = (void*)0;
char* __dec_obj237;
struct sCallerFuncNode* __result_obj__476;
    if(    self==(void*)0) {
        __result_obj__475 = (void*)0;
        return __result_obj__475;
    }
    result_912=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_912->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_912->sname,
        result_912->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_912->sline_real=self->sline_real;
    }
    __result_obj__476 = result_912;
    /*c*/ come_call_finalizer3(result_912,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__476;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__478;
void* __right_value950 = (void*)0;
struct sCallerLineNode* result_913;
void* __right_value951 = (void*)0;
char* __dec_obj238;
struct sCallerLineNode* __result_obj__479;
    if(    self==(void*)0) {
        __result_obj__478 = (void*)0;
        return __result_obj__478;
    }
    result_913=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_913->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj238=result_913->sname,
        result_913->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_913->sline_real=self->sline_real;
    }
    __result_obj__479 = result_913;
    /*c*/ come_call_finalizer3(result_913,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__479;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__481;
void* __right_value955 = (void*)0;
struct sCallerSNameNode* result_914;
void* __right_value956 = (void*)0;
char* __dec_obj239;
struct sCallerSNameNode* __result_obj__482;
    if(    self==(void*)0) {
        __result_obj__481 = (void*)0;
        return __result_obj__481;
    }
    result_914=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_914->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_914->sname,
        result_914->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_914->sline_real=self->sline_real;
    }
    __result_obj__482 = result_914;
    /*c*/ come_call_finalizer3(result_914,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__482;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__484;
void* __right_value961 = (void*)0;
struct sVarArgTypeName* result_918;
void* __right_value962 = (void*)0;
char* __dec_obj240;
void* __right_value963 = (void*)0;
struct sType* __dec_obj241;
struct sVarArgTypeName* __result_obj__485;
    if(    self==(void*)0) {
        __result_obj__484 = (void*)0;
        return __result_obj__484;
    }
    result_918=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_918->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_918->sname,
        result_918->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_918->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj241=result_918->type,
        result_918->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj241,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__485 = result_918;
    /*c*/ come_call_finalizer3(result_918,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__485;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__488;
void* __right_value976 = (void*)0;
struct sInlineAssembler* result_926;
void* __right_value977 = (void*)0;
char* __dec_obj242;
void* __right_value978 = (void*)0;
char* __dec_obj243;
void* __right_value979 = (void*)0;
struct list$1sNode$ph* __dec_obj244;
struct sInlineAssembler* __result_obj__489;
    if(    self==(void*)0) {
        __result_obj__488 = (void*)0;
        return __result_obj__488;
    }
    result_926=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_926->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj242=result_926->sname,
        result_926->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_926->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj243=result_926->source,
        result_926->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj244=result_926->exps,
        result_926->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj244,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__489 = result_926;
    /*c*/ come_call_finalizer3(result_926,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__489;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_929;
unsigned int hash_930;
unsigned int it_931;
struct sType* __result_obj__491;
struct sType* __result_obj__492;
struct sType* __result_obj__493;
struct sType* __result_obj__494;
default_value_929 = (void*)0;
    memset(&default_value_929,0,sizeof(struct sType*));
    hash_930=string_get_hash_key(((char*)key))%self->size;
    it_931=hash_930;
    while((_Bool)1) {
        if(        self->item_existance[it_931]) {
            if(            string_equals(self->keys[it_931],key)) {
                __result_obj__491 = (struct sType*)come_increment_ref_count(self->items[it_931]);
                /*c*/ come_call_finalizer3(default_value_929,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__491;
            }
            it_931++;
            if(            it_931>=self->size) {
                it_931=0;
            }
            else if(            it_931==hash_930) {
                __result_obj__492 = (struct sType*)come_increment_ref_count(default_value_929);
                /*c*/ come_call_finalizer3(default_value_929,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__492,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__492;
            }
        }
        else {
            __result_obj__493 = (struct sType*)come_increment_ref_count(default_value_929);
            /*c*/ come_call_finalizer3(default_value_929,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__493,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__493;
        }
    }
    __result_obj__494 = (struct sType*)come_increment_ref_count(default_value_929);
    /*c*/ come_call_finalizer3(default_value_929,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__494,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__494;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_932;
unsigned int hash_933;
unsigned int it_934;
struct sType* __result_obj__495;
struct sType* __result_obj__496;
struct sType* __result_obj__497;
struct sType* __result_obj__498;
default_value_932 = (void*)0;
    memset(&default_value_932,0,sizeof(struct sType*));
    hash_933=string_get_hash_key(((char*)key))%self->size;
    it_934=hash_933;
    while((_Bool)1) {
        if(        self->item_existance[it_934]) {
            if(            string_equals(self->keys[it_934],key)) {
                __result_obj__495 = (struct sType*)come_increment_ref_count(self->items[it_934]);
                /*c*/ come_call_finalizer3(default_value_932,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__495,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__495;
            }
            it_934++;
            if(            it_934>=self->size) {
                it_934=0;
            }
            else if(            it_934==hash_933) {
                __result_obj__496 = (struct sType*)come_increment_ref_count(default_value_932);
                /*c*/ come_call_finalizer3(default_value_932,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__496,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__496;
            }
        }
        else {
            __result_obj__497 = (struct sType*)come_increment_ref_count(default_value_932);
            /*c*/ come_call_finalizer3(default_value_932,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__497,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__497;
        }
    }
    __result_obj__498 = (struct sType*)come_increment_ref_count(default_value_932);
    /*c*/ come_call_finalizer3(default_value_932,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__498,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__498;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value1007 = (void*)0;
struct sNode* __result_obj__506;
    __result_obj__506 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1007=expression_node_v99(info))));
    ((__right_value1007) ? __right_value1007 = come_decrement_ref_count(__right_value1007, ((struct sNode*)__right_value1007)->finalize, ((struct sNode*)__right_value1007)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__506) ? __result_obj__506 = come_decrement_ref_count(__result_obj__506, ((struct sNode*)__result_obj__506)->finalize, ((struct sNode*)__result_obj__506)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__506;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct sNode* __dec_obj246;
struct sNode* __result_obj__507;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct sNode* __dec_obj247;
struct sNode* __result_obj__508;
struct sNode* __result_obj__509;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj246=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__507 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__507) ? __result_obj__507 = come_decrement_ref_count(__result_obj__507, ((struct sNode*)__result_obj__507)->finalize, ((struct sNode*)__result_obj__507)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__507;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj247=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj247 ? __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__508 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__508) ? __result_obj__508 = come_decrement_ref_count(__result_obj__508, ((struct sNode*)__result_obj__508)->finalize, ((struct sNode*)__result_obj__508)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__508;
    }
    __result_obj__509 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__509) ? __result_obj__509 = come_decrement_ref_count(__result_obj__509, ((struct sNode*)__result_obj__509)->finalize, ((struct sNode*)__result_obj__509)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__509;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1012 = (void*)0;
struct sNode* node_949;
void* __right_value1013 = (void*)0;
struct sNode* __dec_obj248;
struct sNode* __result_obj__510;
    node_949=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj248=node_949,
    node_949=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_949),info));
    (__dec_obj248 ? __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__510 = (struct sNode*)come_increment_ref_count(node_949);
    ((node_949) ? node_949 = come_decrement_ref_count(node_949, ((struct sNode*)node_949)->finalize, ((struct sNode*)node_949)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__510) ? __result_obj__510 = come_decrement_ref_count(__result_obj__510, ((struct sNode*)__result_obj__510)->finalize, ((struct sNode*)__result_obj__510)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__510;
}

char* get_none_generics_name(char* class_name){
char* p_950;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
char* __result_obj__511;
void* __right_value1016 = (void*)0;
char* __result_obj__512;
    p_950=class_name;
    while(*p_950) {
        if(        *p_950==36) {
            __result_obj__511 = (char*)come_increment_ref_count(((char*)(__right_value1015=charp_substring(((char*)(__right_value1014=__builtin_string(class_name))),0,p_950-class_name))));
            (__right_value1014 = come_decrement_ref_count(__right_value1014, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1015 = come_decrement_ref_count(__right_value1015, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__511 = come_decrement_ref_count(__result_obj__511, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__511;
        }
        else {
            p_950++;
        }
    }
    __result_obj__512 = (char*)come_increment_ref_count(((char*)(__right_value1016=__builtin_string(class_name))));
    (__right_value1016 = come_decrement_ref_count(__right_value1016, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__512 = come_decrement_ref_count(__result_obj__512, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__512;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct buffer* buf_951;
struct sClass* klass_952;
char* class_name_953;
int i_954;
void* __right_value1019 = (void*)0;
struct sType* type_955;
void* __right_value1020 = (void*)0;
char* type_name_956;
int i_957;
void* __right_value1021 = (void*)0;
char* __result_obj__513;
    buf_951=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2642, "struct buffer*"))));
    klass_952=generics_type->mClass;
    class_name_953=klass_952->mName;
    buffer_append_str(buf_951,class_name_953);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_951,36);
        buffer_append_char(buf_951,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_954=0;        i_954<list$1sType$ph_length(generics_type->mGenericsTypes);        i_954++        ){
            type_955=((struct sType*)(__right_value1019=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_954)));
            /*c*/ come_call_finalizer3(__right_value1019,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_956=(char*)come_increment_ref_count(create_generics_name(type_955,info));
            buffer_append_str(buf_951,type_name_956);
            buffer_append_char(buf_951,36);
            for(            i_957=0;            i_957<type_955->mPointerNum;            i_957++            ){
                buffer_append_char(buf_951,112);
            }
            if(            type_955->mHeap) {
                buffer_append_str(buf_951,"h");
            }
            (type_name_956 = come_decrement_ref_count(type_name_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__513 = (char*)come_increment_ref_count(((char*)(__right_value1021=buffer_to_string(buf_951))));
    /*c*/ come_call_finalizer3(buf_951,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1021 = come_decrement_ref_count(__right_value1021, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__513 = come_decrement_ref_count(__result_obj__513, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__513;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_958;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct buffer* buf_959;
void* __right_value1024 = (void*)0;
char* __dec_obj249;
int i_960;
void* __right_value1025 = (void*)0;
char* __dec_obj250;
void* __right_value1026 = (void*)0;
char* __dec_obj251;
int i_961;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
char* __result_obj__514;
struct_name_958 = (void*)0;
    buf_959=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2677, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj249=struct_name_958,
        struct_name_958=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_959,"$");
            }
            for(            i_960=0;            i_960<obj_type->mOriginalTypeNamePointerNum;            i_960++            ){
                buffer_append_str(buf_959,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj250=struct_name_958,
        struct_name_958=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj251=struct_name_958,
        struct_name_958=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_959,"$");
        }
        for(        i_961=0;        i_961<obj_type->mPointerNum;        i_961++        ){
            buffer_append_str(buf_959,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_959,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_959,"pa");
    }
    __result_obj__514 = (char*)come_increment_ref_count(((char*)(__right_value1028=xsprintf("%s%s_%s",struct_name_958,((char*)(__right_value1027=buffer_to_string(buf_959))),fun_name))));
    (struct_name_958 = come_decrement_ref_count(struct_name_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_959,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1027 = come_decrement_ref_count(__right_value1027, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1028 = come_decrement_ref_count(__right_value1028, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__514 = come_decrement_ref_count(__result_obj__514, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__514;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_962;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
struct buffer* buf_963;
void* __right_value1031 = (void*)0;
char* __dec_obj252;
void* __right_value1032 = (void*)0;
char* __dec_obj253;
int i_964;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
char* __result_obj__515;
struct_name_962 = (void*)0;
    buf_963=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2718, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj252=struct_name_962,
        struct_name_962=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj253=struct_name_962,
        struct_name_962=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_963,"$");
        }
        for(        i_964=0;        i_964<obj_type->mPointerNum;        i_964++        ){
            buffer_append_str(buf_963,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_963,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_963,"pa");
    }
    __result_obj__515 = (char*)come_increment_ref_count(((char*)(__right_value1034=xsprintf("%s%s_%s",struct_name_962,((char*)(__right_value1033=buffer_to_string(buf_963))),fun_name))));
    (struct_name_962 = come_decrement_ref_count(struct_name_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_963,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1033 = come_decrement_ref_count(__right_value1033, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1034 = come_decrement_ref_count(__right_value1034, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__515 = come_decrement_ref_count(__result_obj__515, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__515;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_965;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct buffer* buf_966;
void* __right_value1037 = (void*)0;
char* __dec_obj254;
int i_967;
void* __right_value1038 = (void*)0;
char* __dec_obj255;
void* __right_value1039 = (void*)0;
char* __dec_obj256;
int i_968;
void* __right_value1040 = (void*)0;
int len_970;
void* __right_value1041 = (void*)0;
char* __result_obj__516;
struct_name_965 = (void*)0;
    buf_966=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2747, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj254=struct_name_965,
        struct_name_965=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_966,"$");
            }
            for(            i_967=0;            i_967<obj_type->mOriginalTypeNamePointerNum;            i_967++            ){
                buffer_append_str(buf_966,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj255=struct_name_965,
        struct_name_965=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj256=struct_name_965,
        struct_name_965=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_966,"$");
        }
        for(        i_968=0;        i_968<obj_type->mPointerNum;        i_968++        ){
            buffer_append_str(buf_966,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_966,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_966,"pa");
    }
    char none_method_name_969[charp_length(fun_name)+1];
    memset(&none_method_name_969, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_970=string_length(struct_name_965)+string_length(((char*)(__right_value1040=buffer_to_string(buf_966))));
    (__right_value1040 = come_decrement_ref_count(__right_value1040, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_969,fun_name+len_970+1,charp_length(fun_name)-len_970-1);
    none_method_name_969[charp_length(fun_name)-len_970-1]=0;
    __result_obj__516 = (char*)come_increment_ref_count(((char*)(__right_value1041=__builtin_string(none_method_name_969))));
    (struct_name_965 = come_decrement_ref_count(struct_name_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_966,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1041 = come_decrement_ref_count(__right_value1041, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__516 = come_decrement_ref_count(__result_obj__516, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__516;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1042 = (void*)0;
char* struct_name_971;
void* __right_value1043 = (void*)0;
char* __result_obj__517;
    struct_name_971=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__517 = (char*)come_increment_ref_count(((char*)(__right_value1043=xsprintf("%s_%s",struct_name_971,fun_name))));
    (struct_name_971 = come_decrement_ref_count(struct_name_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1043 = come_decrement_ref_count(__right_value1043, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__517 = come_decrement_ref_count(__result_obj__517, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__517;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1044 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_972=0;
char* Err_973=0;
struct sNode* __result_obj__518;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1044=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_exception_var_c7_972=multiple_assign_var37->v1;
    Err_973=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_973)?(puts(Err_973),exit(2)):(0));
    /*c*/ come_call_finalizer3(__right_value1044,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__518 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (Err_973 = come_decrement_ref_count(Err_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__518) ? __result_obj__518 = come_decrement_ref_count(__result_obj__518, ((struct sNode*)__result_obj__518)->finalize, ((struct sNode*)__result_obj__518)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__518;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_974;
char* p_975;
int sline_976;
_Bool err_flag_977;
void* __right_value1047 = (void*)0;
char* label_978;
void* __right_value1048 = (void*)0;
char* __dec_obj257;
char* __dec_obj258;
_Bool no_comma_979;
_Bool in_fun_param_980;
void* __right_value1049 = (void*)0;
struct sNode* node_981;
void* __right_value1050 = (void*)0;
struct sNode* __dec_obj259;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct sNode* _inf_value24;
struct sLambdaCall* _inf_obj_value24;
void* __right_value1059 = (void*)0;
struct sNode* __result_obj__521;
struct sNode* __result_obj__522;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_974=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2816, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_975=info->p;
            sline_976=info->sline;
            err_flag_977=(_Bool)0;
            label_978=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj257=label_978,
                label_978=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_977=(_Bool)1;
            }
            if(            err_flag_977==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj258=label_978,
                label_978=((void*)0);
                __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_975;
                info->sline=sline_976;
            }
            no_comma_979=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_980=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_981=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj259=node_981,
            node_981=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_981),info));
            (__dec_obj259 ? __dec_obj259 = come_decrement_ref_count(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_979;
            info->in_fun_param=in_fun_param_980;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_974,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2859, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_978),(struct sNode*)come_increment_ref_count(node_981))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_978 = come_decrement_ref_count(label_978, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_981) ? node_981 = come_decrement_ref_count(node_981, ((struct sNode*)node_981)->finalize, ((struct sNode*)node_981)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_978 = come_decrement_ref_count(label_978, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_981) ? node_981 = come_decrement_ref_count(node_981, ((struct sNode*)node_981)->finalize, ((struct sNode*)node_981)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2877, "struct sNode");
        _inf_obj_value24=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1054=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2877, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_974,info))));
        _inf_value24->_protocol_obj=_inf_obj_value24;
        _inf_value24->finalize=(void*)sLambdaCall_finalize;
        _inf_value24->clone=(void*)sLambdaCall_clone;
        _inf_value24->compile=(void*)sLambdaCall_compile;
        _inf_value24->sline=(void*)sNodeBase_sline;
        _inf_value24->sline_real=(void*)sNodeBase_sline_real;
        _inf_value24->sname=(void*)sNodeBase_sname;
        _inf_value24->terminated=(void*)sNodeBase_terminated;
        _inf_value24->kind=(void*)sLambdaCall_kind;
        __result_obj__521 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1059=_inf_value24)));
        /*c*/ come_call_finalizer3(params_974,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value1054,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value1059) ? __right_value1059 = come_decrement_ref_count(__right_value1059, ((struct sNode*)__right_value1059)->finalize, ((struct sNode*)__right_value1059)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__521) ? __result_obj__521 = come_decrement_ref_count(__result_obj__521, ((struct sNode*)__result_obj__521)->finalize, ((struct sNode*)__result_obj__521)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__521;
        /*c*/ come_call_finalizer3(params_974,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__522 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__522) ? __result_obj__522 = come_decrement_ref_count(__result_obj__522, ((struct sNode*)__result_obj__522)->finalize, ((struct sNode*)__result_obj__522)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__522;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__519;
void* __right_value1055 = (void*)0;
struct sLambdaCall* result_982;
void* __right_value1056 = (void*)0;
char* __dec_obj260;
void* __right_value1057 = (void*)0;
struct sNode* __dec_obj261;
void* __right_value1058 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj262;
struct sLambdaCall* __result_obj__520;
    if(    self==(void*)0) {
        __result_obj__519 = (void*)0;
        return __result_obj__519;
    }
    result_982=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_982->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_982->sname,
        result_982->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_982->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj261=result_982->node,
        result_982->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj261 ? __dec_obj261 = come_decrement_ref_count(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj262=result_982->params,
        result_982->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj262,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__520 = result_982;
    /*c*/ come_call_finalizer3(result_982,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__520;
}

