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
extern _Bool gComeBareMetal;
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
    _Bool (*no_mutex)(void*);
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
    _Bool mTask;
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
    _Bool mDefferRightValue;
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
    struct sVar* mObjVar;
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

struct sCurrentNode
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

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
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
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
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
_Bool xiswascii(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
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
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
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
_Bool parsecmp(char* p2, struct sInfo* info);
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
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
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
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
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
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
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
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
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
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sReturnNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
    if(    self->value    ) {
        come_fun_0=info->come_fun;
        result_type_1=(struct sType*)come_increment_ref_count(sType_clone(come_fun_0->mResultType));
        result_type2_31=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_1),(struct sType*)come_increment_ref_count(info->generics_type),info));
        result_type3_32=result_type2_31->mNoSolvedGenericsType;
        if(        result_type2_31->mNoSolvedGenericsType        ) {
            result_type3_32=result_type2_31->mNoSolvedGenericsType;
        }
        else {
            result_type3_32=result_type2_31;
        }
        Value_33=node_compile(self->value,info);
        if(        !Value_33        ) {
            __result_obj__19 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__19;
        }
        else {
        }
        come_value_34=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_35=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_34->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj26=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_34->type));
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        gComeC        ) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0)&&!existance_free_right_value_objects(info)        ) {
            add_come_code(info,"return %s;\n",come_value_34->c_value);
        }
        else {
            static int result_num_36=0;
            result_num_36++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value47=make_define_var(result_type2_31,((char*)(__right_value46=xsprintf("__result_obj__\%s",((char*)(__right_value45=int_to_string(result_num_36)))))),(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            !info->come_fun->mNoResultType            ) {
                if(                !gComeC||!(strlen(result_type2_31->mClass->mName)>strlen("tuple")&&memcmp(result_type2_31->mClass->mName,"tuple",strlen("tuple"))==0)                ) {
                    check_assign_type("result type",result_type2_31,come_value_type_35,come_value_34,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2_31->mHeap                ) {
                    type_name_37=(char*)come_increment_ref_count(make_type_name_string(come_value_34->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value50=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value49=int_to_string(result_num_36)))))),type_name_37,come_value_34->c_value);
                    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name_37 = come_decrement_ref_count(type_name_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value52=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value51=int_to_string(result_num_36)))))),come_value_34->c_value);
                    (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value54=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value53=int_to_string(result_num_36)))))),come_value_34->c_value);
                (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_0->mBlock,info,come_value_34->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1            ) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var                ) {
                    for(                    o2_saved_39=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_42=list$1sVar$ph_begin((o2_saved_39))                    ;                    !list$1sVar$ph_end((o2_saved_39))                    ;                    it_42=list$1sVar$ph_next((o2_saved_39))                    ){
                        free_object((struct sType*)come_increment_ref_count(sType_clone(it_42->mType)),it_42->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    __dec_obj27=info->match_it_var,
                    __if_result__0_38=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__0_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")            ) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value56=xsprintf("come_heap_final();\n"))));
                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            result_type2_31->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(result_type2_31),((char*)(__right_value58=xsprintf("__result_obj__\%s",((char*)(__right_value57=int_to_string(result_num_36)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0);
                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value60=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value59=int_to_string(result_num_36)))))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(sType_finalize, result_type_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type_35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        come_fun_49=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_49->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1        ) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var            ) {
                for(                o2_saved_51=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_52=list$1sVar$ph_begin((o2_saved_51))                ;                !list$1sVar$ph_end((o2_saved_51))                ;                it_52=list$1sVar$ph_next((o2_saved_51))                ){
                    free_object((struct sType*)come_increment_ref_count(sType_clone(it_52->mType)),it_52->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                __dec_obj28=info->match_it_var,
                __if_result__1_50=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__1_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value62=xsprintf("come_heap_final();\n"))));
            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
    if(    self==(void*)0    ) {
        __result_obj__3 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__3;
    }
    result_8=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_8->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj3=result_8->mOriginalLoadVarType,
        result_8->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj4=result_8->mChannelType,
        result_8->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj8=result_8->mGenericsTypes,
        result_8->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj9=result_8->mNoSolvedGenericsType,
        result_8->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj10=result_8->mSizeNum,
        result_8->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj11=result_8->mAlignas,
        result_8->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj12=result_8->mTupleName,
        result_8->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj13=result_8->mAttribute,
        result_8->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_8->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_8->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_8->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_8->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_8->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_8->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_8->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_8->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_8->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_8->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_8->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_8->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_8->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_8->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj14=result_8->mAsmName,
        result_8->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_8->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj18=result_8->mArrayNum,
        result_8->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj19=result_8->mOriginalTypeName,
        result_8->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj20=result_8->mParamTypes,
        result_8->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj24=result_8->mParamNames,
        result_8->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj25=result_8->mResultType,
        result_8->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_8->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__18 = (struct sType*)come_increment_ref_count(result_8);
    come_call_finalizer(sType_finalize, result_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_2;
struct list_item$1sType$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)    ) {
        prev_it_3=it_2;
        it_2=it_2->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_4;
struct list_item$1sNode$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)    ) {
        prev_it_5=it_4;
        it_4=it_4->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_6;
struct list_item$1char$ph* prev_it_7;
    it_6=self->head;
    while(    it_6!=((void*)0)    ) {
        prev_it_7=it_6;
        it_6=it_6->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
    if(    self==((void*)0)    ) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__4;
    }
    result_9=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 925, "struct list$1sType$ph*"))));
    it_10=self->head;
    while(    it_10!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        else {
            list$1sType$ph_add(result_9,(struct sType*)come_increment_ref_count(sType_clone(it_10->item)));
        }
        it_10=it_10->next;
    }
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(result_9);
    come_call_finalizer(list$1sType$ph$p_finalize, result_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
    if(    self->len==0    ) {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 944, "struct list_item$1sType$ph*"))));
        litem_11->prev=((void*)0);
        litem_11->next=((void*)0);
        __dec_obj5=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_11;
        self->head=litem_11;
    }
    else if(    self->len==1    ) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 954, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj6=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 964, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj7=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__6 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__6;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_14;
struct list_item$1sType$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)    ) {
        prev_it_15=it_14;
        it_14=it_14->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__8;
void* __right_value15 = (void*)0;
struct sNode* result_16;
struct sNode* __result_obj__9;
    if(    self==(void*)0    ) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__8;
    }
    result_16=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_16->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_16->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_16->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_16->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_16->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_16->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_16->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_16->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_16->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_16->no_mutex=self->no_mutex;
    }
    __result_obj__9 = (struct sNode*)come_increment_ref_count(result_16);
    ((result_16) ? result_16 = come_decrement_ref_count(result_16, ((struct sNode*)result_16)->finalize, ((struct sNode*)result_16)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
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
    if(    self==((void*)0)    ) {
        __result_obj__10 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__10;
    }
    result_17=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 925, "struct list$1sNode$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        else {
            list$1sNode$ph_add(result_17,(struct sNode*)come_increment_ref_count(sNode_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(result_17);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
    if(    self->len==0    ) {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 944, "struct list_item$1sNode$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj15=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1    ) {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 954, "struct list_item$1sNode$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj16=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 964, "struct list_item$1sNode$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj17=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__12 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__12;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_22;
struct list_item$1sNode$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)    ) {
        prev_it_23=it_22;
        it_22=it_22->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    if(    self==((void*)0)    ) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__14;
    }
    result_24=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 925, "struct list$1char$ph*"))));
    it_25=self->head;
    while(    it_25!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 930, "char*")));
        }
        else {
            list$1char$ph_add(result_24,(char*)come_increment_ref_count((char*)come_memdup(it_25->item, "./comelang.h", 933, "char*")));
        }
        it_25=it_25->next;
    }
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(result_24);
    come_call_finalizer(list$1char$ph$p_finalize, result_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
    if(    self->len==0    ) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 944, "struct list_item$1char$ph*"))));
        litem_26->prev=((void*)0);
        litem_26->next=((void*)0);
        __dec_obj21=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_26;
        self->head=litem_26;
    }
    else if(    self->len==1    ) {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 954, "struct list_item$1char$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj22=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 964, "struct list_item$1char$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj23=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__16 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__16;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_29;
struct list_item$1char$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)    ) {
        prev_it_30=it_29;
        it_29=it_29->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    if(    self==((void*)0)    ) {
        memset(&result_40,0,sizeof(struct sVar*));
        __result_obj__20 = result_40;
        return __result_obj__20;
    }
    self->it=self->head;
    if(    self->it    ) {
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
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_43,0,sizeof(struct sVar*));
        __result_obj__23 = result_43;
        return __result_obj__23;
    }
    self->it=self->it->next;
    if(    self->it    ) {
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
    while(    it_45!=((void*)0)    ) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_47;
struct list_item$1sVar$ph* prev_it_48;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value63 = (void*)0;
char* __dec_obj29;
struct sOutputNode* __result_obj__26;
    ((struct sNodeBase*)(__right_value63=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj29=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__26 = (struct sOutputNode*)come_increment_ref_count(self);
    come_call_finalizer(sOutputNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sOutputNode_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value64 = (void*)0;
char* __result_obj__27;
    __result_obj__27 = (char*)come_increment_ref_count(((char*)(__right_value64=__builtin_string("sOutputNode"))));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__27;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value65 = (void*)0;
char* __dec_obj30;
struct list$1sNode$ph* __dec_obj31;
struct sInlineAssembler* __result_obj__28;
    ((struct sNodeBase*)(__right_value65=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj30=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj31=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__28 = (struct sInlineAssembler*)come_increment_ref_count(self);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value66 = (void*)0;
char* __result_obj__29;
    __result_obj__29 = (char*)come_increment_ref_count(((char*)(__right_value66=__builtin_string("sInlineAssembler"))));
    (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__29 = come_decrement_ref_count(__result_obj__29, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
    come_value_54=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 177, "struct CVALUE*"))));
    buf_55=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 179, "struct buffer*"))));
    p_56=source_53;
    while(    *p_56!=40    ) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
    }
    if(    *p_56==40    ) {
        buffer_append_char(buf_55,*p_56);
        p_56++;
        while(        *p_56==32||*p_56==9||*p_56==10        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    dquort_57=(_Bool)0;
    num_exp_58=0;
    while(    *p_56    ) {
        if(        *p_56==34        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            dquort_57=!dquort_57;
        }
        else if(        dquort_57        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
        else if(        *p_56==40        ) {
            buffer_append_char(buf_55,*p_56);
            p_56++;
            node_59=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_58++));
            Value_66=node_compile(node_59,info);
            if(            !Value_66            ) {
                __result_obj__34 = (_Bool)0;
                ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__34;
            }
            else {
            }
            come_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_55,come_value_67->c_value);
            if(            *p_56==41            ) {
                buffer_append_char(buf_55,*p_56);
                p_56++;
            }
            ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            buffer_append_char(buf_55,*p_56);
            p_56++;
        }
    }
    __dec_obj32=come_value_54->c_value,
    come_value_54->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value74=buffer_to_string(buf_55)))));
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj33=come_value_54->type,
    come_value_54->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 236, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_54->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s",come_value_54->c_value);
    __result_obj__36 = (_Bool)1;
    (source_53 = come_decrement_ref_count(source_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_60;
int i_61;
struct sNode* __result_obj__30;
struct sNode* default_value_62;
struct sNode* __result_obj__31;
default_value_62 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_60=self->head;
    i_61=0;
    while(    it_60!=((void*)0)    ) {
        if(        position==i_61        ) {
            __result_obj__30 = (struct sNode*)come_increment_ref_count(it_60->item);
            ((__result_obj__30) ? __result_obj__30 = come_decrement_ref_count(__result_obj__30, ((struct sNode*)__result_obj__30)->finalize, ((struct sNode*)__result_obj__30)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__30;
        }
        it_60=it_60->next;
        i_61++;
    }
    memset(&default_value_62,0,sizeof(struct sNode*));
    __result_obj__31 = (struct sNode*)come_increment_ref_count(default_value_62);
    ((default_value_62) ? default_value_62 = come_decrement_ref_count(default_value_62, ((struct sNode*)default_value_62)->finalize, ((struct sNode*)default_value_62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__31) ? __result_obj__31 = come_decrement_ref_count(__result_obj__31, ((struct sNode*)__result_obj__31)->finalize, ((struct sNode*)__result_obj__31)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__31;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_63;
int i_64;
struct sNode* __result_obj__32;
struct sNode* default_value_65;
struct sNode* __result_obj__33;
default_value_65 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_63=self->head;
    i_64=0;
    while(    it_63!=((void*)0)    ) {
        if(        position==i_64        ) {
            __result_obj__32 = (struct sNode*)come_increment_ref_count(it_63->item);
            ((__result_obj__32) ? __result_obj__32 = come_decrement_ref_count(__result_obj__32, ((struct sNode*)__result_obj__32)->finalize, ((struct sNode*)__result_obj__32)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__32;
        }
        it_63=it_63->next;
        i_64++;
    }
    memset(&default_value_65,0,sizeof(struct sNode*));
    __result_obj__33 = (struct sNode*)come_increment_ref_count(default_value_65);
    ((default_value_65) ? default_value_65 = come_decrement_ref_count(default_value_65, ((struct sNode*)default_value_65)->finalize, ((struct sNode*)default_value_65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
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
    if(    self->len==0    ) {
        litem_68=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value79=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1014, "struct list_item$1CVALUE$ph*"))));
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj34=litem_68->item,
        litem_68->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_68;
        self->head=litem_68;
    }
    else if(    self->len==1    ) {
        litem_69=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value80=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1024, "struct list_item$1CVALUE$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj35=litem_69->item,
        litem_69->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value81=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1034, "struct list_item$1CVALUE$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj36=litem_70->item,
        litem_70->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__35 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__35;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value82 = (void*)0;
struct sLineNode* __result_obj__37;
    ((struct sNodeBase*)(__right_value82=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__37 = (struct sLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLineNode_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value83 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string("sLineNode"))));
    (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__38;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct CVALUE* come_value_71;
void* __right_value86 = (void*)0;
char* __dec_obj37;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct sType* __dec_obj38;
_Bool __result_obj__39;
    come_value_71=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 261, "struct CVALUE*"))));
    __dec_obj37=come_value_71->c_value,
    come_value_71->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj38=come_value_71->type,
    come_value_71->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 264, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_71->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
    add_come_last_code(info,"%s",come_value_71->c_value);
    __result_obj__39 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value90 = (void*)0;
struct sSNameNode* __result_obj__40;
    ((struct sNodeBase*)(__right_value90=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__40 = (struct sSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sSNameNode_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value91 = (void*)0;
char* __result_obj__41;
    __result_obj__41 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string("sSNameNode"))));
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__41 = come_decrement_ref_count(__result_obj__41, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__41;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct CVALUE* come_value_72;
void* __right_value94 = (void*)0;
char* __dec_obj39;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct sType* __dec_obj40;
_Bool __result_obj__42;
    come_value_72=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 289, "struct CVALUE*"))));
    __dec_obj39=come_value_72->c_value,
    come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj40=come_value_72->type,
    come_value_72->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 292, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_72->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    add_come_last_code(info,"%s",come_value_72->c_value);
    __result_obj__42 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value98 = (void*)0;
struct sFuncNode* __result_obj__43;
    ((struct sNodeBase*)(__right_value98=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value98, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__43 = (struct sFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFuncNode_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value99 = (void*)0;
char* __result_obj__44;
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string("sFuncNode"))));
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct CVALUE* come_value_73;
void* __right_value102 = (void*)0;
char* __dec_obj41;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sType* __dec_obj42;
_Bool __result_obj__45;
    come_value_73=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 317, "struct CVALUE*"))));
    __dec_obj41=come_value_73->c_value,
    come_value_73->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj42=come_value_73->type,
    come_value_73->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 320, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_73->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
    add_come_last_code(info,"%s",come_value_73->c_value);
    __result_obj__45 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__45;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value106 = (void*)0;
struct sWildCard* __result_obj__46;
    ((struct sNodeBase*)(__right_value106=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__46 = (struct sWildCard*)come_increment_ref_count(self);
    come_call_finalizer(sWildCard_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sWildCard_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value107 = (void*)0;
char* __result_obj__47;
    __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("sWildCard"))));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__47;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct sNode* value_node_74;
_Bool Value_75;
_Bool __result_obj__48;
_Bool __result_obj__49;
    value_node_74=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value108=xsprintf("Value"))),info));
    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    Value_75=node_compile(value_node_74,info);
    if(    !Value_75    ) {
        __result_obj__48 = (_Bool)0;
        ((value_node_74) ? value_node_74 = come_decrement_ref_count(value_node_74, ((struct sNode*)value_node_74)->finalize, ((struct sNode*)value_node_74)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__48;
    }
    else {
    }
    __result_obj__49 = (_Bool)1;
    ((value_node_74) ? value_node_74 = come_decrement_ref_count(value_node_74, ((struct sNode*)value_node_74)->finalize, ((struct sNode*)value_node_74)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__49;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value110 = (void*)0;
struct sCallerFuncNode* __result_obj__50;
    ((struct sNodeBase*)(__right_value110=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__50 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value111 = (void*)0;
char* __result_obj__51;
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string("sCallerFuncNode"))));
    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__51;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct CVALUE* come_value_76;
void* __right_value114 = (void*)0;
char* __dec_obj43;
void* __right_value115 = (void*)0;
char* __dec_obj44;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct sType* __dec_obj45;
_Bool __result_obj__52;
    come_value_76=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 369, "struct CVALUE*"))));
    if(    info->caller_fun    ) {
        __dec_obj43=come_value_76->c_value,
        come_value_76->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj44=come_value_76->c_value,
        come_value_76->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj45=come_value_76->type,
    come_value_76->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 377, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_76->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
    add_come_last_code(info,"%s",come_value_76->c_value);
    __result_obj__52 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__52;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
struct sCallerLineNode* __result_obj__53;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__53 = (struct sCallerLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct CVALUE* come_value_77;
void* __right_value122 = (void*)0;
char* __dec_obj46;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct sType* __dec_obj47;
_Bool __result_obj__54;
    come_value_77=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 398, "struct CVALUE*"))));
    __dec_obj46=come_value_77->c_value,
    come_value_77->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj47=come_value_77->type,
    come_value_77->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 401, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_77->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    add_come_last_code(info,"%s",come_value_77->c_value);
    __result_obj__54 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value126 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string("sCallerLineNode"))));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value127 = (void*)0;
struct sCallerSNameNode* __result_obj__56;
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__56 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__56;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct CVALUE* come_value_78;
void* __right_value130 = (void*)0;
char* __dec_obj48;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__57;
    come_value_78=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 426, "struct CVALUE*"))));
    __dec_obj48=come_value_78->c_value,
    come_value_78->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=come_value_78->type,
    come_value_78->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 429, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_78->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    add_come_last_code(info,"%s",come_value_78->c_value);
    __result_obj__57 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value134 = (void*)0;
char* __result_obj__58;
    __result_obj__58 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string("sCallerSNameNode"))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__58;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* __dec_obj50;
void* __right_value147 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj56;
struct list$1sType$ph* __dec_obj57;
struct buffer* __dec_obj58;
struct sFunCallNode* __result_obj__65;
    ((struct sNodeBase*)(__right_value135=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj50=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj56=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj57=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj58=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer(buffer_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__65 = (struct sFunCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value148 = (void*)0;
char* __result_obj__66;
    __result_obj__66 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string("sFunCallNode"))));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__66;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block    ) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_89;
