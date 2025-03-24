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
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1105, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1115, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1125, "struct list_item$1char$*"))));
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
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1125, "struct list_item$1char$p*"))));
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
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1105, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1115, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1125, "struct list_item$1short$*"))));
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
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1105, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1115, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1125, "struct list_item$1int$*"))));
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
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1105, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1115, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1125, "struct list_item$1long$*"))));
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
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1105, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1115, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1125, "struct list_item$1float$*"))));
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
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1105, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1115, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1125, "struct list_item$1double$*"))));
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
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1125, "struct list_item$1char$ph*"))));
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
_Bool _if_conditional1;
void* __right_value231 = (void*)0;
struct sNode* __dec_obj42;
_Bool Value_270;
_Bool __result_obj__180;
void* __right_value232 = (void*)0;
struct CVALUE* come_value_271;
void* __right_value233 = (void*)0;
struct sType* come_value_type_272;
void* __right_value234 = (void*)0;
struct sType* __dec_obj43;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_274=0;
char* Err_275=0;
_Bool _if_conditional2;
_Bool __result_obj__181;
void* __right_value239 = (void*)0;
char* type_name_276;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __if_result__0_277 = (void*)0;
struct list$1sVar$ph* o2_saved_278;
struct sVar* it_281;
void* __right_value246 = (void*)0;
struct list$1sVar$ph* __dec_obj44;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct sFun* come_fun_288;
void* __if_result__1_289 = (void*)0;
struct list$1sVar$ph* o2_saved_290;
struct sVar* it_291;
void* __right_value252 = (void*)0;
struct list$1sVar$ph* __dec_obj45;
void* __right_value253 = (void*)0;
    if(    self->value) {
        come_fun_239=info->come_fun;
        result_type_240=(struct sType*)come_increment_ref_count(sType_clone(come_fun_239->mResultType));
        result_type2_268=(struct sType*)come_increment_ref_count(solve_generics(result_type_240,info->generics_type,info));
        result_type3_269=result_type2_268->mNoSolvedGenericsType;
        if(        result_type2_268->mNoSolvedGenericsType) {
            result_type3_269=result_type2_268->mNoSolvedGenericsType;
        }
        else {
            result_type3_269=result_type2_268;
        }
        if(        result_type_240->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value230=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
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
        come_value_type_272=(struct sType*)come_increment_ref_count(solve_generics(come_value_271->type,info->generics_type,info));
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
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value237=make_define_var(result_type2_268,((char*)(__right_value236=xsprintf("__result_obj__\%s",((char*)(__right_value235=int_to_string(result_num_273)))))),(_Bool)0,info))));
            (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value236 = come_decrement_ref_count(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_268->mClass->mName)>strlen("tuple")&&memcmp(result_type2_268->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value238=check_assign_type("result type",result_type2_268,come_value_type_272,come_value_271,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_274=multiple_assign_var1->v1;
                    Err_275=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_275)),                    /*c*/ come_call_finalizer3(__right_value238,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
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
                    add_come_code(info,((char*)(__right_value241=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value240=int_to_string(result_num_273)))))),type_name_276,come_value_271->c_value);
                    (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_276 = come_decrement_ref_count(type_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value243=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value242=int_to_string(result_num_273)))))),come_value_271->c_value);
                    (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value245=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value244=int_to_string(result_num_273)))))),come_value_271->c_value);
                (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_239->mBlock,info,come_value_271->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_278=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_281=list$1sVar$ph_begin((o2_saved_278));                    !list$1sVar$ph_end((o2_saved_278));                    it_281=list$1sVar$ph_next((o2_saved_278))                    ){
                        free_object(((struct sType*)(__right_value246=sType_clone(it_281->mType))),it_281->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value246,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
                add_come_code(info,((char*)(__right_value247=xsprintf("come_heap_final();\n"))));
                (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_268->mHeap) {
                free_object(result_type2_268,((char*)(__right_value249=xsprintf("__result_obj__\%s",((char*)(__right_value248=int_to_string(result_num_273)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value251=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value250=int_to_string(result_num_273)))))));
            (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                    free_object(((struct sType*)(__right_value252=sType_clone(it_291->mType))),it_291->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value252,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
            add_come_code(info,((char*)(__right_value253=xsprintf("come_heap_final();\n"))));
            (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
    result_246=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1016, "struct list$1sType$ph*"))));
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
        litem_248=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_248->prev=((void*)0);
        litem_248->next=((void*)0);
        __dec_obj20=litem_248->item,
        litem_248->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_248;
        self->head=litem_248;
    }
    else if(    self->len==1) {
        litem_249=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1045, "struct list_item$1sType$ph*"))));
        litem_249->prev=self->head;
        litem_249->next=((void*)0);
        __dec_obj21=litem_249->item,
        litem_249->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_249;
        self->head->next=litem_249;
    }
    else {
        litem_250=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value197=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1055, "struct list_item$1sType$ph*"))));
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
    result_254=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1016, "struct list$1sNode$ph*"))));
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
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value211=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_256->prev=((void*)0);
        litem_256->next=((void*)0);
        __dec_obj31=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_256;
        self->head=litem_256;
    }
    else if(    self->len==1) {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value212=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1045, "struct list_item$1sNode$ph*"))));
        litem_257->prev=self->head;
        litem_257->next=((void*)0);
        __dec_obj32=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_257;
        self->head->next=litem_257;
    }
    else {
        litem_258=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value213=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1055, "struct list_item$1sNode$ph*"))));
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
    result_261=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1016, "struct list$1char$ph*"))));
    it_262=self->head;
    while(it_262!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_261,(char*)come_increment_ref_count((char*)come_memdup(it_262->item, "./comelang.h", 1021, "char*")));
        }
        else {
            list$1char$ph_add(result_261,(char*)come_increment_ref_count((char*)come_memdup(it_262->item, "./comelang.h", 1024, "char*")));
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
        litem_263=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value221=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj37=litem_263->item,
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1) {
        litem_264=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value222=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1045, "struct list_item$1char$ph*"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj38=litem_264->item,
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value223=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1055, "struct list_item$1char$ph*"))));
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
void* __right_value254 = (void*)0;
char* __dec_obj46;
struct sOutputNode* __result_obj__188;
    ((struct sNodeBase*)(__right_value254=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value254,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value255 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value255=__builtin_string("sOutputNode"))));
    (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
void* __right_value256 = (void*)0;
char* __dec_obj47;
struct list$1sNode$ph* __dec_obj48;
struct sInlineAssembler* __result_obj__190;
    ((struct sNodeBase*)(__right_value256=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value256,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value257 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value257=__builtin_string("sInlineAssembler"))));
    (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__191;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_292;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct CVALUE* come_value_293;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct buffer* buf_294;
char* p_295;
_Bool dquort_296;
int num_exp_297;
void* __right_value262 = (void*)0;
struct sNode* node_298;
_Bool Value_302;
_Bool __result_obj__194;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_303;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
char* __dec_obj49;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__196;
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
            node_298=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_297++));
            Value_302=node_compile(node_298,info);
            if(            !Value_302) {
                __result_obj__194 = (_Bool)0;
                ((node_298) ? node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_292 = come_decrement_ref_count(source_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_294,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__194;
            }
            else {
            }
            come_value_303=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_294,come_value_303->c_value);
            if(            *p_295==41) {
                buffer_append_char(buf_294,*p_295);
                p_295++;
            }
            ((node_298) ? node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_303,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_294,*p_295);
            p_295++;
        }
    }
    __dec_obj49=come_value_293->c_value,
    come_value_293->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value264=buffer_to_string(buf_294)))));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj50=come_value_293->type,
    come_value_293->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 248, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_293->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_293));
    add_come_last_code(info,"%s",come_value_293->c_value);
    __result_obj__196 = (_Bool)1;
    (source_292 = come_decrement_ref_count(source_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_294,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value269 = (void*)0;
struct list_item$1CVALUE$ph* litem_304;
struct CVALUE* __dec_obj51;
void* __right_value270 = (void*)0;
struct list_item$1CVALUE$ph* litem_305;
struct CVALUE* __dec_obj52;
void* __right_value271 = (void*)0;
struct list_item$1CVALUE$ph* litem_306;
struct CVALUE* __dec_obj53;
struct list$1CVALUE$ph* __result_obj__195;
    if(    self->len==0) {
        litem_304=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value269=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1105, "struct list_item$1CVALUE$ph*"))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj51=litem_304->item,
        litem_304->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value270=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1115, "struct list_item$1CVALUE$ph*"))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj52=litem_305->item,
        litem_305->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value271=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1125, "struct list_item$1CVALUE$ph*"))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj53=litem_306->item,
        litem_306->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result_obj__195 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value272 = (void*)0;
struct sCurrentNode2* __result_obj__197;
    ((struct sNodeBase*)(__right_value272=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value272,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__197 = (struct sCurrentNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value273 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value273=__builtin_string(self->sname))));
    (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value274 = (void*)0;
char* __result_obj__199;
    __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value274=__builtin_string("sCurrentNode"))));
    (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__199;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value275 = (void*)0;
char* class_name_307;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sClass* current_stack_308;
struct sVarTable* vtable_309;
struct map$2char$phsVar$ph* o2_saved_310;
char* it_313;
char* key_316;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sVar* value_317;
void* __right_value280 = (void*)0;
struct sType* type2_321;
void* __right_value281 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct tuple2$2char$phsType$ph* item_322;
void* __right_value287 = (void*)0;
struct sType* type3_333;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct tuple2$2char$phsType$ph* item2_336;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_385;
char* it_386;
char* key_387;
void* __right_value301 = (void*)0;
struct sVar* value_388;
void* __right_value302 = (void*)0;
struct sType* type2_389;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct tuple2$2char$phsType$ph* item_390;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_391;
void* __right_value307 = (void*)0;
char* __dec_obj61;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__236;
    info->current_stack_num++;
    class_name_307=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_308=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 432, "struct sClass*")),(char*)come_increment_ref_count(class_name_307),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_309=info->lv_table;
    while(vtable_309) {
        for(        o2_saved_310=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_309->mVars)),it_313=map$2char$phsVar$ph_begin((o2_saved_310));        !map$2char$phsVar$ph_end((o2_saved_310));        it_313=map$2char$phsVar$ph_next((o2_saved_310))        ){
            key_316=it_313;
            value_317=((struct sVar*)(__right_value279=map$2char$phsVar$ph$p_operator_load_element(vtable_309->mVars,((char*)(__right_value278=__builtin_string(key_316))))));
            (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value279,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_321=(struct sType*)come_increment_ref_count(sType_clone(value_317->mType));
            type2_321->mPointerNum++;
            item_322=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 445, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_317->mCValueName)),(struct sType*)come_increment_ref_count(type2_321)));
            if(            value_317->mCValueName!=((void*)0)) {
                if(                strcmp(value_317->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_317->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_317->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_317->mType->mClass->mName,"va_list")||string_operator_equals(value_317->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_321->mArrayNum)==1) {
                    type3_333=(struct sType*)come_increment_ref_count(sType_clone(type2_321));
                    list$1sNode$ph_reset(type3_333->mArrayNum);
                    type3_333->mPointerNum=1;
                    type3_333->mOriginIsArray=(_Bool)1;
                    item2_336=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 465, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_317->mCValueName)),(struct sType*)come_increment_ref_count(type3_333)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_308->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_336)));
                    value_317->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_333,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_336,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_308->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_322)));
                }
            }
            /*c*/ come_call_finalizer3(type2_321,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_322,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_310,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_309=vtable_309->mParent;
    }
    output_struct(current_stack_308,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_307),(struct sClass*)come_increment_ref_count(current_stack_308));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_307,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_307);
    vtable_309=info->lv_table;
    while(vtable_309) {
        for(        o2_saved_385=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_309->mVars)),it_386=map$2char$phsVar$ph_begin((o2_saved_385));        !map$2char$phsVar$ph_end((o2_saved_385));        it_386=map$2char$phsVar$ph_next((o2_saved_385))        ){
            key_387=it_386;
            value_388=((struct sVar*)(__right_value301=map$2char$phsVar$ph$p_operator_load_element(vtable_309->mVars,key_387)));
            /*c*/ come_call_finalizer3(__right_value301,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_389=(struct sType*)come_increment_ref_count(sType_clone(value_388->mType));
            item_390=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 494, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_388->mCValueName),(struct sType*)come_increment_ref_count(type2_389)));
            if(            value_388->mCValueName!=((void*)0)) {
                if(                strcmp(value_388->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_388->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_388->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_388->mType->mClass->mName,"va_list")||string_operator_equals(value_388->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_388->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_389->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_388->mCValueName,value_388->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_388->mCValueName,value_388->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_389->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_388->mCValueName,value_388->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_388->mCValueName,value_388->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_389,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_390,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_385,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_309=vtable_309->mParent;
    }
    come_value_391=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 533, "struct CVALUE*"))));
    __dec_obj61=come_value_391->c_value,
    come_value_391->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj62=come_value_391->type,
    come_value_391->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 536, "struct sType*")),(char*)come_increment_ref_count(class_name_307),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_391->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_391->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_391));
    __result_obj__236 = (_Bool)1;
    (class_name_307 = come_decrement_ref_count(class_name_307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_308,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_391,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__236;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_311;
char* __result_obj__200;
char* __result_obj__201;
char* result_312;
char* __result_obj__202;
result_311 = (void*)0;
result_312 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_311,0,sizeof(char*));
        __result_obj__200 = result_311;
        return __result_obj__200;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__201 = self->key_list->it->item;
        return __result_obj__201;
    }
    memset(&result_312,0,sizeof(char*));
    __result_obj__202 = result_312;
    return __result_obj__202;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_314;
char* __result_obj__203;
char* __result_obj__204;
char* result_315;
char* __result_obj__205;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_314,0,sizeof(char*));
        __result_obj__203 = result_314;
        return __result_obj__203;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__204 = self->key_list->it->item;
        return __result_obj__204;
    }
    memset(&result_315,0,sizeof(char*));
    __result_obj__205 = result_315;
    return __result_obj__205;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_318;
unsigned int hash_319;
unsigned int it_320;
struct sVar* __result_obj__206;
struct sVar* __result_obj__207;
struct sVar* __result_obj__208;
struct sVar* __result_obj__209;
default_value_318 = (void*)0;
    memset(&default_value_318,0,sizeof(struct sVar*));
    hash_319=string_get_hash_key(((char*)key))%self->size;
    it_320=hash_319;
    while((_Bool)1) {
        if(        self->item_existance[it_320]) {
            if(            string_equals(self->keys[it_320],key)) {
                __result_obj__206 = (struct sVar*)come_increment_ref_count(self->items[it_320]);
                /*c*/ come_call_finalizer3(default_value_318,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__206,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__206;
            }
            it_320++;
            if(            it_320>=self->size) {
                it_320=0;
            }
            else if(            it_320==hash_319) {
                __result_obj__207 = (struct sVar*)come_increment_ref_count(default_value_318);
                /*c*/ come_call_finalizer3(default_value_318,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__207,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__207;
            }
        }
        else {
            __result_obj__208 = (struct sVar*)come_increment_ref_count(default_value_318);
            /*c*/ come_call_finalizer3(default_value_318,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__208,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__208;
        }
    }
    __result_obj__209 = (struct sVar*)come_increment_ref_count(default_value_318);
    /*c*/ come_call_finalizer3(default_value_318,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
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
struct tuple2$2char$phsType$ph* __result_obj__210;
void* __right_value282 = (void*)0;
struct tuple2$2char$phsType$ph* result_323;
void* __right_value283 = (void*)0;
char* __dec_obj54;
void* __right_value284 = (void*)0;
struct sType* __dec_obj55;
struct tuple2$2char$phsType$ph* __result_obj__211;
    if(    self==(void*)0) {
        __result_obj__210 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__210,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__210;
    }
    result_323=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_323->v1,
        result_323->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_323->v2,
        result_323->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__211 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_323);
    /*c*/ come_call_finalizer3(result_323,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_324;
    result_324=0;
    result_324+=int_get_hash_key(((int)self->v1));
    result_324+=int_get_hash_key(((int)self->v2));
    return result_324;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_325;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_326;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_325=left->head;
    it2_326=right->head;
    while(it_325!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_325->item,it2_326->item)) {
            return (_Bool)0;
        }
        it_325=it_325->next;
        it2_326=it2_326->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_327;
struct list_item$1sType$ph* it2_328;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_327=left->head;
    it2_328=right->head;
    while(it_327!=((void*)0)) {
        if(        !sType_equals(it_327->item,it2_328->item)) {
            return (_Bool)0;
        }
        it_327=it_327->next;
        it2_328=it2_328->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_329;
struct list_item$1sNode$ph* it2_330;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_329=left->head;
    it2_330=right->head;
    while(it_329!=((void*)0)) {
        if(        !sNode_equals(it_329->item,it2_330->item)) {
            return (_Bool)0;
        }
        it_329=it_329->next;
        it2_330=it2_330->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_331;
struct list_item$1char$ph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(it_331!=((void*)0)) {
        if(        !string_equals(it_331->item,it2_332->item)) {
            return (_Bool)0;
        }
        it_331=it_331->next;
        it2_332=it2_332->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj56;
struct sType* __dec_obj57;
struct tuple2$2char$phsType$ph* __result_obj__212;
    __dec_obj56=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__212 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
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
struct list_item$1sNode$ph* it_334;
struct list_item$1sNode$ph* prev_it_335;
struct list$1sNode$ph* __result_obj__213;
    it_334=self->head;
    while(it_334!=((void*)0)) {
        prev_it_335=it_334;
        it_334=it_334->next;
        /*c*/ come_call_finalizer3(prev_it_335,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__213 = self;
    return __result_obj__213;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value291 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_337;
struct tuple2$2char$phsType$ph* __dec_obj58;
void* __right_value292 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_338;
struct tuple2$2char$phsType$ph* __dec_obj59;
void* __right_value293 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_339;
struct tuple2$2char$phsType$ph* __dec_obj60;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__214;
    if(    self->len==0) {
        litem_337=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value291=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1105, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj58=litem_337->item,
        litem_337->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value292=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1115, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj59=litem_338->item,
        litem_338->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value293=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1125, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj60=litem_339->item,
        litem_339->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result_obj__214 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_340;
int i_341;
    for(    i_340=0;    i_340<self->size;    i_340++    ){
        if(        self->item_existance[i_340]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_340],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_341=0;    i_341<self->size;    i_341++    ){
        if(        self->item_existance[i_341]) {
            if(            1) {
                (self->keys[i_341] = come_decrement_ref_count(self->keys[i_341], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_361;
unsigned int it_362;
_Bool same_key_exist_379;
char* it2_382;
struct map$2char$phsClass$ph* __result_obj__235;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_361=string_get_hash_key(((char*)key))%self->size;
    it_362=hash_361;
    while((_Bool)1) {
        if(        self->item_existance[it_362]) {
            if(            string_equals(self->keys[it_362],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_362]);
                    (self->keys[it_362] = come_decrement_ref_count(self->keys[it_362], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_362]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_362]);
                    self->keys[it_362]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_362],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_362]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_362]=item;
                }
                break;
            }
            it_362++;
            if(            it_362>=self->size) {
                it_362=0;
            }
            else if(            it_362==hash_361) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_362]=(_Bool)1;
            if(            1) {
                self->keys[it_362]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_362]=key;
            }
            if(            1) {
                self->items[it_362]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_362]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_379=(_Bool)0;
    for(    it2_382=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_382=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_382,key)) {
            same_key_exist_379=(_Bool)1;
        }
    }
    if(    !same_key_exist_379) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__235 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__235;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_342;
void* __right_value296 = (void*)0;
char** keys_343;
void* __right_value297 = (void*)0;
struct sClass** items_344;
void* __right_value298 = (void*)0;
_Bool* item_existance_345;
int len_346;
char* it_349;
struct sClass* default_value_352;
void* __right_value299 = (void*)0;
struct sClass* it2_353;
unsigned int hash_358;
int n_359;
struct sClass* default_value_360;
void* __right_value300 = (void*)0;
default_value_352 = (void*)0;
default_value_360 = (void*)0;
    size_342=self->size*10;
    keys_343=(char**)come_increment_ref_count(((char**)(__right_value296=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_342)), "./comelang.h", 2159, "char**"))));
    items_344=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value297=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_342)), "./comelang.h", 2160, "struct sClass**"))));
    item_existance_345=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value298=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_342)), "./comelang.h", 2161, "_Bool*"))));
    len_346=0;
    for(    it_349=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_349=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_352,0,sizeof(struct sClass*));
        it2_353=((struct sClass*)(__right_value299=map$2char$phsClass$ph_at(self,it_349,(struct sClass*)come_increment_ref_count(default_value_352))));
        /*c*/ come_call_finalizer3(__right_value299,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_358=string_get_hash_key(((char*)it_349))%size_342;
        n_359=hash_358;
        while((_Bool)1) {
            if(            item_existance_345[n_359]) {
                n_359++;
                if(                n_359>=size_342) {
                    n_359=0;
                }
                else if(                n_359==hash_358) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_345[n_359]=(_Bool)1;
                keys_343[n_359]=it_349;
                items_344[n_359]=((struct sClass*)(__right_value300=map$2char$phsClass$ph_at(self,it_349,(struct sClass*)come_increment_ref_count(default_value_360))));
                /*c*/ come_call_finalizer3(__right_value300,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_346++;
                /*c*/ come_call_finalizer3(default_value_360,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_360,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_352,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_343;
    self->items=items_344;
    self->item_existance=item_existance_345;
    self->size=size_342;
    self->len=len_346;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_347;
char* __result_obj__215;
char* __result_obj__216;
char* result_348;
char* __result_obj__217;
result_347 = (void*)0;
result_348 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_347,0,sizeof(char*));
        __result_obj__215 = result_347;
        return __result_obj__215;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__216 = self->key_list->it->item;
        return __result_obj__216;
    }
    memset(&result_348,0,sizeof(char*));
    __result_obj__217 = result_348;
    return __result_obj__217;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_350;
char* __result_obj__218;
char* __result_obj__219;
char* result_351;
char* __result_obj__220;
result_350 = (void*)0;
result_351 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_350,0,sizeof(char*));
        __result_obj__218 = result_350;
        return __result_obj__218;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__219 = self->key_list->it->item;
        return __result_obj__219;
    }
    memset(&result_351,0,sizeof(char*));
    __result_obj__220 = result_351;
    return __result_obj__220;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_354;
unsigned int it_355;
struct sClass* __result_obj__221;
struct sClass* __result_obj__222;
struct sClass* __result_obj__223;
struct sClass* __result_obj__224;
    hash_354=string_get_hash_key(((char*)key))%self->size;
    it_355=hash_354;
    while((_Bool)1) {
        if(        self->item_existance[it_355]) {
            if(            string_equals(self->keys[it_355],key)) {
                __result_obj__221 = (struct sClass*)come_increment_ref_count(self->items[it_355]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__221,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__221;
            }
            it_355++;
            if(            it_355>=self->size) {
                it_355=0;
            }
            else if(            it_355==hash_354) {
                __result_obj__222 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__222,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__222;
            }
        }
        else {
            __result_obj__223 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__223,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__223;
        }
    }
    __result_obj__224 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__224,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__224;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_356;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_357;
    it_356=self->head;
    while(it_356!=((void*)0)) {
        prev_it_357=it_356;
        it_356=it_356->next;
        /*c*/ come_call_finalizer3(prev_it_357,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_363;
struct list_item$1char$ph* it_364;
struct list$1char$ph* __result_obj__228;
    it2_363=0;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        if(        string_equals(it_364->item,item)) {
            list$1char$ph_delete(self,it2_363,it2_363+1);
            break;
        }
        it2_363++;
        it_364=it_364->next;
    }
    __result_obj__228 = self;
    return __result_obj__228;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_365;
struct list$1char$ph* __result_obj__225;
struct list_item$1char$ph* it_368;
int i_369;
struct list_item$1char$ph* prev_it_370;
struct list_item$1char$ph* it_371;
int i_372;
struct list_item$1char$ph* prev_it_373;
struct list_item$1char$ph* it_374;
struct list_item$1char$ph* head_prev_it_375;
struct list_item$1char$ph* tail_it_376;
int i_377;
struct list_item$1char$ph* prev_it_378;
struct list$1char$ph* __result_obj__227;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_365=tail;
        tail=head;
        head=tmp_365;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__225 = self;
        return __result_obj__225;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_368=self->head;
        i_369=0;
        while(it_368!=((void*)0)) {
            if(            i_369<tail) {
                prev_it_370=it_368;
                it_368=it_368->next;
                i_369++;
                /*c*/ come_call_finalizer3(prev_it_370,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_369==tail) {
                self->head=it_368;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_368=it_368->next;
                i_369++;
            }
        }
    }
    else if(    tail==self->len) {
        it_371=self->head;
        i_372=0;
        while(it_371!=((void*)0)) {
            if(            i_372==head) {
                self->tail=it_371->prev;
                self->tail->next=((void*)0);
            }
            if(            i_372>=head) {
                prev_it_373=it_371;
                it_371=it_371->next;
                i_372++;
                /*c*/ come_call_finalizer3(prev_it_373,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_371=it_371->next;
                i_372++;
            }
        }
    }
    else {
        it_374=self->head;
        head_prev_it_375=((void*)0);
        tail_it_376=((void*)0);
        i_377=0;
        while(it_374!=((void*)0)) {
            if(            i_377==head) {
                head_prev_it_375=it_374->prev;
            }
            if(            i_377==tail) {
                tail_it_376=it_374;
            }
            if(            i_377>=head&&i_377<tail) {
                prev_it_378=it_374;
                it_374=it_374->next;
                i_377++;
                /*c*/ come_call_finalizer3(prev_it_378,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_374=it_374->next;
                i_377++;
            }
        }
        if(        head_prev_it_375!=((void*)0)) {
            head_prev_it_375->next=tail_it_376;
        }
        if(        tail_it_376!=((void*)0)) {
            tail_it_376->prev=head_prev_it_375;
        }
    }
    __result_obj__227 = self;
    return __result_obj__227;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_366;
struct list_item$1char$ph* prev_it_367;
struct list$1char$ph* __result_obj__226;
    it_366=self->head;
    while(it_366!=((void*)0)) {
        prev_it_367=it_366;
        it_366=it_366->next;
        /*c*/ come_call_finalizer3(prev_it_367,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__226 = self;
    return __result_obj__226;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_380;
char* __result_obj__229;
char* __result_obj__230;
char* result_381;
char* __result_obj__231;
result_380 = (void*)0;
result_381 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_380,0,sizeof(char*));
        __result_obj__229 = result_380;
        return __result_obj__229;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__230 = self->it->item;
        return __result_obj__230;
    }
    memset(&result_381,0,sizeof(char*));
    __result_obj__231 = result_381;
    return __result_obj__231;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_383;
char* __result_obj__232;
char* __result_obj__233;
char* result_384;
char* __result_obj__234;
result_383 = (void*)0;
result_384 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_383,0,sizeof(char*));
        __result_obj__232 = result_383;
        return __result_obj__232;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__233 = self->it->item;
        return __result_obj__233;
    }
    memset(&result_384,0,sizeof(char*));
    __result_obj__234 = result_384;
    return __result_obj__234;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value310 = (void*)0;
struct sLineNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value310=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value310,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__237 = (struct sLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__237,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value311 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value311=__builtin_string("sLineNode"))));
    (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value314 = (void*)0;
char* __dec_obj63;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__239;
    come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 278, "struct CVALUE*"))));
    __dec_obj63=come_value_392->c_value,
    come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj64=come_value_392->type,
    come_value_392->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 281, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_392->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
    add_come_last_code(info,"%s",come_value_392->c_value);
    __result_obj__239 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_392,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value318 = (void*)0;
