/// previous struct definition ///
struct __locale_struct;

struct tm;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

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
    _Bool mExceptionGenericsType;
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
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
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
    _Bool mGenericsFun;
    _Bool mImmutable;
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

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
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
    struct map$2char$phsFun$ph* uniq_funcs;
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

struct tuple2$2int$bool$
{
    int v1;
    _Bool v2;
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
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
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
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
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
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
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
int poll(struct pollfd* anonymous_var_nameX756, unsigned long  int anonymous_var_nameX757, int anonymous_var_nameX758);
int ppoll(struct pollfd* anonymous_var_nameX759, unsigned long  int anonymous_var_nameX760, const struct timespec* anonymous_var_nameX761, const struct __sigset_t* anonymous_var_nameX762);
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
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
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
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
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
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
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
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj1;
void* __right_value1 = (void*)0;
char* __dec_obj2;
struct sReturnNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value0,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__1,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sReturnNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__2;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_0;
void* __right_value40 = (void*)0;
struct sType* result_type_1;
void* __right_value41 = (void*)0;
struct sType* result_type2_31;
struct sType* result_type3_32;
_Bool Value_33;
_Bool __result_obj__19;
void* __right_value42 = (void*)0;
struct CVALUE* come_value_34;
void* __right_value43 = (void*)0;
struct sType* come_value_type_35;
void* __right_value44 = (void*)0;
struct sType* __dec_obj26;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
char* type_name_37;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
void* __if_result__0_38 = (void*)0;
struct list$1sVar$ph* o2_saved_39;
struct sVar* it_42;
void* __right_value55 = (void*)0;
struct list$1sVar$ph* __dec_obj27;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct sFun* come_fun_49;
void* __if_result__1_50 = (void*)0;
struct list$1sVar$ph* o2_saved_51;
struct sVar* it_52;
void* __right_value61 = (void*)0;
struct list$1sVar$ph* __dec_obj28;
void* __right_value62 = (void*)0;
    if(    self->value) {
        come_fun_0=info->come_fun;
        result_type_1=(struct sType*)come_increment_ref_count(sType_clone(come_fun_0->mResultType));
        result_type2_31=(struct sType*)come_increment_ref_count(solve_generics(result_type_1,info->generics_type,info));
        result_type3_32=result_type2_31->mNoSolvedGenericsType;
        if(        result_type2_31->mNoSolvedGenericsType) {
            result_type3_32=result_type2_31->mNoSolvedGenericsType;
        }
        else {
            result_type3_32=result_type2_31;
        }
        Value_33=node_compile(self->value,info);
        if(        !Value_33) {
            __result_obj__19 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_31,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__19;
        }
        else {
        }
        come_value_34=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_35=(struct sType*)come_increment_ref_count(solve_generics(come_value_34->type,info->generics_type,info));
        __dec_obj26=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_34->type));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else {
            static int result_num_36=0;
            result_num_36++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value47=make_define_var(result_type2_31,((char*)(__right_value46=xsprintf("__result_obj__\%s",((char*)(__right_value45=int_to_string(result_num_36)))))),(_Bool)0,info))));
            (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_31->mClass->mName)>strlen("tuple")&&memcmp(result_type2_31->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_31,come_value_type_35,come_value_34,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2_31->mHeap) {
                    type_name_37=(char*)come_increment_ref_count(make_type_name_string(come_value_34->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value50=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value49=int_to_string(result_num_36)))))),type_name_37,come_value_34->c_value);
                    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_37 = come_decrement_ref_count(type_name_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value52=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value51=int_to_string(result_num_36)))))),come_value_34->c_value);
                    (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value54=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value53=int_to_string(result_num_36)))))),come_value_34->c_value);
                (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_39=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_42=list$1sVar$ph_begin((o2_saved_39));                    !list$1sVar$ph_end((o2_saved_39));                    it_42=list$1sVar$ph_next((o2_saved_39))                    ){
                        free_object(((struct sType*)(__right_value55=sType_clone(it_42->mType))),it_42->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value55,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_39,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __dec_obj27=info->match_it_var,
                    __if_result__0_38=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    /*b*/ come_call_finalizer3(__dec_obj27,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                /*c*/ come_call_finalizer3(__if_result__0_38,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value56=xsprintf("come_heap_final();\n"))));
                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_31->mHeap) {
                free_object(result_type2_31,((char*)(__right_value58=xsprintf("__result_obj__\%s",((char*)(__right_value57=int_to_string(result_num_36)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value60=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value59=int_to_string(result_num_36)))))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(result_type_1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_31,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_34,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_type_35,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_fun_49=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_49->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_51=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_52=list$1sVar$ph_begin((o2_saved_51));                !list$1sVar$ph_end((o2_saved_51));                it_52=list$1sVar$ph_next((o2_saved_51))                ){
                    free_object(((struct sType*)(__right_value61=sType_clone(it_52->mType))),it_52->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value61,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_51,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj28=info->match_it_var,
                __if_result__1_50=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                /*b*/ come_call_finalizer3(__dec_obj28,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            /*c*/ come_call_finalizer3(__if_result__1_50,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value62=xsprintf("come_heap_final();\n"))));
            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sType* __result_obj__3;
void* __right_value3 = (void*)0;
struct sType* result_8;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
void* __right_value5 = (void*)0;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list$1sType$ph* __dec_obj8;
void* __right_value14 = (void*)0;
struct sType* __dec_obj9;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value17 = (void*)0;
struct sNode* __dec_obj11;
void* __right_value18 = (void*)0;
char* __dec_obj12;
void* __right_value19 = (void*)0;
char* __dec_obj13;
void* __right_value20 = (void*)0;
char* __dec_obj14;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
void* __right_value29 = (void*)0;
char* __dec_obj19;
void* __right_value30 = (void*)0;
struct list$1sType$ph* __dec_obj20;
void* __right_value38 = (void*)0;
struct list$1char$ph* __dec_obj24;
void* __right_value39 = (void*)0;
struct sType* __dec_obj25;
struct sType* __result_obj__18;
    if(    self==(void*)0) {
        __result_obj__3 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__3,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__3;
    }
    result_8=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_8->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj3=result_8->mOriginalLoadVarType,
        result_8->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj4=result_8->mChannelType,
        result_8->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj8=result_8->mGenericsTypes,
        result_8->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj8,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj9=result_8->mNoSolvedGenericsType,
        result_8->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj9,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj10=result_8->mSizeNum,
        result_8->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj11=result_8->mAlignas,
        result_8->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj12=result_8->mTupleName,
        result_8->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj13=result_8->mAttribute,
        result_8->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_8->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_8->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_8->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_8->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_8->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_8->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_8->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_8->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_8->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_8->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_8->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_8->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_8->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_8->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_8->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_8->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_8->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_8->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_8->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_8->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_8->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_8->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj14=result_8->mAsmName,
        result_8->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_8->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_8->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj18=result_8->mArrayNum,
        result_8->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj18,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_8->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj19=result_8->mOriginalTypeName,
        result_8->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_8->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_8->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_8->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj20=result_8->mParamTypes,
        result_8->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj20,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj24=result_8->mParamNames,
        result_8->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj25=result_8->mResultType,
        result_8->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_8->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_8->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__18 = (struct sType*)come_increment_ref_count(result_8);
    /*c*/ come_call_finalizer3(result_8,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__18,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__18;
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
struct list_item$1sType$ph* it_2;
struct list_item$1sType$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)) {
        prev_it_3=it_2;
        it_2=it_2->next;
        /*c*/ come_call_finalizer3(prev_it_3,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_4;
struct list_item$1sNode$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)) {
        prev_it_5=it_4;
        it_4=it_4->next;
        /*c*/ come_call_finalizer3(prev_it_5,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_6;
struct list_item$1char$ph* prev_it_7;
    it_6=self->head;
    while(    it_6!=((void*)0)) {
        prev_it_7=it_6;
        it_6=it_6->next;
        /*c*/ come_call_finalizer3(prev_it_7,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__4;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1sType$ph* result_9;
struct list_item$1sType$ph* it_10;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __result_obj__7;
    if(    self==((void*)0)) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__4,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__4;
    }
    result_9=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_10=self->head;
    while(    it_10!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        else {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        it_10=it_10->next;
    }
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(result_9);
    /*c*/ come_call_finalizer3(result_9,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__7,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__5,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj5;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj6;
void* __right_value10 = (void*)0;
struct list_item$1sType$ph* litem_13;
struct sType* __dec_obj7;
struct list$1sType$ph* __result_obj__6;
    if(    self->len==0) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_11->prev=((void*)0);
        litem_11->next=((void*)0);
        __dec_obj5=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_11;
        self->head=litem_11;
    }
    else if(    self->len==1) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj6=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj7=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__6 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__6;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_14;
struct list_item$1sType$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)) {
        prev_it_15=it_14;
        it_14=it_14->next;
        /*c*/ come_call_finalizer3(prev_it_15,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__8;
void* __right_value15 = (void*)0;
struct sNode* result_16;
struct sNode* __result_obj__9;
    if(    self==(void*)0) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__8;
    }
    result_16=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_16->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_16->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_16->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_16->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_16->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_16->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_16->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_16->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_16->kind=self->kind;
    }
    __result_obj__9 = (struct sNode*)come_increment_ref_count(result_16);
    ((result_16) ? result_16 = come_decrement_ref_count(result_16, ((struct sNode*)result_16)->finalize, ((struct sNode*)result_16)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__10;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result_17;
struct list_item$1sNode$ph* it_18;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __result_obj__13;
    if(    self==((void*)0)) {
        __result_obj__10 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__10,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__10;
    }
    result_17=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        else {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(result_17);
    /*c*/ come_call_finalizer3(result_17,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__13,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__11,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj15;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj16;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_21;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__12;
    if(    self->len==0) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj15=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1) {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj16=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj17=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__12 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__12;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_22;
struct list_item$1sNode$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)) {
        prev_it_23=it_22;
        it_22=it_22->next;
        /*c*/ come_call_finalizer3(prev_it_23,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__14;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result_24;
struct list_item$1char$ph* it_25;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* __result_obj__17;
    if(    self==((void*)0)) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__14,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__14;
    }
    result_24=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_25=self->head;
    while(    it_25!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 1032, "char*")));
        }
        it_25=it_25->next;
    }
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(result_24);
    /*c*/ come_call_finalizer3(result_24,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__17,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__15,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj22;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_28;
char* __dec_obj23;
struct list$1char$ph* __result_obj__16;
    if(    self->len==0) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_26->prev=((void*)0);
        litem_26->next=((void*)0);
        __dec_obj21=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_26;
        self->head=litem_26;
    }
    else if(    self->len==1) {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj22=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj23=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__16 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__16;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_29;
struct list_item$1char$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)) {
        prev_it_30=it_29;
        it_29=it_29->next;
        /*c*/ come_call_finalizer3(prev_it_30,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_40;
struct sVar* __result_obj__20;
struct sVar* __result_obj__21;
struct sVar* result_41;
struct sVar* __result_obj__22;
result_40 = (void*)0;
result_41 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_40,0,sizeof(struct sVar*));
        __result_obj__20 = result_40;
        return __result_obj__20;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_41,0,sizeof(struct sVar*));
    __result_obj__22 = result_41;
    return __result_obj__22;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_43;
struct sVar* __result_obj__23;
struct sVar* __result_obj__24;
struct sVar* result_44;
struct sVar* __result_obj__25;
result_43 = (void*)0;
result_44 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_43,0,sizeof(struct sVar*));
        __result_obj__23 = result_43;
        return __result_obj__23;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__24 = self->it->item;
        return __result_obj__24;
    }
    memset(&result_44,0,sizeof(struct sVar*));
    __result_obj__25 = result_44;
    return __result_obj__25;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_45;
struct list_item$1sVar$ph* prev_it_46;
    it_45=self->head;
    while(    it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        /*c*/ come_call_finalizer3(prev_it_46,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sVar$ph* it_47;
struct list_item$1sVar$ph* prev_it_48;
    it_47=self->head;
    while(    it_47!=((void*)0)) {
        prev_it_48=it_47;
        it_47=it_47->next;
        /*c*/ come_call_finalizer3(prev_it_48,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value63 = (void*)0;
char* __dec_obj29;
struct sOutputNode* __result_obj__26;
    ((struct sNodeBase*)(__right_value63=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value63,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj29=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__26 = (struct sOutputNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__26,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__26;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value64 = (void*)0;
char* __result_obj__27;
    __result_obj__27 = (char*)come_increment_ref_count(((char*)(__right_value64=__builtin_string("sOutputNode"))));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__27;
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
void* __right_value65 = (void*)0;
char* __dec_obj30;
struct list$1sNode$ph* __dec_obj31;
struct sInlineAssembler* __result_obj__28;
    ((struct sNodeBase*)(__right_value65=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value65,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj30=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj31=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    /*b*/ come_call_finalizer3(__dec_obj31,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__28 = (struct sInlineAssembler*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__28,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__28;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value66 = (void*)0;
char* __result_obj__29;
    __result_obj__29 = (char*)come_increment_ref_count(((char*)(__right_value66=__builtin_string("sInlineAssembler"))));
    (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__29 = come_decrement_ref_count(__result_obj__29, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__29;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_53;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct CVALUE* come_value_54;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_55;
char* p_56;
_Bool dquort_57;
int num_exp_58;
void* __right_value71 = (void*)0;
struct sNode* node_59;
_Bool Value_66;
_Bool __result_obj__34;
void* __right_value72 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
char* __dec_obj32;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sType* __dec_obj33;
_Bool __result_obj__36;
    source_53=(char*)come_increment_ref_count(self->source);
    come_value_54=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 179, "struct CVALUE*"))));
    buf_55=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 181, "struct buffer*"))));
    p_56=source_53;
    while(    *p_56!=40) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
    }
    if(    *p_56==40) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
        while(        *p_56==32||*p_56==9||*p_56==10) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    dquort_57=(_Bool)0;
    num_exp_58=0;
    while(    *p_56) {
        if(        *p_56==34) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            dquort_57=!dquort_57;
        }
        else if(        dquort_57) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
        else if(        *p_56==40) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            node_59=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_58++));
            Value_66=node_compile(node_59,info);
            if(            !Value_66) {
                __result_obj__34 = (_Bool)0;
                ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_54,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__34;
            }
            else {
            }
            come_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_55,come_value_67->c_value);
            if(            *p_56==41) {
                buffer_append_char(buf_55,*p_56);
                p_56++;
            }
            ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_67,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    __dec_obj32=come_value_54->c_value,
    come_value_54->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value74=buffer_to_string(buf_55)))));
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj33=come_value_54->type,
    come_value_54->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 238, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_54->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s",come_value_54->c_value);
    __result_obj__36 = (_Bool)1;
    (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_54,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__36;
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
struct list_item$1sNode$ph* it_60;
int i_61;
struct sNode* __result_obj__30;
struct sNode* default_value_62;
struct sNode* __result_obj__31;
default_value_62 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_60=self->head;
    i_61=0;
    while(    it_60!=((void*)0)) {
        if(        position==i_61) {
            __result_obj__30 = (struct sNode*)come_increment_ref_count(it_60->item);
            ((__result_obj__30) ? __result_obj__30 = come_decrement_ref_count(__result_obj__30, ((struct sNode*)__result_obj__30)->finalize, ((struct sNode*)__result_obj__30)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__30;
        }
        it_60=it_60->next;
        i_61++;
    }
    memset(&default_value_62,0,sizeof(struct sNode*));
    __result_obj__31 = (struct sNode*)come_increment_ref_count(default_value_62);
    ((default_value_62) ? default_value_62 = come_decrement_ref_count(default_value_62, ((struct sNode*)default_value_62)->finalize, ((struct sNode*)default_value_62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__31) ? __result_obj__31 = come_decrement_ref_count(__result_obj__31, ((struct sNode*)__result_obj__31)->finalize, ((struct sNode*)__result_obj__31)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__31;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_63;
int i_64;
struct sNode* __result_obj__32;
struct sNode* default_value_65;
struct sNode* __result_obj__33;
default_value_65 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_63=self->head;
    i_64=0;
    while(    it_63!=((void*)0)) {
        if(        position==i_64) {
            __result_obj__32 = (struct sNode*)come_increment_ref_count(it_63->item);
            ((__result_obj__32) ? __result_obj__32 = come_decrement_ref_count(__result_obj__32, ((struct sNode*)__result_obj__32)->finalize, ((struct sNode*)__result_obj__32)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__32;
        }
        it_63=it_63->next;
        i_64++;
    }
    memset(&default_value_65,0,sizeof(struct sNode*));
    __result_obj__33 = (struct sNode*)come_increment_ref_count(default_value_65);
    ((default_value_65) ? default_value_65 = come_decrement_ref_count(default_value_65, ((struct sNode*)default_value_65)->finalize, ((struct sNode*)default_value_65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__33;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value79 = (void*)0;
struct list_item$1CVALUE$ph* litem_68;
struct CVALUE* __dec_obj34;
void* __right_value80 = (void*)0;
struct list_item$1CVALUE$ph* litem_69;
struct CVALUE* __dec_obj35;
void* __right_value81 = (void*)0;
struct list_item$1CVALUE$ph* litem_70;
struct CVALUE* __dec_obj36;
struct list$1CVALUE$ph* __result_obj__35;
    if(    self->len==0) {
        litem_68=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value79=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj34=litem_68->item,
        litem_68->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj34,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_68;
        self->head=litem_68;
    }
    else if(    self->len==1) {
        litem_69=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value80=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj35=litem_69->item,
        litem_69->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value81=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj36=litem_70->item,
        litem_70->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj36,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__35 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__35;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value82 = (void*)0;
struct sCurrentNode2* __result_obj__37;
    ((struct sNodeBase*)(__right_value82=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value82,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__37 = (struct sCurrentNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__37,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__37;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value83 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(self->sname))));
    (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__38;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value84 = (void*)0;
char* __result_obj__39;
    __result_obj__39 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string("sCurrentNode"))));
    (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__39 = come_decrement_ref_count(__result_obj__39, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__39;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value85 = (void*)0;
char* class_name_71;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct sClass* current_stack_72;
struct sVarTable* vtable_73;
struct map$2char$phsVar$ph* o2_saved_74;
char* it_77;
char* key_80;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct sVar* value_81;
void* __right_value91 = (void*)0;
struct sType* type2_88;
void* __right_value92 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct tuple2$2char$phsType$ph* item_89;
void* __right_value98 = (void*)0;
struct sType* type3_100;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct tuple2$2char$phsType$ph* item2_103;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_155;
char* it_156;
char* key_157;
void* __right_value115 = (void*)0;
struct sVar* value_158;
void* __right_value116 = (void*)0;
struct sType* type2_159;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct tuple2$2char$phsType$ph* item_160;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct CVALUE* come_value_161;
void* __right_value121 = (void*)0;
char* __dec_obj47;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__81;
    info->current_stack_num++;
    class_name_71=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_72=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "common.h", 641, "struct sClass*")),(char*)come_increment_ref_count(class_name_71),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
    vtable_73=info->lv_table;
    while(    vtable_73) {
        for(        o2_saved_74=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_73->mVars)),it_77=map$2char$phsVar$ph_begin((o2_saved_74));        !map$2char$phsVar$ph_end((o2_saved_74));        it_77=map$2char$phsVar$ph_next((o2_saved_74))        ){
            key_80=it_77;
            value_81=((struct sVar*)(__right_value90=map$2char$phsVar$ph_operator_load_element(vtable_73->mVars,((char*)(__right_value89=__builtin_string(key_80))))));
            (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value90,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_88=(struct sType*)come_increment_ref_count(sType_clone(value_81->mType));
            type2_88->mPointerNum++;
            item_89=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 654, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_81->mCValueName)),(struct sType*)come_increment_ref_count(type2_88)));
            if(            value_81->mCValueName!=((void*)0)) {
                if(                strcmp(value_81->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_81->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_81->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_81->mType->mClass->mName,"va_list")||string_operator_equals(value_81->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_88->mArrayNum)==1) {
                    type3_100=(struct sType*)come_increment_ref_count(sType_clone(type2_88));
                    list$1sNode$ph_reset(type3_100->mArrayNum);
                    type3_100->mPointerNum=1;
                    type3_100->mOriginIsArray=(_Bool)1;
                    item2_103=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 674, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_81->mCValueName)),(struct sType*)come_increment_ref_count(type3_100)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_72->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_103)));
                    value_81->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_103,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_72->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_89)));
                }
            }
            /*c*/ come_call_finalizer3(type2_88,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_89,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_74,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_73=vtable_73->mParent;
    }
    output_struct(current_stack_72,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_71),(struct sClass*)come_increment_ref_count(current_stack_72));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_71,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_71);
    vtable_73=info->lv_table;
    while(    vtable_73) {
        for(        o2_saved_155=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_73->mVars)),it_156=map$2char$phsVar$ph_begin((o2_saved_155));        !map$2char$phsVar$ph_end((o2_saved_155));        it_156=map$2char$phsVar$ph_next((o2_saved_155))        ){
            key_157=it_156;
            value_158=((struct sVar*)(__right_value115=map$2char$phsVar$ph_operator_load_element(vtable_73->mVars,key_157)));
            /*c*/ come_call_finalizer3(__right_value115,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_159=(struct sType*)come_increment_ref_count(sType_clone(value_158->mType));
            item_160=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 703, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_158->mCValueName),(struct sType*)come_increment_ref_count(type2_159)));
            if(            value_158->mCValueName!=((void*)0)) {
                if(                strcmp(value_158->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_158->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_158->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_158->mType->mClass->mName,"va_list")||string_operator_equals(value_158->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_158->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_159->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_158->mCValueName,value_158->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_158->mCValueName,value_158->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_159->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_158->mCValueName,value_158->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_158->mCValueName,value_158->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_159,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_160,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_155,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_73=vtable_73->mParent;
    }
    come_value_161=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "common.h", 742, "struct CVALUE*"))));
    __dec_obj47=come_value_161->c_value,
    come_value_161->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_161->type,
    come_value_161->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "common.h", 745, "struct sType*")),(char*)come_increment_ref_count(class_name_71),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_161->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_161->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
    __result_obj__81 = (_Bool)1;
    (class_name_71 = come_decrement_ref_count(class_name_71, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_72,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_161,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_75;
char* __result_obj__40;
char* __result_obj__41;
char* result_76;
char* __result_obj__42;
result_75 = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_75,0,sizeof(char*));
        __result_obj__40 = result_75;
        return __result_obj__40;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__41 = self->key_list->it->item;
        return __result_obj__41;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__42 = result_76;
    return __result_obj__42;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_78;
char* __result_obj__43;
char* __result_obj__44;
char* result_79;
char* __result_obj__45;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_78,0,sizeof(char*));
        __result_obj__43 = result_78;
        return __result_obj__43;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__44 = self->key_list->it->item;
        return __result_obj__44;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__45 = result_79;
    return __result_obj__45;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_82;