struct list$1tuple2$2char$phsNode$ph$ph* params_90;
struct buffer* method_block_91;
int method_block_sline_92;
struct sVar* var__93;
struct sType* lambda_type_94;
void* __right_value149 = (void*)0;
_Bool __result_obj__67;
void* __right_value150 = (void*)0;
struct sType* result_type_95;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct list$1CVALUE$ph* come_params_96;
void* __right_value153 = (void*)0;
_Bool __result_obj__69;
int i_99;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_100;
struct tuple2$2char$phsNode$ph* it_103;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label_106=0;
struct sNode* node_107=0;
_Bool Value_108;
_Bool __result_obj__76;
void* __right_value154 = (void*)0;
struct CVALUE* come_value_109;
void* __right_value155 = (void*)0;
struct sType* __dec_obj59;
void* __right_value156 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct buffer* buf_116;
int j_117;
struct list$1CVALUE$ph* o2_saved_118;
struct CVALUE* it_121;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct CVALUE* come_value_124;
void* __right_value167 = (void*)0;
char* __dec_obj60;
void* __right_value168 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__87;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sGenericsFun* generics_fun_125;
_Bool method_generics_128;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct list$1sType$ph* method_generics_types_129;
void* __right_value173 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_130=0;
struct sGenericsFun* gfun_131=0;
char* generics_fun_name_132;
void* __right_value174 = (void*)0;
struct sFun* fun_133;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1CVALUE$ph* come_params_136;
void* __right_value177 = (void*)0;
struct sFun* fun_137;
_Bool no_output_come_code_138;
_Bool __result_obj__96;
void* __right_value178 = (void*)0;
struct CVALUE* method_block_node_139;
void* __right_value179 = (void*)0;
struct sType* method_block_lambda_type_146;
void* __right_value180 = (void*)0;
struct sType* method_block_result_type_147;
void* __right_value181 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_148;
struct sType* generics_fun_method_block_result_type_149;
int method_generics_num_150;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
int n_159;
struct list$1sType$ph* o2_saved_160;
struct sType* it_163;
int method_generics_num_166;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1CVALUE$ph* come_params_167;
int i_168;
struct sType* result_type_169;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_170;
struct tuple2$2char$phsNode$ph* it_171;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_172=0;
struct sNode* node_173=0;
_Bool Value_174;
_Bool __result_obj__110;
void* __right_value193 = (void*)0;
struct CVALUE* come_value_175;
void* __right_value194 = (void*)0;
struct sType* __dec_obj66;
int method_generics_num_179;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
int n_180;
struct list$1sType$ph* o2_saved_181;
struct sType* it_182;
int method_generics_num_183;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_202=0;
struct sGenericsFun* gfun_203=0;
char* __dec_obj70;
void* __right_value205 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_204=0;
struct sGenericsFun* gfun_205=0;
char* __dec_obj71;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1CVALUE$ph* come_params_206;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_207;
struct tuple2$2char$phsNode$ph* it_208;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_209=0;
struct sNode* node_210=0;
_Bool Value_211;
_Bool __result_obj__117;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value209 = (void*)0;
struct sType* __dec_obj72;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct buffer* buf_213;
int j_214;
struct list$1CVALUE$ph* o2_saved_215;
struct CVALUE* it_216;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct CVALUE* come_value_217;
void* __right_value214 = (void*)0;
char* __dec_obj73;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct sType* __dec_obj74;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __dec_obj75;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sType* __dec_obj76;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* __dec_obj77;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sType* __dec_obj78;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sType* __dec_obj79;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* __dec_obj80;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sType* __dec_obj81;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sType* __dec_obj82;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* __dec_obj83;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sType* __dec_obj84;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sType* __dec_obj85;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* __dec_obj86;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sType* __dec_obj87;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __dec_obj88;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj89;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj90;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj91;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* __dec_obj92;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __dec_obj93;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sType* __dec_obj94;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sType* __dec_obj95;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* __dec_obj96;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __dec_obj97;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sType* __dec_obj98;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sType* __dec_obj99;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sType* __dec_obj100;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* __dec_obj101;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj102;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj103;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj104;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj105;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj106;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj107;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj108;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj109;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj110;
_Bool __result_obj__118;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1CVALUE$ph* come_params_218;
int i_219;
struct sType* result_type_220;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_221;
struct tuple2$2char$phsNode$ph* it_222;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_223=0;
struct sNode* node_224=0;
_Bool Value_225;
_Bool __result_obj__119;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_226;
void* __right_value320 = (void*)0;
struct sType* __dec_obj111;
struct sType* __dec_obj112;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct buffer* buf_227;
int j_228;
struct list$1CVALUE$ph* o2_saved_229;
struct CVALUE* it_230;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_231;
void* __right_value325 = (void*)0;
char* __dec_obj113;
struct sType* __dec_obj114;
_Bool __result_obj__120;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1CVALUE$ph* come_params_232;
int i_233;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_234;
struct tuple2$2char$phsNode$ph* it_235;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_236=0;
struct sNode* node_237=0;
_Bool Value_238;
_Bool __result_obj__121;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value329 = (void*)0;
struct sType* __dec_obj115;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct buffer* buf_240;
int j_241;
struct list$1CVALUE$ph* o2_saved_242;
struct CVALUE* it_243;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* result_type_244;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_245;
void* __right_value337 = (void*)0;
char* __dec_obj116;
struct sType* __dec_obj117;
_Bool __result_obj__122;
void* __right_value338 = (void*)0;
char* __dec_obj118;
void* __right_value339 = (void*)0;
char* __dec_obj119;
char* p_246;
int version_247;
char* p2_248;
int i_250;
void* __right_value340 = (void*)0;
char* new_fun_name_251;
void* __right_value341 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value342 = (void*)0;
char* __dec_obj120;
void* __right_value343 = (void*)0;
char* new_fun_name_258;
void* __right_value344 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value345 = (void*)0;
char* __dec_obj121;
void* __right_value346 = (void*)0;
_Bool __result_obj__131;
int i_259;
void* __right_value347 = (void*)0;
char* new_fun_name_260;
void* __right_value348 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value349 = (void*)0;
char* __dec_obj122;
void* __right_value350 = (void*)0;
struct sFun* fun_261;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct list$1CVALUE$ph* come_params_262;
int i_263;
struct sType* result_type_264;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_265;
struct tuple2$2char$phsNode$ph* it_266;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_267=0;
struct sNode* node_268=0;
_Bool Value_269;
_Bool __result_obj__132;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_270;
void* __right_value354 = (void*)0;
struct sType* __dec_obj123;
struct sType* __dec_obj124;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct buffer* buf_271;
int j_272;
struct list$1CVALUE$ph* o2_saved_273;
struct CVALUE* it_274;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_275;
void* __right_value359 = (void*)0;
char* __dec_obj125;
struct sType* __dec_obj126;
_Bool __result_obj__133;
void* __right_value360 = (void*)0;
struct sType* result_type_276;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1sType$ph* param_types_277;
struct list$1sType$ph* o2_saved_278;
struct sType* it_279;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* it2_280;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* __dec_obj127;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1CVALUE$ph* come_params_281;
int i_282;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_283;
struct tuple2$2char$phsNode$ph* it_284;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_285=0;
struct sNode* node_286=0;
_Bool Value_287;
_Bool __result_obj__134;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_288;
void* __right_value370 = (void*)0;
struct sType* __dec_obj128;
int n_289;
struct list$1char$ph* o2_saved_290;
char* it_293;
void* __right_value371 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value378 = (void*)0;
int i_301;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_302;
struct tuple2$2char$phsNode$ph* it_303;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_304=0;
struct sNode* node_305=0;
_Bool Value_306;
_Bool __result_obj__143;
void* __right_value379 = (void*)0;
struct CVALUE* come_value_307;
void* __right_value380 = (void*)0;
struct sType* __dec_obj130;
void* __right_value381 = (void*)0;
_Bool _condtional_value_X8;
_Bool Value_308;
_Bool __result_obj__144;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_309;
void* __right_value383 = (void*)0;
struct sType* __dec_obj131;
void* __right_value384 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value385 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
_Bool _condtional_value_X12;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
char* default_param_310;
void* __right_value396 = (void*)0;
char* param_name_317;
void* __right_value397 = (void*)0;
_Bool _condtional_value_X13;
struct buffer* source_318;
char* p_319;
char* head_320;
int sline_321;
void* __right_value398 = (void*)0;
struct buffer* __dec_obj132;
void* __right_value399 = (void*)0;
struct sNode* node_322;
_Bool Value_323;
_Bool __result_obj__149;
struct buffer* __dec_obj133;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value401 = (void*)0;
struct sType* __dec_obj134;
void* __right_value402 = (void*)0;
_Bool _condtional_value_X14;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
_Bool _condtional_value_X15;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
_Bool _condtional_value_X16;
void* __right_value411 = (void*)0;
_Bool __result_obj__150;
void* __right_value412 = (void*)0;
_Bool __result_obj__151;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value417 = (void*)0;
struct sNode* current_stack_frame_node_325;
_Bool Value_327;
_Bool __result_obj__154;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_328;
void* __right_value419 = (void*)0;
struct sType* __dec_obj136;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct buffer* method_block2_329;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* method_block_type_330;
void* __right_value424 = (void*)0;
char* class_name_331;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sClass* current_stack_frame_struct_340;
void* __right_value427 = (void*)0;
int num_method_block_341;
void* __right_value428 = (void*)0;
_Bool __result_obj__163;
void* __right_value429 = (void*)0;
struct sType* result_type_342;
void* __right_value430 = (void*)0;
struct sType* result_type2_343;
void* __right_value431 = (void*)0;
struct list$1sType$ph* param_types_344;
struct list$1char$ph* param_names_345;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* all_alhabet_sname_346;
char* p_347;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1sType$ph* o2_saved_348;
struct sType* it_349;
struct sType* param_type_350;
void* __right_value436 = (void*)0;
char* param_name_351;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
char* param_name_352;
void* __right_value439 = (void*)0;
struct sType* param_type2_353;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* param_name_354;
void* __right_value442 = (void*)0;
struct sType* param_type2_355;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* source3_356;
char* p_357;
char* head_358;
int sline_359;
struct buffer* __dec_obj137;
void* __right_value445 = (void*)0;
struct sNode* node_360;
_Bool Value_361;
_Bool __result_obj__164;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* method_block_name_362;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct CVALUE* come_value2_363;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sFun* fun2_364;
void* __right_value452 = (void*)0;
_Bool __result_obj__165;
struct sType* method_block_type2_365;
void* __right_value453 = (void*)0;
char* __dec_obj138;
void* __right_value454 = (void*)0;
struct sType* __dec_obj139;
struct buffer* __dec_obj140;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct buffer* buf_366;
void* __right_value457 = (void*)0;
char* __dec_obj141;
void* __right_value458 = (void*)0;
char* __dec_obj142;
void* __right_value459 = (void*)0;
char* __dec_obj143;
int j_367;
struct list$1CVALUE$ph* o2_saved_368;
struct CVALUE* it_369;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct CVALUE* come_value_370;
void* __right_value462 = (void*)0;
char* __dec_obj144;
void* __right_value463 = (void*)0;
struct sType* __dec_obj145;
void* __right_value464 = (void*)0;
char* __dec_obj146;
_Bool __result_obj__166;
memset(&i_250, 0, sizeof(int));
    fun_name_89=(char*)come_increment_ref_count(self->fun_name);
    params_90=self->params;
    method_block_91=self->method_block;
    method_block_sline_92=self->method_block_sline;
    var__93=get_variable_from_table(info->lv_table,fun_name_89);
    if(    var__93==((void*)0)    ) {
        var__93=get_variable_from_table(info->gv_table,fun_name_89);
    }
    if(    var__93    ) {
        lambda_type_94=var__93->mType;
        if(        string_operator_not_equals(lambda_type_94->mClass->mName,"lambda")        ) {
            ((struct tuple2$2int$bool$*)(__right_value149=err_msg(info,"%s is not lambda, can't call",fun_name_89)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__67 = (_Bool)1;
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__67;
        }
        result_type_95=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_94->mResultType));
        result_type_95->mStatic=(_Bool)0;
        come_params_96=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 499, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_94->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_90)&&!lambda_type_94->mVarArgs        ) {
            ((struct tuple2$2int$bool$*)(__right_value153=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_89,list$1sType$ph_length(lambda_type_94->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_90))));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__69 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__69;
        }
        i_99=0;
        for(        o2_saved_100=(params_90),it_103=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_100))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_100))        ;        it_103=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_100))        ){
            multiple_assign_var1=it_103;
            label_106=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_107=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_108=node_compile(node_107,info);
            if(            !Value_108            ) {
                __result_obj__76 = (_Bool)0;
                (label_106 = come_decrement_ref_count(label_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_107) ? node_107 = come_decrement_ref_count(node_107, ((struct sNode*)node_107)->finalize, ((struct sNode*)node_107)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__76;
            }
            else {
            }
            come_value_109=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj59=come_value_109->type,
            come_value_109->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_109->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X1=(lambda_type_94->mVarArgs&&((struct sType*)(__right_value156=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99)))==((void*)0))),            come_call_finalizer(sType_finalize, __right_value156, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
            }
            else {
                check_assign_type(((char*)(__right_value159=xsprintf("\%s calling param #\%s",((char*)(__right_value157=string_to_string(fun_name_89))),((char*)(__right_value158=int_to_string(i_99)))))),((struct sType*)(__right_value160=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99))),come_value_109->type,come_value_109,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X2=(((struct sType*)(__right_value161=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99)))->mHeap&&come_value_109->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X2                ) {
                    std_move(((struct sType*)(__right_value162=list$1sType$ph_operator_load_element(lambda_type_94->mParamTypes,i_99))),come_value_109->type,come_value_109,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params_96,(struct CVALUE*)come_increment_ref_count(come_value_109));
            i_99++;
            (label_106 = come_decrement_ref_count(label_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_107) ? node_107 = come_decrement_ref_count(node_107, ((struct sNode*)node_107)->finalize, ((struct sNode*)node_107)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 534, "struct buffer*"))));
        buffer_append_str(buf_116,var__93->mCValueName);
        buffer_append_str(buf_116,"(");
        j_117=0;
        for(        o2_saved_118=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_96)),it_121=list$1CVALUE$ph_begin((o2_saved_118))        ;        !list$1CVALUE$ph_end((o2_saved_118))        ;        it_121=list$1CVALUE$ph_next((o2_saved_118))        ){
            buffer_append_str(buf_116,it_121->c_value);
            if(            j_117!=list$1CVALUE$ph_length(come_params_96)-1            ) {
                buffer_append_str(buf_116,",");
            }
            j_117++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_116,")");
        come_value_124=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 551, "struct CVALUE*"))));
        __dec_obj60=come_value_124->c_value,
        come_value_124->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_116));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj61=come_value_124->type,
        come_value_124->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_95));
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_124->type->mStatic=(_Bool)0;
        come_value_124->var=((void*)0);
        if(        lambda_type_94->mResultType->mHeap        ) {
            append_object_to_right_values(come_value_124,(struct sType*)come_increment_ref_count(lambda_type_94->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_124->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        info->calling_fun=((void*)0);
        __result_obj__87 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__87;
        come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    generics_fun_125=((struct sGenericsFun*)(__right_value170=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value169=__builtin_string(fun_name_89))),((void*)0))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __right_value170, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    method_generics_128=(_Bool)0;
    if(    generics_fun_125    ) {
        method_generics_128=list$1char$ph_length(generics_fun_125->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_128    ) {
        if(        list$1sType$ph_length(self->method_generics_types)==0        ) {
            method_generics_types_129=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 576, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value173=make_method_generics_function((char*)come_increment_ref_count(fun_name_89),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_129),info)));
            name_130=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_131=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value173, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            generics_fun_name_132=(char*)come_increment_ref_count(name_130);
            fun_133=((struct sFun*)(__right_value174=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_132,((void*)0))));
            come_call_finalizer(sFun_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            method_block_91            ) {
                come_params_136=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 583, "struct list$1CVALUE$ph*"))));
                fun_137=((struct sFun*)(__right_value177=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_132,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value177, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                no_output_come_code_138=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_91,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_136),fun_137,fun_name_89,method_block_sline_92,info,(_Bool)1)                ) {
                    __result_obj__96 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__96;
                }
                info->no_output_come_code=no_output_come_code_138;
                method_block_node_139=((struct CVALUE*)(__right_value178=list$1CVALUE$ph_operator_load_element(come_params_136,-1)));
                come_call_finalizer(CVALUE_finalize, __right_value178, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                method_block_lambda_type_146=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_139->type));
                method_block_result_type_147=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_148=((struct sType*)(__right_value181=list$1sType$ph_operator_load_element(generics_fun_125->mParamTypes,-1)));
                come_call_finalizer(sType_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                generics_fun_method_block_result_type_149=generics_fun_method_block_lambda_type_148->mResultType;
                if(                generics_fun_method_block_result_type_149->mClass->mMethodGenerics                ) {
                    method_generics_num_150=generics_fun_method_block_result_type_149->mClass->mMethodGenericsNum;
                    list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_150,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_147)));
                    come_call_finalizer(sType_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                n_159=0;
                for(                o2_saved_160=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_148->mParamTypes)),it_163=list$1sType$ph_begin((o2_saved_160))                ;                !list$1sType$ph_end((o2_saved_160))                ;                it_163=list$1sType$ph_next((o2_saved_160))                ){
                    if(                    it_163->mClass->mMethodGenerics                    ) {
                        method_generics_num_166=it_163->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_166,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value189=list$1sType$ph_operator_load_element(method_block_lambda_type_146->mParamTypes,n_159))))));
                        come_call_finalizer(sType_finalize, __right_value187, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    n_159++;
                }
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_lambda_type_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_result_type_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_params_167=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 615, "struct list$1CVALUE$ph*"))));
            i_168=0;
            result_type_169=((void*)0);
            for(            o2_saved_170=(params_90),it_171=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_170))            ;            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_170))            ;            it_171=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_170))            ){
                multiple_assign_var3=it_171;
                label_172=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_173=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_174=node_compile(node_173,info);
                if(                !Value_174                ) {
                    __result_obj__110 = (_Bool)0;
                    (label_172 = come_decrement_ref_count(label_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__110;
                }
                else {
                }
                come_value_175=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj66=come_value_175->type,
                come_value_175->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_175->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                list$1CVALUE$ph_add(come_params_167,(struct CVALUE*)come_increment_ref_count(come_value_175));
                (label_172 = come_decrement_ref_count(label_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_173) ? node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            generics_fun_125->mResultType->mClass->mMethodGenerics            ) {
                method_generics_num_179=generics_fun_125->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type                ) {
                    list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_179,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    come_call_finalizer(sType_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            n_180=0;
            for(            o2_saved_181=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_125->mParamTypes)),it_182=list$1sType$ph_begin((o2_saved_181))            ;            !list$1sType$ph_end((o2_saved_181))            ;            it_182=list$1sType$ph_next((o2_saved_181))            ){
                if(                it_182->mClass->mMethodGenerics                ) {
                    method_generics_num_183=it_182->mClass->mMethodGenericsNum;
                    if(                    n_180<list$1CVALUE$ph_length(come_params_167)                    ) {
                        list$1sType$ph_operator_store_element(method_generics_types_129,method_generics_num_183,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value202=list$1CVALUE$ph_operator_load_element(come_params_167,n_180)))->type)));
                        come_call_finalizer(CVALUE_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value201, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, __right_value202, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
                n_180++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_132);
            (name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value204=make_method_generics_function((char*)come_increment_ref_count(fun_name_89),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_129),info)));
            name_202=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_203=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value204, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj70=fun_name_89,
            fun_name_89=(char*)come_increment_ref_count(name_202);
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (generics_fun_name_132 = come_decrement_ref_count(generics_fun_name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_202 = come_decrement_ref_count(name_202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value205=make_method_generics_function((char*)come_increment_ref_count(fun_name_89),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_204=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_205=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj71=fun_name_89,
            fun_name_89=(char*)come_increment_ref_count(name_204);
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_89,"__builtin_memmove")||string_operator_equals(fun_name_89,"__builtin_memset")||string_operator_equals(fun_name_89,"__builtin_ffs")||string_operator_equals(fun_name_89,"__builtin_ffsl")||string_operator_equals(fun_name_89,"__builtin_ffsll")||string_operator_equals(fun_name_89,"__builtin_bswap16")||string_operator_equals(fun_name_89,"__builtin_bswap32")||string_operator_equals(fun_name_89,"__builtin_bswap64")||string_operator_equals(fun_name_89,"__builtin_constant_p")||string_operator_equals(fun_name_89,"__builtin_expect")||string_operator_equals(fun_name_89,"__builtin___memset_chk")||string_operator_equals(fun_name_89,"__builtin_object_size")||string_operator_equals(fun_name_89,"__builtin___memcpy_chk")||string_operator_equals(fun_name_89,"__builtin___strncpy_chk")||string_operator_equals(fun_name_89,"__builtin___strncat_chk")||string_operator_equals(fun_name_89,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_89,"__builtin_strrchr")||string_operator_equals(fun_name_89,"__builtin_clz")||string_operator_equals(fun_name_89,"__dsb")||string_operator_equals(fun_name_89,"__isb")||string_operator_equals(fun_name_89,"__dmb")||(strlen(fun_name_89)==strlen("__builtin_arm_")&&memcmp(fun_name_89,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_89,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_89,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_89,"__c11_atomic_store")||string_operator_equals(fun_name_89,"__c11_atomic_load")||string_operator_equals(fun_name_89,"__c11_atomic_exchange")||string_operator_equals(fun_name_89,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_89,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_89,"__c11_atomic_fetch_xor")    ) {
        come_params_206=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 690, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_207=(params_90),it_208=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_207))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_207))        ;        it_208=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_207))        ){
            multiple_assign_var6=it_208;
            label_209=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_210=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_211=node_compile(node_210,info);
            if(            !Value_211            ) {
                __result_obj__117 = (_Bool)0;
                (label_209 = come_decrement_ref_count(label_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_210) ? node_210 = come_decrement_ref_count(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__117;
            }
            else {
            }
            come_value_212=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj72=come_value_212->type,
            come_value_212->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_212->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_206,(struct CVALUE*)come_increment_ref_count(come_value_212));
            (label_209 = come_decrement_ref_count(label_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_210) ? node_210 = come_decrement_ref_count(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 705, "struct buffer*"))));
        buffer_append_str(buf_213,fun_name_89);
        buffer_append_str(buf_213,"(");
        j_214=0;
        for(        o2_saved_215=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_206)),it_216=list$1CVALUE$ph_begin((o2_saved_215))        ;        !list$1CVALUE$ph_end((o2_saved_215))        ;        it_216=list$1CVALUE$ph_next((o2_saved_215))        ){
            buffer_append_str(buf_213,it_216->c_value);
            if(            j_214!=list$1CVALUE$ph_length(come_params_206)-1            ) {
                buffer_append_str(buf_213,",");
            }
            j_214++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_213,")");
        come_value_217=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 722, "struct CVALUE*"))));
        __dec_obj73=come_value_217->c_value,
        come_value_217->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_213));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(fun_name_89,"__builtin_memmove")||string_operator_equals(fun_name_89,"__builtin_memset")        ) {
            __dec_obj74=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 726, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_ffs")        ) {
            __dec_obj75=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 729, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_ffsl")        ) {
            __dec_obj76=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_ffsll")        ) {
            __dec_obj77=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 735, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_bswap16")        ) {
            __dec_obj78=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_bswap32")        ) {
            __dec_obj79=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_bswap64")        ) {
            __dec_obj80=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_constant_p")        ) {
            __dec_obj81=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_expect")        ) {
            __dec_obj82=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___memset_chk")        ) {
            __dec_obj83=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_object_size")        ) {
            __dec_obj84=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 757, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___memcpy_chk")        ) {
            __dec_obj85=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 760, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___strncpy_chk")        ) {
            __dec_obj86=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___strncat_chk")        ) {
            __dec_obj87=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 768, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_strrchr")        ) {
            __dec_obj88=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 772, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_89,"__builtin___vsnprintf_chk")        ) {
            __dec_obj89=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_clz")        ) {
            __dec_obj90=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_thread_fence")        ) {
            __dec_obj91=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_signal_fence")        ) {
            __dec_obj92=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_exchange")        ) {
            __dec_obj93=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value272=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value272, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_exchange_strong")        ) {
            __dec_obj94=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value274=list$1CVALUE$ph_operator_load_element(come_params_206,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value274, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_exchange_weak")        ) {
            __dec_obj95=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value276=list$1CVALUE$ph_operator_load_element(come_params_206,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value276, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_store")        ) {
            __dec_obj96=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 797, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_load")        ) {
            __dec_obj97=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value281=list$1CVALUE$ph_operator_load_element(come_params_206,0)))->type));
            come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value281, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_value_217->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_add")        ) {
            __dec_obj98=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value283=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_sub")        ) {
            __dec_obj99=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value285=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value285, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_and")        ) {
            __dec_obj100=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value287=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value287, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_or")        ) {
            __dec_obj101=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value289=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__c11_atomic_fetch_xor")        ) {
            __dec_obj102=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value291=list$1CVALUE$ph_operator_load_element(come_params_206,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__dsb")        ) {
            __dec_obj103=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 819, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__isb")        ) {
            __dec_obj104=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 822, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__dmb")        ) {
            __dec_obj105=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_cdp")        ) {
            __dec_obj106=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 828, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_ldc")        ) {
            __dec_obj107=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 831, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_stc")        ) {
            __dec_obj108=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_stcl")        ) {
            __dec_obj109=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_89,"__builtin_arm_ldcl")        ) {
            __dec_obj110=come_value_217->type,
            come_value_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_217->var=((void*)0);
        add_come_last_code(info,"%s",come_value_217->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_217));
        __result_obj__118 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__118;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"__builtin_va_arg")    ) {
        come_params_218=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 852, "struct list$1CVALUE$ph*"))));
        i_219=0;
        result_type_220=((void*)0);
        for(        o2_saved_221=(params_90),it_222=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_221))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_221))        ;        it_222=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_221))        ){
            multiple_assign_var7=it_222;
            label_223=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_224=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_225=node_compile(node_224,info);
            if(            !Value_225            ) {
                __result_obj__119 = (_Bool)0;
                (label_223 = come_decrement_ref_count(label_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__119;
            }
            else {
            }
            come_value_226=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj111=come_value_226->type,
            come_value_226->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_226->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_218,(struct CVALUE*)come_increment_ref_count(come_value_226));
            __dec_obj112=result_type_220,
            result_type_220=(struct sType*)come_increment_ref_count(come_value_226->type);
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_223 = come_decrement_ref_count(label_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_224) ? node_224 = come_decrement_ref_count(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 872, "struct buffer*"))));
        buffer_append_str(buf_227,fun_name_89);
        buffer_append_str(buf_227,"(");
        j_228=0;
        for(        o2_saved_229=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_218)),it_230=list$1CVALUE$ph_begin((o2_saved_229))        ;        !list$1CVALUE$ph_end((o2_saved_229))        ;        it_230=list$1CVALUE$ph_next((o2_saved_229))        ){
            buffer_append_str(buf_227,it_230->c_value);
            if(            j_228!=list$1CVALUE$ph_length(come_params_218)-1            ) {
                buffer_append_str(buf_227,",");
            }
            j_228++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_227,")");
        come_value_231=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 889, "struct CVALUE*"))));
        __dec_obj113=come_value_231->c_value,
        come_value_231->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_227));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj114=come_value_231->type,
        come_value_231->type=(struct sType*)come_increment_ref_count(result_type_220);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_231->var=((void*)0);
        add_come_last_code(info,"%s",come_value_231->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_231));
        __result_obj__120 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__120;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"__builtin_va_copy")    ) {
        come_params_232=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 901, "struct list$1CVALUE$ph*"))));
        i_233=0;
        for(        o2_saved_234=(params_90),it_235=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_234))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_234))        ;        it_235=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_234))        ){
            multiple_assign_var8=it_235;
            label_236=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_237=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_238=node_compile(node_237,info);
            if(            !Value_238            ) {
                __result_obj__121 = (_Bool)0;
                (label_236 = come_decrement_ref_count(label_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_237) ? node_237 = come_decrement_ref_count(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__121;
            }
            else {
            }
            come_value_239=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj115=come_value_239->type,
            come_value_239->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_239->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_232,(struct CVALUE*)come_increment_ref_count(come_value_239));
            (label_236 = come_decrement_ref_count(label_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_237) ? node_237 = come_decrement_ref_count(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_240=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 918, "struct buffer*"))));
        buffer_append_str(buf_240,fun_name_89);
        buffer_append_str(buf_240,"(");
        j_241=0;
        for(        o2_saved_242=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_232)),it_243=list$1CVALUE$ph_begin((o2_saved_242))        ;        !list$1CVALUE$ph_end((o2_saved_242))        ;        it_243=list$1CVALUE$ph_next((o2_saved_242))        ){
            buffer_append_str(buf_240,it_243->c_value);
            if(            j_241!=list$1CVALUE$ph_length(come_params_232)-1            ) {
                buffer_append_str(buf_240,",");
            }
            j_241++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_240,")");
        result_type_244=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 935, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_value_245=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 937, "struct CVALUE*"))));
        __dec_obj116=come_value_245->c_value,
        come_value_245->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_240));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj117=come_value_245->type,
        come_value_245->type=(struct sType*)come_increment_ref_count(result_type_244);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_245->var=((void*)0);
        add_come_last_code(info,"%s",come_value_245->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_245));
        __result_obj__122 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__122;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(fun_name_89,"string")    ) {
        __dec_obj118=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"wstring")    ) {
        __dec_obj119=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"inherit")    ) {
        p_246=info->come_fun->mName;
        version_247=0;
        while(        *p_246        ) {
            if(            *p_246==95&&*(p_246+1)==118&&xisdigit(*(p_246+2))            ) {
                p2_248=p_246+2;
                version_247=0;
                while(                xisdigit(*p2_248)                ) {
                    version_247=version_247*10+(*p2_248-48);
                    p2_248++;
                }
                break;
            }
            else {
                p_246++;
            }
        }
        char real_fun_name_249[2048];
        memset(&real_fun_name_249, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_249,info->come_fun->mName,p_246-info->come_fun->mName);
        real_fun_name_249[p_246-info->come_fun->mName]=0;
        for(        i_250=version_247-1        ;        i_250>=1        ;        i_250--        ){
            new_fun_name_251=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_249,i_250));
            if(            (_condtional_value_X3=(((struct sFun*)(__right_value341=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_251))))),            come_call_finalizer(sFun_finalize, __right_value341, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X3            ) {
                __dec_obj120=fun_name_89,
                fun_name_89=(char*)come_increment_ref_count(__builtin_string(new_fun_name_251));
                __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_251 = come_decrement_ref_count(new_fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_251 = come_decrement_ref_count(new_fun_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        i_250==0        ) {
            new_fun_name_258=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_249));
            if(            (_condtional_value_X4=(((struct sFun*)(__right_value344=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_258))))),            come_call_finalizer(sFun_finalize, __right_value344, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X4            ) {
                __dec_obj121=fun_name_89,
                fun_name_89=(char*)come_increment_ref_count(__builtin_string(new_fun_name_258));
                __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            string_operator_equals(fun_name_89,info->come_fun->mName)            ) {
                ((struct tuple2$2int$bool$*)(__right_value346=err_msg(info,"invalid inherit")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value346, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__131 = (_Bool)1;
                (new_fun_name_258 = come_decrement_ref_count(new_fun_name_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__131;
            }
            (new_fun_name_258 = come_decrement_ref_count(new_fun_name_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_259=128        ;        i_259>=1        ;        i_259--        ){
            new_fun_name_260=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_89,i_259));
            if(            (_condtional_value_X5=(((struct sFun*)(__right_value348=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_260))))),            come_call_finalizer(sFun_finalize, __right_value348, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X5            ) {
                __dec_obj122=fun_name_89,
                fun_name_89=(char*)come_increment_ref_count(__builtin_string(new_fun_name_260));
                __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_260 = come_decrement_ref_count(new_fun_name_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_260 = come_decrement_ref_count(new_fun_name_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    fun_261=((struct sFun*)(__right_value350=map$2char$phsFun$ph_at(info->funcs,fun_name_89,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value350, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_261==((void*)0)    ) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_89);
        come_params_262=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1018, "struct list$1CVALUE$ph*"))));
        i_263=0;
        result_type_264=((void*)0);
        for(        o2_saved_265=(params_90),it_266=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_265))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_265))        ;        it_266=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_265))        ){
            multiple_assign_var9=it_266;
            label_267=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            node_268=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
            Value_269=node_compile(node_268,info);
            if(            !Value_269            ) {
                __result_obj__132 = (_Bool)0;
                (label_267 = come_decrement_ref_count(label_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_268) ? node_268 = come_decrement_ref_count(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__132;
            }
            else {
            }
            come_value_270=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj123=come_value_270->type,
            come_value_270->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_270->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_262,(struct CVALUE*)come_increment_ref_count(come_value_270));
            __dec_obj124=result_type_264,
            result_type_264=(struct sType*)come_increment_ref_count(come_value_270->type);
            come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_267 = come_decrement_ref_count(label_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_268) ? node_268 = come_decrement_ref_count(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_271=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1038, "struct buffer*"))));
        buffer_append_str(buf_271,fun_name_89);
        buffer_append_str(buf_271,"(");
        j_272=0;
        for(        o2_saved_273=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_262)),it_274=list$1CVALUE$ph_begin((o2_saved_273))        ;        !list$1CVALUE$ph_end((o2_saved_273))        ;        it_274=list$1CVALUE$ph_next((o2_saved_273))        ){
            buffer_append_str(buf_271,it_274->c_value);
            if(            j_272!=list$1CVALUE$ph_length(come_params_262)-1            ) {
                buffer_append_str(buf_271,",");
            }
            j_272++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_271,")");
        come_value_275=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1055, "struct CVALUE*"))));
        __dec_obj125=come_value_275->c_value,
        come_value_275->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_271));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj126=come_value_275->type,
        come_value_275->type=(struct sType*)come_increment_ref_count(result_type_264);
        come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_275->var=((void*)0);
        add_come_last_code(info,"%s",come_value_275->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
        __result_obj__133 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__133;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    result_type_276=(struct sType*)come_increment_ref_count(sType_clone(fun_261->mResultType));
    result_type_276->mStatic=(_Bool)0;
    param_types_277=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1070, "struct list$1sType$ph*"))));
    for(    o2_saved_278=(struct list$1sType$ph*)come_increment_ref_count((fun_261->mParamTypes)),it_279=list$1sType$ph_begin((o2_saved_278))    ;    !list$1sType$ph_end((o2_saved_278))    ;    it_279=list$1sType$ph_next((o2_saved_278))    ){
        it2_280=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_279)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        list$1sType$ph_push_back(param_types_277,(struct sType*)come_increment_ref_count(sType_clone(it2_280)));
        come_call_finalizer(sType_finalize, it2_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj127=result_type_276,
    result_type_276=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_276),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_params_281=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1078, "struct list$1CVALUE$ph*"))));
    for(    i_282=0    ;    i_282<list$1sType$ph_length(fun_261->mParamTypes)-(((method_block_91)?(2):(0)))    ;    i_282++    ){
        list$1CVALUE$ph_add(come_params_281,((void*)0));
    }
    for(    o2_saved_283=(params_90),it_284=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_283))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_283))    ;    it_284=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_283))    ){
        multiple_assign_var10=it_284;
        label_285=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_286=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_261->mVarArgs||string_operator_equals(fun_name_89,"__builtin_va_start")        ) {
        }
        else if(        label_285        ) {
            Value_287=node_compile(node_286,info);
            if(            !Value_287            ) {
                __result_obj__134 = (_Bool)0;
                (label_285 = come_decrement_ref_count(label_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_286) ? node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__134;
            }
            else {
            }
            come_value_288=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj128=come_value_288->type,
            come_value_288->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_288->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            n_289=0;
            for(            o2_saved_290=(struct list$1char$ph*)come_increment_ref_count((fun_261->mParamNames)),it_293=list$1char$ph_begin((o2_saved_290))            ;            !list$1char$ph_end((o2_saved_290))            ;            it_293=list$1char$ph_next((o2_saved_290))            ){
                if(                string_operator_equals(label_285,it_293)                ) {
                    break;
                }
                n_289++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X6=(((struct sType*)(__right_value371=list$1sType$ph_operator_load_element(param_types_277,n_289))))),            come_call_finalizer(sType_finalize, __right_value371, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X6            ) {
                check_assign_type(((char*)(__right_value374=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value372=string_to_string(fun_name_89))),((char*)(__right_value373=int_to_string(n_289)))))),((struct sType*)(__right_value375=list$1sType$ph_operator_load_element(param_types_277,n_289))),come_value_288->type,come_value_288,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value375, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X7=(((struct sType*)(__right_value376=list$1sType$ph_operator_load_element(param_types_277,n_289)))&&((struct sType*)(__right_value377=list$1sType$ph_operator_load_element(param_types_277,n_289)))->mHeap&&come_value_288->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value376, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value377, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X7            ) {
                std_move(((struct sType*)(__right_value378=list$1sType$ph_operator_load_element(param_types_277,n_289))),come_value_288->type,come_value_288,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value378, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_281,n_289,(struct CVALUE*)come_increment_ref_count(come_value_288));
            come_call_finalizer(CVALUE_finalize, come_value_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_285 = come_decrement_ref_count(label_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_286) ? node_286 = come_decrement_ref_count(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    i_301=0;
    for(    o2_saved_302=(params_90),it_303=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_302))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_302))    ;    it_303=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_302))    ){
        multiple_assign_var11=it_303;
        label_304=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_305=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        fun_261->mVarArgs||string_operator_equals(fun_name_89,"__builtin_va_start")        ) {
            Value_306=node_compile(node_305,info);
            if(            !Value_306            ) {
                __result_obj__143 = (_Bool)0;
                (label_304 = come_decrement_ref_count(label_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_305) ? node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__143;
            }
            else {
            }
            come_value_307=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj130=come_value_307->type,
            come_value_307->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_307->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                if(                (_condtional_value_X8=(((struct CVALUE*)(__right_value381=list$1CVALUE$ph_operator_load_element(come_params_281,i_301)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value381, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X8                ) {
                    break;
                }
                else {
                    i_301++;
                }
            }
            list$1CVALUE$ph_replace(come_params_281,i_301,(struct CVALUE*)come_increment_ref_count(come_value_307));
            i_301++;
            come_call_finalizer(CVALUE_finalize, come_value_307, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        label_304        ) {
        }
        else {
            Value_308=node_compile(node_305,info);
            if(            !Value_308            ) {
                __result_obj__144 = (_Bool)0;
                (label_304 = come_decrement_ref_count(label_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_305) ? node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__144;
            }
            else {
            }
            come_value_309=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj131=come_value_309->type,
            come_value_309->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_309->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                if(                (_condtional_value_X9=(((struct CVALUE*)(__right_value384=list$1CVALUE$ph_operator_load_element(come_params_281,i_301)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value384, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X9                ) {
                    break;
                }
                else {
                    i_301++;
                }
            }
            if(            (_condtional_value_X10=(((struct sType*)(__right_value385=list$1sType$ph_operator_load_element(param_types_277,i_301))))),            come_call_finalizer(sType_finalize, __right_value385, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X10            ) {
                check_assign_type(((char*)(__right_value388=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value386=string_to_string(fun_name_89))),((char*)(__right_value387=int_to_string(i_301)))))),((struct sType*)(__right_value389=list$1sType$ph_operator_load_element(param_types_277,i_301))),come_value_309->type,come_value_309,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value389, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X11=(((struct sType*)(__right_value390=list$1sType$ph_operator_load_element(param_types_277,i_301)))&&((struct sType*)(__right_value391=list$1sType$ph_operator_load_element(param_types_277,i_301)))->mHeap&&come_value_309->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value390, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value391, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X11            ) {
                std_move(((struct sType*)(__right_value392=list$1sType$ph_operator_load_element(param_types_277,i_301))),come_value_309->type,come_value_309,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value392, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_281,i_301,(struct CVALUE*)come_increment_ref_count(come_value_309));
            i_301++;
            come_call_finalizer(CVALUE_finalize, come_value_309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_304 = come_decrement_ref_count(label_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_305) ? node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    (_Bool)1    ) {
        if(        (_condtional_value_X12=(((struct CVALUE*)(__right_value393=list$1CVALUE$ph_operator_load_element(come_params_281,i_301)))==((void*)0))),        come_call_finalizer(CVALUE_finalize, __right_value393, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X12        ) {
            break;
        }
        else {
            i_301++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_90)<list$1sType$ph_length(fun_261->mParamTypes)    ) {
        for(        ;        i_301<list$1sType$ph_length(fun_261->mParamTypes)-(((method_block_91)?(2):(0)))        ;        i_301++        ){
            default_param_310=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value394=list$1char$ph_operator_load_element(fun_261->mParamDefaultParametors,i_301))), "05call.c", 1187, "char*"));
            (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_name_317=((char*)(__right_value396=list$1char$ph_operator_load_element(fun_261->mParamNames,i_301)));
            (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            (_condtional_value_X13=(default_param_310&&string_operator_not_equals(default_param_310,"")&&((struct CVALUE*)(__right_value397=list$1CVALUE$ph_operator_load_element(come_params_281,i_301)))==((void*)0))),            come_call_finalizer(CVALUE_finalize, __right_value397, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X13            ) {
                source_318=(struct buffer*)come_increment_ref_count(info->source);
                p_319=info->p;
                head_320=info->head;
                sline_321=info->sline;
                __dec_obj132=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_310));
                come_call_finalizer(buffer_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_322=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_323=node_compile(node_322,info);
                if(                !Value_323                ) {
                    __result_obj__149 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((node_322) ? node_322 = come_decrement_ref_count(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (default_param_310 = come_decrement_ref_count(default_param_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__149;
                }
                else {
                }
                __dec_obj133=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_318);
                come_call_finalizer(buffer_finalize, __dec_obj133,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=p_319;
                info->head=head_320;
                info->sline=sline_321;
                come_value_324=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj134=come_value_324->type,
                come_value_324->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_324->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X14=(((struct sType*)(__right_value402=list$1sType$ph_operator_load_element(param_types_277,i_301))))),                come_call_finalizer(sType_finalize, __right_value402, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X14                ) {
                    check_assign_type(((char*)(__right_value405=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value403=string_to_string(fun_name_89))),((char*)(__right_value404=int_to_string(i_301)))))),((struct sType*)(__right_value406=list$1sType$ph_operator_load_element(param_types_277,i_301))),come_value_324->type,come_value_324,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value405 = come_decrement_ref_count(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value406, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                (_condtional_value_X15=(((struct sType*)(__right_value407=list$1sType$ph_operator_load_element(param_types_277,i_301)))&&((struct sType*)(__right_value408=list$1sType$ph_operator_load_element(param_types_277,i_301)))->mHeap&&come_value_324->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value407, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                come_call_finalizer(sType_finalize, __right_value408, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X15                ) {
                    std_move(((struct sType*)(__right_value409=list$1sType$ph_operator_load_element(param_types_277,i_301))),come_value_324->type,come_value_324,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value409, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_281,i_301,(struct CVALUE*)come_increment_ref_count(come_value_324));
                come_call_finalizer(buffer_finalize, source_318, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_322) ? node_322 = come_decrement_ref_count(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_324, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                (_condtional_value_X16=(((struct CVALUE*)(__right_value410=list$1CVALUE$ph_operator_load_element(come_params_281,i_301)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value410, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X16                ) {
                    ((struct tuple2$2int$bool$*)(__right_value411=err_msg(info,"require parametor(%s)(1) %d",fun_261->mName,i_301)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value411, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__150 = (_Bool)1;
                    (default_param_310 = come_decrement_ref_count(default_param_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__150;
                }
            }
            (default_param_310 = come_decrement_ref_count(default_param_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_261->mParamTypes)-(((method_block_91)?(2):(0)))!=list$1CVALUE$ph_length(come_params_281)&&!fun_261->mVarArgs&&string_operator_not_equals(fun_name_89,"__builtin_va_start")&&string_operator_not_equals(fun_name_89,"__builtin_va_end")    ) {
        ((struct tuple2$2int$bool$*)(__right_value412=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_89,list$1sType$ph_length(fun_261->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_90))));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value412, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__151 = (_Bool)1;
        (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__151;
    }
    if(    method_block_91    ) {
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1239, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value414=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1239, "struct sCurrentNode*")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode_finalize;
        _inf_value1->clone=(void*)sCurrentNode_clone;
        _inf_value1->compile=(void*)sCurrentNode_compile;
        _inf_value1->sline=(void*)sCurrentNode_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode_kind;
        _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
        current_stack_frame_node_325=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer(sCurrentNode_finalize, __right_value414, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        Value_327=node_compile(current_stack_frame_node_325,info);
        if(        !Value_327        ) {
            __result_obj__154 = (_Bool)0;
            ((current_stack_frame_node_325) ? current_stack_frame_node_325 = come_decrement_ref_count(current_stack_frame_node_325, ((struct sNode*)current_stack_frame_node_325)->finalize, ((struct sNode*)current_stack_frame_node_325)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__154;
        }
        else {
        }
        come_value_328=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj136=come_value_328->type,
        come_value_328->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_328->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_281,(struct CVALUE*)come_increment_ref_count(come_value_328));
        method_block2_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1249, "struct buffer*"))));
        method_block_type_330=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value422=list$1sType$ph_operator_load_element(fun_261->mParamTypes,-1)))));
        come_call_finalizer(sType_finalize, __right_value422, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        class_name_331=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value425=list$1sType$ph_operator_load_element(method_block_type_330->mParamTypes,0)))->mClass=((struct sClass*)(__right_value426=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_331)));
        come_call_finalizer(sType_finalize, __right_value425, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, __right_value426, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        current_stack_frame_struct_340=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value427=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_331)));
        come_call_finalizer(sClass_finalize, __right_value427, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->num_method_block++;
        num_method_block_341=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_330->mClass->mName,"lambda")        ) {
            ((struct tuple2$2int$bool$*)(__right_value428=err_msg(info,"This function does not have method block(%s)",fun_name_89)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value428, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__163 = (_Bool)1;
            ((current_stack_frame_node_325) ? current_stack_frame_node_325 = come_decrement_ref_count(current_stack_frame_node_325, ((struct sNode*)current_stack_frame_node_325)->finalize, ((struct sNode*)current_stack_frame_node_325)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_331 = come_decrement_ref_count(class_name_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__163;
        }
        result_type_342=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_330->mResultType));
        result_type_342->mStatic=(_Bool)0;
        result_type2_343=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_342),(struct sType*)come_increment_ref_count(info->generics_type),info));
        param_types_344=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_330->mParamTypes));
        param_names_345=method_block_type_330->mParamNames;
        all_alhabet_sname_346=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1273, "struct buffer*"))));
        {
            p_347=info->sname;
            while(            *p_347            ) {
                if(                xisalnum(*p_347)                ) {
                    buffer_append_char(all_alhabet_sname_346,*p_347++);
                }
                else {
                    p_347++;
                }
            }
        }
        buffer_append_format(method_block2_329,"%s fun_block%d_%s(",((char*)(__right_value434=make_come_type_name_string(result_type2_343,info,(_Bool)0))),num_method_block_341,((char*)(__right_value435=buffer_to_string(all_alhabet_sname_346))));
        (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        i_301=0;
        for(        o2_saved_348=(struct list$1sType$ph*)come_increment_ref_count((param_types_344)),it_349=list$1sType$ph_begin((o2_saved_348))        ;        !list$1sType$ph_end((o2_saved_348))        ;        it_349=list$1sType$ph_next((o2_saved_348))        ){
            param_type_350=(struct sType*)come_increment_ref_count(it_349);
            if(            i_301==0            ) {
                param_name_351=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_329,"%s",((char*)(__right_value437=make_define_var(param_type_350,param_name_351,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value437 = come_decrement_ref_count(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_351 = come_decrement_ref_count(param_name_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            i_301==1            ) {
                param_name_352=(char*)come_increment_ref_count(xsprintf("it"));
                param_type2_353=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_350),(struct sType*)come_increment_ref_count(info->generics_type),info));
                buffer_append_format(method_block2_329,"%s",((char*)(__right_value440=make_define_var(param_type2_353,param_name_352,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value440 = come_decrement_ref_count(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_352 = come_decrement_ref_count(param_name_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                param_name_354=(char*)come_increment_ref_count(xsprintf("it%d",i_301));
                param_type2_355=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_350),(struct sType*)come_increment_ref_count(info->generics_type),info));
                buffer_append_format(method_block2_329,"%s",((char*)(__right_value443=make_define_var(param_type2_355,param_name_354,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value443 = come_decrement_ref_count(__right_value443, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_354 = come_decrement_ref_count(param_name_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_355, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            i_301!=list$1sType$ph_length(param_types_344)-1            ) {
                buffer_append_str(method_block2_329,",");
            }
            i_301++;
            come_call_finalizer(sType_finalize, param_type_350, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(method_block2_329,")\n");
        buffer_append_str(method_block2_329,((char*)(__right_value444=buffer_to_string(method_block_91))));
        (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        source3_356=(struct buffer*)come_increment_ref_count(info->source);
        p_357=info->p;
        head_358=info->head;
        sline_359=info->sline;
        __dec_obj137=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_329);
        come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_92;
        node_360=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_361=node_compile(node_360,info);
        if(        !Value_361        ) {
            __result_obj__164 = (_Bool)0;
            ((current_stack_frame_node_325) ? current_stack_frame_node_325 = come_decrement_ref_count(current_stack_frame_node_325, ((struct sNode*)current_stack_frame_node_325)->finalize, ((struct sNode*)current_stack_frame_node_325)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_331 = come_decrement_ref_count(class_name_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_360) ? node_360 = come_decrement_ref_count(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__164;
        }
        else {
        }
        method_block_name_362=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_341,((char*)(__right_value446=buffer_to_string(all_alhabet_sname_346)))));
        (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_value2_363=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1340, "struct CVALUE*"))));
        fun2_364=((struct sFun*)(__right_value451=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value450=__builtin_string(method_block_name_362))),((void*)0))));
        (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value451, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun2_364==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value452=err_msg(info,"method block function not found(%s)",method_block_name_362)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value452, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__165 = (_Bool)1;
            ((current_stack_frame_node_325) ? current_stack_frame_node_325 = come_decrement_ref_count(current_stack_frame_node_325, ((struct sNode*)current_stack_frame_node_325)->finalize, ((struct sNode*)current_stack_frame_node_325)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_331 = come_decrement_ref_count(class_name_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_360) ? node_360 = come_decrement_ref_count(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (method_block_name_362 = come_decrement_ref_count(method_block_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value2_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__165;
        }
        method_block_type2_365=fun2_364->mLambdaType;
        __dec_obj138=come_value2_363->c_value,
        come_value2_363->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_362));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj139=come_value2_363->type,
        come_value2_363->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_365));
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_363->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_281,(struct CVALUE*)come_increment_ref_count(come_value2_363));
        __dec_obj140=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_356);
        come_call_finalizer(buffer_finalize, __dec_obj140,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_357;
        info->head=head_358;
        info->sline=sline_359;
        info->current_stack_frame_struct=current_stack_frame_struct_340;
        ((current_stack_frame_node_325) ? current_stack_frame_node_325 = come_decrement_ref_count(current_stack_frame_node_325, ((struct sNode*)current_stack_frame_node_325)->finalize, ((struct sNode*)current_stack_frame_node_325)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_331 = come_decrement_ref_count(class_name_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_360) ? node_360 = come_decrement_ref_count(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (method_block_name_362 = come_decrement_ref_count(method_block_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf_366=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1365, "struct buffer*"))));
    if(    string_operator_equals(fun_name_89,"__isoc23_strtoll")    ) {
        __dec_obj141=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"__isoc23_strtoul")    ) {
        __dec_obj142=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_89,"__isoc23_strtoull")    ) {
        __dec_obj143=fun_name_89,
        fun_name_89=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    buffer_append_str(buf_366,fun_name_89);
    buffer_append_str(buf_366,"(");
    j_367=0;
    for(    o2_saved_368=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_281)),it_369=list$1CVALUE$ph_begin((o2_saved_368))    ;    !list$1CVALUE$ph_end((o2_saved_368))    ;    it_369=list$1CVALUE$ph_next((o2_saved_368))    ){
        buffer_append_str(buf_366,it_369->c_value);
        if(        j_367!=list$1CVALUE$ph_length(come_params_281)-1        ) {
            buffer_append_str(buf_366,",");
        }
        j_367++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_366,")");
    come_value_370=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1392, "struct CVALUE*"))));
    __dec_obj144=come_value_370->c_value,
    come_value_370->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_366));
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj145=come_value_370->type,
    come_value_370->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_276));
    come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_370->type->mStatic=(_Bool)0;
    come_value_370->type->mImmutable=(_Bool)0;
    come_value_370->var=((void*)0);
    if(    fun_261->mResultType->mHeap    ) {
        append_object_to_right_values(come_value_370,(struct sType*)come_increment_ref_count(result_type_276),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")    ) {
        if(        string_operator_not_equals(fun_name_89,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_89,"null_check")&&string_operator_not_equals(fun_name_89,"come_push_stackframe")&&string_operator_not_equals(fun_name_89,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_89,"come_pop_stackframe")&&string_operator_not_equals(fun_name_89,"come_pop_stackframe_v2")        ) {
            __dec_obj146=come_value_370->c_value,
            come_value_370->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_370->c_value,come_value_370->type,info));
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_370->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_370));
    info->calling_fun=fun_261;
    __result_obj__166 = (_Bool)1;
    (fun_name_89 = come_decrement_ref_count(fun_name_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_366, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_370, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__59;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_81;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_82;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    result_81=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 925, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_82=self->head;
    while(    it_82!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_82->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_81,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_82->item)));
        }
        it_82=it_82->next;
    }
    __result_obj__64 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_81);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_79;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_80;
    it_79=self->head;
    while(    it_79!=((void*)0)    ) {
        prev_it_80=it_79;
        it_79=it_79->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value139 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_83;
struct tuple2$2char$phsNode$ph* __dec_obj51;
void* __right_value140 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_84;
struct tuple2$2char$phsNode$ph* __dec_obj52;
void* __right_value141 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_85;
struct tuple2$2char$phsNode$ph* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__61;
    if(    self->len==0    ) {
        litem_83=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value139=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 944, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_83->prev=((void*)0);
        litem_83->next=((void*)0);
        __dec_obj51=litem_83->item,
        litem_83->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_83;
        self->head=litem_83;
    }
    else if(    self->len==1    ) {
        litem_84=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value140=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 954, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_84->prev=self->head;
        litem_84->next=((void*)0);
        __dec_obj52=litem_84->item,
        litem_84->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_84;
        self->head->next=litem_84;
    }
    else {
        litem_85=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value141=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 964, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_85->prev=self->tail;
        litem_85->next=((void*)0);
        __dec_obj53=litem_85->item,
        litem_85->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_85;
        self->tail=litem_85;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__62;
void* __right_value142 = (void*)0;
struct tuple2$2char$phsNode$ph* result_86;
void* __right_value143 = (void*)0;
char* __dec_obj54;
void* __right_value144 = (void*)0;
struct sNode* __dec_obj55;
struct tuple2$2char$phsNode$ph* __result_obj__63;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__62;
    }
    result_86=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj54=result_86->v1,
        result_86->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj55=result_86->v2,
        result_86->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__63 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_86);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_87;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_88;
    it_87=self->head;
    while(    it_87!=((void*)0)    ) {
        prev_it_88=it_87;
        it_87=it_87->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__68 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_97;
struct list_item$1CVALUE$ph* prev_it_98;
    it_97=self->head;
    while(    it_97!=((void*)0)    ) {
        prev_it_98=it_97;
        it_97=it_97->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_101;
struct tuple2$2char$phsNode$ph* __result_obj__70;
struct tuple2$2char$phsNode$ph* __result_obj__71;
struct tuple2$2char$phsNode$ph* result_102;
struct tuple2$2char$phsNode$ph* __result_obj__72;
result_101 = (void*)0;
result_102 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_101,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__70 = result_101;
        return __result_obj__70;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__71 = self->it->item;
        return __result_obj__71;
    }
    memset(&result_102,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__72 = result_102;
    return __result_obj__72;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_104;
struct tuple2$2char$phsNode$ph* __result_obj__73;
struct tuple2$2char$phsNode$ph* __result_obj__74;
struct tuple2$2char$phsNode$ph* result_105;
struct tuple2$2char$phsNode$ph* __result_obj__75;
result_104 = (void*)0;
result_105 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_104,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__73 = result_104;
        return __result_obj__73;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_105,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__75 = result_105;
    return __result_obj__75;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_110;
int i_111;
struct sType* __result_obj__77;
struct sType* default_value_112;
struct sType* __result_obj__78;
default_value_112 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_110=self->head;
    i_111=0;
    while(    it_110!=((void*)0)    ) {
        if(        position==i_111        ) {
            __result_obj__77 = (struct sType*)come_increment_ref_count(it_110->item);
            come_call_finalizer(sType_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__77;
        }
        it_110=it_110->next;
        i_111++;
    }
    memset(&default_value_112,0,sizeof(struct sType*));
    __result_obj__78 = (struct sType*)come_increment_ref_count(default_value_112);
    come_call_finalizer(sType_finalize, default_value_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_113;
int i_114;
struct sType* __result_obj__79;
struct sType* default_value_115;
struct sType* __result_obj__80;
default_value_115 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_113=self->head;
    i_114=0;
    while(    it_113!=((void*)0)    ) {
        if(        position==i_114        ) {
            __result_obj__79 = (struct sType*)come_increment_ref_count(it_113->item);
            come_call_finalizer(sType_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__79;
        }
        it_113=it_113->next;
        i_114++;
    }
    memset(&default_value_115,0,sizeof(struct sType*));
    __result_obj__80 = (struct sType*)come_increment_ref_count(default_value_115);
    come_call_finalizer(sType_finalize, default_value_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_119;
struct CVALUE* __result_obj__81;
struct CVALUE* __result_obj__82;
struct CVALUE* result_120;
struct CVALUE* __result_obj__83;
result_119 = (void*)0;
result_120 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_119,0,sizeof(struct CVALUE*));
        __result_obj__81 = result_119;
        return __result_obj__81;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__82 = self->it->item;
        return __result_obj__82;
    }
    memset(&result_120,0,sizeof(struct CVALUE*));
    __result_obj__83 = result_120;
    return __result_obj__83;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_122;
struct CVALUE* __result_obj__84;
struct CVALUE* __result_obj__85;
struct CVALUE* result_123;
struct CVALUE* __result_obj__86;
result_122 = (void*)0;
result_123 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_122,0,sizeof(struct CVALUE*));
        __result_obj__84 = result_122;
        return __result_obj__84;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__85 = self->it->item;
        return __result_obj__85;
    }
    memset(&result_123,0,sizeof(struct CVALUE*));
    __result_obj__86 = result_123;
    return __result_obj__86;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_126;
unsigned int it_127;
struct sGenericsFun* __result_obj__88;
struct sGenericsFun* __result_obj__89;
struct sGenericsFun* __result_obj__90;
struct sGenericsFun* __result_obj__91;
    hash_126=string_get_hash_key(((char*)key))%self->size;
    it_127=hash_126;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_127]        ) {
            if(            string_equals(self->keys[it_127],key)            ) {
                __result_obj__88 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_127]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__88;
            }
            it_127++;
            if(            it_127>=self->size            ) {
                it_127=0;
            }
            else if(            it_127==hash_126            ) {
                __result_obj__89 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__89;
            }
        }
        else {
            __result_obj__90 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__90;
        }
    }
    __result_obj__91 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)    ) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_134;