struct sSNameNode* __result_obj__240;
    ((struct sNodeBase*)(__right_value318=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value318,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__240 = (struct sSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__240,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value319 = (void*)0;
char* __result_obj__241;
    __result_obj__241 = (char*)come_increment_ref_count(((char*)(__right_value319=__builtin_string("sSNameNode"))));
    (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__241;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value322 = (void*)0;
char* __dec_obj65;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__242;
    come_value_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 306, "struct CVALUE*"))));
    __dec_obj65=come_value_393->c_value,
    come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj66=come_value_393->type,
    come_value_393->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 309, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_393->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
    add_come_last_code(info,"%s",come_value_393->c_value);
    __result_obj__242 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_393,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value326 = (void*)0;
struct sFuncNode* __result_obj__243;
    ((struct sNodeBase*)(__right_value326=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value326,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__243 = (struct sFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value327 = (void*)0;
char* __result_obj__244;
    __result_obj__244 = (char*)come_increment_ref_count(((char*)(__right_value327=__builtin_string("sFuncNode"))));
    (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value330 = (void*)0;
char* __dec_obj67;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__245;
    come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 334, "struct CVALUE*"))));
    __dec_obj67=come_value_394->c_value,
    come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj68=come_value_394->type,
    come_value_394->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 337, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_394->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
    add_come_last_code(info,"%s",come_value_394->c_value);
    __result_obj__245 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_394,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value334 = (void*)0;