unsigned int hash_83;
unsigned int it_84;
struct sVar* __result_obj__46;
struct sVar* __result_obj__47;
struct sVar* __result_obj__48;
struct sVar* __result_obj__49;
default_value_82 = (void*)0;
    memset(&default_value_82,0,sizeof(struct sVar*));
    hash_83=string_get_hash_key(((char*)key))%self->size;
    it_84=hash_83;
    while(    (_Bool)1) {
        if(        self->item_existance[it_84]) {
            if(            string_equals(self->keys[it_84],key)) {
                __result_obj__46 = (struct sVar*)come_increment_ref_count(self->items[it_84]);
                /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__46,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__46;
            }
            it_84++;
            if(            it_84>=self->size) {
                it_84=0;
            }
            else if(            it_84==hash_83) {
                __result_obj__47 = (struct sVar*)come_increment_ref_count(default_value_82);
                /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__47,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__47;
            }
        }
        else {
            __result_obj__48 = (struct sVar*)come_increment_ref_count(default_value_82);
            /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__48,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__48;
        }
    }
    __result_obj__49 = (struct sVar*)come_increment_ref_count(default_value_82);
    /*c*/ come_call_finalizer3(default_value_82,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__49,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__49;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_85;
unsigned int hash_86;
unsigned int it_87;
struct sVar* __result_obj__50;
struct sVar* __result_obj__51;
struct sVar* __result_obj__52;
struct sVar* __result_obj__53;
default_value_85 = (void*)0;
    memset(&default_value_85,0,sizeof(struct sVar*));
    hash_86=string_get_hash_key(((char*)key))%self->size;
    it_87=hash_86;
    while(    (_Bool)1) {
        if(        self->item_existance[it_87]) {
            if(            string_equals(self->keys[it_87],key)) {
                __result_obj__50 = (struct sVar*)come_increment_ref_count(self->items[it_87]);
                /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__50,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__50;
            }
            it_87++;
            if(            it_87>=self->size) {
                it_87=0;
            }
            else if(            it_87==hash_86) {
                __result_obj__51 = (struct sVar*)come_increment_ref_count(default_value_85);
                /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__51,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__51;
            }
        }
        else {
            __result_obj__52 = (struct sVar*)come_increment_ref_count(default_value_85);
            /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__52,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__52;
        }
    }
    __result_obj__53 = (struct sVar*)come_increment_ref_count(default_value_85);
    /*c*/ come_call_finalizer3(default_value_85,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__53,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__53;
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
struct tuple2$2char$phsType$ph* __result_obj__54;
void* __right_value93 = (void*)0;
struct tuple2$2char$phsType$ph* result_90;
void* __right_value94 = (void*)0;
char* __dec_obj37;
void* __right_value95 = (void*)0;
struct sType* __dec_obj38;
struct tuple2$2char$phsType$ph* __result_obj__55;
    if(    self==(void*)0) {
        __result_obj__54 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__54,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__54;
    }
    result_90=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj37=result_90->v1,
        result_90->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj38=result_90->v2,
        result_90->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__55 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_90);
    /*c*/ come_call_finalizer3(result_90,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__55,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__55;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_91;
    result_91=0;
    result_91+=int_get_hash_key(((int)self->v1));
    result_91+=int_get_hash_key(((int)self->v2));
    return result_91;
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
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_92;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_93;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_92=left->head;
    it2_93=right->head;
    while(    it_92!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_92->item,it2_93->item)) {
            return (_Bool)0;
        }
        it_92=it_92->next;
        it2_93=it2_93->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_94;
struct list_item$1sType$ph* it2_95;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_94=left->head;
    it2_95=right->head;
    while(    it_94!=((void*)0)) {
        if(        !sType_equals(it_94->item,it2_95->item)) {
            return (_Bool)0;
        }
        it_94=it_94->next;
        it2_95=it2_95->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_96;
struct list_item$1sNode$ph* it2_97;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_96=left->head;
    it2_97=right->head;
    while(    it_96!=((void*)0)) {
        if(        !sNode_equals(it_96->item,it2_97->item)) {
            return (_Bool)0;
        }
        it_96=it_96->next;
        it2_97=it2_97->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_98;
struct list_item$1char$ph* it2_99;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_98=left->head;
    it2_99=right->head;
    while(    it_98!=((void*)0)) {
        if(        !string_equals(it_98->item,it2_99->item)) {
            return (_Bool)0;
        }
        it_98=it_98->next;
        it2_99=it2_99->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj39;
struct sType* __dec_obj40;
struct tuple2$2char$phsType$ph* __result_obj__56;
    __dec_obj39=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj40=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__56 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__56,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__56;
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
struct list_item$1sNode$ph* it_101;
struct list_item$1sNode$ph* prev_it_102;
struct list$1sNode$ph* __result_obj__57;
    it_101=self->head;
    while(    it_101!=((void*)0)) {
        prev_it_102=it_101;
        it_101=it_101->next;
        /*c*/ come_call_finalizer3(prev_it_102,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__57 = self;
    return __result_obj__57;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value102 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_104;
struct tuple2$2char$phsType$ph* __dec_obj41;
void* __right_value103 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_105;
struct tuple2$2char$phsType$ph* __dec_obj42;
void* __right_value104 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_106;
struct tuple2$2char$phsType$ph* __dec_obj43;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__58;
    if(    self->len==0) {
        litem_104=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value102=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_104->prev=((void*)0);
        litem_104->next=((void*)0);
        __dec_obj41=litem_104->item,
        litem_104->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj41,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_104;
        self->head=litem_104;
    }
    else if(    self->len==1) {
        litem_105=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value103=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_105->prev=self->head;
        litem_105->next=((void*)0);
        __dec_obj42=litem_105->item,
        litem_105->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj42,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_105;
        self->head->next=litem_105;
    }
    else {
        litem_106=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value104=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_106->prev=self->tail;
        litem_106->next=((void*)0);
        __dec_obj43=litem_106->item,
        litem_106->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj43,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_106;
        self->tail=litem_106;
    }
    self->len++;
    __result_obj__58 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__58;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_107;
int i_108;
    for(    i_107=0;    i_107<self->size;    i_107++    ){
        if(        self->item_existance[i_107]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_107],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_108=0;    i_108<self->size;    i_108++    ){
        if(        self->item_existance[i_108]) {
            if(            1) {
                (self->keys[i_108] = come_decrement_ref_count(self->keys[i_108], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_128;
unsigned int it_129;
_Bool same_key_exist_146;
char* it2_149;
struct map$2char$phsClass$ph* __result_obj__80;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_128=string_get_hash_key(((char*)key))%self->size;
    it_129=hash_128;
    while(    (_Bool)1) {
        if(        self->item_existance[it_129]) {
            if(            string_equals(self->keys[it_129],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_129]);
                    (self->keys[it_129] = come_decrement_ref_count(self->keys[it_129], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_129]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_129]);
                    self->keys[it_129]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_129],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_129]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_129]=item;
                }
                break;
            }
            it_129++;
            if(            it_129>=self->size) {
                it_129=0;
            }
            else if(            it_129==hash_128) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_129]=(_Bool)1;
            if(            1) {
                self->keys[it_129]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_129]=key;
            }
            if(            1) {
                self->items[it_129]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_129]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_146=(_Bool)0;
    for(    it2_149=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_149=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_149,key)) {
            same_key_exist_146=(_Bool)1;
        }
    }
    if(    !same_key_exist_146) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__80 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__80;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_109;
void* __right_value107 = (void*)0;
char** keys_110;
void* __right_value108 = (void*)0;
struct sClass** items_111;
void* __right_value109 = (void*)0;
_Bool* item_existance_112;
int len_113;
char* it_116;
struct sClass* default_value_119;
void* __right_value110 = (void*)0;
struct sClass* it2_120;
unsigned int hash_125;
int n_126;
struct sClass* default_value_127;
void* __right_value111 = (void*)0;
default_value_119 = (void*)0;
default_value_127 = (void*)0;
    size_109=self->size*10;
    keys_110=(char**)come_increment_ref_count(((char**)(__right_value107=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_109)), "./comelang.h", 2153, "char**"))));
    items_111=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value108=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_109)), "./comelang.h", 2154, "struct sClass**"))));
    item_existance_112=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value109=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_109)), "./comelang.h", 2155, "_Bool*"))));
    len_113=0;
    for(    it_116=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_116=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_119,0,sizeof(struct sClass*));
        it2_120=((struct sClass*)(__right_value110=map$2char$phsClass$ph_at(self,it_116,(struct sClass*)come_increment_ref_count(default_value_119))));
        /*c*/ come_call_finalizer3(__right_value110,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_125=string_get_hash_key(((char*)it_116))%size_109;
        n_126=hash_125;
        while(        (_Bool)1) {
            if(            item_existance_112[n_126]) {
                n_126++;
                if(                n_126>=size_109) {
                    n_126=0;
                }
                else if(                n_126==hash_125) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_112[n_126]=(_Bool)1;
                keys_110[n_126]=it_116;
                items_111[n_126]=((struct sClass*)(__right_value111=map$2char$phsClass$ph_at(self,it_116,(struct sClass*)come_increment_ref_count(default_value_127))));
                /*c*/ come_call_finalizer3(__right_value111,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_113++;
                /*c*/ come_call_finalizer3(default_value_127,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_127,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_119,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_110;
    self->items=items_111;
    self->item_existance=item_existance_112;
    self->size=size_109;
    self->len=len_113;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_114;
char* __result_obj__59;
char* __result_obj__60;
char* result_115;
char* __result_obj__61;
result_114 = (void*)0;
result_115 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_114,0,sizeof(char*));
        __result_obj__59 = result_114;
        return __result_obj__59;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__60 = self->key_list->it->item;
        return __result_obj__60;
    }
    memset(&result_115,0,sizeof(char*));
    __result_obj__61 = result_115;
    return __result_obj__61;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_117;
char* __result_obj__62;
char* __result_obj__63;
char* result_118;
char* __result_obj__64;
result_117 = (void*)0;
result_118 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_117,0,sizeof(char*));
        __result_obj__62 = result_117;
        return __result_obj__62;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__63 = self->key_list->it->item;
        return __result_obj__63;
    }
    memset(&result_118,0,sizeof(char*));
    __result_obj__64 = result_118;
    return __result_obj__64;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_121;
unsigned int it_122;
struct sClass* __result_obj__65;
struct sClass* __result_obj__66;
struct sClass* __result_obj__67;
struct sClass* __result_obj__68;
    hash_121=string_get_hash_key(((char*)key))%self->size;
    it_122=hash_121;
    while(    (_Bool)1) {
        if(        self->item_existance[it_122]) {
            if(            string_equals(self->keys[it_122],key)) {
                __result_obj__65 = (struct sClass*)come_increment_ref_count(self->items[it_122]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__65,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__65;
            }
            it_122++;
            if(            it_122>=self->size) {
                it_122=0;
            }
            else if(            it_122==hash_121) {
                __result_obj__66 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__66,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__66;
            }
        }
        else {
            __result_obj__67 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__67,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__67;
        }
    }
    __result_obj__68 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_123;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_124;
    it_123=self->head;
    while(    it_123!=((void*)0)) {
        prev_it_124=it_123;
        it_123=it_123->next;
        /*c*/ come_call_finalizer3(prev_it_124,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_130;
struct list_item$1char$ph* it_131;
struct list$1char$ph* __result_obj__72;
    it2_130=0;
    it_131=self->head;
    while(    it_131!=((void*)0)) {
        if(        string_equals(it_131->item,item)) {
            list$1char$ph_delete(self,it2_130,it2_130+1);
            break;
        }
        it2_130++;
        it_131=it_131->next;
    }
    __result_obj__72 = self;
    return __result_obj__72;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_132;
struct list$1char$ph* __result_obj__69;
struct list_item$1char$ph* it_135;
int i_136;
struct list_item$1char$ph* prev_it_137;
struct list_item$1char$ph* it_138;
int i_139;
struct list_item$1char$ph* prev_it_140;
struct list_item$1char$ph* it_141;
struct list_item$1char$ph* head_prev_it_142;
struct list_item$1char$ph* tail_it_143;
int i_144;
struct list_item$1char$ph* prev_it_145;
struct list$1char$ph* __result_obj__71;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_132=tail;
        tail=head;
        head=tmp_132;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__69 = self;
        return __result_obj__69;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_135=self->head;
        i_136=0;
        while(        it_135!=((void*)0)) {
            if(            i_136<tail) {
                prev_it_137=it_135;
                it_135=it_135->next;
                i_136++;
                /*c*/ come_call_finalizer3(prev_it_137,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_136==tail) {
                self->head=it_135;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_135=it_135->next;
                i_136++;
            }
        }
    }
    else if(    tail==self->len) {
        it_138=self->head;
        i_139=0;
        while(        it_138!=((void*)0)) {
            if(            i_139==head) {
                self->tail=it_138->prev;
                self->tail->next=((void*)0);
            }
            if(            i_139>=head) {
                prev_it_140=it_138;
                it_138=it_138->next;
                i_139++;
                /*c*/ come_call_finalizer3(prev_it_140,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_138=it_138->next;
                i_139++;
            }
        }
    }
    else {
        it_141=self->head;
        head_prev_it_142=((void*)0);
        tail_it_143=((void*)0);
        i_144=0;
        while(        it_141!=((void*)0)) {
            if(            i_144==head) {
                head_prev_it_142=it_141->prev;
            }
            if(            i_144==tail) {
                tail_it_143=it_141;
            }
            if(            i_144>=head&&i_144<tail) {
                prev_it_145=it_141;
                it_141=it_141->next;
                i_144++;
                /*c*/ come_call_finalizer3(prev_it_145,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_141=it_141->next;
                i_144++;
            }
        }
        if(        head_prev_it_142!=((void*)0)) {
            head_prev_it_142->next=tail_it_143;
        }
        if(        tail_it_143!=((void*)0)) {
            tail_it_143->prev=head_prev_it_142;
        }
    }
    __result_obj__71 = self;
    return __result_obj__71;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_133;
struct list_item$1char$ph* prev_it_134;
struct list$1char$ph* __result_obj__70;
    it_133=self->head;
    while(    it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*c*/ come_call_finalizer3(prev_it_134,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = self;
    return __result_obj__70;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_147;
char* __result_obj__73;
char* __result_obj__74;
char* result_148;
char* __result_obj__75;
result_147 = (void*)0;
result_148 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_147,0,sizeof(char*));
        __result_obj__73 = result_147;
        return __result_obj__73;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_148,0,sizeof(char*));
    __result_obj__75 = result_148;
    return __result_obj__75;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_150;
char* __result_obj__76;
char* __result_obj__77;
char* result_151;
char* __result_obj__78;
result_150 = (void*)0;
result_151 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_150,0,sizeof(char*));
        __result_obj__76 = result_150;
        return __result_obj__76;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__77 = self->it->item;
        return __result_obj__77;
    }
    memset(&result_151,0,sizeof(char*));
    __result_obj__78 = result_151;
    return __result_obj__78;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value112 = (void*)0;
struct list_item$1char$ph* litem_152;
char* __dec_obj44;
void* __right_value113 = (void*)0;
struct list_item$1char$ph* litem_153;
char* __dec_obj45;
void* __right_value114 = (void*)0;
struct list_item$1char$ph* litem_154;
char* __dec_obj46;
struct list$1char$ph* __result_obj__79;
    if(    self->len==0) {
        litem_152=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value112=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        __dec_obj44=litem_152->item,
        litem_152->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value113=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        __dec_obj45=litem_153->item,
        litem_153->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value114=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        __dec_obj46=litem_154->item,
        litem_154->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__79 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__79;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value124 = (void*)0;
struct sLineNode* __result_obj__82;
    ((struct sNodeBase*)(__right_value124=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value124,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__82 = (struct sLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value125 = (void*)0;
char* __result_obj__83;
    __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string("sLineNode"))));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__83;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct CVALUE* come_value_162;
void* __right_value128 = (void*)0;
char* __dec_obj49;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sType* __dec_obj50;
_Bool __result_obj__84;
    come_value_162=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 268, "struct CVALUE*"))));
    __dec_obj49=come_value_162->c_value,
    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj50=come_value_162->type,
    come_value_162->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 271, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_162->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_162));
    add_come_last_code(info,"%s",come_value_162->c_value);
    __result_obj__84 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_162,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__84;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value132 = (void*)0;
struct sSNameNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value132=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value132,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__85 = (struct sSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value133 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value133=__builtin_string("sSNameNode"))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__86;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct CVALUE* come_value_163;
void* __right_value136 = (void*)0;
char* __dec_obj51;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct sType* __dec_obj52;
_Bool __result_obj__87;
    come_value_163=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 296, "struct CVALUE*"))));
    __dec_obj51=come_value_163->c_value,
    come_value_163->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj52=come_value_163->type,
    come_value_163->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 299, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_163->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
    add_come_last_code(info,"%s",come_value_163->c_value);
    __result_obj__87 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_163,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__87;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value140 = (void*)0;
struct sFuncNode* __result_obj__88;
    ((struct sNodeBase*)(__right_value140=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value140,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__88 = (struct sFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value141 = (void*)0;
char* __result_obj__89;
    __result_obj__89 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string("sFuncNode"))));
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__89;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct CVALUE* come_value_164;
void* __right_value144 = (void*)0;
char* __dec_obj53;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sType* __dec_obj54;
_Bool __result_obj__90;
    come_value_164=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 324, "struct CVALUE*"))));
    __dec_obj53=come_value_164->c_value,
    come_value_164->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj54=come_value_164->type,
    come_value_164->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 327, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_164->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
    add_come_last_code(info,"%s",come_value_164->c_value);
    __result_obj__90 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_164,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__90;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value148 = (void*)0;
struct sWildCard* __result_obj__91;
    ((struct sNodeBase*)(__right_value148=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value148,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__91 = (struct sWildCard*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__91,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__91;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value149 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string("sWildCard"))));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__92;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct sNode* value_node_165;
_Bool Value_166;
_Bool __result_obj__93;
_Bool __result_obj__94;
    value_node_165=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value150=xsprintf("Value"))),info));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_166=node_compile(value_node_165,info);
    if(    !Value_166) {
        __result_obj__93 = (_Bool)0;
        ((value_node_165) ? value_node_165 = come_decrement_ref_count(value_node_165, ((struct sNode*)value_node_165)->finalize, ((struct sNode*)value_node_165)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__93;
    }
    else {
    }
    __result_obj__94 = (_Bool)1;
    ((value_node_165) ? value_node_165 = come_decrement_ref_count(value_node_165, ((struct sNode*)value_node_165)->finalize, ((struct sNode*)value_node_165)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__94;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value152 = (void*)0;
struct sCallerFuncNode* __result_obj__95;
    ((struct sNodeBase*)(__right_value152=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value152,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__95 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__95,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__95;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value153 = (void*)0;
char* __result_obj__96;
    __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("sCallerFuncNode"))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__96;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct CVALUE* come_value_167;
void* __right_value156 = (void*)0;
char* __dec_obj55;
void* __right_value157 = (void*)0;
char* __dec_obj56;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__97;
    come_value_167=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 376, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj55=come_value_167->c_value,
        come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj56=come_value_167->c_value,
        come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj57=come_value_167->type,
    come_value_167->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 384, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_167->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
    add_come_last_code(info,"%s",come_value_167->c_value);
    __result_obj__97 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_167,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__97;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value161 = (void*)0;
struct sCallerLineNode* __result_obj__98;
    ((struct sNodeBase*)(__right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value161,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__98 = (struct sCallerLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__98,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__98;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct CVALUE* come_value_168;
void* __right_value164 = (void*)0;
char* __dec_obj58;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__99;
    come_value_168=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 405, "struct CVALUE*"))));
    __dec_obj58=come_value_168->c_value,
    come_value_168->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj59=come_value_168->type,
    come_value_168->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 408, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_168->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_168));
    add_come_last_code(info,"%s",come_value_168->c_value);
    __result_obj__99 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_168,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__99;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value168 = (void*)0;
char* __result_obj__100;
    __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string("sCallerLineNode"))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__100;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value169 = (void*)0;
struct sCallerSNameNode* __result_obj__101;
    ((struct sNodeBase*)(__right_value169=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value169,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__101 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__101,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__101;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct CVALUE* come_value_169;
void* __right_value172 = (void*)0;
char* __dec_obj60;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__102;
    come_value_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 433, "struct CVALUE*"))));
    __dec_obj60=come_value_169->c_value,
    come_value_169->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj61=come_value_169->type,
    come_value_169->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 436, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_169->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_169));
    add_come_last_code(info,"%s",come_value_169->c_value);
    __result_obj__102 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_169,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__102;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value176 = (void*)0;
char* __result_obj__103;
    __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string("sCallerSNameNode"))));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__103;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __dec_obj62;