unsigned int it_135;
struct sFun* __result_obj__92;
struct sFun* __result_obj__93;
struct sFun* __result_obj__94;
struct sFun* __result_obj__95;
    hash_134=string_get_hash_key(((char*)key))%self->size;
    it_135=hash_134;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_135]        ) {
            if(            string_equals(self->keys[it_135],key)            ) {
                __result_obj__92 = (struct sFun*)come_increment_ref_count(self->items[it_135]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__92;
            }
            it_135++;
            if(            it_135>=self->size            ) {
                it_135=0;
            }
            else if(            it_135==hash_134            ) {
                __result_obj__93 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__93;
            }
        }
        else {
            __result_obj__94 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__94;
        }
    }
    __result_obj__95 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_140;
int i_141;
struct CVALUE* __result_obj__97;
struct CVALUE* default_value_142;
struct CVALUE* __result_obj__98;
default_value_142 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_140=self->head;
    i_141=0;
    while(    it_140!=((void*)0)    ) {
        if(        position==i_141        ) {
            __result_obj__97 = (struct CVALUE*)come_increment_ref_count(it_140->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__97;
        }
        it_140=it_140->next;
        i_141++;
    }
    memset(&default_value_142,0,sizeof(struct CVALUE*));
    __result_obj__98 = (struct CVALUE*)come_increment_ref_count(default_value_142);
    come_call_finalizer(CVALUE_finalize, default_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_143;
int i_144;
struct CVALUE* __result_obj__99;
struct CVALUE* default_value_145;
struct CVALUE* __result_obj__100;
default_value_145 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_143=self->head;
    i_144=0;
    while(    it_143!=((void*)0)    ) {
        if(        position==i_144        ) {
            __result_obj__99 = (struct CVALUE*)come_increment_ref_count(it_143->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__99;
        }
        it_143=it_143->next;
        i_144++;
    }
    memset(&default_value_145,0,sizeof(struct CVALUE*));
    __result_obj__100 = (struct CVALUE*)come_increment_ref_count(default_value_145);
    come_call_finalizer(CVALUE_finalize, default_value_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_151;
int i_152;
struct sType* default_value_153;
struct list$1sType$ph* __result_obj__102;
struct list_item$1sType$ph* it_157;
int i_158;
struct sType* __dec_obj65;
struct list$1sType$ph* __result_obj__103;
default_value_153 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_151=self->len;
        for(        i_152=0        ;        i_152<position-len_151        ;        i_152++        ){
            memset(&default_value_153,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_153));
            come_call_finalizer(sType_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__102 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__102;
    }
    it_157=self->head;
    i_158=0;
    while(    it_157!=((void*)0)    ) {
        if(        position==i_158        ) {
            __dec_obj65=it_157->item,
            it_157->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_157=it_157->next;
        i_158++;
    }
    __result_obj__103 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value182 = (void*)0;
struct list_item$1sType$ph* litem_154;
struct sType* __dec_obj62;
void* __right_value183 = (void*)0;
struct list_item$1sType$ph* litem_155;
struct sType* __dec_obj63;
void* __right_value184 = (void*)0;
struct list_item$1sType$ph* litem_156;
struct sType* __dec_obj64;
struct list$1sType$ph* __result_obj__101;
    if(    self->len==0    ) {
        litem_154=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value182=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1014, "struct list_item$1sType$ph*"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        __dec_obj62=litem_154->item,
        litem_154->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1    ) {
        litem_155=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value183=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1024, "struct list_item$1sType$ph*"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        __dec_obj63=litem_155->item,
        litem_155->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value184=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1034, "struct list_item$1sType$ph*"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        __dec_obj64=litem_156->item,
        litem_156->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result_obj__101 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_161;
struct sType* __result_obj__104;
struct sType* __result_obj__105;
struct sType* result_162;
struct sType* __result_obj__106;
result_161 = (void*)0;
result_162 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_161,0,sizeof(struct sType*));
        __result_obj__104 = result_161;
        return __result_obj__104;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__105 = self->it->item;
        return __result_obj__105;
    }
    memset(&result_162,0,sizeof(struct sType*));
    __result_obj__106 = result_162;
    return __result_obj__106;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_164;
struct sType* __result_obj__107;
struct sType* __result_obj__108;
struct sType* result_165;
struct sType* __result_obj__109;
result_164 = (void*)0;
result_165 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_164,0,sizeof(struct sType*));
        __result_obj__107 = result_164;
        return __result_obj__107;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__108 = self->it->item;
        return __result_obj__108;
    }
    memset(&result_165,0,sizeof(struct sType*));
    __result_obj__109 = result_165;
    return __result_obj__109;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value195 = (void*)0;
struct list_item$1CVALUE$ph* litem_176;
struct CVALUE* __dec_obj67;
void* __right_value196 = (void*)0;
struct list_item$1CVALUE$ph* litem_177;
struct CVALUE* __dec_obj68;
void* __right_value197 = (void*)0;
struct list_item$1CVALUE$ph* litem_178;
struct CVALUE* __dec_obj69;
struct list$1CVALUE$ph* __result_obj__111;
    if(    self->len==0    ) {
        litem_176=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value195=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 944, "struct list_item$1CVALUE$ph*"))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        __dec_obj67=litem_176->item,
        litem_176->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1    ) {
        litem_177=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value196=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 954, "struct list_item$1CVALUE$ph*"))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        __dec_obj68=litem_177->item,
        litem_177->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value197=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 964, "struct list_item$1CVALUE$ph*"))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        __dec_obj69=litem_178->item,
        litem_178->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__111 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_184;