struct sWildCard* __result_obj__246;
    ((struct sNodeBase*)(__right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value334,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__246 = (struct sWildCard*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value335 = (void*)0;
char* __result_obj__247;
    __result_obj__247 = (char*)come_increment_ref_count(((char*)(__right_value335=__builtin_string("sWildCard"))));
    (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__247;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sNode* value_node_395;
_Bool Value_396;
_Bool __result_obj__248;
_Bool __result_obj__249;
    value_node_395=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value336=xsprintf("Value"))),info));
    (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_396=node_compile(value_node_395,info);
    if(    !Value_396) {
        __result_obj__248 = (_Bool)0;
        ((value_node_395) ? value_node_395 = come_decrement_ref_count(value_node_395, ((struct sNode*)value_node_395)->finalize, ((struct sNode*)value_node_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__248;
    }
    else {
    }
    __result_obj__249 = (_Bool)1;
    ((value_node_395) ? value_node_395 = come_decrement_ref_count(value_node_395, ((struct sNode*)value_node_395)->finalize, ((struct sNode*)value_node_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__249;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value338 = (void*)0;
struct sCallerFuncNode* __result_obj__250;
    ((struct sNodeBase*)(__right_value338=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value338,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__250 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__250,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value339 = (void*)0;
char* __result_obj__251;
    __result_obj__251 = (char*)come_increment_ref_count(((char*)(__right_value339=__builtin_string("sCallerFuncNode"))));
    (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__251 = come_decrement_ref_count(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value342 = (void*)0;
char* __dec_obj69;
void* __right_value343 = (void*)0;
char* __dec_obj70;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__252;
    come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 386, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj69=come_value_397->c_value,
        come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj70=come_value_397->c_value,
        come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj71=come_value_397->type,
    come_value_397->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 394, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_397->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
    add_come_last_code(info,"%s",come_value_397->c_value);
    __result_obj__252 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value347 = (void*)0;
struct sCallerLineNode* __result_obj__253;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value347,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__253 = (struct sCallerLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__253,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value350 = (void*)0;
char* __dec_obj72;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__254;
    come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 415, "struct CVALUE*"))));
    __dec_obj72=come_value_398->c_value,
    come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj73=come_value_398->type,
    come_value_398->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 418, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_398->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
    add_come_last_code(info,"%s",come_value_398->c_value);
    __result_obj__254 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_398,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value354 = (void*)0;
char* __result_obj__255;
    __result_obj__255 = (char*)come_increment_ref_count(((char*)(__right_value354=__builtin_string("sCallerLineNode"))));
    (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value355 = (void*)0;
struct sCallerSNameNode* __result_obj__256;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value355,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__256 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__256,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct CVALUE* come_value_399;
void* __right_value358 = (void*)0;
char* __dec_obj74;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__257;
    come_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 443, "struct CVALUE*"))));
    __dec_obj74=come_value_399->c_value,
    come_value_399->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value_399->type,
    come_value_399->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 446, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_399->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_399));
    add_come_last_code(info,"%s",come_value_399->c_value);
    __result_obj__257 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_399,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value362 = (void*)0;
char* __result_obj__258;
    __result_obj__258 = (char*)come_increment_ref_count(((char*)(__right_value362=__builtin_string("sCallerSNameNode"))));
    (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__258 = come_decrement_ref_count(__result_obj__258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__258;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* __dec_obj76;
void* __right_value375 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj82;
struct list$1sType$ph* __dec_obj83;
struct buffer* __dec_obj84;
struct sFunCallNode* __result_obj__265;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value363,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
    __result_obj__265 = (struct sFunCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value376 = (void*)0;
char* __result_obj__266;
    __result_obj__266 = (char*)come_increment_ref_count(((char*)(__right_value376=__builtin_string("sFunCallNode"))));
    (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__266 = come_decrement_ref_count(__result_obj__266, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__266;
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
char* fun_name_410;
struct list$1tuple2$2char$phsNode$ph$ph* params_411;
struct buffer* method_block_412;
int method_block_sline_413;
struct sVar* var__414;
struct sType* lambda_type_415;
void* __right_value377 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_416=0;
char* Err_417=0;
_Bool _if_conditional3;
_Bool __result_obj__267;
void* __right_value378 = (void*)0;
struct sType* result_type_418;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1CVALUE$ph* come_params_419;
void* __right_value381 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_422=0;
char* Err_423=0;
_Bool _if_conditional4;
_Bool __result_obj__269;
int i_424;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_425;
struct tuple2$2char$phsNode$ph* it_428;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_431=0;
struct sNode* node_432=0;
_Bool Value_433;
_Bool __result_obj__276;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value383 = (void*)0;
_Bool _if_conditional5;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_438=0;
char* Err_439=0;
_Bool _if_conditional6;
_Bool __result_obj__279;
void* __right_value389 = (void*)0;
_Bool _if_conditional7;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* buf_440;
int j_441;
struct list$1CVALUE$ph* o2_saved_442;
struct CVALUE* it_445;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value395 = (void*)0;
char* __dec_obj85;
void* __right_value396 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__286;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sGenericsFun* generics_fun_449;
_Bool method_generics_452;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1sType$ph* method_generics_types_453;
void* __right_value401 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_454=0;
struct sGenericsFun* gfun_455=0;
char* generics_fun_name_456;
void* __right_value402 = (void*)0;
struct sFun* fun_457;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1CVALUE$ph* come_params_460;
void* __right_value405 = (void*)0;
struct sFun* fun_461;
_Bool no_output_come_code_462;
_Bool __result_obj__295;
void* __right_value406 = (void*)0;
struct CVALUE* method_block_node_463;
void* __right_value407 = (void*)0;
struct sType* method_block_lambda_type_467;
void* __right_value408 = (void*)0;
struct sType* method_block_result_type_468;
void* __right_value409 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_469;
struct sType* generics_fun_method_block_result_type_470;
int method_generics_num_471;
void* __right_value413 = (void*)0;
int n_480;
struct list$1sType$ph* o2_saved_481;
struct sType* it_484;
int method_generics_num_487;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1CVALUE$ph* come_params_488;
int i_489;
struct sType* result_type_490;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_491;
struct tuple2$2char$phsNode$ph* it_492;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_493=0;
struct sNode* node_494=0;
_Bool Value_495;
_Bool __result_obj__307;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_496;
int method_generics_num_500;
void* __right_value422 = (void*)0;
int n_501;
struct list$1sType$ph* o2_saved_502;
struct sType* it_503;
int method_generics_num_504;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_507=0;
struct sGenericsFun* gfun_508=0;
char* __dec_obj94;
void* __right_value426 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_509=0;
struct sGenericsFun* gfun_510=0;
char* __dec_obj95;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1CVALUE$ph* come_params_511;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_512;
struct tuple2$2char$phsNode$ph* it_513;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_514=0;
struct sNode* node_515=0;
_Bool Value_516;
_Bool __result_obj__310;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_517;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct buffer* buf_518;
int j_519;
struct list$1CVALUE$ph* o2_saved_520;
struct CVALUE* it_521;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value434 = (void*)0;
char* __dec_obj96;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sType* __dec_obj97;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* __dec_obj98;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* __dec_obj99;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* __dec_obj100;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* __dec_obj101;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* __dec_obj102;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* __dec_obj103;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* __dec_obj104;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* __dec_obj105;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* __dec_obj106;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* __dec_obj107;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* __dec_obj108;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __dec_obj109;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj110;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj111;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj112;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __dec_obj113;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj114;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj115;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj116;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj117;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj118;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj119;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj120;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj121;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj122;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj123;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj124;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj125;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj126;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj127;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj128;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj129;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj130;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj131;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj132;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj133;
_Bool __result_obj__311;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct list$1CVALUE$ph* come_params_523;
int i_524;
struct sType* result_type_525;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_526;
struct tuple2$2char$phsNode$ph* it_527;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_528=0;
struct sNode* node_529=0;
_Bool Value_530;
_Bool __result_obj__312;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_531;
struct sType* __dec_obj134;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct buffer* buf_532;
int j_533;
struct list$1CVALUE$ph* o2_saved_534;
struct CVALUE* it_535;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value544 = (void*)0;
char* __dec_obj135;
struct sType* __dec_obj136;
_Bool __result_obj__313;
void* __right_value545 = (void*)0;
char* __dec_obj137;
void* __right_value546 = (void*)0;
char* __dec_obj138;
char* p_537;
int version_538;
char* p2_539;
int i_541;
void* __right_value547 = (void*)0;
char* new_fun_name_542;
void* __right_value548 = (void*)0;
_Bool _if_conditional8;
void* __right_value549 = (void*)0;
char* __dec_obj139;
void* __right_value550 = (void*)0;
char* new_fun_name_546;
void* __right_value551 = (void*)0;
_Bool _if_conditional9;
void* __right_value552 = (void*)0;
char* __dec_obj140;
void* __right_value553 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_547=0;
char* Err_548=0;
_Bool _if_conditional10;
_Bool __result_obj__318;
int i_549;
void* __right_value554 = (void*)0;
char* new_fun_name_550;
void* __right_value555 = (void*)0;
_Bool _if_conditional11;
void* __right_value556 = (void*)0;
char* __dec_obj141;
void* __right_value557 = (void*)0;
struct sFun* fun_551;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1CVALUE$ph* come_params_552;
int i_553;
struct sType* result_type_554;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_555;
struct tuple2$2char$phsNode$ph* it_556;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_557=0;
struct sNode* node_558=0;
_Bool Value_559;
_Bool __result_obj__319;
void* __right_value560 = (void*)0;
struct CVALUE* come_value_560;
struct sType* __dec_obj142;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct buffer* buf_561;
int j_562;
struct list$1CVALUE$ph* o2_saved_563;
struct CVALUE* it_564;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct CVALUE* come_value_565;
void* __right_value565 = (void*)0;
char* __dec_obj143;
struct sType* __dec_obj144;
_Bool __result_obj__320;
void* __right_value566 = (void*)0;
struct sType* result_type_566;
_Bool in_exception_value_567;
void* __right_value573 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* new_node_568;
_Bool Value_570;
_Bool __result_obj__323;
_Bool __result_obj__324;
_Bool in_exception_value_571;
void* __right_value576 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* new_node_572;
_Bool Value_573;
_Bool __result_obj__325;
_Bool __result_obj__326;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1sType$ph* param_types_574;
struct list$1sType$ph* o2_saved_575;
struct sType* it_576;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sType* it2_577;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sType* __dec_obj150;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1CVALUE$ph* come_params_578;
int i_579;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_580;
struct tuple2$2char$phsNode$ph* it_581;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_582=0;
struct sNode* node_583=0;
_Bool Value_584;
_Bool __result_obj__327;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_585;
int n_586;
struct list$1char$ph* o2_saved_587;
char* it_588;
void* __right_value588 = (void*)0;
_Bool _if_conditional12;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_589=0;
char* Err_590=0;
_Bool _if_conditional13;
_Bool __result_obj__328;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
_Bool _if_conditional14;
void* __right_value596 = (void*)0;
int i_596;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_597;
struct tuple2$2char$phsNode$ph* it_598;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_599=0;
struct sNode* node_600=0;
_Bool Value_601;
_Bool __result_obj__331;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_602;
void* __right_value598 = (void*)0;
_Bool _if_conditional15;
_Bool Value_603;
_Bool __result_obj__332;
void* __right_value599 = (void*)0;
struct CVALUE* come_value_604;
void* __right_value600 = (void*)0;
_Bool _if_conditional16;
void* __right_value601 = (void*)0;
_Bool _if_conditional17;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_605=0;
char* Err_606=0;
_Bool _if_conditional18;
_Bool __result_obj__333;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
_Bool _if_conditional19;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
_Bool _if_conditional20;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
char* default_param_607;
void* __right_value613 = (void*)0;
char* param_name_611;
void* __right_value614 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_612;
char* p_613;
char* head_614;
int sline_615;
void* __right_value615 = (void*)0;
struct buffer* __dec_obj152;
void* __right_value616 = (void*)0;
struct sNode* node_616;
_Bool Value_617;
_Bool __result_obj__336;
struct buffer* __dec_obj153;
void* __right_value617 = (void*)0;
struct CVALUE* come_value_618;
void* __right_value618 = (void*)0;
_Bool _if_conditional22;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_619=0;
char* Err_620=0;
_Bool _if_conditional23;
_Bool __result_obj__337;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
_Bool _if_conditional24;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
_Bool _if_conditional25;
void* __right_value628 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_621=0;
char* Err_622=0;
_Bool _if_conditional26;
_Bool __result_obj__338;
void* __right_value629 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_623=0;
char* Err_624=0;
_Bool _if_conditional27;
_Bool __result_obj__339;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value634 = (void*)0;
struct sNode* current_stack_frame_node_625;
_Bool Value_627;
_Bool __result_obj__342;
void* __right_value635 = (void*)0;
struct CVALUE* come_value_628;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct buffer* method_block2_629;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sType* method_block_type_630;
void* __right_value640 = (void*)0;
char* class_name_631;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sClass* current_stack_frame_struct_635;
void* __right_value643 = (void*)0;
int num_method_block_636;
void* __right_value644 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_637=0;
char* Err_638=0;
_Bool _if_conditional28;
_Bool __result_obj__347;
void* __right_value645 = (void*)0;
struct sType* result_type_639;
void* __right_value646 = (void*)0;
struct list$1sType$ph* param_types_640;
struct list$1char$ph* param_names_641;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct buffer* all_alhabet_sname_642;
char* p_643;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sType$ph* o2_saved_644;
struct sType* it_645;
struct sType* param_type_646;
void* __right_value651 = (void*)0;
char* param_name_647;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* param_name_648;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* param_name_649;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct buffer* source3_650;
char* p_651;
char* head_652;
int sline_653;
struct buffer* __dec_obj155;
void* __right_value658 = (void*)0;
struct sNode* node_654;
_Bool Value_655;
_Bool __result_obj__348;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
char* method_block_name_656;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* come_value2_657;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sFun* fun2_658;
void* __right_value665 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_659=0;
char* Err_660=0;
_Bool _if_conditional29;
_Bool __result_obj__349;
struct sType* method_block_type2_661;
void* __right_value666 = (void*)0;
char* __dec_obj156;
void* __right_value667 = (void*)0;
struct sType* __dec_obj157;
struct buffer* __dec_obj158;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct buffer* buf_662;
int j_663;
struct list$1CVALUE$ph* o2_saved_664;
struct CVALUE* it_665;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct CVALUE* come_value_666;
void* __right_value672 = (void*)0;
char* __dec_obj159;
void* __right_value673 = (void*)0;
struct sType* __dec_obj160;
void* __right_value674 = (void*)0;
char* __dec_obj161;
_Bool __result_obj__350;
memset(&i_541, 0, sizeof(int));
    fun_name_410=(char*)come_increment_ref_count(self->fun_name);
    params_411=self->params;
    method_block_412=self->method_block;
    method_block_sline_413=self->method_block_sline;
    var__414=get_variable_from_table(info->lv_table,fun_name_410);
    if(    var__414==((void*)0)) {
        var__414=get_variable_from_table(info->gv_table,fun_name_410);
    }
    if(    var__414) {
        lambda_type_415=var__414->mType;
        if(        string_operator_not_equals(lambda_type_415->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value377=err_msg(info,"%s is not lambda, can't call",fun_name_410)));
            come_exception_var_2_416=multiple_assign_var2->v1;
            Err_417=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_417)),            /*c*/ come_call_finalizer3(__right_value377,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __result_obj__267 = (_Bool)1;
                (Err_417 = come_decrement_ref_count(Err_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__267;
            }
            else {
            }
            (Err_417 = come_decrement_ref_count(Err_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_418=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_415->mResultType));
        result_type_418->mStatic=(_Bool)0;
        come_params_419=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 518, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_415->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_411)&&!lambda_type_415->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value381=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_410,list$1sType$ph_length(lambda_type_415->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_411))));
            come_exception_var_3_422=multiple_assign_var3->v1;
            Err_423=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_423)),            /*c*/ come_call_finalizer3(__right_value381,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__269 = (_Bool)1;
                (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_418,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_419,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__269;
            }
            else {
            }
            (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_424=0;
        for(        o2_saved_425=(params_411),it_428=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_425));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_425));        it_428=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_425))        ){
            multiple_assign_var4=it_428;
            label_431=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_432=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_433=node_compile(node_432,info);
            if(            !Value_433) {
                __result_obj__276 = (_Bool)0;
                (label_431 = come_decrement_ref_count(label_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_432) ? node_432 = come_decrement_ref_count(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_418,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_419,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__276;
            }
            else {
            }
            come_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_415->mVarArgs&&((struct sType*)(__right_value383=list$1sType$ph$p_operator_load_element(lambda_type_415->mParamTypes,i_424)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value383,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value388=check_assign_type(((char*)(__right_value386=xsprintf("\%s calling param #\%s",((char*)(__right_value384=string_to_string(fun_name_410))),((char*)(__right_value385=int_to_string(i_424)))))),((struct sType*)(__right_value387=list$1sType$ph$p_operator_load_element(lambda_type_415->mParamTypes,i_424))),come_value_434->type,come_value_434,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_4_438=multiple_assign_var5->v1;
                Err_439=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_439)),                (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value387,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value388,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional6) {
                    __result_obj__279 = (_Bool)1;
                    (Err_439 = come_decrement_ref_count(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_431 = come_decrement_ref_count(label_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_432) ? node_432 = come_decrement_ref_count(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_418,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_419,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__279;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)(__right_value389=list$1sType$ph$p_operator_load_element(lambda_type_415->mParamTypes,i_424)))->mHeap&&come_value_434->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value389,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)(__right_value390=list$1sType$ph$p_operator_load_element(lambda_type_415->mParamTypes,i_424))),come_value_434->type,come_value_434,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value390,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                (Err_439 = come_decrement_ref_count(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(come_params_419,(struct CVALUE*)come_increment_ref_count(come_value_434));
            i_424++;
            (label_431 = come_decrement_ref_count(label_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_432) ? node_432 = come_decrement_ref_count(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_440=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 553, "struct buffer*"))));
        buffer_append_str(buf_440,var__414->mCValueName);
        buffer_append_str(buf_440,"(");
        j_441=0;
        for(        o2_saved_442=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_419)),it_445=list$1CVALUE$ph_begin((o2_saved_442));        !list$1CVALUE$ph_end((o2_saved_442));        it_445=list$1CVALUE$ph_next((o2_saved_442))        ){
            buffer_append_str(buf_440,it_445->c_value);
            if(            j_441!=list$1CVALUE$ph_length(come_params_419)-1) {
                buffer_append_str(buf_440,",");
            }
            j_441++;
        }
        /*c*/ come_call_finalizer3(o2_saved_442,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_440,")");
        come_value_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 570, "struct CVALUE*"))));
        __dec_obj85=come_value_448->c_value,
        come_value_448->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_440));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj86=come_value_448->type,
        come_value_448->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_418));
        /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_448->type->mStatic=(_Bool)0;
        come_value_448->var=((void*)0);
        if(        lambda_type_415->mResultType->mHeap) {
            append_object_to_right_values2(come_value_448,(struct sType*)come_increment_ref_count(lambda_type_415->mResultType),info,(_Bool)0,((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_448->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_448));
        info->calling_fun=((void*)0);
        __result_obj__286 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_418,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_419,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_440,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_448,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__286;
        /*c*/ come_call_finalizer3(result_type_418,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_419,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_440,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_448,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_449=((struct sGenericsFun*)(__right_value398=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value397=__builtin_string(fun_name_410))),((void*)0))));
    (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value398,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_452=(_Bool)0;
    if(    generics_fun_449) {
        method_generics_452=list$1char$ph_length(generics_fun_449->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_452) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_453=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 595, "struct list$1sType$ph*"))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value401=make_method_generics_function((char*)come_increment_ref_count(fun_name_410),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_453),info)));
            name_454=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_455=multiple_assign_var6->v2;
            /*c*/ come_call_finalizer3(__right_value401,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_456=(char*)come_increment_ref_count(name_454);
            fun_457=((struct sFun*)(__right_value402=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_456,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value402,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_412) {
                come_params_460=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 602, "struct list$1CVALUE$ph*"))));
                fun_461=((struct sFun*)(__right_value405=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_456,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value405,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_462=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_412,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_460),fun_461,fun_name_410,method_block_sline_413,info,(_Bool)1)) {
                    __result_obj__295 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_460,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_453,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_454 = come_decrement_ref_count(name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_456 = come_decrement_ref_count(generics_fun_name_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__295;
                }
                info->no_output_come_code=no_output_come_code_462;
                method_block_node_463=((struct CVALUE*)(__right_value406=list$1CVALUE$ph$p_operator_load_element(come_params_460,-1)));
                /*c*/ come_call_finalizer3(__right_value406,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_467=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_463->type));
                method_block_result_type_468=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_469=((struct sType*)(__right_value409=list$1sType$ph$p_operator_load_element(generics_fun_449->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value409,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_470=generics_fun_method_block_lambda_type_469->mResultType;
                if(                generics_fun_method_block_result_type_470->mClass->mMethodGenerics) {
                    method_generics_num_471=generics_fun_method_block_result_type_470->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_453,method_generics_num_471,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_468)));
                }
                n_480=0;
                for(                o2_saved_481=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_469->mParamTypes)),it_484=list$1sType$ph_begin((o2_saved_481));                !list$1sType$ph_end((o2_saved_481));                it_484=list$1sType$ph_next((o2_saved_481))                ){
                    if(                    it_484->mClass->mMethodGenerics) {
                        method_generics_num_487=it_484->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_453,method_generics_num_487,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value414=list$1sType$ph$p_operator_load_element(method_block_lambda_type_467->mParamTypes,n_480))))));
                        /*c*/ come_call_finalizer3(__right_value414,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_480++;
                }
                /*c*/ come_call_finalizer3(o2_saved_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_460,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_468,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_488=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 634, "struct list$1CVALUE$ph*"))));
            i_489=0;
            result_type_490=((void*)0);
            for(            o2_saved_491=(params_411),it_492=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_491));            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_491));            it_492=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_491))            ){
                multiple_assign_var7=it_492;
                label_493=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_494=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_495=node_compile(node_494,info);
                if(                !Value_495) {
                    __result_obj__307 = (_Bool)0;
                    (label_493 = come_decrement_ref_count(label_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_494) ? node_494 = come_decrement_ref_count(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_453,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_454 = come_decrement_ref_count(name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_456 = come_decrement_ref_count(generics_fun_name_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_488,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_490,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__307;
                }
                else {
                }
                come_value_496=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUE$ph_add(come_params_488,(struct CVALUE*)come_increment_ref_count(come_value_496));
                (label_493 = come_decrement_ref_count(label_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_494) ? node_494 = come_decrement_ref_count(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_496,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            generics_fun_449->mResultType->mClass->mMethodGenerics) {
                method_generics_num_500=generics_fun_449->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph$p_operator_store_element(method_generics_types_453,method_generics_num_500,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                }
            }
            n_501=0;
            for(            o2_saved_502=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_449->mParamTypes)),it_503=list$1sType$ph_begin((o2_saved_502));            !list$1sType$ph_end((o2_saved_502));            it_503=list$1sType$ph_next((o2_saved_502))            ){
                if(                it_503->mClass->mMethodGenerics) {
                    method_generics_num_504=it_503->mClass->mMethodGenericsNum;
                    if(                    n_501<list$1CVALUE$ph_length(come_params_488)) {
                        list$1sType$ph$p_operator_store_element(method_generics_types_453,method_generics_num_504,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value423=list$1CVALUE$ph$p_operator_load_element(come_params_488,n_501)))->type)));
                        /*c*/ come_call_finalizer3(__right_value423,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_501++;
            }
            /*c*/ come_call_finalizer3(o2_saved_502,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_456);
            (name_454 = come_decrement_ref_count(name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value425=make_method_generics_function((char*)come_increment_ref_count(fun_name_410),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_453),info)));
            name_507=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_508=multiple_assign_var8->v2;
            /*c*/ come_call_finalizer3(__right_value425,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj94=fun_name_410,
            fun_name_410=(char*)come_increment_ref_count(name_507);
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_453,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_456 = come_decrement_ref_count(generics_fun_name_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_488,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_490,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_507 = come_decrement_ref_count(name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value426=make_method_generics_function((char*)come_increment_ref_count(fun_name_410),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_509=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_510=multiple_assign_var9->v2;
            /*c*/ come_call_finalizer3(__right_value426,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj95=fun_name_410,
            fun_name_410=(char*)come_increment_ref_count(name_509);
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_509 = come_decrement_ref_count(name_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_410,"__builtin_memmove")||string_operator_equals(fun_name_410,"__builtin_memset")||string_operator_equals(fun_name_410,"__builtin_ffs")||string_operator_equals(fun_name_410,"__builtin_ffsl")||string_operator_equals(fun_name_410,"__builtin_ffsll")||string_operator_equals(fun_name_410,"__builtin_bswap16")||string_operator_equals(fun_name_410,"__builtin_bswap32")||string_operator_equals(fun_name_410,"__builtin_bswap64")||string_operator_equals(fun_name_410,"__builtin_constant_p")||string_operator_equals(fun_name_410,"__builtin_expect")||string_operator_equals(fun_name_410,"__builtin___memset_chk")||string_operator_equals(fun_name_410,"__builtin_object_size")||string_operator_equals(fun_name_410,"__builtin___memcpy_chk")||string_operator_equals(fun_name_410,"__builtin___strncpy_chk")||string_operator_equals(fun_name_410,"__builtin___strncat_chk")||string_operator_equals(fun_name_410,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_410,"__builtin_strrchr")||string_operator_equals(fun_name_410,"__builtin_clz")||string_operator_equals(fun_name_410,"__dsb")||string_operator_equals(fun_name_410,"__isb")||string_operator_equals(fun_name_410,"__dmb")||(strlen(fun_name_410)==strlen("__builtin_arm_")&&memcmp(fun_name_410,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_410,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_410,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_410,"__c11_atomic_store")||string_operator_equals(fun_name_410,"__c11_atomic_load")||string_operator_equals(fun_name_410,"__c11_atomic_exchange")||string_operator_equals(fun_name_410,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_410,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_410,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_410,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_410,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_410,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_410,"__c11_atomic_fetch_xor")) {
        come_params_511=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 707, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_512=(params_411),it_513=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_512));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_512));        it_513=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_512))        ){
            multiple_assign_var10=it_513;
            label_514=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_515=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_516=node_compile(node_515,info);
            if(            !Value_516) {
                __result_obj__310 = (_Bool)0;
                (label_514 = come_decrement_ref_count(label_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_515) ? node_515 = come_decrement_ref_count(node_515, ((struct sNode*)node_515)->finalize, ((struct sNode*)node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_511,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__310;
            }
            else {
            }
            come_value_517=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(come_params_511,(struct CVALUE*)come_increment_ref_count(come_value_517));
            (label_514 = come_decrement_ref_count(label_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_515) ? node_515 = come_decrement_ref_count(node_515, ((struct sNode*)node_515)->finalize, ((struct sNode*)node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_517,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_518=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 720, "struct buffer*"))));
        buffer_append_str(buf_518,fun_name_410);
        buffer_append_str(buf_518,"(");
        j_519=0;
        for(        o2_saved_520=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_511)),it_521=list$1CVALUE$ph_begin((o2_saved_520));        !list$1CVALUE$ph_end((o2_saved_520));        it_521=list$1CVALUE$ph_next((o2_saved_520))        ){
            buffer_append_str(buf_518,it_521->c_value);
            if(            j_519!=list$1CVALUE$ph_length(come_params_511)-1) {
                buffer_append_str(buf_518,",");
            }
            j_519++;
        }
        /*c*/ come_call_finalizer3(o2_saved_520,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_518,")");
        come_value_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 737, "struct CVALUE*"))));
        __dec_obj96=come_value_522->c_value,
        come_value_522->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_518));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_410,"__builtin_memmove")||string_operator_equals(fun_name_410,"__builtin_memset")) {
            __dec_obj97=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_ffs")) {
            __dec_obj98=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_ffsl")) {
            __dec_obj99=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_ffsll")) {
            __dec_obj100=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_bswap16")) {
            __dec_obj101=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_bswap32")) {
            __dec_obj102=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 756, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_bswap64")) {
            __dec_obj103=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 759, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_constant_p")) {
            __dec_obj104=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 762, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_expect")) {
            __dec_obj105=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 765, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin___memset_chk")) {
            __dec_obj106=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 768, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_522->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_object_size")) {
            __dec_obj107=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 772, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin___memcpy_chk")) {
            __dec_obj108=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 775, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_522->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_410,"__builtin___strncpy_chk")) {
            __dec_obj109=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_522->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_410,"__builtin___strncat_chk")) {
            __dec_obj110=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 783, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_522->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_strrchr")) {
            __dec_obj111=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 787, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_522->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_410,"__builtin___vsnprintf_chk")) {
            __dec_obj112=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_clz")) {
            __dec_obj113=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 794, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_thread_fence")) {
            __dec_obj114=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 797, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_signal_fence")) {
            __dec_obj115=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 800, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_exchange")) {
            __dec_obj116=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value492=list$1CVALUE$ph$p_operator_load_element(come_params_511,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value492,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_exchange_strong")) {
            __dec_obj117=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value494=list$1CVALUE$ph$p_operator_load_element(come_params_511,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value494,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_exchange_weak")) {
            __dec_obj118=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value496=list$1CVALUE$ph$p_operator_load_element(come_params_511,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value496,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_store")) {
            __dec_obj119=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 812, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_load")) {
            __dec_obj120=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value501=list$1CVALUE$ph$p_operator_load_element(come_params_511,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value501,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_522->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_fetch_add")) {
            __dec_obj121=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value503=list$1CVALUE$ph$p_operator_load_element(come_params_511,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value503,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_fetch_sub")) {
            __dec_obj122=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value505=list$1CVALUE$ph$p_operator_load_element(come_params_511,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value505,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_fetch_and")) {
            __dec_obj123=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value507=list$1CVALUE$ph$p_operator_load_element(come_params_511,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value507,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_fetch_or")) {
            __dec_obj124=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value509=list$1CVALUE$ph$p_operator_load_element(come_params_511,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value509,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__c11_atomic_fetch_xor")) {
            __dec_obj125=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value511=list$1CVALUE$ph$p_operator_load_element(come_params_511,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value511,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__dsb")) {
            __dec_obj126=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__isb")) {
            __dec_obj127=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__dmb")) {
            __dec_obj128=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_arm_cdp")) {
            __dec_obj129=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 843, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_arm_ldc")) {
            __dec_obj130=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 846, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_arm_stc")) {
            __dec_obj131=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 849, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_arm_stcl")) {
            __dec_obj132=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 852, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_410,"__builtin_arm_ldcl")) {
            __dec_obj133=come_value_522->type,
            come_value_522->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 855, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_522->var=((void*)0);
        add_come_last_code(info,"%s",come_value_522->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_522));
        __result_obj__311 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_511,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_518,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_522,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__311;
        /*c*/ come_call_finalizer3(come_params_511,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_518,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_522,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_410,"__builtin_va_arg")) {
        come_params_523=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 867, "struct list$1CVALUE$ph*"))));
        i_524=0;
        result_type_525=((void*)0);
        for(        o2_saved_526=(params_411),it_527=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_526));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_526));        it_527=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_526))        ){
            multiple_assign_var11=it_527;
            label_528=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_529=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_530=node_compile(node_529,info);
            if(            !Value_530) {
                __result_obj__312 = (_Bool)0;
                (label_528 = come_decrement_ref_count(label_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_529) ? node_529 = come_decrement_ref_count(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__312;
            }
            else {
            }
            come_value_531=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_523,(struct CVALUE*)come_increment_ref_count(come_value_531));
            __dec_obj134=result_type_525,
            result_type_525=(struct sType*)come_increment_ref_count(come_value_531->type);
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_528 = come_decrement_ref_count(label_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_529) ? node_529 = come_decrement_ref_count(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_532=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 885, "struct buffer*"))));
        buffer_append_str(buf_532,fun_name_410);
        buffer_append_str(buf_532,"(");
        j_533=0;
        for(        o2_saved_534=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_523)),it_535=list$1CVALUE$ph_begin((o2_saved_534));        !list$1CVALUE$ph_end((o2_saved_534));        it_535=list$1CVALUE$ph_next((o2_saved_534))        ){
            buffer_append_str(buf_532,it_535->c_value);
            if(            j_533!=list$1CVALUE$ph_length(come_params_523)-1) {
                buffer_append_str(buf_532,",");
            }
            j_533++;
        }
        /*c*/ come_call_finalizer3(o2_saved_534,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_532,")");
        come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 902, "struct CVALUE*"))));
        __dec_obj135=come_value_536->c_value,
        come_value_536->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_532));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj136=come_value_536->type,
        come_value_536->type=(struct sType*)come_increment_ref_count(result_type_525);
        /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_536->var=((void*)0);
        add_come_last_code(info,"%s",come_value_536->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
        __result_obj__313 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_532,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_536,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__313;
        /*c*/ come_call_finalizer3(come_params_523,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_532,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_536,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_410,"string")) {
        __dec_obj137=fun_name_410,
        fun_name_410=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_410,"wstring")) {
        __dec_obj138=fun_name_410,
        fun_name_410=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_410,"inherit")) {
        p_537=info->come_fun->mName;
        version_538=0;
        while(*p_537) {
            if(            *p_537==95&&*(p_537+1)==118&&xisdigit(*(p_537+2))) {
                p2_539=p_537+2;
                version_538=0;
                while(xisdigit(*p2_539)) {
                    version_538=version_538*10+(*p2_539-48);
                    p2_539++;
                }
                break;
            }
            else {
                p_537++;
            }
        }
        char real_fun_name_540[2048];
        memset(&real_fun_name_540, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_540,info->come_fun->mName,p_537-info->come_fun->mName);
        real_fun_name_540[p_537-info->come_fun->mName]=0;
        for(        i_541=version_538-1;        i_541>=1;        i_541--        ){
            new_fun_name_542=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_540,i_541));
            if(            (_if_conditional8=(((struct sFun*)(__right_value548=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_542))))),            /*c*/ come_call_finalizer3(__right_value548,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional8) {
                __dec_obj139=fun_name_410,
                fun_name_410=(char*)come_increment_ref_count(__builtin_string(new_fun_name_542));
                __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_542 = come_decrement_ref_count(new_fun_name_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_542 = come_decrement_ref_count(new_fun_name_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_541==0) {
            new_fun_name_546=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_540));
            if(            (_if_conditional9=(((struct sFun*)(__right_value551=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_546))))),            /*c*/ come_call_finalizer3(__right_value551,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __dec_obj140=fun_name_410,
                fun_name_410=(char*)come_increment_ref_count(__builtin_string(new_fun_name_546));
                __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_410,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value553=err_msg(info,"invalid inherit")));
                come_exception_var_5_547=multiple_assign_var12->v1;
                Err_548=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_548)),                /*c*/ come_call_finalizer3(__right_value553,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    __result_obj__318 = (_Bool)1;
                    (Err_548 = come_decrement_ref_count(Err_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_546 = come_decrement_ref_count(new_fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__318;
                }
                else {
                }
                (Err_548 = come_decrement_ref_count(Err_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_546 = come_decrement_ref_count(new_fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_549=128;        i_549>=1;        i_549--        ){
            new_fun_name_550=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_410,i_549));
            if(            (_if_conditional11=(((struct sFun*)(__right_value555=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_550))))),            /*c*/ come_call_finalizer3(__right_value555,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                __dec_obj141=fun_name_410,
                fun_name_410=(char*)come_increment_ref_count(__builtin_string(new_fun_name_550));
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_550 = come_decrement_ref_count(new_fun_name_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_550 = come_decrement_ref_count(new_fun_name_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_551=((struct sFun*)(__right_value557=map$2char$phsFun$ph_at(info->funcs,fun_name_410,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value557,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_551==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_410);
        come_params_552=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 984, "struct list$1CVALUE$ph*"))));
        i_553=0;
        result_type_554=((void*)0);
        for(        o2_saved_555=(params_411),it_556=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_555));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_555));        it_556=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_555))        ){
            multiple_assign_var13=it_556;
            label_557=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_558=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_559=node_compile(node_558,info);
            if(            !Value_559) {
                __result_obj__319 = (_Bool)0;
                (label_557 = come_decrement_ref_count(label_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_558) ? node_558 = come_decrement_ref_count(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_552,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_554,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__319;
            }
            else {
            }
            come_value_560=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_add(come_params_552,(struct CVALUE*)come_increment_ref_count(come_value_560));
            __dec_obj142=result_type_554,
            result_type_554=(struct sType*)come_increment_ref_count(come_value_560->type);
            /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_557 = come_decrement_ref_count(label_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_558) ? node_558 = come_decrement_ref_count(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_560,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_561=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1002, "struct buffer*"))));
        buffer_append_str(buf_561,fun_name_410);
        buffer_append_str(buf_561,"(");
        j_562=0;
        for(        o2_saved_563=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_552)),it_564=list$1CVALUE$ph_begin((o2_saved_563));        !list$1CVALUE$ph_end((o2_saved_563));        it_564=list$1CVALUE$ph_next((o2_saved_563))        ){
            buffer_append_str(buf_561,it_564->c_value);
            if(            j_562!=list$1CVALUE$ph_length(come_params_552)-1) {
                buffer_append_str(buf_561,",");
            }
            j_562++;
        }
        /*c*/ come_call_finalizer3(o2_saved_563,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_561,")");
        come_value_565=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1019, "struct CVALUE*"))));
        __dec_obj143=come_value_565->c_value,
        come_value_565->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_561));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj144=come_value_565->type,
        come_value_565->type=(struct sType*)come_increment_ref_count(result_type_554);
        /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_565->var=((void*)0);
        add_come_last_code(info,"%s",come_value_565->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_565));
        __result_obj__320 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_552,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_554,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_561,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_565,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__320;
        /*c*/ come_call_finalizer3(come_params_552,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_554,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_561,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_565,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_566=(struct sType*)come_increment_ref_count(sType_clone(fun_551->mResultType));
    result_type_566->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_566->mException&&!info->in_exception_value) {
        in_exception_value_567=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1037, "struct sNode");
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value573=sFunCallNode_clone(self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_568=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        /*c*/ come_call_finalizer3(__right_value573,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_570=node_compile(new_node_568,info);
        if(        !Value_570) {
            __result_obj__323 = (_Bool)0;
            ((new_node_568) ? new_node_568 = come_decrement_ref_count(new_node_568, ((struct sNode*)new_node_568)->finalize, ((struct sNode*)new_node_568)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__323;
        }
        else {
        }
        info->in_exception_value=in_exception_value_567;
        __result_obj__324 = (_Bool)1;
        ((new_node_568) ? new_node_568 = come_decrement_ref_count(new_node_568, ((struct sNode*)new_node_568)->finalize, ((struct sNode*)new_node_568)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__324;
        ((new_node_568) ? new_node_568 = come_decrement_ref_count(new_node_568, ((struct sNode*)new_node_568)->finalize, ((struct sNode*)new_node_568)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_566->mException&&!info->in_exception_value) {
        in_exception_value_571=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1049, "struct sNode");
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value576=sFunCallNode_clone(self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_572=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        /*c*/ come_call_finalizer3(__right_value576,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_573=node_compile(new_node_572,info);
        if(        !Value_573) {
            __result_obj__325 = (_Bool)0;
            ((new_node_572) ? new_node_572 = come_decrement_ref_count(new_node_572, ((struct sNode*)new_node_572)->finalize, ((struct sNode*)new_node_572)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__325;
        }
        else {
        }
        info->in_exception_value=in_exception_value_571;
        __result_obj__326 = (_Bool)1;
        ((new_node_572) ? new_node_572 = come_decrement_ref_count(new_node_572, ((struct sNode*)new_node_572)->finalize, ((struct sNode*)new_node_572)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__326;
        ((new_node_572) ? new_node_572 = come_decrement_ref_count(new_node_572, ((struct sNode*)new_node_572)->finalize, ((struct sNode*)new_node_572)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_574=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1059, "struct list$1sType$ph*"))));
    for(    o2_saved_575=(struct list$1sType$ph*)come_increment_ref_count((fun_551->mParamTypes)),it_576=list$1sType$ph_begin((o2_saved_575));    !list$1sType$ph_end((o2_saved_575));    it_576=list$1sType$ph_next((o2_saved_575))    ){
        it2_577=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value581=sType_clone(it_576))),info->generics_type,info));
        /*c*/ come_call_finalizer3(__right_value581,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_574,(struct sType*)come_increment_ref_count(sType_clone(it2_577)));
        /*c*/ come_call_finalizer3(it2_577,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_575,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj150=result_type_566,
    result_type_566=(struct sType*)come_increment_ref_count(solve_generics(result_type_566,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_578=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1067, "struct list$1CVALUE$ph*"))));
    for(    i_579=0;    i_579<list$1sType$ph_length(fun_551->mParamTypes)-(((method_block_412)?(2):(0)));    i_579++    ){
        list$1CVALUE$ph_add(come_params_578,((void*)0));
    }
    for(    o2_saved_580=(params_411),it_581=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_580));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_580));    it_581=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_580))    ){
        multiple_assign_var14=it_581;
        label_582=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_583=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_551->mVarArgs||string_operator_equals(fun_name_410,"__builtin_va_start")) {
        }
        else if(        label_582) {
            Value_584=node_compile(node_583,info);
            if(            !Value_584) {
                __result_obj__327 = (_Bool)0;
                (label_582 = come_decrement_ref_count(label_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_583) ? node_583 = come_decrement_ref_count(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__327;
            }
            else {
            }
            come_value_585=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            n_586=0;
            for(            o2_saved_587=(struct list$1char$ph*)come_increment_ref_count((fun_551->mParamNames)),it_588=list$1char$ph_begin((o2_saved_587));            !list$1char$ph_end((o2_saved_587));            it_588=list$1char$ph_next((o2_saved_587))            ){
                if(                string_operator_equals(label_582,it_588)) {
                    break;
                }
                n_586++;
            }
            /*c*/ come_call_finalizer3(o2_saved_587,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional12=(((struct sType*)(__right_value588=list$1sType$ph$p_operator_load_element(param_types_574,n_586))))),            /*c*/ come_call_finalizer3(__right_value588,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value593=check_assign_type(((char*)(__right_value591=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value589=string_to_string(fun_name_410))),((char*)(__right_value590=int_to_string(n_586)))))),((struct sType*)(__right_value592=list$1sType$ph$p_operator_load_element(param_types_574,n_586))),come_value_585->type,come_value_585,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_6_589=multiple_assign_var15->v1;
                Err_590=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_590)),                (__right_value589 = come_decrement_ref_count(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value590 = come_decrement_ref_count(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value591 = come_decrement_ref_count(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value592,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value593,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional13) {
                    __result_obj__328 = (_Bool)1;
                    (Err_590 = come_decrement_ref_count(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_585,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_582 = come_decrement_ref_count(label_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_583) ? node_583 = come_decrement_ref_count(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__328;
                }
                else {
                }
                (Err_590 = come_decrement_ref_count(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)(__right_value594=list$1sType$ph$p_operator_load_element(param_types_574,n_586)))&&((struct sType*)(__right_value595=list$1sType$ph$p_operator_load_element(param_types_574,n_586)))->mHeap&&come_value_585->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value594,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value595,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)(__right_value596=list$1sType$ph$p_operator_load_element(param_types_574,n_586))),come_value_585->type,come_value_585,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value596,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_578,n_586,(struct CVALUE*)come_increment_ref_count(come_value_585));
            /*c*/ come_call_finalizer3(come_value_585,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_582 = come_decrement_ref_count(label_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_583) ? node_583 = come_decrement_ref_count(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_596=0;
    for(    o2_saved_597=(params_411),it_598=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_597));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_597));    it_598=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_597))    ){
        multiple_assign_var16=it_598;
        label_599=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_600=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_551->mVarArgs||string_operator_equals(fun_name_410,"__builtin_va_start")) {
            Value_601=node_compile(node_600,info);
            if(            !Value_601) {
                __result_obj__331 = (_Bool)0;
                (label_599 = come_decrement_ref_count(label_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_600) ? node_600 = come_decrement_ref_count(node_600, ((struct sNode*)node_600)->finalize, ((struct sNode*)node_600)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__331;
            }
            else {
            }
            come_value_602=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value598=list$1CVALUE$ph$p_operator_load_element(come_params_578,i_596)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value598,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_596++;
                }
            }
            list$1CVALUE$ph_replace(come_params_578,i_596,(struct CVALUE*)come_increment_ref_count(come_value_602));
            i_596++;
            /*c*/ come_call_finalizer3(come_value_602,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_599) {
        }
        else {
            Value_603=node_compile(node_600,info);
            if(            !Value_603) {
                __result_obj__332 = (_Bool)0;
                (label_599 = come_decrement_ref_count(label_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_600) ? node_600 = come_decrement_ref_count(node_600, ((struct sNode*)node_600)->finalize, ((struct sNode*)node_600)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__332;
            }
            else {
            }
            come_value_604=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value600=list$1CVALUE$ph$p_operator_load_element(come_params_578,i_596)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value600,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_596++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)(__right_value601=list$1sType$ph$p_operator_load_element(param_types_574,i_596))))),            /*c*/ come_call_finalizer3(__right_value601,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value606=check_assign_type(((char*)(__right_value604=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value602=string_to_string(fun_name_410))),((char*)(__right_value603=int_to_string(i_596)))))),((struct sType*)(__right_value605=list$1sType$ph$p_operator_load_element(param_types_574,i_596))),come_value_604->type,come_value_604,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_605=multiple_assign_var17->v1;
                Err_606=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_606)),                (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value603 = come_decrement_ref_count(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value604 = come_decrement_ref_count(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value605,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value606,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional18) {
                    __result_obj__333 = (_Bool)1;
                    (Err_606 = come_decrement_ref_count(Err_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_604,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (label_599 = come_decrement_ref_count(label_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_600) ? node_600 = come_decrement_ref_count(node_600, ((struct sNode*)node_600)->finalize, ((struct sNode*)node_600)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__333;
                }
                else {
                }
                (Err_606 = come_decrement_ref_count(Err_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)(__right_value607=list$1sType$ph$p_operator_load_element(param_types_574,i_596)))&&((struct sType*)(__right_value608=list$1sType$ph$p_operator_load_element(param_types_574,i_596)))->mHeap&&come_value_604->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value607,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value608,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)(__right_value609=list$1sType$ph$p_operator_load_element(param_types_574,i_596))),come_value_604->type,come_value_604,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value609,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_578,i_596,(struct CVALUE*)come_increment_ref_count(come_value_604));
            i_596++;
            /*c*/ come_call_finalizer3(come_value_604,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_599 = come_decrement_ref_count(label_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_600) ? node_600 = come_decrement_ref_count(node_600, ((struct sNode*)node_600)->finalize, ((struct sNode*)node_600)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value610=list$1CVALUE$ph$p_operator_load_element(come_params_578,i_596)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value610,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_596++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_411)<list$1sType$ph_length(fun_551->mParamTypes)) {
        for(        ;        i_596<list$1sType$ph_length(fun_551->mParamTypes)-(((method_block_412)?(2):(0)));        i_596++        ){
            default_param_607=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value611=list$1char$ph$p_operator_load_element(fun_551->mParamDefaultParametors,i_596))), "05call.c", 1174, "char*"));
            (__right_value611 = come_decrement_ref_count(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_611=((char*)(__right_value613=list$1char$ph$p_operator_load_element(fun_551->mParamNames,i_596)));
            (__right_value613 = come_decrement_ref_count(__right_value613, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_607&&string_operator_not_equals(default_param_607,"")&&((struct CVALUE*)(__right_value614=list$1CVALUE$ph$p_operator_load_element(come_params_578,i_596)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value614,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional21) {
                source_612=(struct buffer*)come_increment_ref_count(info->source);
                p_613=info->p;
                head_614=info->head;
                sline_615=info->sline;
                __dec_obj152=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_607));
                /*b*/ come_call_finalizer3(__dec_obj152,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_616=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_617=node_compile(node_616,info);
                if(                !Value_617) {
                    __result_obj__336 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_612,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_616) ? node_616 = come_decrement_ref_count(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_607 = come_decrement_ref_count(default_param_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__336;
                }
                else {
                }
                __dec_obj153=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_612);
                /*b*/ come_call_finalizer3(__dec_obj153,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_613;
                info->head=head_614;
                info->sline=sline_615;
                come_value_618=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)(__right_value618=list$1sType$ph$p_operator_load_element(param_types_574,i_596))))),                /*c*/ come_call_finalizer3(__right_value618,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value623=check_assign_type(((char*)(__right_value621=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value619=string_to_string(fun_name_410))),((char*)(__right_value620=int_to_string(i_596)))))),((struct sType*)(__right_value622=list$1sType$ph$p_operator_load_element(param_types_574,i_596))),come_value_618->type,come_value_618,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_8_619=multiple_assign_var18->v1;
                    Err_620=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_620)),                    (__right_value619 = come_decrement_ref_count(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value620 = come_decrement_ref_count(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value621 = come_decrement_ref_count(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value622,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value623,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional23) {
                        __result_obj__337 = (_Bool)1;
                        (Err_620 = come_decrement_ref_count(Err_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(source_612,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_616) ? node_616 = come_decrement_ref_count(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(come_value_618,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (default_param_607 = come_decrement_ref_count(default_param_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__337;
                    }
                    else {
                    }
                    (Err_620 = come_decrement_ref_count(Err_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)(__right_value624=list$1sType$ph$p_operator_load_element(param_types_574,i_596)))&&((struct sType*)(__right_value625=list$1sType$ph$p_operator_load_element(param_types_574,i_596)))->mHeap&&come_value_618->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value624,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value625,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)(__right_value626=list$1sType$ph$p_operator_load_element(param_types_574,i_596))),come_value_618->type,come_value_618,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value626,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_578,i_596,(struct CVALUE*)come_increment_ref_count(come_value_618));
                /*c*/ come_call_finalizer3(source_612,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_616) ? node_616 = come_decrement_ref_count(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_618,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value627=list$1CVALUE$ph$p_operator_load_element(come_params_578,i_596)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value627,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value628=err_msg(info,"require parametor(%s)(1) %d",fun_551->mName,i_596)));
                    come_exception_var_9_621=multiple_assign_var19->v1;
                    Err_622=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_622)),                    /*c*/ come_call_finalizer3(__right_value628,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional26) {
                        __result_obj__338 = (_Bool)1;
                        (Err_622 = come_decrement_ref_count(Err_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_607 = come_decrement_ref_count(default_param_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__338;
                    }
                    else {
                    }
                    (Err_622 = come_decrement_ref_count(Err_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_607 = come_decrement_ref_count(default_param_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_551->mParamTypes)-(((method_block_412)?(2):(0)))!=list$1CVALUE$ph_length(come_params_578)&&!fun_551->mVarArgs&&string_operator_not_equals(fun_name_410,"__builtin_va_start")&&string_operator_not_equals(fun_name_410,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value629=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_410,list$1sType$ph_length(fun_551->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_411))));
        come_exception_var_10_623=multiple_assign_var20->v1;
        Err_624=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_624)),        /*c*/ come_call_finalizer3(__right_value629,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional27) {
            __result_obj__339 = (_Bool)1;
            (Err_624 = come_decrement_ref_count(Err_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__339;
        }
        else {
        }
        (Err_624 = come_decrement_ref_count(Err_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_412) {
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1227, "struct sNode");
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value631=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1227, "struct sCurrentNode2*")),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_625=(struct sNode*)come_increment_ref_count(_inf_value3);
        /*c*/ come_call_finalizer3(__right_value631,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_627=node_compile(current_stack_frame_node_625,info);
        if(        !Value_627) {
            __result_obj__342 = (_Bool)0;
            ((current_stack_frame_node_625) ? current_stack_frame_node_625 = come_decrement_ref_count(current_stack_frame_node_625, ((struct sNode*)current_stack_frame_node_625)->finalize, ((struct sNode*)current_stack_frame_node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__342;
        }
        else {
        }
        come_value_628=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(come_params_578,(struct CVALUE*)come_increment_ref_count(come_value_628));
        method_block2_629=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1236, "struct buffer*"))));
        method_block_type_630=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value638=list$1sType$ph$p_operator_load_element(fun_551->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value638,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_631=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value641=list$1sType$ph$p_operator_load_element(method_block_type_630->mParamTypes,0)))->mClass=((struct sClass*)(__right_value642=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_631)));
        /*c*/ come_call_finalizer3(__right_value641,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value642,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_635=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value643=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_631)));
        /*c*/ come_call_finalizer3(__right_value643,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        num_method_block_636=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_630->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value644=err_msg(info,"This function does not have method block(%s)",fun_name_410)));
            come_exception_var_11_637=multiple_assign_var21->v1;
            Err_638=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_638)),            /*c*/ come_call_finalizer3(__right_value644,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional28) {
                __result_obj__347 = (_Bool)1;
                (Err_638 = come_decrement_ref_count(Err_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_625) ? current_stack_frame_node_625 = come_decrement_ref_count(current_stack_frame_node_625, ((struct sNode*)current_stack_frame_node_625)->finalize, ((struct sNode*)current_stack_frame_node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_628,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_629,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_631 = come_decrement_ref_count(class_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__347;
            }
            else {
            }
            (Err_638 = come_decrement_ref_count(Err_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_639=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_630->mResultType));
        result_type_639->mStatic=(_Bool)0;
        param_types_640=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_630->mParamTypes));
        param_names_641=method_block_type_630->mParamNames;
        all_alhabet_sname_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1260, "struct buffer*"))));
        {
            p_643=info->sname;
            while(*p_643) {
                if(                xisalnum(*p_643)) {
                    buffer_append_char(all_alhabet_sname_642,*p_643++);
                }
                else {
                    p_643++;
                }
            }
        }
        buffer_append_format(method_block2_629,"%s fun_block%d_%s(",((char*)(__right_value649=make_type_name_string(result_type_639,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),num_method_block_636,((char*)(__right_value650=buffer_to_string(all_alhabet_sname_642))));
        (__right_value649 = come_decrement_ref_count(__right_value649, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value650 = come_decrement_ref_count(__right_value650, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_596=0;
        for(        o2_saved_644=(struct list$1sType$ph*)come_increment_ref_count((param_types_640)),it_645=list$1sType$ph_begin((o2_saved_644));        !list$1sType$ph_end((o2_saved_644));        it_645=list$1sType$ph_next((o2_saved_644))        ){
            param_type_646=it_645;
            if(            i_596==0) {
                param_name_647=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_629,"%s",((char*)(__right_value652=make_define_var(param_type_646,param_name_647,(_Bool)0,info))));
                (__right_value652 = come_decrement_ref_count(__right_value652, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_647 = come_decrement_ref_count(param_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_596==1) {
                param_name_648=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_629,"%s",((char*)(__right_value654=make_define_var_no_solved(param_type_646,param_name_648,(_Bool)0,(_Bool)1,info))));
                (__right_value654 = come_decrement_ref_count(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_648 = come_decrement_ref_count(param_name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_649=(char*)come_increment_ref_count(xsprintf("it%d",i_596));
                buffer_append_format(method_block2_629,"%s",((char*)(__right_value656=make_define_var_no_solved(param_type_646,param_name_649,(_Bool)0,(_Bool)1,info))));
                (__right_value656 = come_decrement_ref_count(__right_value656, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_649 = come_decrement_ref_count(param_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_596!=list$1sType$ph_length(param_types_640)-1) {
                buffer_append_str(method_block2_629,",");
            }
            i_596++;
        }
        /*c*/ come_call_finalizer3(o2_saved_644,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_629,")\n");
        buffer_append_str(method_block2_629,((char*)(__right_value657=buffer_to_string(method_block_412))));
        (__right_value657 = come_decrement_ref_count(__right_value657, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_650=(struct buffer*)come_increment_ref_count(info->source);
        p_651=info->p;
        head_652=info->head;
        sline_653=info->sline;
        __dec_obj155=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_629);
        /*b*/ come_call_finalizer3(__dec_obj155,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_413;
        node_654=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_655=node_compile(node_654,info);
        if(        !Value_655) {
            __result_obj__348 = (_Bool)0;
            ((current_stack_frame_node_625) ? current_stack_frame_node_625 = come_decrement_ref_count(current_stack_frame_node_625, ((struct sNode*)current_stack_frame_node_625)->finalize, ((struct sNode*)current_stack_frame_node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_628,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_629,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_631 = come_decrement_ref_count(class_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_640,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_654) ? node_654 = come_decrement_ref_count(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__348;
        }
        else {
        }
        method_block_name_656=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_636,((char*)(__right_value659=buffer_to_string(all_alhabet_sname_642)))));
        (__right_value659 = come_decrement_ref_count(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_657=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1325, "struct CVALUE*"))));
        fun2_658=((struct sFun*)(__right_value664=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value663=__builtin_string(method_block_name_656))),((void*)0))));
        (__right_value663 = come_decrement_ref_count(__right_value663, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value664,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_658==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value665=err_msg(info,"method block function not found(%s)",method_block_name_656)));
            come_exception_var_12_659=multiple_assign_var22->v1;
            Err_660=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_660)),            /*c*/ come_call_finalizer3(__right_value665,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional29) {
                __result_obj__349 = (_Bool)1;
                (Err_660 = come_decrement_ref_count(Err_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_625) ? current_stack_frame_node_625 = come_decrement_ref_count(current_stack_frame_node_625, ((struct sNode*)current_stack_frame_node_625)->finalize, ((struct sNode*)current_stack_frame_node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_628,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block2_629,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (class_name_631 = come_decrement_ref_count(class_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_640,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(source3_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_654) ? node_654 = come_decrement_ref_count(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_656 = come_decrement_ref_count(method_block_name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value2_657,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__349;
            }
            else {
            }
            (Err_660 = come_decrement_ref_count(Err_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_661=fun2_658->mLambdaType;
        __dec_obj156=come_value2_657->c_value,
        come_value2_657->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_656));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj157=come_value2_657->type,
        come_value2_657->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_661));
        /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_657->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_578,(struct CVALUE*)come_increment_ref_count(come_value2_657));
        __dec_obj158=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_650);
        /*b*/ come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_651;
        info->head=head_652;
        info->sline=sline_653;
        info->current_stack_frame_struct=current_stack_frame_struct_635;
        ((current_stack_frame_node_625) ? current_stack_frame_node_625 = come_decrement_ref_count(current_stack_frame_node_625, ((struct sNode*)current_stack_frame_node_625)->finalize, ((struct sNode*)current_stack_frame_node_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_628,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_629,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_631 = come_decrement_ref_count(class_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_640,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_642,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_650,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_654) ? node_654 = come_decrement_ref_count(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_656 = come_decrement_ref_count(method_block_name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_657,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_662=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1351, "struct buffer*"))));
    buffer_append_str(buf_662,fun_name_410);
    buffer_append_str(buf_662,"(");
    j_663=0;
    for(    o2_saved_664=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_578)),it_665=list$1CVALUE$ph_begin((o2_saved_664));    !list$1CVALUE$ph_end((o2_saved_664));    it_665=list$1CVALUE$ph_next((o2_saved_664))    ){
        buffer_append_str(buf_662,it_665->c_value);
        if(        j_663!=list$1CVALUE$ph_length(come_params_578)-1) {
            buffer_append_str(buf_662,",");
        }
        j_663++;
    }
    /*c*/ come_call_finalizer3(o2_saved_664,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_662,")");
    come_value_666=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1368, "struct CVALUE*"))));
    __dec_obj159=come_value_666->c_value,
    come_value_666->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_662));
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj160=come_value_666->type,
    come_value_666->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_566));
    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_666->type->mStatic=(_Bool)0;
    come_value_666->var=((void*)0);
    if(    fun_551->mResultType->mHeap) {
        append_object_to_right_values2(come_value_666,(struct sType*)come_increment_ref_count(result_type_566),info,(_Bool)0,((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")) {
        if(        string_operator_not_equals(fun_name_410,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_410,"null_check")&&string_operator_not_equals(fun_name_410,"come_push_stackframe")&&string_operator_not_equals(fun_name_410,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_410,"come_pop_stackframe")&&string_operator_not_equals(fun_name_410,"come_pop_stackframe_v2")) {
            __dec_obj161=come_value_666->c_value,
            come_value_666->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_666->c_value,come_value_666->type,info));
            __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_666->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_666));
    info->calling_fun=fun_551;
    __result_obj__350 = (_Bool)1;
    (fun_name_410 = come_decrement_ref_count(fun_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_574,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_578,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_662,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_666,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__350;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__259;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_402;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_403;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__264;
    if(    self==((void*)0)) {
        __result_obj__259 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__259,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__259;
    }
    result_402=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1016, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_403=self->head;
    while(it_403!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_402,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_403->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_402,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_403->item)));
        }
        it_403=it_403->next;
    }
    __result_obj__264 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_402);
    /*c*/ come_call_finalizer3(result_402,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_400;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_401;
    it_400=self->head;
    while(it_400!=((void*)0)) {
        prev_it_401=it_400;
        it_400=it_400->next;
        /*c*/ come_call_finalizer3(prev_it_401,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__260;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__260 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value367 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_404;
struct tuple2$2char$phsNode$ph* __dec_obj77;
void* __right_value368 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_405;
struct tuple2$2char$phsNode$ph* __dec_obj78;
void* __right_value369 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_406;
struct tuple2$2char$phsNode$ph* __dec_obj79;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__261;
    if(    self->len==0) {
        litem_404=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value367=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1035, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_404->prev=((void*)0);
        litem_404->next=((void*)0);
        __dec_obj77=litem_404->item,
        litem_404->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_404;
        self->head=litem_404;
    }
    else if(    self->len==1) {
        litem_405=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value368=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1045, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_405->prev=self->head;
        litem_405->next=((void*)0);
        __dec_obj78=litem_405->item,
        litem_405->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_405;
        self->head->next=litem_405;
    }
    else {
        litem_406=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value369=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1055, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_406->prev=self->tail;
        litem_406->next=((void*)0);
        __dec_obj79=litem_406->item,
        litem_406->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_406;
        self->tail=litem_406;
    }
    self->len++;
    __result_obj__261 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__262;
void* __right_value370 = (void*)0;
struct tuple2$2char$phsNode$ph* result_407;
void* __right_value371 = (void*)0;
char* __dec_obj80;
void* __right_value372 = (void*)0;
struct sNode* __dec_obj81;
struct tuple2$2char$phsNode$ph* __result_obj__263;
    if(    self==(void*)0) {
        __result_obj__262 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__262,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__262;
    }
    result_407=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj80=result_407->v1,
        result_407->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj81=result_407->v2,
        result_407->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__263 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_407);
    /*c*/ come_call_finalizer3(result_407,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_408;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_409;
    it_408=self->head;
    while(it_408!=((void*)0)) {
        prev_it_409=it_408;
        it_408=it_408->next;
        /*c*/ come_call_finalizer3(prev_it_409,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1CVALUE$ph* __result_obj__268;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__268 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__268,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_420;
struct list_item$1CVALUE$ph* prev_it_421;
    it_420=self->head;
    while(it_420!=((void*)0)) {
        prev_it_421=it_420;
        it_420=it_420->next;
        /*c*/ come_call_finalizer3(prev_it_421,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_426;
struct tuple2$2char$phsNode$ph* __result_obj__270;
struct tuple2$2char$phsNode$ph* __result_obj__271;
struct tuple2$2char$phsNode$ph* result_427;
struct tuple2$2char$phsNode$ph* __result_obj__272;
result_426 = (void*)0;
result_427 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_426,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__270 = result_426;
        return __result_obj__270;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__271 = self->it->item;
        return __result_obj__271;
    }
    memset(&result_427,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__272 = result_427;
    return __result_obj__272;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_429;
struct tuple2$2char$phsNode$ph* __result_obj__273;
struct tuple2$2char$phsNode$ph* __result_obj__274;
struct tuple2$2char$phsNode$ph* result_430;
struct tuple2$2char$phsNode$ph* __result_obj__275;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_429,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__273 = result_429;
        return __result_obj__273;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__274 = self->it->item;
        return __result_obj__274;
    }
    memset(&result_430,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__275 = result_430;
    return __result_obj__275;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_435;
int i_436;
struct sType* __result_obj__277;
struct sType* default_value_437;
struct sType* __result_obj__278;
default_value_437 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_435=self->head;
    i_436=0;
    while(it_435!=((void*)0)) {
        if(        position==i_436) {
            __result_obj__277 = (struct sType*)come_increment_ref_count(it_435->item);
            /*c*/ come_call_finalizer3(__result_obj__277,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__277;
        }
        it_435=it_435->next;
        i_436++;
    }
    memset(&default_value_437,0,sizeof(struct sType*));
    __result_obj__278 = (struct sType*)come_increment_ref_count(default_value_437);
    /*c*/ come_call_finalizer3(default_value_437,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_443;
struct CVALUE* __result_obj__280;
struct CVALUE* __result_obj__281;
struct CVALUE* result_444;
struct CVALUE* __result_obj__282;
result_443 = (void*)0;
result_444 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_443,0,sizeof(struct CVALUE*));
        __result_obj__280 = result_443;
        return __result_obj__280;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__281 = self->it->item;
        return __result_obj__281;
    }
    memset(&result_444,0,sizeof(struct CVALUE*));
    __result_obj__282 = result_444;
    return __result_obj__282;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_446;
struct CVALUE* __result_obj__283;
struct CVALUE* __result_obj__284;
struct CVALUE* result_447;
struct CVALUE* __result_obj__285;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_446,0,sizeof(struct CVALUE*));
        __result_obj__283 = result_446;
        return __result_obj__283;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__284 = self->it->item;
        return __result_obj__284;
    }
    memset(&result_447,0,sizeof(struct CVALUE*));
    __result_obj__285 = result_447;
    return __result_obj__285;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_450;
unsigned int it_451;
struct sGenericsFun* __result_obj__287;
struct sGenericsFun* __result_obj__288;
struct sGenericsFun* __result_obj__289;
struct sGenericsFun* __result_obj__290;
    hash_450=string_get_hash_key(((char*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(        self->item_existance[it_451]) {
            if(            string_equals(self->keys[it_451],key)) {
                __result_obj__287 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_451]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__287,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__287;
            }
            it_451++;
            if(            it_451>=self->size) {
                it_451=0;
            }
            else if(            it_451==hash_450) {
                __result_obj__288 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__288,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__288;
            }
        }
        else {
            __result_obj__289 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__289,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__289;
        }
    }
    __result_obj__290 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
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
unsigned int hash_458;
unsigned int it_459;
struct sFun* __result_obj__291;
struct sFun* __result_obj__292;
struct sFun* __result_obj__293;
struct sFun* __result_obj__294;
    hash_458=string_get_hash_key(((char*)key))%self->size;
    it_459=hash_458;
    while((_Bool)1) {
        if(        self->item_existance[it_459]) {
            if(            string_equals(self->keys[it_459],key)) {
                __result_obj__291 = (struct sFun*)come_increment_ref_count(self->items[it_459]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__291,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__291;
            }
            it_459++;
            if(            it_459>=self->size) {
                it_459=0;
            }
            else if(            it_459==hash_458) {
                __result_obj__292 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__292,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__292;
            }
        }
        else {
            __result_obj__293 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__293,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__293;
        }
    }
    __result_obj__294 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
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
struct list_item$1CVALUE$ph* it_464;
int i_465;
struct CVALUE* __result_obj__296;
struct CVALUE* default_value_466;
struct CVALUE* __result_obj__297;
default_value_466 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_464=self->head;
    i_465=0;
    while(it_464!=((void*)0)) {
        if(        position==i_465) {
            __result_obj__296 = (struct CVALUE*)come_increment_ref_count(it_464->item);
            /*c*/ come_call_finalizer3(__result_obj__296,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__296;
        }
        it_464=it_464->next;
        i_465++;
    }
    memset(&default_value_466,0,sizeof(struct CVALUE*));
    __result_obj__297 = (struct CVALUE*)come_increment_ref_count(default_value_466);
    /*c*/ come_call_finalizer3(default_value_466,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_472;
int i_473;
struct sType* default_value_474;
struct list$1sType$ph* __result_obj__299;
struct list_item$1sType$ph* it_478;
int i_479;
struct sType* __dec_obj90;
struct list$1sType$ph* __result_obj__300;
default_value_474 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_472=self->len;
        for(        i_473=0;        i_473<position-len_472;        i_473++        ){
            memset(&default_value_474,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_474));
            /*c*/ come_call_finalizer3(default_value_474,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__299 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__299;
    }
    it_478=self->head;
    i_479=0;
    while(it_478!=((void*)0)) {
        if(        position==i_479) {
            __dec_obj90=it_478->item,
            it_478->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_478=it_478->next;
        i_479++;
    }
    __result_obj__300 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value410 = (void*)0;
struct list_item$1sType$ph* litem_475;
struct sType* __dec_obj87;
void* __right_value411 = (void*)0;
struct list_item$1sType$ph* litem_476;
struct sType* __dec_obj88;
void* __right_value412 = (void*)0;
struct list_item$1sType$ph* litem_477;
struct sType* __dec_obj89;
struct list$1sType$ph* __result_obj__298;
    if(    self->len==0) {
        litem_475=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value410=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem_475->prev=((void*)0);
        litem_475->next=((void*)0);
        __dec_obj87=litem_475->item,
        litem_475->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_475;
        self->head=litem_475;
    }
    else if(    self->len==1) {
        litem_476=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value411=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1115, "struct list_item$1sType$ph*"))));
        litem_476->prev=self->head;
        litem_476->next=((void*)0);
        __dec_obj88=litem_476->item,
        litem_476->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_476;
        self->head->next=litem_476;
    }
    else {
        litem_477=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value412=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1125, "struct list_item$1sType$ph*"))));
        litem_477->prev=self->tail;
        litem_477->next=((void*)0);
        __dec_obj89=litem_477->item,
        litem_477->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_477;
        self->tail=litem_477;
    }
    self->len++;
    __result_obj__298 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_482;
struct sType* __result_obj__301;
struct sType* __result_obj__302;
struct sType* result_483;
struct sType* __result_obj__303;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_482,0,sizeof(struct sType*));
        __result_obj__301 = result_482;
        return __result_obj__301;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__302 = self->it->item;
        return __result_obj__302;
    }
    memset(&result_483,0,sizeof(struct sType*));
    __result_obj__303 = result_483;
    return __result_obj__303;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_485;
struct sType* __result_obj__304;
struct sType* __result_obj__305;
struct sType* result_486;
struct sType* __result_obj__306;
result_485 = (void*)0;
result_486 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_485,0,sizeof(struct sType*));
        __result_obj__304 = result_485;
        return __result_obj__304;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__305 = self->it->item;
        return __result_obj__305;
    }
    memset(&result_486,0,sizeof(struct sType*));
    __result_obj__306 = result_486;
    return __result_obj__306;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value419 = (void*)0;