void* __right_value189 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj68;
struct list$1sType$ph* __dec_obj69;
struct buffer* __dec_obj70;
struct sFunCallNode* __result_obj__110;
    ((struct sNodeBase*)(__right_value177=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value177,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj62=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj68=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj68,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj69=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj69,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj70=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /*b*/ come_call_finalizer3(__dec_obj70,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__110 = (struct sFunCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__110,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__110;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value190 = (void*)0;
char* __result_obj__111;
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string("sFunCallNode"))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__111;
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
char* fun_name_180;
struct list$1tuple2$2char$phsNode$ph$ph* params_181;
struct buffer* method_block_182;
int method_block_sline_183;
struct sVar* var__184;
struct sType* lambda_type_185;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sType* result_type_186;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct list$1CVALUE$ph* come_params_187;
void* __right_value195 = (void*)0;
int i_190;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_191;
struct tuple2$2char$phsNode$ph* it_194;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label_197=0;
struct sNode* node_198=0;
_Bool Value_199;
_Bool __result_obj__119;
void* __right_value196 = (void*)0;
struct CVALUE* come_value_200;
void* __right_value197 = (void*)0;
struct sType* __dec_obj71;
void* __right_value198 = (void*)0;
_Bool _if_conditional1;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
_Bool _if_conditional2;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct buffer* buf_207;
int j_208;
struct list$1CVALUE$ph* o2_saved_209;
struct CVALUE* it_212;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_215;
void* __right_value209 = (void*)0;
char* __dec_obj72;
void* __right_value210 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__130;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sGenericsFun* generics_fun_216;
_Bool method_generics_219;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sType$ph* method_generics_types_220;
void* __right_value215 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_221=0;
struct sGenericsFun* gfun_222=0;
char* generics_fun_name_223;
void* __right_value216 = (void*)0;
struct sFun* fun_224;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1CVALUE$ph* come_params_227;
void* __right_value219 = (void*)0;
struct sFun* fun_228;
_Bool no_output_come_code_229;
_Bool __result_obj__139;
void* __right_value220 = (void*)0;
struct CVALUE* method_block_node_230;
void* __right_value221 = (void*)0;
struct sType* method_block_lambda_type_237;
void* __right_value222 = (void*)0;
struct sType* method_block_result_type_238;
void* __right_value223 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_239;
struct sType* generics_fun_method_block_result_type_240;
int method_generics_num_241;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
int n_250;
struct list$1sType$ph* o2_saved_251;
struct sType* it_254;
int method_generics_num_257;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct list$1CVALUE$ph* come_params_258;
int i_259;
struct sType* result_type_260;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_261;
struct tuple2$2char$phsNode$ph* it_262;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_263=0;
struct sNode* node_264=0;
_Bool Value_265;
_Bool __result_obj__153;
void* __right_value235 = (void*)0;
struct CVALUE* come_value_266;
void* __right_value236 = (void*)0;
struct sType* __dec_obj78;
int method_generics_num_270;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
int n_271;
struct list$1sType$ph* o2_saved_272;
struct sType* it_273;
int method_generics_num_274;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_277=0;
struct sGenericsFun* gfun_278=0;
char* __dec_obj82;
void* __right_value247 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_279=0;
struct sGenericsFun* gfun_280=0;
char* __dec_obj83;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1CVALUE$ph* come_params_281;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_282;
struct tuple2$2char$phsNode$ph* it_283;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_284=0;
struct sNode* node_285=0;
_Bool Value_286;
_Bool __result_obj__156;
void* __right_value250 = (void*)0;
struct CVALUE* come_value_287;
void* __right_value251 = (void*)0;
struct sType* __dec_obj84;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_288;
int j_289;
struct list$1CVALUE$ph* o2_saved_290;
struct CVALUE* it_291;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_292;
void* __right_value256 = (void*)0;
char* __dec_obj85;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __dec_obj86;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj87;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj88;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj89;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* __dec_obj90;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sType* __dec_obj91;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sType* __dec_obj92;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* __dec_obj93;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sType* __dec_obj94;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sType* __dec_obj95;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* __dec_obj96;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj97;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj98;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj99;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj100;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj101;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj102;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj103;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj104;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj105;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj106;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj107;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sType* __dec_obj108;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __dec_obj109;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sType* __dec_obj110;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* __dec_obj111;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __dec_obj112;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __dec_obj113;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __dec_obj114;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sType* __dec_obj115;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sType* __dec_obj116;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj117;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj118;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* __dec_obj119;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sType* __dec_obj120;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __dec_obj121;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sType* __dec_obj122;
_Bool __result_obj__157;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1CVALUE$ph* come_params_293;
int i_294;
struct sType* result_type_295;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_296;
struct tuple2$2char$phsNode$ph* it_297;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_298=0;
struct sNode* node_299=0;
_Bool Value_300;
_Bool __result_obj__158;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_301;
void* __right_value362 = (void*)0;
struct sType* __dec_obj123;
struct sType* __dec_obj124;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct buffer* buf_302;
int j_303;
struct list$1CVALUE$ph* o2_saved_304;
struct CVALUE* it_305;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value367 = (void*)0;
char* __dec_obj125;
struct sType* __dec_obj126;
_Bool __result_obj__159;
void* __right_value368 = (void*)0;
char* __dec_obj127;
void* __right_value369 = (void*)0;
char* __dec_obj128;
char* p_307;
int version_308;
char* p2_309;
int i_311;
void* __right_value370 = (void*)0;
char* new_fun_name_312;
void* __right_value371 = (void*)0;
_Bool _if_conditional3;
void* __right_value372 = (void*)0;
char* __dec_obj129;
void* __right_value373 = (void*)0;
char* new_fun_name_319;
void* __right_value374 = (void*)0;
_Bool _if_conditional4;
void* __right_value375 = (void*)0;
char* __dec_obj130;
void* __right_value376 = (void*)0;
int i_320;
void* __right_value377 = (void*)0;
char* new_fun_name_321;
void* __right_value378 = (void*)0;
_Bool _if_conditional5;
void* __right_value379 = (void*)0;
char* __dec_obj131;
void* __right_value380 = (void*)0;
struct sFun* fun_322;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct list$1CVALUE$ph* come_params_323;
int i_324;
struct sType* result_type_325;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_326;
struct tuple2$2char$phsNode$ph* it_327;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_328=0;
struct sNode* node_329=0;
_Bool Value_330;
_Bool __result_obj__168;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_331;
void* __right_value384 = (void*)0;
struct sType* __dec_obj132;
struct sType* __dec_obj133;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct buffer* buf_332;
int j_333;
struct list$1CVALUE$ph* o2_saved_334;
struct CVALUE* it_335;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_336;
void* __right_value389 = (void*)0;
char* __dec_obj134;
struct sType* __dec_obj135;
_Bool __result_obj__169;
void* __right_value390 = (void*)0;
struct sType* result_type_337;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1sType$ph* param_types_338;
struct list$1sType$ph* o2_saved_339;
struct sType* it_340;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* it2_341;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj136;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1CVALUE$ph* come_params_342;
int i_343;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_344;
struct tuple2$2char$phsNode$ph* it_345;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_346=0;
struct sNode* node_347=0;
_Bool Value_348;
_Bool __result_obj__170;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value400 = (void*)0;
struct sType* __dec_obj137;
int n_350;
struct list$1char$ph* o2_saved_351;
char* it_352;
void* __right_value401 = (void*)0;
_Bool _if_conditional6;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
_Bool _if_conditional7;
void* __right_value408 = (void*)0;
int i_358;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_359;
struct tuple2$2char$phsNode$ph* it_360;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_361=0;
struct sNode* node_362=0;
_Bool Value_363;
_Bool __result_obj__173;
void* __right_value409 = (void*)0;
struct CVALUE* come_value_364;
void* __right_value410 = (void*)0;
struct sType* __dec_obj139;
void* __right_value411 = (void*)0;
_Bool _if_conditional8;
_Bool Value_365;
_Bool __result_obj__174;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_366;
void* __right_value413 = (void*)0;
struct sType* __dec_obj140;
void* __right_value414 = (void*)0;
_Bool _if_conditional9;
void* __right_value415 = (void*)0;
_Bool _if_conditional10;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
_Bool _if_conditional11;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
_Bool _if_conditional12;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
char* default_param_367;
void* __right_value426 = (void*)0;
char* param_name_374;
void* __right_value427 = (void*)0;
_Bool _if_conditional13;
struct buffer* source_375;
char* p_376;
char* head_377;
int sline_378;
void* __right_value428 = (void*)0;
struct buffer* __dec_obj141;
void* __right_value429 = (void*)0;
struct sNode* node_379;
_Bool Value_380;
_Bool __result_obj__179;
struct buffer* __dec_obj142;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_381;
void* __right_value431 = (void*)0;
struct sType* __dec_obj143;
void* __right_value432 = (void*)0;
_Bool _if_conditional14;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
_Bool _if_conditional15;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
_Bool _if_conditional16;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value447 = (void*)0;
struct sNode* current_stack_frame_node_382;
_Bool Value_384;
_Bool __result_obj__182;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value449 = (void*)0;
struct sType* __dec_obj145;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct buffer* method_block2_386;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* method_block_type_387;
void* __right_value454 = (void*)0;
char* class_name_388;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sClass* current_stack_frame_struct_395;
void* __right_value457 = (void*)0;
int num_method_block_396;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* result_type_397;
void* __right_value460 = (void*)0;
struct list$1sType$ph* param_types_398;
struct list$1char$ph* param_names_399;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct buffer* all_alhabet_sname_400;
char* p_401;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1sType$ph* o2_saved_402;
struct sType* it_403;
struct sType* param_type_404;
void* __right_value465 = (void*)0;
char* param_name_405;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
char* param_name_406;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* param_name_407;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* source3_408;
char* p_409;
char* head_410;
int sline_411;
struct buffer* __dec_obj146;
void* __right_value472 = (void*)0;
struct sNode* node_412;
_Bool Value_413;
_Bool __result_obj__191;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* method_block_name_414;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value2_415;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sFun* fun2_416;
void* __right_value479 = (void*)0;
struct sType* method_block_type2_417;
void* __right_value480 = (void*)0;
char* __dec_obj147;
void* __right_value481 = (void*)0;
struct sType* __dec_obj148;
struct buffer* __dec_obj149;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct buffer* buf_418;
int j_419;
struct list$1CVALUE$ph* o2_saved_420;
struct CVALUE* it_421;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value486 = (void*)0;
char* __dec_obj150;
void* __right_value487 = (void*)0;
struct sType* __dec_obj151;
void* __right_value488 = (void*)0;
char* __dec_obj152;
_Bool __result_obj__192;
memset(&i_311, 0, sizeof(int));
    fun_name_180=(char*)come_increment_ref_count(self->fun_name);
    params_181=self->params;
    method_block_182=self->method_block;
    method_block_sline_183=self->method_block_sline;
    var__184=get_variable_from_table(info->lv_table,fun_name_180);
    if(    var__184==((void*)0)) {
        var__184=get_variable_from_table(info->gv_table,fun_name_180);
    }
    if(    var__184) {
        lambda_type_185=var__184->mType;
        if(        string_operator_not_equals(lambda_type_185->mClass->mName,"lambda")) {
            ((struct tuple2$2int$bool$*)(__right_value191=err_msg(info,"%s is not lambda, can't call",fun_name_180)));
            /*c*/ come_call_finalizer3(__right_value191,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        result_type_186=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_185->mResultType));
        result_type_186->mStatic=(_Bool)0;
        come_params_187=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 506, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_185->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_181)&&!lambda_type_185->mVarArgs) {
            ((struct tuple2$2int$bool$*)(__right_value195=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_180,list$1sType$ph_length(lambda_type_185->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_181))));
            /*c*/ come_call_finalizer3(__right_value195,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        i_190=0;
        for(        o2_saved_191=(params_181),it_194=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_191));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_191));        it_194=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_191))        ){
            multiple_assign_var1=it_194;
            label_197=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_198=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_199=node_compile(node_198,info);
            if(            !Value_199) {
                __result_obj__119 = (_Bool)0;
                (label_197 = come_decrement_ref_count(label_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_198) ? node_198 = come_decrement_ref_count(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_186,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_187,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__119;
            }
            else {
            }
            come_value_200=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj71=come_value_200->type,
            come_value_200->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_200->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            (_if_conditional1=(lambda_type_185->mVarArgs&&((struct sType*)(__right_value198=list$1sType$ph_operator_load_element(lambda_type_185->mParamTypes,i_190)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value198,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
            }
            else {
                check_assign_type(((char*)(__right_value201=xsprintf("\%s calling param #\%s",((char*)(__right_value199=string_to_string(fun_name_180))),((char*)(__right_value200=int_to_string(i_190)))))),((struct sType*)(__right_value202=list$1sType$ph_operator_load_element(lambda_type_185->mParamTypes,i_190))),come_value_200->type,come_value_200,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value202,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional2=(((struct sType*)(__right_value203=list$1sType$ph_operator_load_element(lambda_type_185->mParamTypes,i_190)))->mHeap&&come_value_200->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value203,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)(__right_value204=list$1sType$ph_operator_load_element(lambda_type_185->mParamTypes,i_190))),come_value_200->type,come_value_200,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value204,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params_187,(struct CVALUE*)come_increment_ref_count(come_value_200));
            i_190++;
            (label_197 = come_decrement_ref_count(label_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_198) ? node_198 = come_decrement_ref_count(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_200,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_207=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 540, "struct buffer*"))));
        buffer_append_str(buf_207,var__184->mCValueName);
        buffer_append_str(buf_207,"(");
        j_208=0;
        for(        o2_saved_209=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_187)),it_212=list$1CVALUE$ph_begin((o2_saved_209));        !list$1CVALUE$ph_end((o2_saved_209));        it_212=list$1CVALUE$ph_next((o2_saved_209))        ){
            buffer_append_str(buf_207,it_212->c_value);
            if(            j_208!=list$1CVALUE$ph_length(come_params_187)-1) {
                buffer_append_str(buf_207,",");
            }
            j_208++;
        }
        /*c*/ come_call_finalizer3(o2_saved_209,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_207,")");
        come_value_215=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 557, "struct CVALUE*"))));
        __dec_obj72=come_value_215->c_value,
        come_value_215->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_207));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj73=come_value_215->type,
        come_value_215->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_186));
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_215->type->mStatic=(_Bool)0;
        come_value_215->var=((void*)0);
        if(        lambda_type_185->mResultType->mHeap) {
            append_object_to_right_values2(come_value_215,(struct sType*)come_increment_ref_count(lambda_type_185->mResultType),info,(_Bool)0,((void*)0));
        }
        add_come_last_code(info,"%s",come_value_215->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_215));
        info->calling_fun=((void*)0);
        __result_obj__130 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_186,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_187,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_207,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_215,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__130;
        /*c*/ come_call_finalizer3(result_type_186,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_187,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_207,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_215,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_216=((struct sGenericsFun*)(__right_value212=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value211=__builtin_string(fun_name_180))),((void*)0))));
    (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value212,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_219=(_Bool)0;
    if(    generics_fun_216) {
        method_generics_219=list$1char$ph_length(generics_fun_216->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_219) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_220=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 582, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value215=make_method_generics_function((char*)come_increment_ref_count(fun_name_180),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_220),info)));
            name_221=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_222=multiple_assign_var2->v2;
            /*c*/ come_call_finalizer3(__right_value215,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_223=(char*)come_increment_ref_count(name_221);
            fun_224=((struct sFun*)(__right_value216=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_223,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value216,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_182) {
                come_params_227=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 589, "struct list$1CVALUE$ph*"))));
                fun_228=((struct sFun*)(__right_value219=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_223,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value219,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_229=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_182,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_227),fun_228,fun_name_180,method_block_sline_183,info,(_Bool)1)) {
                    __result_obj__139 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_227,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_220,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_221 = come_decrement_ref_count(name_221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_223 = come_decrement_ref_count(generics_fun_name_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__139;
                }
                info->no_output_come_code=no_output_come_code_229;
                method_block_node_230=((struct CVALUE*)(__right_value220=list$1CVALUE$ph_operator_load_element(come_params_227,-1)));
                /*c*/ come_call_finalizer3(__right_value220,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_237=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_230->type));
                method_block_result_type_238=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_239=((struct sType*)(__right_value223=list$1sType$ph_operator_load_element(generics_fun_216->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value223,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_240=generics_fun_method_block_lambda_type_239->mResultType;
                if(                generics_fun_method_block_result_type_240->mClass->mMethodGenerics) {
                    method_generics_num_241=generics_fun_method_block_result_type_240->mClass->mMethodGenericsNum;
                    list$1sType$ph_operator_store_element(method_generics_types_220,method_generics_num_241,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_238)));
                    /*c*/ come_call_finalizer3(__right_value227,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                n_250=0;
                for(                o2_saved_251=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_239->mParamTypes)),it_254=list$1sType$ph_begin((o2_saved_251));                !list$1sType$ph_end((o2_saved_251));                it_254=list$1sType$ph_next((o2_saved_251))                ){
                    if(                    it_254->mClass->mMethodGenerics) {
                        method_generics_num_257=it_254->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(method_generics_types_220,method_generics_num_257,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value231=list$1sType$ph_operator_load_element(method_block_lambda_type_237->mParamTypes,n_250))))));
                        /*c*/ come_call_finalizer3(__right_value229,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value230,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value231,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_250++;
                }
                /*c*/ come_call_finalizer3(o2_saved_251,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_227,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_237,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_238,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_258=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 621, "struct list$1CVALUE$ph*"))));
            i_259=0;
            result_type_260=((void*)0);
            for(            o2_saved_261=(params_181),it_262=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_261));            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_261));            it_262=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_261))            ){
                multiple_assign_var3=it_262;
                label_263=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_264=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_265=node_compile(node_264,info);
                if(                !Value_265) {
                    __result_obj__153 = (_Bool)0;
                    (label_263 = come_decrement_ref_count(label_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_264) ? node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_220,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_221 = come_decrement_ref_count(name_221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_223 = come_decrement_ref_count(generics_fun_name_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_258,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_260,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__153;
                }
                else {
                }
                come_value_266=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj78=come_value_266->type,
                come_value_266->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_266->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                list$1CVALUE$ph_add(come_params_258,(struct CVALUE*)come_increment_ref_count(come_value_266));
                (label_263 = come_decrement_ref_count(label_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_264) ? node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_266,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            generics_fun_216->mResultType->mClass->mMethodGenerics) {
                method_generics_num_270=generics_fun_216->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph_operator_store_element(method_generics_types_220,method_generics_num_270,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    /*c*/ come_call_finalizer3(__right_value240,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            n_271=0;
            for(            o2_saved_272=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_216->mParamTypes)),it_273=list$1sType$ph_begin((o2_saved_272));            !list$1sType$ph_end((o2_saved_272));            it_273=list$1sType$ph_next((o2_saved_272))            ){
                if(                it_273->mClass->mMethodGenerics) {
                    method_generics_num_274=it_273->mClass->mMethodGenericsNum;
                    if(                    n_271<list$1CVALUE$ph_length(come_params_258)) {
                        list$1sType$ph_operator_store_element(method_generics_types_220,method_generics_num_274,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value244=list$1CVALUE$ph_operator_load_element(come_params_258,n_271)))->type)));
                        /*c*/ come_call_finalizer3(__right_value242,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value243,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value244,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_271++;
            }
            /*c*/ come_call_finalizer3(o2_saved_272,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_223);
            (name_221 = come_decrement_ref_count(name_221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value246=make_method_generics_function((char*)come_increment_ref_count(fun_name_180),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_220),info)));
            name_277=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_278=multiple_assign_var4->v2;
            /*c*/ come_call_finalizer3(__right_value246,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj82=fun_name_180,
            fun_name_180=(char*)come_increment_ref_count(name_277);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_220,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_223 = come_decrement_ref_count(generics_fun_name_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_258,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_260,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_277 = come_decrement_ref_count(name_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value247=make_method_generics_function((char*)come_increment_ref_count(fun_name_180),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_279=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_280=multiple_assign_var5->v2;
            /*c*/ come_call_finalizer3(__right_value247,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj83=fun_name_180,
            fun_name_180=(char*)come_increment_ref_count(name_279);
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_279 = come_decrement_ref_count(name_279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_180,"__builtin_memmove")||string_operator_equals(fun_name_180,"__builtin_memset")||string_operator_equals(fun_name_180,"__builtin_ffs")||string_operator_equals(fun_name_180,"__builtin_ffsl")||string_operator_equals(fun_name_180,"__builtin_ffsll")||string_operator_equals(fun_name_180,"__builtin_bswap16")||string_operator_equals(fun_name_180,"__builtin_bswap32")||string_operator_equals(fun_name_180,"__builtin_bswap64")||string_operator_equals(fun_name_180,"__builtin_constant_p")||string_operator_equals(fun_name_180,"__builtin_expect")||string_operator_equals(fun_name_180,"__builtin___memset_chk")||string_operator_equals(fun_name_180,"__builtin_object_size")||string_operator_equals(fun_name_180,"__builtin___memcpy_chk")||string_operator_equals(fun_name_180,"__builtin___strncpy_chk")||string_operator_equals(fun_name_180,"__builtin___strncat_chk")||string_operator_equals(fun_name_180,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_180,"__builtin_strrchr")||string_operator_equals(fun_name_180,"__builtin_clz")||string_operator_equals(fun_name_180,"__dsb")||string_operator_equals(fun_name_180,"__isb")||string_operator_equals(fun_name_180,"__dmb")||(strlen(fun_name_180)==strlen("__builtin_arm_")&&memcmp(fun_name_180,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_180,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_180,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_180,"__c11_atomic_store")||string_operator_equals(fun_name_180,"__c11_atomic_load")||string_operator_equals(fun_name_180,"__c11_atomic_exchange")||string_operator_equals(fun_name_180,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_180,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_180,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_180,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_180,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_180,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_180,"__c11_atomic_fetch_xor")) {
        come_params_281=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 696, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_282=(params_181),it_283=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_282));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_282));        it_283=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_282))        ){
            multiple_assign_var6=it_283;
            label_284=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_285=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_286=node_compile(node_285,info);
            if(            !Value_286) {
                __result_obj__156 = (_Bool)0;
                (label_284 = come_decrement_ref_count(label_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_285) ? node_285 = come_decrement_ref_count(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_281,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__156;
            }
            else {
            }
            come_value_287=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj84=come_value_287->type,
            come_value_287->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_287->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_281,(struct CVALUE*)come_increment_ref_count(come_value_287));
            (label_284 = come_decrement_ref_count(label_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_285) ? node_285 = come_decrement_ref_count(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_287,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 711, "struct buffer*"))));
        buffer_append_str(buf_288,fun_name_180);
        buffer_append_str(buf_288,"(");
        j_289=0;
        for(        o2_saved_290=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_281)),it_291=list$1CVALUE$ph_begin((o2_saved_290));        !list$1CVALUE$ph_end((o2_saved_290));        it_291=list$1CVALUE$ph_next((o2_saved_290))        ){
            buffer_append_str(buf_288,it_291->c_value);
            if(            j_289!=list$1CVALUE$ph_length(come_params_281)-1) {
                buffer_append_str(buf_288,",");
            }
            j_289++;
        }
        /*c*/ come_call_finalizer3(o2_saved_290,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_288,")");
        come_value_292=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 728, "struct CVALUE*"))));
        __dec_obj85=come_value_292->c_value,
        come_value_292->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_288));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_180,"__builtin_memmove")||string_operator_equals(fun_name_180,"__builtin_memset")) {
            __dec_obj86=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_ffs")) {
            __dec_obj87=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 735, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_ffsl")) {
            __dec_obj88=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_ffsll")) {
            __dec_obj89=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_bswap16")) {
            __dec_obj90=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_bswap32")) {
            __dec_obj91=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_bswap64")) {
            __dec_obj92=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_constant_p")) {
            __dec_obj93=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_expect")) {
            __dec_obj94=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 756, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin___memset_chk")) {
            __dec_obj95=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 759, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_292->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_object_size")) {
            __dec_obj96=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 763, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin___memcpy_chk")) {
            __dec_obj97=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 766, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_292->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_180,"__builtin___strncpy_chk")) {
            __dec_obj98=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_292->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_180,"__builtin___strncat_chk")) {
            __dec_obj99=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_292->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_strrchr")) {
            __dec_obj100=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_292->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_180,"__builtin___vsnprintf_chk")) {
            __dec_obj101=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_clz")) {
            __dec_obj102=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_thread_fence")) {
            __dec_obj103=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_signal_fence")) {
            __dec_obj104=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_exchange")) {
            __dec_obj105=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value314=list$1CVALUE$ph_operator_load_element(come_params_281,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value314,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_exchange_strong")) {
            __dec_obj106=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value316=list$1CVALUE$ph_operator_load_element(come_params_281,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value316,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_exchange_weak")) {
            __dec_obj107=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value318=list$1CVALUE$ph_operator_load_element(come_params_281,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value318,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_store")) {
            __dec_obj108=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_load")) {
            __dec_obj109=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value323=list$1CVALUE$ph_operator_load_element(come_params_281,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value323,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_292->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_fetch_add")) {
            __dec_obj110=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value325=list$1CVALUE$ph_operator_load_element(come_params_281,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value325,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_fetch_sub")) {
            __dec_obj111=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value327=list$1CVALUE$ph_operator_load_element(come_params_281,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value327,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_fetch_and")) {
            __dec_obj112=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value329=list$1CVALUE$ph_operator_load_element(come_params_281,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value329,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_fetch_or")) {
            __dec_obj113=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value331=list$1CVALUE$ph_operator_load_element(come_params_281,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value331,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__c11_atomic_fetch_xor")) {
            __dec_obj114=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value333=list$1CVALUE$ph_operator_load_element(come_params_281,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value333,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__dsb")) {
            __dec_obj115=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__isb")) {
            __dec_obj116=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 828, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__dmb")) {
            __dec_obj117=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 831, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_arm_cdp")) {
            __dec_obj118=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_arm_ldc")) {
            __dec_obj119=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_arm_stc")) {
            __dec_obj120=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_arm_stcl")) {
            __dec_obj121=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 843, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_180,"__builtin_arm_ldcl")) {
            __dec_obj122=come_value_292->type,
            come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 846, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_292->var=((void*)0);
        add_come_last_code(info,"%s",come_value_292->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_292));
        __result_obj__157 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_281,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_288,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_292,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__157;
        /*c*/ come_call_finalizer3(come_params_281,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_288,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_292,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_180,"__builtin_va_arg")) {
        come_params_293=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 858, "struct list$1CVALUE$ph*"))));
        i_294=0;
        result_type_295=((void*)0);
        for(        o2_saved_296=(params_181),it_297=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_296));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_296));        it_297=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_296))        ){
            multiple_assign_var7=it_297;
            label_298=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_299=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_300=node_compile(node_299,info);
            if(            !Value_300) {
                __result_obj__158 = (_Bool)0;
                (label_298 = come_decrement_ref_count(label_298, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_299) ? node_299 = come_decrement_ref_count(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_293,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_295,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__158;
            }
            else {
            }
            come_value_301=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj123=come_value_301->type,
            come_value_301->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_301->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_293,(struct CVALUE*)come_increment_ref_count(come_value_301));
            __dec_obj124=result_type_295,
            result_type_295=(struct sType*)come_increment_ref_count(come_value_301->type);
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_298 = come_decrement_ref_count(label_298, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_299) ? node_299 = come_decrement_ref_count(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_301,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 878, "struct buffer*"))));
        buffer_append_str(buf_302,fun_name_180);
        buffer_append_str(buf_302,"(");
        j_303=0;
        for(        o2_saved_304=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_293)),it_305=list$1CVALUE$ph_begin((o2_saved_304));        !list$1CVALUE$ph_end((o2_saved_304));        it_305=list$1CVALUE$ph_next((o2_saved_304))        ){
            buffer_append_str(buf_302,it_305->c_value);
            if(            j_303!=list$1CVALUE$ph_length(come_params_293)-1) {
                buffer_append_str(buf_302,",");
            }
            j_303++;
        }
        /*c*/ come_call_finalizer3(o2_saved_304,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_302,")");
        come_value_306=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 895, "struct CVALUE*"))));
        __dec_obj125=come_value_306->c_value,
        come_value_306->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_302));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj126=come_value_306->type,
        come_value_306->type=(struct sType*)come_increment_ref_count(result_type_295);
        /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_306->var=((void*)0);
        add_come_last_code(info,"%s",come_value_306->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_306));
        __result_obj__159 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_293,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_295,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__159;
        /*c*/ come_call_finalizer3(come_params_293,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_295,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_180,"string")) {
        __dec_obj127=fun_name_180,
        fun_name_180=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_180,"wstring")) {
        __dec_obj128=fun_name_180,
        fun_name_180=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_180,"inherit")) {
        p_307=info->come_fun->mName;
        version_308=0;
        while(        *p_307) {
            if(            *p_307==95&&*(p_307+1)==118&&xisdigit(*(p_307+2))) {
                p2_309=p_307+2;
                version_308=0;
                while(                xisdigit(*p2_309)) {
                    version_308=version_308*10+(*p2_309-48);
                    p2_309++;
                }
                break;
            }
            else {
                p_307++;
            }
        }
        char real_fun_name_310[2048];
        memset(&real_fun_name_310, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_310,info->come_fun->mName,p_307-info->come_fun->mName);
        real_fun_name_310[p_307-info->come_fun->mName]=0;
        for(        i_311=version_308-1;        i_311>=1;        i_311--        ){
            new_fun_name_312=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_310,i_311));
            if(            (_if_conditional3=(((struct sFun*)(__right_value371=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_312))))),            /*c*/ come_call_finalizer3(__right_value371,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __dec_obj129=fun_name_180,
                fun_name_180=(char*)come_increment_ref_count(__builtin_string(new_fun_name_312));
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_312 = come_decrement_ref_count(new_fun_name_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_312 = come_decrement_ref_count(new_fun_name_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_311==0) {
            new_fun_name_319=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_310));
            if(            (_if_conditional4=(((struct sFun*)(__right_value374=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_319))))),            /*c*/ come_call_finalizer3(__right_value374,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __dec_obj130=fun_name_180,
                fun_name_180=(char*)come_increment_ref_count(__builtin_string(new_fun_name_319));
                __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_180,info->come_fun->mName)) {
                ((struct tuple2$2int$bool$*)(__right_value376=err_msg(info,"invalid inherit")));
                /*c*/ come_call_finalizer3(__right_value376,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (new_fun_name_319 = come_decrement_ref_count(new_fun_name_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_320=128;        i_320>=1;        i_320--        ){
            new_fun_name_321=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_180,i_320));
            if(            (_if_conditional5=(((struct sFun*)(__right_value378=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_321))))),            /*c*/ come_call_finalizer3(__right_value378,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
                __dec_obj131=fun_name_180,
                fun_name_180=(char*)come_increment_ref_count(__builtin_string(new_fun_name_321));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_321 = come_decrement_ref_count(new_fun_name_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_321 = come_decrement_ref_count(new_fun_name_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_322=((struct sFun*)(__right_value380=map$2char$phsFun$ph_at(info->funcs,fun_name_180,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value380,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_322==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_180);
        come_params_323=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 975, "struct list$1CVALUE$ph*"))));
        i_324=0;
        result_type_325=((void*)0);
        for(        o2_saved_326=(params_181),it_327=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_326));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_326));        it_327=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_326))        ){
            multiple_assign_var8=it_327;
            label_328=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_329=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_330=node_compile(node_329,info);
            if(            !Value_330) {
                __result_obj__168 = (_Bool)0;
                (label_328 = come_decrement_ref_count(label_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_329) ? node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_323,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_325,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__168;
            }
            else {
            }
            come_value_331=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj132=come_value_331->type,
            come_value_331->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_331->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_323,(struct CVALUE*)come_increment_ref_count(come_value_331));
            __dec_obj133=result_type_325,
            result_type_325=(struct sType*)come_increment_ref_count(come_value_331->type);
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_328 = come_decrement_ref_count(label_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_329) ? node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_331,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_332=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 995, "struct buffer*"))));
        buffer_append_str(buf_332,fun_name_180);
        buffer_append_str(buf_332,"(");
        j_333=0;
        for(        o2_saved_334=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_323)),it_335=list$1CVALUE$ph_begin((o2_saved_334));        !list$1CVALUE$ph_end((o2_saved_334));        it_335=list$1CVALUE$ph_next((o2_saved_334))        ){
            buffer_append_str(buf_332,it_335->c_value);
            if(            j_333!=list$1CVALUE$ph_length(come_params_323)-1) {
                buffer_append_str(buf_332,",");
            }
            j_333++;
        }
        /*c*/ come_call_finalizer3(o2_saved_334,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_332,")");
        come_value_336=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1012, "struct CVALUE*"))));
        __dec_obj134=come_value_336->c_value,
        come_value_336->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_332));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj135=come_value_336->type,
        come_value_336->type=(struct sType*)come_increment_ref_count(result_type_325);
        /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_336->var=((void*)0);
        add_come_last_code(info,"%s",come_value_336->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_336));
        __result_obj__169 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_323,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_325,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_332,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_336,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__169;
        /*c*/ come_call_finalizer3(come_params_323,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_325,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_332,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_336,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_337=(struct sType*)come_increment_ref_count(sType_clone(fun_322->mResultType));
    result_type_337->mStatic=(_Bool)0;
    param_types_338=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1027, "struct list$1sType$ph*"))));
    for(    o2_saved_339=(struct list$1sType$ph*)come_increment_ref_count((fun_322->mParamTypes)),it_340=list$1sType$ph_begin((o2_saved_339));    !list$1sType$ph_end((o2_saved_339));    it_340=list$1sType$ph_next((o2_saved_339))    ){
        it2_341=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value393=sType_clone(it_340))),info->generics_type,info));
        /*c*/ come_call_finalizer3(__right_value393,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_338,(struct sType*)come_increment_ref_count(sType_clone(it2_341)));
        /*c*/ come_call_finalizer3(it2_341,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_339,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj136=result_type_337,
    result_type_337=(struct sType*)come_increment_ref_count(solve_generics(result_type_337,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_342=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1035, "struct list$1CVALUE$ph*"))));
    for(    i_343=0;    i_343<list$1sType$ph_length(fun_322->mParamTypes)-(((method_block_182)?(2):(0)));    i_343++    ){
        list$1CVALUE$ph_add(come_params_342,((void*)0));
    }
    for(    o2_saved_344=(params_181),it_345=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_344));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_344));    it_345=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_344))    ){
        multiple_assign_var9=it_345;
        label_346=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        node_347=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        fun_322->mVarArgs||string_operator_equals(fun_name_180,"__builtin_va_start")) {
        }
        else if(        label_346) {
            Value_348=node_compile(node_347,info);
            if(            !Value_348) {
                __result_obj__170 = (_Bool)0;
                (label_346 = come_decrement_ref_count(label_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_347) ? node_347 = come_decrement_ref_count(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_338,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_342,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__170;
            }
            else {
            }
            come_value_349=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj137=come_value_349->type,
            come_value_349->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_349->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            n_350=0;
            for(            o2_saved_351=(struct list$1char$ph*)come_increment_ref_count((fun_322->mParamNames)),it_352=list$1char$ph_begin((o2_saved_351));            !list$1char$ph_end((o2_saved_351));            it_352=list$1char$ph_next((o2_saved_351))            ){
                if(                string_operator_equals(label_346,it_352)) {
                    break;
                }
                n_350++;
            }
            /*c*/ come_call_finalizer3(o2_saved_351,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional6=(((struct sType*)(__right_value401=list$1sType$ph_operator_load_element(param_types_338,n_350))))),            /*c*/ come_call_finalizer3(__right_value401,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                check_assign_type(((char*)(__right_value404=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value402=string_to_string(fun_name_180))),((char*)(__right_value403=int_to_string(n_350)))))),((struct sType*)(__right_value405=list$1sType$ph_operator_load_element(param_types_338,n_350))),come_value_349->type,come_value_349,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value405,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional7=(((struct sType*)(__right_value406=list$1sType$ph_operator_load_element(param_types_338,n_350)))&&((struct sType*)(__right_value407=list$1sType$ph_operator_load_element(param_types_338,n_350)))->mHeap&&come_value_349->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value406,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value407,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                std_move(((struct sType*)(__right_value408=list$1sType$ph_operator_load_element(param_types_338,n_350))),come_value_349->type,come_value_349,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value408,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_342,n_350,(struct CVALUE*)come_increment_ref_count(come_value_349));
            /*c*/ come_call_finalizer3(come_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_346 = come_decrement_ref_count(label_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_347) ? node_347 = come_decrement_ref_count(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_358=0;
    for(    o2_saved_359=(params_181),it_360=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_359));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_359));    it_360=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_359))    ){
        multiple_assign_var10=it_360;
        label_361=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_362=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_322->mVarArgs||string_operator_equals(fun_name_180,"__builtin_va_start")) {
            Value_363=node_compile(node_362,info);
            if(            !Value_363) {
                __result_obj__173 = (_Bool)0;
                (label_361 = come_decrement_ref_count(label_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_362) ? node_362 = come_decrement_ref_count(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_338,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_342,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__173;
            }
            else {
            }
            come_value_364=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj139=come_value_364->type,
            come_value_364->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_364->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional8=(((struct CVALUE*)(__right_value411=list$1CVALUE$ph_operator_load_element(come_params_342,i_358)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value411,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    break;
                }
                else {
                    i_358++;
                }
            }
            list$1CVALUE$ph_replace(come_params_342,i_358,(struct CVALUE*)come_increment_ref_count(come_value_364));
            i_358++;
            /*c*/ come_call_finalizer3(come_value_364,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_361) {
        }
        else {
            Value_365=node_compile(node_362,info);
            if(            !Value_365) {
                __result_obj__174 = (_Bool)0;
                (label_361 = come_decrement_ref_count(label_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_362) ? node_362 = come_decrement_ref_count(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_338,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_342,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__174;
            }
            else {
            }
            come_value_366=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj140=come_value_366->type,
            come_value_366->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_366->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional9=(((struct CVALUE*)(__right_value414=list$1CVALUE$ph_operator_load_element(come_params_342,i_358)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value414,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional9) {
                    break;
                }
                else {
                    i_358++;
                }
            }
            if(            (_if_conditional10=(((struct sType*)(__right_value415=list$1sType$ph_operator_load_element(param_types_338,i_358))))),            /*c*/ come_call_finalizer3(__right_value415,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional10) {
                check_assign_type(((char*)(__right_value418=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value416=string_to_string(fun_name_180))),((char*)(__right_value417=int_to_string(i_358)))))),((struct sType*)(__right_value419=list$1sType$ph_operator_load_element(param_types_338,i_358))),come_value_366->type,come_value_366,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value416 = come_decrement_ref_count(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value417 = come_decrement_ref_count(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value418 = come_decrement_ref_count(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value419,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional11=(((struct sType*)(__right_value420=list$1sType$ph_operator_load_element(param_types_338,i_358)))&&((struct sType*)(__right_value421=list$1sType$ph_operator_load_element(param_types_338,i_358)))->mHeap&&come_value_366->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value420,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value421,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                std_move(((struct sType*)(__right_value422=list$1sType$ph_operator_load_element(param_types_338,i_358))),come_value_366->type,come_value_366,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value422,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_342,i_358,(struct CVALUE*)come_increment_ref_count(come_value_366));
            i_358++;
            /*c*/ come_call_finalizer3(come_value_366,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_361 = come_decrement_ref_count(label_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_362) ? node_362 = come_decrement_ref_count(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    (_Bool)1) {
        if(        (_if_conditional12=(((struct CVALUE*)(__right_value423=list$1CVALUE$ph_operator_load_element(come_params_342,i_358)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value423,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional12) {
            break;
        }
        else {
            i_358++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_181)<list$1sType$ph_length(fun_322->mParamTypes)) {
        for(        ;        i_358<list$1sType$ph_length(fun_322->mParamTypes)-(((method_block_182)?(2):(0)));        i_358++        ){
            default_param_367=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value424=list$1char$ph_operator_load_element(fun_322->mParamDefaultParametors,i_358))), "05call.c", 1144, "char*"));
            (__right_value424 = come_decrement_ref_count(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_374=((char*)(__right_value426=list$1char$ph_operator_load_element(fun_322->mParamNames,i_358)));
            (__right_value426 = come_decrement_ref_count(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional13=(default_param_367&&string_operator_not_equals(default_param_367,"")&&((struct CVALUE*)(__right_value427=list$1CVALUE$ph_operator_load_element(come_params_342,i_358)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value427,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                source_375=(struct buffer*)come_increment_ref_count(info->source);
                p_376=info->p;
                head_377=info->head;
                sline_378=info->sline;
                __dec_obj141=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_367));
                /*b*/ come_call_finalizer3(__dec_obj141,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_379=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_380=node_compile(node_379,info);
                if(                !Value_380) {
                    __result_obj__179 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_375,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_367 = come_decrement_ref_count(default_param_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_338,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_342,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__179;
                }
                else {
                }
                __dec_obj142=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_375);
                /*b*/ come_call_finalizer3(__dec_obj142,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_376;
                info->head=head_377;
                info->sline=sline_378;
                come_value_381=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj143=come_value_381->type,
                come_value_381->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_381->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional14=(((struct sType*)(__right_value432=list$1sType$ph_operator_load_element(param_types_338,i_358))))),                /*c*/ come_call_finalizer3(__right_value432,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional14) {
                    check_assign_type(((char*)(__right_value435=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value433=string_to_string(fun_name_180))),((char*)(__right_value434=int_to_string(i_358)))))),((struct sType*)(__right_value436=list$1sType$ph_operator_load_element(param_types_338,i_358))),come_value_381->type,come_value_381,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value436,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional15=(((struct sType*)(__right_value437=list$1sType$ph_operator_load_element(param_types_338,i_358)))&&((struct sType*)(__right_value438=list$1sType$ph_operator_load_element(param_types_338,i_358)))->mHeap&&come_value_381->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value437,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value438,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    std_move(((struct sType*)(__right_value439=list$1sType$ph_operator_load_element(param_types_338,i_358))),come_value_381->type,come_value_381,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value439,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_342,i_358,(struct CVALUE*)come_increment_ref_count(come_value_381));
                /*c*/ come_call_finalizer3(source_375,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_381,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value440=list$1CVALUE$ph_operator_load_element(come_params_342,i_358)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value440,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    ((struct tuple2$2int$bool$*)(__right_value441=err_msg(info,"require parametor(%s)(1) %d",fun_322->mName,i_358)));
                    /*c*/ come_call_finalizer3(__right_value441,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            (default_param_367 = come_decrement_ref_count(default_param_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_322->mParamTypes)-(((method_block_182)?(2):(0)))!=list$1CVALUE$ph_length(come_params_342)&&!fun_322->mVarArgs&&string_operator_not_equals(fun_name_180,"__builtin_va_start")&&string_operator_not_equals(fun_name_180,"__builtin_va_end")) {
        ((struct tuple2$2int$bool$*)(__right_value442=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_180,list$1sType$ph_length(fun_322->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_181))));
        /*c*/ come_call_finalizer3(__right_value442,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    method_block_182) {
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1194, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value444=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1194, "struct sCurrentNode2*")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_382=(struct sNode*)come_increment_ref_count(_inf_value1);
        /*c*/ come_call_finalizer3(__right_value444,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_384=node_compile(current_stack_frame_node_382,info);
        if(        !Value_384) {
            __result_obj__182 = (_Bool)0;
            ((current_stack_frame_node_382) ? current_stack_frame_node_382 = come_decrement_ref_count(current_stack_frame_node_382, ((struct sNode*)current_stack_frame_node_382)->finalize, ((struct sNode*)current_stack_frame_node_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_338,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_342,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__182;
        }
        else {
        }
        come_value_385=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj145=come_value_385->type,
        come_value_385->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_385->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_342,(struct CVALUE*)come_increment_ref_count(come_value_385));
        method_block2_386=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1204, "struct buffer*"))));
        method_block_type_387=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value452=list$1sType$ph_operator_load_element(fun_322->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value452,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_388=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value455=list$1sType$ph_operator_load_element(method_block_type_387->mParamTypes,0)))->mClass=((struct sClass*)(__right_value456=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_388)));
        /*c*/ come_call_finalizer3(__right_value455,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value456,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_395=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value457=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_388)));
        /*c*/ come_call_finalizer3(__right_value457,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        num_method_block_396=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_387->mClass->mName,"lambda")) {
            ((struct tuple2$2int$bool$*)(__right_value458=err_msg(info,"This function does not have method block(%s)",fun_name_180)));
            /*c*/ come_call_finalizer3(__right_value458,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        result_type_397=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_387->mResultType));
        result_type_397->mStatic=(_Bool)0;
        param_types_398=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_387->mParamTypes));
        param_names_399=method_block_type_387->mParamNames;
        all_alhabet_sname_400=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1226, "struct buffer*"))));
        {
            p_401=info->sname;
            while(            *p_401) {
                if(                xisalnum(*p_401)) {
                    buffer_append_char(all_alhabet_sname_400,*p_401++);
                }
                else {
                    p_401++;
                }
            }
        }
        buffer_append_format(method_block2_386,"%s fun_block%d_%s(",((char*)(__right_value463=make_type_name_string(result_type_397,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),num_method_block_396,((char*)(__right_value464=buffer_to_string(all_alhabet_sname_400))));
        (__right_value463 = come_decrement_ref_count(__right_value463, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_358=0;
        for(        o2_saved_402=(struct list$1sType$ph*)come_increment_ref_count((param_types_398)),it_403=list$1sType$ph_begin((o2_saved_402));        !list$1sType$ph_end((o2_saved_402));        it_403=list$1sType$ph_next((o2_saved_402))        ){
            param_type_404=it_403;
            if(            i_358==0) {
                param_name_405=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_386,"%s",((char*)(__right_value466=make_define_var(param_type_404,param_name_405,(_Bool)0,info))));
                (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_405 = come_decrement_ref_count(param_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_358==1) {
                param_name_406=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_386,"%s",((char*)(__right_value468=make_define_var_no_solved(param_type_404,param_name_406,(_Bool)0,(_Bool)1,info))));
                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_406 = come_decrement_ref_count(param_name_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_407=(char*)come_increment_ref_count(xsprintf("it%d",i_358));
                buffer_append_format(method_block2_386,"%s",((char*)(__right_value470=make_define_var_no_solved(param_type_404,param_name_407,(_Bool)0,(_Bool)1,info))));
                (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_407 = come_decrement_ref_count(param_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_358!=list$1sType$ph_length(param_types_398)-1) {
                buffer_append_str(method_block2_386,",");
            }
            i_358++;
        }
        /*c*/ come_call_finalizer3(o2_saved_402,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_386,")\n");
        buffer_append_str(method_block2_386,((char*)(__right_value471=buffer_to_string(method_block_182))));
        (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_408=(struct buffer*)come_increment_ref_count(info->source);
        p_409=info->p;
        head_410=info->head;
        sline_411=info->sline;
        __dec_obj146=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_386);
        /*b*/ come_call_finalizer3(__dec_obj146,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_183;
        node_412=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_413=node_compile(node_412,info);
        if(        !Value_413) {
            __result_obj__191 = (_Bool)0;
            ((current_stack_frame_node_382) ? current_stack_frame_node_382 = come_decrement_ref_count(current_stack_frame_node_382, ((struct sNode*)current_stack_frame_node_382)->finalize, ((struct sNode*)current_stack_frame_node_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_385,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_386,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_387,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_388 = come_decrement_ref_count(class_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_398,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_400,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_408,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_412) ? node_412 = come_decrement_ref_count(node_412, ((struct sNode*)node_412)->finalize, ((struct sNode*)node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_338,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_342,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__191;
        }
        else {
        }
        method_block_name_414=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_396,((char*)(__right_value473=buffer_to_string(all_alhabet_sname_400)))));
        (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1291, "struct CVALUE*"))));
        fun2_416=((struct sFun*)(__right_value478=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value477=__builtin_string(method_block_name_414))),((void*)0))));
        (__right_value477 = come_decrement_ref_count(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value478,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_416==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value479=err_msg(info,"method block function not found(%s)",method_block_name_414)));
            /*c*/ come_call_finalizer3(__right_value479,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        method_block_type2_417=fun2_416->mLambdaType;
        __dec_obj147=come_value2_415->c_value,
        come_value2_415->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_414));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj148=come_value2_415->type,
        come_value2_415->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_417));
        /*b*/ come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_415->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_342,(struct CVALUE*)come_increment_ref_count(come_value2_415));
        __dec_obj149=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_408);
        /*b*/ come_call_finalizer3(__dec_obj149,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_409;
        info->head=head_410;
        info->sline=sline_411;
        info->current_stack_frame_struct=current_stack_frame_struct_395;
        ((current_stack_frame_node_382) ? current_stack_frame_node_382 = come_decrement_ref_count(current_stack_frame_node_382, ((struct sNode*)current_stack_frame_node_382)->finalize, ((struct sNode*)current_stack_frame_node_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_385,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_386,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_387,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_388 = come_decrement_ref_count(class_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_398,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_400,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_408,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_412) ? node_412 = come_decrement_ref_count(node_412, ((struct sNode*)node_412)->finalize, ((struct sNode*)node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_414 = come_decrement_ref_count(method_block_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_415,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1315, "struct buffer*"))));
    buffer_append_str(buf_418,fun_name_180);
    buffer_append_str(buf_418,"(");
    j_419=0;
    for(    o2_saved_420=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_342)),it_421=list$1CVALUE$ph_begin((o2_saved_420));    !list$1CVALUE$ph_end((o2_saved_420));    it_421=list$1CVALUE$ph_next((o2_saved_420))    ){
        buffer_append_str(buf_418,it_421->c_value);
        if(        j_419!=list$1CVALUE$ph_length(come_params_342)-1) {
            buffer_append_str(buf_418,",");
        }
        j_419++;
    }
    /*c*/ come_call_finalizer3(o2_saved_420,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_418,")");
    come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1332, "struct CVALUE*"))));
    __dec_obj150=come_value_422->c_value,
    come_value_422->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_418));
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj151=come_value_422->type,
    come_value_422->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_337));
    /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_422->type->mStatic=(_Bool)0;
    come_value_422->type->mImmutable=(_Bool)0;
    come_value_422->var=((void*)0);
    if(    fun_322->mResultType->mHeap) {
        append_object_to_right_values2(come_value_422,(struct sType*)come_increment_ref_count(result_type_337),info,(_Bool)0,((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")) {
        if(        string_operator_not_equals(fun_name_180,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_180,"null_check")&&string_operator_not_equals(fun_name_180,"come_push_stackframe")&&string_operator_not_equals(fun_name_180,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_180,"come_pop_stackframe")&&string_operator_not_equals(fun_name_180,"come_pop_stackframe_v2")) {
            __dec_obj152=come_value_422->c_value,
            come_value_422->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_422->c_value,come_value_422->type,info));
            __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_422->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
    info->calling_fun=fun_322;
    __result_obj__192 = (_Bool)1;
    (fun_name_180 = come_decrement_ref_count(fun_name_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_338,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_342,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_418,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_422,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__104;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_172;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_173;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__109;
    if(    self==((void*)0)) {
        __result_obj__104 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__104,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__104;
    }
    result_172=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_173=self->head;
    while(    it_173!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_172,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_173->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_172,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_173->item)));
        }
        it_173=it_173->next;
    }
    __result_obj__109 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_172);
    /*c*/ come_call_finalizer3(result_172,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__109,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__109;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_170;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_171;
    it_170=self->head;
    while(    it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        /*c*/ come_call_finalizer3(prev_it_171,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__105 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__105,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__105;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value181 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_174;
struct tuple2$2char$phsNode$ph* __dec_obj63;
void* __right_value182 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_175;
struct tuple2$2char$phsNode$ph* __dec_obj64;
void* __right_value183 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_176;
struct tuple2$2char$phsNode$ph* __dec_obj65;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__106;
    if(    self->len==0) {
        litem_174=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value181=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_174->prev=((void*)0);
        litem_174->next=((void*)0);
        __dec_obj63=litem_174->item,
        litem_174->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj63,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_174;
        self->head=litem_174;
    }
    else if(    self->len==1) {
        litem_175=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value182=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_175->prev=self->head;
        litem_175->next=((void*)0);
        __dec_obj64=litem_175->item,
        litem_175->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj64,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_175;
        self->head->next=litem_175;
    }
    else {
        litem_176=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value183=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_176->prev=self->tail;
        litem_176->next=((void*)0);
        __dec_obj65=litem_176->item,
        litem_176->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj65,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_176;
        self->tail=litem_176;
    }
    self->len++;
    __result_obj__106 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__106;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__107;
void* __right_value184 = (void*)0;
struct tuple2$2char$phsNode$ph* result_177;
void* __right_value185 = (void*)0;
char* __dec_obj66;
void* __right_value186 = (void*)0;
struct sNode* __dec_obj67;
struct tuple2$2char$phsNode$ph* __result_obj__108;
    if(    self==(void*)0) {
        __result_obj__107 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__107,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__107;
    }
    result_177=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj66=result_177->v1,
        result_177->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj67=result_177->v2,
        result_177->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__108 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_177);
    /*c*/ come_call_finalizer3(result_177,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__108,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__108;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_178;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_179;
    it_178=self->head;
    while(    it_178!=((void*)0)) {
        prev_it_179=it_178;
        it_178=it_178->next;
        /*c*/ come_call_finalizer3(prev_it_179,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__112 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__112,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__112;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_188;
struct list_item$1CVALUE$ph* prev_it_189;
    it_188=self->head;
    while(    it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        /*c*/ come_call_finalizer3(prev_it_189,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_192;
struct tuple2$2char$phsNode$ph* __result_obj__113;
struct tuple2$2char$phsNode$ph* __result_obj__114;
struct tuple2$2char$phsNode$ph* result_193;
struct tuple2$2char$phsNode$ph* __result_obj__115;
result_192 = (void*)0;
result_193 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_192,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__113 = result_192;
        return __result_obj__113;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__114 = self->it->item;
        return __result_obj__114;
    }
    memset(&result_193,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__115 = result_193;
    return __result_obj__115;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_195;
struct tuple2$2char$phsNode$ph* __result_obj__116;
struct tuple2$2char$phsNode$ph* __result_obj__117;
struct tuple2$2char$phsNode$ph* result_196;
struct tuple2$2char$phsNode$ph* __result_obj__118;
result_195 = (void*)0;
result_196 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_195,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__116 = result_195;
        return __result_obj__116;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__117 = self->it->item;
        return __result_obj__117;
    }
    memset(&result_196,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__118 = result_196;
    return __result_obj__118;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_201;
int i_202;
struct sType* __result_obj__120;
struct sType* default_value_203;
struct sType* __result_obj__121;
default_value_203 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_201=self->head;
    i_202=0;
    while(    it_201!=((void*)0)) {
        if(        position==i_202) {
            __result_obj__120 = (struct sType*)come_increment_ref_count(it_201->item);
            /*c*/ come_call_finalizer3(__result_obj__120,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__120;
        }
        it_201=it_201->next;
        i_202++;
    }
    memset(&default_value_203,0,sizeof(struct sType*));
    __result_obj__121 = (struct sType*)come_increment_ref_count(default_value_203);
    /*c*/ come_call_finalizer3(default_value_203,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__121,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__121;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_204;
int i_205;
struct sType* __result_obj__122;
struct sType* default_value_206;
struct sType* __result_obj__123;
default_value_206 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_204=self->head;
    i_205=0;
    while(    it_204!=((void*)0)) {
        if(        position==i_205) {
            __result_obj__122 = (struct sType*)come_increment_ref_count(it_204->item);
            /*c*/ come_call_finalizer3(__result_obj__122,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__122;
        }
        it_204=it_204->next;
        i_205++;
    }
    memset(&default_value_206,0,sizeof(struct sType*));
    __result_obj__123 = (struct sType*)come_increment_ref_count(default_value_206);
    /*c*/ come_call_finalizer3(default_value_206,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__123,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__123;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_210;
struct CVALUE* __result_obj__124;
struct CVALUE* __result_obj__125;
struct CVALUE* result_211;
struct CVALUE* __result_obj__126;
result_210 = (void*)0;
result_211 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_210,0,sizeof(struct CVALUE*));
        __result_obj__124 = result_210;
        return __result_obj__124;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__125 = self->it->item;
        return __result_obj__125;
    }
    memset(&result_211,0,sizeof(struct CVALUE*));
    __result_obj__126 = result_211;
    return __result_obj__126;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_213;
struct CVALUE* __result_obj__127;
struct CVALUE* __result_obj__128;
struct CVALUE* result_214;
struct CVALUE* __result_obj__129;
result_213 = (void*)0;
result_214 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_213,0,sizeof(struct CVALUE*));
        __result_obj__127 = result_213;
        return __result_obj__127;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__128 = self->it->item;
        return __result_obj__128;
    }
    memset(&result_214,0,sizeof(struct CVALUE*));
    __result_obj__129 = result_214;
    return __result_obj__129;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_217;
unsigned int it_218;
struct sGenericsFun* __result_obj__131;
struct sGenericsFun* __result_obj__132;
struct sGenericsFun* __result_obj__133;
struct sGenericsFun* __result_obj__134;
    hash_217=string_get_hash_key(((char*)key))%self->size;
    it_218=hash_217;
    while(    (_Bool)1) {
        if(        self->item_existance[it_218]) {
            if(            string_equals(self->keys[it_218],key)) {
                __result_obj__131 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_218]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__131,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__131;
            }
            it_218++;
            if(            it_218>=self->size) {
                it_218=0;
            }
            else if(            it_218==hash_217) {
                __result_obj__132 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__132,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__132;
            }
        }
        else {
            __result_obj__133 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__133,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__133;
        }
    }
    __result_obj__134 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__134,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__134;
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
unsigned int hash_225;
unsigned int it_226;
struct sFun* __result_obj__135;
struct sFun* __result_obj__136;
struct sFun* __result_obj__137;
struct sFun* __result_obj__138;
    hash_225=string_get_hash_key(((char*)key))%self->size;
    it_226=hash_225;
    while(    (_Bool)1) {
        if(        self->item_existance[it_226]) {
            if(            string_equals(self->keys[it_226],key)) {
                __result_obj__135 = (struct sFun*)come_increment_ref_count(self->items[it_226]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__135,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__135;
            }
            it_226++;
            if(            it_226>=self->size) {
                it_226=0;
            }
            else if(            it_226==hash_225) {
                __result_obj__136 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__136,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__136;
            }
        }
        else {
            __result_obj__137 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__137,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__137;
        }
    }
    __result_obj__138 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__138,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__138;
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
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct list_item$1CVALUE$ph* it_231;
int i_232;
struct CVALUE* __result_obj__140;
struct CVALUE* default_value_233;
struct CVALUE* __result_obj__141;
default_value_233 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_231=self->head;
    i_232=0;
    while(    it_231!=((void*)0)) {
        if(        position==i_232) {
            __result_obj__140 = (struct CVALUE*)come_increment_ref_count(it_231->item);
            /*c*/ come_call_finalizer3(__result_obj__140,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__140;
        }
        it_231=it_231->next;
        i_232++;
    }
    memset(&default_value_233,0,sizeof(struct CVALUE*));
    __result_obj__141 = (struct CVALUE*)come_increment_ref_count(default_value_233);
    /*c*/ come_call_finalizer3(default_value_233,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__141,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__141;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_234;
int i_235;
struct CVALUE* __result_obj__142;
struct CVALUE* default_value_236;
struct CVALUE* __result_obj__143;
default_value_236 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_234=self->head;
    i_235=0;
    while(    it_234!=((void*)0)) {
        if(        position==i_235) {
            __result_obj__142 = (struct CVALUE*)come_increment_ref_count(it_234->item);
            /*c*/ come_call_finalizer3(__result_obj__142,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__142;
        }
        it_234=it_234->next;
        i_235++;
    }
    memset(&default_value_236,0,sizeof(struct CVALUE*));
    __result_obj__143 = (struct CVALUE*)come_increment_ref_count(default_value_236);
    /*c*/ come_call_finalizer3(default_value_236,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__143,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__143;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_242;
int i_243;
struct sType* default_value_244;
struct list$1sType$ph* __result_obj__145;
struct list_item$1sType$ph* it_248;
int i_249;
struct sType* __dec_obj77;
struct list$1sType$ph* __result_obj__146;
default_value_244 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_242=self->len;
        for(        i_243=0;        i_243<position-len_242;        i_243++        ){
            memset(&default_value_244,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_244));
            /*c*/ come_call_finalizer3(default_value_244,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__145 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__145;
    }
    it_248=self->head;
    i_249=0;
    while(    it_248!=((void*)0)) {
        if(        position==i_249) {
            __dec_obj77=it_248->item,
            it_248->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_248=it_248->next;
        i_249++;
    }
    __result_obj__146 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__146;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value224 = (void*)0;
struct list_item$1sType$ph* litem_245;
struct sType* __dec_obj74;
void* __right_value225 = (void*)0;
struct list_item$1sType$ph* litem_246;
struct sType* __dec_obj75;
void* __right_value226 = (void*)0;
struct list_item$1sType$ph* litem_247;
struct sType* __dec_obj76;
struct list$1sType$ph* __result_obj__144;
    if(    self->len==0) {
        litem_245=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value224=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_245->prev=((void*)0);
        litem_245->next=((void*)0);
        __dec_obj74=litem_245->item,
        litem_245->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_245;
        self->head=litem_245;
    }
    else if(    self->len==1) {
        litem_246=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value225=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_246->prev=self->head;
        litem_246->next=((void*)0);
        __dec_obj75=litem_246->item,
        litem_246->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_246;
        self->head->next=litem_246;
    }
    else {
        litem_247=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value226=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_247->prev=self->tail;
        litem_247->next=((void*)0);
        __dec_obj76=litem_247->item,
        litem_247->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_247;
        self->tail=litem_247;
    }
    self->len++;
    __result_obj__144 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__144;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_252;
struct sType* __result_obj__147;
struct sType* __result_obj__148;
struct sType* result_253;
struct sType* __result_obj__149;
result_252 = (void*)0;
result_253 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_252,0,sizeof(struct sType*));
        __result_obj__147 = result_252;
        return __result_obj__147;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__148 = self->it->item;
        return __result_obj__148;
    }
    memset(&result_253,0,sizeof(struct sType*));
    __result_obj__149 = result_253;
    return __result_obj__149;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_255;
struct sType* __result_obj__150;
struct sType* __result_obj__151;
struct sType* result_256;
struct sType* __result_obj__152;
result_255 = (void*)0;
result_256 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_255,0,sizeof(struct sType*));
        __result_obj__150 = result_255;
        return __result_obj__150;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__151 = self->it->item;
        return __result_obj__151;
    }
    memset(&result_256,0,sizeof(struct sType*));
    __result_obj__152 = result_256;
    return __result_obj__152;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value237 = (void*)0;
struct list_item$1CVALUE$ph* litem_267;
struct CVALUE* __dec_obj79;
void* __right_value238 = (void*)0;
struct list_item$1CVALUE$ph* litem_268;
struct CVALUE* __dec_obj80;
void* __right_value239 = (void*)0;
struct list_item$1CVALUE$ph* litem_269;
struct CVALUE* __dec_obj81;
struct list$1CVALUE$ph* __result_obj__154;
    if(    self->len==0) {
        litem_267=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value237=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1043, "struct list_item$1CVALUE$ph*"))));
        litem_267->prev=((void*)0);
        litem_267->next=((void*)0);
        __dec_obj79=litem_267->item,
        litem_267->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_267;
        self->head=litem_267;
    }
    else if(    self->len==1) {
        litem_268=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value238=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1053, "struct list_item$1CVALUE$ph*"))));
        litem_268->prev=self->head;
        litem_268->next=((void*)0);
        __dec_obj80=litem_268->item,
        litem_268->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj80,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_268;
        self->head->next=litem_268;
    }
    else {
        litem_269=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value239=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1063, "struct list_item$1CVALUE$ph*"))));
        litem_269->prev=self->tail;
        litem_269->next=((void*)0);
        __dec_obj81=litem_269->item,
        litem_269->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_269;
        self->tail=litem_269;
    }
    self->len++;
    __result_obj__154 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__154;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_275;