unsigned int it_185;
struct map$2char$phsFun$ph* __result_obj__116;
    hash_184=string_get_hash_key(((char*)key))%self->size;
    it_185=hash_184;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_185]        ) {
            if(            string_equals(self->keys[it_185],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it_185]);
                self->item_existance[it_185]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it_185] = come_decrement_ref_count(self->keys[it_185], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it_185]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_185], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                self->items[it_185]=((void*)0);
                self->len--;
                break;
            }
            it_185++;
            if(            it_185>=self->size            ) {
                it_185=0;
            }
            else if(            it_185==hash_184            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__116 = self;
    return __result_obj__116;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_186;
struct list_item$1char$ph* it_187;
struct list$1char$ph* __result_obj__115;
    it2_186=0;
    it_187=self->head;
    while(    it_187!=((void*)0)    ) {
        if(        string_equals(it_187->item,item)        ) {
            list$1char$ph_delete(self,it2_186,it2_186+1);
            break;
        }
        it2_186++;
        it_187=it_187->next;
    }
    __result_obj__115 = self;
    return __result_obj__115;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_188;
struct list$1char$ph* __result_obj__112;
struct list_item$1char$ph* it_191;
int i_192;
struct list_item$1char$ph* prev_it_193;
struct list_item$1char$ph* it_194;
int i_195;
struct list_item$1char$ph* prev_it_196;
struct list_item$1char$ph* it_197;
struct list_item$1char$ph* head_prev_it_198;
struct list_item$1char$ph* tail_it_199;
int i_200;
struct list_item$1char$ph* prev_it_201;
struct list$1char$ph* __result_obj__114;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_188=tail;
        tail=head;
        head=tmp_188;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__112 = self;
        return __result_obj__112;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_191=self->head;
        i_192=0;
        while(        it_191!=((void*)0)        ) {
            if(            i_192<tail            ) {
                prev_it_193=it_191;
                it_191=it_191->next;
                i_192++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_192==tail            ) {
                self->head=it_191;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_191=it_191->next;
                i_192++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_194=self->head;
        i_195=0;
        while(        it_194!=((void*)0)        ) {
            if(            i_195==head            ) {
                self->tail=it_194->prev;
                self->tail->next=((void*)0);
            }
            if(            i_195>=head            ) {
                prev_it_196=it_194;
                it_194=it_194->next;
                i_195++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_194=it_194->next;
                i_195++;
            }
        }
    }
    else {
        it_197=self->head;
        head_prev_it_198=((void*)0);
        tail_it_199=((void*)0);
        i_200=0;
        while(        it_197!=((void*)0)        ) {
            if(            i_200==head            ) {
                head_prev_it_198=it_197->prev;
            }
            if(            i_200==tail            ) {
                tail_it_199=it_197;
            }
            if(            i_200>=head&&i_200<tail            ) {
                prev_it_201=it_197;
                it_197=it_197->next;
                i_200++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_197=it_197->next;
                i_200++;
            }
        }
        if(        head_prev_it_198!=((void*)0)        ) {
            head_prev_it_198->next=tail_it_199;
        }
        if(        tail_it_199!=((void*)0)        ) {
            tail_it_199->prev=head_prev_it_198;
        }
    }
    __result_obj__114 = self;
    return __result_obj__114;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_189;
struct list_item$1char$ph* prev_it_190;
struct list$1char$ph* __result_obj__113;
    it_189=self->head;
    while(    it_189!=((void*)0)    ) {
        prev_it_190=it_189;
        it_189=it_189->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__113 = self;
    return __result_obj__113;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_252;
unsigned int hash_253;
unsigned int it_254;
struct sFun* __result_obj__123;
struct sFun* __result_obj__124;
struct sFun* __result_obj__125;
struct sFun* __result_obj__126;
default_value_252 = (void*)0;
    memset(&default_value_252,0,sizeof(struct sFun*));
    hash_253=string_get_hash_key(((char*)key))%self->size;
    it_254=hash_253;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_254]        ) {
            if(            string_equals(self->keys[it_254],key)            ) {
                __result_obj__123 = (struct sFun*)come_increment_ref_count(self->items[it_254]);
                come_call_finalizer(sFun_finalize, default_value_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__123;
            }
            it_254++;
            if(            it_254>=self->size            ) {
                it_254=0;
            }
            else if(            it_254==hash_253            ) {
                __result_obj__124 = (struct sFun*)come_increment_ref_count(default_value_252);
                come_call_finalizer(sFun_finalize, default_value_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__124;
            }
        }
        else {
            __result_obj__125 = (struct sFun*)come_increment_ref_count(default_value_252);
            come_call_finalizer(sFun_finalize, default_value_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__125;
        }
    }
    __result_obj__126 = (struct sFun*)come_increment_ref_count(default_value_252);
    come_call_finalizer(sFun_finalize, default_value_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_255;
unsigned int hash_256;
unsigned int it_257;
struct sFun* __result_obj__127;
struct sFun* __result_obj__128;
struct sFun* __result_obj__129;
struct sFun* __result_obj__130;
default_value_255 = (void*)0;
    memset(&default_value_255,0,sizeof(struct sFun*));
    hash_256=string_get_hash_key(((char*)key))%self->size;
    it_257=hash_256;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_257]        ) {
            if(            string_equals(self->keys[it_257],key)            ) {
                __result_obj__127 = (struct sFun*)come_increment_ref_count(self->items[it_257]);
                come_call_finalizer(sFun_finalize, default_value_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__127;
            }
            it_257++;
            if(            it_257>=self->size            ) {
                it_257=0;
            }
            else if(            it_257==hash_256            ) {
                __result_obj__128 = (struct sFun*)come_increment_ref_count(default_value_255);
                come_call_finalizer(sFun_finalize, default_value_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__128;
            }
        }
        else {
            __result_obj__129 = (struct sFun*)come_increment_ref_count(default_value_255);
            come_call_finalizer(sFun_finalize, default_value_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__129;
        }
    }
    __result_obj__130 = (struct sFun*)come_increment_ref_count(default_value_255);
    come_call_finalizer(sFun_finalize, default_value_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_291;
char* __result_obj__135;
char* __result_obj__136;
char* result_292;
char* __result_obj__137;
result_291 = (void*)0;
result_292 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_291,0,sizeof(char*));
        __result_obj__135 = result_291;
        return __result_obj__135;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__136 = self->it->item;
        return __result_obj__136;
    }
    memset(&result_292,0,sizeof(char*));
    __result_obj__137 = result_292;
    return __result_obj__137;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_294;
char* __result_obj__138;
char* __result_obj__139;
char* result_295;
char* __result_obj__140;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_294,0,sizeof(char*));
        __result_obj__138 = result_294;
        return __result_obj__138;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__139 = self->it->item;
        return __result_obj__139;
    }
    memset(&result_295,0,sizeof(char*));
    __result_obj__140 = result_295;
    return __result_obj__140;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_296;
int i_297;
struct CVALUE* default_value_298;
struct list$1CVALUE$ph* __result_obj__141;
struct list_item$1CVALUE$ph* it_299;
int i_300;
struct CVALUE* __dec_obj129;
struct list$1CVALUE$ph* __result_obj__142;
default_value_298 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_296=self->len;
        for(        i_297=0        ;        i_297<position-len_296        ;        i_297++        ){
            memset(&default_value_298,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_298));
            come_call_finalizer(CVALUE_finalize, default_value_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__141 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__141;
    }
    it_299=self->head;
    i_300=0;
    while(    it_299!=((void*)0)    ) {
        if(        position==i_300        ) {
            __dec_obj129=it_299->item,
            it_299->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj129,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_299=it_299->next;
        i_300++;
    }
    __result_obj__142 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__142;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_311;
int i_312;
char* __result_obj__145;
char* default_value_313;
char* __result_obj__146;
default_value_313 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_311=self->head;
    i_312=0;
    while(    it_311!=((void*)0)    ) {
        if(        position==i_312        ) {
            __result_obj__145 = (char*)come_increment_ref_count(it_311->item);
            (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__145;
        }
        it_311=it_311->next;
        i_312++;
    }
    memset(&default_value_313,0,sizeof(char*));
    __result_obj__146 = (char*)come_increment_ref_count(default_value_313);
    (default_value_313 = come_decrement_ref_count(default_value_313, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_314;
int i_315;
char* __result_obj__147;
char* default_value_316;
char* __result_obj__148;
default_value_316 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_314=self->head;
    i_315=0;
    while(    it_314!=((void*)0)    ) {
        if(        position==i_315        ) {
            __result_obj__147 = (char*)come_increment_ref_count(it_314->item);
            (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__147;
        }
        it_314=it_314->next;
        i_315++;
    }
    memset(&default_value_316,0,sizeof(char*));
    __result_obj__148 = (char*)come_increment_ref_count(default_value_316);
    (default_value_316 = come_decrement_ref_count(default_value_316, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__152;
void* __right_value415 = (void*)0;
struct sCurrentNode* result_326;
void* __right_value416 = (void*)0;
char* __dec_obj135;
struct sCurrentNode* __result_obj__153;
    if(    self==(void*)0    ) {
        __result_obj__152 = (void*)0;
        return __result_obj__152;
    }
    result_326=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result_326->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj135=result_326->sname,
        result_326->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_326->sline_real=self->sline_real;
    }
    __result_obj__153 = result_326;
    come_call_finalizer(sCurrentNode_finalize, result_326, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_332;
unsigned int hash_333;
unsigned int it_334;
struct sClass* __result_obj__155;
struct sClass* __result_obj__156;
struct sClass* __result_obj__157;
struct sClass* __result_obj__158;
default_value_332 = (void*)0;
    memset(&default_value_332,0,sizeof(struct sClass*));
    hash_333=string_get_hash_key(((char*)key))%self->size;
    it_334=hash_333;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_334]        ) {
            if(            string_equals(self->keys[it_334],key)            ) {
                __result_obj__155 = (struct sClass*)come_increment_ref_count(self->items[it_334]);
                come_call_finalizer(sClass_finalize, default_value_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__155;
            }
            it_334++;
            if(            it_334>=self->size            ) {
                it_334=0;
            }
            else if(            it_334==hash_333            ) {
                __result_obj__156 = (struct sClass*)come_increment_ref_count(default_value_332);
                come_call_finalizer(sClass_finalize, default_value_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__156;
            }
        }
        else {
            __result_obj__157 = (struct sClass*)come_increment_ref_count(default_value_332);
            come_call_finalizer(sClass_finalize, default_value_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__157;
        }
    }
    __result_obj__158 = (struct sClass*)come_increment_ref_count(default_value_332);
    come_call_finalizer(sClass_finalize, default_value_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_335;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_336;
    it_335=self->head;
    while(    it_335!=((void*)0)    ) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_337;
unsigned int hash_338;
unsigned int it_339;
struct sClass* __result_obj__159;
struct sClass* __result_obj__160;
struct sClass* __result_obj__161;
struct sClass* __result_obj__162;
default_value_337 = (void*)0;
    memset(&default_value_337,0,sizeof(struct sClass*));
    hash_338=string_get_hash_key(((char*)key))%self->size;
    it_339=hash_338;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_339]        ) {
            if(            string_equals(self->keys[it_339],key)            ) {
                __result_obj__159 = (struct sClass*)come_increment_ref_count(self->items[it_339]);
                come_call_finalizer(sClass_finalize, default_value_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__159;
            }
            it_339++;
            if(            it_339>=self->size            ) {
                it_339=0;
            }
            else if(            it_339==hash_338            ) {
                __result_obj__160 = (struct sClass*)come_increment_ref_count(default_value_337);
                come_call_finalizer(sClass_finalize, default_value_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__160;
            }
        }
        else {
            __result_obj__161 = (struct sClass*)come_increment_ref_count(default_value_337);
            come_call_finalizer(sClass_finalize, default_value_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__161;
        }
    }
    __result_obj__162 = (struct sClass*)come_increment_ref_count(default_value_337);
    come_call_finalizer(sClass_finalize, default_value_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value465 = (void*)0;
struct buffer* __dec_obj147;
struct sComeCallNode* __result_obj__167;
    ((struct sNodeBase*)(__right_value465=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value465, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj147=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer(buffer_finalize, __dec_obj147,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__167 = (struct sComeCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComeCallNode_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value466 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value466=__builtin_string("sComeCallNode"))));
    (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_371;
struct buffer* come_block_372;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1CVALUE$ph* come_params_373;
void* __right_value469 = (void*)0;
char* var_name_375;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sType* type__376;
void* __right_value473 = (void*)0;
_Bool __result_obj__173;
void* __right_value474 = (void*)0;
struct sNode* var_node_379;
_Bool Value_380;
_Bool __result_obj__174;
void* __right_value475 = (void*)0;
struct CVALUE* thread_var_value_381;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_382;
void* __right_value478 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
void* __right_value479 = (void*)0;
struct sNode* null_node_383;
_Bool Value_384;
_Bool __result_obj__175;
void* __right_value480 = (void*)0;
struct CVALUE* __dec_obj150;
void* __right_value481 = (void*)0;
struct sType* __dec_obj151;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode* _inf_obj_value2;
void* __right_value484 = (void*)0;
struct sNode* current_stack_frame_node_385;
_Bool Value_386;
_Bool __result_obj__176;
void* __right_value485 = (void*)0;
struct CVALUE* current_stack_frame_value_387;
void* __right_value486 = (void*)0;
char* fun_name_388;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct buffer* come_block2_389;
void* __right_value489 = (void*)0;
char* class_name_390;
void* __right_value490 = (void*)0;
struct sClass* current_stack_frame_struct_391;
void* __right_value491 = (void*)0;
struct buffer* source3_392;
char* p_393;
char* head_394;
int sline_395;
struct buffer* __dec_obj152;
void* __right_value492 = (void*)0;
struct sNode* node_396;
_Bool in_method_block_397;
_Bool Value_398;
_Bool __result_obj__177;
struct buffer* __dec_obj153;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct CVALUE* fun_value_399;
void* __right_value495 = (void*)0;
char* __dec_obj154;
struct sType* __dec_obj155;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct buffer* buf_400;
void* __right_value498 = (void*)0;
char* fun_name_401;
int j_402;
struct list$1CVALUE$ph* o2_saved_403;
struct CVALUE* it_404;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value501 = (void*)0;
char* __dec_obj156;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* type_406;
void* __right_value505 = (void*)0;
struct sType* __dec_obj157;
_Bool __result_obj__178;
    come_block_sline_371=self->come_block_sline;
    come_block_372=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_373=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1444, "struct list$1CVALUE$ph*"))));
    static int thread_num_374=0;
    thread_num_374++;
    var_name_375=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_374));
    type__376=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value471=map$2char$phsType$ph_at(info->types,((char*)(__right_value470=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value471, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type__376==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value473=err_msg(info,"pthread_t is not defined")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value473, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__173 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block_372, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_375 = come_decrement_ref_count(var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__173;
    }
    var_node_379=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_375),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__376),(_Bool)1,((void*)0),info,(_Bool)0));
    Value_380=node_compile(var_node_379,info);
    if(    !Value_380    ) {
        __result_obj__174 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_372, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_375 = come_decrement_ref_count(var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_379) ? var_node_379 = come_decrement_ref_count(var_node_379, ((struct sNode*)var_node_379)->finalize, ((struct sNode*)var_node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__174;
    }
    else {
    }
    thread_var_value_381=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_382=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1466, "struct CVALUE*"))));
    __dec_obj148=come_value_382->c_value,
    come_value_382->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_381->c_value));
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj149=come_value_382->type,
    come_value_382->type=(struct sType*)come_increment_ref_count(thread_var_value_381->type);
    come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_382->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_373,(struct CVALUE*)come_increment_ref_count(come_value_382));
    null_node_383=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_384=node_compile(null_node_383,info);
    if(    !Value_384    ) {
        __result_obj__175 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_372, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_375 = come_decrement_ref_count(var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_379) ? var_node_379 = come_decrement_ref_count(var_node_379, ((struct sNode*)var_node_379)->finalize, ((struct sNode*)var_node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_383) ? null_node_383 = come_decrement_ref_count(null_node_383, ((struct sNode*)null_node_383)->finalize, ((struct sNode*)null_node_383)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__175;
    }
    else {
    }
    __dec_obj150=come_value_382,
    come_value_382=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer(CVALUE_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj151=come_value_382->type,
    come_value_382->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_382->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_373,(struct CVALUE*)come_increment_ref_count(come_value_382));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1485, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value483=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1485, "struct sCurrentNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode_finalize;
    _inf_value2->clone=(void*)sCurrentNode_clone;
    _inf_value2->compile=(void*)sCurrentNode_compile;
    _inf_value2->sline=(void*)sCurrentNode_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    current_stack_frame_node_385=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sCurrentNode_finalize, __right_value483, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_386=node_compile(current_stack_frame_node_385,info);
    if(    !Value_386    ) {
        __result_obj__176 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_372, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_375 = come_decrement_ref_count(var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_379) ? var_node_379 = come_decrement_ref_count(var_node_379, ((struct sNode*)var_node_379)->finalize, ((struct sNode*)var_node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_383) ? null_node_383 = come_decrement_ref_count(null_node_383, ((struct sNode*)null_node_383)->finalize, ((struct sNode*)null_node_383)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node_385) ? current_stack_frame_node_385 = come_decrement_ref_count(current_stack_frame_node_385, ((struct sNode*)current_stack_frame_node_385)->finalize, ((struct sNode*)current_stack_frame_node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__176;
    }
    else {
    }
    current_stack_frame_value_387=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_388=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_374));
    come_block2_389=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1495, "struct buffer*"))));
    class_name_390=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_389,"void* %s(%s* parent)\n",fun_name_388,class_name_390);
    buffer_append_str(come_block2_389,((char*)(__right_value490=buffer_to_string(come_block_372))));
    (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    current_stack_frame_struct_391=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value491=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_390)));
    come_call_finalizer(sClass_finalize, __right_value491, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    source3_392=(struct buffer*)come_increment_ref_count(info->source);
    p_393=info->p;
    head_394=info->head;
    sline_395=info->sline;
    __dec_obj152=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_389);
    come_call_finalizer(buffer_finalize, __dec_obj152,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_371;
    node_396=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_397=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_398=node_compile(node_396,info);
    if(    !Value_398    ) {
        __result_obj__177 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_372, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_375 = come_decrement_ref_count(var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_379) ? var_node_379 = come_decrement_ref_count(var_node_379, ((struct sNode*)var_node_379)->finalize, ((struct sNode*)var_node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_383) ? null_node_383 = come_decrement_ref_count(null_node_383, ((struct sNode*)null_node_383)->finalize, ((struct sNode*)null_node_383)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node_385) ? current_stack_frame_node_385 = come_decrement_ref_count(current_stack_frame_node_385, ((struct sNode*)current_stack_frame_node_385)->finalize, ((struct sNode*)current_stack_frame_node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value_387, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_388 = come_decrement_ref_count(fun_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, come_block2_389, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_390 = come_decrement_ref_count(class_name_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_396) ? node_396 = come_decrement_ref_count(node_396, ((struct sNode*)node_396)->finalize, ((struct sNode*)node_396)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__177;
    }
    else {
    }
    info->in_method_block=in_method_block_397;
    __dec_obj153=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_392);
    come_call_finalizer(buffer_finalize, __dec_obj153,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_393;
    info->head=head_394;
    info->sline=sline_395;
    info->current_stack_frame_struct=current_stack_frame_struct_391;
    fun_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1532, "struct CVALUE*"))));
    __dec_obj154=fun_value_399->c_value,
    fun_value_399->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_388));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj155=come_value_382->type,
    come_value_382->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_382->var=((void*)0);
    list$1CVALUE$ph_add(come_params_373,(struct CVALUE*)come_increment_ref_count(fun_value_399));
    list$1CVALUE$ph_add(come_params_373,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_387));
    buf_400=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1542, "struct buffer*"))));
    (fun_name_388 = come_decrement_ref_count(fun_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    fun_name_401=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_400,"(");
    buffer_append_str(buf_400,fun_name_401);
    buffer_append_str(buf_400,"(");
    j_402=0;
    for(    o2_saved_403=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_373)),it_404=list$1CVALUE$ph_begin((o2_saved_403))    ;    !list$1CVALUE$ph_end((o2_saved_403))    ;    it_404=list$1CVALUE$ph_next((o2_saved_403))    ){
        buffer_append_str(buf_400,it_404->c_value);
        if(        j_402!=list$1CVALUE$ph_length(come_params_373)-1        ) {
            buffer_append_str(buf_400,",");
        }
        j_402++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_403, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_400,")");
    buffer_append_str(buf_400,", ");
    buffer_append_str(buf_400,thread_var_value_381->c_value);
    buffer_append_str(buf_400,")");
    come_call_finalizer(CVALUE_finalize, come_value_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1565, "struct CVALUE*"))));
    __dec_obj156=come_value_405->c_value,
    come_value_405->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_400));
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    type_406=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value503=map$2char$phsType$ph_at(info->types,((char*)(__right_value502=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value503, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type_406==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value505=err_msg(info,"pthread_t is not defined")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value505, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj157=come_value_405->type,
    come_value_405->type=(struct sType*)come_increment_ref_count(type_406);
    come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_405->var=((void*)0);
    add_come_last_code(info,"%s",come_value_405->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_405));
    __result_obj__178 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block_372, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_375 = come_decrement_ref_count(var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type__376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((var_node_379) ? var_node_379 = come_decrement_ref_count(var_node_379, ((struct sNode*)var_node_379)->finalize, ((struct sNode*)var_node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((null_node_383) ? null_node_383 = come_decrement_ref_count(null_node_383, ((struct sNode*)null_node_383)->finalize, ((struct sNode*)null_node_383)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((current_stack_frame_node_385) ? current_stack_frame_node_385 = come_decrement_ref_count(current_stack_frame_node_385, ((struct sNode*)current_stack_frame_node_385)->finalize, ((struct sNode*)current_stack_frame_node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value_387, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block2_389, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (class_name_390 = come_decrement_ref_count(class_name_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source3_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_396) ? node_396 = come_decrement_ref_count(node_396, ((struct sNode*)node_396)->finalize, ((struct sNode*)node_396)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value_399, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name_401 = come_decrement_ref_count(fun_name_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_405, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_406, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__178;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_377;
unsigned int it_378;
struct sType* __result_obj__169;
struct sType* __result_obj__170;
struct sType* __result_obj__171;
struct sType* __result_obj__172;
    hash_377=string_get_hash_key(((char*)key))%self->size;
    it_378=hash_377;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_378]        ) {
            if(            string_equals(self->keys[it_378],key)            ) {
                __result_obj__169 = (struct sType*)come_increment_ref_count(self->items[it_378]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__169;
            }
            it_378++;
            if(            it_378>=self->size            ) {
                it_378=0;
            }
            else if(            it_378==hash_377            ) {
                __result_obj__170 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__170;
            }
        }
        else {
            __result_obj__171 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__171;
        }
    }
    __result_obj__172 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__172;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value506 = (void*)0;
struct sNode* __dec_obj158;
struct sComeJoinNode* __result_obj__179;
    ((struct sNodeBase*)(__right_value506=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value506, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj158=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__179 = (struct sComeJoinNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__179;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value507 = (void*)0;
char* __result_obj__180;
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value507=__builtin_string("sComeJoinNode"))));
    (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_407;
_Bool Value_408;
_Bool __result_obj__181;
void* __right_value508 = (void*)0;
struct CVALUE* come_value_409;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct buffer* buf_410;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct CVALUE* come_value_411;
void* __right_value513 = (void*)0;
char* __dec_obj159;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj160;
_Bool __result_obj__182;
    node_407=(struct sNode*)come_increment_ref_count(self->node);
    Value_408=node_compile(node_407,info);
    if(    !Value_408    ) {
        __result_obj__181 = (_Bool)0;
        ((node_407) ? node_407 = come_decrement_ref_count(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__181;
    }
    else {
    }
    come_value_409=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_410=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1612, "struct buffer*"))));
    buffer_append_str(buf_410,"pthread_join(");
    buffer_append_str(buf_410,come_value_409->c_value);
    buffer_append_str(buf_410,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value_409, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_411=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1617, "struct CVALUE*"))));
    __dec_obj159=come_value_411->c_value,
    come_value_411->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_410));
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj160=come_value_411->type,
    come_value_411->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1619, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj160,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_411->var=((void*)0);
    add_come_last_code(info,"%s",come_value_411->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_411));
    __result_obj__182 = (_Bool)1;
    ((node_407) ? node_407 = come_decrement_ref_count(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf_410, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_411, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__182;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value517 = (void*)0;
struct list$1sNode$ph* __dec_obj161;
struct list$1sBlock$ph* __dec_obj162;
struct sBlock* __dec_obj163;
struct sComePollNode* __result_obj__183;
    ((struct sNodeBase*)(__right_value517=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value517, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj161=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj161,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj162=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj162,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj163=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer(sBlock_finalize, __dec_obj163,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->time_out=time_out;
    __result_obj__183 = (struct sComePollNode*)come_increment_ref_count(self);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComePollNode_finalize, __result_obj__183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__183;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value518 = (void*)0;
char* __result_obj__184;
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value518=__builtin_string("sComePollNode"))));
    (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_416;
struct list$1sBlock$ph* blocks_417;
int time_out_418;
int n_420;
struct list$1sNode$ph* o2_saved_421;
struct sNode* it_424;
_Bool Value_427;
_Bool __result_obj__191;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_428;
int n_429;
struct list$1sNode$ph* o2_saved_430;
struct sNode* it_431;
void* __right_value520 = (void*)0;
_Bool __result_obj__196;
    vars_416=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_417=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_418=self->time_out;
    static int var_num_419=0;
    var_num_419++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_419,list$1sNode$ph_length(vars_416));
    n_420=0;
    for(    o2_saved_421=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_424=list$1sNode$ph_begin((o2_saved_421))    ;    !list$1sNode$ph_end((o2_saved_421))    ;    it_424=list$1sNode$ph_next((o2_saved_421))    ){
        Value_427=node_compile(it_424,info);
        if(        !Value_427        ) {
            __result_obj__191 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_421, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_417, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__191;
        }
        else {
        }
        come_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_419,n_420,come_value_428->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_419,n_420,1);
        n_420++;
        come_call_finalizer(CVALUE_finalize, come_value_428, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_421, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_419,var_num_419,list$1sNode$ph_length(vars_416),time_out_418);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_419);
    n_429=0;
    for(    o2_saved_430=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_431=list$1sNode$ph_begin((o2_saved_430))    ;    !list$1sNode$ph_end((o2_saved_430))    ;    it_431=list$1sNode$ph_next((o2_saved_430))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_419,n_429,1);
        transpile_block(((struct sBlock*)(__right_value520=list$1sBlock$ph_operator_load_element(blocks_417,n_429))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value520, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        add_come_code(info,"}\n");
        n_429++;
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_430, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_419);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__196 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_417, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__196;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_412;
struct list_item$1sBlock$ph* prev_it_413;
    it_412=self->head;
    while(    it_412!=((void*)0)    ) {
        prev_it_413=it_412;
        it_412=it_412->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_413, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_414;
struct list_item$1sBlock$ph* prev_it_415;
    it_414=self->head;
    while(    it_414!=((void*)0)    ) {
        prev_it_415=it_414;
        it_414=it_414->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_415, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_422;
struct sNode* __result_obj__185;
struct sNode* __result_obj__186;
struct sNode* result_423;
struct sNode* __result_obj__187;
result_422 = (void*)0;
result_423 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_422,0,sizeof(struct sNode*));
        __result_obj__185 = result_422;
        return __result_obj__185;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__186 = self->it->item;
        return __result_obj__186;
    }
    memset(&result_423,0,sizeof(struct sNode*));
    __result_obj__187 = result_423;
    return __result_obj__187;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_425;
struct sNode* __result_obj__188;
struct sNode* __result_obj__189;
struct sNode* result_426;
struct sNode* __result_obj__190;
result_425 = (void*)0;
result_426 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_425,0,sizeof(struct sNode*));
        __result_obj__188 = result_425;
        return __result_obj__188;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__189 = self->it->item;
        return __result_obj__189;
    }
    memset(&result_426,0,sizeof(struct sNode*));
    __result_obj__190 = result_426;
    return __result_obj__190;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_432;
int i_433;
struct sBlock* __result_obj__192;
struct sBlock* default_value_434;
struct sBlock* __result_obj__193;
default_value_434 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_432=self->head;
    i_433=0;
    while(    it_432!=((void*)0)    ) {
        if(        position==i_433        ) {
            __result_obj__192 = (struct sBlock*)come_increment_ref_count(it_432->item);
            come_call_finalizer(sBlock_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__192;
        }
        it_432=it_432->next;
        i_433++;
    }
    memset(&default_value_434,0,sizeof(struct sBlock*));
    __result_obj__193 = (struct sBlock*)come_increment_ref_count(default_value_434);
    come_call_finalizer(sBlock_finalize, default_value_434, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__193;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_435;
int i_436;
struct sBlock* __result_obj__194;
struct sBlock* default_value_437;
struct sBlock* __result_obj__195;
default_value_437 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_435=self->head;
    i_436=0;
    while(    it_435!=((void*)0)    ) {
        if(        position==i_436        ) {
            __result_obj__194 = (struct sBlock*)come_increment_ref_count(it_435->item);
            come_call_finalizer(sBlock_finalize, __result_obj__194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__194;
        }
        it_435=it_435->next;
        i_436++;
    }
    memset(&default_value_437,0,sizeof(struct sBlock*));
    __result_obj__195 = (struct sBlock*)come_increment_ref_count(default_value_437);
    come_call_finalizer(sBlock_finalize, default_value_437, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__195;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value521 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value522 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj165;
struct sLambdaCall* __result_obj__197;
    ((struct sNodeBase*)(__right_value521=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value521, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj164=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj165=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj165,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__197 = (struct sLambdaCall*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLambdaCall_finalize, __result_obj__197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__197;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value523 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value523=__builtin_string("sLambdaCall"))));
    (__right_value523 = come_decrement_ref_count(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__198;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_438;
struct list$1tuple2$2char$phsNode$ph$ph* params_439;
_Bool Value_440;
_Bool __result_obj__199;
void* __right_value524 = (void*)0;
struct CVALUE* come_value_441;
struct sType* lambda_type_442;
void* __right_value525 = (void*)0;
_Bool __result_obj__200;
void* __right_value526 = (void*)0;
struct sType* result_type_443;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1CVALUE$ph* come_params_444;
void* __right_value529 = (void*)0;
_Bool __result_obj__201;
int i_445;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_446;
struct tuple2$2char$phsNode$ph* it_447;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label_448=0;
struct sNode* node_449=0;
_Bool Value_450;
_Bool __result_obj__202;
void* __right_value530 = (void*)0;
struct CVALUE* come_value_451;
void* __right_value531 = (void*)0;
struct sType* __dec_obj166;
void* __right_value532 = (void*)0;
_Bool _condtional_value_X17;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
_Bool _condtional_value_X18;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct buffer* buf_452;
int j_453;
struct list$1CVALUE$ph* o2_saved_454;
struct CVALUE* it_455;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct CVALUE* come_value2_456;
void* __right_value542 = (void*)0;
char* __dec_obj167;
void* __right_value543 = (void*)0;
struct sType* __dec_obj168;
_Bool __result_obj__203;
    node_438=(struct sNode*)come_increment_ref_count(self->node);
    params_439=self->params;
    Value_440=node_compile(node_438,info);
    if(    !Value_440    ) {
        __result_obj__199 = (_Bool)0;
        ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__199;
    }
    else {
    }
    come_value_441=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_442=come_value_441->type;
    if(    lambda_type_442->mResultType==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value525=err_msg(info,"invalid lambda type")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value525, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__200 = (_Bool)1;
        ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__200;
    }
    result_type_443=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_442->mResultType));
    result_type_443->mStatic=(_Bool)0;
    come_params_444=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1736, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_442->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_439)&&!lambda_type_442->mVarArgs    ) {
        ((struct tuple2$2int$bool$*)(__right_value529=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_442->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_439))));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value529, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__201 = (_Bool)1;
        ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_443, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_444, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__201;
    }
    i_445=0;
    for(    o2_saved_446=(params_439),it_447=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_446))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_446))    ;    it_447=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_446))    ){
        multiple_assign_var12=it_447;
        label_448=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        node_449=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
        Value_450=node_compile(node_449,info);
        if(        !Value_450        ) {
            __result_obj__202 = (_Bool)0;
            (label_448 = come_decrement_ref_count(label_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_449) ? node_449 = come_decrement_ref_count(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_443, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_444, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__202;
        }
        else {
        }
        come_value_451=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj166=come_value_451->type,
        come_value_451->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_451->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        (_condtional_value_X17=(lambda_type_442->mVarArgs&&((struct sType*)(__right_value532=list$1sType$ph_operator_load_element(lambda_type_442->mParamTypes,i_445)))==((void*)0))),        come_call_finalizer(sType_finalize, __right_value532, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X17        ) {
        }
        else {
            check_assign_type(((char*)(__right_value534=xsprintf("calling param #\%s",((char*)(__right_value533=int_to_string(i_445)))))),((struct sType*)(__right_value535=list$1sType$ph_operator_load_element(lambda_type_442->mParamTypes,i_445))),come_value_451->type,come_value_451,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value535, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X18=(((struct sType*)(__right_value536=list$1sType$ph_operator_load_element(lambda_type_442->mParamTypes,i_445)))->mHeap&&come_value_451->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value536, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X18            ) {
                std_move(((struct sType*)(__right_value537=list$1sType$ph_operator_load_element(lambda_type_442->mParamTypes,i_445))),come_value_451->type,come_value_451,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value537, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params_444,(struct CVALUE*)come_increment_ref_count(come_value_451));
        i_445++;
        (label_448 = come_decrement_ref_count(label_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_449) ? node_449 = come_decrement_ref_count(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf_452=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1768, "struct buffer*"))));
    buffer_append_str(buf_452,"(");
    buffer_append_str(buf_452,come_value_441->c_value);
    buffer_append_str(buf_452,")");
    buffer_append_str(buf_452,"(");
    j_453=0;
    for(    o2_saved_454=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_444)),it_455=list$1CVALUE$ph_begin((o2_saved_454))    ;    !list$1CVALUE$ph_end((o2_saved_454))    ;    it_455=list$1CVALUE$ph_next((o2_saved_454))    ){
        buffer_append_str(buf_452,it_455->c_value);
        if(        j_453!=list$1CVALUE$ph_length(come_params_444)-1        ) {
            buffer_append_str(buf_452,",");
        }
        j_453++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_454, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_452,")");
    come_value2_456=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1787, "struct CVALUE*"))));
    __dec_obj167=come_value2_456->c_value,
    come_value2_456->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_452));
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    if(    lambda_type_442->mResultType->mHeap    ) {
        append_object_to_right_values(come_value2_456,(struct sType*)come_increment_ref_count(lambda_type_442->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __dec_obj168=come_value2_456->type,
    come_value2_456->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_443));
    come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_456->type->mStatic=(_Bool)0;
    come_value2_456->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_456->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_456));
    __result_obj__203 = (_Bool)1;
    ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_443, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_444, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_456, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__203;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value544 = (void*)0;