struct list_item$1CVALUE$ph* litem_497;
struct CVALUE* __dec_obj91;
void* __right_value420 = (void*)0;
struct list_item$1CVALUE$ph* litem_498;
struct CVALUE* __dec_obj92;
void* __right_value421 = (void*)0;
struct list_item$1CVALUE$ph* litem_499;
struct CVALUE* __dec_obj93;
struct list$1CVALUE$ph* __result_obj__308;
    if(    self->len==0) {
        litem_497=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value419=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1035, "struct list_item$1CVALUE$ph*"))));
        litem_497->prev=((void*)0);
        litem_497->next=((void*)0);
        __dec_obj91=litem_497->item,
        litem_497->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj91,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_497;
        self->head=litem_497;
    }
    else if(    self->len==1) {
        litem_498=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value420=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1045, "struct list_item$1CVALUE$ph*"))));
        litem_498->prev=self->head;
        litem_498->next=((void*)0);
        __dec_obj92=litem_498->item,
        litem_498->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_498;
        self->head->next=litem_498;
    }
    else {
        litem_499=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value421=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1055, "struct list_item$1CVALUE$ph*"))));
        litem_499->prev=self->tail;
        litem_499->next=((void*)0);
        __dec_obj93=litem_499->item,
        litem_499->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_499;
        self->tail=litem_499;
    }
    self->len++;
    __result_obj__308 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_505;