unsigned int it_276;
struct map$2char$phsFun$ph* __result_obj__155;
    hash_275=string_get_hash_key(((char*)key))%self->size;
    it_276=hash_275;
    while(    (_Bool)1) {
        if(        self->item_existance[it_276]) {
            if(            string_equals(self->keys[it_276],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_276]);
                self->item_existance[it_276]=(_Bool)0;
                if(                1) {
                    (self->keys[it_276] = come_decrement_ref_count(self->keys[it_276], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_276]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_276],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_276]=((void*)0);
                self->len--;
                break;
            }
            it_276++;
            if(            it_276>=self->size) {
                it_276=0;
            }
            else if(            it_276==hash_275) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__155 = self;
    return __result_obj__155;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_313;
unsigned int hash_314;
unsigned int it_315;
struct sFun* __result_obj__160;
struct sFun* __result_obj__161;
struct sFun* __result_obj__162;
struct sFun* __result_obj__163;
default_value_313 = (void*)0;
    memset(&default_value_313,0,sizeof(struct sFun*));
    hash_314=string_get_hash_key(((char*)key))%self->size;
    it_315=hash_314;
    while(    (_Bool)1) {
        if(        self->item_existance[it_315]) {
            if(            string_equals(self->keys[it_315],key)) {
                __result_obj__160 = (struct sFun*)come_increment_ref_count(self->items[it_315]);
                /*c*/ come_call_finalizer3(default_value_313,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__160,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__160;
            }
            it_315++;
            if(            it_315>=self->size) {
                it_315=0;
            }
            else if(            it_315==hash_314) {
                __result_obj__161 = (struct sFun*)come_increment_ref_count(default_value_313);
                /*c*/ come_call_finalizer3(default_value_313,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__161,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__161;
            }
        }
        else {
            __result_obj__162 = (struct sFun*)come_increment_ref_count(default_value_313);
            /*c*/ come_call_finalizer3(default_value_313,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__162,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__162;
        }
    }
    __result_obj__163 = (struct sFun*)come_increment_ref_count(default_value_313);
    /*c*/ come_call_finalizer3(default_value_313,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__163,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__163;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_316;
unsigned int hash_317;
unsigned int it_318;
struct sFun* __result_obj__164;
struct sFun* __result_obj__165;
struct sFun* __result_obj__166;
struct sFun* __result_obj__167;
default_value_316 = (void*)0;
    memset(&default_value_316,0,sizeof(struct sFun*));
    hash_317=string_get_hash_key(((char*)key))%self->size;
    it_318=hash_317;
    while(    (_Bool)1) {
        if(        self->item_existance[it_318]) {
            if(            string_equals(self->keys[it_318],key)) {
                __result_obj__164 = (struct sFun*)come_increment_ref_count(self->items[it_318]);
                /*c*/ come_call_finalizer3(default_value_316,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__164,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__164;
            }
            it_318++;
            if(            it_318>=self->size) {
                it_318=0;
            }
            else if(            it_318==hash_317) {
                __result_obj__165 = (struct sFun*)come_increment_ref_count(default_value_316);
                /*c*/ come_call_finalizer3(default_value_316,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__165,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__165;
            }
        }
        else {
            __result_obj__166 = (struct sFun*)come_increment_ref_count(default_value_316);
            /*c*/ come_call_finalizer3(default_value_316,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__166,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__166;
        }
    }
    __result_obj__167 = (struct sFun*)come_increment_ref_count(default_value_316);
    /*c*/ come_call_finalizer3(default_value_316,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_353;
int i_354;
struct CVALUE* default_value_355;
struct list$1CVALUE$ph* __result_obj__171;
struct list_item$1CVALUE$ph* it_356;
int i_357;
struct CVALUE* __dec_obj138;
struct list$1CVALUE$ph* __result_obj__172;
default_value_355 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_353=self->len;
        for(        i_354=0;        i_354<position-len_353;        i_354++        ){
            memset(&default_value_355,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_355));
            /*c*/ come_call_finalizer3(default_value_355,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__171 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__171;
    }
    it_356=self->head;
    i_357=0;
    while(    it_356!=((void*)0)) {
        if(        position==i_357) {
            __dec_obj138=it_356->item,
            it_356->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj138,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_356=it_356->next;
        i_357++;
    }
    __result_obj__172 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_368;
int i_369;
char* __result_obj__175;
char* default_value_370;
char* __result_obj__176;
default_value_370 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_368=self->head;
    i_369=0;
    while(    it_368!=((void*)0)) {
        if(        position==i_369) {
            __result_obj__175 = (char*)come_increment_ref_count(it_368->item);
            (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__175;
        }
        it_368=it_368->next;
        i_369++;
    }
    memset(&default_value_370,0,sizeof(char*));
    __result_obj__176 = (char*)come_increment_ref_count(default_value_370);
    (default_value_370 = come_decrement_ref_count(default_value_370, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__176;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_371;
int i_372;
char* __result_obj__177;
char* default_value_373;
char* __result_obj__178;
default_value_373 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_371=self->head;
    i_372=0;
    while(    it_371!=((void*)0)) {
        if(        position==i_372) {
            __result_obj__177 = (char*)come_increment_ref_count(it_371->item);
            (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__177;
        }
        it_371=it_371->next;
        i_372++;
    }
    memset(&default_value_373,0,sizeof(char*));
    __result_obj__178 = (char*)come_increment_ref_count(default_value_373);
    (default_value_373 = come_decrement_ref_count(default_value_373, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__178;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__180;
void* __right_value445 = (void*)0;
struct sCurrentNode2* result_383;
void* __right_value446 = (void*)0;
char* __dec_obj144;
struct sCurrentNode2* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__180 = (void*)0;
        return __result_obj__180;
    }
    result_383=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_383->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj144=result_383->sname,
        result_383->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode2_clone", 5, "char*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->sline_real=self->sline_real;
    }
    __result_obj__181 = result_383;
    /*c*/ come_call_finalizer3(result_383,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_389;
unsigned int hash_390;
unsigned int it_391;
struct sClass* __result_obj__183;
struct sClass* __result_obj__184;
struct sClass* __result_obj__185;
struct sClass* __result_obj__186;
default_value_389 = (void*)0;
    memset(&default_value_389,0,sizeof(struct sClass*));
    hash_390=string_get_hash_key(((char*)key))%self->size;
    it_391=hash_390;
    while(    (_Bool)1) {
        if(        self->item_existance[it_391]) {
            if(            string_equals(self->keys[it_391],key)) {
                __result_obj__183 = (struct sClass*)come_increment_ref_count(self->items[it_391]);
                /*c*/ come_call_finalizer3(default_value_389,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__183,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__183;
            }
            it_391++;
            if(            it_391>=self->size) {
                it_391=0;
            }
            else if(            it_391==hash_390) {
                __result_obj__184 = (struct sClass*)come_increment_ref_count(default_value_389);
                /*c*/ come_call_finalizer3(default_value_389,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__184,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__184;
            }
        }
        else {
            __result_obj__185 = (struct sClass*)come_increment_ref_count(default_value_389);
            /*c*/ come_call_finalizer3(default_value_389,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__185,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__185;
        }
    }
    __result_obj__186 = (struct sClass*)come_increment_ref_count(default_value_389);
    /*c*/ come_call_finalizer3(default_value_389,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__186,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_392;
unsigned int hash_393;
unsigned int it_394;
struct sClass* __result_obj__187;
struct sClass* __result_obj__188;
struct sClass* __result_obj__189;
struct sClass* __result_obj__190;
default_value_392 = (void*)0;
    memset(&default_value_392,0,sizeof(struct sClass*));
    hash_393=string_get_hash_key(((char*)key))%self->size;
    it_394=hash_393;
    while(    (_Bool)1) {
        if(        self->item_existance[it_394]) {
            if(            string_equals(self->keys[it_394],key)) {
                __result_obj__187 = (struct sClass*)come_increment_ref_count(self->items[it_394]);
                /*c*/ come_call_finalizer3(default_value_392,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__187,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__187;
            }
            it_394++;
            if(            it_394>=self->size) {
                it_394=0;
            }
            else if(            it_394==hash_393) {
                __result_obj__188 = (struct sClass*)come_increment_ref_count(default_value_392);
                /*c*/ come_call_finalizer3(default_value_392,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__188,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__188;
            }
        }
        else {
            __result_obj__189 = (struct sClass*)come_increment_ref_count(default_value_392);
            /*c*/ come_call_finalizer3(default_value_392,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__189,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__189;
        }
    }
    __result_obj__190 = (struct sClass*)come_increment_ref_count(default_value_392);
    /*c*/ come_call_finalizer3(default_value_392,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value489 = (void*)0;
struct buffer* __dec_obj153;
struct sComeCallNode* __result_obj__193;
    ((struct sNodeBase*)(__right_value489=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value489,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj153=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj153,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__193 = (struct sComeCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value490 = (void*)0;
char* __result_obj__194;
    __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value490=__builtin_string("sComeCallNode"))));
    (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__194;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_423;
struct buffer* come_block_424;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1CVALUE$ph* come_params_425;
void* __right_value493 = (void*)0;
char* var_name_427;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* type__428;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sNode* var_node_431;
_Bool Value_432;
_Bool __result_obj__199;
void* __right_value499 = (void*)0;
struct CVALUE* thread_var_value_433;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value502 = (void*)0;
char* __dec_obj154;
struct sType* __dec_obj155;
void* __right_value503 = (void*)0;
struct sNode* null_node_435;
_Bool Value_436;
_Bool __result_obj__200;
void* __right_value504 = (void*)0;
struct CVALUE* __dec_obj156;
void* __right_value505 = (void*)0;
struct sType* __dec_obj157;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value508 = (void*)0;
struct sNode* current_stack_frame_node_437;
_Bool Value_438;
_Bool __result_obj__201;
void* __right_value509 = (void*)0;
struct CVALUE* current_stack_frame_value_439;
void* __right_value510 = (void*)0;
char* fun_name_440;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct buffer* come_block2_441;
void* __right_value513 = (void*)0;
char* class_name_442;
void* __right_value514 = (void*)0;
struct sClass* current_stack_frame_struct_443;
void* __right_value515 = (void*)0;
struct buffer* source3_444;
char* p_445;
char* head_446;
int sline_447;
struct buffer* __dec_obj158;
void* __right_value516 = (void*)0;
struct sNode* node_448;
_Bool in_method_block_449;
_Bool Value_450;
_Bool __result_obj__202;
struct buffer* __dec_obj159;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct CVALUE* fun_value_451;
void* __right_value519 = (void*)0;
char* __dec_obj160;
struct sType* __dec_obj161;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct buffer* buf_452;
void* __right_value522 = (void*)0;
char* fun_name_453;
int j_454;
struct list$1CVALUE$ph* o2_saved_455;
struct CVALUE* it_456;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value525 = (void*)0;
char* __dec_obj162;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* type_458;
void* __right_value529 = (void*)0;
struct sType* __dec_obj163;
_Bool __result_obj__203;
    come_block_sline_423=self->come_block_sline;
    come_block_424=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_425=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1384, "struct list$1CVALUE$ph*"))));
    static int thread_num_426=0;
    thread_num_426++;
    var_name_427=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_426));
    type__428=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value495=map$2char$phsType$ph_at(info->types,((char*)(__right_value494=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value495,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__428==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value497=err_msg(info,"pthread_t is not defined")));
        /*c*/ come_call_finalizer3(__right_value497,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    var_node_431=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_427),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__428),(_Bool)1,((void*)0),info,(_Bool)0));
    Value_432=node_compile(var_node_431,info);
    if(    !Value_432) {
        __result_obj__199 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_424,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_427 = come_decrement_ref_count(var_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_431) ? var_node_431 = come_decrement_ref_count(var_node_431, ((struct sNode*)var_node_431)->finalize, ((struct sNode*)var_node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__199;
    }
    else {
    }
    thread_var_value_433=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1405, "struct CVALUE*"))));
    __dec_obj154=come_value_434->c_value,
    come_value_434->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_433->c_value));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj155=come_value_434->type,
    come_value_434->type=(struct sType*)come_increment_ref_count(thread_var_value_433->type);
    /*b*/ come_call_finalizer3(__dec_obj155,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_434->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_425,(struct CVALUE*)come_increment_ref_count(come_value_434));
    null_node_435=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_436=node_compile(null_node_435,info);
    if(    !Value_436) {
        __result_obj__200 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_424,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_427 = come_decrement_ref_count(var_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_431) ? var_node_431 = come_decrement_ref_count(var_node_431, ((struct sNode*)var_node_431)->finalize, ((struct sNode*)var_node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_435) ? null_node_435 = come_decrement_ref_count(null_node_435, ((struct sNode*)null_node_435)->finalize, ((struct sNode*)null_node_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__200;
    }
    else {
    }
    __dec_obj156=come_value_434,
    come_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj156,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj157=come_value_434->type,
    come_value_434->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_434->type,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_425,(struct CVALUE*)come_increment_ref_count(come_value_434));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1424, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value507=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1424, "struct sCurrentNode2*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_437=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value507,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_438=node_compile(current_stack_frame_node_437,info);
    if(    !Value_438) {
        __result_obj__201 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_424,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_427 = come_decrement_ref_count(var_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_431) ? var_node_431 = come_decrement_ref_count(var_node_431, ((struct sNode*)var_node_431)->finalize, ((struct sNode*)var_node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_435) ? null_node_435 = come_decrement_ref_count(null_node_435, ((struct sNode*)null_node_435)->finalize, ((struct sNode*)null_node_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_437) ? current_stack_frame_node_437 = come_decrement_ref_count(current_stack_frame_node_437, ((struct sNode*)current_stack_frame_node_437)->finalize, ((struct sNode*)current_stack_frame_node_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__201;
    }
    else {
    }
    current_stack_frame_value_439=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_440=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_426));
    come_block2_441=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1434, "struct buffer*"))));
    class_name_442=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_441,"void* %s(%s* parent)\n",fun_name_440,class_name_442);
    buffer_append_str(come_block2_441,((char*)(__right_value514=buffer_to_string(come_block_424))));
    (__right_value514 = come_decrement_ref_count(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_443=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value515=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_442)));
    /*c*/ come_call_finalizer3(__right_value515,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_444=(struct buffer*)come_increment_ref_count(info->source);
    p_445=info->p;
    head_446=info->head;
    sline_447=info->sline;
    __dec_obj158=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_441);
    /*b*/ come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_423;
    node_448=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_449=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_450=node_compile(node_448,info);
    if(    !Value_450) {
        __result_obj__202 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_424,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_427 = come_decrement_ref_count(var_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_431) ? var_node_431 = come_decrement_ref_count(var_node_431, ((struct sNode*)var_node_431)->finalize, ((struct sNode*)var_node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_435) ? null_node_435 = come_decrement_ref_count(null_node_435, ((struct sNode*)null_node_435)->finalize, ((struct sNode*)null_node_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_437) ? current_stack_frame_node_437 = come_decrement_ref_count(current_stack_frame_node_437, ((struct sNode*)current_stack_frame_node_437)->finalize, ((struct sNode*)current_stack_frame_node_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_439,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_440 = come_decrement_ref_count(fun_name_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_441,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_442 = come_decrement_ref_count(class_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_444,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_448) ? node_448 = come_decrement_ref_count(node_448, ((struct sNode*)node_448)->finalize, ((struct sNode*)node_448)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__202;
    }
    else {
    }
    info->in_method_block=in_method_block_449;
    __dec_obj159=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_444);
    /*b*/ come_call_finalizer3(__dec_obj159,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_445;
    info->head=head_446;
    info->sline=sline_447;
    info->current_stack_frame_struct=current_stack_frame_struct_443;
    fun_value_451=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1479, "struct CVALUE*"))));
    __dec_obj160=fun_value_451->c_value,
    fun_value_451->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_440));
    __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj161=come_value_434->type,
    come_value_434->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_434->var=((void*)0);
    list$1CVALUE$ph_add(come_params_425,(struct CVALUE*)come_increment_ref_count(fun_value_451));
    list$1CVALUE$ph_add(come_params_425,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_439));
    buf_452=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1489, "struct buffer*"))));
    (fun_name_440 = come_decrement_ref_count(fun_name_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_453=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_452,"(");
    buffer_append_str(buf_452,fun_name_453);
    buffer_append_str(buf_452,"(");
    j_454=0;
    for(    o2_saved_455=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_425)),it_456=list$1CVALUE$ph_begin((o2_saved_455));    !list$1CVALUE$ph_end((o2_saved_455));    it_456=list$1CVALUE$ph_next((o2_saved_455))    ){
        buffer_append_str(buf_452,it_456->c_value);
        if(        j_454!=list$1CVALUE$ph_length(come_params_425)-1) {
            buffer_append_str(buf_452,",");
        }
        j_454++;
    }
    /*c*/ come_call_finalizer3(o2_saved_455,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_452,")");
    buffer_append_str(buf_452,", ");
    buffer_append_str(buf_452,thread_var_value_433->c_value);
    buffer_append_str(buf_452,")");
    /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1512, "struct CVALUE*"))));
    __dec_obj162=come_value_457->c_value,
    come_value_457->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_452));
    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_458=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value527=map$2char$phsType$ph_at(info->types,((char*)(__right_value526=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value527,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_458==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value529=err_msg(info,"pthread_t is not defined")));
        /*c*/ come_call_finalizer3(__right_value529,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __dec_obj163=come_value_457->type,
    come_value_457->type=(struct sType*)come_increment_ref_count(type_458);
    /*b*/ come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_457->var=((void*)0);
    add_come_last_code(info,"%s",come_value_457->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
    __result_obj__203 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_424,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_425,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_427 = come_decrement_ref_count(var_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_431) ? var_node_431 = come_decrement_ref_count(var_node_431, ((struct sNode*)var_node_431)->finalize, ((struct sNode*)var_node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_435) ? null_node_435 = come_decrement_ref_count(null_node_435, ((struct sNode*)null_node_435)->finalize, ((struct sNode*)null_node_435)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_437) ? current_stack_frame_node_437 = come_decrement_ref_count(current_stack_frame_node_437, ((struct sNode*)current_stack_frame_node_437)->finalize, ((struct sNode*)current_stack_frame_node_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_439,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_441,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_442 = come_decrement_ref_count(class_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_444,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_448) ? node_448 = come_decrement_ref_count(node_448, ((struct sNode*)node_448)->finalize, ((struct sNode*)node_448)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_451,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_452,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_453 = come_decrement_ref_count(fun_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
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
unsigned int hash_429;
unsigned int it_430;
struct sType* __result_obj__195;
struct sType* __result_obj__196;
struct sType* __result_obj__197;
struct sType* __result_obj__198;
    hash_429=string_get_hash_key(((char*)key))%self->size;
    it_430=hash_429;
    while(    (_Bool)1) {
        if(        self->item_existance[it_430]) {
            if(            string_equals(self->keys[it_430],key)) {
                __result_obj__195 = (struct sType*)come_increment_ref_count(self->items[it_430]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__195,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__195;
            }
            it_430++;
            if(            it_430>=self->size) {
                it_430=0;
            }
            else if(            it_430==hash_429) {
                __result_obj__196 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__196,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__196;
            }
        }
        else {
            __result_obj__197 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__197,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__197;
        }
    }
    __result_obj__198 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__198,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value530 = (void*)0;
struct sNode* __dec_obj164;
struct sComeJoinNode* __result_obj__204;
    ((struct sNodeBase*)(__right_value530=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value530,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj164=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__204 = (struct sComeJoinNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__204,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value531 = (void*)0;
char* __result_obj__205;
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value531=__builtin_string("sComeJoinNode"))));
    (__right_value531 = come_decrement_ref_count(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__205;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_459;
_Bool Value_460;
_Bool __result_obj__206;
void* __right_value532 = (void*)0;
struct CVALUE* come_value_461;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct buffer* buf_462;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct CVALUE* come_value_463;
void* __right_value537 = (void*)0;
char* __dec_obj165;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj166;
_Bool __result_obj__207;
    node_459=(struct sNode*)come_increment_ref_count(self->node);
    Value_460=node_compile(node_459,info);
    if(    !Value_460) {
        __result_obj__206 = (_Bool)0;
        ((node_459) ? node_459 = come_decrement_ref_count(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__206;
    }
    else {
    }
    come_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_462=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1559, "struct buffer*"))));
    buffer_append_str(buf_462,"pthread_join(");
    buffer_append_str(buf_462,come_value_461->c_value);
    buffer_append_str(buf_462,", 0)");
    /*c*/ come_call_finalizer3(come_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1564, "struct CVALUE*"))));
    __dec_obj165=come_value_463->c_value,
    come_value_463->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_462));
    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj166=come_value_463->type,
    come_value_463->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1566, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj166,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_463->var=((void*)0);
    add_come_last_code(info,"%s",come_value_463->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_463));
    __result_obj__207 = (_Bool)1;
    ((node_459) ? node_459 = come_decrement_ref_count(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_462,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_463,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
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
void* __right_value541 = (void*)0;
struct list$1sNode$ph* __dec_obj167;
struct list$1sBlock$ph* __dec_obj168;
struct sBlock* __dec_obj169;
struct sComePollNode* __result_obj__208;
    ((struct sNodeBase*)(__right_value541=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value541,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj167=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    /*b*/ come_call_finalizer3(__dec_obj167,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj168=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    /*b*/ come_call_finalizer3(__dec_obj168,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj169=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    /*b*/ come_call_finalizer3(__dec_obj169,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__208 = (struct sComePollNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__208,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value542 = (void*)0;
char* __result_obj__209;
    __result_obj__209 = (char*)come_increment_ref_count(((char*)(__right_value542=__builtin_string("sComePollNode"))));
    (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__209;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_468;
struct list$1sBlock$ph* blocks_469;
int time_out_470;
int n_472;
struct list$1sNode$ph* o2_saved_473;
struct sNode* it_476;
_Bool Value_479;
_Bool __result_obj__216;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_480;
int n_481;
struct list$1sNode$ph* o2_saved_482;
struct sNode* it_483;
void* __right_value544 = (void*)0;
_Bool __result_obj__221;
    vars_468=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_469=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_470=self->time_out;
    static int var_num_471=0;
    var_num_471++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_471,list$1sNode$ph_length(vars_468));
    n_472=0;
    for(    o2_saved_473=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_476=list$1sNode$ph_begin((o2_saved_473));    !list$1sNode$ph_end((o2_saved_473));    it_476=list$1sNode$ph_next((o2_saved_473))    ){
        Value_479=node_compile(it_476,info);
        if(        !Value_479) {
            __result_obj__216 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_473,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_468,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_469,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__216;
        }
        else {
        }
        come_value_480=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_471,n_472,come_value_480->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_471,n_472,1);
        n_472++;
        /*c*/ come_call_finalizer3(come_value_480,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_473,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_471,var_num_471,list$1sNode$ph_length(vars_468),time_out_470);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_471);
    n_481=0;
    for(    o2_saved_482=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_483=list$1sNode$ph_begin((o2_saved_482));    !list$1sNode$ph_end((o2_saved_482));    it_483=list$1sNode$ph_next((o2_saved_482))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_471,n_481,1);
        transpile_block(((struct sBlock*)(__right_value544=list$1sBlock$ph_operator_load_element(blocks_469,n_481))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value544,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_481++;
    }
    /*c*/ come_call_finalizer3(o2_saved_482,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_471);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__221 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_468,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_469,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_464;
struct list_item$1sBlock$ph* prev_it_465;
    it_464=self->head;
    while(    it_464!=((void*)0)) {
        prev_it_465=it_464;
        it_464=it_464->next;
        /*c*/ come_call_finalizer3(prev_it_465,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sBlock$ph* it_466;
struct list_item$1sBlock$ph* prev_it_467;
    it_466=self->head;
    while(    it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        /*c*/ come_call_finalizer3(prev_it_467,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_474;
struct sNode* __result_obj__210;
struct sNode* __result_obj__211;
struct sNode* result_475;
struct sNode* __result_obj__212;
result_474 = (void*)0;
result_475 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_474,0,sizeof(struct sNode*));
        __result_obj__210 = result_474;
        return __result_obj__210;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__211 = self->it->item;
        return __result_obj__211;
    }
    memset(&result_475,0,sizeof(struct sNode*));
    __result_obj__212 = result_475;
    return __result_obj__212;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_477;
struct sNode* __result_obj__213;
struct sNode* __result_obj__214;
struct sNode* result_478;
struct sNode* __result_obj__215;
result_477 = (void*)0;
result_478 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_477,0,sizeof(struct sNode*));
        __result_obj__213 = result_477;
        return __result_obj__213;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__214 = self->it->item;
        return __result_obj__214;
    }
    memset(&result_478,0,sizeof(struct sNode*));
    __result_obj__215 = result_478;
    return __result_obj__215;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_484;
int i_485;
struct sBlock* __result_obj__217;
struct sBlock* default_value_486;
struct sBlock* __result_obj__218;
default_value_486 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_484=self->head;
    i_485=0;
    while(    it_484!=((void*)0)) {
        if(        position==i_485) {
            __result_obj__217 = (struct sBlock*)come_increment_ref_count(it_484->item);
            /*c*/ come_call_finalizer3(__result_obj__217,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__217;
        }
        it_484=it_484->next;
        i_485++;
    }
    memset(&default_value_486,0,sizeof(struct sBlock*));
    __result_obj__218 = (struct sBlock*)come_increment_ref_count(default_value_486);
    /*c*/ come_call_finalizer3(default_value_486,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_487;
int i_488;
struct sBlock* __result_obj__219;
struct sBlock* default_value_489;
struct sBlock* __result_obj__220;
default_value_489 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_487=self->head;
    i_488=0;
    while(    it_487!=((void*)0)) {
        if(        position==i_488) {
            __result_obj__219 = (struct sBlock*)come_increment_ref_count(it_487->item);
            /*c*/ come_call_finalizer3(__result_obj__219,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__219;
        }
        it_487=it_487->next;
        i_488++;
    }
    memset(&default_value_489,0,sizeof(struct sBlock*));
    __result_obj__220 = (struct sBlock*)come_increment_ref_count(default_value_489);
    /*c*/ come_call_finalizer3(default_value_489,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__220,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value553 = (void*)0;
struct sNode* node_490;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj175;
struct sNode* __result_obj__224;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1649, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value546=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1649, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_490=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value546,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj175=node_490,
    node_490=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_490),info));
    (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__224 = (struct sNode*)come_increment_ref_count(node_490);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_490) ? node_490 = come_decrement_ref_count(node_490, ((struct sNode*)node_490)->finalize, ((struct sNode*)node_490)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__224) ? __result_obj__224 = come_decrement_ref_count(__result_obj__224, ((struct sNode*)__result_obj__224)->finalize, ((struct sNode*)__result_obj__224)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__224;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__222;
void* __right_value547 = (void*)0;
struct sFunCallNode* result_491;
void* __right_value548 = (void*)0;
char* __dec_obj170;
void* __right_value549 = (void*)0;
char* __dec_obj171;
void* __right_value550 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj172;
void* __right_value551 = (void*)0;
struct list$1sType$ph* __dec_obj173;
void* __right_value552 = (void*)0;
struct buffer* __dec_obj174;
struct sFunCallNode* __result_obj__223;
    if(    self==(void*)0) {
        __result_obj__222 = (void*)0;
        return __result_obj__222;
    }
    result_491=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_491->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_491->sname,
        result_491->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_491->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj171=result_491->fun_name,
        result_491->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj172=result_491->params,
        result_491->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj172,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_491->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj173=result_491->method_generics_types,
        result_491->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj173,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj174=result_491->method_block,
        result_491->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj174,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_491->method_block_sline=self->method_block_sline;
    }
    __result_obj__223 = result_491;
    /*c*/ come_call_finalizer3(result_491,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__223;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value555 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value556 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj177;
struct sLambdaCall* __result_obj__225;
    ((struct sNodeBase*)(__right_value555=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value555,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj176=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj177=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj177,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__225 = (struct sLambdaCall*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__225,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value557 = (void*)0;
char* __result_obj__226;
    __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value557=__builtin_string("sLambdaCall"))));
    (__right_value557 = come_decrement_ref_count(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__226;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_492;
struct list$1tuple2$2char$phsNode$ph$ph* params_493;
_Bool Value_494;
_Bool __result_obj__227;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_495;
struct sType* lambda_type_496;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* result_type_497;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1CVALUE$ph* come_params_498;
void* __right_value563 = (void*)0;
_Bool __result_obj__228;
int i_499;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_500;
struct tuple2$2char$phsNode$ph* it_501;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_502=0;
struct sNode* node_503=0;
_Bool Value_504;
_Bool __result_obj__229;
void* __right_value564 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value565 = (void*)0;
struct sType* __dec_obj178;
void* __right_value566 = (void*)0;
_Bool _if_conditional17;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
_Bool _if_conditional18;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct buffer* buf_506;
int j_507;
struct list$1CVALUE$ph* o2_saved_508;
struct CVALUE* it_509;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct CVALUE* come_value2_510;
void* __right_value576 = (void*)0;
char* __dec_obj179;
void* __right_value577 = (void*)0;
struct sType* __dec_obj180;
_Bool __result_obj__230;
    node_492=(struct sNode*)come_increment_ref_count(self->node);
    params_493=self->params;
    Value_494=node_compile(node_492,info);
    if(    !Value_494) {
        __result_obj__227 = (_Bool)0;
        ((node_492) ? node_492 = come_decrement_ref_count(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__227;
    }
    else {
    }
    come_value_495=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_496=come_value_495->type;
    if(    lambda_type_496->mResultType==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value559=err_msg(info,"invalid lambda type")));
        /*c*/ come_call_finalizer3(__right_value559,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_497=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_496->mResultType));
    result_type_497->mStatic=(_Bool)0;
    come_params_498=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1691, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_496->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_493)&&!lambda_type_496->mVarArgs) {
        ((struct tuple2$2int$bool$*)(__right_value563=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_496->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_493))));
        /*c*/ come_call_finalizer3(__right_value563,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__228 = (_Bool)0;
        ((node_492) ? node_492 = come_decrement_ref_count(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_495,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_497,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_498,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__228;
    }
    i_499=0;
    for(    o2_saved_500=(params_493),it_501=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_500));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_500));    it_501=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_500))    ){
        multiple_assign_var11=it_501;
        label_502=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_503=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        Value_504=node_compile(node_503,info);
        if(        !Value_504) {
            __result_obj__229 = (_Bool)0;
            (label_502 = come_decrement_ref_count(label_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_503) ? node_503 = come_decrement_ref_count(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_492) ? node_492 = come_decrement_ref_count(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_495,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_497,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_498,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__229;
        }
        else {
        }
        come_value_505=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj178=come_value_505->type,
        come_value_505->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_505->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        (_if_conditional17=(lambda_type_496->mVarArgs&&((struct sType*)(__right_value566=list$1sType$ph_operator_load_element(lambda_type_496->mParamTypes,i_499)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value566,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional17) {
        }
        else {
            check_assign_type(((char*)(__right_value568=xsprintf("calling param #\%s",((char*)(__right_value567=int_to_string(i_499)))))),((struct sType*)(__right_value569=list$1sType$ph_operator_load_element(lambda_type_496->mParamTypes,i_499))),come_value_505->type,come_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value569,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional18=(((struct sType*)(__right_value570=list$1sType$ph_operator_load_element(lambda_type_496->mParamTypes,i_499)))->mHeap&&come_value_505->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value570,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                std_move(((struct sType*)(__right_value571=list$1sType$ph_operator_load_element(lambda_type_496->mParamTypes,i_499))),come_value_505->type,come_value_505,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value571,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params_498,(struct CVALUE*)come_increment_ref_count(come_value_505));
        i_499++;
        (label_502 = come_decrement_ref_count(label_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_503) ? node_503 = come_decrement_ref_count(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_505,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1723, "struct buffer*"))));
    buffer_append_str(buf_506,"(");
    buffer_append_str(buf_506,come_value_495->c_value);
    buffer_append_str(buf_506,")");
    buffer_append_str(buf_506,"(");
    j_507=0;
    for(    o2_saved_508=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_498)),it_509=list$1CVALUE$ph_begin((o2_saved_508));    !list$1CVALUE$ph_end((o2_saved_508));    it_509=list$1CVALUE$ph_next((o2_saved_508))    ){
        buffer_append_str(buf_506,it_509->c_value);
        if(        j_507!=list$1CVALUE$ph_length(come_params_498)-1) {
            buffer_append_str(buf_506,",");
        }
        j_507++;
    }
    /*c*/ come_call_finalizer3(o2_saved_508,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_506,")");
    come_value2_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1742, "struct CVALUE*"))));
    __dec_obj179=come_value2_510->c_value,
    come_value2_510->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_506));
    __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_496->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_510,(struct sType*)come_increment_ref_count(lambda_type_496->mResultType),info,(_Bool)0,((void*)0));
    }
    __dec_obj180=come_value2_510->type,
    come_value2_510->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_497));
    /*b*/ come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_510->type->mStatic=(_Bool)0;
    come_value2_510->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_510->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_510));
    __result_obj__230 = (_Bool)1;
    ((node_492) ? node_492 = come_decrement_ref_count(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_495,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_497,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_498,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_506,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_510,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__230;
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
void* __right_value578 = (void*)0;
struct sType* __dec_obj181;
struct sVarArgTypeName* __result_obj__231;
    ((struct sNodeBase*)(__right_value578=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value578,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj181=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__231 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__231,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value579 = (void*)0;
char* __result_obj__232;
    __result_obj__232 = (char*)come_increment_ref_count(((char*)(__right_value579=__builtin_string("sVarArgTypeName"))));
    (__right_value579 = come_decrement_ref_count(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__232;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_511;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct CVALUE* come_value_512;
void* __right_value582 = (void*)0;
char* __dec_obj182;
struct sType* __dec_obj183;
_Bool __result_obj__233;
    type_511=(struct sType*)come_increment_ref_count(self->type);
    come_value_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1779, "struct CVALUE*"))));
    __dec_obj182=come_value_512->c_value,
    come_value_512->c_value=(char*)come_increment_ref_count(make_type_name_string(type_511,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj183=come_value_512->type,
    come_value_512->type=(struct sType*)come_increment_ref_count(type_511);
    /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_512->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_512));
    __result_obj__233 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_511,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_512,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
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
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct list$1sType$ph* method_generics_types_513;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_514=0;
char* name_515=0;
_Bool err_516=0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_517;
_Bool _va_arg_518;
char* p_519;
int sline_520;
_Bool err_flag_521;
void* __right_value591 = (void*)0;
char* label_522;
void* __right_value592 = (void*)0;
char* __dec_obj184;
char* __dec_obj185;
_Bool no_comma_523;
_Bool in_fun_param_524;
void* __right_value593 = (void*)0;
struct sNode* node_525;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj186;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct buffer* method_block_530;
int method_block_sline_531;
char* head_532;
void* __right_value600 = (void*)0;
char* tail_533;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct buffer* __dec_obj192;
int len_534;
void* __right_value603 = (void*)0;
char* mem_535;
_Bool guard_break_536;
struct sNode* node_537;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value610 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj196;
struct sNode* __result_obj__236;
node_537 = (void*)0;
    method_generics_types_513=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1793, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1) {
            if(            *info->p==0) {
                ((struct tuple2$2int$bool$*)(__right_value585=err_msg(info,"unexpected source end")));
                /*c*/ come_call_finalizer3(__right_value585,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
                multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value586=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_514=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_515=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                err_516=multiple_assign_var12->v3;
                /*c*/ come_call_finalizer3(__right_value586,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_516) {
                    ((struct tuple2$2int$bool$*)(__right_value587=err_msg(info,"invalid method generics paramtor type")));
                    /*c*/ come_call_finalizer3(__right_value587,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_513,(struct sType*)come_increment_ref_count(sType_clone(type_514)));
                /*c*/ come_call_finalizer3(type_514,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_515 = come_decrement_ref_count(name_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_517=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1831, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_518=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_519=info->p;
        sline_520=info->sline;
        err_flag_521=(_Bool)0;
        label_522=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj184=label_522,
            label_522=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_521=(_Bool)1;
        }
        if(        err_flag_521==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj185=label_522,
            label_522=((void*)0);
            __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_519;
            info->sline=sline_520;
        }
        no_comma_523=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_524=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_525=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj186=node_525,
        node_525=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_525),info));
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_523;
        info->in_fun_param=in_fun_param_524;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_517,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1879, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_522),(struct sNode*)come_increment_ref_count(node_525))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_522 = come_decrement_ref_count(label_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_525) ? node_525 = come_decrement_ref_count(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_522 = come_decrement_ref_count(label_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_525) ? node_525 = come_decrement_ref_count(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_518;
    parse_sharp_v5(info);
    method_block_530=((void*)0);
    method_block_sline_531=0;
    if(    *info->p==123) {
        head_532=info->p;
        method_block_sline_531=info->sline;
        ((char*)(__right_value600=skip_block(info,(_Bool)0)));
        (__right_value600 = come_decrement_ref_count(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_533=info->p;
        __dec_obj192=method_block_530,
        method_block_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1909, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj192,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_534=tail_533-head_532;
        mem_535=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_534+1)), "05call.c", 1912, "char*"));
        memcpy(mem_535,head_532,len_534);
        mem_535[len_534]=0;
        buffer_append_str(method_block_530,mem_535);
        buffer_append_str(method_block_530,"\n");
        (mem_535 = come_decrement_ref_count(mem_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    guard_break_536=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_536=(_Bool)1;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1930, "struct sNode");
        _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value605=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1930, "struct sFunCallNode*")),fun_name,params_517,guard_break_536,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_513),(struct buffer*)come_increment_ref_count(method_block_530),method_block_sline_531,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sFunCallNode_finalize;
        _inf_value4->clone=(void*)sFunCallNode_clone;
        _inf_value4->compile=(void*)sFunCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sFunCallNode_terminated;
        _inf_value4->kind=(void*)sFunCallNode_kind;
        __dec_obj193=node_537,
        node_537=(struct sNode*)come_increment_ref_count(_inf_value4);
        (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value605,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj194=node_537,
        node_537=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_537),info));
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    else {
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1935, "struct sNode");
        _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value609=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1935, "struct sFunCallNode*")),fun_name,params_517,guard_break_536,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_513),(struct buffer*)come_increment_ref_count(method_block_530),method_block_sline_531,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sFunCallNode_finalize;
        _inf_value5->clone=(void*)sFunCallNode_clone;
        _inf_value5->compile=(void*)sFunCallNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sFunCallNode_terminated;
        _inf_value5->kind=(void*)sFunCallNode_kind;
        __dec_obj195=node_537,
        node_537=(struct sNode*)come_increment_ref_count(_inf_value5);
        (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value609,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj196=node_537,
        node_537=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_537),info));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    parse_sharp_v5(info);
    __result_obj__236 = (struct sNode*)come_increment_ref_count(node_537);
    /*c*/ come_call_finalizer3(method_generics_types_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_517,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_530,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_537) ? node_537 = come_decrement_ref_count(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__236) ? __result_obj__236 = come_decrement_ref_count(__result_obj__236, ((struct sNode*)__result_obj__236)->finalize, ((struct sNode*)__result_obj__236)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__236;
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
void* __right_value595 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_526;
struct tuple2$2char$phsNode$ph* __dec_obj187;
void* __right_value596 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_527;
struct tuple2$2char$phsNode$ph* __dec_obj188;
void* __right_value597 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_528;
struct tuple2$2char$phsNode$ph* __dec_obj189;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__234;
    if(    self->len==0) {
        litem_526=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value595=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_526->prev=((void*)0);
        litem_526->next=((void*)0);
        __dec_obj187=litem_526->item,
        litem_526->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj187,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_526;
        self->head=litem_526;
    }
    else if(    self->len==1) {
        litem_527=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value596=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_527->prev=self->head;
        litem_527->next=((void*)0);
        __dec_obj188=litem_527->item,
        litem_527->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj188,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_527;
        self->head->next=litem_527;
    }
    else {
        litem_528=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value597=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_528->prev=self->tail;
        litem_528->next=((void*)0);
        __dec_obj189=litem_528->item,
        litem_528->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj189,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_528;
        self->tail=litem_528;
    }
    self->len++;
    __result_obj__234 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_529;
    result_529=0;
    result_529+=int_get_hash_key(((int)self->v1));
    result_529+=int_get_hash_key(((int)self->v2));
    return result_529;
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
char* __dec_obj190;
struct sNode* __dec_obj191;
struct tuple2$2char$phsNode$ph* __result_obj__235;
    __dec_obj190=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj191=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__235 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__235,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__235;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value612 = (void*)0;
struct sNode* __result_obj__237;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    ((struct tuple2$2int$bool$*)(__right_value612=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    /*c*/ come_call_finalizer3(__right_value612,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    stackframe_v2();
    exit(3);
    __result_obj__237 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__237) ? __result_obj__237 = come_decrement_ref_count(__result_obj__237, ((struct sNode*)__result_obj__237)->finalize, ((struct sNode*)__result_obj__237)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__237;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value619 = (void*)0;
struct sNode* __result_obj__240;
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1959, "struct sNode");
    _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value614=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1959, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sReturnNode_finalize;
    _inf_value6->clone=(void*)sReturnNode_clone;
    _inf_value6->compile=(void*)sReturnNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sReturnNode_kind;
    __result_obj__240 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value619=_inf_value6)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value614,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value619) ? __right_value619 = come_decrement_ref_count(__right_value619, ((struct sNode*)__right_value619)->finalize, ((struct sNode*)__right_value619)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__240) ? __result_obj__240 = come_decrement_ref_count(__result_obj__240, ((struct sNode*)__result_obj__240)->finalize, ((struct sNode*)__result_obj__240)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__240;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__238;
void* __right_value615 = (void*)0;
struct sReturnNode* result_538;
void* __right_value616 = (void*)0;
char* __dec_obj197;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value618 = (void*)0;
char* __dec_obj199;
struct sReturnNode* __result_obj__239;
    if(    self==(void*)0) {
        __result_obj__238 = (void*)0;
        return __result_obj__238;
    }
    result_538=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_538->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_538->sname,
        result_538->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_538->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj198=result_538->value,
        result_538->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj199=result_538->value_source,
        result_538->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__239 = result_538;
    /*c*/ come_call_finalizer3(result_538,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__239;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value623 = (void*)0;
struct sNode* __result_obj__241;
char* head_539;
void* __right_value624 = (void*)0;
struct sNode* value_540;
char* tail_541;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj200;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value629 = (void*)0;
struct sNode* __result_obj__242;
int nest_543;
char* head_544;
int head_sline_545;
int sline_real_546;
void* __right_value630 = (void*)0;
char* buf_547;
_Bool is_type_name__548;
_Bool is_special_word_550;
_Bool define_function_pointer_flag_551;
void* __right_value631 = (void*)0;
_Bool lambda_flag_552;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
char* word2_553;
_Bool fun_name_with_type_name_554;
void* __right_value634 = (void*)0;
char* word2_555;
_Bool call_method_generics_fun_call_556;
void* __right_value635 = (void*)0;
char* __dec_obj201;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
_Bool _if_conditional19;
int nest_557;
_Bool inline_asm_558;
void* __right_value642 = (void*)0;
char* __dec_obj202;
void* __right_value643 = (void*)0;
char* __dec_obj203;
void* __right_value644 = (void*)0;
char* __dec_obj204;
void* __right_value645 = (void*)0;
struct sNode* node_559;
struct sNode* __result_obj__243;
_Bool no_comma_560;
void* __right_value646 = (void*)0;
struct sNode* exp_561;
void* __right_value647 = (void*)0;
struct sNode* exp2_562;
void* __right_value648 = (void*)0;
struct sNode* __result_obj__244;
void* __right_value649 = (void*)0;
char* block_text_563;
char* contents_564;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* _inf_value9;
struct sOutputNode* _inf_obj_value9;
void* __right_value655 = (void*)0;
struct sNode* __result_obj__247;
void* __right_value656 = (void*)0;
struct sNode* node_566;
struct sNode* __result_obj__248;
void* __right_value657 = (void*)0;
struct sNode* node_567;
struct sNode* __result_obj__249;
struct buffer* come_block_568;
int come_block_sline_569;
char* head_570;
void* __right_value658 = (void*)0;
char* tail_571;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct buffer* __dec_obj207;
int len_572;
void* __right_value661 = (void*)0;
char* mem_573;
char* head_574;
_Bool no_output_come_code_575;
void* __right_value662 = (void*)0;
char* tail_576;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct buffer* __dec_obj208;
int len_577;
void* __right_value665 = (void*)0;
char* mem_578;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value10;
struct sComeCallNode* _inf_obj_value10;
void* __right_value671 = (void*)0;
struct sNode* node_579;
struct sNode* __result_obj__252;
struct buffer* come_block_581;
int come_block_sline_582;
void* __right_value672 = (void*)0;
struct sNode* node_583;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* _inf_value11;
struct sComeJoinNode* _inf_obj_value11;
void* __right_value678 = (void*)0;
struct sNode* __result_obj__255;
int time_out_585;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1sNode$ph* vars_586;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct list$1sBlock$ph* blocks_587;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sBlock* else_block_588;
void* __right_value685 = (void*)0;
struct sBlock* __dec_obj213;
void* __right_value686 = (void*)0;
struct sNode* var_name_589;
void* __right_value687 = (void*)0;
struct sBlock* block_590;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* _inf_value12;
struct sComePollNode* _inf_obj_value12;
void* __right_value737 = (void*)0;
struct sNode* __result_obj__279;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sNode* _inf_value13;
struct sFuncNode* _inf_obj_value13;
void* __right_value742 = (void*)0;
struct sNode* __result_obj__282;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value14;
struct sWildCard* _inf_obj_value14;
void* __right_value747 = (void*)0;
struct sNode* __result_obj__285;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* _inf_value15;
struct sLineNode* _inf_obj_value15;
void* __right_value752 = (void*)0;
struct sNode* __result_obj__288;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* _inf_value16;
struct sSNameNode* _inf_obj_value16;
void* __right_value757 = (void*)0;
struct sNode* __result_obj__291;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sNode* _inf_value17;
struct sCallerFuncNode* _inf_obj_value17;
void* __right_value762 = (void*)0;
struct sNode* __result_obj__294;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sNode* _inf_value18;
struct sCallerLineNode* _inf_obj_value18;
void* __right_value767 = (void*)0;
struct sNode* __result_obj__297;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sNode* _inf_value19;
struct sCallerSNameNode* _inf_obj_value19;
void* __right_value772 = (void*)0;
struct sNode* __result_obj__300;
void* __right_value773 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_635=0;
char* name_636=0;
_Bool err_637=0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* _inf_value20;
struct sVarArgTypeName* _inf_obj_value20;
void* __right_value779 = (void*)0;
struct sNode* __result_obj__303;
void* __right_value780 = (void*)0;
struct sNode* node_639;
struct sNode* __result_obj__304;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct buffer* buf2_640;
void* __right_value783 = (void*)0;
char* word_641;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct list$1sNode$ph* exps_642;
void* __right_value786 = (void*)0;
struct sNode* exp_643;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value21;
struct sInlineAssembler* _inf_obj_value21;
void* __right_value795 = (void*)0;
struct sNode* __result_obj__307;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct buffer* fun_name_645;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sType* type_646;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sClass* klass_653;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sType* __dec_obj242;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
char* buf2_654;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* node_655;
struct sNode* __result_obj__316;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct buffer* fun_name_656;
void* __right_value814 = (void*)0;
char* buf2_657;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sNode* node_658;
struct sNode* __result_obj__317;
void* __right_value817 = (void*)0;
struct sNode* node_659;
struct sNode* __result_obj__318;
void* __right_value818 = (void*)0;
struct sNode* node_660;
struct sNode* __result_obj__319;
void* __right_value819 = (void*)0;
struct sNode* node_661;
struct sNode* __result_obj__320;
void* __right_value820 = (void*)0;
struct sNode* node_662;
struct sNode* __result_obj__321;
void* __right_value821 = (void*)0;
struct sNode* __result_obj__322;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value622=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result_obj__241 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value623=_inf_value7)));
            /*c*/ come_call_finalizer3(__right_value622,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value623) ? __right_value623 = come_decrement_ref_count(__right_value623, ((struct sNode*)__right_value623)->finalize, ((struct sNode*)__right_value623)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__241) ? __result_obj__241 = come_decrement_ref_count(__result_obj__241, ((struct sNode*)__result_obj__241)->finalize, ((struct sNode*)__result_obj__241)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__241;
        }
        else {
            head_539=info->p;
            value_540=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_541=info->p;
            __dec_obj200=value_540,
            value_540=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_540),info));
            (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_542[tail_541-head_539+1];
            memset(&buf_542, 0, sizeof(char)            *(tail_541-head_539+1)            );
            memcpy(buf_542,head_539,tail_541-head_539);
            buf_542[tail_541-head_539]=0;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1984, "struct sNode");
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value628=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1984, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_540),(char*)come_increment_ref_count(__builtin_string(buf_542)),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__242 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value629=_inf_value8)));
            ((value_540) ? value_540 = come_decrement_ref_count(value_540, ((struct sNode*)value_540)->finalize, ((struct sNode*)value_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value628,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value629) ? __right_value629 = come_decrement_ref_count(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__242;
            ((value_540) ? value_540 = come_decrement_ref_count(value_540, ((struct sNode*)value_540)->finalize, ((struct sNode*)value_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_543=0;
        while(        1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_543++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_543--;
                if(                nest_543==0) {
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
        head_544=info->p;
        head_sline_545=info->sline;
        sline_real_546=info->sline_real;
        info->sline_real=info->sline;
        buf_547=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__548=is_type_name(buf_547,info);
        static char* is_special_word_array_549[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_550=charppa_contained(is_special_word_array_549,19,buf_547);
        define_function_pointer_flag_551=(_Bool)0;
        if(        !is_special_word_550&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value631=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value631,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_551=(_Bool)1;
                }
            }
            info->p=head_544;
            info->sline=head_sline_545;
        }
        lambda_flag_552=(_Bool)0;
        if(        !is_special_word_550&&is_type_name__548) {
            info->p=head_544;
            info->sline=head_sline_545;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value632=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value632,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_553=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_553,"lambda")) {
                lambda_flag_552=(_Bool)1;
            }
            info->p=head_544;
            info->sline=head_sline_545;
            (word2_553 = come_decrement_ref_count(word2_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_554=(_Bool)0;
        if(        !is_special_word_550) {
            info->p=head_544;
            info->sline=head_sline_545;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_555=(char*)come_increment_ref_count(parse_word(info));
                (word2_555 = come_decrement_ref_count(word2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_554=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_544;
            info->sline=head_sline_545;
        }
        call_method_generics_fun_call_556=(_Bool)0;
        {
            info->p=head_544;
            info->sline=head_sline_545;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj201=buf_547,
                buf_547=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional19=(!is_type_name(buf_547,info)&&((struct sVar*)(__right_value638=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value637=__builtin_string(buf_547))))))==((void*)0)&&((struct sVar*)(__right_value641=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value640=__builtin_string(buf_547))))))==((void*)0)&&*info->p==60)),            (__right_value636 = come_decrement_ref_count(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value637 = come_decrement_ref_count(__right_value637, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value638,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value639 = come_decrement_ref_count(__right_value639, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value640 = come_decrement_ref_count(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value641,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                nest_557=0;
                while(                *info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_557++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_557==0) {
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
                    call_method_generics_fun_call_556=(_Bool)1;
                }
            }
            info->p=head_544;
            info->sline=head_sline_545;
        }
        inline_asm_558=(_Bool)0;
        {
            info->p=head_544;
            info->sline=head_sline_545;
            __dec_obj202=buf_547,
            buf_547=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_547,"asm")||string_operator_equals(buf_547,"__asm")||string_operator_equals(buf_547,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_558=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj203=buf_547,
                        buf_547=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_558=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_544;
            info->sline=head_sline_545;
        }
        parse_sharp_v5(info);
        __dec_obj204=buf_547,
        buf_547=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_552) {
            info->p=head_544;
            info->sline=head_sline_545;
            node_559=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_546;
            __result_obj__243 = (struct sNode*)come_increment_ref_count(node_559);
            ((node_559) ? node_559 = come_decrement_ref_count(node_559, ((struct sNode*)node_559)->finalize, ((struct sNode*)node_559)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__243) ? __result_obj__243 = come_decrement_ref_count(__result_obj__243, ((struct sNode*)__result_obj__243)->finalize, ((struct sNode*)__result_obj__243)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__243;
            ((node_559) ? node_559 = come_decrement_ref_count(node_559, ((struct sNode*)node_559)->finalize, ((struct sNode*)node_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_547,"_Static_assert")||string_operator_equals(buf_547,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_560=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_561=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_560;
            expected_next_character(44,info);
            exp2_562=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__244 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value648=static_assert_node((struct sNode*)come_increment_ref_count(exp_561),(struct sNode*)come_increment_ref_count(exp2_562),info))));
            ((exp_561) ? exp_561 = come_decrement_ref_count(exp_561, ((struct sNode*)exp_561)->finalize, ((struct sNode*)exp_561)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_562) ? exp2_562 = come_decrement_ref_count(exp2_562, ((struct sNode*)exp2_562)->finalize, ((struct sNode*)exp2_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value648) ? __right_value648 = come_decrement_ref_count(__right_value648, ((struct sNode*)__right_value648)->finalize, ((struct sNode*)__right_value648)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__244;
            ((exp_561) ? exp_561 = come_decrement_ref_count(exp_561, ((struct sNode*)exp_561)->finalize, ((struct sNode*)exp_561)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_562) ? exp2_562 = come_decrement_ref_count(exp2_562, ((struct sNode*)exp2_562)->finalize, ((struct sNode*)exp2_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_547,"output")&&*info->p==123) {
            block_text_563=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
            contents_564=(char*)come_increment_ref_count(block_text_563);
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2222, "struct sNode");
            _inf_obj_value9=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value651=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2222, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_564),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sOutputNode_finalize;
            _inf_value9->clone=(void*)sOutputNode_clone;
            _inf_value9->compile=(void*)sOutputNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sOutputNode_kind;
            __result_obj__247 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value655=_inf_value9)));
            (block_text_563 = come_decrement_ref_count(block_text_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_564 = come_decrement_ref_count(contents_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value651,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value655) ? __right_value655 = come_decrement_ref_count(__right_value655, ((struct sNode*)__right_value655)->finalize, ((struct sNode*)__right_value655)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__247;
            (block_text_563 = come_decrement_ref_count(block_text_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_564 = come_decrement_ref_count(contents_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_547,"extern")) {
            node_566=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__248 = (struct sNode*)come_increment_ref_count(node_566);
            ((node_566) ? node_566 = come_decrement_ref_count(node_566, ((struct sNode*)node_566)->finalize, ((struct sNode*)node_566)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__248;
            ((node_566) ? node_566 = come_decrement_ref_count(node_566, ((struct sNode*)node_566)->finalize, ((struct sNode*)node_566)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_547,"string")||string_operator_equals(buf_547,"wstring"))&&*info->p==40) {
            node_567=(struct sNode*)come_increment_ref_count(parse_function_call(buf_547,info,(_Bool)0));
            info->sline_real=sline_real_546;
            __result_obj__249 = (struct sNode*)come_increment_ref_count(node_567);
            ((node_567) ? node_567 = come_decrement_ref_count(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__249) ? __result_obj__249 = come_decrement_ref_count(__result_obj__249, ((struct sNode*)__result_obj__249)->finalize, ((struct sNode*)__result_obj__249)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__249;
            ((node_567) ? node_567 = come_decrement_ref_count(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_547,"come")) {
            come_block_568=((void*)0);
            come_block_sline_569=0;
            if(            *info->p==123) {
                head_570=info->p;
                come_block_sline_569=info->sline;
                ((char*)(__right_value658=skip_block(info,(_Bool)0)));
                (__right_value658 = come_decrement_ref_count(__right_value658, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_571=info->p;
                __dec_obj207=come_block_568,
                come_block_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2247, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj207,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_572=tail_571-head_570;
                mem_573=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_572+1)), "05call.c", 2250, "char*"));
                memcpy(mem_573,head_570,len_572);
                mem_573[len_572]=0;
                buffer_append_str(come_block_568,mem_573);
                buffer_append_str(come_block_568,"\n");
                (mem_573 = come_decrement_ref_count(mem_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_574=info->p;
                come_block_sline_569=info->sline;
                no_output_come_code_575=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value662=expression_v13(info)));
                ((__right_value662) ? __right_value662 = come_decrement_ref_count(__right_value662, ((struct sNode*)__right_value662)->finalize, ((struct sNode*)__right_value662)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_575;
                tail_576=info->p;
                __dec_obj208=come_block_568,
                come_block_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2268, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj208,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_577=tail_576-head_574;
                mem_578=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_577+1)), "05call.c", 2271, "char*"));
                memcpy(mem_578,head_574,len_577);
                mem_578[len_577]=0;
                buffer_append_str(come_block_568,"{");
                buffer_append_str(come_block_568,mem_578);
                buffer_append_str(come_block_568,"; }");
                buffer_append_str(come_block_568,"return (void*)0;\n}");
                buffer_append_str(come_block_568,"\n");
                (mem_578 = come_decrement_ref_count(mem_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2282, "struct sNode");
            _inf_obj_value10=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value667=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2282, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_568),come_block_sline_569,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeCallNode_finalize;
            _inf_value10->clone=(void*)sComeCallNode_clone;
            _inf_value10->compile=(void*)sComeCallNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeCallNode_terminated;
            _inf_value10->kind=(void*)sComeCallNode_kind;
            node_579=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value667,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_546;
            __result_obj__252 = (struct sNode*)come_increment_ref_count(node_579);
            /*c*/ come_call_finalizer3(come_block_568,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_579) ? node_579 = come_decrement_ref_count(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__252) ? __result_obj__252 = come_decrement_ref_count(__result_obj__252, ((struct sNode*)__result_obj__252)->finalize, ((struct sNode*)__result_obj__252)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__252;
            /*c*/ come_call_finalizer3(come_block_568,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_579) ? node_579 = come_decrement_ref_count(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_547,"come_join")&&*info->p==40) {
            come_block_581=((void*)0);
            come_block_sline_582=0;
            expected_next_character(40,info);
            node_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_546;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2296, "struct sNode");
            _inf_obj_value11=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value674=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2296, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_583),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeJoinNode_finalize;
            _inf_value11->clone=(void*)sComeJoinNode_clone;
            _inf_value11->compile=(void*)sComeJoinNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeJoinNode_terminated;
            _inf_value11->kind=(void*)sComeJoinNode_kind;
            __result_obj__255 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value678=_inf_value11)));
            /*c*/ come_call_finalizer3(come_block_581,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_583) ? node_583 = come_decrement_ref_count(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value674,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value678) ? __right_value678 = come_decrement_ref_count(__right_value678, ((struct sNode*)__right_value678)->finalize, ((struct sNode*)__right_value678)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__255) ? __result_obj__255 = come_decrement_ref_count(__result_obj__255, ((struct sNode*)__result_obj__255)->finalize, ((struct sNode*)__result_obj__255)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__255;
            /*c*/ come_call_finalizer3(come_block_581,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_583) ? node_583 = come_decrement_ref_count(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_547,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_585=1;
            if(            *info->p==40) {
                info->p++;
                while(                xisdigit(*info->p)) {
                    time_out_585=time_out_585*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_586=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2314, "struct list$1sNode$ph*"))));
            blocks_587=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2315, "struct list$1sBlock$ph*"))));
            else_block_588=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2316, "struct sBlock*"))));
            while(            1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj213=else_block_588,
                    else_block_588=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj213,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_589=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_590=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_586,(struct sNode*)come_increment_ref_count(var_name_589));
                    list$1sBlock$ph_add(blocks_587,(struct sBlock*)come_increment_ref_count(block_590));
                    if(                    *info->p==125) {
                        ((var_name_589) ? var_name_589 = come_decrement_ref_count(var_name_589, ((struct sNode*)var_name_589)->finalize, ((struct sNode*)var_name_589)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_590,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_589) ? var_name_589 = come_decrement_ref_count(var_name_589, ((struct sNode*)var_name_589)->finalize, ((struct sNode*)var_name_589)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_590,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_546;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2346, "struct sNode");
            _inf_obj_value12=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value692=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2346, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_586),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_587),(struct sBlock*)come_increment_ref_count(else_block_588),time_out_585,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComePollNode_finalize;
            _inf_value12->clone=(void*)sComePollNode_clone;
            _inf_value12->compile=(void*)sComePollNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComePollNode_terminated;
            _inf_value12->kind=(void*)sComePollNode_kind;
            __result_obj__279 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value737=_inf_value12)));
            /*c*/ come_call_finalizer3(vars_586,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_587,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_588,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value692,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value737) ? __right_value737 = come_decrement_ref_count(__right_value737, ((struct sNode*)__right_value737)->finalize, ((struct sNode*)__right_value737)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__279) ? __result_obj__279 = come_decrement_ref_count(__result_obj__279, ((struct sNode*)__result_obj__279)->finalize, ((struct sNode*)__result_obj__279)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__279;
            /*c*/ come_call_finalizer3(vars_586,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_587,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_588,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(buf_547,"__func__")||string_operator_equals(buf_547,"__FUNCTION__")) {
            info->sline_real=sline_real_546;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2351, "struct sNode");
            _inf_obj_value13=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value739=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2351, "struct sFuncNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFuncNode_finalize;
            _inf_value13->clone=(void*)sFuncNode_clone;
            _inf_value13->compile=(void*)sFuncNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFuncNode_kind;
            __result_obj__282 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value742=_inf_value13)));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value739,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value742) ? __right_value742 = come_decrement_ref_count(__right_value742, ((struct sNode*)__right_value742)->finalize, ((struct sNode*)__right_value742)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__282) ? __result_obj__282 = come_decrement_ref_count(__result_obj__282, ((struct sNode*)__result_obj__282)->finalize, ((struct sNode*)__result_obj__282)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__282;
        }
        else if(        !gComeC&&string_operator_equals(buf_547,"wildcard")) {
            info->sline_real=sline_real_546;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2355, "struct sNode");
            _inf_obj_value14=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value744=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2355, "struct sWildCard*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sWildCard_finalize;
            _inf_value14->clone=(void*)sWildCard_clone;
            _inf_value14->compile=(void*)sWildCard_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sWildCard_kind;
            __result_obj__285 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value747=_inf_value14)));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value744,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value747) ? __right_value747 = come_decrement_ref_count(__right_value747, ((struct sNode*)__right_value747)->finalize, ((struct sNode*)__right_value747)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__285) ? __result_obj__285 = come_decrement_ref_count(__result_obj__285, ((struct sNode*)__result_obj__285)->finalize, ((struct sNode*)__result_obj__285)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__285;
        }
        else if(        string_operator_equals(buf_547,"__line__")||string_operator_equals(buf_547,"__LINE__")) {
            info->sline_real=sline_real_546;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode");
            _inf_obj_value15=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value749=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2359, "struct sLineNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLineNode_finalize;
            _inf_value15->clone=(void*)sLineNode_clone;
            _inf_value15->compile=(void*)sLineNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLineNode_kind;
            __result_obj__288 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value752=_inf_value15)));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value749,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value752) ? __right_value752 = come_decrement_ref_count(__right_value752, ((struct sNode*)__right_value752)->finalize, ((struct sNode*)__right_value752)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__288) ? __result_obj__288 = come_decrement_ref_count(__result_obj__288, ((struct sNode*)__result_obj__288)->finalize, ((struct sNode*)__result_obj__288)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__288;
        }
        else if(        string_operator_equals(buf_547,"__sname__")) {
            info->sline_real=sline_real_546;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2363, "struct sNode");
            _inf_obj_value16=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value754=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2363, "struct sSNameNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sSNameNode_finalize;
            _inf_value16->clone=(void*)sSNameNode_clone;
            _inf_value16->compile=(void*)sSNameNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sSNameNode_kind;
            __result_obj__291 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value757=_inf_value16)));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value754,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value757) ? __right_value757 = come_decrement_ref_count(__right_value757, ((struct sNode*)__right_value757)->finalize, ((struct sNode*)__right_value757)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__291) ? __result_obj__291 = come_decrement_ref_count(__result_obj__291, ((struct sNode*)__result_obj__291)->finalize, ((struct sNode*)__result_obj__291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__291;
        }
        else if(        string_operator_equals(buf_547,"__caller_func__")) {
            info->sline_real=sline_real_546;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2367, "struct sNode");
            _inf_obj_value17=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value759=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2367, "struct sCallerFuncNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value17->clone=(void*)sCallerFuncNode_clone;
            _inf_value17->compile=(void*)sCallerFuncNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerFuncNode_kind;
            __result_obj__294 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value762=_inf_value17)));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value759,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value762) ? __right_value762 = come_decrement_ref_count(__right_value762, ((struct sNode*)__right_value762)->finalize, ((struct sNode*)__right_value762)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__294;
        }
        else if(        string_operator_equals(buf_547,"__caller_line__")) {
            info->sline_real=sline_real_546;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2371, "struct sNode");
            _inf_obj_value18=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value764=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2371, "struct sCallerLineNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerLineNode_finalize;
            _inf_value18->clone=(void*)sCallerLineNode_clone;
            _inf_value18->compile=(void*)sCallerLineNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerLineNode_kind;
            __result_obj__297 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value767=_inf_value18)));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value764,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value767) ? __right_value767 = come_decrement_ref_count(__right_value767, ((struct sNode*)__right_value767)->finalize, ((struct sNode*)__right_value767)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__297;
        }
        else if(        string_operator_equals(buf_547,"__caller_sname__")) {
            info->sline_real=sline_real_546;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2375, "struct sNode");
            _inf_obj_value19=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value769=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2375, "struct sCallerSNameNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value19->clone=(void*)sCallerSNameNode_clone;
            _inf_value19->compile=(void*)sCallerSNameNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerSNameNode_kind;
            __result_obj__300 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value772=_inf_value19)));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value769,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value772) ? __right_value772 = come_decrement_ref_count(__right_value772, ((struct sNode*)__right_value772)->finalize, ((struct sNode*)__right_value772)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__300) ? __result_obj__300 = come_decrement_ref_count(__result_obj__300, ((struct sNode*)__result_obj__300)->finalize, ((struct sNode*)__result_obj__300)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__300;
        }
        else if(        info->va_arg&&is_type_name(buf_547,info)) {
            info->p=head_544;
            info->sline=head_sline_545;
            multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value773=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_635=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_636=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_637=multiple_assign_var13->v3;
            /*c*/ come_call_finalizer3(__right_value773,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_546;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value20=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value775=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2384, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_635),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value20->clone=(void*)sVarArgTypeName_clone;
            _inf_value20->compile=(void*)sVarArgTypeName_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sVarArgTypeName_kind;
            __result_obj__303 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value779=_inf_value20)));
            /*c*/ come_call_finalizer3(type_635,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_636 = come_decrement_ref_count(name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value775,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value779) ? __right_value779 = come_decrement_ref_count(__right_value779, ((struct sNode*)__right_value779)->finalize, ((struct sNode*)__right_value779)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__303) ? __result_obj__303 = come_decrement_ref_count(__result_obj__303, ((struct sNode*)__result_obj__303)->finalize, ((struct sNode*)__result_obj__303)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__303;
            /*c*/ come_call_finalizer3(type_635,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_636 = come_decrement_ref_count(name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_547,"sizeof")||string_operator_equals(buf_547,"_Alignof")||string_operator_equals(buf_547,"_Alignas")||string_operator_equals(buf_547,"__alignof__")) {
            node_639=(struct sNode*)come_increment_ref_count(string_node_v21(buf_547,head_544,head_sline_545,info));
            info->sline_real=sline_real_546;
            __result_obj__304 = (struct sNode*)come_increment_ref_count(node_639);
            ((node_639) ? node_639 = come_decrement_ref_count(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__304;
            ((node_639) ? node_639 = come_decrement_ref_count(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_558) {
            buf2_640=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2393, "struct buffer*"))));
            if(            *info->p!=40) {
                word_641=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_640,word_641);
                (word_641 = come_decrement_ref_count(word_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_640,40);
            exps_642=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2404, "struct list$1sNode$ph*"))));
            while(            (_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_640,40);
                    info->p++;
                    exp_643=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_642,(struct sNode*)come_increment_ref_count(exp_643));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_640,41);
                    ((exp_643) ? exp_643 = come_decrement_ref_count(exp_643, ((struct sNode*)exp_643)->finalize, ((struct sNode*)exp_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_640,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_640,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    ((struct tuple2$2int$bool$*)(__right_value787=err_msg(info,"invalid source end at inline assembler")));
                    /*c*/ come_call_finalizer3(__right_value787,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_640,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_546;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2441, "struct sNode");
            _inf_obj_value21=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value790=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2441, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_640)),(struct list$1sNode$ph*)come_increment_ref_count(exps_642),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sInlineAssembler_finalize;
            _inf_value21->clone=(void*)sInlineAssembler_clone;
            _inf_value21->compile=(void*)sInlineAssembler_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sInlineAssembler_kind;
            __result_obj__307 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value795=_inf_value21)));
            /*c*/ come_call_finalizer3(buf2_640,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_642,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value790,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value795) ? __right_value795 = come_decrement_ref_count(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__307;
            /*c*/ come_call_finalizer3(buf2_640,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_642,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_554) {
            fun_name_645=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2444, "struct buffer*"))));
            buffer_append_str(fun_name_645,buf_547);
            type_646=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value800=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value799=buffer_to_string(fun_name_645))))))));
            (__right_value798 = come_decrement_ref_count(__right_value798, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value799 = come_decrement_ref_count(__right_value799, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value800,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_646==((void*)0)) {
                klass_653=((struct sClass*)(__right_value804=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value803=buffer_to_string(fun_name_645))))));
                (__right_value802 = come_decrement_ref_count(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value803 = come_decrement_ref_count(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value804,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_653) {
                    __dec_obj242=type_646,
                    type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2454, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_547)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj242,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value808=err_msg(info,"null type(%s)",buf_547)));
                    /*c*/ come_call_finalizer3(__right_value808,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_646->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_645,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_645,"_");
            buf2_654=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_645,buf2_654);
            node_655=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value810=buffer_to_string(fun_name_645))),info,(_Bool)0));
            (__right_value810 = come_decrement_ref_count(__right_value810, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_546;
            __result_obj__316 = (struct sNode*)come_increment_ref_count(node_655);
            /*c*/ come_call_finalizer3(fun_name_645,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_646,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_654 = come_decrement_ref_count(buf2_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_655) ? node_655 = come_decrement_ref_count(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__316;
            /*c*/ come_call_finalizer3(fun_name_645,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_646,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_654 = come_decrement_ref_count(buf2_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_655) ? node_655 = come_decrement_ref_count(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_656=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2489, "struct buffer*"))));
            buffer_append_str(fun_name_656,buf_547);
            buffer_append_str(fun_name_656,"_");
            buf2_657=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_656,buf2_657);
            node_658=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value815=buffer_to_string(fun_name_656))),info,(_Bool)0));
            (__right_value815 = come_decrement_ref_count(__right_value815, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_546;
            __result_obj__317 = (struct sNode*)come_increment_ref_count(node_658);
            /*c*/ come_call_finalizer3(fun_name_656,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_657 = come_decrement_ref_count(buf2_657, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_658) ? node_658 = come_decrement_ref_count(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__317;
            /*c*/ come_call_finalizer3(fun_name_656,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_657 = come_decrement_ref_count(buf2_657, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_658) ? node_658 = come_decrement_ref_count(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_556) {
            node_659=(struct sNode*)come_increment_ref_count(parse_function_call(buf_547,info,(_Bool)0));
            info->sline_real=sline_real_546;
            __result_obj__318 = (struct sNode*)come_increment_ref_count(node_659);
            ((node_659) ? node_659 = come_decrement_ref_count(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__318;
            ((node_659) ? node_659 = come_decrement_ref_count(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_550&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__548)) {
            node_660=(struct sNode*)come_increment_ref_count(parse_function_call(buf_547,info,(_Bool)0));
            info->sline_real=sline_real_546;
            __result_obj__319 = (struct sNode*)come_increment_ref_count(node_660);
            ((node_660) ? node_660 = come_decrement_ref_count(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__319;
            ((node_660) ? node_660 = come_decrement_ref_count(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_661=(struct sNode*)come_increment_ref_count(string_node_v21(buf_547,head_544,head_sline_545,info));
            info->sline_real=sline_real_546;
            __result_obj__320 = (struct sNode*)come_increment_ref_count(node_661);
            ((node_661) ? node_661 = come_decrement_ref_count(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__320) ? __result_obj__320 = come_decrement_ref_count(__result_obj__320, ((struct sNode*)__result_obj__320)->finalize, ((struct sNode*)__result_obj__320)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__320;
            ((node_661) ? node_661 = come_decrement_ref_count(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_547 = come_decrement_ref_count(buf_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_662=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__321 = (struct sNode*)come_increment_ref_count(node_662);
        ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__321;
        ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    ((struct tuple2$2int$bool$*)(__right_value821=err_msg(info,"unexpected operator(%c)",*info->p)));
    /*c*/ come_call_finalizer3(__right_value821,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__322 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__322;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__245;
void* __right_value652 = (void*)0;
struct sOutputNode* result_565;
void* __right_value653 = (void*)0;
char* __dec_obj205;
void* __right_value654 = (void*)0;
char* __dec_obj206;
struct sOutputNode* __result_obj__246;
    if(    self==(void*)0) {
        __result_obj__245 = (void*)0;
        return __result_obj__245;
    }
    result_565=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_565->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj205=result_565->sname,
        result_565->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_565->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj206=result_565->contents,
        result_565->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__246 = result_565;
    /*c*/ come_call_finalizer3(result_565,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__250;
void* __right_value668 = (void*)0;
struct sComeCallNode* result_580;
void* __right_value669 = (void*)0;
char* __dec_obj209;
void* __right_value670 = (void*)0;
struct buffer* __dec_obj210;
struct sComeCallNode* __result_obj__251;
    if(    self==(void*)0) {
        __result_obj__250 = (void*)0;
        return __result_obj__250;
    }
    result_580=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_580->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj209=result_580->sname,
        result_580->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_580->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj210=result_580->come_block,
        result_580->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_580->come_block_sline=self->come_block_sline;
    }
    __result_obj__251 = result_580;
    /*c*/ come_call_finalizer3(result_580,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__251;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__253;
void* __right_value675 = (void*)0;
struct sComeJoinNode* result_584;
void* __right_value676 = (void*)0;
char* __dec_obj211;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj212;
struct sComeJoinNode* __result_obj__254;
    if(    self==(void*)0) {
        __result_obj__253 = (void*)0;
        return __result_obj__253;
    }
    result_584=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_584->sname,
        result_584->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj212=result_584->node,
        result_584->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__254 = result_584;
    /*c*/ come_call_finalizer3(result_584,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__254;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__256;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__256 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__256,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value688 = (void*)0;
struct list_item$1sBlock$ph* litem_591;
struct sBlock* __dec_obj214;
void* __right_value689 = (void*)0;
struct list_item$1sBlock$ph* litem_592;
struct sBlock* __dec_obj215;
void* __right_value690 = (void*)0;
struct list_item$1sBlock$ph* litem_593;
struct sBlock* __dec_obj216;
struct list$1sBlock$ph* __result_obj__257;
    if(    self->len==0) {
        litem_591=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value688=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1043, "struct list_item$1sBlock$ph*"))));
        litem_591->prev=((void*)0);
        litem_591->next=((void*)0);
        __dec_obj214=litem_591->item,
        litem_591->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj214,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_591;
        self->head=litem_591;
    }
    else if(    self->len==1) {
        litem_592=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value689=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1053, "struct list_item$1sBlock$ph*"))));
        litem_592->prev=self->head;
        litem_592->next=((void*)0);
        __dec_obj215=litem_592->item,
        litem_592->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj215,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_592;
        self->head->next=litem_592;
    }
    else {
        litem_593=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value690=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1063, "struct list_item$1sBlock$ph*"))));
        litem_593->prev=self->tail;
        litem_593->next=((void*)0);
        __dec_obj216=litem_593->item,
        litem_593->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj216,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_593;
        self->tail=litem_593;
    }
    self->len++;
    __result_obj__257 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__258;
void* __right_value693 = (void*)0;
struct sComePollNode* result_594;
void* __right_value694 = (void*)0;
char* __dec_obj217;
void* __right_value695 = (void*)0;
struct list$1sNode$ph* __dec_obj218;
void* __right_value735 = (void*)0;
struct list$1sBlock$ph* __dec_obj228;
void* __right_value736 = (void*)0;
struct sBlock* __dec_obj229;
struct sComePollNode* __result_obj__278;
    if(    self==(void*)0) {
        __result_obj__258 = (void*)0;
        return __result_obj__258;
    }
    result_594=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_594->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj217=result_594->sname,
        result_594->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_594->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj218=result_594->vars,
        result_594->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        /*b*/ come_call_finalizer3(__dec_obj218,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj228=result_594->blocks,
        result_594->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj228,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj229=result_594->else_block,
        result_594->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj229,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_594->time_out=self->time_out;
    }
    __result_obj__278 = result_594;
    /*c*/ come_call_finalizer3(result_594,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__278;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__259;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1sBlock$ph* result_595;
struct list_item$1sBlock$ph* it_596;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct list$1sBlock$ph* __result_obj__277;
    if(    self==((void*)0)) {
        __result_obj__259 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__259,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__259;
    }
    result_595=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1024, "struct list$1sBlock$ph*"))));
    it_596=self->head;
    while(    it_596!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_595,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_596->item)));
        }
        else {
            list$1sBlock$ph_add(result_595,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_596->item)));
        }
        it_596=it_596->next;
    }
    __result_obj__277 = (struct list$1sBlock$ph*)come_increment_ref_count(result_595);
    /*c*/ come_call_finalizer3(result_595,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__277,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__260;
void* __right_value698 = (void*)0;
struct sBlock* result_597;
void* __right_value703 = (void*)0;
struct list$1sNode$ph* __dec_obj219;
void* __right_value732 = (void*)0;
struct sVarTable* __dec_obj227;
struct sBlock* __result_obj__276;
    if(    self==(void*)0) {
        __result_obj__260 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__260,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__260;
    }
    result_597=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj219=result_597->mNodes,
        result_597->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj219,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj227=result_597->mVarTable,
        result_597->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj227,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_597->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__276 = (struct sBlock*)come_increment_ref_count(result_597);
    /*c*/ come_call_finalizer3(result_597,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__276,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__261;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1sNode$ph* result_598;
struct list_item$1sNode$ph* it_599;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct list$1sNode$ph* __result_obj__262;
    if(    self==((void*)0)) {
        __result_obj__261 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__261,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__261;
    }
    result_598=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_599=self->head;
    while(    it_599!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_598,(struct sNode*)come_increment_ref_count(sNode_clone(it_599->item)));
        }
        else {
            list$1sNode$ph_add(result_598,(struct sNode*)come_increment_ref_count(sNode_clone(it_599->item)));
        }
        it_599=it_599->next;
    }
    __result_obj__262 = (struct list$1sNode$ph*)come_increment_ref_count(result_598);
    /*c*/ come_call_finalizer3(result_598,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__263;
void* __right_value704 = (void*)0;
struct sVarTable* result_600;
void* __right_value731 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj226;
struct sVarTable* __result_obj__275;
    if(    self==(void*)0) {
        __result_obj__263 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__263,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__263;
    }
    result_600=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj226=result_600->mVars,
        result_600->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj226,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_600->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_600->mParent=self->mParent;
    }
    __result_obj__275 = (struct sVarTable*)come_increment_ref_count(result_600);
    /*c*/ come_call_finalizer3(result_600,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__264;
void* __right_value705 = (void*)0;
void* __right_value711 = (void*)0;
struct map$2char$phsVar$ph* result_604;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1char$ph* __dec_obj221;
char* it_605;
struct sVar* default_value_606;
void* __right_value714 = (void*)0;
struct sVar* it2_609;
void* __right_value720 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__274;
default_value_606 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__264 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__264,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__264;
    }
    result_604=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1985, "struct map$2char$phsVar$ph*"))));
    __dec_obj221=result_604->key_list,
    result_604->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1987, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj221,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_605=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_605=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_606,0,sizeof(struct sVar*));
        it2_609=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_605,(struct sVar*)come_increment_ref_count(default_value_606)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_604,(char*)come_increment_ref_count((char*)come_memdup(it_605, "./comelang.h", 1996, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_609)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_604,(char*)come_increment_ref_count((char*)come_memdup(it_605, "./comelang.h", 1999, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_609)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_604,(char*)come_increment_ref_count(it_605),(struct sVar*)come_increment_ref_count(sVar_clone(it2_609)));
        }
        else {
            map$2char$phsVar$ph_put(result_604,(char*)come_increment_ref_count(it_605),(struct sVar*)come_increment_ref_count(sVar_clone(it2_609)));
        }
        /*c*/ come_call_finalizer3(default_value_606,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_609,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__274 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_604);
    /*c*/ come_call_finalizer3(result_604,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
int i_601;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct list$1char$ph* __dec_obj220;
struct map$2char$phsVar$ph* __result_obj__266;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value706=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1914, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value707=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1915, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value708=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1916, "_Bool*"))));
    for(    i_601=0;    i_601<128;    i_601++    ){
        self->item_existance[i_601]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj220=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1926, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj220,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__266 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__265;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__265 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_602;
struct list_item$1char$p* prev_it_603;
    it_602=self->head;
    while(    it_602!=((void*)0)) {
        prev_it_603=it_602;
        it_602=it_602->next;
        /*c*/ come_call_finalizer3(prev_it_603,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_607;
unsigned int it_608;
struct sVar* __result_obj__267;
struct sVar* __result_obj__268;
struct sVar* __result_obj__269;
struct sVar* __result_obj__270;
    hash_607=string_get_hash_key(((char*)key))%self->size;
    it_608=hash_607;
    while(    (_Bool)1) {
        if(        self->item_existance[it_608]) {
            if(            string_equals(self->keys[it_608],key)) {
                __result_obj__267 = (struct sVar*)come_increment_ref_count(self->items[it_608]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__267,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__267;
            }
            it_608++;
            if(            it_608>=self->size) {
                it_608=0;
            }
            else if(            it_608==hash_607) {
                __result_obj__268 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__268,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__268;
            }
        }
        else {
            __result_obj__269 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__269,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__269;
        }
    }
    __result_obj__270 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_621;
int it_622;
_Bool same_key_exist_623;
char* it2_624;
struct map$2char$phsVar$ph* __result_obj__271;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_621=string_get_hash_key(((char*)key))%self->size;
    it_622=hash_621;
    while(    (_Bool)1) {
        if(        self->item_existance[it_622]) {
            if(            string_equals(self->keys[it_622],key)) {
                if(                1) {
                    (self->keys[it_622] = come_decrement_ref_count(self->keys[it_622], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_622]);
                    self->keys[it_622]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_622]);
                    self->keys[it_622]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_622],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_622]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_622]=item;
                }
                break;
            }
            it_622++;
            if(            it_622>=self->size) {
                it_622=0;
            }
            else if(            it_622==hash_621) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_622]=(_Bool)1;
            if(            1) {
                self->keys[it_622]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_622]=key;
            }
            if(            1) {
                self->items[it_622]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_622]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_623=(_Bool)0;
    for(    it2_624=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_624=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_624,key)) {
            same_key_exist_623=(_Bool)1;
        }
    }
    if(    !same_key_exist_623) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__271 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_610;