struct sType* __dec_obj169;
struct sVarArgTypeName* __result_obj__204;
    ((struct sNodeBase*)(__right_value544=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value544, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj169=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj169,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__204 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__204;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value545 = (void*)0;
char* __result_obj__205;
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value545=__builtin_string("sVarArgTypeName"))));
    (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_457;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value548 = (void*)0;
char* __dec_obj170;
struct sType* __dec_obj171;
_Bool __result_obj__206;
    type_457=(struct sType*)come_increment_ref_count(self->type);
    come_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1824, "struct CVALUE*"))));
    __dec_obj170=come_value_458->c_value,
    come_value_458->c_value=(char*)come_increment_ref_count(make_type_name_string(type_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj171=come_value_458->type,
    come_value_458->type=(struct sType*)come_increment_ref_count(type_457);
    come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_458->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_458));
    __result_obj__206 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_457, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_458, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__206;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1sType$ph* method_generics_types_459;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_460=0;
char* name_461=0;
_Bool err_462=0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_463;
_Bool _va_arg_464;
char* p_465;
int sline_466;
_Bool err_flag_467;
void* __right_value557 = (void*)0;
char* label_468;
void* __right_value558 = (void*)0;
char* __dec_obj172;
char* __dec_obj173;
_Bool no_comma_469;
_Bool in_fun_param_470;
void* __right_value559 = (void*)0;
struct sNode* node_471;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj174;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct buffer* method_block_475;
int method_block_sline_476;
char* head_477;
void* __right_value566 = (void*)0;
char* tail_478;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct buffer* __dec_obj180;
int len_479;
void* __right_value569 = (void*)0;
char* mem_480;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value578 = (void*)0;
struct sNode* node_481;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj186;
struct sNode* __result_obj__211;
    method_generics_types_459=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1838, "struct list$1sType$ph*"))));
    if(    *info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value551=err_msg(info,"unexpected source end")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value551, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else if(            *info->p==62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value552=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_460=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name_461=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err_462=multiple_assign_var13->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value552, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_462                ) {
                    ((struct tuple2$2int$bool$*)(__right_value553=err_msg(info,"invalid method generics paramtor type")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value553, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_459,(struct sType*)come_increment_ref_count(sType_clone(type_460)));
                come_call_finalizer(sType_finalize, type_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_461 = come_decrement_ref_count(name_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_463=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1876, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_464=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")    ) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1    ) {
        if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_465=info->p;
        sline_466=info->sline;
        err_flag_467=(_Bool)0;
        label_468=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95        ) {
            __dec_obj172=label_468,
            label_468=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            err_flag_467=(_Bool)1;
        }
        if(        err_flag_467==(_Bool)1&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj173=label_468,
            label_468=((void*)0);
            __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->p=p_465;
            info->sline=sline_466;
        }
        no_comma_469=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_470=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_471=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj174=node_471,
        node_471=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_471),info));
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->no_comma=no_comma_469;
        info->in_fun_param=in_fun_param_470;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_463,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1924, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_468),(struct sNode*)come_increment_ref_count(node_471))));
        parse_sharp_v5(info);
        if(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_468 = come_decrement_ref_count(label_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_471) ? node_471 = come_decrement_ref_count(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (label_468 = come_decrement_ref_count(label_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_471) ? node_471 = come_decrement_ref_count(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->va_arg=_va_arg_464;
    parse_sharp_v5(info);
    method_block_475=((void*)0);
    method_block_sline_476=0;
    if(    *info->p==123    ) {
        head_477=info->p;
        method_block_sline_476=info->sline;
        ((char*)(__right_value566=skip_block(info,(_Bool)0)));
        (__right_value566 = come_decrement_ref_count(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        tail_478=info->p;
        __dec_obj180=method_block_475,
        method_block_475=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1954, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj180,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        len_479=tail_478-head_477;
        mem_480=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_479+1)), "05call.c", 1957, "char*"));
        memcpy(mem_480,head_477,len_479);
        mem_480[len_479]=0;
        buffer_append_str(method_block_475,mem_480);
        buffer_append_str(method_block_475,"\n");
        (mem_480 = come_decrement_ref_count(mem_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1967, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value571=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1967, "struct sFunCallNode*")),fun_name,params_463,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_459),(struct buffer*)come_increment_ref_count(method_block_475),method_block_sline_476,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    node_481=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunCallNode_finalize, __right_value571, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj186=node_481,
    node_481=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_481),info));
    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    parse_sharp_v5(info);
    __result_obj__211 = (struct sNode*)come_increment_ref_count(node_481);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_463, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_481) ? node_481 = come_decrement_ref_count(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__211) ? __result_obj__211 = come_decrement_ref_count(__result_obj__211, ((struct sNode*)__result_obj__211)->finalize, ((struct sNode*)__result_obj__211)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__211;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value561 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_472;
struct tuple2$2char$phsNode$ph* __dec_obj175;
void* __right_value562 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_473;
struct tuple2$2char$phsNode$ph* __dec_obj176;
void* __right_value563 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_474;
struct tuple2$2char$phsNode$ph* __dec_obj177;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__207;
    if(    self->len==0    ) {
        litem_472=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value561=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1014, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_472->prev=((void*)0);
        litem_472->next=((void*)0);
        __dec_obj175=litem_472->item,
        litem_472->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_472;
        self->head=litem_472;
    }
    else if(    self->len==1    ) {
        litem_473=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value562=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_473->prev=self->head;
        litem_473->next=((void*)0);
        __dec_obj176=litem_473->item,
        litem_473->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj176,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_473;
        self->head->next=litem_473;
    }
    else {
        litem_474=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value563=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1034, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_474->prev=self->tail;
        litem_474->next=((void*)0);
        __dec_obj177=litem_474->item,
        litem_474->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj177,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_474;
        self->tail=litem_474;
    }
    self->len++;
    __result_obj__207 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__207;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj178;
struct sNode* __dec_obj179;
struct tuple2$2char$phsNode$ph* __result_obj__208;
    __dec_obj178=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj179=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__208 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__209;
void* __right_value572 = (void*)0;
struct sFunCallNode* result_482;
void* __right_value573 = (void*)0;
char* __dec_obj181;
void* __right_value574 = (void*)0;
char* __dec_obj182;
void* __right_value575 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj183;
void* __right_value576 = (void*)0;
struct list$1sType$ph* __dec_obj184;
void* __right_value577 = (void*)0;
struct buffer* __dec_obj185;
struct sFunCallNode* __result_obj__210;
    if(    self==(void*)0    ) {
        __result_obj__209 = (void*)0;
        return __result_obj__209;
    }
    result_482=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)    ) {
        result_482->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj181=result_482->sname,
        result_482->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_482->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __dec_obj182=result_482->fun_name,
        result_482->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj183=result_482->params,
        result_482->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj183,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __dec_obj184=result_482->method_generics_types,
        result_482->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj184,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __dec_obj185=result_482->method_block,
        result_482->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj185,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_482->method_block_sline=self->method_block_sline;
    }
    __result_obj__210 = result_482;
    come_call_finalizer(sFunCallNode_finalize, result_482, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__210;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value580 = (void*)0;
struct sNode* __result_obj__212;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    ((struct tuple2$2int$bool$*)(__right_value580=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value580, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    stackframe_v2();
    exit(3);
    __result_obj__212 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__212) ? __result_obj__212 = come_decrement_ref_count(__result_obj__212, ((struct sNode*)__result_obj__212)->finalize, ((struct sNode*)__result_obj__212)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__212;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value4;
struct sReturnNode* _inf_obj_value4;
void* __right_value587 = (void*)0;
struct sNode* __result_obj__215;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1990, "struct sNode");
    _inf_obj_value4=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value582=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1990, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sReturnNode_finalize;
    _inf_value4->clone=(void*)sReturnNode_clone;
    _inf_value4->compile=(void*)sReturnNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sReturnNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__215 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value587=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __right_value582, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value587) ? __right_value587 = come_decrement_ref_count(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__215) ? __result_obj__215 = come_decrement_ref_count(__result_obj__215, ((struct sNode*)__result_obj__215)->finalize, ((struct sNode*)__result_obj__215)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__215;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__213;
void* __right_value583 = (void*)0;
struct sReturnNode* result_483;
void* __right_value584 = (void*)0;
char* __dec_obj187;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value586 = (void*)0;
char* __dec_obj189;
struct sReturnNode* __result_obj__214;
    if(    self==(void*)0    ) {
        __result_obj__213 = (void*)0;
        return __result_obj__213;
    }
    result_483=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)    ) {
        result_483->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj187=result_483->sname,
        result_483->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_483->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj188=result_483->value,
        result_483->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        __dec_obj189=result_483->value_source,
        result_483->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__214 = result_483;
    come_call_finalizer(sReturnNode_finalize, result_483, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__214;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value591 = (void*)0;
struct sNode* __result_obj__216;
char* head_484;
void* __right_value592 = (void*)0;
struct sNode* value_485;
char* tail_486;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value597 = (void*)0;
struct sNode* __result_obj__217;
int nest_488;
char* head_489;
int head_sline_490;
int sline_real_491;
void* __right_value598 = (void*)0;
char* buf_492;
_Bool is_type_name__493;
_Bool is_special_word_495;
_Bool define_function_pointer_flag_496;
void* __right_value599 = (void*)0;
_Bool lambda_flag_497;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
char* word2_498;
_Bool fun_name_with_type_name_499;
void* __right_value602 = (void*)0;
char* word2_500;
_Bool call_method_generics_fun_call_501;
void* __right_value603 = (void*)0;
char* __dec_obj191;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
_Bool _condtional_value_X19;
int nest_508;
_Bool inline_asm_509;
void* __right_value610 = (void*)0;
char* __dec_obj192;
void* __right_value611 = (void*)0;
char* __dec_obj193;
void* __right_value612 = (void*)0;
char* __dec_obj194;
void* __right_value613 = (void*)0;
struct sNode* node_510;
struct sNode* __result_obj__226;
_Bool no_comma_511;
void* __right_value614 = (void*)0;
struct sNode* exp_512;
void* __right_value615 = (void*)0;
struct sNode* exp2_513;
void* __right_value616 = (void*)0;
struct sNode* __result_obj__227;
void* __right_value617 = (void*)0;
char* block_text_514;
char* contents_515;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* _inf_value7;
struct sOutputNode* _inf_obj_value7;
void* __right_value623 = (void*)0;
struct sNode* __result_obj__230;
void* __right_value624 = (void*)0;
struct sNode* node_517;
struct sNode* __result_obj__231;
void* __right_value625 = (void*)0;
struct sNode* node_518;
struct sNode* __result_obj__232;
struct buffer* come_block_519;
int come_block_sline_520;
char* head_521;
void* __right_value626 = (void*)0;
char* tail_522;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct buffer* __dec_obj197;
int len_523;
void* __right_value629 = (void*)0;
char* mem_524;
char* head_525;
_Bool no_output_come_code_526;
void* __right_value630 = (void*)0;
char* tail_527;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct buffer* __dec_obj198;
int len_528;
void* __right_value633 = (void*)0;
char* mem_529;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sNode* _inf_value8;
struct sComeCallNode* _inf_obj_value8;
void* __right_value639 = (void*)0;
struct sNode* node_530;
struct sNode* __result_obj__235;
struct buffer* come_block_532;
int come_block_sline_533;
void* __right_value640 = (void*)0;
struct sNode* node_534;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sNode* _inf_value9;
struct sComeJoinNode* _inf_obj_value9;
void* __right_value646 = (void*)0;
struct sNode* __result_obj__238;
int time_out_536;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sNode$ph* vars_537;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sBlock$ph* blocks_538;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sBlock* else_block_539;
void* __right_value653 = (void*)0;
struct sBlock* __dec_obj203;
void* __right_value654 = (void*)0;
struct sNode* var_name_540;
void* __right_value655 = (void*)0;
struct sBlock* block_541;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sNode* _inf_value10;
struct sComePollNode* _inf_obj_value10;
void* __right_value708 = (void*)0;
struct sNode* __result_obj__269;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value11;
struct sFuncNode* _inf_obj_value11;
void* __right_value713 = (void*)0;
struct sNode* __result_obj__272;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sNode* _inf_value12;
struct sWildCard* _inf_obj_value12;
void* __right_value718 = (void*)0;
struct sNode* __result_obj__275;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
void* __right_value723 = (void*)0;
struct sNode* __result_obj__278;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
void* __right_value728 = (void*)0;
struct sNode* __result_obj__281;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
void* __right_value733 = (void*)0;
struct sNode* __result_obj__284;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
void* __right_value738 = (void*)0;
struct sNode* __result_obj__287;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
void* __right_value743 = (void*)0;
struct sNode* __result_obj__290;
void* __right_value744 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type_595=0;
char* name_596=0;
_Bool err_597=0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
void* __right_value750 = (void*)0;
struct sNode* __result_obj__293;
void* __right_value751 = (void*)0;
struct sNode* node_599;
struct sNode* __result_obj__294;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct buffer* buf2_600;
void* __right_value754 = (void*)0;
char* word_601;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1sNode$ph* exps_602;
void* __right_value757 = (void*)0;
struct sNode* exp_603;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
void* __right_value766 = (void*)0;
struct sNode* __result_obj__297;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* fun_name_605;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sType* type_606;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sClass* klass_613;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sType* __dec_obj235;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
char* buf2_614;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* node_615;
struct sNode* __result_obj__306;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct buffer* fun_name_616;
void* __right_value785 = (void*)0;
char* buf2_617;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* node_618;
struct sNode* __result_obj__307;
void* __right_value788 = (void*)0;
struct sNode* node_619;
struct sNode* __result_obj__308;
void* __right_value789 = (void*)0;
struct sNode* node_620;
struct sNode* __result_obj__309;
void* __right_value790 = (void*)0;
struct sNode* node_621;
struct sNode* __result_obj__310;
void* __right_value791 = (void*)0;
struct sNode* node_622;
struct sNode* __result_obj__311;
void* __right_value792 = (void*)0;
struct sNode* __result_obj__312;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)    ) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59        ) {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2003, "struct sNode");
            _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value590=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2003, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sReturnNode_finalize;
            _inf_value5->clone=(void*)sReturnNode_clone;
            _inf_value5->compile=(void*)sReturnNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sReturnNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__216 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value591=_inf_value5)));
            come_call_finalizer(sReturnNode_finalize, __right_value590, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value591) ? __right_value591 = come_decrement_ref_count(__right_value591, ((struct sNode*)__right_value591)->finalize, ((struct sNode*)__right_value591)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__216) ? __result_obj__216 = come_decrement_ref_count(__result_obj__216, ((struct sNode*)__result_obj__216)->finalize, ((struct sNode*)__result_obj__216)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__216;
        }
        else {
            head_484=info->p;
            value_485=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_486=info->p;
            __dec_obj190=value_485,
            value_485=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_485),info));
            (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            char buf_487[tail_486-head_484+1];
            memset(&buf_487, 0, sizeof(char)            *(tail_486-head_484+1)            );
            memcpy(buf_487,head_484,tail_486-head_484);
            buf_487[tail_486-head_484]=0;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2015, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value596=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2015, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_485),(char*)come_increment_ref_count(__builtin_string(buf_487)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__217 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value597=_inf_value6)));
            ((value_485) ? value_485 = come_decrement_ref_count(value_485, ((struct sNode*)value_485)->finalize, ((struct sNode*)value_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value596, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value597) ? __right_value597 = come_decrement_ref_count(__right_value597, ((struct sNode*)__right_value597)->finalize, ((struct sNode*)__right_value597)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__217) ? __result_obj__217 = come_decrement_ref_count(__result_obj__217, ((struct sNode*)__result_obj__217)->finalize, ((struct sNode*)__result_obj__217)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__217;
            ((value_485) ? value_485 = come_decrement_ref_count(value_485, ((struct sNode*)value_485)->finalize, ((struct sNode*)value_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42    ) {
        nest_488=0;
        while(        1        ) {
            if(            *info->p==47&&*(info->p+1)==42            ) {
                info->p+=2;
                nest_488++;
            }
            else if(            *info->p==42&&*(info->p+1)==47            ) {
                info->p+=2;
                nest_488--;
                if(                nest_488==0                ) {
                    break;
                }
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47    ) {
        info->p+=2;
        while(        1        ) {
            if(            *info->p==10            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0            ) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))    ) {
        head_489=info->p;
        head_sline_490=info->sline;
        sline_real_491=info->sline_real;
        info->sline_real=info->sline;
        buf_492=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__493=is_type_name(buf_492,info);
        static char* is_special_word_array_494[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_495=charppa_contained(is_special_word_array_494,19,buf_492);
        define_function_pointer_flag_496=(_Bool)0;
        if(        !is_special_word_495&&*info->p==40&&*(info->p+1)!=42        ) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value599=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value599, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_496=(_Bool)1;
                }
            }
            info->p=head_489;
            info->sline=head_sline_490;
        }
        lambda_flag_497=(_Bool)0;
        if(        !is_special_word_495&&is_type_name__493        ) {
            info->p=head_489;
            info->sline=head_sline_490;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value600=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value600, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            word2_498=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_498,"lambda")            ) {
                lambda_flag_497=(_Bool)1;
            }
            info->p=head_489;
            info->sline=head_sline_490;
            (word2_498 = come_decrement_ref_count(word2_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        fun_name_with_type_name_499=(_Bool)0;
        if(        !is_special_word_495        ) {
            info->p=head_489;
            info->sline=head_sline_490;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word2_500=(char*)come_increment_ref_count(parse_word(info));
                (word2_500 = come_decrement_ref_count(word2_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95                ) {
                    fun_name_with_type_name_499=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_489;
            info->sline=head_sline_490;
        }
        call_method_generics_fun_call_501=(_Bool)0;
        {
            info->p=head_489;
            info->sline=head_sline_490;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj191=buf_492,
                buf_492=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X19=(!is_type_name(buf_492,info)&&((struct sVar*)(__right_value606=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value605=__builtin_string(buf_492))))))==((void*)0)&&((struct sVar*)(__right_value609=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value608=__builtin_string(buf_492))))))==((void*)0)&&*info->p==60)),            (__right_value604 = come_decrement_ref_count(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value605 = come_decrement_ref_count(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sVar_finalize, __right_value606, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            (__right_value607 = come_decrement_ref_count(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value608 = come_decrement_ref_count(__right_value608, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sVar_finalize, __right_value609, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X19            ) {
                nest_508=0;
                while(                *info->p                ) {
                    if(                    *info->p==60                    ) {
                        info->p++;
                        nest_508++;
                    }
                    else if(                    *info->p==62                    ) {
                        info->p++;
                        if(                        nest_508==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40                ) {
                    call_method_generics_fun_call_501=(_Bool)1;
                }
            }
            info->p=head_489;
            info->sline=head_sline_490;
        }
        inline_asm_509=(_Bool)0;
        {
            info->p=head_489;
            info->sline=head_sline_490;
            __dec_obj192=buf_492,
            buf_492=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            string_operator_equals(buf_492,"asm")||string_operator_equals(buf_492,"__asm")||string_operator_equals(buf_492,"__asm__")            ) {
                if(                *info->p==40                ) {
                    inline_asm_509=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        __dec_obj193=buf_492,
                        buf_492=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        *info->p==40                        ) {
                            inline_asm_509=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_489;
            info->sline=head_sline_490;
        }
        parse_sharp_v5(info);
        __dec_obj194=buf_492,
        buf_492=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_497        ) {
            info->p=head_489;
            info->sline=head_sline_490;
            node_510=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_491;
            __result_obj__226 = (struct sNode*)come_increment_ref_count(node_510);
            ((node_510) ? node_510 = come_decrement_ref_count(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__226) ? __result_obj__226 = come_decrement_ref_count(__result_obj__226, ((struct sNode*)__result_obj__226)->finalize, ((struct sNode*)__result_obj__226)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__226;
            ((node_510) ? node_510 = come_decrement_ref_count(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_492,"_Static_assert")||string_operator_equals(buf_492,"static_assert"))&&*info->p==40        ) {
            expected_next_character(40,info);
            no_comma_511=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_512=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_511;
            expected_next_character(44,info);
            exp2_513=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__227 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value616=static_assert_node((struct sNode*)come_increment_ref_count(exp_512),(struct sNode*)come_increment_ref_count(exp2_513),info))));
            ((exp_512) ? exp_512 = come_decrement_ref_count(exp_512, ((struct sNode*)exp_512)->finalize, ((struct sNode*)exp_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2_513) ? exp2_513 = come_decrement_ref_count(exp2_513, ((struct sNode*)exp2_513)->finalize, ((struct sNode*)exp2_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__right_value616) ? __right_value616 = come_decrement_ref_count(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__227) ? __result_obj__227 = come_decrement_ref_count(__result_obj__227, ((struct sNode*)__result_obj__227)->finalize, ((struct sNode*)__result_obj__227)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__227;
            ((exp_512) ? exp_512 = come_decrement_ref_count(exp_512, ((struct sNode*)exp_512)->finalize, ((struct sNode*)exp_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2_513) ? exp2_513 = come_decrement_ref_count(exp2_513, ((struct sNode*)exp2_513)->finalize, ((struct sNode*)exp2_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_492,"output")&&*info->p==123        ) {
            block_text_514=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
            contents_515=(char*)come_increment_ref_count(block_text_514);
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2253, "struct sNode");
            _inf_obj_value7=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value619=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2253, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_515),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sOutputNode_finalize;
            _inf_value7->clone=(void*)sOutputNode_clone;
            _inf_value7->compile=(void*)sOutputNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sOutputNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__230 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value623=_inf_value7)));
            (block_text_514 = come_decrement_ref_count(block_text_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents_515 = come_decrement_ref_count(contents_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sOutputNode_finalize, __right_value619, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value623) ? __right_value623 = come_decrement_ref_count(__right_value623, ((struct sNode*)__right_value623)->finalize, ((struct sNode*)__right_value623)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__230) ? __result_obj__230 = come_decrement_ref_count(__result_obj__230, ((struct sNode*)__result_obj__230)->finalize, ((struct sNode*)__result_obj__230)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__230;
            (block_text_514 = come_decrement_ref_count(block_text_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents_515 = come_decrement_ref_count(contents_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        string_operator_equals(buf_492,"extern")        ) {
            node_517=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__231 = (struct sNode*)come_increment_ref_count(node_517);
            ((node_517) ? node_517 = come_decrement_ref_count(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__231) ? __result_obj__231 = come_decrement_ref_count(__result_obj__231, ((struct sNode*)__result_obj__231)->finalize, ((struct sNode*)__result_obj__231)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__231;
            ((node_517) ? node_517 = come_decrement_ref_count(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_492,"string")||string_operator_equals(buf_492,"wstring"))&&*info->p==40        ) {
            node_518=(struct sNode*)come_increment_ref_count(parse_function_call(buf_492,info,(_Bool)0));
            info->sline_real=sline_real_491;
            __result_obj__232 = (struct sNode*)come_increment_ref_count(node_518);
            ((node_518) ? node_518 = come_decrement_ref_count(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__232) ? __result_obj__232 = come_decrement_ref_count(__result_obj__232, ((struct sNode*)__result_obj__232)->finalize, ((struct sNode*)__result_obj__232)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__232;
            ((node_518) ? node_518 = come_decrement_ref_count(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_492,"come")        ) {
            come_block_519=((void*)0);
            come_block_sline_520=0;
            if(            *info->p==123            ) {
                head_521=info->p;
                come_block_sline_520=info->sline;
                ((char*)(__right_value626=skip_block(info,(_Bool)0)));
                (__right_value626 = come_decrement_ref_count(__right_value626, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                tail_522=info->p;
                __dec_obj197=come_block_519,
                come_block_519=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2278, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj197,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len_523=tail_522-head_521;
                mem_524=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_523+1)), "05call.c", 2281, "char*"));
                memcpy(mem_524,head_521,len_523);
                mem_524[len_523]=0;
                buffer_append_str(come_block_519,mem_524);
                buffer_append_str(come_block_519,"\n");
                (mem_524 = come_decrement_ref_count(mem_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                head_525=info->p;
                come_block_sline_520=info->sline;
                no_output_come_code_526=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value630=expression_v13(info)));
                ((__right_value630) ? __right_value630 = come_decrement_ref_count(__right_value630, ((struct sNode*)__right_value630)->finalize, ((struct sNode*)__right_value630)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_526;
                tail_527=info->p;
                __dec_obj198=come_block_519,
                come_block_519=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2299, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj198,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len_528=tail_527-head_525;
                mem_529=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_528+1)), "05call.c", 2302, "char*"));
                memcpy(mem_529,head_525,len_528);
                mem_529[len_528]=0;
                buffer_append_str(come_block_519,"{");
                buffer_append_str(come_block_519,mem_529);
                buffer_append_str(come_block_519,"; }");
                buffer_append_str(come_block_519,"return (void*)0;\n}");
                buffer_append_str(come_block_519,"\n");
                (mem_529 = come_decrement_ref_count(mem_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2313, "struct sNode");
            _inf_obj_value8=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value635=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2313, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_519),come_block_sline_520,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sComeCallNode_finalize;
            _inf_value8->clone=(void*)sComeCallNode_clone;
            _inf_value8->compile=(void*)sComeCallNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sComeCallNode_terminated;
            _inf_value8->kind=(void*)sComeCallNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            node_530=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer(sComeCallNode_finalize, __right_value635, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_491;
            __result_obj__235 = (struct sNode*)come_increment_ref_count(node_530);
            come_call_finalizer(buffer_finalize, come_block_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_530) ? node_530 = come_decrement_ref_count(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__235) ? __result_obj__235 = come_decrement_ref_count(__result_obj__235, ((struct sNode*)__result_obj__235)->finalize, ((struct sNode*)__result_obj__235)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__235;
            come_call_finalizer(buffer_finalize, come_block_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_530) ? node_530 = come_decrement_ref_count(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_492,"come_join")&&*info->p==40        ) {
            come_block_532=((void*)0);
            come_block_sline_533=0;
            expected_next_character(40,info);
            node_534=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_491;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2327, "struct sNode");
            _inf_obj_value9=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value642=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2327, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_534),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeJoinNode_finalize;
            _inf_value9->clone=(void*)sComeJoinNode_clone;
            _inf_value9->compile=(void*)sComeJoinNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeJoinNode_terminated;
            _inf_value9->kind=(void*)sComeJoinNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__238 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value646=_inf_value9)));
            come_call_finalizer(buffer_finalize, come_block_532, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_534) ? node_534 = come_decrement_ref_count(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComeJoinNode_finalize, __right_value642, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value646) ? __right_value646 = come_decrement_ref_count(__right_value646, ((struct sNode*)__right_value646)->finalize, ((struct sNode*)__right_value646)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__238) ? __result_obj__238 = come_decrement_ref_count(__result_obj__238, ((struct sNode*)__result_obj__238)->finalize, ((struct sNode*)__result_obj__238)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__238;
            come_call_finalizer(buffer_finalize, come_block_532, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_534) ? node_534 = come_decrement_ref_count(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_492,"come_poll")&&(*info->p==40||*info->p==123)        ) {
            time_out_536=1;
            if(            *info->p==40            ) {
                info->p++;
                while(                xisdigit(*info->p)                ) {
                    time_out_536=time_out_536*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_537=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2345, "struct list$1sNode$ph*"))));
            blocks_538=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2346, "struct list$1sBlock$ph*"))));
            else_block_539=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2347, "struct sBlock*"))));
            while(            1            ) {
                if(                memcmp(info->p,"else",strlen("else"))==0                ) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj203=else_block_539,
                    else_block_539=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    if(                    *info->p==125                    ) {
                        break;
                    }
                }
                else {
                    var_name_540=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_541=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_537,(struct sNode*)come_increment_ref_count(var_name_540));
                    list$1sBlock$ph_add(blocks_538,(struct sBlock*)come_increment_ref_count(block_541));
                    if(                    *info->p==125                    ) {
                        ((var_name_540) ? var_name_540 = come_decrement_ref_count(var_name_540, ((struct sNode*)var_name_540)->finalize, ((struct sNode*)var_name_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(sBlock_finalize, block_541, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    ((var_name_540) ? var_name_540 = come_decrement_ref_count(var_name_540, ((struct sNode*)var_name_540)->finalize, ((struct sNode*)var_name_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, block_541, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_491;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2377, "struct sNode");
            _inf_obj_value10=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value660=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2377, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_537),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_538),(struct sBlock*)come_increment_ref_count(else_block_539),time_out_536,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComePollNode_finalize;
            _inf_value10->clone=(void*)sComePollNode_clone;
            _inf_value10->compile=(void*)sComePollNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComePollNode_terminated;
            _inf_value10->kind=(void*)sComePollNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__269 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value708=_inf_value10)));
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_538, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComePollNode_finalize, __right_value660, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value708) ? __right_value708 = come_decrement_ref_count(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__269) ? __result_obj__269 = come_decrement_ref_count(__result_obj__269, ((struct sNode*)__result_obj__269)->finalize, ((struct sNode*)__result_obj__269)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__269;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_538, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(buf_492,"__func__")||string_operator_equals(buf_492,"__FUNCTION__")        ) {
            info->sline_real=sline_real_491;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2382, "struct sNode");
            _inf_obj_value11=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value710=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2382, "struct sFuncNode*")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFuncNode_finalize;
            _inf_value11->clone=(void*)sFuncNode_clone;
            _inf_value11->compile=(void*)sFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFuncNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__272 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value713=_inf_value11)));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFuncNode_finalize, __right_value710, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value713) ? __right_value713 = come_decrement_ref_count(__right_value713, ((struct sNode*)__right_value713)->finalize, ((struct sNode*)__right_value713)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__272) ? __result_obj__272 = come_decrement_ref_count(__result_obj__272, ((struct sNode*)__result_obj__272)->finalize, ((struct sNode*)__result_obj__272)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__272;
        }
        else if(        !gComeC&&string_operator_equals(buf_492,"wildcard")        ) {
            info->sline_real=sline_real_491;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2386, "struct sNode");
            _inf_obj_value12=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value715=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2386, "struct sWildCard*")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sWildCard_finalize;
            _inf_value12->clone=(void*)sWildCard_clone;
            _inf_value12->compile=(void*)sWildCard_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sWildCard_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__275 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value718=_inf_value12)));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sWildCard_finalize, __right_value715, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value718) ? __right_value718 = come_decrement_ref_count(__right_value718, ((struct sNode*)__right_value718)->finalize, ((struct sNode*)__right_value718)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__275) ? __result_obj__275 = come_decrement_ref_count(__result_obj__275, ((struct sNode*)__result_obj__275)->finalize, ((struct sNode*)__result_obj__275)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__275;
        }
        else if(        string_operator_equals(buf_492,"__line__")||string_operator_equals(buf_492,"__LINE__")        ) {
            info->sline_real=sline_real_491;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2390, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value720=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2390, "struct sLineNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__278 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value723=_inf_value13)));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sLineNode_finalize, __right_value720, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value723) ? __right_value723 = come_decrement_ref_count(__right_value723, ((struct sNode*)__right_value723)->finalize, ((struct sNode*)__right_value723)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__278) ? __result_obj__278 = come_decrement_ref_count(__result_obj__278, ((struct sNode*)__result_obj__278)->finalize, ((struct sNode*)__result_obj__278)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__278;
        }
        else if(        string_operator_equals(buf_492,"__sname__")        ) {
            info->sline_real=sline_real_491;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2394, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value725=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2394, "struct sSNameNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__281 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value728=_inf_value14)));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sSNameNode_finalize, __right_value725, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value728) ? __right_value728 = come_decrement_ref_count(__right_value728, ((struct sNode*)__right_value728)->finalize, ((struct sNode*)__right_value728)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__281) ? __result_obj__281 = come_decrement_ref_count(__result_obj__281, ((struct sNode*)__result_obj__281)->finalize, ((struct sNode*)__result_obj__281)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__281;
        }
        else if(        string_operator_equals(buf_492,"__caller_func__")        ) {
            info->sline_real=sline_real_491;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2398, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value730=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2398, "struct sCallerFuncNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__284 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value733=_inf_value15)));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value730, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value733) ? __right_value733 = come_decrement_ref_count(__right_value733, ((struct sNode*)__right_value733)->finalize, ((struct sNode*)__right_value733)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__284) ? __result_obj__284 = come_decrement_ref_count(__result_obj__284, ((struct sNode*)__result_obj__284)->finalize, ((struct sNode*)__result_obj__284)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__284;
        }
        else if(        string_operator_equals(buf_492,"__caller_line__")        ) {
            info->sline_real=sline_real_491;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2402, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value735=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2402, "struct sCallerLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__287 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value738=_inf_value16)));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerLineNode_finalize, __right_value735, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value738) ? __right_value738 = come_decrement_ref_count(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__287) ? __result_obj__287 = come_decrement_ref_count(__result_obj__287, ((struct sNode*)__result_obj__287)->finalize, ((struct sNode*)__result_obj__287)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__287;
        }
        else if(        string_operator_equals(buf_492,"__caller_sname__")        ) {
            info->sline_real=sline_real_491;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2406, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value740=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2406, "struct sCallerSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__290 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value743=_inf_value17)));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value740, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value743) ? __right_value743 = come_decrement_ref_count(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__290;
        }
        else if(        info->va_arg&&is_type_name(buf_492,info)        ) {
            info->p=head_489;
            info->sline=head_sline_490;
            multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value744=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_595=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_596=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_597=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value744, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_491;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2415, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value746=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2415, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_595),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__293 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value750=_inf_value18)));
            come_call_finalizer(sType_finalize, type_595, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_596 = come_decrement_ref_count(name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value746, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value750) ? __right_value750 = come_decrement_ref_count(__right_value750, ((struct sNode*)__right_value750)->finalize, ((struct sNode*)__right_value750)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__293) ? __result_obj__293 = come_decrement_ref_count(__result_obj__293, ((struct sNode*)__result_obj__293)->finalize, ((struct sNode*)__result_obj__293)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__293;
            come_call_finalizer(sType_finalize, type_595, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_596 = come_decrement_ref_count(name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        string_operator_equals(buf_492,"sizeof")||string_operator_equals(buf_492,"_Alignof")||string_operator_equals(buf_492,"_Alignas")||string_operator_equals(buf_492,"__alignof__")        ) {
            node_599=(struct sNode*)come_increment_ref_count(string_node_v21(buf_492,head_489,head_sline_490,info));
            info->sline_real=sline_real_491;
            __result_obj__294 = (struct sNode*)come_increment_ref_count(node_599);
            ((node_599) ? node_599 = come_decrement_ref_count(node_599, ((struct sNode*)node_599)->finalize, ((struct sNode*)node_599)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__294;
            ((node_599) ? node_599 = come_decrement_ref_count(node_599, ((struct sNode*)node_599)->finalize, ((struct sNode*)node_599)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        inline_asm_509        ) {
            buf2_600=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2424, "struct buffer*"))));
            if(            *info->p!=40            ) {
                word_601=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_600,word_601);
                (word_601 = come_decrement_ref_count(word_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_600,40);
            exps_602=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2435, "struct list$1sNode$ph*"))));
            while(            (_Bool)1            ) {
                if(                *info->p==40                ) {
                    buffer_append_char(buf2_600,40);
                    info->p++;
                    exp_603=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_602,(struct sNode*)come_increment_ref_count(exp_603));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_600,41);
                    ((exp_603) ? exp_603 = come_decrement_ref_count(exp_603, ((struct sNode*)exp_603)->finalize, ((struct sNode*)exp_603)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else if(                *info->p==41                ) {
                    buffer_append_char(buf2_600,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10                ) {
                    info->sline++;
                    buffer_append_char(buf2_600,*info->p);
                    info->p++;
                }
                else if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value758=err_msg(info,"invalid source end at inline assembler")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value758, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_600,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_491;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2472, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value761=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2472, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_600)),(struct list$1sNode$ph*)come_increment_ref_count(exps_602),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__297 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value766=_inf_value19)));
            come_call_finalizer(buffer_finalize, buf2_600, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps_602, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sInlineAssembler_finalize, __right_value761, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value766) ? __right_value766 = come_decrement_ref_count(__right_value766, ((struct sNode*)__right_value766)->finalize, ((struct sNode*)__right_value766)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__297;
            come_call_finalizer(buffer_finalize, buf2_600, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps_602, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        fun_name_with_type_name_499        ) {
            fun_name_605=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2475, "struct buffer*"))));
            buffer_append_str(fun_name_605,buf_492);
            type_606=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value771=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value770=buffer_to_string(fun_name_605))))))));
            (__right_value769 = come_decrement_ref_count(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value770 = come_decrement_ref_count(__right_value770, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value771, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            type_606==((void*)0)            ) {
                klass_613=((struct sClass*)(__right_value775=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value774=buffer_to_string(fun_name_605))))));
                (__right_value773 = come_decrement_ref_count(__right_value773, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value774 = come_decrement_ref_count(__right_value774, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value775, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                klass_613                ) {
                    __dec_obj235=type_606,
                    type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2485, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_492)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj235,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value779=err_msg(info,"null type(%s)",buf_492)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value779, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_606->mClass->mStruct==(_Bool)0                ) {
                    buffer_append_str(fun_name_605,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_605,"_");
            buf2_614=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_605,buf2_614);
            node_615=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value781=buffer_to_string(fun_name_605))),info,(_Bool)0));
            (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real_491;
            __result_obj__306 = (struct sNode*)come_increment_ref_count(node_615);
            come_call_finalizer(buffer_finalize, fun_name_605, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_606, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_614 = come_decrement_ref_count(buf2_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__306;
            come_call_finalizer(buffer_finalize, fun_name_605, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_606, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_614 = come_decrement_ref_count(buf2_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_616=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2520, "struct buffer*"))));
            buffer_append_str(fun_name_616,buf_492);
            buffer_append_str(fun_name_616,"_");
            buf2_617=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_616,buf2_617);
            node_618=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value786=buffer_to_string(fun_name_616))),info,(_Bool)0));
            (__right_value786 = come_decrement_ref_count(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real_491;
            __result_obj__307 = (struct sNode*)come_increment_ref_count(node_618);
            come_call_finalizer(buffer_finalize, fun_name_616, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_617 = come_decrement_ref_count(buf2_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_618) ? node_618 = come_decrement_ref_count(node_618, ((struct sNode*)node_618)->finalize, ((struct sNode*)node_618)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__307;
            come_call_finalizer(buffer_finalize, fun_name_616, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_617 = come_decrement_ref_count(buf2_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_618) ? node_618 = come_decrement_ref_count(node_618, ((struct sNode*)node_618)->finalize, ((struct sNode*)node_618)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_501        ) {
            node_619=(struct sNode*)come_increment_ref_count(parse_function_call(buf_492,info,(_Bool)0));
            info->sline_real=sline_real_491;
            __result_obj__308 = (struct sNode*)come_increment_ref_count(node_619);
            ((node_619) ? node_619 = come_decrement_ref_count(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__308) ? __result_obj__308 = come_decrement_ref_count(__result_obj__308, ((struct sNode*)__result_obj__308)->finalize, ((struct sNode*)__result_obj__308)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__308;
            ((node_619) ? node_619 = come_decrement_ref_count(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !is_special_word_495&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__493)        ) {
            node_620=(struct sNode*)come_increment_ref_count(parse_function_call(buf_492,info,(_Bool)0));
            info->sline_real=sline_real_491;
            __result_obj__309 = (struct sNode*)come_increment_ref_count(node_620);
            ((node_620) ? node_620 = come_decrement_ref_count(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__309;
            ((node_620) ? node_620 = come_decrement_ref_count(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            node_621=(struct sNode*)come_increment_ref_count(string_node_v21(buf_492,head_489,head_sline_490,info));
            info->sline_real=sline_real_491;
            __result_obj__310 = (struct sNode*)come_increment_ref_count(node_621);
            ((node_621) ? node_621 = come_decrement_ref_count(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__310) ? __result_obj__310 = come_decrement_ref_count(__result_obj__310, ((struct sNode*)__result_obj__310)->finalize, ((struct sNode*)__result_obj__310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__310;
            ((node_621) ? node_621 = come_decrement_ref_count(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        node_622=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__311 = (struct sNode*)come_increment_ref_count(node_622);
        ((node_622) ? node_622 = come_decrement_ref_count(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__311) ? __result_obj__311 = come_decrement_ref_count(__result_obj__311, ((struct sNode*)__result_obj__311)->finalize, ((struct sNode*)__result_obj__311)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__311;
        ((node_622) ? node_622 = come_decrement_ref_count(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    ((struct tuple2$2int$bool$*)(__right_value792=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value792, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__312 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__312;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_502;
unsigned int hash_503;
unsigned int it_504;
struct sVar* __result_obj__218;
struct sVar* __result_obj__219;
struct sVar* __result_obj__220;
struct sVar* __result_obj__221;
default_value_502 = (void*)0;
    memset(&default_value_502,0,sizeof(struct sVar*));
    hash_503=string_get_hash_key(((char*)key))%self->size;
    it_504=hash_503;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_504]        ) {
            if(            string_equals(self->keys[it_504],key)            ) {
                __result_obj__218 = (struct sVar*)come_increment_ref_count(self->items[it_504]);
                come_call_finalizer(sVar_finalize, default_value_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__218;
            }
            it_504++;
            if(            it_504>=self->size            ) {
                it_504=0;
            }
            else if(            it_504==hash_503            ) {
                __result_obj__219 = (struct sVar*)come_increment_ref_count(default_value_502);
                come_call_finalizer(sVar_finalize, default_value_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__219;
            }
        }
        else {
            __result_obj__220 = (struct sVar*)come_increment_ref_count(default_value_502);
            come_call_finalizer(sVar_finalize, default_value_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__220;
        }
    }
    __result_obj__221 = (struct sVar*)come_increment_ref_count(default_value_502);
    come_call_finalizer(sVar_finalize, default_value_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__221;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_505;
unsigned int hash_506;
unsigned int it_507;
struct sVar* __result_obj__222;
struct sVar* __result_obj__223;
struct sVar* __result_obj__224;
struct sVar* __result_obj__225;
default_value_505 = (void*)0;
    memset(&default_value_505,0,sizeof(struct sVar*));
    hash_506=string_get_hash_key(((char*)key))%self->size;
    it_507=hash_506;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_507]        ) {
            if(            string_equals(self->keys[it_507],key)            ) {
                __result_obj__222 = (struct sVar*)come_increment_ref_count(self->items[it_507]);
                come_call_finalizer(sVar_finalize, default_value_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__222;
            }
            it_507++;
            if(            it_507>=self->size            ) {
                it_507=0;
            }
            else if(            it_507==hash_506            ) {
                __result_obj__223 = (struct sVar*)come_increment_ref_count(default_value_505);
                come_call_finalizer(sVar_finalize, default_value_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__223;
            }
        }
        else {
            __result_obj__224 = (struct sVar*)come_increment_ref_count(default_value_505);
            come_call_finalizer(sVar_finalize, default_value_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__224;
        }
    }
    __result_obj__225 = (struct sVar*)come_increment_ref_count(default_value_505);
    come_call_finalizer(sVar_finalize, default_value_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__225;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__228;
void* __right_value620 = (void*)0;
struct sOutputNode* result_516;
void* __right_value621 = (void*)0;
char* __dec_obj195;
void* __right_value622 = (void*)0;
char* __dec_obj196;
struct sOutputNode* __result_obj__229;
    if(    self==(void*)0    ) {
        __result_obj__228 = (void*)0;
        return __result_obj__228;
    }
    result_516=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)    ) {
        result_516->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj195=result_516->sname,
        result_516->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_516->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        __dec_obj196=result_516->contents,
        result_516->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__229 = result_516;
    come_call_finalizer(sOutputNode_finalize, result_516, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__229;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__233;
void* __right_value636 = (void*)0;
struct sComeCallNode* result_531;
void* __right_value637 = (void*)0;
char* __dec_obj199;
void* __right_value638 = (void*)0;
struct buffer* __dec_obj200;
struct sComeCallNode* __result_obj__234;
    if(    self==(void*)0    ) {
        __result_obj__233 = (void*)0;
        return __result_obj__233;
    }
    result_531=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)    ) {
        result_531->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj199=result_531->sname,
        result_531->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_531->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        __dec_obj200=result_531->come_block,
        result_531->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer(buffer_finalize, __dec_obj200,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_531->come_block_sline=self->come_block_sline;
    }
    __result_obj__234 = result_531;
    come_call_finalizer(sComeCallNode_finalize, result_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__234;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__236;
void* __right_value643 = (void*)0;
struct sComeJoinNode* result_535;
void* __right_value644 = (void*)0;
char* __dec_obj201;
void* __right_value645 = (void*)0;
struct sNode* __dec_obj202;
struct sComeJoinNode* __result_obj__237;
    if(    self==(void*)0    ) {
        __result_obj__236 = (void*)0;
        return __result_obj__236;
    }
    result_535=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)    ) {
        result_535->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj201=result_535->sname,
        result_535->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_535->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj202=result_535->node,
        result_535->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__237 = result_535;
    come_call_finalizer(sComeJoinNode_finalize, result_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__237;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__239;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__239 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__239;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value656 = (void*)0;
struct list_item$1sBlock$ph* litem_542;
struct sBlock* __dec_obj204;
void* __right_value657 = (void*)0;
struct list_item$1sBlock$ph* litem_543;
struct sBlock* __dec_obj205;
void* __right_value658 = (void*)0;
struct list_item$1sBlock$ph* litem_544;
struct sBlock* __dec_obj206;
struct list$1sBlock$ph* __result_obj__240;
    if(    self->len==0    ) {
        litem_542=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value656=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 944, "struct list_item$1sBlock$ph*"))));
        litem_542->prev=((void*)0);
        litem_542->next=((void*)0);
        __dec_obj204=litem_542->item,
        litem_542->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj204,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_542;
        self->head=litem_542;
    }
    else if(    self->len==1    ) {
        litem_543=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value657=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 954, "struct list_item$1sBlock$ph*"))));
        litem_543->prev=self->head;
        litem_543->next=((void*)0);
        __dec_obj205=litem_543->item,
        litem_543->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj205,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_543;
        self->head->next=litem_543;
    }
    else {
        litem_544=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value658=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 964, "struct list_item$1sBlock$ph*"))));
        litem_544->prev=self->tail;
        litem_544->next=((void*)0);
        __dec_obj206=litem_544->item,
        litem_544->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj206,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_544;
        self->tail=litem_544;
    }
    self->len++;
    __result_obj__240 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__240;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__241;
void* __right_value661 = (void*)0;
struct sComePollNode* result_545;
void* __right_value662 = (void*)0;
char* __dec_obj207;
void* __right_value663 = (void*)0;
struct list$1sNode$ph* __dec_obj208;
void* __right_value706 = (void*)0;
struct list$1sBlock$ph* __dec_obj221;
void* __right_value707 = (void*)0;
struct sBlock* __dec_obj222;
struct sComePollNode* __result_obj__268;
    if(    self==(void*)0    ) {
        __result_obj__241 = (void*)0;
        return __result_obj__241;
    }
    result_545=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)    ) {
        result_545->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj207=result_545->sname,
        result_545->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_545->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        __dec_obj208=result_545->vars,
        result_545->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj208,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        __dec_obj221=result_545->blocks,
        result_545->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj221,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        __dec_obj222=result_545->else_block,
        result_545->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj222,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_545->time_out=self->time_out;
    }
    __result_obj__268 = result_545;
    come_call_finalizer(sComePollNode_finalize, result_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__268;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__242;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1sBlock$ph* result_546;
struct list_item$1sBlock$ph* it_547;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1sBlock$ph* __result_obj__267;
    if(    self==((void*)0)    ) {
        __result_obj__242 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__242;
    }
    result_546=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 925, "struct list$1sBlock$ph*"))));
    it_547=self->head;
    while(    it_547!=((void*)0)    ) {
        if(        1        ) {
            list$1sBlock$ph_add(result_546,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_547->item)));
        }
        else {
            list$1sBlock$ph_add(result_546,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_547->item)));
        }
        it_547=it_547->next;
    }
    __result_obj__267 = (struct list$1sBlock$ph*)come_increment_ref_count(result_546);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__267;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__243;
void* __right_value666 = (void*)0;
struct sBlock* result_548;
void* __right_value671 = (void*)0;
struct list$1sNode$ph* __dec_obj209;
void* __right_value703 = (void*)0;
struct sVarTable* __dec_obj220;
struct sBlock* __result_obj__266;
    if(    self==(void*)0    ) {
        __result_obj__243 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__243;
    }
    result_548=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj209=result_548->mNodes,
        result_548->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj209,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj220=result_548->mVarTable,
        result_548->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj220,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_548->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__266 = (struct sBlock*)come_increment_ref_count(result_548);
    come_call_finalizer(sBlock_finalize, result_548, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__266;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__244;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1sNode$ph* result_549;
struct list_item$1sNode$ph* it_550;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1sNode$ph* __result_obj__245;
    if(    self==((void*)0)    ) {
        __result_obj__244 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__244;
    }
    result_549=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 925, "struct list$1sNode$ph*"))));
    it_550=self->head;
    while(    it_550!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_549,(struct sNode*)come_increment_ref_count(sNode_clone(it_550->item)));
        }
        else {
            list$1sNode$ph_add(result_549,(struct sNode*)come_increment_ref_count(sNode_clone(it_550->item)));
        }
        it_550=it_550->next;
    }
    __result_obj__245 = (struct list$1sNode$ph*)come_increment_ref_count(result_549);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__245;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__246;