unsigned int it_506;
struct map$2char$phsFun$ph* __result_obj__309;
    hash_505=string_get_hash_key(((char*)key))%self->size;
    it_506=hash_505;
    while((_Bool)1) {
        if(        self->item_existance[it_506]) {
            if(            string_equals(self->keys[it_506],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_506]);
                self->item_existance[it_506]=(_Bool)0;
                if(                1) {
                    (self->keys[it_506] = come_decrement_ref_count(self->keys[it_506], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_506]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_506],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_506]=((void*)0);
                self->len--;
                break;
            }
            it_506++;
            if(            it_506>=self->size) {
                it_506=0;
            }
            else if(            it_506==hash_505) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__309 = self;
    return __result_obj__309;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_543;
unsigned int hash_544;
unsigned int it_545;
struct sFun* __result_obj__314;
struct sFun* __result_obj__315;
struct sFun* __result_obj__316;
struct sFun* __result_obj__317;
default_value_543 = (void*)0;
    memset(&default_value_543,0,sizeof(struct sFun*));
    hash_544=string_get_hash_key(((char*)key))%self->size;
    it_545=hash_544;
    while((_Bool)1) {
        if(        self->item_existance[it_545]) {
            if(            string_equals(self->keys[it_545],key)) {
                __result_obj__314 = (struct sFun*)come_increment_ref_count(self->items[it_545]);
                /*c*/ come_call_finalizer3(default_value_543,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__314,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__314;
            }
            it_545++;
            if(            it_545>=self->size) {
                it_545=0;
            }
            else if(            it_545==hash_544) {
                __result_obj__315 = (struct sFun*)come_increment_ref_count(default_value_543);
                /*c*/ come_call_finalizer3(default_value_543,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__315,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__315;
            }
        }
        else {
            __result_obj__316 = (struct sFun*)come_increment_ref_count(default_value_543);
            /*c*/ come_call_finalizer3(default_value_543,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__316,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__316;
        }
    }
    __result_obj__317 = (struct sFun*)come_increment_ref_count(default_value_543);
    /*c*/ come_call_finalizer3(default_value_543,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__317,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__317;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__321;
void* __right_value567 = (void*)0;
struct sFunCallNode* result_569;
void* __right_value568 = (void*)0;
char* __dec_obj145;
void* __right_value569 = (void*)0;
char* __dec_obj146;
void* __right_value570 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj147;
void* __right_value571 = (void*)0;
struct list$1sType$ph* __dec_obj148;
void* __right_value572 = (void*)0;
struct buffer* __dec_obj149;
struct sFunCallNode* __result_obj__322;
    if(    self==(void*)0) {
        __result_obj__321 = (void*)0;
        return __result_obj__321;
    }
    result_569=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_569->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj145=result_569->sname,
        result_569->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_569->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj146=result_569->fun_name,
        result_569->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj147=result_569->params,
        result_569->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj147,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_569->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj148=result_569->method_generics_types,
        result_569->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj148,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj149=result_569->method_block,
        result_569->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj149,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_569->method_block_sline=self->method_block_sline;
    }
    __result_obj__322 = result_569;
    /*c*/ come_call_finalizer3(result_569,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_591;
int i_592;
struct CVALUE* default_value_593;
struct list$1CVALUE$ph* __result_obj__329;
struct list_item$1CVALUE$ph* it_594;
int i_595;
struct CVALUE* __dec_obj151;
struct list$1CVALUE$ph* __result_obj__330;
default_value_593 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_591=self->len;
        for(        i_592=0;        i_592<position-len_591;        i_592++        ){
            memset(&default_value_593,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_593));
            /*c*/ come_call_finalizer3(default_value_593,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__329 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__329;
    }
    it_594=self->head;
    i_595=0;
    while(it_594!=((void*)0)) {
        if(        position==i_595) {
            __dec_obj151=it_594->item,
            it_594->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj151,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_594=it_594->next;
        i_595++;
    }
    __result_obj__330 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__330;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_608;
int i_609;
char* __result_obj__334;
char* default_value_610;
char* __result_obj__335;
default_value_610 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_608=self->head;
    i_609=0;
    while(it_608!=((void*)0)) {
        if(        position==i_609) {
            __result_obj__334 = (char*)come_increment_ref_count(it_608->item);
            (__result_obj__334 = come_decrement_ref_count(__result_obj__334, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__334;
        }
        it_608=it_608->next;
        i_609++;
    }
    memset(&default_value_610,0,sizeof(char*));
    __result_obj__335 = (char*)come_increment_ref_count(default_value_610);
    (default_value_610 = come_decrement_ref_count(default_value_610, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__335 = come_decrement_ref_count(__result_obj__335, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__335;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__340;
void* __right_value632 = (void*)0;
struct sCurrentNode2* result_626;
void* __right_value633 = (void*)0;
char* __dec_obj154;
struct sCurrentNode2* __result_obj__341;
    if(    self==(void*)0) {
        __result_obj__340 = (void*)0;
        return __result_obj__340;
    }
    result_626=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_626->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_626->sname,
        result_626->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode2_clone", 5, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_626->sline_real=self->sline_real;
    }
    __result_obj__341 = result_626;
    /*c*/ come_call_finalizer3(result_626,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__341;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_632;
unsigned int hash_633;
unsigned int it_634;
struct sClass* __result_obj__343;
struct sClass* __result_obj__344;
struct sClass* __result_obj__345;
struct sClass* __result_obj__346;
default_value_632 = (void*)0;
    memset(&default_value_632,0,sizeof(struct sClass*));
    hash_633=string_get_hash_key(((char*)key))%self->size;
    it_634=hash_633;
    while((_Bool)1) {
        if(        self->item_existance[it_634]) {
            if(            string_equals(self->keys[it_634],key)) {
                __result_obj__343 = (struct sClass*)come_increment_ref_count(self->items[it_634]);
                /*c*/ come_call_finalizer3(default_value_632,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__343,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__343;
            }
            it_634++;
            if(            it_634>=self->size) {
                it_634=0;
            }
            else if(            it_634==hash_633) {
                __result_obj__344 = (struct sClass*)come_increment_ref_count(default_value_632);
                /*c*/ come_call_finalizer3(default_value_632,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__344,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__344;
            }
        }
        else {
            __result_obj__345 = (struct sClass*)come_increment_ref_count(default_value_632);
            /*c*/ come_call_finalizer3(default_value_632,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__345,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__345;
        }
    }
    __result_obj__346 = (struct sClass*)come_increment_ref_count(default_value_632);
    /*c*/ come_call_finalizer3(default_value_632,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__346,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__346;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value675 = (void*)0;
struct buffer* __dec_obj162;
struct sComeCallNode* __result_obj__351;
    ((struct sNodeBase*)(__right_value675=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value675,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj162=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj162,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__351 = (struct sComeCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__351,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__351;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value676 = (void*)0;
char* __result_obj__352;
    __result_obj__352 = (char*)come_increment_ref_count(((char*)(__right_value676=__builtin_string("sComeCallNode"))));
    (__right_value676 = come_decrement_ref_count(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__352 = come_decrement_ref_count(__result_obj__352, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__352;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_667;
struct buffer* come_block_668;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1CVALUE$ph* come_params_669;
void* __right_value679 = (void*)0;
char* var_name_671;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sType* type__672;
void* __right_value683 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_675=0;
char* Err_676=0;
_Bool _if_conditional30;
_Bool __result_obj__357;
void* __right_value684 = (void*)0;
struct sNode* var_node_677;
_Bool Value_678;
_Bool __result_obj__358;
void* __right_value685 = (void*)0;
struct CVALUE* thread_var_value_679;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct CVALUE* come_value_680;
void* __right_value688 = (void*)0;
char* __dec_obj163;
struct sType* __dec_obj164;
void* __right_value689 = (void*)0;
struct sNode* null_node_681;
_Bool Value_682;
_Bool __result_obj__359;
void* __right_value690 = (void*)0;
struct CVALUE* __dec_obj165;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value693 = (void*)0;
struct sNode* current_stack_frame_node_683;
_Bool Value_684;
_Bool __result_obj__360;
void* __right_value694 = (void*)0;
struct CVALUE* current_stack_frame_value_685;
void* __right_value695 = (void*)0;
char* fun_name_686;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct buffer* come_block2_687;
void* __right_value698 = (void*)0;
char* class_name_688;
void* __right_value699 = (void*)0;
struct sClass* current_stack_frame_struct_689;
void* __right_value700 = (void*)0;
struct buffer* source3_690;
char* p_691;
char* head_692;
int sline_693;
struct buffer* __dec_obj166;
void* __right_value701 = (void*)0;
struct sNode* node_694;
_Bool in_method_block_695;
_Bool Value_696;
_Bool __result_obj__361;
struct buffer* __dec_obj167;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct CVALUE* fun_value_697;
void* __right_value704 = (void*)0;
char* __dec_obj168;
struct sType* __dec_obj169;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct buffer* buf_698;
void* __right_value707 = (void*)0;
char* fun_name_699;
int j_700;
struct list$1CVALUE$ph* o2_saved_701;
struct CVALUE* it_702;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct CVALUE* come_value_703;
void* __right_value710 = (void*)0;
char* __dec_obj170;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sType* type_704;
void* __right_value714 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_705=0;
char* Err_706=0;
_Bool _if_conditional31;
_Bool __result_obj__362;
struct sType* __dec_obj171;
_Bool __result_obj__363;
    come_block_sline_667=self->come_block_sline;
    come_block_668=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_669=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1419, "struct list$1CVALUE$ph*"))));
    static int thread_num_670=0;
    thread_num_670++;
    var_name_671=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_670));
    type__672=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value681=map$2char$phsType$ph_at(info->types,((char*)(__right_value680=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value680 = come_decrement_ref_count(__right_value680, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value681,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__672==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value683=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_675=multiple_assign_var23->v1;
        Err_676=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_676)),        /*c*/ come_call_finalizer3(__right_value683,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional30) {
            __result_obj__357 = (_Bool)1;
            (Err_676 = come_decrement_ref_count(Err_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_668,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__357;
        }
        else {
        }
        (Err_676 = come_decrement_ref_count(Err_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_677=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_671),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__672),(_Bool)1,((void*)0),info));
    Value_678=node_compile(var_node_677,info);
    if(    !Value_678) {
        __result_obj__358 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_668,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_677) ? var_node_677 = come_decrement_ref_count(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__358;
    }
    else {
    }
    thread_var_value_679=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_680=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1442, "struct CVALUE*"))));
    __dec_obj163=come_value_680->c_value,
    come_value_680->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_679->c_value));
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj164=come_value_680->type,
    come_value_680->type=(struct sType*)come_increment_ref_count(thread_var_value_679->type);
    /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_680->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_669,(struct CVALUE*)come_increment_ref_count(come_value_680));
    null_node_681=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_682=node_compile(null_node_681,info);
    if(    !Value_682) {
        __result_obj__359 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_668,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_677) ? var_node_677 = come_decrement_ref_count(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_680,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_681) ? null_node_681 = come_decrement_ref_count(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__359;
    }
    else {
    }
    __dec_obj165=come_value_680,
    come_value_680=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj165,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_669,(struct CVALUE*)come_increment_ref_count(come_value_680));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1459, "struct sNode");
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value692=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1459, "struct sCurrentNode2*")),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_683=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value692,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_684=node_compile(current_stack_frame_node_683,info);
    if(    !Value_684) {
        __result_obj__360 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_668,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_677) ? var_node_677 = come_decrement_ref_count(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_680,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_681) ? null_node_681 = come_decrement_ref_count(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_683) ? current_stack_frame_node_683 = come_decrement_ref_count(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__360;
    }
    else {
    }
    current_stack_frame_value_685=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_686=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_670));
    come_block2_687=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1469, "struct buffer*"))));
    class_name_688=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_687,"void* %s(%s* parent)\n",fun_name_686,class_name_688);
    buffer_append_str(come_block2_687,((char*)(__right_value699=buffer_to_string(come_block_668))));
    (__right_value699 = come_decrement_ref_count(__right_value699, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_689=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value700=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_688)));
    /*c*/ come_call_finalizer3(__right_value700,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_690=(struct buffer*)come_increment_ref_count(info->source);
    p_691=info->p;
    head_692=info->head;
    sline_693=info->sline;
    __dec_obj166=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_687);
    /*b*/ come_call_finalizer3(__dec_obj166,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_667;
    node_694=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_695=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_696=node_compile(node_694,info);
    if(    !Value_696) {
        __result_obj__361 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_668,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_677) ? var_node_677 = come_decrement_ref_count(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_680,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_681) ? null_node_681 = come_decrement_ref_count(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_683) ? current_stack_frame_node_683 = come_decrement_ref_count(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_685,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_686 = come_decrement_ref_count(fun_name_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_687,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_688 = come_decrement_ref_count(class_name_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_690,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_694) ? node_694 = come_decrement_ref_count(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__361;
    }
    else {
    }
    info->in_method_block=in_method_block_695;
    __dec_obj167=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_690);
    /*b*/ come_call_finalizer3(__dec_obj167,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_691;
    info->head=head_692;
    info->sline=sline_693;
    info->current_stack_frame_struct=current_stack_frame_struct_689;
    fun_value_697=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1514, "struct CVALUE*"))));
    __dec_obj168=fun_value_697->c_value,
    fun_value_697->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_686));
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj169=come_value_680->type,
    come_value_680->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_680->var=((void*)0);
    list$1CVALUE$ph_add(come_params_669,(struct CVALUE*)come_increment_ref_count(fun_value_697));
    list$1CVALUE$ph_add(come_params_669,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_685));
    buf_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1524, "struct buffer*"))));
    (fun_name_686 = come_decrement_ref_count(fun_name_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_699=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_698,"(");
    buffer_append_str(buf_698,fun_name_699);
    buffer_append_str(buf_698,"(");
    j_700=0;
    for(    o2_saved_701=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_669)),it_702=list$1CVALUE$ph_begin((o2_saved_701));    !list$1CVALUE$ph_end((o2_saved_701));    it_702=list$1CVALUE$ph_next((o2_saved_701))    ){
        buffer_append_str(buf_698,it_702->c_value);
        if(        j_700!=list$1CVALUE$ph_length(come_params_669)-1) {
            buffer_append_str(buf_698,",");
        }
        j_700++;
    }
    /*c*/ come_call_finalizer3(o2_saved_701,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_698,")");
    buffer_append_str(buf_698,", ");
    buffer_append_str(buf_698,thread_var_value_679->c_value);
    buffer_append_str(buf_698,")");
    /*c*/ come_call_finalizer3(come_value_680,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_703=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1547, "struct CVALUE*"))));
    __dec_obj170=come_value_703->c_value,
    come_value_703->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_698));
    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_704=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value712=map$2char$phsType$ph_at(info->types,((char*)(__right_value711=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value711 = come_decrement_ref_count(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value712,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_704==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value714=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_705=multiple_assign_var24->v1;
        Err_706=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_706)),        /*c*/ come_call_finalizer3(__right_value714,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional31) {
            __result_obj__362 = (_Bool)1;
            (Err_706 = come_decrement_ref_count(Err_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_block_668,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type__672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((var_node_677) ? var_node_677 = come_decrement_ref_count(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((null_node_681) ? null_node_681 = come_decrement_ref_count(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_683) ? current_stack_frame_node_683 = come_decrement_ref_count(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(current_stack_frame_value_685,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_block2_687,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_688 = come_decrement_ref_count(class_name_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_690,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_694) ? node_694 = come_decrement_ref_count(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(fun_value_697,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_699 = come_decrement_ref_count(fun_name_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_703,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_704,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__362;
        }
        else {
        }
        (Err_706 = come_decrement_ref_count(Err_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj171=come_value_703->type,
    come_value_703->type=(struct sType*)come_increment_ref_count(type_704);
    /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_703->var=((void*)0);
    add_come_last_code(info,"%s",come_value_703->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_703));
    __result_obj__363 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_668,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__672,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_677) ? var_node_677 = come_decrement_ref_count(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_681) ? null_node_681 = come_decrement_ref_count(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_683) ? current_stack_frame_node_683 = come_decrement_ref_count(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_685,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_687,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_688 = come_decrement_ref_count(class_name_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_690,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_694) ? node_694 = come_decrement_ref_count(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_697,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_699 = come_decrement_ref_count(fun_name_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_703,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_704,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__363;
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
unsigned int hash_673;
unsigned int it_674;
struct sType* __result_obj__353;
struct sType* __result_obj__354;
struct sType* __result_obj__355;
struct sType* __result_obj__356;
    hash_673=string_get_hash_key(((char*)key))%self->size;
    it_674=hash_673;
    while((_Bool)1) {
        if(        self->item_existance[it_674]) {
            if(            string_equals(self->keys[it_674],key)) {
                __result_obj__353 = (struct sType*)come_increment_ref_count(self->items[it_674]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__353,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__353;
            }
            it_674++;
            if(            it_674>=self->size) {
                it_674=0;
            }
            else if(            it_674==hash_673) {
                __result_obj__354 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__354,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__354;
            }
        }
        else {
            __result_obj__355 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__355,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__355;
        }
    }
    __result_obj__356 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__356,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__356;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value715 = (void*)0;
struct sNode* __dec_obj172;
struct sComeJoinNode* __result_obj__364;
    ((struct sNodeBase*)(__right_value715=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value715,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj172=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__364 = (struct sComeJoinNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__364,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__364;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value716 = (void*)0;
char* __result_obj__365;
    __result_obj__365 = (char*)come_increment_ref_count(((char*)(__right_value716=__builtin_string("sComeJoinNode"))));
    (__right_value716 = come_decrement_ref_count(__right_value716, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__365 = come_decrement_ref_count(__result_obj__365, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__365;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_707;
_Bool Value_708;
_Bool __result_obj__366;
void* __right_value717 = (void*)0;
struct CVALUE* come_value_709;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct buffer* buf_710;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct CVALUE* come_value_711;
void* __right_value722 = (void*)0;
char* __dec_obj173;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sType* __dec_obj174;
_Bool __result_obj__367;
    node_707=(struct sNode*)come_increment_ref_count(self->node);
    Value_708=node_compile(node_707,info);
    if(    !Value_708) {
        __result_obj__366 = (_Bool)0;
        ((node_707) ? node_707 = come_decrement_ref_count(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__366;
    }
    else {
    }
    come_value_709=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_710=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1596, "struct buffer*"))));
    buffer_append_str(buf_710,"pthread_join(");
    buffer_append_str(buf_710,come_value_709->c_value);
    buffer_append_str(buf_710,", 0)");
    /*c*/ come_call_finalizer3(come_value_709,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_711=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1601, "struct CVALUE*"))));
    __dec_obj173=come_value_711->c_value,
    come_value_711->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_710));
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj174=come_value_711->type,
    come_value_711->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1603, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_711->var=((void*)0);
    add_come_last_code(info,"%s",come_value_711->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_711));
    __result_obj__367 = (_Bool)1;
    ((node_707) ? node_707 = come_decrement_ref_count(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_710,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_711,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__367;
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
struct list$1sNode$ph* __dec_obj175;
struct list$1sBlock$ph* __dec_obj176;
struct sBlock* __dec_obj177;
struct sComePollNode* __result_obj__368;
    ((struct sNodeBase*)(__right_value726=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value726,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
    __result_obj__368 = (struct sComePollNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__368,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__368;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value727 = (void*)0;
char* __result_obj__369;
    __result_obj__369 = (char*)come_increment_ref_count(((char*)(__right_value727=__builtin_string("sComePollNode"))));
    (__right_value727 = come_decrement_ref_count(__right_value727, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__369 = come_decrement_ref_count(__result_obj__369, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__369;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_716;
struct list$1sBlock$ph* blocks_717;
int time_out_718;
int n_720;
struct list$1sNode$ph* o2_saved_721;
struct sNode* it_724;
_Bool Value_727;
_Bool __result_obj__376;
void* __right_value728 = (void*)0;
struct CVALUE* come_value_728;
int n_729;
struct list$1sNode$ph* o2_saved_730;
struct sNode* it_731;
void* __right_value729 = (void*)0;
_Bool __result_obj__379;
    vars_716=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_717=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_718=self->time_out;
    static int var_num_719=0;
    var_num_719++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_719,list$1sNode$ph_length(vars_716));
    n_720=0;
    for(    o2_saved_721=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_724=list$1sNode$ph_begin((o2_saved_721));    !list$1sNode$ph_end((o2_saved_721));    it_724=list$1sNode$ph_next((o2_saved_721))    ){
        Value_727=node_compile(it_724,info);
        if(        !Value_727) {
            __result_obj__376 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_721,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_716,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_717,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__376;
        }
        else {
        }
        come_value_728=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_719,n_720,come_value_728->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_719,n_720,1);
        n_720++;
        /*c*/ come_call_finalizer3(come_value_728,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_721,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_719,var_num_719,list$1sNode$ph_length(vars_716),time_out_718);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_719);
    n_729=0;
    for(    o2_saved_730=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_731=list$1sNode$ph_begin((o2_saved_730));    !list$1sNode$ph_end((o2_saved_730));    it_731=list$1sNode$ph_next((o2_saved_730))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_719,n_729,1);
        transpile_block(((struct sBlock*)(__right_value729=list$1sBlock$ph$p_operator_load_element(blocks_717,n_729))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value729,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_729++;
    }
    /*c*/ come_call_finalizer3(o2_saved_730,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_719);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__379 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_716,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_717,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__379;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_712;
struct list_item$1sBlock$ph* prev_it_713;
    it_712=self->head;
    while(it_712!=((void*)0)) {
        prev_it_713=it_712;
        it_712=it_712->next;
        /*c*/ come_call_finalizer3(prev_it_713,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sBlock$ph* it_714;
struct list_item$1sBlock$ph* prev_it_715;
    it_714=self->head;
    while(it_714!=((void*)0)) {
        prev_it_715=it_714;
        it_714=it_714->next;
        /*c*/ come_call_finalizer3(prev_it_715,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_722;
struct sNode* __result_obj__370;
struct sNode* __result_obj__371;
struct sNode* result_723;
struct sNode* __result_obj__372;
result_722 = (void*)0;
result_723 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_722,0,sizeof(struct sNode*));
        __result_obj__370 = result_722;
        return __result_obj__370;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__371 = self->it->item;
        return __result_obj__371;
    }
    memset(&result_723,0,sizeof(struct sNode*));
    __result_obj__372 = result_723;
    return __result_obj__372;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_725;
struct sNode* __result_obj__373;
struct sNode* __result_obj__374;
struct sNode* result_726;
struct sNode* __result_obj__375;
result_725 = (void*)0;
result_726 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_725,0,sizeof(struct sNode*));
        __result_obj__373 = result_725;
        return __result_obj__373;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__374 = self->it->item;
        return __result_obj__374;
    }
    memset(&result_726,0,sizeof(struct sNode*));
    __result_obj__375 = result_726;
    return __result_obj__375;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_732;
int i_733;
struct sBlock* __result_obj__377;
struct sBlock* default_value_734;
struct sBlock* __result_obj__378;
default_value_734 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_732=self->head;
    i_733=0;
    while(it_732!=((void*)0)) {
        if(        position==i_733) {
            __result_obj__377 = (struct sBlock*)come_increment_ref_count(it_732->item);
            /*c*/ come_call_finalizer3(__result_obj__377,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__377;
        }
        it_732=it_732->next;
        i_733++;
    }
    memset(&default_value_734,0,sizeof(struct sBlock*));
    __result_obj__378 = (struct sBlock*)come_increment_ref_count(default_value_734);
    /*c*/ come_call_finalizer3(default_value_734,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__378,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__378;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value732 = (void*)0;
struct sNode* node_735;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj178;
struct sNode* __result_obj__380;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1686, "struct sNode");
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value731=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1686, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_735=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*c*/ come_call_finalizer3(__right_value731,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj178=node_735,
    node_735=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_735),info));
    (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__380 = (struct sNode*)come_increment_ref_count(node_735);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_735) ? node_735 = come_decrement_ref_count(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__380;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value734 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value735 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj180;
struct sLambdaCall* __result_obj__381;
    ((struct sNodeBase*)(__right_value734=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value734,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj179=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj180=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj180,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__381 = (struct sLambdaCall*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__381,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__381;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value736 = (void*)0;
char* __result_obj__382;
    __result_obj__382 = (char*)come_increment_ref_count(((char*)(__right_value736=__builtin_string("sLambdaCall"))));
    (__right_value736 = come_decrement_ref_count(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__382 = come_decrement_ref_count(__result_obj__382, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__382;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_736;
struct list$1tuple2$2char$phsNode$ph$ph* params_737;
_Bool Value_738;
_Bool __result_obj__383;
void* __right_value737 = (void*)0;
struct CVALUE* come_value_739;
struct sType* lambda_type_740;
void* __right_value738 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_741=0;
char* Err_742=0;
_Bool _if_conditional32;
_Bool __result_obj__384;
void* __right_value739 = (void*)0;
struct sType* result_type_743;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1CVALUE$ph* come_params_744;
void* __right_value742 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_745=0;
char* Err_746=0;
_Bool _if_conditional33;
_Bool __result_obj__385;
_Bool __result_obj__386;
int i_747;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_748;
struct tuple2$2char$phsNode$ph* it_749;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_750=0;
struct sNode* node_751=0;
_Bool Value_752;
_Bool __result_obj__387;
void* __right_value743 = (void*)0;
struct CVALUE* come_value_753;
void* __right_value744 = (void*)0;
_Bool _if_conditional34;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_754=0;
char* Err_755=0;
_Bool _if_conditional35;
_Bool __result_obj__388;
void* __right_value749 = (void*)0;
_Bool _if_conditional36;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct buffer* buf_756;
int j_757;
struct list$1CVALUE$ph* o2_saved_758;
struct CVALUE* it_759;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct CVALUE* come_value2_760;
void* __right_value755 = (void*)0;
char* __dec_obj181;
void* __right_value756 = (void*)0;
struct sType* __dec_obj182;
_Bool __result_obj__389;
    node_736=(struct sNode*)come_increment_ref_count(self->node);
    params_737=self->params;
    Value_738=node_compile(node_736,info);
    if(    !Value_738) {
        __result_obj__383 = (_Bool)0;
        ((node_736) ? node_736 = come_decrement_ref_count(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__383;
    }
    else {
    }
    come_value_739=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_740=come_value_739->type;
    if(    lambda_type_740->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value738=err_msg(info,"invalid lambda type")));
        come_exception_var_15_741=multiple_assign_var25->v1;
        Err_742=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_742)),        /*c*/ come_call_finalizer3(__right_value738,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional32) {
            __result_obj__384 = (_Bool)1;
            (Err_742 = come_decrement_ref_count(Err_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_736) ? node_736 = come_decrement_ref_count(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_739,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__384;
        }
        else {
        }
        (Err_742 = come_decrement_ref_count(Err_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_743=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_740->mResultType));
    result_type_743->mStatic=(_Bool)0;
    come_params_744=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1730, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_740->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_737)&&!lambda_type_740->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value742=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_740->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_737))));
        come_exception_var_16_745=multiple_assign_var26->v1;
        Err_746=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_746)),        /*c*/ come_call_finalizer3(__right_value742,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional33) {
            __result_obj__385 = (_Bool)1;
            (Err_746 = come_decrement_ref_count(Err_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_736) ? node_736 = come_decrement_ref_count(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_739,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_743,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_744,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__385;
        }
        else {
        }
        __result_obj__386 = (_Bool)0;
        (Err_746 = come_decrement_ref_count(Err_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_736) ? node_736 = come_decrement_ref_count(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_739,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_743,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_744,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__386;
        (Err_746 = come_decrement_ref_count(Err_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_747=0;
    for(    o2_saved_748=(params_737),it_749=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_748));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_748));    it_749=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_748))    ){
        multiple_assign_var27=it_749;
        label_750=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_751=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_752=node_compile(node_751,info);
        if(        !Value_752) {
            __result_obj__387 = (_Bool)0;
            (label_750 = come_decrement_ref_count(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_751) ? node_751 = come_decrement_ref_count(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_736) ? node_736 = come_decrement_ref_count(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_739,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_743,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_744,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__387;
        }
        else {
        }
        come_value_753=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_740->mVarArgs&&((struct sType*)(__right_value744=list$1sType$ph$p_operator_load_element(lambda_type_740->mParamTypes,i_747)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value744,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value748=check_assign_type(((char*)(__right_value746=xsprintf("calling param #\%s",((char*)(__right_value745=int_to_string(i_747)))))),((struct sType*)(__right_value747=list$1sType$ph$p_operator_load_element(lambda_type_740->mParamTypes,i_747))),come_value_753->type,come_value_753,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_754=multiple_assign_var28->v1;
            Err_755=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_755)),            (__right_value745 = come_decrement_ref_count(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value746 = come_decrement_ref_count(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value747,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value748,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional35) {
                __result_obj__388 = (_Bool)1;
                (Err_755 = come_decrement_ref_count(Err_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_750 = come_decrement_ref_count(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_751) ? node_751 = come_decrement_ref_count(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_753,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_736) ? node_736 = come_decrement_ref_count(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_739,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_743,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_744,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__388;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)(__right_value749=list$1sType$ph$p_operator_load_element(lambda_type_740->mParamTypes,i_747)))->mHeap&&come_value_753->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value749,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)(__right_value750=list$1sType$ph$p_operator_load_element(lambda_type_740->mParamTypes,i_747))),come_value_753->type,come_value_753,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value750,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (Err_755 = come_decrement_ref_count(Err_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(come_params_744,(struct CVALUE*)come_increment_ref_count(come_value_753));
        i_747++;
        (label_750 = come_decrement_ref_count(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_751) ? node_751 = come_decrement_ref_count(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_753,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_756=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1764, "struct buffer*"))));
    buffer_append_str(buf_756,"(");
    buffer_append_str(buf_756,come_value_739->c_value);
    buffer_append_str(buf_756,")");
    buffer_append_str(buf_756,"(");
    j_757=0;
    for(    o2_saved_758=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_744)),it_759=list$1CVALUE$ph_begin((o2_saved_758));    !list$1CVALUE$ph_end((o2_saved_758));    it_759=list$1CVALUE$ph_next((o2_saved_758))    ){
        buffer_append_str(buf_756,it_759->c_value);
        if(        j_757!=list$1CVALUE$ph_length(come_params_744)-1) {
            buffer_append_str(buf_756,",");
        }
        j_757++;
    }
    /*c*/ come_call_finalizer3(o2_saved_758,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_756,")");
    come_value2_760=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1783, "struct CVALUE*"))));
    __dec_obj181=come_value2_760->c_value,
    come_value2_760->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_756));
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_740->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_760,(struct sType*)come_increment_ref_count(lambda_type_740->mResultType),info,(_Bool)0,((void*)0),((void*)0));
    }
    __dec_obj182=come_value2_760->type,
    come_value2_760->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_743));
    /*b*/ come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_760->type->mStatic=(_Bool)0;
    come_value2_760->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_760->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_760));
    __result_obj__389 = (_Bool)1;
    ((node_736) ? node_736 = come_decrement_ref_count(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_739,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_743,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_744,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_756,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_760,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__389;
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
struct sType* __dec_obj183;
struct sVarArgTypeName* __result_obj__390;
    ((struct sNodeBase*)(__right_value757=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value757,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj183=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__390 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__390,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__390;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value758 = (void*)0;
char* __result_obj__391;
    __result_obj__391 = (char*)come_increment_ref_count(((char*)(__right_value758=__builtin_string("sVarArgTypeName"))));
    (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__391 = come_decrement_ref_count(__result_obj__391, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__391;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_761;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct CVALUE* come_value_762;
void* __right_value761 = (void*)0;
char* __dec_obj184;
struct sType* __dec_obj185;
_Bool __result_obj__392;
    type_761=(struct sType*)come_increment_ref_count(self->type);
    come_value_762=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1820, "struct CVALUE*"))));
    __dec_obj184=come_value_762->c_value,
    come_value_762->c_value=(char*)come_increment_ref_count(make_type_name_string(type_761,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj185=come_value_762->type,
    come_value_762->type=(struct sType*)come_increment_ref_count(type_761);
    /*b*/ come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_762->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_762));
    __result_obj__392 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_761,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_762,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__392;
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
struct list$1sType$ph* method_generics_types_763;
void* __right_value764 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_764=0;
char* Err_765=0;
void* __right_value765 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_766=0;
char* name_767=0;
_Bool err_768=0;
void* __right_value766 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_769=0;
char* Err_770=0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_771;
_Bool _va_arg_772;
char* p_773;
int sline_774;
_Bool err_flag_775;
void* __right_value770 = (void*)0;
char* label_776;
void* __right_value771 = (void*)0;
char* __dec_obj186;
char* __dec_obj187;
_Bool no_comma_777;
_Bool in_fun_param_778;
void* __right_value772 = (void*)0;
struct sNode* node_779;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
_Bool guard_break_784;
struct buffer* method_block_785;
int method_block_sline_786;
char* head_787;
void* __right_value779 = (void*)0;
char* tail_788;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct buffer* __dec_obj194;
int len_789;
void* __right_value782 = (void*)0;
char* mem_790;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value785 = (void*)0;
struct sNode* node_791;
void* __right_value786 = (void*)0;
struct sNode* __dec_obj195;
struct sNode* __result_obj__395;
    method_generics_types_763=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1834, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value764=err_msg(info,"unexpected source end")));
                come_exception_var_c1_764=multiple_assign_var29->v1;
                Err_765=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_765)?(puts(Err_765),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value764,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_765 = come_decrement_ref_count(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                type_766=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_767=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_768=multiple_assign_var30->v3;
                /*c*/ come_call_finalizer3(__right_value765,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_768) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value766=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_769=multiple_assign_var31->v1;
                    Err_770=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_770)?(puts(Err_770),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value766,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_770 = come_decrement_ref_count(Err_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph_push_back(method_generics_types_763,(struct sType*)come_increment_ref_count(sType_clone(type_766)));
                /*c*/ come_call_finalizer3(type_766,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_767 = come_decrement_ref_count(name_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_771=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1872, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_772=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_773=info->p;
        sline_774=info->sline;
        err_flag_775=(_Bool)0;
        label_776=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj186=label_776,
            label_776=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_775=(_Bool)1;
        }
        if(        err_flag_775==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj187=label_776,
            label_776=((void*)0);
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_773;
            info->sline=sline_774;
        }
        no_comma_777=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_778=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_779=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj188=node_779,
        node_779=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_779),info));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_777;
        info->in_fun_param=in_fun_param_778;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_771,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1920, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_776),(struct sNode*)come_increment_ref_count(node_779))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_776 = come_decrement_ref_count(label_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_779) ? node_779 = come_decrement_ref_count(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_776 = come_decrement_ref_count(label_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_779) ? node_779 = come_decrement_ref_count(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_772;
    guard_break_784=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_784=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_785=((void*)0);
    method_block_sline_786=0;
    if(    *info->p==123) {
        head_787=info->p;
        method_block_sline_786=info->sline;
        ((char*)(__right_value779=skip_block(info)));
        (__right_value779 = come_decrement_ref_count(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_788=info->p;
        __dec_obj194=method_block_785,
        method_block_785=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1957, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj194,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_789=tail_788-head_787;
        mem_790=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_789+1)), "05call.c", 1960, "char*"));
        memcpy(mem_790,head_787,len_789);
        mem_790[len_789]=0;
        buffer_append_str(method_block_785,mem_790);
        buffer_append_str(method_block_785,"\n");
        (mem_790 = come_decrement_ref_count(mem_790, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1970, "struct sNode");
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value784=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1970, "struct sFunCallNode*")),fun_name,params_771,guard_break_784,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_763),(struct buffer*)come_increment_ref_count(method_block_785),method_block_sline_786,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_791=(struct sNode*)come_increment_ref_count(_inf_value6);
    /*c*/ come_call_finalizer3(__right_value784,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj195=node_791,
    node_791=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_791),info));
    (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__395 = (struct sNode*)come_increment_ref_count(node_791);
    /*c*/ come_call_finalizer3(method_generics_types_763,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_771,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_785,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_791) ? node_791 = come_decrement_ref_count(node_791, ((struct sNode*)node_791)->finalize, ((struct sNode*)node_791)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__395) ? __result_obj__395 = come_decrement_ref_count(__result_obj__395, ((struct sNode*)__result_obj__395)->finalize, ((struct sNode*)__result_obj__395)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__395;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_780;
struct tuple2$2char$phsNode$ph* __dec_obj189;
void* __right_value775 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_781;
struct tuple2$2char$phsNode$ph* __dec_obj190;
void* __right_value776 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_782;
struct tuple2$2char$phsNode$ph* __dec_obj191;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__393;
    if(    self->len==0) {
        litem_780=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value774=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1105, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_780->prev=((void*)0);
        litem_780->next=((void*)0);
        __dec_obj189=litem_780->item,
        litem_780->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj189,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_780;
        self->head=litem_780;
    }
    else if(    self->len==1) {
        litem_781=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value775=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1115, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_781->prev=self->head;
        litem_781->next=((void*)0);
        __dec_obj190=litem_781->item,
        litem_781->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj190,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_781;
        self->head->next=litem_781;
    }
    else {
        litem_782=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value776=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1125, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_782->prev=self->tail;
        litem_782->next=((void*)0);
        __dec_obj191=litem_782->item,
        litem_782->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj191,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_782;
        self->tail=litem_782;
    }
    self->len++;
    __result_obj__393 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__393;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_783;
    result_783=0;
    result_783+=int_get_hash_key(((int)self->v1));
    result_783+=int_get_hash_key(((int)self->v2));
    return result_783;
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
struct tuple2$2char$phsNode$ph* __result_obj__394;
    __dec_obj192=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj193=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__394 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__394,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__394;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value787 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_792=0;
char* Err_793=0;
struct sNode* __result_obj__396;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value787=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_exception_var_c3_792=multiple_assign_var32->v1;
    Err_793=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_793)?(puts(Err_793),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value787,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    stackframe_v2();
    exit(3);
    __result_obj__396 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (Err_793 = come_decrement_ref_count(Err_793, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__396) ? __result_obj__396 = come_decrement_ref_count(__result_obj__396, ((struct sNode*)__result_obj__396)->finalize, ((struct sNode*)__result_obj__396)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__396;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value794 = (void*)0;
struct sNode* __result_obj__399;
    _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1991, "struct sNode");
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value789=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1991, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result_obj__399 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value794=_inf_value7)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value789,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value794) ? __right_value794 = come_decrement_ref_count(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__399) ? __result_obj__399 = come_decrement_ref_count(__result_obj__399, ((struct sNode*)__result_obj__399)->finalize, ((struct sNode*)__result_obj__399)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__399;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__397;
void* __right_value790 = (void*)0;
struct sReturnNode* result_794;
void* __right_value791 = (void*)0;
char* __dec_obj196;
void* __right_value792 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value793 = (void*)0;
char* __dec_obj198;
struct sReturnNode* __result_obj__398;
    if(    self==(void*)0) {
        __result_obj__397 = (void*)0;
        return __result_obj__397;
    }
    result_794=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_794->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj196=result_794->sname,
        result_794->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_794->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj197=result_794->value,
        result_794->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj198=result_794->value_source,
        result_794->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__398 = result_794;
    /*c*/ come_call_finalizer3(result_794,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__398;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value798 = (void*)0;
struct sNode* __result_obj__400;
char* head_795;
void* __right_value799 = (void*)0;
struct sNode* value_796;
char* tail_797;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value804 = (void*)0;
struct sNode* __result_obj__401;
int nest_799;
char* head_800;
int head_sline_801;
int sline_real_802;
void* __right_value805 = (void*)0;
char* buf_803;
_Bool is_type_name__804;
_Bool is_special_word_806;
_Bool define_function_pointer_flag_807;
void* __right_value806 = (void*)0;
_Bool lambda_flag_808;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
char* word2_809;
_Bool fun_name_with_type_name_810;
void* __right_value809 = (void*)0;
char* word2_811;
_Bool call_method_generics_fun_call_812;
void* __right_value810 = (void*)0;
char* __dec_obj200;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
_Bool _if_conditional37;
int nest_813;
_Bool inline_asm_814;
void* __right_value815 = (void*)0;
char* __dec_obj201;
void* __right_value816 = (void*)0;
char* __dec_obj202;
void* __right_value817 = (void*)0;
char* __dec_obj203;
void* __right_value818 = (void*)0;
struct sNode* node_815;
struct sNode* __result_obj__402;
_Bool no_comma_816;
void* __right_value819 = (void*)0;
struct sNode* exp_817;
void* __right_value820 = (void*)0;
struct sNode* exp2_818;
void* __right_value821 = (void*)0;
struct sNode* __result_obj__403;
void* __right_value822 = (void*)0;
char* block_text_819;
char* contents_820;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value828 = (void*)0;
struct sNode* __result_obj__406;
void* __right_value829 = (void*)0;
struct sNode* node_822;
struct sNode* __result_obj__407;
void* __right_value830 = (void*)0;
struct sNode* node_823;
struct sNode* __result_obj__408;
struct buffer* come_block_824;
int come_block_sline_825;
char* head_826;
void* __right_value831 = (void*)0;
char* tail_827;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* __dec_obj206;
int len_828;
void* __right_value834 = (void*)0;
char* mem_829;
char* head_830;
_Bool no_output_come_code_831;
void* __right_value835 = (void*)0;
char* tail_832;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct buffer* __dec_obj207;
int len_833;
void* __right_value838 = (void*)0;
char* mem_834;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value844 = (void*)0;
struct sNode* node_835;
struct sNode* __result_obj__411;
struct buffer* come_block_837;
int come_block_sline_838;
void* __right_value845 = (void*)0;
struct sNode* node_839;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value851 = (void*)0;
struct sNode* __result_obj__414;
int time_out_841;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct list$1sNode$ph* vars_842;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1sBlock$ph* blocks_843;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sBlock* else_block_844;
void* __right_value858 = (void*)0;
struct sBlock* __dec_obj212;
void* __right_value859 = (void*)0;
struct sNode* var_name_845;
void* __right_value860 = (void*)0;
struct sBlock* block_846;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value910 = (void*)0;
struct sNode* __result_obj__438;
void* __right_value911 = (void*)0;
struct sNode* node_882;
struct sNode* __result_obj__439;
void* __right_value912 = (void*)0;
struct sNode* node_883;
struct sNode* __result_obj__440;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value917 = (void*)0;
struct sNode* __result_obj__443;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value922 = (void*)0;
struct sNode* __result_obj__446;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value927 = (void*)0;
struct sNode* __result_obj__449;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value932 = (void*)0;
struct sNode* __result_obj__452;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value937 = (void*)0;
struct sNode* __result_obj__455;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value942 = (void*)0;
struct sNode* __result_obj__458;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value947 = (void*)0;
struct sNode* __result_obj__461;
void* __right_value948 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_891=0;
char* name_892=0;
_Bool err_893=0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value954 = (void*)0;
struct sNode* __result_obj__464;
void* __right_value955 = (void*)0;
struct sNode* node_895;
struct sNode* __result_obj__465;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct buffer* buf2_896;
void* __right_value958 = (void*)0;
char* word_897;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct list$1sNode$ph* exps_898;
void* __right_value961 = (void*)0;
struct sNode* exp_899;
void* __right_value962 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_900=0;
char* Err_901=0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value970 = (void*)0;
struct sNode* __result_obj__468;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct buffer* fun_name_903;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sType* type_904;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct sClass* klass_908;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sType* __dec_obj241;
void* __right_value981 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_909=0;
char* Err_910=0;
void* __right_value982 = (void*)0;
char* buf2_911;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sNode* node_912;
struct sNode* __result_obj__473;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct buffer* fun_name_913;
void* __right_value987 = (void*)0;
char* buf2_914;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sNode* node_915;
struct sNode* __result_obj__474;
void* __right_value990 = (void*)0;
struct sNode* node_916;
struct sNode* __result_obj__475;
void* __right_value991 = (void*)0;
struct sNode* node_917;
struct sNode* __result_obj__476;
void* __right_value992 = (void*)0;
struct sNode* node_918;
struct sNode* __result_obj__477;
void* __right_value993 = (void*)0;
struct sNode* node_919;
struct sNode* __result_obj__478;
void* __right_value994 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_920=0;
char* Err_921=0;
struct sNode* __result_obj__479;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2004, "struct sNode");
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value797=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2004, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__400 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value798=_inf_value8)));
            /*c*/ come_call_finalizer3(__right_value797,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value798) ? __right_value798 = come_decrement_ref_count(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__400) ? __result_obj__400 = come_decrement_ref_count(__result_obj__400, ((struct sNode*)__result_obj__400)->finalize, ((struct sNode*)__result_obj__400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__400;
        }
        else {
            head_795=info->p;
            value_796=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_797=info->p;
            __dec_obj199=value_796,
            value_796=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_796),info));
            (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_798[tail_797-head_795+1];
            memset(&buf_798, 0, sizeof(char)            *(tail_797-head_795+1)            );
            memcpy(buf_798,head_795,tail_797-head_795);
            buf_798[tail_797-head_795]=0;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2016, "struct sNode");
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value803=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2016, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_796),(char*)come_increment_ref_count(__builtin_string(buf_798)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__401 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value804=_inf_value9)));
            ((value_796) ? value_796 = come_decrement_ref_count(value_796, ((struct sNode*)value_796)->finalize, ((struct sNode*)value_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value803,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value804) ? __right_value804 = come_decrement_ref_count(__right_value804, ((struct sNode*)__right_value804)->finalize, ((struct sNode*)__right_value804)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__401) ? __result_obj__401 = come_decrement_ref_count(__result_obj__401, ((struct sNode*)__result_obj__401)->finalize, ((struct sNode*)__result_obj__401)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__401;
            ((value_796) ? value_796 = come_decrement_ref_count(value_796, ((struct sNode*)value_796)->finalize, ((struct sNode*)value_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_799=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_799++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_799--;
                if(                nest_799==0) {
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
        head_800=info->p;
        head_sline_801=info->sline;
        sline_real_802=info->sline_real;
        info->sline_real=info->sline;
        buf_803=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__804=is_type_name(buf_803,info);
        static char* is_special_word_array_805[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_806=charppa_contained(is_special_word_array_805,19,buf_803);
        define_function_pointer_flag_807=(_Bool)0;
        if(        !is_special_word_806&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value806=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value806,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_807=(_Bool)1;
                }
            }
            info->p=head_800;
            info->sline=head_sline_801;
        }
        lambda_flag_808=(_Bool)0;
        if(        !is_special_word_806&&is_type_name__804) {
            info->p=head_800;
            info->sline=head_sline_801;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value807=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value807,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_809=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_809,"lambda")) {
                lambda_flag_808=(_Bool)1;
            }
            info->p=head_800;
            info->sline=head_sline_801;
            (word2_809 = come_decrement_ref_count(word2_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_810=(_Bool)0;
        if(        !is_special_word_806) {
            info->p=head_800;
            info->sline=head_sline_801;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_811=(char*)come_increment_ref_count(parse_word(info));
                (word2_811 = come_decrement_ref_count(word2_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_810=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_800;
            info->sline=head_sline_801;
        }
        call_method_generics_fun_call_812=(_Bool)0;
        {
            info->p=head_800;
            info->sline=head_sline_801;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj200=buf_803,
                buf_803=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_803,info)&&((struct sVar*)(__right_value812=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value811=__builtin_string(buf_803))))))==((void*)0)&&((struct sVar*)(__right_value814=map$2char$phsVar$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value813=__builtin_string(buf_803))))))==((void*)0)&&*info->p==60)),            (__right_value811 = come_decrement_ref_count(__right_value811, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value812,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value813 = come_decrement_ref_count(__right_value813, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value814,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional37) {
                nest_813=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_813++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_813==0) {
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
                    call_method_generics_fun_call_812=(_Bool)1;
                }
            }
            info->p=head_800;
            info->sline=head_sline_801;
        }
        inline_asm_814=(_Bool)0;
        {
            info->p=head_800;
            info->sline=head_sline_801;
            __dec_obj201=buf_803,
            buf_803=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_803,"asm")||string_operator_equals(buf_803,"__asm")||string_operator_equals(buf_803,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_814=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj202=buf_803,
                        buf_803=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_814=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_800;
            info->sline=head_sline_801;
        }
        parse_sharp_v5(info);
        __dec_obj203=buf_803,
        buf_803=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_808) {
            info->p=head_800;
            info->sline=head_sline_801;
            node_815=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_802;
            __result_obj__402 = (struct sNode*)come_increment_ref_count(node_815);
            ((node_815) ? node_815 = come_decrement_ref_count(node_815, ((struct sNode*)node_815)->finalize, ((struct sNode*)node_815)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__402) ? __result_obj__402 = come_decrement_ref_count(__result_obj__402, ((struct sNode*)__result_obj__402)->finalize, ((struct sNode*)__result_obj__402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__402;
            ((node_815) ? node_815 = come_decrement_ref_count(node_815, ((struct sNode*)node_815)->finalize, ((struct sNode*)node_815)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_803,"_Static_assert")||string_operator_equals(buf_803,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_816=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_817=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_816;
            expected_next_character(44,info);
            exp2_818=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__403 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value821=static_assert_node((struct sNode*)come_increment_ref_count(exp_817),(struct sNode*)come_increment_ref_count(exp2_818),info))));
            ((exp_817) ? exp_817 = come_decrement_ref_count(exp_817, ((struct sNode*)exp_817)->finalize, ((struct sNode*)exp_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_818) ? exp2_818 = come_decrement_ref_count(exp2_818, ((struct sNode*)exp2_818)->finalize, ((struct sNode*)exp2_818)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value821) ? __right_value821 = come_decrement_ref_count(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__403;
            ((exp_817) ? exp_817 = come_decrement_ref_count(exp_817, ((struct sNode*)exp_817)->finalize, ((struct sNode*)exp_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_818) ? exp2_818 = come_decrement_ref_count(exp2_818, ((struct sNode*)exp2_818)->finalize, ((struct sNode*)exp2_818)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_803,"output")&&*info->p==123) {
            block_text_819=(char*)come_increment_ref_count(skip_block(info));
            contents_820=(char*)come_increment_ref_count(block_text_819);
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2254, "struct sNode");
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value824=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2254, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_820),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result_obj__406 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value828=_inf_value10)));
            (block_text_819 = come_decrement_ref_count(block_text_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_820 = come_decrement_ref_count(contents_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value824,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value828) ? __right_value828 = come_decrement_ref_count(__right_value828, ((struct sNode*)__right_value828)->finalize, ((struct sNode*)__right_value828)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__406) ? __result_obj__406 = come_decrement_ref_count(__result_obj__406, ((struct sNode*)__result_obj__406)->finalize, ((struct sNode*)__result_obj__406)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__406;
            (block_text_819 = come_decrement_ref_count(block_text_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_820 = come_decrement_ref_count(contents_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_803,"extern")) {
            node_822=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__407 = (struct sNode*)come_increment_ref_count(node_822);
            ((node_822) ? node_822 = come_decrement_ref_count(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__407) ? __result_obj__407 = come_decrement_ref_count(__result_obj__407, ((struct sNode*)__result_obj__407)->finalize, ((struct sNode*)__result_obj__407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__407;
            ((node_822) ? node_822 = come_decrement_ref_count(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_803,"string")||string_operator_equals(buf_803,"wstring"))&&*info->p==40) {
            node_823=(struct sNode*)come_increment_ref_count(parse_function_call(buf_803,info,(_Bool)0));
            info->sline_real=sline_real_802;
            __result_obj__408 = (struct sNode*)come_increment_ref_count(node_823);
            ((node_823) ? node_823 = come_decrement_ref_count(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__408) ? __result_obj__408 = come_decrement_ref_count(__result_obj__408, ((struct sNode*)__result_obj__408)->finalize, ((struct sNode*)__result_obj__408)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__408;
            ((node_823) ? node_823 = come_decrement_ref_count(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_803,"come")) {
            come_block_824=((void*)0);
            come_block_sline_825=0;
            if(            *info->p==123) {
                head_826=info->p;
                come_block_sline_825=info->sline;
                ((char*)(__right_value831=skip_block(info)));
                (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_827=info->p;
                __dec_obj206=come_block_824,
                come_block_824=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2279, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj206,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_828=tail_827-head_826;
                mem_829=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_828+1)), "05call.c", 2282, "char*"));
                memcpy(mem_829,head_826,len_828);
                mem_829[len_828]=0;
                buffer_append_str(come_block_824,mem_829);
                buffer_append_str(come_block_824,"\n");
                (mem_829 = come_decrement_ref_count(mem_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_830=info->p;
                come_block_sline_825=info->sline;
                no_output_come_code_831=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value835=expression_v13(info)));
                ((__right_value835) ? __right_value835 = come_decrement_ref_count(__right_value835, ((struct sNode*)__right_value835)->finalize, ((struct sNode*)__right_value835)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_831;
                tail_832=info->p;
                __dec_obj207=come_block_824,
                come_block_824=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2300, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj207,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_833=tail_832-head_830;
                mem_834=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_833+1)), "05call.c", 2303, "char*"));
                memcpy(mem_834,head_830,len_833);
                mem_834[len_833]=0;
                buffer_append_str(come_block_824,"{");
                buffer_append_str(come_block_824,mem_834);
                buffer_append_str(come_block_824,"; }");
                buffer_append_str(come_block_824,"return (void*)0;\n}");
                buffer_append_str(come_block_824,"\n");
                (mem_834 = come_decrement_ref_count(mem_834, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2314, "struct sNode");
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value840=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2314, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_824),come_block_sline_825,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_835=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value840,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_802;
            __result_obj__411 = (struct sNode*)come_increment_ref_count(node_835);
            /*c*/ come_call_finalizer3(come_block_824,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_835) ? node_835 = come_decrement_ref_count(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__411;
            /*c*/ come_call_finalizer3(come_block_824,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_835) ? node_835 = come_decrement_ref_count(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_803,"come_join")&&*info->p==40) {
            come_block_837=((void*)0);
            come_block_sline_838=0;
            expected_next_character(40,info);
            node_839=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_802;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2328, "struct sNode");
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value847=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2328, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_839),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result_obj__414 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value851=_inf_value12)));
            /*c*/ come_call_finalizer3(come_block_837,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_839) ? node_839 = come_decrement_ref_count(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value847,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value851) ? __right_value851 = come_decrement_ref_count(__right_value851, ((struct sNode*)__right_value851)->finalize, ((struct sNode*)__right_value851)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__414;
            /*c*/ come_call_finalizer3(come_block_837,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_839) ? node_839 = come_decrement_ref_count(node_839, ((struct sNode*)node_839)->finalize, ((struct sNode*)node_839)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_803,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_841=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_841=time_out_841*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_842=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2346, "struct list$1sNode$ph*"))));
            blocks_843=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2347, "struct list$1sBlock$ph*"))));
            else_block_844=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2348, "struct sBlock*")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj212=else_block_844,
                    else_block_844=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj212,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_845=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_846=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_842,(struct sNode*)come_increment_ref_count(var_name_845));
                    list$1sBlock$ph_add(blocks_843,(struct sBlock*)come_increment_ref_count(block_846));
                    if(                    *info->p==125) {
                        ((var_name_845) ? var_name_845 = come_decrement_ref_count(var_name_845, ((struct sNode*)var_name_845)->finalize, ((struct sNode*)var_name_845)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_846,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_845) ? var_name_845 = come_decrement_ref_count(var_name_845, ((struct sNode*)var_name_845)->finalize, ((struct sNode*)var_name_845)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_846,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_802;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2378, "struct sNode");
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value865=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2378, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_842),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_843),(struct sBlock*)come_increment_ref_count(else_block_844),time_out_841,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result_obj__438 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value910=_inf_value13)));
            /*c*/ come_call_finalizer3(vars_842,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_843,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_844,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value865,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value910) ? __right_value910 = come_decrement_ref_count(__right_value910, ((struct sNode*)__right_value910)->finalize, ((struct sNode*)__right_value910)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__438) ? __result_obj__438 = come_decrement_ref_count(__result_obj__438, ((struct sNode*)__result_obj__438)->finalize, ((struct sNode*)__result_obj__438)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__438;
            /*c*/ come_call_finalizer3(vars_842,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_843,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_844,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_803,"none")&&*info->p==40) {
            node_882=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_802;
            __result_obj__439 = (struct sNode*)come_increment_ref_count(node_882);
            ((node_882) ? node_882 = come_decrement_ref_count(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__439) ? __result_obj__439 = come_decrement_ref_count(__result_obj__439, ((struct sNode*)__result_obj__439)->finalize, ((struct sNode*)__result_obj__439)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__439;
            ((node_882) ? node_882 = come_decrement_ref_count(node_882, ((struct sNode*)node_882)->finalize, ((struct sNode*)node_882)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_803,"some")&&*info->p==40) {
            node_883=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_802;
            __result_obj__440 = (struct sNode*)come_increment_ref_count(node_883);
            ((node_883) ? node_883 = come_decrement_ref_count(node_883, ((struct sNode*)node_883)->finalize, ((struct sNode*)node_883)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__440) ? __result_obj__440 = come_decrement_ref_count(__result_obj__440, ((struct sNode*)__result_obj__440)->finalize, ((struct sNode*)__result_obj__440)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__440;
            ((node_883) ? node_883 = come_decrement_ref_count(node_883, ((struct sNode*)node_883)->finalize, ((struct sNode*)node_883)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_803,"__func__")||string_operator_equals(buf_803,"__FUNCTION__")) {
            info->sline_real=sline_real_802;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2395, "struct sNode");
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value914=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2395, "struct sFuncNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result_obj__443 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value917=_inf_value14)));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value914,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value917) ? __right_value917 = come_decrement_ref_count(__right_value917, ((struct sNode*)__right_value917)->finalize, ((struct sNode*)__right_value917)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__443) ? __result_obj__443 = come_decrement_ref_count(__result_obj__443, ((struct sNode*)__result_obj__443)->finalize, ((struct sNode*)__result_obj__443)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__443;
        }
        else if(        !gComeC&&string_operator_equals(buf_803,"wildcard")) {
            info->sline_real=sline_real_802;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2399, "struct sNode");
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value919=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2399, "struct sWildCard*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result_obj__446 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value922=_inf_value15)));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value919,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value922) ? __right_value922 = come_decrement_ref_count(__right_value922, ((struct sNode*)__right_value922)->finalize, ((struct sNode*)__right_value922)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__446) ? __result_obj__446 = come_decrement_ref_count(__result_obj__446, ((struct sNode*)__result_obj__446)->finalize, ((struct sNode*)__result_obj__446)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__446;
        }
        else if(        string_operator_equals(buf_803,"__line__")||string_operator_equals(buf_803,"__LINE__")) {
            info->sline_real=sline_real_802;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2403, "struct sNode");
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value924=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2403, "struct sLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result_obj__449 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value927=_inf_value16)));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value924,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value927) ? __right_value927 = come_decrement_ref_count(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__449) ? __result_obj__449 = come_decrement_ref_count(__result_obj__449, ((struct sNode*)__result_obj__449)->finalize, ((struct sNode*)__result_obj__449)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__449;
        }
        else if(        string_operator_equals(buf_803,"__sname__")) {
            info->sline_real=sline_real_802;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2407, "struct sNode");
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value929=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2407, "struct sSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result_obj__452 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value932=_inf_value17)));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value929,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value932) ? __right_value932 = come_decrement_ref_count(__right_value932, ((struct sNode*)__right_value932)->finalize, ((struct sNode*)__right_value932)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__452) ? __result_obj__452 = come_decrement_ref_count(__result_obj__452, ((struct sNode*)__result_obj__452)->finalize, ((struct sNode*)__result_obj__452)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__452;
        }
        else if(        string_operator_equals(buf_803,"__caller_func__")) {
            info->sline_real=sline_real_802;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2411, "struct sNode");
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value934=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2411, "struct sCallerFuncNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result_obj__455 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value937=_inf_value18)));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value934,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value937) ? __right_value937 = come_decrement_ref_count(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__455) ? __result_obj__455 = come_decrement_ref_count(__result_obj__455, ((struct sNode*)__result_obj__455)->finalize, ((struct sNode*)__result_obj__455)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__455;
        }
        else if(        string_operator_equals(buf_803,"__caller_line__")) {
            info->sline_real=sline_real_802;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2415, "struct sNode");
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value939=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2415, "struct sCallerLineNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result_obj__458 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value942=_inf_value19)));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value939,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value942) ? __right_value942 = come_decrement_ref_count(__right_value942, ((struct sNode*)__right_value942)->finalize, ((struct sNode*)__right_value942)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__458) ? __result_obj__458 = come_decrement_ref_count(__result_obj__458, ((struct sNode*)__result_obj__458)->finalize, ((struct sNode*)__result_obj__458)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__458;
        }
        else if(        string_operator_equals(buf_803,"__caller_sname__")) {
            info->sline_real=sline_real_802;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2419, "struct sNode");
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value944=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2419, "struct sCallerSNameNode*")),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result_obj__461 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value947=_inf_value20)));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value944,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value947) ? __right_value947 = come_decrement_ref_count(__right_value947, ((struct sNode*)__right_value947)->finalize, ((struct sNode*)__right_value947)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__461) ? __result_obj__461 = come_decrement_ref_count(__result_obj__461, ((struct sNode*)__result_obj__461)->finalize, ((struct sNode*)__result_obj__461)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__461;
        }
        else if(        info->va_arg&&is_type_name(buf_803,info)) {
            info->p=head_800;
            info->sline=head_sline_801;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value948=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_891=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_892=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_893=multiple_assign_var33->v3;
            /*c*/ come_call_finalizer3(__right_value948,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_802;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2428, "struct sNode");
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value950=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2428, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_891),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result_obj__464 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value954=_inf_value21)));
            /*c*/ come_call_finalizer3(type_891,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_892 = come_decrement_ref_count(name_892, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value950,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value954) ? __right_value954 = come_decrement_ref_count(__right_value954, ((struct sNode*)__right_value954)->finalize, ((struct sNode*)__right_value954)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__464) ? __result_obj__464 = come_decrement_ref_count(__result_obj__464, ((struct sNode*)__result_obj__464)->finalize, ((struct sNode*)__result_obj__464)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__464;
            /*c*/ come_call_finalizer3(type_891,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_892 = come_decrement_ref_count(name_892, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_803,"sizeof")||string_operator_equals(buf_803,"_Alignof")||string_operator_equals(buf_803,"_Alignas")||string_operator_equals(buf_803,"__alignof__")) {
            node_895=(struct sNode*)come_increment_ref_count(string_node_v21(buf_803,head_800,head_sline_801,info));
            info->sline_real=sline_real_802;
            __result_obj__465 = (struct sNode*)come_increment_ref_count(node_895);
            ((node_895) ? node_895 = come_decrement_ref_count(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__465) ? __result_obj__465 = come_decrement_ref_count(__result_obj__465, ((struct sNode*)__result_obj__465)->finalize, ((struct sNode*)__result_obj__465)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__465;
            ((node_895) ? node_895 = come_decrement_ref_count(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_814) {
            buf2_896=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2437, "struct buffer*"))));
            if(            *info->p!=40) {
                word_897=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_896,word_897);
                (word_897 = come_decrement_ref_count(word_897, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_896,40);
            exps_898=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2448, "struct list$1sNode$ph*"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_896,40);
                    info->p++;
                    exp_899=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_898,(struct sNode*)come_increment_ref_count(exp_899));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_896,41);
                    ((exp_899) ? exp_899 = come_decrement_ref_count(exp_899, ((struct sNode*)exp_899)->finalize, ((struct sNode*)exp_899)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_896,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_896,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value962=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_900=multiple_assign_var34->v1;
                    Err_901=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_901)?(puts(Err_901),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value962,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_901 = come_decrement_ref_count(Err_901, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_896,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_802;
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2485, "struct sNode");
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value965=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2485, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_896)),(struct list$1sNode$ph*)come_increment_ref_count(exps_898),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result_obj__468 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value970=_inf_value22)));
            /*c*/ come_call_finalizer3(buf2_896,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_898,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value965,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value970) ? __right_value970 = come_decrement_ref_count(__right_value970, ((struct sNode*)__right_value970)->finalize, ((struct sNode*)__right_value970)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__468) ? __result_obj__468 = come_decrement_ref_count(__result_obj__468, ((struct sNode*)__result_obj__468)->finalize, ((struct sNode*)__result_obj__468)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__468;
            /*c*/ come_call_finalizer3(buf2_896,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_898,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_810) {
            fun_name_903=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2488, "struct buffer*"))));
            buffer_append_str(fun_name_903,buf_803);
            type_904=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value974=map$2char$phsType$ph$p_operator_load_element(info->types,((char*)(__right_value973=buffer_to_string(fun_name_903))))))));
            (__right_value973 = come_decrement_ref_count(__right_value973, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value974,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_904==((void*)0)) {
                klass_908=((struct sClass*)(__right_value977=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value976=buffer_to_string(fun_name_903))))));
                (__right_value976 = come_decrement_ref_count(__right_value976, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value977,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_908) {
                    __dec_obj241=type_904,
                    type_904=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2498, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_803)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj241,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value981=err_msg(info,"null type(%s)",buf_803)));
                    come_exception_var_c5_909=multiple_assign_var35->v1;
                    Err_910=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_910)?(puts(Err_910),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value981,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_910 = come_decrement_ref_count(Err_910, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_904->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_903,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_903,"_");
            buf2_911=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_903,buf2_911);
            node_912=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value983=buffer_to_string(fun_name_903))),info,(_Bool)0));
            (__right_value983 = come_decrement_ref_count(__right_value983, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_802;
            __result_obj__473 = (struct sNode*)come_increment_ref_count(node_912);
            /*c*/ come_call_finalizer3(fun_name_903,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_904,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_911 = come_decrement_ref_count(buf2_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_912) ? node_912 = come_decrement_ref_count(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__473) ? __result_obj__473 = come_decrement_ref_count(__result_obj__473, ((struct sNode*)__result_obj__473)->finalize, ((struct sNode*)__result_obj__473)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__473;
            /*c*/ come_call_finalizer3(fun_name_903,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_904,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_911 = come_decrement_ref_count(buf2_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_912) ? node_912 = come_decrement_ref_count(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_913=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2533, "struct buffer*"))));
            buffer_append_str(fun_name_913,buf_803);
            buffer_append_str(fun_name_913,"_");
            buf2_914=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_913,buf2_914);
            node_915=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value988=buffer_to_string(fun_name_913))),info,(_Bool)0));
            (__right_value988 = come_decrement_ref_count(__right_value988, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_802;
            __result_obj__474 = (struct sNode*)come_increment_ref_count(node_915);
            /*c*/ come_call_finalizer3(fun_name_913,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_914 = come_decrement_ref_count(buf2_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_915) ? node_915 = come_decrement_ref_count(node_915, ((struct sNode*)node_915)->finalize, ((struct sNode*)node_915)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__474) ? __result_obj__474 = come_decrement_ref_count(__result_obj__474, ((struct sNode*)__result_obj__474)->finalize, ((struct sNode*)__result_obj__474)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__474;
            /*c*/ come_call_finalizer3(fun_name_913,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_914 = come_decrement_ref_count(buf2_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_915) ? node_915 = come_decrement_ref_count(node_915, ((struct sNode*)node_915)->finalize, ((struct sNode*)node_915)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_812) {
            node_916=(struct sNode*)come_increment_ref_count(parse_function_call(buf_803,info,(_Bool)0));
            info->sline_real=sline_real_802;
            __result_obj__475 = (struct sNode*)come_increment_ref_count(node_916);
            ((node_916) ? node_916 = come_decrement_ref_count(node_916, ((struct sNode*)node_916)->finalize, ((struct sNode*)node_916)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__475) ? __result_obj__475 = come_decrement_ref_count(__result_obj__475, ((struct sNode*)__result_obj__475)->finalize, ((struct sNode*)__result_obj__475)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__475;
            ((node_916) ? node_916 = come_decrement_ref_count(node_916, ((struct sNode*)node_916)->finalize, ((struct sNode*)node_916)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_806&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__804)) {
            node_917=(struct sNode*)come_increment_ref_count(parse_function_call(buf_803,info,(_Bool)0));
            info->sline_real=sline_real_802;
            __result_obj__476 = (struct sNode*)come_increment_ref_count(node_917);
            ((node_917) ? node_917 = come_decrement_ref_count(node_917, ((struct sNode*)node_917)->finalize, ((struct sNode*)node_917)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__476) ? __result_obj__476 = come_decrement_ref_count(__result_obj__476, ((struct sNode*)__result_obj__476)->finalize, ((struct sNode*)__result_obj__476)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__476;
            ((node_917) ? node_917 = come_decrement_ref_count(node_917, ((struct sNode*)node_917)->finalize, ((struct sNode*)node_917)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_918=(struct sNode*)come_increment_ref_count(string_node_v21(buf_803,head_800,head_sline_801,info));
            info->sline_real=sline_real_802;
            __result_obj__477 = (struct sNode*)come_increment_ref_count(node_918);
            ((node_918) ? node_918 = come_decrement_ref_count(node_918, ((struct sNode*)node_918)->finalize, ((struct sNode*)node_918)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__477) ? __result_obj__477 = come_decrement_ref_count(__result_obj__477, ((struct sNode*)__result_obj__477)->finalize, ((struct sNode*)__result_obj__477)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__477;
            ((node_918) ? node_918 = come_decrement_ref_count(node_918, ((struct sNode*)node_918)->finalize, ((struct sNode*)node_918)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_803 = come_decrement_ref_count(buf_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_919=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__478 = (struct sNode*)come_increment_ref_count(node_919);
        ((node_919) ? node_919 = come_decrement_ref_count(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__478) ? __result_obj__478 = come_decrement_ref_count(__result_obj__478, ((struct sNode*)__result_obj__478)->finalize, ((struct sNode*)__result_obj__478)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__478;
        ((node_919) ? node_919 = come_decrement_ref_count(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value994=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_exception_var_c6_920=multiple_assign_var36->v1;
    Err_921=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_921)?(puts(Err_921),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value994,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__479 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (Err_921 = come_decrement_ref_count(Err_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__479) ? __result_obj__479 = come_decrement_ref_count(__result_obj__479, ((struct sNode*)__result_obj__479)->finalize, ((struct sNode*)__result_obj__479)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__479;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__404;
void* __right_value825 = (void*)0;
struct sOutputNode* result_821;
void* __right_value826 = (void*)0;
char* __dec_obj204;
void* __right_value827 = (void*)0;
char* __dec_obj205;
struct sOutputNode* __result_obj__405;
    if(    self==(void*)0) {
        __result_obj__404 = (void*)0;
        return __result_obj__404;
    }
    result_821=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_821->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj204=result_821->sname,
        result_821->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_821->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj205=result_821->contents,
        result_821->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__405 = result_821;
    /*c*/ come_call_finalizer3(result_821,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__405;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__409;
void* __right_value841 = (void*)0;
struct sComeCallNode* result_836;
void* __right_value842 = (void*)0;
char* __dec_obj208;
void* __right_value843 = (void*)0;
struct buffer* __dec_obj209;
struct sComeCallNode* __result_obj__410;
    if(    self==(void*)0) {
        __result_obj__409 = (void*)0;
        return __result_obj__409;
    }
    result_836=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_836->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj208=result_836->sname,
        result_836->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_836->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj209=result_836->come_block,
        result_836->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj209,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_836->come_block_sline=self->come_block_sline;
    }
    __result_obj__410 = result_836;
    /*c*/ come_call_finalizer3(result_836,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__410;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__412;
void* __right_value848 = (void*)0;
struct sComeJoinNode* result_840;
void* __right_value849 = (void*)0;
char* __dec_obj210;
void* __right_value850 = (void*)0;
struct sNode* __dec_obj211;
struct sComeJoinNode* __result_obj__413;
    if(    self==(void*)0) {
        __result_obj__412 = (void*)0;
        return __result_obj__412;
    }
    result_840=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_840->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_840->sname,
        result_840->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_840->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj211=result_840->node,
        result_840->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__413 = result_840;
    /*c*/ come_call_finalizer3(result_840,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__413;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__415;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__415 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__415,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__415;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value861 = (void*)0;
struct list_item$1sBlock$ph* litem_847;
struct sBlock* __dec_obj213;
void* __right_value862 = (void*)0;
struct list_item$1sBlock$ph* litem_848;
struct sBlock* __dec_obj214;
void* __right_value863 = (void*)0;
struct list_item$1sBlock$ph* litem_849;
struct sBlock* __dec_obj215;
struct list$1sBlock$ph* __result_obj__416;
    if(    self->len==0) {
        litem_847=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value861=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1035, "struct list_item$1sBlock$ph*"))));
        litem_847->prev=((void*)0);
        litem_847->next=((void*)0);
        __dec_obj213=litem_847->item,
        litem_847->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj213,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_847;
        self->head=litem_847;
    }
    else if(    self->len==1) {
        litem_848=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value862=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1045, "struct list_item$1sBlock$ph*"))));
        litem_848->prev=self->head;
        litem_848->next=((void*)0);
        __dec_obj214=litem_848->item,
        litem_848->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj214,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_848;
        self->head->next=litem_848;
    }
    else {
        litem_849=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value863=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1055, "struct list_item$1sBlock$ph*"))));
        litem_849->prev=self->tail;
        litem_849->next=((void*)0);
        __dec_obj215=litem_849->item,
        litem_849->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj215,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_849;
        self->tail=litem_849;
    }
    self->len++;
    __result_obj__416 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__416;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__417;
void* __right_value866 = (void*)0;
struct sComePollNode* result_850;
void* __right_value867 = (void*)0;
char* __dec_obj216;
void* __right_value868 = (void*)0;
struct list$1sNode$ph* __dec_obj217;
void* __right_value908 = (void*)0;
struct list$1sBlock$ph* __dec_obj227;
void* __right_value909 = (void*)0;
struct sBlock* __dec_obj228;
struct sComePollNode* __result_obj__437;
    if(    self==(void*)0) {
        __result_obj__417 = (void*)0;
        return __result_obj__417;
    }
    result_850=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_850->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj216=result_850->sname,
        result_850->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_850->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj217=result_850->vars,
        result_850->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        /*b*/ come_call_finalizer3(__dec_obj217,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj227=result_850->blocks,
        result_850->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj227,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj228=result_850->else_block,
        result_850->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj228,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_850->time_out=self->time_out;
    }
    __result_obj__437 = result_850;
    /*c*/ come_call_finalizer3(result_850,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__437;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__418;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct list$1sBlock$ph* result_851;
struct list_item$1sBlock$ph* it_852;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1sBlock$ph* __result_obj__436;
    if(    self==((void*)0)) {
        __result_obj__418 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__418,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__418;
    }
    result_851=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1016, "struct list$1sBlock$ph*"))));
    it_852=self->head;
    while(it_852!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_851,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_852->item)));
        }
        else {
            list$1sBlock$ph_add(result_851,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_852->item)));
        }
        it_852=it_852->next;
    }
    __result_obj__436 = (struct list$1sBlock$ph*)come_increment_ref_count(result_851);
    /*c*/ come_call_finalizer3(result_851,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__436,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__436;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__419;
void* __right_value871 = (void*)0;
struct sBlock* result_853;
void* __right_value876 = (void*)0;
struct list$1sNode$ph* __dec_obj218;
void* __right_value905 = (void*)0;
struct sVarTable* __dec_obj226;
struct sBlock* __result_obj__435;
    if(    self==(void*)0) {
        __result_obj__419 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__419,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__419;
    }
    result_853=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj218=result_853->mNodes,
        result_853->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj218,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj226=result_853->mVarTable,
        result_853->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj226,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_853->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__435 = (struct sBlock*)come_increment_ref_count(result_853);
    /*c*/ come_call_finalizer3(result_853,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__435,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__435;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__420;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct list$1sNode$ph* result_854;
struct list_item$1sNode$ph* it_855;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1sNode$ph* __result_obj__421;
    if(    self==((void*)0)) {
        __result_obj__420 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__420,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__420;
    }
    result_854=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1016, "struct list$1sNode$ph*"))));
    it_855=self->head;
    while(it_855!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_854,(struct sNode*)come_increment_ref_count(sNode_clone(it_855->item)));
        }
        else {
            list$1sNode$ph_add(result_854,(struct sNode*)come_increment_ref_count(sNode_clone(it_855->item)));
        }
        it_855=it_855->next;
    }
    __result_obj__421 = (struct list$1sNode$ph*)come_increment_ref_count(result_854);
    /*c*/ come_call_finalizer3(result_854,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__421,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__421;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__422;
void* __right_value877 = (void*)0;
struct sVarTable* result_856;
void* __right_value904 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj225;
struct sVarTable* __result_obj__434;
    if(    self==(void*)0) {
        __result_obj__422 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__422,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__422;
    }
    result_856=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj225=result_856->mVars,
        result_856->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj225,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_856->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_856->mParent=self->mParent;
    }
    __result_obj__434 = (struct sVarTable*)come_increment_ref_count(result_856);
    /*c*/ come_call_finalizer3(result_856,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__434,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__434;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__423;
void* __right_value878 = (void*)0;
void* __right_value884 = (void*)0;
struct map$2char$phsVar$ph* result_858;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct list$1char$ph* __dec_obj220;
char* it_859;
struct sVar* default_value_860;
void* __right_value887 = (void*)0;
struct sVar* it2_863;
void* __right_value893 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__433;
default_value_860 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__423 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__423,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__423;
    }
    result_858=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1991, "struct map$2char$phsVar$ph*"))));
    __dec_obj220=result_858->key_list,
    result_858->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1993, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj220,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_859=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_859=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_860,0,sizeof(struct sVar*));
        it2_863=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_859,(struct sVar*)come_increment_ref_count(default_value_860)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_858,(char*)come_increment_ref_count((char*)come_memdup(it_859, "./comelang.h", 2002, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_863)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_858,(char*)come_increment_ref_count((char*)come_memdup(it_859, "./comelang.h", 2005, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_863)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_858,(char*)come_increment_ref_count(it_859),(struct sVar*)come_increment_ref_count(sVar_clone(it2_863)));
        }
        else {
            map$2char$phsVar$ph_put(result_858,(char*)come_increment_ref_count(it_859),(struct sVar*)come_increment_ref_count(sVar_clone(it2_863)));
        }
        /*c*/ come_call_finalizer3(default_value_860,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_863,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__433 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_858);
    /*c*/ come_call_finalizer3(result_858,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__433,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__433;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
int i_857;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct list$1char$ph* __dec_obj219;
struct map$2char$phsVar$ph* __result_obj__425;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value879=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1920, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value880=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1921, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value881=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1922, "_Bool*"))));
    for(    i_857=0;    i_857<128;    i_857++    ){
        self->item_existance[i_857]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj219=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1932, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj219,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__425 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__425,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__425;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__424;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__424 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__424,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__424;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_861;
unsigned int it_862;
struct sVar* __result_obj__426;
struct sVar* __result_obj__427;
struct sVar* __result_obj__428;
struct sVar* __result_obj__429;
    hash_861=string_get_hash_key(((char*)key))%self->size;
    it_862=hash_861;
    while((_Bool)1) {
        if(        self->item_existance[it_862]) {
            if(            string_equals(self->keys[it_862],key)) {
                __result_obj__426 = (struct sVar*)come_increment_ref_count(self->items[it_862]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__426,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__426;
            }
            it_862++;
            if(            it_862>=self->size) {
                it_862=0;
            }
            else if(            it_862==hash_861) {
                __result_obj__427 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__427,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__427;
            }
        }
        else {
            __result_obj__428 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__428,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__428;
        }
    }
    __result_obj__429 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__429,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__429;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_875;
int it_876;
_Bool same_key_exist_877;
char* it2_878;
struct map$2char$phsVar$ph* __result_obj__430;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_875=string_get_hash_key(((char*)key))%self->size;
    it_876=hash_875;
    while((_Bool)1) {
        if(        self->item_existance[it_876]) {
            if(            string_equals(self->keys[it_876],key)) {
                if(                1) {
                    (self->keys[it_876] = come_decrement_ref_count(self->keys[it_876], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_876]);
                    self->keys[it_876]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_876]);
                    self->keys[it_876]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_876],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_876]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_876]=item;
                }
                break;
            }
            it_876++;
            if(            it_876>=self->size) {
                it_876=0;
            }
            else if(            it_876==hash_875) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_876]=(_Bool)1;
            if(            1) {
                self->keys[it_876]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_876]=key;
            }
            if(            1) {
                self->items[it_876]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_876]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_877=(_Bool)0;
    for(    it2_878=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_878=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_878,key)) {
            same_key_exist_877=(_Bool)1;
        }
    }
    if(    !same_key_exist_877) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__430 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__430;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_864;