void* __right_value715 = (void*)0;
char** keys_611;
void* __right_value716 = (void*)0;
struct sVar** items_612;
void* __right_value717 = (void*)0;
_Bool* item_existance_613;
int len_614;
char* it_615;
struct sVar* default_value_616;
void* __right_value718 = (void*)0;
struct sVar* it2_617;
unsigned int hash_618;
int n_619;
struct sVar* default_value_620;
void* __right_value719 = (void*)0;
default_value_616 = (void*)0;
default_value_620 = (void*)0;
    size_610=self->size*10;
    keys_611=(char**)come_increment_ref_count(((char**)(__right_value715=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_610)), "./comelang.h", 2153, "char**"))));
    items_612=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value716=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_610)), "./comelang.h", 2154, "struct sVar**"))));
    item_existance_613=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value717=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_610)), "./comelang.h", 2155, "_Bool*"))));
    len_614=0;
    for(    it_615=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_615=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_616,0,sizeof(struct sVar*));
        it2_617=((struct sVar*)(__right_value718=map$2char$phsVar$ph_at(self,it_615,(struct sVar*)come_increment_ref_count(default_value_616))));
        /*c*/ come_call_finalizer3(__right_value718,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_618=string_get_hash_key(((char*)it_615))%size_610;
        n_619=hash_618;
        while(        (_Bool)1) {
            if(            item_existance_613[n_619]) {
                n_619++;
                if(                n_619>=size_610) {
                    n_619=0;
                }
                else if(                n_619==hash_618) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_613[n_619]=(_Bool)1;
                keys_611[n_619]=it_615;
                items_612[n_619]=((struct sVar*)(__right_value719=map$2char$phsVar$ph_at(self,it_615,(struct sVar*)come_increment_ref_count(default_value_620))));
                /*c*/ come_call_finalizer3(__right_value719,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_614++;
                /*c*/ come_call_finalizer3(default_value_620,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_620,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_616,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_611;
    self->items=items_612;
    self->item_existance=item_existance_613;
    self->size=size_610;
    self->len=len_614;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__272;
void* __right_value721 = (void*)0;
struct sVar* result_625;
void* __right_value722 = (void*)0;
char* __dec_obj222;
void* __right_value723 = (void*)0;
char* __dec_obj223;
void* __right_value724 = (void*)0;
struct sType* __dec_obj224;
void* __right_value725 = (void*)0;
char* __dec_obj225;
struct sVar* __result_obj__273;
    if(    self==(void*)0) {
        __result_obj__272 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__272,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__272;
    }
    result_625=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj222=result_625->mName,
        result_625->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj223=result_625->mCValueName,
        result_625->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj224=result_625->mType,
        result_625->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj224,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_625->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_625->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_625->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_625->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj225=result_625->mFunName,
        result_625->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__273 = (struct sVar*)come_increment_ref_count(result_625);
    /*c*/ come_call_finalizer3(result_625,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_626;
int i_627;
    for(    i_626=0;    i_626<self->size;    i_626++    ){
        if(        self->item_existance[i_626]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_626],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_627=0;    i_627<self->size;    i_627++    ){
        if(        self->item_existance[i_627]) {
            if(            1) {
                (self->keys[i_627] = come_decrement_ref_count(self->keys[i_627], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__280;
void* __right_value740 = (void*)0;
struct sFuncNode* result_628;
void* __right_value741 = (void*)0;
char* __dec_obj230;
struct sFuncNode* __result_obj__281;
    if(    self==(void*)0) {
        __result_obj__280 = (void*)0;
        return __result_obj__280;
    }
    result_628=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_628->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_628->sname,
        result_628->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_628->sline_real=self->sline_real;
    }
    __result_obj__281 = result_628;
    /*c*/ come_call_finalizer3(result_628,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__281;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__283;
void* __right_value745 = (void*)0;
struct sWildCard* result_629;
void* __right_value746 = (void*)0;
char* __dec_obj231;
struct sWildCard* __result_obj__284;
    if(    self==(void*)0) {
        __result_obj__283 = (void*)0;
        return __result_obj__283;
    }
    result_629=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_629->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj231=result_629->sname,
        result_629->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_629->sline_real=self->sline_real;
    }
    __result_obj__284 = result_629;
    /*c*/ come_call_finalizer3(result_629,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__284;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__286;
void* __right_value750 = (void*)0;
struct sLineNode* result_630;
void* __right_value751 = (void*)0;
char* __dec_obj232;
struct sLineNode* __result_obj__287;
    if(    self==(void*)0) {
        __result_obj__286 = (void*)0;
        return __result_obj__286;
    }
    result_630=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_630->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_630->sname,
        result_630->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_630->sline_real=self->sline_real;
    }
    __result_obj__287 = result_630;
    /*c*/ come_call_finalizer3(result_630,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__287;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__289;
void* __right_value755 = (void*)0;
struct sSNameNode* result_631;
void* __right_value756 = (void*)0;
char* __dec_obj233;
struct sSNameNode* __result_obj__290;
    if(    self==(void*)0) {
        __result_obj__289 = (void*)0;
        return __result_obj__289;
    }
    result_631=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_631->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_631->sname,
        result_631->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->sline_real=self->sline_real;
    }
    __result_obj__290 = result_631;
    /*c*/ come_call_finalizer3(result_631,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__290;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__292;
void* __right_value760 = (void*)0;
struct sCallerFuncNode* result_632;
void* __right_value761 = (void*)0;
char* __dec_obj234;
struct sCallerFuncNode* __result_obj__293;
    if(    self==(void*)0) {
        __result_obj__292 = (void*)0;
        return __result_obj__292;
    }
    result_632=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_632->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_632->sname,
        result_632->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_632->sline_real=self->sline_real;
    }
    __result_obj__293 = result_632;
    /*c*/ come_call_finalizer3(result_632,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__295;
void* __right_value765 = (void*)0;
struct sCallerLineNode* result_633;
void* __right_value766 = (void*)0;
char* __dec_obj235;
struct sCallerLineNode* __result_obj__296;
    if(    self==(void*)0) {
        __result_obj__295 = (void*)0;
        return __result_obj__295;
    }
    result_633=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_633->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj235=result_633->sname,
        result_633->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->sline_real=self->sline_real;
    }
    __result_obj__296 = result_633;
    /*c*/ come_call_finalizer3(result_633,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__298;
void* __right_value770 = (void*)0;
struct sCallerSNameNode* result_634;
void* __right_value771 = (void*)0;
char* __dec_obj236;
struct sCallerSNameNode* __result_obj__299;
    if(    self==(void*)0) {
        __result_obj__298 = (void*)0;
        return __result_obj__298;
    }
    result_634=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_634->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_634->sname,
        result_634->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_634->sline_real=self->sline_real;
    }
    __result_obj__299 = result_634;
    /*c*/ come_call_finalizer3(result_634,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__301;
void* __right_value776 = (void*)0;
struct sVarArgTypeName* result_638;
void* __right_value777 = (void*)0;
char* __dec_obj237;
void* __right_value778 = (void*)0;
struct sType* __dec_obj238;
struct sVarArgTypeName* __result_obj__302;
    if(    self==(void*)0) {
        __result_obj__301 = (void*)0;
        return __result_obj__301;
    }
    result_638=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_638->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_638->sname,
        result_638->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_638->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj238=result_638->type,
        result_638->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj238,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__302 = result_638;
    /*c*/ come_call_finalizer3(result_638,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__305;
void* __right_value791 = (void*)0;
struct sInlineAssembler* result_644;
void* __right_value792 = (void*)0;
char* __dec_obj239;
void* __right_value793 = (void*)0;
char* __dec_obj240;
void* __right_value794 = (void*)0;
struct list$1sNode$ph* __dec_obj241;
struct sInlineAssembler* __result_obj__306;
    if(    self==(void*)0) {
        __result_obj__305 = (void*)0;
        return __result_obj__305;
    }
    result_644=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_644->sname,
        result_644->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_644->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj240=result_644->source,
        result_644->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj241=result_644->exps,
        result_644->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj241,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__306 = result_644;
    /*c*/ come_call_finalizer3(result_644,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_647;
unsigned int hash_648;
unsigned int it_649;
struct sType* __result_obj__308;
struct sType* __result_obj__309;
struct sType* __result_obj__310;
struct sType* __result_obj__311;
default_value_647 = (void*)0;
    memset(&default_value_647,0,sizeof(struct sType*));
    hash_648=string_get_hash_key(((char*)key))%self->size;
    it_649=hash_648;
    while(    (_Bool)1) {
        if(        self->item_existance[it_649]) {
            if(            string_equals(self->keys[it_649],key)) {
                __result_obj__308 = (struct sType*)come_increment_ref_count(self->items[it_649]);
                /*c*/ come_call_finalizer3(default_value_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__308,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__308;
            }
            it_649++;
            if(            it_649>=self->size) {
                it_649=0;
            }
            else if(            it_649==hash_648) {
                __result_obj__309 = (struct sType*)come_increment_ref_count(default_value_647);
                /*c*/ come_call_finalizer3(default_value_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__309;
            }
        }
        else {
            __result_obj__310 = (struct sType*)come_increment_ref_count(default_value_647);
            /*c*/ come_call_finalizer3(default_value_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__310;
        }
    }
    __result_obj__311 = (struct sType*)come_increment_ref_count(default_value_647);
    /*c*/ come_call_finalizer3(default_value_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__311;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_650;
unsigned int hash_651;
unsigned int it_652;
struct sType* __result_obj__312;
struct sType* __result_obj__313;
struct sType* __result_obj__314;
struct sType* __result_obj__315;
default_value_650 = (void*)0;
    memset(&default_value_650,0,sizeof(struct sType*));
    hash_651=string_get_hash_key(((char*)key))%self->size;
    it_652=hash_651;
    while(    (_Bool)1) {
        if(        self->item_existance[it_652]) {
            if(            string_equals(self->keys[it_652],key)) {
                __result_obj__312 = (struct sType*)come_increment_ref_count(self->items[it_652]);
                /*c*/ come_call_finalizer3(default_value_650,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__312,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__312;
            }
            it_652++;
            if(            it_652>=self->size) {
                it_652=0;
            }
            else if(            it_652==hash_651) {
                __result_obj__313 = (struct sType*)come_increment_ref_count(default_value_650);
                /*c*/ come_call_finalizer3(default_value_650,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__313,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__313;
            }
        }
        else {
            __result_obj__314 = (struct sType*)come_increment_ref_count(default_value_650);
            /*c*/ come_call_finalizer3(default_value_650,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__314;
        }
    }
    __result_obj__315 = (struct sType*)come_increment_ref_count(default_value_650);
    /*c*/ come_call_finalizer3(default_value_650,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__315,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value822 = (void*)0;
struct sNode* __result_obj__323;
    __result_obj__323 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value822=expression_node_v99(info))));
    ((__right_value822) ? __right_value822 = come_decrement_ref_count(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__323;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* __dec_obj243;
struct sNode* __result_obj__324;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct sNode* __dec_obj244;
struct sNode* __result_obj__325;
struct sNode* __result_obj__326;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj243=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__324 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__324;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj244=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__325 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__325;
    }
    __result_obj__326 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__326;
}

struct sNode* statment(struct sInfo* info){
void* __right_value827 = (void*)0;
struct sNode* node_663;
void* __right_value828 = (void*)0;
struct sNode* __dec_obj245;
struct sNode* __result_obj__327;
    node_663=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj245=node_663,
    node_663=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_663),info));
    (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__327 = (struct sNode*)come_increment_ref_count(node_663);
    ((node_663) ? node_663 = come_decrement_ref_count(node_663, ((struct sNode*)node_663)->finalize, ((struct sNode*)node_663)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__327;
}

char* get_none_generics_name(char* class_name){
char* p_664;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
char* __result_obj__328;
void* __right_value831 = (void*)0;
char* __result_obj__329;
    p_664=class_name;
    while(    *p_664) {
        if(        *p_664==36) {
            __result_obj__328 = (char*)come_increment_ref_count(((char*)(__right_value830=charp_substring(((char*)(__right_value829=__builtin_string(class_name))),0,p_664-class_name))));
            (__right_value829 = come_decrement_ref_count(__right_value829, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value830 = come_decrement_ref_count(__right_value830, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__328 = come_decrement_ref_count(__result_obj__328, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__328;
        }
        else {
            p_664++;
        }
    }
    __result_obj__329 = (char*)come_increment_ref_count(((char*)(__right_value831=__builtin_string(class_name))));
    (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__329 = come_decrement_ref_count(__result_obj__329, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__329;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* buf_665;
struct sClass* klass_666;
char* class_name_667;
int i_668;
void* __right_value834 = (void*)0;
struct sType* type_669;
void* __right_value835 = (void*)0;
char* type_name_670;
int i_671;
void* __right_value836 = (void*)0;
char* __result_obj__330;
    buf_665=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2589, "struct buffer*"))));
    klass_666=generics_type->mClass;
    class_name_667=klass_666->mName;
    buffer_append_str(buf_665,class_name_667);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_665,36);
        buffer_append_char(buf_665,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_668=0;        i_668<list$1sType$ph_length(generics_type->mGenericsTypes);        i_668++        ){
            type_669=((struct sType*)(__right_value834=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_668)));
            /*c*/ come_call_finalizer3(__right_value834,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_670=(char*)come_increment_ref_count(create_generics_name(type_669,info));
            buffer_append_str(buf_665,type_name_670);
            buffer_append_char(buf_665,36);
            for(            i_671=0;            i_671<type_669->mPointerNum;            i_671++            ){
                buffer_append_char(buf_665,112);
            }
            if(            type_669->mHeap) {
                buffer_append_str(buf_665,"h");
            }
            (type_name_670 = come_decrement_ref_count(type_name_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__330 = (char*)come_increment_ref_count(((char*)(__right_value836=buffer_to_string(buf_665))));
    /*c*/ come_call_finalizer3(buf_665,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value836 = come_decrement_ref_count(__right_value836, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__330 = come_decrement_ref_count(__result_obj__330, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__330;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_672;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct buffer* buf_673;
void* __right_value839 = (void*)0;
char* __dec_obj246;
void* __right_value840 = (void*)0;
char* __dec_obj247;
int i_674;
void* __right_value841 = (void*)0;
char* __dec_obj248;
void* __right_value842 = (void*)0;
char* __dec_obj249;
void* __right_value843 = (void*)0;
char* __dec_obj250;
int i_675;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
char* __result_obj__331;
struct_name_672 = (void*)0;
    buf_673=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2624, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj246=struct_name_672,
        struct_name_672=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_672,"_Bool")) {
            __dec_obj247=struct_name_672,
            struct_name_672=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_673,"$");
            }
            for(            i_674=0;            i_674<obj_type->mOriginalTypeNamePointerNum;            i_674++            ){
                buffer_append_str(buf_673,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj248=struct_name_672,
        struct_name_672=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_672,"_Bool")) {
            __dec_obj249=struct_name_672,
            struct_name_672=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj250=struct_name_672,
        struct_name_672=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_673,"$");
        }
        for(        i_675=0;        i_675<obj_type->mPointerNum;        i_675++        ){
            buffer_append_str(buf_673,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_673,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_673,"pa");
    }
    __result_obj__331 = (char*)come_increment_ref_count(((char*)(__right_value845=xsprintf("%s%s_%s",struct_name_672,((char*)(__right_value844=buffer_to_string(buf_673))),fun_name))));
    (struct_name_672 = come_decrement_ref_count(struct_name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_673,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value844 = come_decrement_ref_count(__right_value844, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value845 = come_decrement_ref_count(__right_value845, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__331 = come_decrement_ref_count(__result_obj__331, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__331;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_676;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct buffer* buf_677;
void* __right_value848 = (void*)0;
char* __dec_obj251;
void* __right_value849 = (void*)0;
char* __dec_obj252;
void* __right_value850 = (void*)0;
char* __dec_obj253;
int i_678;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
char* __result_obj__332;
struct_name_676 = (void*)0;
    buf_677=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2671, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj251=struct_name_676,
        struct_name_676=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_676,"_Bool")) {
            __dec_obj252=struct_name_676,
            struct_name_676=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj253=struct_name_676,
        struct_name_676=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_677,"$");
        }
        for(        i_678=0;        i_678<obj_type->mPointerNum;        i_678++        ){
            buffer_append_str(buf_677,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_677,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_677,"pa");
    }
    __result_obj__332 = (char*)come_increment_ref_count(((char*)(__right_value852=xsprintf("%s%s_%s",struct_name_676,((char*)(__right_value851=buffer_to_string(buf_677))),fun_name))));
    (struct_name_676 = come_decrement_ref_count(struct_name_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_677,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value851 = come_decrement_ref_count(__right_value851, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value852 = come_decrement_ref_count(__right_value852, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__332 = come_decrement_ref_count(__result_obj__332, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__332;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_679;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct buffer* buf_680;
void* __right_value855 = (void*)0;
char* __dec_obj254;
void* __right_value856 = (void*)0;
char* __dec_obj255;
int i_681;
void* __right_value857 = (void*)0;
char* __dec_obj256;
void* __right_value858 = (void*)0;
char* __dec_obj257;
void* __right_value859 = (void*)0;
char* __dec_obj258;
int i_682;
void* __right_value860 = (void*)0;
int len_684;
void* __right_value861 = (void*)0;
char* __result_obj__333;
struct_name_679 = (void*)0;
    buf_680=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2703, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj254=struct_name_679,
        struct_name_679=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_679,"_Bool")) {
            __dec_obj255=struct_name_679,
            struct_name_679=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_680,"$");
            }
            for(            i_681=0;            i_681<obj_type->mOriginalTypeNamePointerNum;            i_681++            ){
                buffer_append_str(buf_680,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj256=struct_name_679,
        struct_name_679=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_679,"_Bool")) {
            __dec_obj257=struct_name_679,
            struct_name_679=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj258=struct_name_679,
        struct_name_679=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_680,"$");
        }
        for(        i_682=0;        i_682<obj_type->mPointerNum;        i_682++        ){
            buffer_append_str(buf_680,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_680,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_680,"pa");
    }
    char none_method_name_683[charp_length(fun_name)+1];
    memset(&none_method_name_683, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_684=string_length(struct_name_679)+string_length(((char*)(__right_value860=buffer_to_string(buf_680))));
    (__right_value860 = come_decrement_ref_count(__right_value860, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_683,fun_name+len_684+1,charp_length(fun_name)-len_684-1);
    none_method_name_683[charp_length(fun_name)-len_684-1]=0;
    __result_obj__333 = (char*)come_increment_ref_count(((char*)(__right_value861=__builtin_string(none_method_name_683))));
    (struct_name_679 = come_decrement_ref_count(struct_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_680,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value861 = come_decrement_ref_count(__right_value861, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__333 = come_decrement_ref_count(__result_obj__333, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__333;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value862 = (void*)0;
char* struct_name_685;
void* __right_value863 = (void*)0;
char* __dec_obj259;
void* __right_value864 = (void*)0;
char* __result_obj__334;
    struct_name_685=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name_685,"_Bool")) {
        __dec_obj259=struct_name_685,
        struct_name_685=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__334 = (char*)come_increment_ref_count(((char*)(__right_value864=xsprintf("%s_%s",struct_name_685,fun_name))));
    (struct_name_685 = come_decrement_ref_count(struct_name_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value864 = come_decrement_ref_count(__right_value864, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__334 = come_decrement_ref_count(__result_obj__334, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__334;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value865 = (void*)0;
struct sNode* __result_obj__335;
    ((struct tuple2$2int$bool$*)(__right_value865=err_msg(info,"unexpected word(%s)(2)",buf)));
    /*c*/ come_call_finalizer3(__right_value865,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__335 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__335) ? __result_obj__335 = come_decrement_ref_count(__result_obj__335, ((struct sNode*)__result_obj__335)->finalize, ((struct sNode*)__result_obj__335)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__335;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_686;
char* p_687;
int sline_688;
_Bool err_flag_689;
void* __right_value868 = (void*)0;
char* label_690;
void* __right_value869 = (void*)0;
char* __dec_obj260;
char* __dec_obj261;
_Bool no_comma_691;
_Bool in_fun_param_692;
void* __right_value870 = (void*)0;
struct sNode* node_693;
void* __right_value871 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct sNode* _inf_value22;
struct sLambdaCall* _inf_obj_value22;
void* __right_value880 = (void*)0;
struct sNode* __result_obj__338;
struct sNode* __result_obj__339;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_686=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2781, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_687=info->p;
            sline_688=info->sline;
            err_flag_689=(_Bool)0;
            label_690=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj260=label_690,
                label_690=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_689=(_Bool)1;
            }
            if(            err_flag_689==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj261=label_690,
                label_690=((void*)0);
                __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_687;
                info->sline=sline_688;
            }
            no_comma_691=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_692=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_693=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj262=node_693,
            node_693=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_693),info));
            (__dec_obj262 ? __dec_obj262 = come_decrement_ref_count(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_691;
            info->in_fun_param=in_fun_param_692;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_686,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2824, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_690),(struct sNode*)come_increment_ref_count(node_693))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_690 = come_decrement_ref_count(label_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_690 = come_decrement_ref_count(label_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2842, "struct sNode");
        _inf_obj_value22=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value875=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2842, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_686,info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sLambdaCall_finalize;
        _inf_value22->clone=(void*)sLambdaCall_clone;
        _inf_value22->compile=(void*)sLambdaCall_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sLambdaCall_kind;
        __result_obj__338 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value880=_inf_value22)));
        /*c*/ come_call_finalizer3(params_686,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value875,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value880) ? __right_value880 = come_decrement_ref_count(__right_value880, ((struct sNode*)__right_value880)->finalize, ((struct sNode*)__right_value880)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__338) ? __result_obj__338 = come_decrement_ref_count(__result_obj__338, ((struct sNode*)__result_obj__338)->finalize, ((struct sNode*)__result_obj__338)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__338;
        /*c*/ come_call_finalizer3(params_686,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__339 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__339) ? __result_obj__339 = come_decrement_ref_count(__result_obj__339, ((struct sNode*)__result_obj__339)->finalize, ((struct sNode*)__result_obj__339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__339;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__336;
void* __right_value876 = (void*)0;
struct sLambdaCall* result_694;
void* __right_value877 = (void*)0;
char* __dec_obj263;
void* __right_value878 = (void*)0;
struct sNode* __dec_obj264;
void* __right_value879 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj265;
struct sLambdaCall* __result_obj__337;
    if(    self==(void*)0) {
        __result_obj__336 = (void*)0;
        return __result_obj__336;
    }
    result_694=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_694->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_694->sname,
        result_694->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_694->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj264=result_694->node,
        result_694->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj264 ? __dec_obj264 = come_decrement_ref_count(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj265=result_694->params,
        result_694->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj265,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__337 = result_694;
    /*c*/ come_call_finalizer3(result_694,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__337;
}