void* __right_value672 = (void*)0;
struct sVarTable* result_551;
void* __right_value702 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj219;
struct sVarTable* __result_obj__265;
    if(    self==(void*)0    ) {
        __result_obj__246 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__246;
    }
    result_551=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj219=result_551->mVars,
        result_551->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj219,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_551->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_551->mParent=self->mParent;
    }
    __result_obj__265 = (struct sVarTable*)come_increment_ref_count(result_551);
    come_call_finalizer(sVarTable_finalize, result_551, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__265;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__247;
void* __right_value673 = (void*)0;
void* __right_value679 = (void*)0;
struct map$2char$phsVar$ph* result_557;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1char$ph* __dec_obj211;
char* it_560;
struct sVar* default_value_563;
void* __right_value682 = (void*)0;
struct sVar* it2_566;
void* __right_value691 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__264;
default_value_563 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__247 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__247;
    }
    result_557=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1883, "struct map$2char$phsVar$ph*"))));
    __dec_obj211=result_557->key_list,
    result_557->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1885, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj211,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_560=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_560=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_563,0,sizeof(struct sVar*));
        it2_566=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_560,(struct sVar*)come_increment_ref_count(default_value_563)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_557,(char*)come_increment_ref_count((char*)come_memdup(it_560, "./comelang.h", 1894, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_566)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_557,(char*)come_increment_ref_count((char*)come_memdup(it_560, "./comelang.h", 1897, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_566)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_557,(char*)come_increment_ref_count(it_560),(struct sVar*)come_increment_ref_count(sVar_clone(it2_566)));
        }
        else {
            map$2char$phsVar$ph_put(result_557,(char*)come_increment_ref_count(it_560),(struct sVar*)come_increment_ref_count(sVar_clone(it2_566)));
        }
        come_call_finalizer(sVar_finalize, default_value_563, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_566, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__264 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_557);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_557, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__264;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_552;