void* __right_value888 = (void*)0;
char** keys_865;
void* __right_value889 = (void*)0;
struct sVar** items_866;
void* __right_value890 = (void*)0;
_Bool* item_existance_867;
int len_868;
char* it_869;
struct sVar* default_value_870;
void* __right_value891 = (void*)0;
struct sVar* it2_871;
unsigned int hash_872;
int n_873;
struct sVar* default_value_874;
void* __right_value892 = (void*)0;
default_value_870 = (void*)0;
default_value_874 = (void*)0;
    size_864=self->size*10;
    keys_865=(char**)come_increment_ref_count(((char**)(__right_value888=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_864)), "./comelang.h", 2159, "char**"))));
    items_866=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value889=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_864)), "./comelang.h", 2160, "struct sVar**"))));
    item_existance_867=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value890=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_864)), "./comelang.h", 2161, "_Bool*"))));
    len_868=0;
    for(    it_869=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_869=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_870,0,sizeof(struct sVar*));
        it2_871=((struct sVar*)(__right_value891=map$2char$phsVar$ph_at(self,it_869,(struct sVar*)come_increment_ref_count(default_value_870))));
        /*c*/ come_call_finalizer3(__right_value891,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_872=string_get_hash_key(((char*)it_869))%size_864;
        n_873=hash_872;
        while((_Bool)1) {
            if(            item_existance_867[n_873]) {
                n_873++;
                if(                n_873>=size_864) {
                    n_873=0;
                }
                else if(                n_873==hash_872) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_867[n_873]=(_Bool)1;
                keys_865[n_873]=it_869;
                items_866[n_873]=((struct sVar*)(__right_value892=map$2char$phsVar$ph_at(self,it_869,(struct sVar*)come_increment_ref_count(default_value_874))));
                /*c*/ come_call_finalizer3(__right_value892,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_868++;
                /*c*/ come_call_finalizer3(default_value_874,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_874,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_870,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_865;
    self->items=items_866;
    self->item_existance=item_existance_867;
    self->size=size_864;
    self->len=len_868;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__431;
void* __right_value894 = (void*)0;
struct sVar* result_879;
void* __right_value895 = (void*)0;
char* __dec_obj221;
void* __right_value896 = (void*)0;
char* __dec_obj222;
void* __right_value897 = (void*)0;
struct sType* __dec_obj223;
void* __right_value898 = (void*)0;
char* __dec_obj224;
struct sVar* __result_obj__432;
    if(    self==(void*)0) {
        __result_obj__431 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__431,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__431;
    }
    result_879=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj221=result_879->mName,
        result_879->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj222=result_879->mCValueName,
        result_879->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj223=result_879->mType,
        result_879->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj223,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_879->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_879->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_879->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj224=result_879->mFunName,
        result_879->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__432 = (struct sVar*)come_increment_ref_count(result_879);
    /*c*/ come_call_finalizer3(result_879,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__432,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__432;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_880;
int i_881;
    for(    i_880=0;    i_880<self->size;    i_880++    ){
        if(        self->item_existance[i_880]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_880],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_881=0;    i_881<self->size;    i_881++    ){
        if(        self->item_existance[i_881]) {
            if(            1) {
                (self->keys[i_881] = come_decrement_ref_count(self->keys[i_881], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__441;
void* __right_value915 = (void*)0;
struct sFuncNode* result_884;
void* __right_value916 = (void*)0;
char* __dec_obj229;
struct sFuncNode* __result_obj__442;
    if(    self==(void*)0) {
        __result_obj__441 = (void*)0;
        return __result_obj__441;
    }
    result_884=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_884->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj229=result_884->sname,
        result_884->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_884->sline_real=self->sline_real;
    }
    __result_obj__442 = result_884;
    /*c*/ come_call_finalizer3(result_884,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__442;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__444;
void* __right_value920 = (void*)0;
struct sWildCard* result_885;
void* __right_value921 = (void*)0;
char* __dec_obj230;
struct sWildCard* __result_obj__445;
    if(    self==(void*)0) {
        __result_obj__444 = (void*)0;
        return __result_obj__444;
    }
    result_885=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_885->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_885->sname,
        result_885->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_885->sline_real=self->sline_real;
    }
    __result_obj__445 = result_885;
    /*c*/ come_call_finalizer3(result_885,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__445;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__447;
void* __right_value925 = (void*)0;
struct sLineNode* result_886;
void* __right_value926 = (void*)0;
char* __dec_obj231;
struct sLineNode* __result_obj__448;
    if(    self==(void*)0) {
        __result_obj__447 = (void*)0;
        return __result_obj__447;
    }
    result_886=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_886->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj231=result_886->sname,
        result_886->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_886->sline_real=self->sline_real;
    }
    __result_obj__448 = result_886;
    /*c*/ come_call_finalizer3(result_886,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__448;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__450;
void* __right_value930 = (void*)0;
struct sSNameNode* result_887;
void* __right_value931 = (void*)0;
char* __dec_obj232;
struct sSNameNode* __result_obj__451;
    if(    self==(void*)0) {
        __result_obj__450 = (void*)0;
        return __result_obj__450;
    }
    result_887=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_887->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_887->sname,
        result_887->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_887->sline_real=self->sline_real;
    }
    __result_obj__451 = result_887;
    /*c*/ come_call_finalizer3(result_887,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__451;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__453;
void* __right_value935 = (void*)0;
struct sCallerFuncNode* result_888;
void* __right_value936 = (void*)0;
char* __dec_obj233;
struct sCallerFuncNode* __result_obj__454;
    if(    self==(void*)0) {
        __result_obj__453 = (void*)0;
        return __result_obj__453;
    }
    result_888=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_888->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_888->sname,
        result_888->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_888->sline_real=self->sline_real;
    }
    __result_obj__454 = result_888;
    /*c*/ come_call_finalizer3(result_888,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__454;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__456;
void* __right_value940 = (void*)0;
struct sCallerLineNode* result_889;
void* __right_value941 = (void*)0;
char* __dec_obj234;
struct sCallerLineNode* __result_obj__457;
    if(    self==(void*)0) {
        __result_obj__456 = (void*)0;
        return __result_obj__456;
    }
    result_889=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_889->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_889->sname,
        result_889->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_889->sline_real=self->sline_real;
    }
    __result_obj__457 = result_889;
    /*c*/ come_call_finalizer3(result_889,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__457;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__459;
void* __right_value945 = (void*)0;
struct sCallerSNameNode* result_890;
void* __right_value946 = (void*)0;
char* __dec_obj235;
struct sCallerSNameNode* __result_obj__460;
    if(    self==(void*)0) {
        __result_obj__459 = (void*)0;
        return __result_obj__459;
    }
    result_890=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_890->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj235=result_890->sname,
        result_890->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_890->sline_real=self->sline_real;
    }
    __result_obj__460 = result_890;
    /*c*/ come_call_finalizer3(result_890,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__460;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__462;
void* __right_value951 = (void*)0;
struct sVarArgTypeName* result_894;
void* __right_value952 = (void*)0;
char* __dec_obj236;
void* __right_value953 = (void*)0;
struct sType* __dec_obj237;
struct sVarArgTypeName* __result_obj__463;
    if(    self==(void*)0) {
        __result_obj__462 = (void*)0;
        return __result_obj__462;
    }
    result_894=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_894->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_894->sname,
        result_894->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_894->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj237=result_894->type,
        result_894->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj237,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__463 = result_894;
    /*c*/ come_call_finalizer3(result_894,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__463;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__466;
void* __right_value966 = (void*)0;
struct sInlineAssembler* result_902;
void* __right_value967 = (void*)0;
char* __dec_obj238;
void* __right_value968 = (void*)0;
char* __dec_obj239;
void* __right_value969 = (void*)0;
struct list$1sNode$ph* __dec_obj240;
struct sInlineAssembler* __result_obj__467;
    if(    self==(void*)0) {
        __result_obj__466 = (void*)0;
        return __result_obj__466;
    }
    result_902=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_902->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj238=result_902->sname,
        result_902->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_902->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj239=result_902->source,
        result_902->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj240=result_902->exps,
        result_902->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj240,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__467 = result_902;
    /*c*/ come_call_finalizer3(result_902,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__467;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_905;
unsigned int hash_906;
unsigned int it_907;
struct sType* __result_obj__469;
struct sType* __result_obj__470;
struct sType* __result_obj__471;
struct sType* __result_obj__472;
default_value_905 = (void*)0;
    memset(&default_value_905,0,sizeof(struct sType*));
    hash_906=string_get_hash_key(((char*)key))%self->size;
    it_907=hash_906;
    while((_Bool)1) {
        if(        self->item_existance[it_907]) {
            if(            string_equals(self->keys[it_907],key)) {
                __result_obj__469 = (struct sType*)come_increment_ref_count(self->items[it_907]);
                /*c*/ come_call_finalizer3(default_value_905,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__469,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__469;
            }
            it_907++;
            if(            it_907>=self->size) {
                it_907=0;
            }
            else if(            it_907==hash_906) {
                __result_obj__470 = (struct sType*)come_increment_ref_count(default_value_905);
                /*c*/ come_call_finalizer3(default_value_905,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__470,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__470;
            }
        }
        else {
            __result_obj__471 = (struct sType*)come_increment_ref_count(default_value_905);
            /*c*/ come_call_finalizer3(default_value_905,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__471,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__471;
        }
    }
    __result_obj__472 = (struct sType*)come_increment_ref_count(default_value_905);
    /*c*/ come_call_finalizer3(default_value_905,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__472,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__472;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value995 = (void*)0;
struct sNode* __result_obj__480;
    __result_obj__480 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value995=expression_node_v99(info))));
    ((__right_value995) ? __right_value995 = come_decrement_ref_count(__right_value995, ((struct sNode*)__right_value995)->finalize, ((struct sNode*)__right_value995)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__480) ? __result_obj__480 = come_decrement_ref_count(__result_obj__480, ((struct sNode*)__result_obj__480)->finalize, ((struct sNode*)__result_obj__480)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__480;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sNode* __dec_obj242;
struct sNode* __result_obj__481;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sNode* __dec_obj243;
struct sNode* __result_obj__482;
struct sNode* __result_obj__483;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj242=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__481 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__481) ? __result_obj__481 = come_decrement_ref_count(__result_obj__481, ((struct sNode*)__result_obj__481)->finalize, ((struct sNode*)__result_obj__481)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__481;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj243=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__482 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__482) ? __result_obj__482 = come_decrement_ref_count(__result_obj__482, ((struct sNode*)__result_obj__482)->finalize, ((struct sNode*)__result_obj__482)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__482;
    }
    __result_obj__483 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__483) ? __result_obj__483 = come_decrement_ref_count(__result_obj__483, ((struct sNode*)__result_obj__483)->finalize, ((struct sNode*)__result_obj__483)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__483;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1000 = (void*)0;
struct sNode* node_922;
void* __right_value1001 = (void*)0;
struct sNode* __dec_obj244;
struct sNode* __result_obj__484;
    node_922=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj244=node_922,
    node_922=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_922),info));
    (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__484 = (struct sNode*)come_increment_ref_count(node_922);
    ((node_922) ? node_922 = come_decrement_ref_count(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__484) ? __result_obj__484 = come_decrement_ref_count(__result_obj__484, ((struct sNode*)__result_obj__484)->finalize, ((struct sNode*)__result_obj__484)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__484;
}

char* get_none_generics_name(char* class_name){
char* p_923;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
char* __result_obj__485;
void* __right_value1004 = (void*)0;
char* __result_obj__486;
    p_923=class_name;
    while(*p_923) {
        if(        *p_923==36) {
            __result_obj__485 = (char*)come_increment_ref_count(((char*)(__right_value1003=charp_substring(((char*)(__right_value1002=__builtin_string(class_name))),0,p_923-class_name))));
            (__right_value1002 = come_decrement_ref_count(__right_value1002, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1003 = come_decrement_ref_count(__right_value1003, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__485 = come_decrement_ref_count(__result_obj__485, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__485;
        }
        else {
            p_923++;
        }
    }
    __result_obj__486 = (char*)come_increment_ref_count(((char*)(__right_value1004=__builtin_string(class_name))));
    (__right_value1004 = come_decrement_ref_count(__right_value1004, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__486 = come_decrement_ref_count(__result_obj__486, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__486;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct buffer* buf_924;
struct sClass* klass_925;
char* class_name_926;
int i_927;
void* __right_value1007 = (void*)0;
struct sType* type_928;
void* __right_value1008 = (void*)0;
char* type_name_929;
int i_930;
void* __right_value1009 = (void*)0;
char* __result_obj__487;
    buf_924=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2633, "struct buffer*"))));
    klass_925=generics_type->mClass;
    class_name_926=klass_925->mName;
    buffer_append_str(buf_924,class_name_926);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_924,36);
        buffer_append_char(buf_924,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_927=0;        i_927<list$1sType$ph_length(generics_type->mGenericsTypes);        i_927++        ){
            type_928=((struct sType*)(__right_value1007=list$1sType$ph$p_operator_load_element(generics_type->mGenericsTypes,i_927)));
            /*c*/ come_call_finalizer3(__right_value1007,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_929=(char*)come_increment_ref_count(create_generics_name(type_928,info));
            buffer_append_str(buf_924,type_name_929);
            buffer_append_char(buf_924,36);
            for(            i_930=0;            i_930<type_928->mPointerNum;            i_930++            ){
                buffer_append_char(buf_924,112);
            }
            if(            type_928->mHeap) {
                buffer_append_str(buf_924,"h");
            }
            (type_name_929 = come_decrement_ref_count(type_name_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__487 = (char*)come_increment_ref_count(((char*)(__right_value1009=buffer_to_string(buf_924))));
    /*c*/ come_call_finalizer3(buf_924,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1009 = come_decrement_ref_count(__right_value1009, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__487 = come_decrement_ref_count(__result_obj__487, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__487;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_931;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct buffer* buf_932;
void* __right_value1012 = (void*)0;
char* __dec_obj245;
int i_933;
void* __right_value1013 = (void*)0;
char* __dec_obj246;
void* __right_value1014 = (void*)0;
char* __dec_obj247;
int i_934;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
char* __result_obj__488;
struct_name_931 = (void*)0;
    buf_932=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2668, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj245=struct_name_931,
        struct_name_931=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_932,"$");
            }
            for(            i_933=0;            i_933<obj_type->mOriginalTypeNamePointerNum;            i_933++            ){
                buffer_append_str(buf_932,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj246=struct_name_931,
        struct_name_931=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj247=struct_name_931,
        struct_name_931=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_932,"$");
        }
        for(        i_934=0;        i_934<obj_type->mPointerNum;        i_934++        ){
            buffer_append_str(buf_932,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_932,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_932,"pa");
    }
    __result_obj__488 = (char*)come_increment_ref_count(((char*)(__right_value1016=xsprintf("%s%s_%s",struct_name_931,((char*)(__right_value1015=buffer_to_string(buf_932))),fun_name))));
    (struct_name_931 = come_decrement_ref_count(struct_name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_932,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1015 = come_decrement_ref_count(__right_value1015, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1016 = come_decrement_ref_count(__right_value1016, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__488 = come_decrement_ref_count(__result_obj__488, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__488;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_935;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct buffer* buf_936;
void* __right_value1019 = (void*)0;
char* __dec_obj248;
void* __right_value1020 = (void*)0;
char* __dec_obj249;
int i_937;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
char* __result_obj__489;
struct_name_935 = (void*)0;
    buf_936=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2709, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj248=struct_name_935,
        struct_name_935=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj249=struct_name_935,
        struct_name_935=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_936,"$");
        }
        for(        i_937=0;        i_937<obj_type->mPointerNum;        i_937++        ){
            buffer_append_str(buf_936,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_936,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_936,"pa");
    }
    __result_obj__489 = (char*)come_increment_ref_count(((char*)(__right_value1022=xsprintf("%s%s_%s",struct_name_935,((char*)(__right_value1021=buffer_to_string(buf_936))),fun_name))));
    (struct_name_935 = come_decrement_ref_count(struct_name_935, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_936,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1021 = come_decrement_ref_count(__right_value1021, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1022 = come_decrement_ref_count(__right_value1022, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__489 = come_decrement_ref_count(__result_obj__489, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__489;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_938;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct buffer* buf_939;
void* __right_value1025 = (void*)0;
char* __dec_obj250;
int i_940;
void* __right_value1026 = (void*)0;
char* __dec_obj251;
void* __right_value1027 = (void*)0;
char* __dec_obj252;
int i_941;
void* __right_value1028 = (void*)0;
int len_943;
void* __right_value1029 = (void*)0;
char* __result_obj__490;
struct_name_938 = (void*)0;
    buf_939=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2738, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj250=struct_name_938,
        struct_name_938=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        __dec_obj251=struct_name_938,
        struct_name_938=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj252=struct_name_938,
        struct_name_938=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
    char none_method_name_942[charp_length(fun_name)+1];
    memset(&none_method_name_942, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_943=string_length(struct_name_938)+string_length(((char*)(__right_value1028=buffer_to_string(buf_939))));
    (__right_value1028 = come_decrement_ref_count(__right_value1028, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_942,fun_name+len_943+1,charp_length(fun_name)-len_943-1);
    none_method_name_942[charp_length(fun_name)-len_943-1]=0;
    __result_obj__490 = (char*)come_increment_ref_count(((char*)(__right_value1029=__builtin_string(none_method_name_942))));
    (struct_name_938 = come_decrement_ref_count(struct_name_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_939,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1029 = come_decrement_ref_count(__right_value1029, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__490 = come_decrement_ref_count(__result_obj__490, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__490;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1030 = (void*)0;
char* struct_name_944;
void* __right_value1031 = (void*)0;
char* __result_obj__491;
    struct_name_944=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__491 = (char*)come_increment_ref_count(((char*)(__right_value1031=xsprintf("%s_%s",struct_name_944,fun_name))));
    (struct_name_944 = come_decrement_ref_count(struct_name_944, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1031 = come_decrement_ref_count(__right_value1031, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__491 = come_decrement_ref_count(__result_obj__491, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__491;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1032 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_945=0;
char* Err_946=0;
struct sNode* __result_obj__492;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1032=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_exception_var_c7_945=multiple_assign_var37->v1;
    Err_946=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_946)?(puts(Err_946),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value1032,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__492 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (Err_946 = come_decrement_ref_count(Err_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__492) ? __result_obj__492 = come_decrement_ref_count(__result_obj__492, ((struct sNode*)__result_obj__492)->finalize, ((struct sNode*)__result_obj__492)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__492;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_947;
char* p_948;
int sline_949;
_Bool err_flag_950;
void* __right_value1035 = (void*)0;
char* label_951;
void* __right_value1036 = (void*)0;
char* __dec_obj253;
char* __dec_obj254;
_Bool no_comma_952;
_Bool in_fun_param_953;
void* __right_value1037 = (void*)0;
struct sNode* node_954;
void* __right_value1038 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1047 = (void*)0;
struct sNode* __result_obj__495;
struct sNode* __result_obj__496;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_947=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2807, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_948=info->p;
            sline_949=info->sline;
            err_flag_950=(_Bool)0;
            label_951=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj253=label_951,
                label_951=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_950=(_Bool)1;
            }
            if(            err_flag_950==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj254=label_951,
                label_951=((void*)0);
                __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_948;
                info->sline=sline_949;
            }
            no_comma_952=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_953=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_954=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj255=node_954,
            node_954=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_954),info));
            (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_952;
            info->in_fun_param=in_fun_param_953;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_947,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2850, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_951),(struct sNode*)come_increment_ref_count(node_954))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_951 = come_decrement_ref_count(label_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_954) ? node_954 = come_decrement_ref_count(node_954, ((struct sNode*)node_954)->finalize, ((struct sNode*)node_954)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_951 = come_decrement_ref_count(label_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_954) ? node_954 = come_decrement_ref_count(node_954, ((struct sNode*)node_954)->finalize, ((struct sNode*)node_954)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2868, "struct sNode");
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1042=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2868, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_947,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result_obj__495 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1047=_inf_value23)));
        /*c*/ come_call_finalizer3(params_947,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value1042,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value1047) ? __right_value1047 = come_decrement_ref_count(__right_value1047, ((struct sNode*)__right_value1047)->finalize, ((struct sNode*)__right_value1047)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__495) ? __result_obj__495 = come_decrement_ref_count(__result_obj__495, ((struct sNode*)__result_obj__495)->finalize, ((struct sNode*)__result_obj__495)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__495;
        /*c*/ come_call_finalizer3(params_947,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__496 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__496) ? __result_obj__496 = come_decrement_ref_count(__result_obj__496, ((struct sNode*)__result_obj__496)->finalize, ((struct sNode*)__result_obj__496)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__496;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__493;
void* __right_value1043 = (void*)0;
struct sLambdaCall* result_955;
void* __right_value1044 = (void*)0;
char* __dec_obj256;
void* __right_value1045 = (void*)0;
struct sNode* __dec_obj257;
void* __right_value1046 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj258;
struct sLambdaCall* __result_obj__494;
    if(    self==(void*)0) {
        __result_obj__493 = (void*)0;
        return __result_obj__493;
    }
    result_955=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_955->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj256=result_955->sname,
        result_955->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_955->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj257=result_955->node,
        result_955->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj258=result_955->params,
        result_955->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj258,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__494 = result_955;
    /*c*/ come_call_finalizer3(result_955,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__494;
}