int i_553;
    for(    i_552=0    ;    i_552<self->size    ;    i_552++    ){
        if(        self->item_existance[i_552]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_552], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_553=0    ;    i_553<self->size    ;    i_553++    ){
        if(        self->item_existance[i_553]        ) {
            if(            1            ) {
                (self->keys[i_553] = come_decrement_ref_count(self->keys[i_553], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
int i_554;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1char$ph* __dec_obj210;
struct map$2char$phsVar$ph* __result_obj__249;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value674=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value675=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1813, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value676=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_554=0    ;    i_554<128    ;    i_554++    ){
        self->item_existance[i_554]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj210=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj210,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__249 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__249;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__248;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__248 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__248;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_555;
struct list_item$1char$p* prev_it_556;
    it_555=self->head;
    while(    it_555!=((void*)0)    ) {
        prev_it_556=it_555;
        it_555=it_555->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_556, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_558;
char* __result_obj__250;
char* __result_obj__251;
char* result_559;
char* __result_obj__252;
result_558 = (void*)0;
result_559 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_558,0,sizeof(char*));
        __result_obj__250 = result_558;
        return __result_obj__250;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__251 = self->key_list->it->item;
        return __result_obj__251;
    }
    memset(&result_559,0,sizeof(char*));
    __result_obj__252 = result_559;
    return __result_obj__252;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_561;
char* __result_obj__253;
char* __result_obj__254;
char* result_562;
char* __result_obj__255;
result_561 = (void*)0;
result_562 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_561,0,sizeof(char*));
        __result_obj__253 = result_561;
        return __result_obj__253;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__254 = self->key_list->it->item;
        return __result_obj__254;
    }
    memset(&result_562,0,sizeof(char*));
    __result_obj__255 = result_562;
    return __result_obj__255;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_564;
unsigned int it_565;
struct sVar* __result_obj__256;
struct sVar* __result_obj__257;
struct sVar* __result_obj__258;
struct sVar* __result_obj__259;
    hash_564=string_get_hash_key(((char*)key))%self->size;
    it_565=hash_564;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_565]        ) {
            if(            string_equals(self->keys[it_565],key)            ) {
                __result_obj__256 = (struct sVar*)come_increment_ref_count(self->items[it_565]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__256;
            }
            it_565++;
            if(            it_565>=self->size            ) {
                it_565=0;
            }
            else if(            it_565==hash_564            ) {
                __result_obj__257 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__257;
            }
        }
        else {
            __result_obj__258 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__258;
        }
    }
    __result_obj__259 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__259;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_578;
int it_579;
_Bool same_key_exist_580;
char* it2_581;
struct map$2char$phsVar$ph* __result_obj__261;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_578=string_get_hash_key(((char*)key))%self->size;
    it_579=hash_578;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_579]        ) {
            if(            string_equals(self->keys[it_579],key)            ) {
                if(                1                ) {
                    (self->keys[it_579] = come_decrement_ref_count(self->keys[it_579], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_579]);
                    self->keys[it_579]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_579]);
                    self->keys[it_579]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_579], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_579]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_579]=item;
                }
                break;
            }
            it_579++;
            if(            it_579>=self->size            ) {
                it_579=0;
            }
            else if(            it_579==hash_578            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_579]=(_Bool)1;
            if(            1            ) {
                self->keys[it_579]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_579]=key;
            }
            if(            1            ) {
                self->items[it_579]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_579]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_580=(_Bool)0;
    for(    it2_581=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_581=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_581,key)        ) {
            same_key_exist_580=(_Bool)1;
        }
    }
    if(    !same_key_exist_580    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__261 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__261;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_567;
void* __right_value683 = (void*)0;
char** keys_568;
void* __right_value684 = (void*)0;
struct sVar** items_569;
void* __right_value685 = (void*)0;
_Bool* item_existance_570;
int len_571;
char* it_572;
struct sVar* default_value_573;
void* __right_value686 = (void*)0;
struct sVar* it2_574;
unsigned int hash_575;
int n_576;
struct sVar* default_value_577;
void* __right_value687 = (void*)0;
default_value_573 = (void*)0;
default_value_577 = (void*)0;
    size_567=self->size*10;
    keys_568=(char**)come_increment_ref_count(((char**)(__right_value683=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_567)), "./comelang.h", 2051, "char**"))));
    items_569=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value684=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_567)), "./comelang.h", 2052, "struct sVar**"))));
    item_existance_570=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value685=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_567)), "./comelang.h", 2053, "_Bool*"))));
    len_571=0;
    for(    it_572=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_572=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_573,0,sizeof(struct sVar*));
        it2_574=((struct sVar*)(__right_value686=map$2char$phsVar$ph_at(self,it_572,(struct sVar*)come_increment_ref_count(default_value_573))));
        come_call_finalizer(sVar_finalize, __right_value686, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_575=string_get_hash_key(((char*)it_572))%size_567;
        n_576=hash_575;
        while(        (_Bool)1        ) {
            if(            item_existance_570[n_576]            ) {
                n_576++;
                if(                n_576>=size_567                ) {
                    n_576=0;
                }
                else if(                n_576==hash_575                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_570[n_576]=(_Bool)1;
                keys_568[n_576]=it_572;
                items_569[n_576]=((struct sVar*)(__right_value687=map$2char$phsVar$ph_at(self,it_572,(struct sVar*)come_increment_ref_count(default_value_577))));
                come_call_finalizer(sVar_finalize, __right_value687, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_571++;
                come_call_finalizer(sVar_finalize, default_value_577, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_577, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_573, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_568;
    self->items=items_569;
    self->item_existance=item_existance_570;
    self->size=size_567;
    self->len=len_571;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value688 = (void*)0;
struct list_item$1char$ph* litem_582;
char* __dec_obj212;
void* __right_value689 = (void*)0;
struct list_item$1char$ph* litem_583;
char* __dec_obj213;
void* __right_value690 = (void*)0;
struct list_item$1char$ph* litem_584;
char* __dec_obj214;
struct list$1char$ph* __result_obj__260;
    if(    self->len==0    ) {
        litem_582=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value688=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1014, "struct list_item$1char$ph*"))));
        litem_582->prev=((void*)0);
        litem_582->next=((void*)0);
        __dec_obj212=litem_582->item,
        litem_582->item=(char*)come_increment_ref_count(item);
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_582;
        self->head=litem_582;
    }
    else if(    self->len==1    ) {
        litem_583=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value689=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1024, "struct list_item$1char$ph*"))));
        litem_583->prev=self->head;
        litem_583->next=((void*)0);
        __dec_obj213=litem_583->item,
        litem_583->item=(char*)come_increment_ref_count(item);
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_583;
        self->head->next=litem_583;
    }
    else {
        litem_584=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value690=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1034, "struct list_item$1char$ph*"))));
        litem_584->prev=self->tail;
        litem_584->next=((void*)0);
        __dec_obj214=litem_584->item,
        litem_584->item=(char*)come_increment_ref_count(item);
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_584;
        self->tail=litem_584;
    }
    self->len++;
    __result_obj__260 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__260;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__262;
void* __right_value692 = (void*)0;
struct sVar* result_585;
void* __right_value693 = (void*)0;
char* __dec_obj215;
void* __right_value694 = (void*)0;
char* __dec_obj216;
void* __right_value695 = (void*)0;
struct sType* __dec_obj217;
void* __right_value696 = (void*)0;
char* __dec_obj218;
struct sVar* __result_obj__263;
    if(    self==(void*)0    ) {
        __result_obj__262 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__262;
    }
    result_585=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj215=result_585->mName,
        result_585->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj216=result_585->mCValueName,
        result_585->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj217=result_585->mType,
        result_585->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj217,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_585->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_585->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_585->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_585->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj218=result_585->mFunName,
        result_585->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__263 = (struct sVar*)come_increment_ref_count(result_585);
    come_call_finalizer(sVar_finalize, result_585, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__263;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_586;
int i_587;
    for(    i_586=0    ;    i_586<self->size    ;    i_586++    ){
        if(        self->item_existance[i_586]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_586], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_587=0    ;    i_587<self->size    ;    i_587++    ){
        if(        self->item_existance[i_587]        ) {
            if(            1            ) {
                (self->keys[i_587] = come_decrement_ref_count(self->keys[i_587], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__270;
void* __right_value711 = (void*)0;
struct sFuncNode* result_588;
void* __right_value712 = (void*)0;
char* __dec_obj223;
struct sFuncNode* __result_obj__271;
    if(    self==(void*)0    ) {
        __result_obj__270 = (void*)0;
        return __result_obj__270;
    }
    result_588=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)    ) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj223=result_588->sname,
        result_588->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_588->sline_real=self->sline_real;
    }
    __result_obj__271 = result_588;
    come_call_finalizer(sFuncNode_finalize, result_588, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__271;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__273;
void* __right_value716 = (void*)0;
struct sWildCard* result_589;
void* __right_value717 = (void*)0;
char* __dec_obj224;
struct sWildCard* __result_obj__274;
    if(    self==(void*)0    ) {
        __result_obj__273 = (void*)0;
        return __result_obj__273;
    }
    result_589=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)    ) {
        result_589->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj224=result_589->sname,
        result_589->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_589->sline_real=self->sline_real;
    }
    __result_obj__274 = result_589;
    come_call_finalizer(sWildCard_finalize, result_589, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__274;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__276;
void* __right_value721 = (void*)0;
struct sLineNode* result_590;
void* __right_value722 = (void*)0;
char* __dec_obj225;
struct sLineNode* __result_obj__277;
    if(    self==(void*)0    ) {
        __result_obj__276 = (void*)0;
        return __result_obj__276;
    }
    result_590=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)    ) {
        result_590->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj225=result_590->sname,
        result_590->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_590->sline_real=self->sline_real;
    }
    __result_obj__277 = result_590;
    come_call_finalizer(sLineNode_finalize, result_590, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__277;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__279;
void* __right_value726 = (void*)0;
struct sSNameNode* result_591;
void* __right_value727 = (void*)0;
char* __dec_obj226;
struct sSNameNode* __result_obj__280;
    if(    self==(void*)0    ) {
        __result_obj__279 = (void*)0;
        return __result_obj__279;
    }
    result_591=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)    ) {
        result_591->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj226=result_591->sname,
        result_591->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_591->sline_real=self->sline_real;
    }
    __result_obj__280 = result_591;
    come_call_finalizer(sSNameNode_finalize, result_591, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__280;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__282;
void* __right_value731 = (void*)0;
struct sCallerFuncNode* result_592;
void* __right_value732 = (void*)0;
char* __dec_obj227;
struct sCallerFuncNode* __result_obj__283;
    if(    self==(void*)0    ) {
        __result_obj__282 = (void*)0;
        return __result_obj__282;
    }
    result_592=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)    ) {
        result_592->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj227=result_592->sname,
        result_592->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_592->sline_real=self->sline_real;
    }
    __result_obj__283 = result_592;
    come_call_finalizer(sCallerFuncNode_finalize, result_592, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__283;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__285;
void* __right_value736 = (void*)0;
struct sCallerLineNode* result_593;
void* __right_value737 = (void*)0;
char* __dec_obj228;
struct sCallerLineNode* __result_obj__286;
    if(    self==(void*)0    ) {
        __result_obj__285 = (void*)0;
        return __result_obj__285;
    }
    result_593=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)    ) {
        result_593->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj228=result_593->sname,
        result_593->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_593->sline_real=self->sline_real;
    }
    __result_obj__286 = result_593;
    come_call_finalizer(sCallerLineNode_finalize, result_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__286;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__288;
void* __right_value741 = (void*)0;
struct sCallerSNameNode* result_594;
void* __right_value742 = (void*)0;
char* __dec_obj229;
struct sCallerSNameNode* __result_obj__289;
    if(    self==(void*)0    ) {
        __result_obj__288 = (void*)0;
        return __result_obj__288;
    }
    result_594=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)    ) {
        result_594->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj229=result_594->sname,
        result_594->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_594->sline_real=self->sline_real;
    }
    __result_obj__289 = result_594;
    come_call_finalizer(sCallerSNameNode_finalize, result_594, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__289;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__291;
void* __right_value747 = (void*)0;
struct sVarArgTypeName* result_598;
void* __right_value748 = (void*)0;
char* __dec_obj230;
void* __right_value749 = (void*)0;
struct sType* __dec_obj231;
struct sVarArgTypeName* __result_obj__292;
    if(    self==(void*)0    ) {
        __result_obj__291 = (void*)0;
        return __result_obj__291;
    }
    result_598=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)    ) {
        result_598->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj230=result_598->sname,
        result_598->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_598->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj231=result_598->type,
        result_598->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj231,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__292 = result_598;
    come_call_finalizer(sVarArgTypeName_finalize, result_598, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__292;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__295;
void* __right_value762 = (void*)0;
struct sInlineAssembler* result_604;
void* __right_value763 = (void*)0;
char* __dec_obj232;
void* __right_value764 = (void*)0;
char* __dec_obj233;
void* __right_value765 = (void*)0;
struct list$1sNode$ph* __dec_obj234;
struct sInlineAssembler* __result_obj__296;
    if(    self==(void*)0    ) {
        __result_obj__295 = (void*)0;
        return __result_obj__295;
    }
    result_604=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)    ) {
        result_604->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj232=result_604->sname,
        result_604->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_604->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        __dec_obj233=result_604->source,
        result_604->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        __dec_obj234=result_604->exps,
        result_604->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj234,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__296 = result_604;
    come_call_finalizer(sInlineAssembler_finalize, result_604, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__296;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_607;
unsigned int hash_608;
unsigned int it_609;
struct sType* __result_obj__298;
struct sType* __result_obj__299;
struct sType* __result_obj__300;
struct sType* __result_obj__301;
default_value_607 = (void*)0;
    memset(&default_value_607,0,sizeof(struct sType*));
    hash_608=string_get_hash_key(((char*)key))%self->size;
    it_609=hash_608;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_609]        ) {
            if(            string_equals(self->keys[it_609],key)            ) {
                __result_obj__298 = (struct sType*)come_increment_ref_count(self->items[it_609]);
                come_call_finalizer(sType_finalize, default_value_607, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__298;
            }
            it_609++;
            if(            it_609>=self->size            ) {
                it_609=0;
            }
            else if(            it_609==hash_608            ) {
                __result_obj__299 = (struct sType*)come_increment_ref_count(default_value_607);
                come_call_finalizer(sType_finalize, default_value_607, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__299;
            }
        }
        else {
            __result_obj__300 = (struct sType*)come_increment_ref_count(default_value_607);
            come_call_finalizer(sType_finalize, default_value_607, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__300;
        }
    }
    __result_obj__301 = (struct sType*)come_increment_ref_count(default_value_607);
    come_call_finalizer(sType_finalize, default_value_607, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__301;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_610;
unsigned int hash_611;
unsigned int it_612;
struct sType* __result_obj__302;
struct sType* __result_obj__303;
struct sType* __result_obj__304;
struct sType* __result_obj__305;
default_value_610 = (void*)0;
    memset(&default_value_610,0,sizeof(struct sType*));
    hash_611=string_get_hash_key(((char*)key))%self->size;
    it_612=hash_611;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_612]        ) {
            if(            string_equals(self->keys[it_612],key)            ) {
                __result_obj__302 = (struct sType*)come_increment_ref_count(self->items[it_612]);
                come_call_finalizer(sType_finalize, default_value_610, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__302;
            }
            it_612++;
            if(            it_612>=self->size            ) {
                it_612=0;
            }
            else if(            it_612==hash_611            ) {
                __result_obj__303 = (struct sType*)come_increment_ref_count(default_value_610);
                come_call_finalizer(sType_finalize, default_value_610, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__303;
            }
        }
        else {
            __result_obj__304 = (struct sType*)come_increment_ref_count(default_value_610);
            come_call_finalizer(sType_finalize, default_value_610, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__304;
        }
    }
    __result_obj__305 = (struct sType*)come_increment_ref_count(default_value_610);
    come_call_finalizer(sType_finalize, default_value_610, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__305;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value793 = (void*)0;
struct sNode* __result_obj__313;
    __result_obj__313 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value793=expression_node_v99(info))));
    ((__right_value793) ? __right_value793 = come_decrement_ref_count(__right_value793, ((struct sNode*)__right_value793)->finalize, ((struct sNode*)__right_value793)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__313;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* __dec_obj236;
struct sNode* __result_obj__314;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* __dec_obj237;
struct sNode* __result_obj__315;
struct sNode* __result_obj__316;
    if(    parsecmp("or",info)    ) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj236=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj236 ? __dec_obj236 = come_decrement_ref_count(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__314 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__314) ? __result_obj__314 = come_decrement_ref_count(__result_obj__314, ((struct sNode*)__result_obj__314)->finalize, ((struct sNode*)__result_obj__314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__314;
    }
    else if(    parsecmp("and",info)    ) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj237=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__315 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__315) ? __result_obj__315 = come_decrement_ref_count(__result_obj__315, ((struct sNode*)__result_obj__315)->finalize, ((struct sNode*)__result_obj__315)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__315;
    }
    __result_obj__316 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__316;
}

struct sNode* statment(struct sInfo* info){
void* __right_value798 = (void*)0;
struct sNode* node_623;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj238;
struct sNode* __result_obj__317;
    node_623=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj238=node_623,
    node_623=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_623),info));
    (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__317 = (struct sNode*)come_increment_ref_count(node_623);
    ((node_623) ? node_623 = come_decrement_ref_count(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__317;
}

char* get_none_generics_name(char* class_name){
char* p_624;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
char* __result_obj__318;
void* __right_value802 = (void*)0;
char* __result_obj__319;
    p_624=class_name;
    while(    *p_624    ) {
        if(        *p_624==36        ) {
            __result_obj__318 = (char*)come_increment_ref_count(((char*)(__right_value801=charp_substring(((char*)(__right_value800=__builtin_string(class_name))),0,p_624-class_name))));
            (__right_value800 = come_decrement_ref_count(__right_value800, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value801 = come_decrement_ref_count(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__318 = come_decrement_ref_count(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__318;
        }
        else {
            p_624++;
        }
    }
    __result_obj__319 = (char*)come_increment_ref_count(((char*)(__right_value802=__builtin_string(class_name))));
    (__right_value802 = come_decrement_ref_count(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__319 = come_decrement_ref_count(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__319;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct buffer* buf_625;
struct sClass* klass_626;
char* class_name_627;
int i_628;
void* __right_value805 = (void*)0;
struct sType* type_629;
void* __right_value806 = (void*)0;
char* type_name_630;
int i_631;
void* __right_value807 = (void*)0;
char* __result_obj__320;
    buf_625=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2620, "struct buffer*"))));
    klass_626=generics_type->mClass;
    class_name_627=klass_626->mName;
    buffer_append_str(buf_625,class_name_627);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0    ) {
        buffer_append_char(buf_625,36);
        buffer_append_char(buf_625,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_628=0        ;        i_628<list$1sType$ph_length(generics_type->mGenericsTypes)        ;        i_628++        ){
            type_629=((struct sType*)(__right_value805=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_628)));
            come_call_finalizer(sType_finalize, __right_value805, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type_name_630=(char*)come_increment_ref_count(create_generics_name(type_629,info));
            buffer_append_str(buf_625,type_name_630);
            buffer_append_char(buf_625,36);
            for(            i_631=0            ;            i_631<type_629->mPointerNum            ;            i_631++            ){
                buffer_append_char(buf_625,112);
            }
            if(            type_629->mHeap            ) {
                buffer_append_str(buf_625,"h");
            }
            (type_name_630 = come_decrement_ref_count(type_name_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__320 = (char*)come_increment_ref_count(((char*)(__right_value807=buffer_to_string(buf_625))));
    come_call_finalizer(buffer_finalize, buf_625, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value807 = come_decrement_ref_count(__right_value807, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__320 = come_decrement_ref_count(__result_obj__320, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__320;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_632;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct buffer* buf_633;
void* __right_value810 = (void*)0;
char* __dec_obj239;
void* __right_value811 = (void*)0;
char* __dec_obj240;
int i_634;
void* __right_value812 = (void*)0;
char* __dec_obj241;
void* __right_value813 = (void*)0;
char* __dec_obj242;
void* __right_value814 = (void*)0;
char* __dec_obj243;
int i_635;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
char* __result_obj__321;
struct_name_632 = (void*)0;
    buf_633=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2655, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __dec_obj239=struct_name_632,
        struct_name_632=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_632,"_Bool")        ) {
            __dec_obj240=struct_name_632,
            struct_name_632=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0            ) {
                buffer_append_str(buf_633,"$");
            }
            for(            i_634=0            ;            i_634<obj_type->mOriginalTypeNamePointerNum            ;            i_634++            ){
                buffer_append_str(buf_633,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj241=struct_name_632,
        struct_name_632=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_632,"_Bool")        ) {
            __dec_obj242=struct_name_632,
            struct_name_632=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj243=struct_name_632,
        struct_name_632=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_633,"$");
        }
        for(        i_635=0        ;        i_635<obj_type->mPointerNum        ;        i_635++        ){
            buffer_append_str(buf_633,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_633,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_633,"pa");
    }
    __result_obj__321 = (char*)come_increment_ref_count(((char*)(__right_value816=xsprintf("%s%s_%s",struct_name_632,((char*)(__right_value815=buffer_to_string(buf_633))),fun_name))));
    (struct_name_632 = come_decrement_ref_count(struct_name_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_633, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value815 = come_decrement_ref_count(__right_value815, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value816 = come_decrement_ref_count(__right_value816, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__321 = come_decrement_ref_count(__result_obj__321, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__321;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_636;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* buf_637;
void* __right_value819 = (void*)0;
char* __dec_obj244;
void* __right_value820 = (void*)0;
char* __dec_obj245;
void* __right_value821 = (void*)0;
char* __dec_obj246;
int i_638;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
char* __result_obj__322;
struct_name_636 = (void*)0;
    buf_637=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2702, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj244=struct_name_636,
        struct_name_636=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_636,"_Bool")        ) {
            __dec_obj245=struct_name_636,
            struct_name_636=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj246=struct_name_636,
        struct_name_636=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_637,"$");
        }
        for(        i_638=0        ;        i_638<obj_type->mPointerNum        ;        i_638++        ){
            buffer_append_str(buf_637,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_637,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_637,"pa");
    }
    __result_obj__322 = (char*)come_increment_ref_count(((char*)(__right_value823=xsprintf("%s%s_%s",struct_name_636,((char*)(__right_value822=buffer_to_string(buf_637))),fun_name))));
    (struct_name_636 = come_decrement_ref_count(struct_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_637, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value822 = come_decrement_ref_count(__right_value822, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value823 = come_decrement_ref_count(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__322 = come_decrement_ref_count(__result_obj__322, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__322;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_639;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct buffer* buf_640;
void* __right_value826 = (void*)0;
char* __dec_obj247;
void* __right_value827 = (void*)0;
char* __dec_obj248;
int i_641;
void* __right_value828 = (void*)0;
char* __dec_obj249;
void* __right_value829 = (void*)0;
char* __dec_obj250;
void* __right_value830 = (void*)0;
char* __dec_obj251;
int i_642;
void* __right_value831 = (void*)0;
int len_644;
void* __right_value832 = (void*)0;
char* __result_obj__323;
struct_name_639 = (void*)0;
    buf_640=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2734, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __dec_obj247=struct_name_639,
        struct_name_639=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_639,"_Bool")        ) {
            __dec_obj248=struct_name_639,
            struct_name_639=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0            ) {
                buffer_append_str(buf_640,"$");
            }
            for(            i_641=0            ;            i_641<obj_type->mOriginalTypeNamePointerNum            ;            i_641++            ){
                buffer_append_str(buf_640,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj249=struct_name_639,
        struct_name_639=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_639,"_Bool")        ) {
            __dec_obj250=struct_name_639,
            struct_name_639=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj251=struct_name_639,
        struct_name_639=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_640,"$");
        }
        for(        i_642=0        ;        i_642<obj_type->mPointerNum        ;        i_642++        ){
            buffer_append_str(buf_640,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_640,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_640,"pa");
    }
    char none_method_name_643[charp_length(fun_name)+1];
    memset(&none_method_name_643, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_644=string_length(struct_name_639)+string_length(((char*)(__right_value831=buffer_to_string(buf_640))));
    (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    memcpy(none_method_name_643,fun_name+len_644+1,charp_length(fun_name)-len_644-1);
    none_method_name_643[charp_length(fun_name)-len_644-1]=0;
    __result_obj__323 = (char*)come_increment_ref_count(((char*)(__right_value832=__builtin_string(none_method_name_643))));
    (struct_name_639 = come_decrement_ref_count(struct_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_640, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value832 = come_decrement_ref_count(__right_value832, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__323 = come_decrement_ref_count(__result_obj__323, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__323;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value833 = (void*)0;
char* struct_name_645;
void* __right_value834 = (void*)0;
char* __dec_obj252;
void* __right_value835 = (void*)0;
char* __result_obj__324;
    struct_name_645=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name_645,"_Bool")    ) {
        __dec_obj252=struct_name_645,
        struct_name_645=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__324 = (char*)come_increment_ref_count(((char*)(__right_value835=xsprintf("%s_%s",struct_name_645,fun_name))));
    (struct_name_645 = come_decrement_ref_count(struct_name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value835 = come_decrement_ref_count(__right_value835, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__324 = come_decrement_ref_count(__result_obj__324, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__324;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value836 = (void*)0;
struct sNode* __result_obj__325;
    ((struct tuple2$2int$bool$*)(__right_value836=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value836, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__325 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__325;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_646;
char* p_647;
int sline_648;
_Bool err_flag_649;
void* __right_value839 = (void*)0;
char* label_650;
void* __right_value840 = (void*)0;
char* __dec_obj253;
char* __dec_obj254;
_Bool no_comma_651;
_Bool in_fun_param_652;
void* __right_value841 = (void*)0;
struct sNode* node_653;
void* __right_value842 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value851 = (void*)0;
struct sNode* __result_obj__328;
struct sNode* __result_obj__329;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_646=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2812, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_647=info->p;
            sline_648=info->sline;
            err_flag_649=(_Bool)0;
            label_650=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj253=label_650,
                label_650=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                err_flag_649=(_Bool)1;
            }
            if(            err_flag_649==(_Bool)1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj254=label_650,
                label_650=((void*)0);
                __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->p=p_647;
                info->sline=sline_648;
            }
            no_comma_651=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_652=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_653=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj255=node_653,
            node_653=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_653),info));
            (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            info->no_comma=no_comma_651;
            info->in_fun_param=in_fun_param_652;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_646,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2855, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_650),(struct sNode*)come_increment_ref_count(node_653))));
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_650 = come_decrement_ref_count(label_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_653) ? node_653 = come_decrement_ref_count(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            (label_650 = come_decrement_ref_count(label_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_653) ? node_653 = come_decrement_ref_count(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2873, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value846=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2873, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_646,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__328 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value851=_inf_value20)));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_646, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value846, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value851) ? __right_value851 = come_decrement_ref_count(__right_value851, ((struct sNode*)__right_value851)->finalize, ((struct sNode*)__right_value851)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__328;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_646, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __result_obj__329 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__329) ? __result_obj__329 = come_decrement_ref_count(__result_obj__329, ((struct sNode*)__result_obj__329)->finalize, ((struct sNode*)__result_obj__329)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__329;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__326;
void* __right_value847 = (void*)0;
struct sLambdaCall* result_654;
void* __right_value848 = (void*)0;
char* __dec_obj256;
void* __right_value849 = (void*)0;
struct sNode* __dec_obj257;
void* __right_value850 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj258;
struct sLambdaCall* __result_obj__327;
    if(    self==(void*)0    ) {
        __result_obj__326 = (void*)0;
        return __result_obj__326;
    }
    result_654=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)    ) {
        result_654->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj256=result_654->sname,
        result_654->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_654->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj257=result_654->node,
        result_654->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj258=result_654->params,
        result_654->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj258,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__327 = result_654;
    come_call_finalizer(sLambdaCall_finalize, result_654, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__327;
}

