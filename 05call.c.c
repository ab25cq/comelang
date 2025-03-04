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

struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
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
    struct list$1void$ph* method_generics_types;
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
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX1202, unsigned long  int anonymous_var_nameX1203, int anonymous_var_nameX1204);
int ppoll(struct pollfd* anonymous_var_nameX1205, unsigned long  int anonymous_var_nameX1206, const struct timespec* anonymous_var_nameX1207, const struct __sigset_t* anonymous_var_nameX1208);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
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
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item);
static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item);
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
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
static int list$1void$ph$p_length(struct list$1void$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item);
static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
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
static void sBlock_finalize(struct sBlock* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right);
static void* list$1void$p$p_item(struct list$1void$p* self, int position, void* default_value);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self);
static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self);
static void list$1void$p_finalize(struct list$1void$p* self);
static struct list$1void$p* list$1void$p_clone(struct list$1void$p* self);
static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self);
static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right);
static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right);
static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item);
static struct sVar* sVar_clone(struct sVar* self);
static void sVar_finalize(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
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
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__81,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1short$* __result_obj__84;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__84 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__84,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__84;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1int$* __result_obj__86;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__86 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__86,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1long$* __result_obj__88;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__88,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj21;
struct smart_pointer$1char$p* __result_obj__91;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__91 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__91,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj23;
struct smart_pointer$1float$* __result_obj__96;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__96 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__96,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj25;
struct smart_pointer$1double$* __result_obj__98;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__98,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_175;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1char$$p_push_back(self,values[i_175]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_176=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1457, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1467, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1477, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__100 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_179;
struct list_item$1char$* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_181;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1char$p$p_push_back(self,values[i_181]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_182=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1457, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1467, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1477, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result_obj__103 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_185;
struct list_item$1char$p* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_187;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1short$$p_push_back(self,values[i_187]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_188=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1457, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1467, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1477, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result_obj__106 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_191;
struct list_item$1short$* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_193;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1int$$p_push_back(self,values[i_193]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_194=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1457, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1467, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1477, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__109 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_197;
struct list_item$1int$* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_199;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1long$$p_push_back(self,values[i_199]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_200=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1457, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1467, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1477, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__112 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_203;
struct list_item$1long$* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_205;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1float$$p_push_back(self,values[i_205]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_206=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1457, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1467, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1477, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result_obj__115 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_209;
struct list_item$1float$* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_211;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1double$$p_push_back(self,values[i_211]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_212=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1457, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1467, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1477, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__118 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_215;
struct list_item$1double$* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_217;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2274, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_217=0;    i_217<num_value;    i_217++    ){
        vector$1char$$p_add(self,values[i_217]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_218;
char* items_219;
void* __right_value128 = (void*)0;
int i_220;
struct vector$1char$* __result_obj__121;
memset(&i_220, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_218=self->size*2;
        items_219=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_218)), "./comelang.h", 2401, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_220=0;        i_220<self->size;        i_220++        ){
            self->items[i_220]=items_219[i_220];
        }
        self->size=new_size_218;
        come_free(items_219);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_222;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2274, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$p$p_add(self,values[i_222]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_223;
char** items_224;
void* __right_value132 = (void*)0;
int i_225;
struct vector$1char$p* __result_obj__124;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_223)), "./comelang.h", 2401, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
            (self->items[i_226] = come_decrement_ref_count2(self->items[i_226], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_227;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2274, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1short$$p_add(self,values[i_227]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_228;
short* items_229;
void* __right_value136 = (void*)0;
int i_230;
struct vector$1short$* __result_obj__127;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_228)), "./comelang.h", 2401, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_232;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2274, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1int$$p_add(self,values[i_232]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_233;
int* items_234;
void* __right_value140 = (void*)0;
int i_235;
struct vector$1int$* __result_obj__130;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_233)), "./comelang.h", 2401, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_237;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2274, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1long$$p_add(self,values[i_237]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_238;
long* items_239;
void* __right_value144 = (void*)0;
int i_240;
struct vector$1long$* __result_obj__133;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_238)), "./comelang.h", 2401, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_242;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2274, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1float$$p_add(self,values[i_242]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_243;
float* items_244;
void* __right_value148 = (void*)0;
int i_245;
struct vector$1float$* __result_obj__136;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_243)), "./comelang.h", 2401, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_247;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2274, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1double$$p_add(self,values[i_247]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_248;
double* items_249;
void* __right_value152 = (void*)0;
int i_250;
struct vector$1double$* __result_obj__139;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_248)), "./comelang.h", 2401, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
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
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__178;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_285;
struct list_item$1char$ph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer3(prev_it_286,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj28;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj29;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj30;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_290=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1457, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj28=litem_290->item;
        litem_290->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1467, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj29=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1477, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj30=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result_obj__180;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value260 = (void*)0;
char* __dec_obj33;
struct sReturnNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj32=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj33=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__237,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sReturnNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_345;
void* __right_value300 = (void*)0;
struct sType* result_type_346;
void* __right_value301 = (void*)0;
struct sType* result_type2_382;
struct sType* result_type3_383;
void* __right_value302 = (void*)0;
_Bool _if_conditional1;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj78;
_Bool Value_384;
_Bool __result_obj__254;
void* __right_value304 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value305 = (void*)0;
struct sType* come_value_type_386;
void* __right_value306 = (void*)0;
struct sType* __dec_obj79;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var1 = (void*)0;
_Bool come_exception_var_1_388=0;
char* Err_389=0;
_Bool _if_conditional2;
_Bool __result_obj__255;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __if_result__0_390 = (void*)0;
struct list$1void$ph* o2_saved_391;
struct sVar* it_394;
void* __right_value317 = (void*)0;
struct list$1void$ph* __dec_obj85;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sFun* come_fun_397;
void* __if_result__1_398 = (void*)0;
struct list$1void$ph* o2_saved_399;
struct sVar* it_400;
void* __right_value323 = (void*)0;
struct list$1void$ph* __dec_obj86;
void* __right_value324 = (void*)0;
    if(    self->value) {
        come_fun_345=info->come_fun;
        result_type_346=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_345->mResultType));
        result_type2_382=(struct sType*)come_increment_ref_count(solve_generics(result_type_346,info->generics_type,info));
        result_type3_383=result_type2_382->mNoSolvedGenericsType;
        if(        result_type2_382->mNoSolvedGenericsType) {
            result_type3_383=result_type2_382->mNoSolvedGenericsType;
        }
        else {
            result_type3_383=result_type2_382;
        }
        if(        result_type_346->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value302=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj78=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_384=node_compile(self->value,info);
        if(        !Value_384) {
            __result_obj__254 = (_Bool)0;
            come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__254;
        }
        else {
        }
        come_value_385=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_386=(struct sType*)come_increment_ref_count(solve_generics(come_value_385->type,info->generics_type,info));
        __dec_obj79=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_385->type));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_385->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_345->mBlock,info,come_value_385->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_385->c_value);
        }
        else {
            static int result_num_387=0;
            result_num_387++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value309=make_define_var(result_type2_382,((char*)(__right_value308=xsprintf("__result_obj__\%s",((char*)(__right_value307=int_to_string(result_num_387)))))),(_Bool)0,info))));
            (__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_382->mClass->mName)>strlen("tuple")&&memcmp(result_type2_382->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    multiple_assign_var1=((struct tuple2$2bool$char$ph*)(__right_value310=check_assign_type("result type",result_type2_382,come_value_type_386,come_value_385,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_1_388=multiple_assign_var1->v1;
                    Err_389=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    if(                    (_if_conditional2=(Err_389)),                    come_call_finalizer3(__right_value310,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional2) {
                        __result_obj__255 = (_Bool)1;
                        (Err_389 = come_decrement_ref_count2(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__255;
                    }
                    else {
                    }
                    (Err_389 = come_decrement_ref_count2(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                result_type2_382->mHeap) {
                    add_come_code(info,((char*)(__right_value312=xsprintf("__result_obj__\%s = come_increment_ref_count(%%s);\n",((char*)(__right_value311=int_to_string(result_num_387)))))),come_value_385->c_value);
                    (__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value314=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value313=int_to_string(result_num_387)))))),come_value_385->c_value);
                    (__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value316=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value315=int_to_string(result_num_387)))))),come_value_385->c_value);
                (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_345->mBlock,info,come_value_385->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_391=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_394=((struct sVar*)list$1void$ph$p_begin((o2_saved_391)));                    !list$1void$ph$p_end((o2_saved_391));                    it_394=((struct sVar*)list$1void$ph$p_next((o2_saved_391)))                    ){
                        free_object(((struct sType*)(__right_value317=come_call_cloner(sType_clone, it_394->mType))),it_394->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_391,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj85=info->match_it_var;
                    __if_result__0_390=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj85,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                come_call_finalizer3(__if_result__0_390,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value318=xsprintf("come_heap_final();\n"))));
                (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            if(            result_type2_382->mHeap) {
                free_object(result_type2_382,((char*)(__right_value320=xsprintf("__result_obj__\%s",((char*)(__right_value319=int_to_string(result_num_387)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value322=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value321=int_to_string(result_num_387)))))));
            (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_397=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_397->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_399=(struct list$1void$ph*)come_increment_ref_count((info->match_it_var)),it_400=((struct sVar*)list$1void$ph$p_begin((o2_saved_399)));                !list$1void$ph$p_end((o2_saved_399));                it_400=((struct sVar*)list$1void$ph$p_next((o2_saved_399)))                ){
                    free_object(((struct sType*)(__right_value323=come_call_cloner(sType_clone, it_400->mType))),it_400->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_399,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj86=info->match_it_var;
                __if_result__1_398=(void*)((struct list$1void$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj86,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            come_call_finalizer3(__if_result__1_398,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj34;
struct sNode* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj34=self->sname;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj35=self->value;
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->value) ? self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj36=self->value_source;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__239;
void* __right_value262 = (void*)0;
struct sType* result_364;
void* __right_value263 = (void*)0;
struct sType* __dec_obj54;
void* __right_value264 = (void*)0;
struct sType* __dec_obj55;
void* __right_value272 = (void*)0;
struct list$1void$ph* __dec_obj59;
void* __right_value273 = (void*)0;
struct sType* __dec_obj60;
void* __right_value274 = (void*)0;
struct sType* __dec_obj61;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value278 = (void*)0;
char* __dec_obj64;
void* __right_value279 = (void*)0;
char* __dec_obj65;
void* __right_value280 = (void*)0;
char* __dec_obj66;
void* __right_value288 = (void*)0;
struct list$1sNode$ph* __dec_obj70;
void* __right_value289 = (void*)0;
char* __dec_obj71;
void* __right_value290 = (void*)0;
struct list$1void$ph* __dec_obj72;
void* __right_value298 = (void*)0;
struct list$1char$ph* __dec_obj76;
void* __right_value299 = (void*)0;
struct sType* __dec_obj77;
struct sType* __result_obj__253;
    if(    self==(void*)0) {
        __result_obj__239 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__239,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__239;
    }
    result_364=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_364->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_364->mOriginalLoadVarType;
        result_364->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj55=result_364->mChannelType;
        result_364->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj59=result_364->mGenericsTypes;
        result_364->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj59,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_364->mNoSolvedGenericsType;
        result_364->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj61=result_364->mAnyOriginalType;
        result_364->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj62=result_364->mSizeNum;
        result_364->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj63=result_364->mAlignas;
        result_364->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj64=result_364->mTupleName;
        result_364->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj65=result_364->mAttribute;
        result_364->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_364->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_364->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_364->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_364->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_364->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_364->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_364->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_364->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_364->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_364->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_364->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_364->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_364->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_364->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_364->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_364->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_364->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_364->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_364->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_364->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_364->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_364->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_364->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj66=result_364->mAsmName;
        result_364->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_364->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_364->mArrayNum;
        result_364->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj71=result_364->mOriginalTypeName;
        result_364->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_364->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_364->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj72=result_364->mParamTypes;
        result_364->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj72,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj76=result_364->mParamNames;
        result_364->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj76,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj77=result_364->mResultType;
        result_364->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mVarArgs=self->mVarArgs;
    }
    __result_obj__253 = come_increment_ref_count(result_364);
    come_call_finalizer3(result_364,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__253,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct list$1void$ph* __dec_obj39;
struct sType* __dec_obj41;
struct sType* __dec_obj42;
struct sNode* __dec_obj43;
struct sNode* __dec_obj44;
char* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
struct list$1sNode$ph* __dec_obj48;
char* __dec_obj50;
struct list$1void$ph* __dec_obj51;
struct list$1char$ph* __dec_obj52;
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj38=self->mChannelType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj41=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj42=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj43=self->mSizeNum;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj44=self->mAlignas;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj45=self->mTupleName;
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj46=self->mAttribute;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj47=self->mAsmName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj48=self->mArrayNum;
            come_call_finalizer3(__dec_obj48,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj50=self->mOriginalTypeName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj51=self->mParamTypes;
            come_call_finalizer3(__dec_obj51,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj52=self->mParamNames;
            come_call_finalizer3(__dec_obj52,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj53=self->mResultType;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_347;
struct list_item$1void$ph* prev_it_348;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        prev_it_348=it_347;
        it_347=it_347->next;
        come_call_finalizer3(prev_it_348,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
void* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_349;
struct list_item$1void$ph* prev_it_350;
    it_349=self->head;
    while(it_349!=((void*)0)) {
        prev_it_350=it_349;
        it_349=it_349->next;
        come_call_finalizer3(prev_it_350,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_351;
struct list_item$1sNode$ph* prev_it_352;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
struct sNode* __dec_obj49;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj49=self->item;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_353;
struct list_item$1sNode$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_355;
struct list_item$1char$ph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_357;
    result_357=0;
    result_357+=int_get_hash_key(((int)self->mClass));
    result_357+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_357+=int_get_hash_key(((int)self->mChannelType));
    result_357+=int_get_hash_key(((int)self->mGenericsTypes));
    result_357+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_357+=int_get_hash_key(((int)self->mAnyClass));
    result_357+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_357+=int_get_hash_key(((int)self->mSizeNum));
    result_357+=int_get_hash_key(((int)self->mAlignas));
    result_357+=int_get_hash_key(((int)self->mTupleName));
    result_357+=int_get_hash_key(((int)self->mAttribute));
    result_357+=int_get_hash_key(((int)self->mAllocaValue));
    result_357+=int_get_hash_key(((int)self->mUnsigned));
    result_357+=int_get_hash_key(((int)self->mShort));
    result_357+=int_get_hash_key(((int)self->mLong));
    result_357+=int_get_hash_key(((int)self->mLongLong));
    result_357+=int_get_hash_key(((int)self->mConstant));
    result_357+=int_get_hash_key(((int)self->mAtomic));
    result_357+=int_get_hash_key(((int)self->mRegister));
    result_357+=int_get_hash_key(((int)self->mVolatile));
    result_357+=int_get_hash_key(((int)self->mStatic));
    result_357+=int_get_hash_key(((int)self->mUniq));
    result_357+=int_get_hash_key(((int)self->mRecord));
    result_357+=int_get_hash_key(((int)self->mExtern));
    result_357+=int_get_hash_key(((int)self->mRestrict));
    result_357+=int_get_hash_key(((int)self->mImmutable));
    result_357+=int_get_hash_key(((int)self->mHeap));
    result_357+=int_get_hash_key(((int)self->mChannel));
    result_357+=int_get_hash_key(((int)self->mNoHeap));
    result_357+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_357+=int_get_hash_key(((int)self->mException));
    result_357+=int_get_hash_key(((int)self->mGenerate));
    result_357+=int_get_hash_key(((int)self->mCreateVTable));
    result_357+=int_get_hash_key(((int)self->mDynamic));
    result_357+=int_get_hash_key(((int)self->mInline));
    result_357+=int_get_hash_key(((int)self->mNullValue));
    result_357+=int_get_hash_key(((int)self->mGuardValue));
    result_357+=int_get_hash_key(((int)self->mAsmName));
    result_357+=int_get_hash_key(((int)self->mTypedef));
    result_357+=int_get_hash_key(((int)self->mMultipleTypes));
    result_357+=int_get_hash_key(((int)self->mOriginIsArray));
    result_357+=int_get_hash_key(((int)self->mArrayNum));
    result_357+=int_get_hash_key(((int)self->mPointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_357+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_357+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_357+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_357+=int_get_hash_key(((int)self->mArrayPointerType));
    result_357+=int_get_hash_key(((int)self->mLambdaArray));
    result_357+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_357+=int_get_hash_key(((int)self->mParamTypes));
    result_357+=int_get_hash_key(((int)self->mParamNames));
    result_357+=int_get_hash_key(((int)self->mResultType));
    result_357+=int_get_hash_key(((int)self->mVarArgs));
    return result_357;
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
struct list_item$1void$ph* it_358;
struct list_item$1void$ph* it2_359;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_358=left->head;
    it2_359=right->head;
    while(it_358!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_358->item, it2_359->item)) {
            return (_Bool)0;
        }
        it_358=it_358->next;
        it2_359=it2_359->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_360;
struct list_item$1sNode$ph* it2_361;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_360=left->head;
    it2_361=right->head;
    while(it_360!=((void*)0)) {
        if(        !sNode_equals(it_360->item,it2_361->item)) {
            return (_Bool)0;
        }
        it_360=it_360->next;
        it2_361=it2_361->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_362;
struct list_item$1char$ph* it2_363;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_362=left->head;
    it2_363=right->head;
    while(it_362!=((void*)0)) {
        if(        !string_equals(it_362->item,it2_363->item)) {
            return (_Bool)0;
        }
        it_362=it_362->next;
        it2_363=it2_363->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__240;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1void$ph* result_366;
struct list_item$1void$ph* it_367;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1void$ph* __result_obj__243;
    if(    self==((void*)0)) {
        __result_obj__240 = come_increment_ref_count(((void*)0));
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__240,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_366=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_367=self->head;
    while(it_367!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_366,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_367->item)));
        }
        else {
            list$1void$ph$p_add(result_366,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_367->item)));
        }
        it_367=it_367->next;
    }
    __result_obj__243 = come_increment_ref_count(result_366);
    come_call_finalizer3(result_366,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__243,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_365;
    result_365=0;
    result_365+=int_get_hash_key(((int)self->head));
    result_365+=int_get_hash_key(((int)self->tail));
    result_365+=int_get_hash_key(((int)self->len));
    result_365+=int_get_hash_key(((int)self->it));
    return result_365;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__241;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__241,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value267 = (void*)0;
struct list_item$1void$ph* litem_368;
void* __dec_obj56;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_369;
void* __dec_obj57;
void* __right_value269 = (void*)0;
struct list_item$1void$ph* litem_370;
void* __dec_obj58;
struct list$1void$ph* __result_obj__242;
    if(    self->len==0) {
        litem_368=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value267=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj56=litem_368->item;
        litem_368->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value268=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj57=litem_369->item;
        litem_369->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value269=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj58=litem_370->item;
        litem_370->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result_obj__242 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__242;
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__244;
void* __right_value275 = (void*)0;
struct sNode* result_371;
struct sNode* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count2(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
    }
    result_371=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_371->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_371->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_371->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_371->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_371->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_371->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_371->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_371->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_371->kind=self->kind;
    }
    __result_obj__245 = come_increment_ref_count(result_371);
    ((result_371) ? result_371 = come_decrement_ref_count2(result_371, ((struct sNode*)result_371)->finalize, ((struct sNode*)result_371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count2(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__245;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__246;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* result_372;
struct list_item$1sNode$ph* it_373;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__246,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_372=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_373=self->head;
    while(it_373!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_372,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_373->item)));
        }
        else {
            list$1sNode$ph$p_add(result_372,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_373->item)));
        }
        it_373=it_373->next;
    }
    __result_obj__249 = come_increment_ref_count(result_372);
    come_call_finalizer3(result_372,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
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
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__247,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value283 = (void*)0;
struct list_item$1sNode$ph* litem_374;
struct sNode* __dec_obj67;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_375;
struct sNode* __dec_obj68;
void* __right_value285 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj69;
struct list$1sNode$ph* __result_obj__248;
    if(    self->len==0) {
        litem_374=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value283=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=((void*)0);
        litem_374->next=((void*)0);
        __dec_obj67=litem_374->item;
        litem_374->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_374;
        self->head=litem_374;
    }
    else if(    self->len==1) {
        litem_375=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=self->head;
        litem_375->next=((void*)0);
        __dec_obj68=litem_375->item;
        litem_375->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_375;
        self->head->next=litem_375;
    }
    else {
        litem_376=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value285=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->tail;
        litem_376->next=((void*)0);
        __dec_obj69=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_376;
        self->tail=litem_376;
    }
    self->len++;
    __result_obj__248 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__248;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__250;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1char$ph* result_377;
struct list_item$1char$ph* it_378;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1char$ph* __result_obj__252;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__250,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_377=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_378=self->head;
    while(it_378!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_377,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_378->item)));
        }
        else {
            list$1char$ph$p_add(result_377,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_378->item)));
        }
        it_378=it_378->next;
    }
    __result_obj__252 = come_increment_ref_count(result_377);
    come_call_finalizer3(result_377,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_379;
char* __dec_obj73;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_380;
char* __dec_obj74;
void* __right_value295 = (void*)0;
struct list_item$1char$ph* litem_381;
char* __dec_obj75;
struct list$1char$ph* __result_obj__251;
    if(    self->len==0) {
        litem_379=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value293=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj73=litem_379->item;
        litem_379->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj74=litem_380->item;
        litem_380->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value295=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj75=litem_381->item;
        litem_381->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result_obj__251 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result_obj__251;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
char* __dec_obj80;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj80=self->v2;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj81;
struct sType* __dec_obj82;
char* __dec_obj83;
char* __dec_obj84;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj81=self->c_value;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj82=self->type;
            come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj83=self->c_value_without_right_value_objects;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj84=self->c_value_without_cast_object_value;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_392;
void* __result_obj__256;
void* __result_obj__257;
void* result_393;
void* __result_obj__258;
result_392 = (void*)0;
result_393 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_392,0,sizeof(void*));
        __result_obj__256 = result_392;
        gComeFunResultObject = (void*)0;
        return __result_obj__256;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__257 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__257;
    }
    memset(&result_393,0,sizeof(void*));
    __result_obj__258 = result_393;
    gComeFunResultObject = (void*)0;
    return __result_obj__258;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_395;
void* __result_obj__259;
void* __result_obj__260;
void* result_396;
void* __result_obj__261;
result_395 = (void*)0;
result_396 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_395,0,sizeof(void*));
        __result_obj__259 = result_395;
        gComeFunResultObject = (void*)0;
        return __result_obj__259;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__260 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__260;
    }
    memset(&result_396,0,sizeof(void*));
    __result_obj__261 = result_396;
    gComeFunResultObject = (void*)0;
    return __result_obj__261;
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value325 = (void*)0;
char* __dec_obj87;
struct sOutputNode* __result_obj__262;
    ((struct sNodeBase*)(__right_value325=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value325,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj87=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__262 = come_increment_ref_count(self);
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    (contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__262,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__262;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value326 = (void*)0;
char* __result_obj__263;
    __result_obj__263 = come_increment_ref_count(((char*)(__right_value326=__builtin_string("sOutputNode"))));
    (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__263 = come_decrement_ref_count2(__result_obj__263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__263;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj88;
char* __dec_obj89;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj88=self->sname;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj89=self->contents;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value327 = (void*)0;
char* __dec_obj90;
struct list$1sNode$ph* __dec_obj91;
struct sInlineAssembler* __result_obj__264;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value327,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj90=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=self->exps;
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj91,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__264 = come_increment_ref_count(self);
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    (source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__264,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value328 = (void*)0;
char* __result_obj__265;
    __result_obj__265 = come_increment_ref_count(((char*)(__right_value328=__builtin_string("sInlineAssembler"))));
    (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__265 = come_decrement_ref_count2(__result_obj__265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__265;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_401;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct buffer* buf_403;
char* p_404;
_Bool dquort_405;
int num_exp_406;
void* __right_value333 = (void*)0;
struct sNode* node_407;
_Bool Value_411;
_Bool __result_obj__268;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* __dec_obj95;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* __dec_obj96;
_Bool __result_obj__270;
    source_401=(char*)come_increment_ref_count(self->source);
    come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 193, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_403=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 195, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_404=source_401;
    while(*p_404!=40) {
        buffer_append_char(buf_403,*p_404);
        p_404++;
    }
    if(    *p_404==40) {
        buffer_append_char(buf_403,*p_404);
        p_404++;
        while(*p_404==32||*p_404==9||*p_404==10) {
            buffer_append_char(buf_403,*p_404);
            p_404++;
        }
    }
    dquort_405=(_Bool)0;
    num_exp_406=0;
    while(*p_404) {
        if(        *p_404==34) {
            buffer_append_char(buf_403,*p_404);
            p_404++;
            dquort_405=!dquort_405;
        }
        else if(        dquort_405) {
            buffer_append_char(buf_403,*p_404);
            p_404++;
        }
        else if(        *p_404==40) {
            buffer_append_char(buf_403,*p_404);
            p_404++;
            node_407=(struct sNode*)come_increment_ref_count(list$1sNode$ph$p_operator_load_element(self->exps,num_exp_406++));
            Value_411=node_compile(node_407,info);
            if(            !Value_411) {
                __result_obj__268 = (_Bool)0;
                ((node_407) ? node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_401 = come_decrement_ref_count2(source_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__268;
            }
            else {
            }
            come_value_412=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_403,come_value_412->c_value);
            if(            *p_404==41) {
                buffer_append_char(buf_403,*p_404);
                p_404++;
            }
            ((node_407) ? node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_403,*p_404);
            p_404++;
        }
    }
    __dec_obj95=come_value_402->c_value;
    come_value_402->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value335=buffer_to_string(buf_403)))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj96=come_value_402->type;
    come_value_402->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 253, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_402->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
    add_come_last_code(info,"%s",come_value_402->c_value);
    __result_obj__270 = (_Bool)1;
    (source_401 = come_decrement_ref_count2(source_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__270;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj92;
char* __dec_obj93;
struct list$1sNode$ph* __dec_obj94;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj92=self->sname;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj93=self->source;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj94=self->exps;
            come_call_finalizer3(__dec_obj94,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_408;
int i_409;
struct sNode* __result_obj__266;
struct sNode* default_value_410;
struct sNode* __result_obj__267;
default_value_410 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_408=self->head;
    i_409=0;
    while(it_408!=((void*)0)) {
        if(        position==i_409) {
            __result_obj__266 = come_increment_ref_count(it_408->item);
            gComeFunResultObject = (void*)0;
            ((__result_obj__266) ? __result_obj__266 = come_decrement_ref_count2(__result_obj__266, ((struct sNode*)__result_obj__266)->finalize, ((struct sNode*)__result_obj__266)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__266;
        }
        it_408=it_408->next;
        i_409++;
    }
    memset(&default_value_410,0,sizeof(struct sNode*));
    __result_obj__267 = come_increment_ref_count(default_value_410);
    ((default_value_410) ? default_value_410 = come_decrement_ref_count2(default_value_410, ((struct sNode*)default_value_410)->finalize, ((struct sNode*)default_value_410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__267) ? __result_obj__267 = come_decrement_ref_count2(__result_obj__267, ((struct sNode*)__result_obj__267)->finalize, ((struct sNode*)__result_obj__267)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__267;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value339 = (void*)0;
struct list_item$1CVALUE$ph* litem_413;
struct CVALUE* __dec_obj97;
void* __right_value340 = (void*)0;
struct list_item$1CVALUE$ph* litem_414;
struct CVALUE* __dec_obj98;
void* __right_value341 = (void*)0;
struct list_item$1CVALUE$ph* litem_415;
struct CVALUE* __dec_obj99;
struct list$1CVALUE$ph* __result_obj__269;
    if(    self->len==0) {
        litem_413=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value339=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1457, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=((void*)0);
        litem_413->next=((void*)0);
        __dec_obj97=litem_413->item;
        litem_413->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_413;
        self->head=litem_413;
    }
    else if(    self->len==1) {
        litem_414=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value340=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1467, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=self->head;
        litem_414->next=((void*)0);
        __dec_obj98=litem_414->item;
        litem_414->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_414;
        self->head->next=litem_414;
    }
    else {
        litem_415=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value341=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1477, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=self->tail;
        litem_415->next=((void*)0);
        __dec_obj99=litem_415->item;
        litem_415->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_415;
        self->tail=litem_415;
    }
    self->len++;
    __result_obj__269 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__269;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value342 = (void*)0;
struct sCurrentNode2* __result_obj__271;
    ((struct sNodeBase*)(__right_value342=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value342,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__271 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__271,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value343 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = come_increment_ref_count(((char*)(__right_value343=__builtin_string(self->sname))));
    (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__272 = come_decrement_ref_count2(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value344 = (void*)0;
char* __result_obj__273;
    __result_obj__273 = come_increment_ref_count(((char*)(__right_value344=__builtin_string("sCurrentNode"))));
    (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__273 = come_decrement_ref_count2(__result_obj__273, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__273;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value345 = (void*)0;
char* class_name_416;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sClass* current_stack_417;
struct sVarTable* vtable_420;
struct map$2void$phvoid$ph* o2_saved_421;
char* it_424;
char* key_427;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sVar* value_428;
void* __right_value355 = (void*)0;
struct sType* type2_432;
void* __right_value356 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct tuple2$2char$phsType$ph* item_433;
void* __right_value362 = (void*)0;
struct sType* type3_436;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple2$2char$phsType$ph* item2_439;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct map$2void$phvoid$ph* o2_saved_487;
char* it_488;
char* key_489;
void* __right_value379 = (void*)0;
struct sVar* value_490;
void* __right_value380 = (void*)0;
struct sType* type2_491;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct tuple2$2char$phsType$ph* item_492;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_493;
void* __right_value385 = (void*)0;
char* __dec_obj120;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sType* __dec_obj121;
_Bool __result_obj__307;
    info->current_stack_num++;
    class_name_416=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_417=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),class_name_416,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_420=info->lv_table;
    while(vtable_420) {
        for(        o2_saved_421=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_420->mVars)),it_424=((char*)map$2void$phvoid$ph$p_begin((o2_saved_421)));        !map$2void$phvoid$ph$p_end((o2_saved_421));        it_424=((char*)map$2void$phvoid$ph$p_next((o2_saved_421)))        ){
            key_427=it_424;
            value_428=((struct sVar*)((void*)(__right_value354=map$2void$phvoid$ph$p_operator_load_element(vtable_420->mVars,((char*)(__right_value353=__builtin_string(key_427)))))));
            (__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value354,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_428->mType));
            type2_432->mPointerNum++;
            item_433=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 438, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_428->mCValueName)),(struct sType*)come_increment_ref_count(type2_432)));
            if(            value_428->mCValueName!=((void*)0)) {
                if(                strcmp(value_428->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_428->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_428->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_428->mType->mClass->mName,"va_list")||string_operator_equals(value_428->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_432->mArrayNum)==1) {
                    type3_436=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_432));
                    list$1sNode$ph$p_reset(type3_436->mArrayNum);
                    type3_436->mPointerNum=1;
                    type3_436->mOriginIsArray=(_Bool)1;
                    item2_439=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 458, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_428->mCValueName)),(struct sType*)come_increment_ref_count(type3_436)));
                    list$1void$ph$p_push_back(current_stack_417->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_439)));
                    value_428->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_436,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_439,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1void$ph$p_push_back(current_stack_417->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_433)));
                }
            }
            come_call_finalizer3(type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_433,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_421,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_420=vtable_420->mParent;
    }
    output_struct(current_stack_417,info);
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_416),(struct sClass*)come_increment_ref_count(current_stack_417));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_416,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_416);
    vtable_420=info->lv_table;
    while(vtable_420) {
        for(        o2_saved_487=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_420->mVars)),it_488=((char*)map$2void$phvoid$ph$p_begin((o2_saved_487)));        !map$2void$phvoid$ph$p_end((o2_saved_487));        it_488=((char*)map$2void$phvoid$ph$p_next((o2_saved_487)))        ){
            key_489=it_488;
            value_490=((struct sVar*)((void*)(__right_value379=map$2void$phvoid$ph$p_operator_load_element(vtable_420->mVars,key_489))));
            come_call_finalizer3(__right_value379,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_491=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_490->mType));
            item_492=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 487, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_490->mCValueName),(struct sType*)come_increment_ref_count(type2_491)));
            if(            value_490->mCValueName!=((void*)0)) {
                if(                strcmp(value_490->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_490->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_490->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_490->mType->mClass->mName,"va_list")||string_operator_equals(value_490->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_491->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_490->mCValueName,value_490->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_490->mCValueName,value_490->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_491,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_492,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_487,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_420=vtable_420->mParent;
    }
    come_value_493=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj120=come_value_493->c_value;
    come_value_493->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=come_value_493->type;
    come_value_493->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),class_name_416,(_Bool)0,info));
    come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_493->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_493->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_493));
    __result_obj__307 = (_Bool)1;
    (class_name_416 = come_decrement_ref_count2(class_name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_417,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__307;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj100;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj100=self->sname;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj101;
struct list$1void$ph* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj101=self->mName;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj102=self->mFields;
            come_call_finalizer3(__dec_obj102,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj103=self->mParentClassName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj104=self->mAttribute;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__274;
void* __right_value346 = (void*)0;
struct sClass* result_419;
void* __right_value347 = (void*)0;
char* __dec_obj105;
void* __right_value348 = (void*)0;
struct list$1void$ph* __dec_obj106;
void* __right_value349 = (void*)0;
char* __dec_obj107;
void* __right_value350 = (void*)0;
char* __dec_obj108;
struct sClass* __result_obj__275;
    if(    self==(void*)0) {
        __result_obj__274 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__274,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__274;
    }
    result_419=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_419->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_419->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_419->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_419->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_419->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_419->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_419->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_419->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj105=result_419->mName;
        result_419->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_419->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj106=result_419->mFields;
        result_419->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj106,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj107=result_419->mParentClassName;
        result_419->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj108=result_419->mAttribute;
        result_419->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->mDynamic=self->mDynamic;
    }
    __result_obj__275 = come_increment_ref_count(result_419);
    come_call_finalizer3(result_419,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__275,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__275;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_418;
    result_418=0;
    result_418+=int_get_hash_key(((int)self->mStruct));
    result_418+=int_get_hash_key(((int)self->mFloat));
    result_418+=int_get_hash_key(((int)self->mUnion));
    result_418+=int_get_hash_key(((int)self->mGenerics));
    result_418+=int_get_hash_key(((int)self->mMethodGenerics));
    result_418+=int_get_hash_key(((int)self->mEnum));
    result_418+=int_get_hash_key(((int)self->mProtocol));
    result_418+=int_get_hash_key(((int)self->mNumber));
    result_418+=int_get_hash_key(((int)self->mName));
    result_418+=int_get_hash_key(((int)self->mGenericsNum));
    result_418+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_418+=int_get_hash_key(((int)self->mFields));
    result_418+=int_get_hash_key(((int)self->mParentClassName));
    result_418+=int_get_hash_key(((int)self->mAttribute));
    result_418+=int_get_hash_key(((int)self->mDynamic));
    return result_418;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_422;
void* __result_obj__276;
void* __result_obj__277;
void* result_423;
void* __result_obj__278;
result_422 = (void*)0;
result_423 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_422,0,sizeof(void*));
        __result_obj__276 = result_422;
        gComeFunResultObject = (void*)0;
        return __result_obj__276;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__277 = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__277;
    }
    memset(&result_423,0,sizeof(void*));
    __result_obj__278 = result_423;
    gComeFunResultObject = (void*)0;
    return __result_obj__278;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_425;
void* __result_obj__279;
void* __result_obj__280;
void* result_426;
void* __result_obj__281;
result_425 = (void*)0;
result_426 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_425,0,sizeof(void*));
        __result_obj__279 = result_425;
        gComeFunResultObject = (void*)0;
        return __result_obj__279;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__280 = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__280;
    }
    memset(&result_426,0,sizeof(void*));
    __result_obj__281 = result_426;
    gComeFunResultObject = (void*)0;
    return __result_obj__281;
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_429;
unsigned int hash_430;
unsigned int it_431;
void* __result_obj__282;
void* __result_obj__283;
void* __result_obj__284;
void* __result_obj__285;
default_value_429 = (void*)0;
    memset(&default_value_429,0,sizeof(void*));
    hash_430=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_431=hash_430;
    while((_Bool)1) {
        if(        self->item_existance[it_431]) {
            if(            come_call_equals((void*)0, self->keys[it_431], ((char*)key))) {
                __result_obj__282 = come_increment_ref_count(self->items[it_431]);
                come_call_finalizer3(default_value_429,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                come_call_finalizer3(__result_obj__282,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__282;
            }
            it_431++;
            if(            it_431>=self->size) {
                it_431=0;
            }
            else if(            it_431==hash_430) {
                __result_obj__283 = come_increment_ref_count(((struct sVar*)default_value_429));
                come_call_finalizer3(default_value_429,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                come_call_finalizer3(__result_obj__283,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__283;
            }
        }
        else {
            __result_obj__284 = come_increment_ref_count(((struct sVar*)default_value_429));
            come_call_finalizer3(default_value_429,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            come_call_finalizer3(__result_obj__284,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__284;
        }
    }
    __result_obj__285 = come_increment_ref_count(((struct sVar*)default_value_429));
    come_call_finalizer3(default_value_429,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__285,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__285;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj109;
struct sType* __dec_obj110;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj109=self->v1;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj110=self->v2;
            come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__286;
void* __right_value357 = (void*)0;
struct tuple2$2char$phsType$ph* result_434;
void* __right_value358 = (void*)0;
char* __dec_obj111;
void* __right_value359 = (void*)0;
struct sType* __dec_obj112;
struct tuple2$2char$phsType$ph* __result_obj__287;
    if(    self==(void*)0) {
        __result_obj__286 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__286,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__286;
    }
    result_434=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj111=result_434->v1;
        result_434->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj112=result_434->v2;
        result_434->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__287 = come_increment_ref_count(result_434);
    come_call_finalizer3(result_434,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__287,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__287;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_435;
    result_435=0;
    result_435+=int_get_hash_key(((int)self->v1));
    result_435+=int_get_hash_key(((int)self->v2));
    return result_435;
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
char* __dec_obj113;
struct sType* __dec_obj114;
struct tuple2$2char$phsType$ph* __result_obj__288;
    __dec_obj113=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__288 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__288,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__288;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj115;
struct sType* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_437;
struct list_item$1sNode$ph* prev_it_438;
struct list$1sNode$ph* __result_obj__289;
    it_437=self->head;
    while(it_437!=((void*)0)) {
        prev_it_438=it_437;
        it_437=it_437->next;
        come_call_finalizer3(prev_it_438,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__289 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__289;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value366 = (void*)0;
struct list_item$1void$ph* litem_440;
void* __dec_obj117;
void* __right_value367 = (void*)0;
struct list_item$1void$ph* litem_441;
void* __dec_obj118;
void* __right_value368 = (void*)0;
struct list_item$1void$ph* litem_442;
void* __dec_obj119;
struct list$1void$ph* __result_obj__290;
    if(    self->len==0) {
        litem_440=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value366=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_440->prev=((void*)0);
        litem_440->next=((void*)0);
        __dec_obj117=litem_440->item;
        litem_440->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_440;
        self->head=litem_440;
    }
    else if(    self->len==1) {
        litem_441=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value367=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_441->prev=self->head;
        litem_441->next=((void*)0);
        __dec_obj118=litem_441->item;
        litem_441->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_441;
        self->head->next=litem_441;
    }
    else {
        litem_442=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value368=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_442->prev=self->tail;
        litem_442->next=((void*)0);
        __dec_obj119=litem_442->item;
        litem_442->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_442;
        self->tail=litem_442;
    }
    self->len++;
    __result_obj__290 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__290;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_443;
int i_444;
    for(    i_443=0;    i_443<self->size;    i_443++    ){
        if(        self->item_existance[i_443]) {
            if(            1) {
                come_call_finalizer3(self->items[i_443],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_444=0;    i_444<self->size;    i_444++    ){
        if(        self->item_existance[i_444]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_444],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_445;
struct list_item$1void$p* prev_it_446;
    it_445=self->head;
    while(it_445!=((void*)0)) {
        prev_it_446=it_445;
        it_445=it_445->next;
        come_call_finalizer3(prev_it_446,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_460;
unsigned int it_461;
_Bool same_key_exist_478;
char* it2_481;
struct map$2void$phvoid$ph* __result_obj__306;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_460=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_461=hash_460;
    while((_Bool)1) {
        if(        self->item_existance[it_461]) {
            if(            come_call_equals((void*)0, self->keys[it_461], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_461]);
                    come_call_finalizer3(self->keys[it_461],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_461]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_461]);
                    self->keys[it_461]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_461],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_461]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_461]=item;
                }
                break;
            }
            it_461++;
            if(            it_461>=self->size) {
                it_461=0;
            }
            else if(            it_461==hash_460) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_461]=(_Bool)1;
            if(            1) {
                self->keys[it_461]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_461]=key;
            }
            if(            1) {
                self->items[it_461]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_461]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_478=(_Bool)0;
    for(    it2_481=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_481=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_481, key)) {
            same_key_exist_478=(_Bool)1;
        }
    }
    if(    !same_key_exist_478) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__306 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__306;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_447;
void* __right_value371 = (void*)0;
void** keys_448;
void* __right_value372 = (void*)0;
void** items_449;
void* __right_value373 = (void*)0;
_Bool* item_existance_450;
int len_451;
void* it_452;
void* default_value_453;
void* __right_value374 = (void*)0;
void* it2_454;
unsigned int hash_457;
int n_458;
void* default_value_459;
void* __right_value375 = (void*)0;
default_value_453 = (void*)0;
default_value_459 = (void*)0;
    size_447=self->size*10;
    keys_448=(void**)come_increment_ref_count(((void**)(__right_value371=(void**)come_calloc(1, sizeof(void*)*(1*(size_447)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_449=(void**)come_increment_ref_count(((void**)(__right_value372=(void**)come_calloc(1, sizeof(void*)*(1*(size_447)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_450=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value373=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_447)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_451=0;
    for(    it_452=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_452=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_453,0,sizeof(void*));
        it2_454=((void*)(__right_value374=map$2void$phvoid$ph$p_at(self,it_452,(void*)come_increment_ref_count(default_value_453))));
        come_call_finalizer3(__right_value374,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_457=come_call_get_hash_key((void*)0, ((void*)it_452))%size_447;
        n_458=hash_457;
        while((_Bool)1) {
            if(            item_existance_450[n_458]) {
                n_458++;
                if(                n_458>=size_447) {
                    n_458=0;
                }
                else if(                n_458==hash_457) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_450[n_458]=(_Bool)1;
                keys_448[n_458]=it_452;
                items_449[n_458]=((void*)(__right_value375=map$2void$phvoid$ph$p_at(self,it_452,(void*)come_increment_ref_count(default_value_459))));
                come_call_finalizer3(__right_value375,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_451++;
                come_call_finalizer3(default_value_459,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_459,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_453,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_448;
    self->items=items_449;
    self->item_existance=item_existance_450;
    self->size=size_447;
    self->len=len_451;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_455;
unsigned int it_456;
void* __result_obj__291;
void* __result_obj__292;
void* __result_obj__293;
void* __result_obj__294;
    hash_455=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_456=hash_455;
    while((_Bool)1) {
        if(        self->item_existance[it_456]) {
            if(            come_call_equals((void*)0, self->keys[it_456], key)) {
                __result_obj__291 = come_increment_ref_count(self->items[it_456]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                come_call_finalizer3(__result_obj__291,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__291;
            }
            it_456++;
            if(            it_456>=self->size) {
                it_456=0;
            }
            else if(            it_456==hash_455) {
                __result_obj__292 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                come_call_finalizer3(__result_obj__292,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__292;
            }
        }
        else {
            __result_obj__293 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            come_call_finalizer3(__result_obj__293,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__293;
        }
    }
    __result_obj__294 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__294,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__294;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_462;
struct list_item$1void$p* it_463;
struct list$1void$p* __result_obj__298;
    it2_462=0;
    it_463=self->head;
    while(it_463!=((void*)0)) {
        if(        come_call_equals((void*)0, it_463->item, item)) {
            list$1void$p$p_delete(self,it2_462,it2_462+1);
            break;
        }
        it2_462++;
        it_463=it_463->next;
    }
    __result_obj__298 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__298;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_464;
struct list$1void$p* __result_obj__295;
struct list_item$1void$p* it_467;
int i_468;
struct list_item$1void$p* prev_it_469;
struct list_item$1void$p* it_470;
int i_471;
struct list_item$1void$p* prev_it_472;
struct list_item$1void$p* it_473;
struct list_item$1void$p* head_prev_it_474;
struct list_item$1void$p* tail_it_475;
int i_476;
struct list_item$1void$p* prev_it_477;
struct list$1void$p* __result_obj__297;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_464=tail;
        tail=head;
        head=tmp_464;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__295 = self;
        gComeFunResultObject = (void*)0;
        return __result_obj__295;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_467=self->head;
        i_468=0;
        while(it_467!=((void*)0)) {
            if(            i_468<tail) {
                prev_it_469=it_467;
                it_467=it_467->next;
                i_468++;
                come_call_finalizer3(prev_it_469,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_468==tail) {
                self->head=it_467;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_467=it_467->next;
                i_468++;
            }
        }
    }
    else if(    tail==self->len) {
        it_470=self->head;
        i_471=0;
        while(it_470!=((void*)0)) {
            if(            i_471==head) {
                self->tail=it_470->prev;
                self->tail->next=((void*)0);
            }
            if(            i_471>=head) {
                prev_it_472=it_470;
                it_470=it_470->next;
                i_471++;
                come_call_finalizer3(prev_it_472,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_470=it_470->next;
                i_471++;
            }
        }
    }
    else {
        it_473=self->head;
        head_prev_it_474=((void*)0);
        tail_it_475=((void*)0);
        i_476=0;
        while(it_473!=((void*)0)) {
            if(            i_476==head) {
                head_prev_it_474=it_473->prev;
            }
            if(            i_476==tail) {
                tail_it_475=it_473;
            }
            if(            i_476>=head&&i_476<tail) {
                prev_it_477=it_473;
                it_473=it_473->next;
                i_476++;
                come_call_finalizer3(prev_it_477,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_473=it_473->next;
                i_476++;
            }
        }
        if(        head_prev_it_474!=((void*)0)) {
            head_prev_it_474->next=tail_it_475;
        }
        if(        tail_it_475!=((void*)0)) {
            tail_it_475->prev=head_prev_it_474;
        }
    }
    __result_obj__297 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__297;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_465;
struct list_item$1void$p* prev_it_466;
struct list$1void$p* __result_obj__296;
    it_465=self->head;
    while(it_465!=((void*)0)) {
        prev_it_466=it_465;
        it_465=it_465->next;
        come_call_finalizer3(prev_it_466,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__296 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__296;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_479;
void* __result_obj__299;
void* __result_obj__300;
void* result_480;
void* __result_obj__301;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(void*));
        __result_obj__299 = result_479;
        gComeFunResultObject = (void*)0;
        return __result_obj__299;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__300;
    }
    memset(&result_480,0,sizeof(void*));
    __result_obj__301 = result_480;
    gComeFunResultObject = (void*)0;
    return __result_obj__301;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_482;
void* __result_obj__302;
void* __result_obj__303;
void* result_483;
void* __result_obj__304;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(void*));
        __result_obj__302 = result_482;
        gComeFunResultObject = (void*)0;
        return __result_obj__302;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__303 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__303;
    }
    memset(&result_483,0,sizeof(void*));
    __result_obj__304 = result_483;
    gComeFunResultObject = (void*)0;
    return __result_obj__304;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value376 = (void*)0;
struct list_item$1void$p* litem_484;
void* __right_value377 = (void*)0;
struct list_item$1void$p* litem_485;
void* __right_value378 = (void*)0;
struct list_item$1void$p* litem_486;
struct list$1void$p* __result_obj__305;
    if(    self->len==0) {
        litem_484=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value376=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_484->prev=((void*)0);
        litem_484->next=((void*)0);
        litem_484->item=item;
        self->tail=litem_484;
        self->head=litem_484;
    }
    else if(    self->len==1) {
        litem_485=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value377=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_485->prev=self->head;
        litem_485->next=((void*)0);
        litem_485->item=item;
        self->tail=litem_485;
        self->head->next=litem_485;
    }
    else {
        litem_486=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value378=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_486->prev=self->tail;
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail->next=litem_486;
        self->tail=litem_486;
    }
    self->len++;
    __result_obj__305 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__305;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value388 = (void*)0;
struct sLineNode* __result_obj__308;
    ((struct sNodeBase*)(__right_value388=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value388,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__308 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__308,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value389 = (void*)0;
char* __result_obj__309;
    __result_obj__309 = come_increment_ref_count(((char*)(__right_value389=__builtin_string("sLineNode"))));
    (__right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__309 = come_decrement_ref_count2(__result_obj__309, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__309;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct CVALUE* come_value_494;
void* __right_value392 = (void*)0;
char* __dec_obj123;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* __dec_obj124;
_Bool __result_obj__310;
    come_value_494=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 283, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj123=come_value_494->c_value;
    come_value_494->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=come_value_494->type;
    come_value_494->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 286, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_494->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_494));
    add_come_last_code(info,"%s",come_value_494->c_value);
    __result_obj__310 = (_Bool)1;
    come_call_finalizer3(come_value_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__310;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj122;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj122=self->sname;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value395 = (void*)0;
struct sSNameNode* __result_obj__311;
    ((struct sNodeBase*)(__right_value395=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value395,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__311 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__311,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value396 = (void*)0;
char* __result_obj__312;
    __result_obj__312 = come_increment_ref_count(((char*)(__right_value396=__builtin_string("sSNameNode"))));
    (__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__312 = come_decrement_ref_count2(__result_obj__312, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__312;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_495;
void* __right_value399 = (void*)0;
char* __dec_obj126;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* __dec_obj127;
_Bool __result_obj__313;
    come_value_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 311, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj126=come_value_495->c_value;
    come_value_495->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj127=come_value_495->type;
    come_value_495->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 314, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_495->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_495));
    add_come_last_code(info,"%s",come_value_495->c_value);
    __result_obj__313 = (_Bool)1;
    come_call_finalizer3(come_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__313;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj125;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj125=self->sname;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value402 = (void*)0;
struct sFuncNode* __result_obj__314;
    ((struct sNodeBase*)(__right_value402=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value402,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__314 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__314,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value403 = (void*)0;
char* __result_obj__315;
    __result_obj__315 = come_increment_ref_count(((char*)(__right_value403=__builtin_string("sFuncNode"))));
    (__right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__315 = come_decrement_ref_count2(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__315;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_496;
void* __right_value406 = (void*)0;
char* __dec_obj129;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* __dec_obj130;
_Bool __result_obj__316;
    come_value_496=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 339, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj129=come_value_496->c_value;
    come_value_496->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value_496->type;
    come_value_496->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 342, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_496->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_496));
    add_come_last_code(info,"%s",come_value_496->c_value);
    __result_obj__316 = (_Bool)1;
    come_call_finalizer3(come_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__316;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj128;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj128=self->sname;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value409 = (void*)0;
struct sWildCard* __result_obj__317;
    ((struct sNodeBase*)(__right_value409=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value409,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__317 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__317,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value410 = (void*)0;
char* __result_obj__318;
    __result_obj__318 = come_increment_ref_count(((char*)(__right_value410=__builtin_string("sWildCard"))));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__318 = come_decrement_ref_count2(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__318;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sNode* value_node_497;
_Bool Value_498;
_Bool __result_obj__319;
_Bool __result_obj__320;
    value_node_497=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value411=xsprintf("Value"))),info));
    (__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_498=node_compile(value_node_497,info);
    if(    !Value_498) {
        __result_obj__319 = (_Bool)0;
        ((value_node_497) ? value_node_497 = come_decrement_ref_count2(value_node_497, ((struct sNode*)value_node_497)->finalize, ((struct sNode*)value_node_497)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__319;
    }
    else {
    }
    __result_obj__320 = (_Bool)1;
    ((value_node_497) ? value_node_497 = come_decrement_ref_count2(value_node_497, ((struct sNode*)value_node_497)->finalize, ((struct sNode*)value_node_497)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__320;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj131;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj131=self->sname;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value413 = (void*)0;
struct sCallerFuncNode* __result_obj__321;
    ((struct sNodeBase*)(__right_value413=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value413,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__321 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__321,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__321;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value414 = (void*)0;
char* __result_obj__322;
    __result_obj__322 = come_increment_ref_count(((char*)(__right_value414=__builtin_string("sCallerFuncNode"))));
    (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__322 = come_decrement_ref_count2(__result_obj__322, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__322;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value417 = (void*)0;
char* __dec_obj133;
void* __right_value418 = (void*)0;
char* __dec_obj134;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sType* __dec_obj135;
_Bool __result_obj__323;
    come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 391, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj133=come_value_499->c_value;
        come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj134=come_value_499->c_value;
        come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj135=come_value_499->type;
    come_value_499->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 399, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_499->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
    add_come_last_code(info,"%s",come_value_499->c_value);
    __result_obj__323 = (_Bool)1;
    come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__323;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj132;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj132=self->sname;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value421 = (void*)0;
struct sCallerLineNode* __result_obj__324;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__324 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__324,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value_500;
void* __right_value424 = (void*)0;
char* __dec_obj137;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* __dec_obj138;
_Bool __result_obj__325;
    come_value_500=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 420, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj137=come_value_500->c_value;
    come_value_500->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=come_value_500->type;
    come_value_500->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 423, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_500->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_500));
    add_come_last_code(info,"%s",come_value_500->c_value);
    __result_obj__325 = (_Bool)1;
    come_call_finalizer3(come_value_500,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__325;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value427 = (void*)0;
char* __result_obj__326;
    __result_obj__326 = come_increment_ref_count(((char*)(__right_value427=__builtin_string("sCallerLineNode"))));
    (__right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__326 = come_decrement_ref_count2(__result_obj__326, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__326;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj136;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj136=self->sname;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value428 = (void*)0;
struct sCallerSNameNode* __result_obj__327;
    ((struct sNodeBase*)(__right_value428=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value428,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__327 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__327,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_501;
void* __right_value431 = (void*)0;
char* __dec_obj140;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sType* __dec_obj141;
_Bool __result_obj__328;
    come_value_501=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 448, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj140=come_value_501->c_value;
    come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj141=come_value_501->type;
    come_value_501->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 451, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_501->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_501));
    add_come_last_code(info,"%s",come_value_501->c_value);
    __result_obj__328 = (_Bool)1;
    come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__328;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value434 = (void*)0;
char* __result_obj__329;
    __result_obj__329 = come_increment_ref_count(((char*)(__right_value434=__builtin_string("sCallerSNameNode"))));
    (__right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__329 = come_decrement_ref_count2(__result_obj__329, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__329;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj139;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __dec_obj142;
void* __right_value447 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj153;
struct list$1void$ph* __dec_obj154;
struct buffer* __dec_obj155;
struct sFunCallNode* __result_obj__336;
    ((struct sNodeBase*)(__right_value435=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value435,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj142=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj153,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj154=self->method_generics_types;
    self->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj154,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj155=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj155,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__336 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__336,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__336;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value448 = (void*)0;
char* __result_obj__337;
    __result_obj__337 = come_increment_ref_count(((char*)(__right_value448=__builtin_string("sFunCallNode"))));
    (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__337 = come_decrement_ref_count2(__result_obj__337, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__337;
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
char* fun_name_512;
struct list$1tuple2$2char$phsNode$ph$ph* params_513;
struct buffer* method_block_514;
int method_block_sline_515;
struct sVar* var__516;
struct sType* lambda_type_517;
void* __right_value449 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_2_518=0;
char* Err_519=0;
_Bool _if_conditional3;
_Bool __result_obj__338;
void* __right_value450 = (void*)0;
struct sType* result_type_520;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1CVALUE$ph* come_params_521;
void* __right_value453 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_3_524=0;
char* Err_525=0;
_Bool _if_conditional4;
_Bool __result_obj__340;
int i_526;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_527;
struct tuple2$2char$phsNode$ph* it_530;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* label_533=0;
struct sNode* node_534=0;
_Bool Value_535;
_Bool __result_obj__347;
void* __right_value454 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value455 = (void*)0;
_Bool _if_conditional5;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_4_540=0;
char* Err_541=0;
_Bool _if_conditional6;
_Bool __result_obj__350;
void* __right_value461 = (void*)0;
_Bool _if_conditional7;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct buffer* buf_542;
int j_543;
struct list$1CVALUE$ph* o2_saved_544;
struct CVALUE* it_547;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct CVALUE* come_value_550;
void* __right_value467 = (void*)0;
char* __dec_obj163;
void* __right_value468 = (void*)0;
struct sType* __dec_obj164;
_Bool __result_obj__357;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sGenericsFun* generics_fun_551;
_Bool method_generics_552;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1void$ph* method_generics_types_553;
void* __right_value473 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_554=0;
struct sGenericsFun* gfun_555=0;
char* generics_fun_name_556;
void* __right_value474 = (void*)0;
struct sFun* fun_557;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1CVALUE$ph* come_params_558;
void* __right_value477 = (void*)0;
struct sFun* fun_559;
_Bool no_output_come_code_560;
_Bool __result_obj__358;
void* __right_value478 = (void*)0;
struct CVALUE* method_block_node_561;
void* __right_value479 = (void*)0;
struct sType* method_block_lambda_type_565;
void* __right_value480 = (void*)0;
struct sType* method_block_result_type_566;
void* __right_value481 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_567;
struct sType* generics_fun_method_block_result_type_568;
int method_generics_num_569;
void* __right_value482 = (void*)0;
int n_575;
struct list$1void$ph* o2_saved_576;
struct sType* it_577;
int method_generics_num_578;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1CVALUE$ph* come_params_579;
int i_580;
struct sType* result_type_581;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_582;
struct tuple2$2char$phsNode$ph* it_583;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_584=0;
struct sNode* node_585=0;
_Bool Value_586;
_Bool __result_obj__363;
void* __right_value487 = (void*)0;
struct CVALUE* come_value_587;
int method_generics_num_591;
void* __right_value491 = (void*)0;
int n_592;
struct list$1void$ph* o2_saved_593;
struct sType* it_594;
int method_generics_num_595;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_598=0;
struct sGenericsFun* gfun_599=0;
char* __dec_obj170;
void* __right_value495 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var9 = (void*)0;
char* name_600=0;
struct sGenericsFun* gfun_601=0;
char* __dec_obj171;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1CVALUE$ph* come_params_602;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_603;
struct tuple2$2char$phsNode$ph* it_604;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_605=0;
struct sNode* node_606=0;
_Bool Value_607;
_Bool __result_obj__366;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_608;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct buffer* buf_609;
int j_610;
struct list$1CVALUE$ph* o2_saved_611;
struct CVALUE* it_612;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct CVALUE* come_value_613;
void* __right_value503 = (void*)0;
char* __dec_obj172;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj173;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj174;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj175;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj176;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj177;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj178;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj179;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj180;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj181;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj182;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj183;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj184;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj185;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj186;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj187;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj188;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj189;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* __dec_obj190;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj191;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj192;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* __dec_obj193;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj194;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj195;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj196;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj197;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* __dec_obj198;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* __dec_obj199;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sType* __dec_obj200;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* __dec_obj201;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* __dec_obj202;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* __dec_obj203;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* __dec_obj204;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sType* __dec_obj205;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* __dec_obj206;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj207;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sType* __dec_obj208;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sType* __dec_obj209;
_Bool __result_obj__367;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1CVALUE$ph* come_params_614;
int i_615;
struct sType* result_type_616;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_617;
struct tuple2$2char$phsNode$ph* it_618;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_619=0;
struct sNode* node_620=0;
_Bool Value_621;
_Bool __result_obj__368;
void* __right_value580 = (void*)0;
struct CVALUE* come_value_622;
struct sType* __dec_obj210;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct buffer* buf_623;
int j_624;
struct list$1CVALUE$ph* o2_saved_625;
struct CVALUE* it_626;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct CVALUE* come_value_627;
void* __right_value585 = (void*)0;
char* __dec_obj211;
struct sType* __dec_obj212;
_Bool __result_obj__369;
void* __right_value586 = (void*)0;
char* __dec_obj213;
void* __right_value587 = (void*)0;
char* __dec_obj214;
char* p_628;
int version_629;
char* p2_630;
int i_632;
void* __right_value588 = (void*)0;
char* new_fun_name_633;
void* __right_value589 = (void*)0;
_Bool _if_conditional8;
void* __right_value590 = (void*)0;
char* __dec_obj215;
void* __right_value591 = (void*)0;
char* new_fun_name_634;
void* __right_value592 = (void*)0;
_Bool _if_conditional9;
void* __right_value593 = (void*)0;
char* __dec_obj216;
void* __right_value594 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_635=0;
char* Err_636=0;
_Bool _if_conditional10;
_Bool __result_obj__370;
int i_637;
void* __right_value595 = (void*)0;
char* new_fun_name_638;
void* __right_value596 = (void*)0;
_Bool _if_conditional11;
void* __right_value597 = (void*)0;
char* __dec_obj217;
void* __right_value598 = (void*)0;
struct sFun* fun_639;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct list$1CVALUE$ph* come_params_640;
int i_641;
struct sType* result_type_642;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_643;
struct tuple2$2char$phsNode$ph* it_644;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_645=0;
struct sNode* node_646=0;
_Bool Value_647;
_Bool __result_obj__371;
void* __right_value601 = (void*)0;
struct CVALUE* come_value_648;
struct sType* __dec_obj218;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct buffer* buf_649;
int j_650;
struct list$1CVALUE$ph* o2_saved_651;
struct CVALUE* it_652;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct CVALUE* come_value_653;
void* __right_value606 = (void*)0;
char* __dec_obj219;
struct sType* __dec_obj220;
_Bool __result_obj__372;
void* __right_value607 = (void*)0;
struct sType* result_type_654;
_Bool in_exception_value_655;
void* __right_value614 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* new_node_656;
_Bool Value_658;
_Bool __result_obj__375;
_Bool __result_obj__376;
_Bool in_exception_value_659;
void* __right_value617 = (void*)0;
struct sNode* _inf_value2;
struct sFunCallNode* _inf_obj_value2;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* new_node_660;
_Bool Value_661;
_Bool __result_obj__377;
_Bool __result_obj__378;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1void$ph* param_types_662;
struct list$1void$ph* o2_saved_663;
struct sType* it_664;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sType* it2_665;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sType* __dec_obj226;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1CVALUE$ph* come_params_666;
int i_667;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_668;
struct tuple2$2char$phsNode$ph* it_669;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_670=0;
struct sNode* node_671=0;
_Bool Value_672;
_Bool __result_obj__379;
void* __right_value628 = (void*)0;
struct CVALUE* come_value_673;
int n_674;
struct list$1char$ph* o2_saved_675;
char* it_678;
void* __right_value629 = (void*)0;
_Bool _if_conditional12;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_6_681=0;
char* Err_682=0;
_Bool _if_conditional13;
_Bool __result_obj__386;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
_Bool _if_conditional14;
void* __right_value637 = (void*)0;
int i_688;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_689;
struct tuple2$2char$phsNode$ph* it_690;
struct tuple2$2char$phsNode$ph* multiple_assign_var16 = (void*)0;
char* label_691=0;
struct sNode* node_692=0;
_Bool Value_693;
_Bool __result_obj__389;
void* __right_value638 = (void*)0;
struct CVALUE* come_value_694;
void* __right_value639 = (void*)0;
_Bool _if_conditional15;
_Bool Value_695;
_Bool __result_obj__390;
void* __right_value640 = (void*)0;
struct CVALUE* come_value_696;
void* __right_value641 = (void*)0;
_Bool _if_conditional16;
void* __right_value642 = (void*)0;
_Bool _if_conditional17;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var17 = (void*)0;
_Bool come_exception_var_7_697=0;
char* Err_698=0;
_Bool _if_conditional18;
_Bool __result_obj__391;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
_Bool _if_conditional19;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
_Bool _if_conditional20;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* default_param_699;
void* __right_value654 = (void*)0;
char* param_name_703;
void* __right_value655 = (void*)0;
_Bool _if_conditional21;
struct buffer* source_704;
char* p_705;
char* head_706;
int sline_707;
void* __right_value656 = (void*)0;
struct buffer* __dec_obj228;
void* __right_value657 = (void*)0;
struct sNode* node_708;
_Bool Value_709;
_Bool __result_obj__394;
struct buffer* __dec_obj229;
void* __right_value658 = (void*)0;
struct CVALUE* come_value_710;
void* __right_value659 = (void*)0;
_Bool _if_conditional22;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_711=0;
char* Err_712=0;
_Bool _if_conditional23;
_Bool __result_obj__395;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
_Bool _if_conditional24;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
_Bool _if_conditional25;
void* __right_value669 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_9_713=0;
char* Err_714=0;
_Bool _if_conditional26;
_Bool __result_obj__396;
void* __right_value670 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_10_715=0;
char* Err_716=0;
_Bool _if_conditional27;
_Bool __result_obj__397;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value3;
struct sCurrentNode2* _inf_obj_value3;
void* __right_value675 = (void*)0;
struct sNode* current_stack_frame_node_717;
_Bool Value_719;
_Bool __result_obj__400;
void* __right_value676 = (void*)0;
struct CVALUE* come_value_720;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct buffer* method_block2_721;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* method_block_type_722;
void* __right_value681 = (void*)0;
char* class_name_723;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sClass* current_stack_frame_struct_724;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_11_725=0;
char* Err_726=0;
_Bool _if_conditional28;
_Bool __result_obj__401;
void* __right_value686 = (void*)0;
struct sType* result_type_727;
void* __right_value687 = (void*)0;
struct list$1void$ph* param_types_728;
struct list$1char$ph* param_names_729;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct buffer* all_alhabet_sname_730;
char* p_731;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct list$1void$ph* o2_saved_732;
struct sType* it_733;
struct sType* param_type_734;
void* __right_value692 = (void*)0;
char* param_name_735;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* param_name_736;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
char* param_name_737;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct buffer* source3_738;
char* p_739;
char* head_740;
int sline_741;
struct buffer* __dec_obj231;
void* __right_value699 = (void*)0;
struct sNode* node_742;
_Bool Value_743;
_Bool __result_obj__402;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
char* method_block_name_744;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct CVALUE* come_value2_745;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sFun* fun2_746;
void* __right_value706 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_12_747=0;
char* Err_748=0;
_Bool _if_conditional29;
_Bool __result_obj__403;
struct sType* method_block_type2_749;
void* __right_value707 = (void*)0;
char* __dec_obj232;
void* __right_value708 = (void*)0;
struct sType* __dec_obj233;
struct buffer* __dec_obj234;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct buffer* buf_750;
int j_751;
struct list$1CVALUE$ph* o2_saved_752;
struct CVALUE* it_753;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct CVALUE* come_value_754;
void* __right_value713 = (void*)0;
char* __dec_obj235;
void* __right_value714 = (void*)0;
struct sType* __dec_obj236;
void* __right_value715 = (void*)0;
char* __dec_obj237;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* __dec_obj238;
void* __right_value718 = (void*)0;
struct CVALUE* __dec_obj239;
_Bool __result_obj__404;
memset(&i_632, 0, sizeof(int));
    fun_name_512=(char*)come_increment_ref_count(self->fun_name);
    params_513=self->params;
    method_block_514=self->method_block;
    method_block_sline_515=self->method_block_sline;
    var__516=get_variable_from_table(info->lv_table,fun_name_512);
    if(    var__516==((void*)0)) {
        var__516=get_variable_from_table(info->gv_table,fun_name_512);
    }
    if(    var__516) {
        lambda_type_517=var__516->mType;
        if(        string_operator_not_equals(lambda_type_517->mClass->mName,"lambda")) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value449=err_msg(info,"%s is not lambda, can't call",fun_name_512)));
            come_exception_var_2_518=multiple_assign_var2->v1;
            Err_519=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_519)),            come_call_finalizer3(__right_value449,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result_obj__338 = (_Bool)1;
                (Err_519 = come_decrement_ref_count2(Err_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__338;
            }
            else {
            }
            (Err_519 = come_decrement_ref_count2(Err_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_520=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_517->mResultType));
        result_type_520->mStatic=(_Bool)0;
        come_params_521=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 523, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1void$ph$p_length(lambda_type_517->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_513)&&!lambda_type_517->mVarArgs) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value453=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_512,list$1void$ph$p_length(lambda_type_517->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_513))));
            come_exception_var_3_524=multiple_assign_var3->v1;
            Err_525=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            if(            (_if_conditional4=(Err_525)),            come_call_finalizer3(__right_value453,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result_obj__340 = (_Bool)1;
                (Err_525 = come_decrement_ref_count2(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_521,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__340;
            }
            else {
            }
            (Err_525 = come_decrement_ref_count2(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_526=0;
        for(        o2_saved_527=(params_513),it_530=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_527));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_527));        it_530=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_527))        ){
            multiple_assign_var4=it_530;
            label_533=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_534=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_535=node_compile(node_534,info);
            if(            !Value_535) {
                __result_obj__347 = (_Bool)0;
                (label_533 = come_decrement_ref_count2(label_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_534) ? node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(result_type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_521,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__347;
            }
            else {
            }
            come_value_536=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional5=(lambda_type_517->mVarArgs&&((struct sType*)((void*)(__right_value455=list$1void$ph$p_operator_load_element(lambda_type_517->mParamTypes,i_526))))==((void*)0))),            come_call_finalizer3(__right_value455,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional5) {
            }
            else {
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value460=check_assign_type(((char*)(__right_value458=xsprintf("\%s calling param #\%s",((char*)(__right_value456=string_to_string(fun_name_512))),((char*)(__right_value457=int_to_string(i_526)))))),((struct sType*)((void*)(__right_value459=list$1void$ph$p_operator_load_element(lambda_type_517->mParamTypes,i_526)))),come_value_536->type,come_value_536,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_4_540=multiple_assign_var5->v1;
                Err_541=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional6=(Err_541)),                (__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value459,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value460,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    __result_obj__350 = (_Bool)1;
                    (Err_541 = come_decrement_ref_count2(Err_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_533 = come_decrement_ref_count2(label_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_534) ? node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_521,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__350;
                }
                else {
                }
                if(                (_if_conditional7=(((struct sType*)((void*)(__right_value461=list$1void$ph$p_operator_load_element(lambda_type_517->mParamTypes,i_526))))->mHeap&&come_value_536->type->mHeap)),                come_call_finalizer3(__right_value461,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional7) {
                    std_move(((struct sType*)((void*)(__right_value462=list$1void$ph$p_operator_load_element(lambda_type_517->mParamTypes,i_526)))),come_value_536->type,come_value_536,info,(_Bool)1);
                    come_call_finalizer3(__right_value462,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                (Err_541 = come_decrement_ref_count2(Err_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(come_params_521,(struct CVALUE*)come_increment_ref_count(come_value_536));
            dec_stack_ptr(1,info);
            i_526++;
            (label_533 = come_decrement_ref_count2(label_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_534) ? node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_542=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 559, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_542,var__516->mCValueName);
        buffer_append_str(buf_542,"(");
        j_543=0;
        for(        o2_saved_544=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_521)),it_547=list$1CVALUE$ph$p_begin((o2_saved_544));        !list$1CVALUE$ph$p_end((o2_saved_544));        it_547=list$1CVALUE$ph$p_next((o2_saved_544))        ){
            buffer_append_str(buf_542,it_547->c_value);
            if(            j_543!=list$1CVALUE$ph$p_length(come_params_521)-1) {
                buffer_append_str(buf_542,",");
            }
            j_543++;
        }
        come_call_finalizer3(o2_saved_544,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_542,")");
        come_value_550=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 576, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj163=come_value_550->c_value;
        come_value_550->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_542));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj164=come_value_550->type;
        come_value_550->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_520));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_550->type->mStatic=(_Bool)0;
        come_value_550->var=((void*)0);
        if(        lambda_type_517->mResultType->mHeap) {
            append_object_to_right_values2(come_value_550,(struct sType*)come_increment_ref_count(lambda_type_517->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_550->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_550));
        info->calling_fun=((void*)0);
        __result_obj__357 = (_Bool)1;
        come_call_finalizer3(result_type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_521,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__357;
        come_call_finalizer3(result_type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_521,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_551=((struct sGenericsFun*)((void*)(__right_value470=map$2void$phvoid$ph$p_at(info->generics_funcs,((char*)(__right_value469=__builtin_string(fun_name_512))),((void*)0)))));
    (__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value470,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    method_generics_552=(_Bool)0;
    if(    generics_fun_551) {
        method_generics_552=list$1char$ph$p_length(generics_fun_551->mMethodGenericsTypeNames)>0;
    }
    if(    list$1void$ph$p_length(self->method_generics_types)>0||method_generics_552) {
        if(        list$1void$ph$p_length(self->method_generics_types)==0) {
            method_generics_types_553=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 601, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value473=make_method_generics_function((char*)come_increment_ref_count(fun_name_512),(struct list$1void$ph*)come_increment_ref_count(method_generics_types_553),info)));
            name_554=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            gfun_555=multiple_assign_var6->v2;
            come_call_finalizer3(__right_value473,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            generics_fun_name_556=(char*)come_increment_ref_count(name_554);
            fun_557=((struct sFun*)((void*)(__right_value474=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_556,((void*)0)))));
            come_call_finalizer3(__right_value474,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            method_block_514) {
                come_params_558=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 608, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_559=((struct sFun*)((void*)(__right_value477=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_556,((void*)0)))));
                come_call_finalizer3(__right_value477,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                no_output_come_code_560=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_514,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_558),fun_559,fun_name_512,method_block_sline_515,info,(_Bool)1)) {
                    __result_obj__358 = (_Bool)0;
                    come_call_finalizer3(come_params_558,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_553,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_556 = come_decrement_ref_count2(generics_fun_name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__358;
                }
                info->no_output_come_code=no_output_come_code_560;
                method_block_node_561=((struct CVALUE*)(__right_value478=list$1CVALUE$ph$p_operator_load_element(come_params_558,-1)));
                come_call_finalizer3(__right_value478,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_565=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_561->type));
                method_block_result_type_566=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_567=((struct sType*)((void*)(__right_value481=list$1void$ph$p_operator_load_element(generics_fun_551->mParamTypes,-1))));
                come_call_finalizer3(__right_value481,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                generics_fun_method_block_result_type_568=generics_fun_method_block_lambda_type_567->mResultType;
                if(                generics_fun_method_block_result_type_568->mClass->mMethodGenerics) {
                    method_generics_num_569=generics_fun_method_block_result_type_568->mClass->mMethodGenericsNum;
                    list$1void$ph$p_operator_store_element(method_generics_types_553,method_generics_num_569,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_566)));
                }
                n_575=0;
                for(                o2_saved_576=(struct list$1void$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_567->mParamTypes)),it_577=((struct sType*)list$1void$ph$p_begin((o2_saved_576)));                !list$1void$ph$p_end((o2_saved_576));                it_577=((struct sType*)list$1void$ph$p_next((o2_saved_576)))                ){
                    if(                    it_577->mClass->mMethodGenerics) {
                        method_generics_num_578=it_577->mClass->mMethodGenericsNum;
                        list$1void$ph$p_operator_store_element(method_generics_types_553,method_generics_num_578,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value483=list$1void$ph$p_operator_load_element(method_block_lambda_type_565->mParamTypes,n_575)))))));
                        come_call_finalizer3(__right_value483,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    }
                    n_575++;
                }
                come_call_finalizer3(o2_saved_576,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_558,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_565,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_579=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 640, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            i_580=0;
            result_type_581=((void*)0);
            for(            o2_saved_582=(params_513),it_583=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_582));            !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_582));            it_583=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_582))            ){
                multiple_assign_var7=it_583;
                label_584=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                node_585=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                Value_586=node_compile(node_585,info);
                if(                !Value_586) {
                    __result_obj__363 = (_Bool)0;
                    (label_584 = come_decrement_ref_count2(label_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_585) ? node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_generics_types_553,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_556 = come_decrement_ref_count2(generics_fun_name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_params_579,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__363;
                }
                else {
                }
                come_value_587=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUE$ph$p_add(come_params_579,(struct CVALUE*)come_increment_ref_count(come_value_587));
                (label_584 = come_decrement_ref_count2(label_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_585) ? node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_551->mResultType->mClass->mMethodGenerics) {
                method_generics_num_591=generics_fun_551->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1void$ph$p_operator_store_element(method_generics_types_553,method_generics_num_591,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_592=0;
            for(            o2_saved_593=(struct list$1void$ph*)come_increment_ref_count((generics_fun_551->mParamTypes)),it_594=((struct sType*)list$1void$ph$p_begin((o2_saved_593)));            !list$1void$ph$p_end((o2_saved_593));            it_594=((struct sType*)list$1void$ph$p_next((o2_saved_593)))            ){
                if(                it_594->mClass->mMethodGenerics) {
                    method_generics_num_595=it_594->mClass->mMethodGenericsNum;
                    if(                    n_592<list$1CVALUE$ph$p_length(come_params_579)) {
                        list$1void$ph$p_operator_store_element(method_generics_types_553,method_generics_num_595,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value492=list$1CVALUE$ph$p_operator_load_element(come_params_579,n_592)))->type)));
                        come_call_finalizer3(__right_value492,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_592++;
            }
            come_call_finalizer3(o2_saved_593,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            map$2void$phvoid$ph$p_remove(info->funcs,generics_fun_name_556);
            (name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value494=make_method_generics_function((char*)come_increment_ref_count(fun_name_512),(struct list$1void$ph*)come_increment_ref_count(method_generics_types_553),info)));
            name_598=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            gfun_599=multiple_assign_var8->v2;
            come_call_finalizer3(__right_value494,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj170=fun_name_512;
            fun_name_512=(char*)come_increment_ref_count(name_598);
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_553,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (generics_fun_name_556 = come_decrement_ref_count2(generics_fun_name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_params_579,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_598 = come_decrement_ref_count2(name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var9=((struct tuple2$2char$phsGenericsFun$p*)(__right_value495=make_method_generics_function((char*)come_increment_ref_count(fun_name_512),(struct list$1void$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_600=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            gfun_601=multiple_assign_var9->v2;
            come_call_finalizer3(__right_value495,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj171=fun_name_512;
            fun_name_512=(char*)come_increment_ref_count(name_600);
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            (name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_512,"__builtin_memmove")||string_operator_equals(fun_name_512,"__builtin_memset")||string_operator_equals(fun_name_512,"__builtin_ffs")||string_operator_equals(fun_name_512,"__builtin_ffsl")||string_operator_equals(fun_name_512,"__builtin_ffsll")||string_operator_equals(fun_name_512,"__builtin_bswap16")||string_operator_equals(fun_name_512,"__builtin_bswap32")||string_operator_equals(fun_name_512,"__builtin_bswap64")||string_operator_equals(fun_name_512,"__builtin_constant_p")||string_operator_equals(fun_name_512,"__builtin_expect")||string_operator_equals(fun_name_512,"__builtin___memset_chk")||string_operator_equals(fun_name_512,"__builtin_object_size")||string_operator_equals(fun_name_512,"__builtin___memcpy_chk")||string_operator_equals(fun_name_512,"__builtin___strncpy_chk")||string_operator_equals(fun_name_512,"__builtin___strncat_chk")||string_operator_equals(fun_name_512,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_512,"__builtin_strrchr")||string_operator_equals(fun_name_512,"__builtin_clz")||string_operator_equals(fun_name_512,"__dsb")||string_operator_equals(fun_name_512,"__isb")||string_operator_equals(fun_name_512,"__dmb")||(strlen(fun_name_512)==strlen("__builtin_arm_")&&memcmp(fun_name_512,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_512,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_512,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_512,"__c11_atomic_store")||string_operator_equals(fun_name_512,"__c11_atomic_load")||string_operator_equals(fun_name_512,"__c11_atomic_exchange")||string_operator_equals(fun_name_512,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_512,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_512,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_512,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_512,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_512,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_512,"__c11_atomic_fetch_xor")) {
        come_params_602=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 714, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_603=(params_513),it_604=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_603));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_603));        it_604=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_603))        ){
            multiple_assign_var10=it_604;
            label_605=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_606=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_607=node_compile(node_606,info);
            if(            !Value_607) {
                __result_obj__366 = (_Bool)0;
                (label_605 = come_decrement_ref_count2(label_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_606) ? node_606 = come_decrement_ref_count2(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_602,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__366;
            }
            else {
            }
            come_value_608=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_push_back(come_params_602,(struct CVALUE*)come_increment_ref_count(come_value_608));
            (label_605 = come_decrement_ref_count2(label_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_606) ? node_606 = come_decrement_ref_count2(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_608,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 728, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_609,fun_name_512);
        buffer_append_str(buf_609,"(");
        j_610=0;
        for(        o2_saved_611=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_602)),it_612=list$1CVALUE$ph$p_begin((o2_saved_611));        !list$1CVALUE$ph$p_end((o2_saved_611));        it_612=list$1CVALUE$ph$p_next((o2_saved_611))        ){
            buffer_append_str(buf_609,it_612->c_value);
            if(            j_610!=list$1CVALUE$ph$p_length(come_params_602)-1) {
                buffer_append_str(buf_609,",");
            }
            j_610++;
        }
        come_call_finalizer3(o2_saved_611,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_609,")");
        come_value_613=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 745, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj172=come_value_613->c_value;
        come_value_613->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_609));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_512,"__builtin_memmove")||string_operator_equals(fun_name_512,"__builtin_memset")) {
            __dec_obj173=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 749, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_ffs")) {
            __dec_obj174=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 752, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_ffsl")) {
            __dec_obj175=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 755, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_ffsll")) {
            __dec_obj176=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 758, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_bswap16")) {
            __dec_obj177=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj177,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_bswap32")) {
            __dec_obj178=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_bswap64")) {
            __dec_obj179=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_constant_p")) {
            __dec_obj180=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_expect")) {
            __dec_obj181=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin___memset_chk")) {
            __dec_obj182=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_613->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_object_size")) {
            __dec_obj183=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 780, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin___memcpy_chk")) {
            __dec_obj184=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 783, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_613->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_512,"__builtin___strncpy_chk")) {
            __dec_obj185=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 787, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_613->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_512,"__builtin___strncat_chk")) {
            __dec_obj186=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_613->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_strrchr")) {
            __dec_obj187=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_613->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_512,"__builtin___vsnprintf_chk")) {
            __dec_obj188=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_clz")) {
            __dec_obj189=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 802, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_thread_fence")) {
            __dec_obj190=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 805, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_signal_fence")) {
            __dec_obj191=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 808, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_exchange")) {
            __dec_obj192=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value542=list$1CVALUE$ph$p_operator_load_element(come_params_602,1)))->type));
            come_call_finalizer3(__dec_obj192,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value542,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_exchange_strong")) {
            __dec_obj193=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value544=list$1CVALUE$ph$p_operator_load_element(come_params_602,2)))->type));
            come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value544,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_exchange_weak")) {
            __dec_obj194=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value546=list$1CVALUE$ph$p_operator_load_element(come_params_602,2)))->type));
            come_call_finalizer3(__dec_obj194,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value546,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_store")) {
            __dec_obj195=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj195,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_load")) {
            __dec_obj196=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value550=list$1CVALUE$ph$p_operator_load_element(come_params_602,0)))->type));
            come_call_finalizer3(__dec_obj196,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value550,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_613->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_fetch_add")) {
            __dec_obj197=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value552=list$1CVALUE$ph$p_operator_load_element(come_params_602,1)))->type));
            come_call_finalizer3(__dec_obj197,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value552,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_fetch_sub")) {
            __dec_obj198=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value554=list$1CVALUE$ph$p_operator_load_element(come_params_602,1)))->type));
            come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value554,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_fetch_and")) {
            __dec_obj199=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value556=list$1CVALUE$ph$p_operator_load_element(come_params_602,1)))->type));
            come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value556,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_fetch_or")) {
            __dec_obj200=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value558=list$1CVALUE$ph$p_operator_load_element(come_params_602,1)))->type));
            come_call_finalizer3(__dec_obj200,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value558,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__c11_atomic_fetch_xor")) {
            __dec_obj201=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value560=list$1CVALUE$ph$p_operator_load_element(come_params_602,1)))->type));
            come_call_finalizer3(__dec_obj201,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value560,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__dsb")) {
            __dec_obj202=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 842, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj202,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__isb")) {
            __dec_obj203=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 845, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__dmb")) {
            __dec_obj204=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 848, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj204,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_arm_cdp")) {
            __dec_obj205=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj205,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_arm_ldc")) {
            __dec_obj206=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_arm_stc")) {
            __dec_obj207=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj207,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_arm_stcl")) {
            __dec_obj208=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj208,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_512,"__builtin_arm_ldcl")) {
            __dec_obj209=come_value_613->type;
            come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj209,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_613->var=((void*)0);
        add_come_last_code(info,"%s",come_value_613->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_613));
        __result_obj__367 = (_Bool)1;
        come_call_finalizer3(come_params_602,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__367;
        come_call_finalizer3(come_params_602,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_512,"__builtin_va_arg")) {
        come_params_614=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 875, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_615=0;
        result_type_616=((void*)0);
        for(        o2_saved_617=(params_513),it_618=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_617));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_617));        it_618=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_617))        ){
            multiple_assign_var11=it_618;
            label_619=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_620=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            Value_621=node_compile(node_620,info);
            if(            !Value_621) {
                __result_obj__368 = (_Bool)0;
                (label_619 = come_decrement_ref_count2(label_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_620) ? node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_614,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__368;
            }
            else {
            }
            come_value_622=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_614,(struct CVALUE*)come_increment_ref_count(come_value_622));
            __dec_obj210=result_type_616;
            result_type_616=(struct sType*)come_increment_ref_count(come_value_622->type);
            come_call_finalizer3(__dec_obj210,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_619 = come_decrement_ref_count2(label_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_620) ? node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_623=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 894, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_623,fun_name_512);
        buffer_append_str(buf_623,"(");
        j_624=0;
        for(        o2_saved_625=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_614)),it_626=list$1CVALUE$ph$p_begin((o2_saved_625));        !list$1CVALUE$ph$p_end((o2_saved_625));        it_626=list$1CVALUE$ph$p_next((o2_saved_625))        ){
            buffer_append_str(buf_623,it_626->c_value);
            if(            j_624!=list$1CVALUE$ph$p_length(come_params_614)-1) {
                buffer_append_str(buf_623,",");
            }
            j_624++;
        }
        come_call_finalizer3(o2_saved_625,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_623,")");
        come_value_627=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 911, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj211=come_value_627->c_value;
        come_value_627->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_623));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj212=come_value_627->type;
        come_value_627->type=(struct sType*)come_increment_ref_count(result_type_616);
        come_call_finalizer3(__dec_obj212,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_627->var=((void*)0);
        add_come_last_code(info,"%s",come_value_627->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_627));
        __result_obj__369 = (_Bool)1;
        come_call_finalizer3(come_params_614,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_623,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__369;
        come_call_finalizer3(come_params_614,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_623,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_627,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_512,"string")) {
        __dec_obj213=fun_name_512;
        fun_name_512=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_512,"wstring")) {
        __dec_obj214=fun_name_512;
        fun_name_512=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_512,"inherit")) {
        p_628=info->come_fun->mName;
        version_629=0;
        while(*p_628) {
            if(            *p_628==95&&*(p_628+1)==118&&xisdigit(*(p_628+2))) {
                p2_630=p_628+2;
                version_629=0;
                while(xisdigit(*p2_630)) {
                    version_629=version_629*10+(*p2_630-48);
                    p2_630++;
                }
                break;
            }
            else {
                p_628++;
            }
        }
        char real_fun_name_631[2048];
        memset(&real_fun_name_631, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_631,info->come_fun->mName,p_628-info->come_fun->mName);
        real_fun_name_631[p_628-info->come_fun->mName]=0;
        for(        i_632=version_629-1;        i_632>=1;        i_632--        ){
            new_fun_name_633=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_631,i_632));
            if(            (_if_conditional8=(((struct sFun*)((void*)(__right_value589=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_633)))))),            come_call_finalizer3(__right_value589,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional8) {
                __dec_obj215=fun_name_512;
                fun_name_512=(char*)come_increment_ref_count(__builtin_string(new_fun_name_633));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_633 = come_decrement_ref_count2(new_fun_name_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_633 = come_decrement_ref_count2(new_fun_name_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_632==0) {
            new_fun_name_634=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_631));
            if(            (_if_conditional9=(((struct sFun*)((void*)(__right_value592=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_634)))))),            come_call_finalizer3(__right_value592,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional9) {
                __dec_obj216=fun_name_512;
                fun_name_512=(char*)come_increment_ref_count(__builtin_string(new_fun_name_634));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_512,info->come_fun->mName)) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value594=err_msg(info,"invalid inherit")));
                come_exception_var_5_635=multiple_assign_var12->v1;
                Err_636=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_636)),                come_call_finalizer3(__right_value594,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result_obj__370 = (_Bool)1;
                    (Err_636 = come_decrement_ref_count2(Err_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_634 = come_decrement_ref_count2(new_fun_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__370;
                }
                else {
                }
                (Err_636 = come_decrement_ref_count2(Err_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (new_fun_name_634 = come_decrement_ref_count2(new_fun_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_637=128;        i_637>=1;        i_637--        ){
            new_fun_name_638=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_512,i_637));
            if(            (_if_conditional11=(((struct sFun*)((void*)(__right_value596=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_638)))))),            come_call_finalizer3(__right_value596,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional11) {
                __dec_obj217=fun_name_512;
                fun_name_512=(char*)come_increment_ref_count(__builtin_string(new_fun_name_638));
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_638 = come_decrement_ref_count2(new_fun_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_638 = come_decrement_ref_count2(new_fun_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_639=((struct sFun*)((void*)(__right_value598=map$2void$phvoid$ph$p_at(info->funcs,fun_name_512,((void*)0)))));
    come_call_finalizer3(__right_value598,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_639==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_512);
        come_params_640=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 993, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_641=0;
        result_type_642=((void*)0);
        for(        o2_saved_643=(params_513),it_644=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_643));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_643));        it_644=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_643))        ){
            multiple_assign_var13=it_644;
            label_645=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_646=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_647=node_compile(node_646,info);
            if(            !Value_647) {
                __result_obj__371 = (_Bool)0;
                (label_645 = come_decrement_ref_count2(label_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_646) ? node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_params_640,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_642,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__371;
            }
            else {
            }
            come_value_648=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_add(come_params_640,(struct CVALUE*)come_increment_ref_count(come_value_648));
            __dec_obj218=result_type_642;
            result_type_642=(struct sType*)come_increment_ref_count(come_value_648->type);
            come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_645 = come_decrement_ref_count2(label_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_646) ? node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_648,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_649=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1012, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_649,fun_name_512);
        buffer_append_str(buf_649,"(");
        j_650=0;
        for(        o2_saved_651=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_640)),it_652=list$1CVALUE$ph$p_begin((o2_saved_651));        !list$1CVALUE$ph$p_end((o2_saved_651));        it_652=list$1CVALUE$ph$p_next((o2_saved_651))        ){
            buffer_append_str(buf_649,it_652->c_value);
            if(            j_650!=list$1CVALUE$ph$p_length(come_params_640)-1) {
                buffer_append_str(buf_649,",");
            }
            j_650++;
        }
        come_call_finalizer3(o2_saved_651,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_649,")");
        come_value_653=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1029, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj219=come_value_653->c_value;
        come_value_653->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_649));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj220=come_value_653->type;
        come_value_653->type=(struct sType*)come_increment_ref_count(result_type_642);
        come_call_finalizer3(__dec_obj220,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_653->var=((void*)0);
        add_come_last_code(info,"%s",come_value_653->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_653));
        __result_obj__372 = (_Bool)1;
        come_call_finalizer3(come_params_640,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_649,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__372;
        come_call_finalizer3(come_params_640,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_649,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_654=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_639->mResultType));
    result_type_654->mStatic=(_Bool)0;
    if(    info->come_fun->mResultType->mException&&result_type_654->mException&&!info->in_exception_value) {
        in_exception_value_655=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1047, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value614=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sFunCallNode_finalize;
        _inf_value1->clone=(void*)sFunCallNode_clone;
        _inf_value1->compile=(void*)sFunCallNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sFunCallNode_terminated;
        _inf_value1->kind=(void*)sFunCallNode_kind;
        new_node_656=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value1),info));
        come_call_finalizer3(__right_value614,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_658=node_compile(new_node_656,info);
        if(        !Value_658) {
            __result_obj__375 = (_Bool)0;
            ((new_node_656) ? new_node_656 = come_decrement_ref_count2(new_node_656, ((struct sNode*)new_node_656)->finalize, ((struct sNode*)new_node_656)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__375;
        }
        else {
        }
        info->in_exception_value=in_exception_value_655;
        __result_obj__376 = (_Bool)1;
        ((new_node_656) ? new_node_656 = come_decrement_ref_count2(new_node_656, ((struct sNode*)new_node_656)->finalize, ((struct sNode*)new_node_656)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__376;
        ((new_node_656) ? new_node_656 = come_decrement_ref_count2(new_node_656, ((struct sNode*)new_node_656)->finalize, ((struct sNode*)new_node_656)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    result_type_654->mException&&!info->in_exception_value) {
        in_exception_value_659=info->in_exception_value;
        info->in_exception_value=(_Bool)1;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1059, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count((((struct sFunCallNode*)(__right_value617=come_call_cloner(sFunCallNode_clone, self)))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sFunCallNode_finalize;
        _inf_value2->clone=(void*)sFunCallNode_clone;
        _inf_value2->compile=(void*)sFunCallNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sFunCallNode_terminated;
        _inf_value2->kind=(void*)sFunCallNode_kind;
        new_node_660=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value2),info));
        come_call_finalizer3(__right_value617,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
        Value_661=node_compile(new_node_660,info);
        if(        !Value_661) {
            __result_obj__377 = (_Bool)0;
            ((new_node_660) ? new_node_660 = come_decrement_ref_count2(new_node_660, ((struct sNode*)new_node_660)->finalize, ((struct sNode*)new_node_660)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__377;
        }
        else {
        }
        info->in_exception_value=in_exception_value_659;
        __result_obj__378 = (_Bool)1;
        ((new_node_660) ? new_node_660 = come_decrement_ref_count2(new_node_660, ((struct sNode*)new_node_660)->finalize, ((struct sNode*)new_node_660)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__378;
        ((new_node_660) ? new_node_660 = come_decrement_ref_count2(new_node_660, ((struct sNode*)new_node_660)->finalize, ((struct sNode*)new_node_660)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    param_types_662=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 1069, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    for(    o2_saved_663=(struct list$1void$ph*)come_increment_ref_count((fun_639->mParamTypes)),it_664=((struct sType*)list$1void$ph$p_begin((o2_saved_663)));    !list$1void$ph$p_end((o2_saved_663));    it_664=((struct sType*)list$1void$ph$p_next((o2_saved_663)))    ){
        it2_665=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value622=come_call_cloner(sType_clone, it_664))),info->generics_type,info));
        come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1void$ph$p_push_back(param_types_662,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_665)));
        come_call_finalizer3(it2_665,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_663,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj226=result_type_654;
    result_type_654=(struct sType*)come_increment_ref_count(solve_generics(result_type_654,info->generics_type,info));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_666=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1077, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_667=0;    i_667<list$1void$ph$p_length(fun_639->mParamTypes)-(((method_block_514)?(2):(0)));    i_667++    ){
        list$1CVALUE$ph$p_add(come_params_666,((void*)0));
    }
    for(    o2_saved_668=(params_513),it_669=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_668));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_668));    it_669=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_668))    ){
        multiple_assign_var14=it_669;
        label_670=(char*)come_increment_ref_count(multiple_assign_var14->v1);
        node_671=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        if(        fun_639->mVarArgs||string_operator_equals(fun_name_512,"__builtin_va_start")) {
        }
        else if(        label_670) {
            Value_672=node_compile(node_671,info);
            if(            !Value_672) {
                __result_obj__379 = (_Bool)0;
                (label_670 = come_decrement_ref_count2(label_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_671) ? node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__379;
            }
            else {
            }
            come_value_673=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_674=0;
            for(            o2_saved_675=(struct list$1char$ph*)come_increment_ref_count((fun_639->mParamNames)),it_678=list$1char$ph$p_begin((o2_saved_675));            !list$1char$ph$p_end((o2_saved_675));            it_678=list$1char$ph$p_next((o2_saved_675))            ){
                if(                string_operator_equals(label_670,it_678)) {
                    break;
                }
                n_674++;
            }
            come_call_finalizer3(o2_saved_675,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional12=(((struct sType*)((void*)(__right_value629=list$1void$ph$p_operator_load_element(param_types_662,n_674)))))),            come_call_finalizer3(__right_value629,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional12) {
                multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value634=check_assign_type(((char*)(__right_value632=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value630=string_to_string(fun_name_512))),((char*)(__right_value631=int_to_string(n_674)))))),((struct sType*)((void*)(__right_value633=list$1void$ph$p_operator_load_element(param_types_662,n_674)))),come_value_673->type,come_value_673,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_6_681=multiple_assign_var15->v1;
                Err_682=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                (_if_conditional13=(Err_682)),                (__right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value633,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value634,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    __result_obj__386 = (_Bool)1;
                    (Err_682 = come_decrement_ref_count2(Err_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_673,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_670 = come_decrement_ref_count2(label_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_671) ? node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__386;
                }
                else {
                }
                (Err_682 = come_decrement_ref_count2(Err_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional14=(((struct sType*)((void*)(__right_value635=list$1void$ph$p_operator_load_element(param_types_662,n_674))))&&((struct sType*)((void*)(__right_value636=list$1void$ph$p_operator_load_element(param_types_662,n_674))))->mHeap&&come_value_673->type->mHeap)),            come_call_finalizer3(__right_value635,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value636,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional14) {
                std_move(((struct sType*)((void*)(__right_value637=list$1void$ph$p_operator_load_element(param_types_662,n_674)))),come_value_673->type,come_value_673,info,(_Bool)1);
                come_call_finalizer3(__right_value637,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_666,n_674,(struct CVALUE*)come_increment_ref_count(come_value_673));
            come_call_finalizer3(come_value_673,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_670 = come_decrement_ref_count2(label_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_671) ? node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_688=0;
    for(    o2_saved_689=(params_513),it_690=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_689));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_689));    it_690=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_689))    ){
        multiple_assign_var16=it_690;
        label_691=(char*)come_increment_ref_count(multiple_assign_var16->v1);
        node_692=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2);
        if(        fun_639->mVarArgs||string_operator_equals(fun_name_512,"__builtin_va_start")) {
            Value_693=node_compile(node_692,info);
            if(            !Value_693) {
                __result_obj__389 = (_Bool)0;
                (label_691 = come_decrement_ref_count2(label_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_692) ? node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__389;
            }
            else {
            }
            come_value_694=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional15=(((struct CVALUE*)(__right_value639=list$1CVALUE$ph$p_operator_load_element(come_params_666,i_688)))==((void*)0))),                come_call_finalizer3(__right_value639,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional15) {
                    break;
                }
                else {
                    i_688++;
                }
            }
            list$1CVALUE$ph$p_replace(come_params_666,i_688,(struct CVALUE*)come_increment_ref_count(come_value_694));
            i_688++;
            come_call_finalizer3(come_value_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_691) {
        }
        else {
            Value_695=node_compile(node_692,info);
            if(            !Value_695) {
                __result_obj__390 = (_Bool)0;
                (label_691 = come_decrement_ref_count2(label_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_692) ? node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__390;
            }
            else {
            }
            come_value_696=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value641=list$1CVALUE$ph$p_operator_load_element(come_params_666,i_688)))==((void*)0))),                come_call_finalizer3(__right_value641,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    break;
                }
                else {
                    i_688++;
                }
            }
            if(            (_if_conditional17=(((struct sType*)((void*)(__right_value642=list$1void$ph$p_operator_load_element(param_types_662,i_688)))))),            come_call_finalizer3(__right_value642,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional17) {
                multiple_assign_var17=((struct tuple2$2bool$char$ph*)(__right_value647=check_assign_type(((char*)(__right_value645=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value643=string_to_string(fun_name_512))),((char*)(__right_value644=int_to_string(i_688)))))),((struct sType*)((void*)(__right_value646=list$1void$ph$p_operator_load_element(param_types_662,i_688)))),come_value_696->type,come_value_696,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_697=multiple_assign_var17->v1;
                Err_698=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional18=(Err_698)),                (__right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value646,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value647,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result_obj__391 = (_Bool)1;
                    (Err_698 = come_decrement_ref_count2(Err_698, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_696,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (label_691 = come_decrement_ref_count2(label_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_692) ? node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__391;
                }
                else {
                }
                (Err_698 = come_decrement_ref_count2(Err_698, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional19=(((struct sType*)((void*)(__right_value648=list$1void$ph$p_operator_load_element(param_types_662,i_688))))&&((struct sType*)((void*)(__right_value649=list$1void$ph$p_operator_load_element(param_types_662,i_688))))->mHeap&&come_value_696->type->mHeap)),            come_call_finalizer3(__right_value648,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value649,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)((void*)(__right_value650=list$1void$ph$p_operator_load_element(param_types_662,i_688)))),come_value_696->type,come_value_696,info,(_Bool)1);
                come_call_finalizer3(__right_value650,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            list$1CVALUE$ph$p_replace(come_params_666,i_688,(struct CVALUE*)come_increment_ref_count(come_value_696));
            i_688++;
            come_call_finalizer3(come_value_696,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        (label_691 = come_decrement_ref_count2(label_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_692) ? node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(        (_if_conditional20=(((struct CVALUE*)(__right_value651=list$1CVALUE$ph$p_operator_load_element(come_params_666,i_688)))==((void*)0))),        come_call_finalizer3(__right_value651,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional20) {
            break;
        }
        else {
            i_688++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph$p_length(params_513)<list$1void$ph$p_length(fun_639->mParamTypes)) {
        for(        ;        i_688<list$1void$ph$p_length(fun_639->mParamTypes)-(((method_block_514)?(2):(0)));        i_688++        ){
            default_param_699=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value652=list$1char$ph$p_operator_load_element(fun_639->mParamDefaultParametors,i_688)))));
            (__right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_703=((char*)(__right_value654=list$1char$ph$p_operator_load_element(fun_639->mParamNames,i_688)));
            (__right_value654 = come_decrement_ref_count2(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional21=(default_param_699&&string_operator_not_equals(default_param_699,"")&&((struct CVALUE*)(__right_value655=list$1CVALUE$ph$p_operator_load_element(come_params_666,i_688)))==((void*)0))),            come_call_finalizer3(__right_value655,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional21) {
                source_704=(struct buffer*)come_increment_ref_count(info->source);
                p_705=info->p;
                head_706=info->head;
                sline_707=info->sline;
                __dec_obj228=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_699));
                come_call_finalizer3(__dec_obj228,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_708=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_709=node_compile(node_708,info);
                if(                !Value_709) {
                    __result_obj__394 = (_Bool)0;
                    come_call_finalizer3(source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_708) ? node_708 = come_decrement_ref_count2(node_708, ((struct sNode*)node_708)->finalize, ((struct sNode*)node_708)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_699 = come_decrement_ref_count2(default_param_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__394;
                }
                else {
                }
                __dec_obj229=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_704);
                come_call_finalizer3(__dec_obj229,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_705;
                info->head=head_706;
                info->sline=sline_707;
                come_value_710=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional22=(((struct sType*)((void*)(__right_value659=list$1void$ph$p_operator_load_element(param_types_662,i_688)))))),                come_call_finalizer3(__right_value659,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional22) {
                    multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value664=check_assign_type(((char*)(__right_value662=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value660=string_to_string(fun_name_512))),((char*)(__right_value661=int_to_string(i_688)))))),((struct sType*)((void*)(__right_value663=list$1void$ph$p_operator_load_element(param_types_662,i_688)))),come_value_710->type,come_value_710,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_8_711=multiple_assign_var18->v1;
                    Err_712=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                    if(                    (_if_conditional23=(Err_712)),                    (__right_value660 = come_decrement_ref_count2(__right_value660, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value662 = come_decrement_ref_count2(__right_value662, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value663,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value664,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional23) {
                        __result_obj__395 = (_Bool)1;
                        (Err_712 = come_decrement_ref_count2(Err_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_708) ? node_708 = come_decrement_ref_count2(node_708, ((struct sNode*)node_708)->finalize, ((struct sNode*)node_708)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(come_value_710,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (default_param_699 = come_decrement_ref_count2(default_param_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__395;
                    }
                    else {
                    }
                    (Err_712 = come_decrement_ref_count2(Err_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional24=(((struct sType*)((void*)(__right_value665=list$1void$ph$p_operator_load_element(param_types_662,i_688))))&&((struct sType*)((void*)(__right_value666=list$1void$ph$p_operator_load_element(param_types_662,i_688))))->mHeap&&come_value_710->type->mHeap)),                come_call_finalizer3(__right_value665,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value666,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional24) {
                    std_move(((struct sType*)((void*)(__right_value667=list$1void$ph$p_operator_load_element(param_types_662,i_688)))),come_value_710->type,come_value_710,info,(_Bool)1);
                    come_call_finalizer3(__right_value667,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_666,i_688,(struct CVALUE*)come_increment_ref_count(come_value_710));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_708) ? node_708 = come_decrement_ref_count2(node_708, ((struct sNode*)node_708)->finalize, ((struct sNode*)node_708)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_710,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional25=(((struct CVALUE*)(__right_value668=list$1CVALUE$ph$p_operator_load_element(come_params_666,i_688)))==((void*)0))),                come_call_finalizer3(__right_value668,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value669=err_msg(info,"require parametor(%s)(1) %d",fun_639->mName,i_688)));
                    come_exception_var_9_713=multiple_assign_var19->v1;
                    Err_714=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    if(                    (_if_conditional26=(Err_714)),                    come_call_finalizer3(__right_value669,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional26) {
                        __result_obj__396 = (_Bool)1;
                        (Err_714 = come_decrement_ref_count2(Err_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (default_param_699 = come_decrement_ref_count2(default_param_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__396;
                    }
                    else {
                    }
                    (Err_714 = come_decrement_ref_count2(Err_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            (default_param_699 = come_decrement_ref_count2(default_param_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1void$ph$p_length(fun_639->mParamTypes)-(((method_block_514)?(2):(0)))!=list$1CVALUE$ph$p_length(come_params_666)&&!fun_639->mVarArgs&&string_operator_not_equals(fun_name_512,"__builtin_va_start")&&string_operator_not_equals(fun_name_512,"__builtin_va_end")) {
        multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value670=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_512,list$1void$ph$p_length(fun_639->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_513))));
        come_exception_var_10_715=multiple_assign_var20->v1;
        Err_716=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        (_if_conditional27=(Err_716)),        come_call_finalizer3(__right_value670,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result_obj__397 = (_Bool)1;
            (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__397;
        }
        else {
        }
        (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    method_block_514) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1241, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value3=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value672=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1241, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode2_finalize;
        _inf_value3->clone=(void*)sCurrentNode2_clone;
        _inf_value3->compile=(void*)sCurrentNode2_compile;
        _inf_value3->sline=(void*)sCurrentNode2_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sCurrentNode2_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_717=(struct sNode*)come_increment_ref_count(_inf_value3);
        come_call_finalizer3(__right_value672,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_719=node_compile(current_stack_frame_node_717,info);
        if(        !Value_719) {
            __result_obj__400 = (_Bool)0;
            ((current_stack_frame_node_717) ? current_stack_frame_node_717 = come_decrement_ref_count2(current_stack_frame_node_717, ((struct sNode*)current_stack_frame_node_717)->finalize, ((struct sNode*)current_stack_frame_node_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__400;
        }
        else {
        }
        come_value_720=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph$p_push_back(come_params_666,(struct CVALUE*)come_increment_ref_count(come_value_720));
        dec_stack_ptr(1,info);
        method_block2_721=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1251, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        method_block_type_722=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value679=list$1void$ph$p_operator_load_element(fun_639->mParamTypes,-1))))));
        come_call_finalizer3(__right_value679,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        class_name_723=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)((void*)(__right_value682=list$1void$ph$p_operator_load_element(method_block_type_722->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value683=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_723))));
        come_call_finalizer3(__right_value682,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(__right_value683,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        current_stack_frame_struct_724=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value684=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_723))));
        come_call_finalizer3(__right_value684,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_722->mClass->mName,"lambda")) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value685=err_msg(info,"This function does not have method block(%s)",fun_name_512)));
            come_exception_var_11_725=multiple_assign_var21->v1;
            Err_726=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional28=(Err_726)),            come_call_finalizer3(__right_value685,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional28) {
                __result_obj__401 = (_Bool)1;
                (Err_726 = come_decrement_ref_count2(Err_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_717) ? current_stack_frame_node_717 = come_decrement_ref_count2(current_stack_frame_node_717, ((struct sNode*)current_stack_frame_node_717)->finalize, ((struct sNode*)current_stack_frame_node_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_720,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_723 = come_decrement_ref_count2(class_name_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__401;
            }
            else {
            }
            (Err_726 = come_decrement_ref_count2(Err_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_727=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_722->mResultType));
        result_type_727->mStatic=(_Bool)0;
        param_types_728=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, method_block_type_722->mParamTypes));
        param_names_729=method_block_type_722->mParamNames;
        all_alhabet_sname_730=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1273, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        {
            p_731=info->sname;
            while(*p_731) {
                if(                xisalnum(*p_731)) {
                    buffer_append_char(all_alhabet_sname_730,*p_731++);
                }
                else {
                    p_731++;
                }
            }
        }
        buffer_append_format(method_block2_721,"%s fun_block%d_%s(",((char*)(__right_value690=make_type_name_string(result_type_727,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value691=buffer_to_string(all_alhabet_sname_730))));
        (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_688=0;
        for(        o2_saved_732=(struct list$1void$ph*)come_increment_ref_count((param_types_728)),it_733=((struct sType*)list$1void$ph$p_begin((o2_saved_732)));        !list$1void$ph$p_end((o2_saved_732));        it_733=((struct sType*)list$1void$ph$p_next((o2_saved_732)))        ){
            param_type_734=it_733;
            if(            i_688==0) {
                param_name_735=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_721,"%s",((char*)(__right_value693=make_define_var(param_type_734,param_name_735,(_Bool)0,info))));
                (__right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_735 = come_decrement_ref_count2(param_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_688==1) {
                param_name_736=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_721,"%s",((char*)(__right_value695=make_define_var_no_solved(param_type_734,param_name_736,(_Bool)0,(_Bool)1,info))));
                (__right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_736 = come_decrement_ref_count2(param_name_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_737=(char*)come_increment_ref_count(xsprintf("it%d",i_688));
                buffer_append_format(method_block2_721,"%s",((char*)(__right_value697=make_define_var_no_solved(param_type_734,param_name_737,(_Bool)0,(_Bool)1,info))));
                (__right_value697 = come_decrement_ref_count2(__right_value697, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_737 = come_decrement_ref_count2(param_name_737, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_688!=list$1void$ph$p_length(param_types_728)-1) {
                buffer_append_str(method_block2_721,",");
            }
            i_688++;
        }
        come_call_finalizer3(o2_saved_732,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_721,")\n");
        buffer_append_str(method_block2_721,((char*)(__right_value698=buffer_to_string(method_block_514))));
        (__right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_738=(struct buffer*)come_increment_ref_count(info->source);
        p_739=info->p;
        head_740=info->head;
        sline_741=info->sline;
        __dec_obj231=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_721);
        come_call_finalizer3(__dec_obj231,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_515;
        node_742=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_743=node_compile(node_742,info);
        if(        !Value_743) {
            __result_obj__402 = (_Bool)0;
            ((current_stack_frame_node_717) ? current_stack_frame_node_717 = come_decrement_ref_count2(current_stack_frame_node_717, ((struct sNode*)current_stack_frame_node_717)->finalize, ((struct sNode*)current_stack_frame_node_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_720,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_723 = come_decrement_ref_count2(class_name_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_728,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_730,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_738,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__402;
        }
        else {
        }
        method_block_name_744=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value700=buffer_to_string(all_alhabet_sname_730)))));
        (__right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_745=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1338, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun2_746=((struct sFun*)((void*)(__right_value705=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value704=__builtin_string(method_block_name_744))),((void*)0)))));
        (__right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value705,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun2_746==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value706=err_msg(info,"method block function not found(%s)",method_block_name_744)));
            come_exception_var_12_747=multiple_assign_var22->v1;
            Err_748=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional29=(Err_748)),            come_call_finalizer3(__right_value706,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional29) {
                __result_obj__403 = (_Bool)1;
                (Err_748 = come_decrement_ref_count2(Err_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((current_stack_frame_node_717) ? current_stack_frame_node_717 = come_decrement_ref_count2(current_stack_frame_node_717, ((struct sNode*)current_stack_frame_node_717)->finalize, ((struct sNode*)current_stack_frame_node_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_720,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                (class_name_723 = come_decrement_ref_count2(class_name_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_728,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_730,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_738,buffer_finalize, 0, 0, 0, 0, (void*)0);
                ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (method_block_name_744 = come_decrement_ref_count2(method_block_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value2_745,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__403;
            }
            else {
            }
            (Err_748 = come_decrement_ref_count2(Err_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        method_block_type2_749=fun2_746->mLambdaType;
        __dec_obj232=come_value2_745->c_value;
        come_value2_745->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_744));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj233=come_value2_745->type;
        come_value2_745->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_749));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_745->var=((void*)0);
        list$1CVALUE$ph$p_push_back(come_params_666,(struct CVALUE*)come_increment_ref_count(come_value2_745));
        __dec_obj234=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_738);
        come_call_finalizer3(__dec_obj234,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_739;
        info->head=head_740;
        info->sline=sline_741;
        info->current_stack_frame_struct=current_stack_frame_struct_724;
        ((current_stack_frame_node_717) ? current_stack_frame_node_717 = come_decrement_ref_count2(current_stack_frame_node_717, ((struct sNode*)current_stack_frame_node_717)->finalize, ((struct sNode*)current_stack_frame_node_717)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_720,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_723 = come_decrement_ref_count2(class_name_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_728,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_730,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_738,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_744 = come_decrement_ref_count2(method_block_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_745,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_750=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1364, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_750,fun_name_512);
    buffer_append_str(buf_750,"(");
    j_751=0;
    for(    o2_saved_752=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_666)),it_753=list$1CVALUE$ph$p_begin((o2_saved_752));    !list$1CVALUE$ph$p_end((o2_saved_752));    it_753=list$1CVALUE$ph$p_next((o2_saved_752))    ){
        buffer_append_str(buf_750,it_753->c_value);
        if(        j_751!=list$1CVALUE$ph$p_length(come_params_666)-1) {
            buffer_append_str(buf_750,",");
        }
        j_751++;
    }
    come_call_finalizer3(o2_saved_752,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_750,")");
    come_value_754=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1381, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj235=come_value_754->c_value;
    come_value_754->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_750));
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj236=come_value_754->type;
    come_value_754->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_654));
    come_call_finalizer3(__dec_obj236,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_754->type->mStatic=(_Bool)0;
    come_value_754->var=((void*)0);
    if(    fun_639->mResultType->mHeap) {
        append_object_to_right_values2(come_value_754,(struct sType*)come_increment_ref_count(result_type_654),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_512,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_512,"null_check")&&string_operator_not_equals(fun_name_512,"come_push_stackframe")&&string_operator_not_equals(fun_name_512,"come_pop_stackframe")) {
            __dec_obj237=come_value_754->c_value;
            come_value_754->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_754->c_value,come_value_754->type,info));
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_654->mGuardValue&&result_type_654->mPointerNum>0) {
        __dec_obj238=come_value_754->c_value;
        come_value_754->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value716=make_type_name_string(result_type_654,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_754->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value716 = come_decrement_ref_count2(__right_value716, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj239=come_value_754;
    come_value_754=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_754),info));
    come_call_finalizer3(__dec_obj239,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    add_come_last_code(info,"%s",come_value_754->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_754));
    info->calling_fun=fun_639;
    __result_obj__404 = (_Bool)1;
    (fun_name_512 = come_decrement_ref_count2(fun_name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_662,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_750,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_754,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__404;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__330;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_504;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_505;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__335;
    if(    self==((void*)0)) {
        __result_obj__330 = come_increment_ref_count(((void*)0));
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__330,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__330;
    }
    result_504=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_505=self->head;
    while(it_505!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_504,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_505->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_504,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_505->item)));
        }
        it_505=it_505->next;
    }
    __result_obj__335 = come_increment_ref_count(result_504);
    come_call_finalizer3(result_504,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__335,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__335;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_502;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_503;
    it_502=self->head;
    while(it_502!=((void*)0)) {
        prev_it_503=it_502;
        it_502=it_502->next;
        come_call_finalizer3(prev_it_503,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* __dec_obj143;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj143=self->item;
            come_call_finalizer3(__dec_obj143,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
char* __dec_obj144;
struct sNode* __dec_obj145;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj144=self->v1;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj145=self->v2;
            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__331;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__331 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__331,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__331;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value439 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_506;
struct tuple2$2char$phsNode$ph* __dec_obj146;
void* __right_value440 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_507;
struct tuple2$2char$phsNode$ph* __dec_obj147;
void* __right_value441 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_508;
struct tuple2$2char$phsNode$ph* __dec_obj148;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__332;
    if(    self->len==0) {
        litem_506=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value439=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1387, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_506->prev=((void*)0);
        litem_506->next=((void*)0);
        __dec_obj146=litem_506->item;
        litem_506->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj146,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_506;
        self->head=litem_506;
    }
    else if(    self->len==1) {
        litem_507=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value440=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1397, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_507->prev=self->head;
        litem_507->next=((void*)0);
        __dec_obj147=litem_507->item;
        litem_507->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj147,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_507;
        self->head->next=litem_507;
    }
    else {
        litem_508=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value441=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1407, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_508->prev=self->tail;
        litem_508->next=((void*)0);
        __dec_obj148=litem_508->item;
        litem_508->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj148,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_508;
        self->tail=litem_508;
    }
    self->len++;
    __result_obj__332 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__332;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__333;
void* __right_value442 = (void*)0;
struct tuple2$2char$phsNode$ph* result_509;
void* __right_value443 = (void*)0;
char* __dec_obj149;
void* __right_value444 = (void*)0;
struct sNode* __dec_obj150;
struct tuple2$2char$phsNode$ph* __result_obj__334;
    if(    self==(void*)0) {
        __result_obj__333 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__333,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__333;
    }
    result_509=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj149=result_509->v1;
        result_509->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj150=result_509->v2;
        result_509->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__334 = come_increment_ref_count(result_509);
    come_call_finalizer3(result_509,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__334,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
char* __dec_obj151;
struct sNode* __dec_obj152;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj151=self->v1;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj152=self->v2;
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_510;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_511;
    it_510=self->head;
    while(it_510!=((void*)0)) {
        prev_it_511=it_510;
        it_510=it_510->next;
        come_call_finalizer3(prev_it_511,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj156;
char* __dec_obj157;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj158;
struct list$1void$ph* __dec_obj159;
struct buffer* __dec_obj160;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj156=self->sname;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj157=self->fun_name;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj158=self->params;
            come_call_finalizer3(__dec_obj158,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj159=self->method_generics_types;
            come_call_finalizer3(__dec_obj159,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj160=self->method_block;
            come_call_finalizer3(__dec_obj160,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
char* __dec_obj161;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj161=self->v2;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__339;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__339 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__339,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_522;
struct list_item$1CVALUE$ph* prev_it_523;
    it_522=self->head;
    while(it_522!=((void*)0)) {
        prev_it_523=it_522;
        it_522=it_522->next;
        come_call_finalizer3(prev_it_523,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
struct CVALUE* __dec_obj162;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj162=self->item;
            come_call_finalizer3(__dec_obj162,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
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
struct tuple2$2char$phsNode$ph* result_528;
struct tuple2$2char$phsNode$ph* __result_obj__341;
struct tuple2$2char$phsNode$ph* __result_obj__342;
struct tuple2$2char$phsNode$ph* result_529;
struct tuple2$2char$phsNode$ph* __result_obj__343;
result_528 = (void*)0;
result_529 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_528,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__341 = result_528;
        gComeFunResultObject = (void*)0;
        return __result_obj__341;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__342 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__342;
    }
    memset(&result_529,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__343 = result_529;
    gComeFunResultObject = (void*)0;
    return __result_obj__343;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_531;
struct tuple2$2char$phsNode$ph* __result_obj__344;
struct tuple2$2char$phsNode$ph* __result_obj__345;
struct tuple2$2char$phsNode$ph* result_532;
struct tuple2$2char$phsNode$ph* __result_obj__346;
result_531 = (void*)0;
result_532 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_531,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__344 = result_531;
        gComeFunResultObject = (void*)0;
        return __result_obj__344;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__345 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__345;
    }
    memset(&result_532,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__346 = result_532;
    gComeFunResultObject = (void*)0;
    return __result_obj__346;
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_537;
int i_538;
void* __result_obj__348;
void* default_value_539;
void* __result_obj__349;
default_value_539 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_537=self->head;
    i_538=0;
    while(it_537!=((void*)0)) {
        if(        position==i_538) {
            __result_obj__348 = come_increment_ref_count(it_537->item);
            gComeFunResultObject = (void*)0;
            come_call_finalizer3(__result_obj__348,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__348;
        }
        it_537=it_537->next;
        i_538++;
    }
    memset(&default_value_539,0,sizeof(void*));
    __result_obj__349 = come_increment_ref_count(((struct sType*)default_value_539));
    come_call_finalizer3(default_value_539,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__349,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__349;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_545;
struct CVALUE* __result_obj__351;
struct CVALUE* __result_obj__352;
struct CVALUE* result_546;
struct CVALUE* __result_obj__353;
result_545 = (void*)0;
result_546 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_545,0,sizeof(struct CVALUE*));
        __result_obj__351 = result_545;
        gComeFunResultObject = (void*)0;
        return __result_obj__351;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__352 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__352;
    }
    memset(&result_546,0,sizeof(struct CVALUE*));
    __result_obj__353 = result_546;
    gComeFunResultObject = (void*)0;
    return __result_obj__353;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_548;
struct CVALUE* __result_obj__354;
struct CVALUE* __result_obj__355;
struct CVALUE* result_549;
struct CVALUE* __result_obj__356;
result_548 = (void*)0;
result_549 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_548,0,sizeof(struct CVALUE*));
        __result_obj__354 = result_548;
        gComeFunResultObject = (void*)0;
        return __result_obj__354;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__355 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__355;
    }
    memset(&result_549,0,sizeof(struct CVALUE*));
    __result_obj__356 = result_549;
    gComeFunResultObject = (void*)0;
    return __result_obj__356;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
char* __dec_obj165;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj165=self->v1;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_562;
int i_563;
struct CVALUE* __result_obj__359;
struct CVALUE* default_value_564;
struct CVALUE* __result_obj__360;
default_value_564 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_562=self->head;
    i_563=0;
    while(it_562!=((void*)0)) {
        if(        position==i_563) {
            __result_obj__359 = come_increment_ref_count(it_562->item);
            gComeFunResultObject = (void*)0;
            come_call_finalizer3(__result_obj__359,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__359;
        }
        it_562=it_562->next;
        i_563++;
    }
    memset(&default_value_564,0,sizeof(struct CVALUE*));
    __result_obj__360 = come_increment_ref_count(default_value_564);
    come_call_finalizer3(default_value_564,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__360,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__360;
}

static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item){
    list$1void$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item){
int len_570;
int i_571;
void* default_value_572;
struct list$1void$ph* __result_obj__361;
struct list_item$1void$ph* it_573;
int i_574;
void* __dec_obj166;
struct list$1void$ph* __result_obj__362;
default_value_572 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_570=self->len;
        for(        i_571=0;        i_571<position-len_570;        i_571++        ){
            memset(&default_value_572,0,sizeof(void*));
            list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(default_value_572));
            come_call_finalizer3(default_value_572,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(item));
        __result_obj__361 = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result_obj__361;
    }
    it_573=self->head;
    i_574=0;
    while(it_573!=((void*)0)) {
        if(        position==i_574) {
            __dec_obj166=it_573->item;
            it_573->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj166,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_573=it_573->next;
        i_574++;
    }
    __result_obj__362 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__362;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value488 = (void*)0;
struct list_item$1CVALUE$ph* litem_588;
struct CVALUE* __dec_obj167;
void* __right_value489 = (void*)0;
struct list_item$1CVALUE$ph* litem_589;
struct CVALUE* __dec_obj168;
void* __right_value490 = (void*)0;
struct list_item$1CVALUE$ph* litem_590;
struct CVALUE* __dec_obj169;
struct list$1CVALUE$ph* __result_obj__364;
    if(    self->len==0) {
        litem_588=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value488=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1387, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_588->prev=((void*)0);
        litem_588->next=((void*)0);
        __dec_obj167=litem_588->item;
        litem_588->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj167,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_588;
        self->head=litem_588;
    }
    else if(    self->len==1) {
        litem_589=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value489=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1397, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_589->prev=self->head;
        litem_589->next=((void*)0);
        __dec_obj168=litem_589->item;
        litem_589->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj168,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_589;
        self->head->next=litem_589;
    }
    else {
        litem_590=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value490=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1407, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_590->prev=self->tail;
        litem_590->next=((void*)0);
        __dec_obj169=litem_590->item;
        litem_590->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_590;
        self->tail=litem_590;
    }
    self->len++;
    __result_obj__364 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__364;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key){
unsigned int hash_596;
unsigned int it_597;
struct map$2void$phvoid$ph* __result_obj__365;
    hash_596=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_597=hash_596;
    while((_Bool)1) {
        if(        self->item_existance[it_597]) {
            if(            come_call_equals((void*)0, self->keys[it_597], key)) {
                list$1void$p$p_remove(self->key_list,self->keys[it_597]);
                self->item_existance[it_597]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_597],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_597]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_597],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_597]=((void*)0);
                self->len--;
                break;
            }
            it_597++;
            if(            it_597>=self->size) {
                it_597=0;
            }
            else if(            it_597==hash_596) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__365 = self;
    gComeFunResultObject = (void*)0;
    return __result_obj__365;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__373;
void* __right_value608 = (void*)0;
struct sFunCallNode* result_657;
void* __right_value609 = (void*)0;
char* __dec_obj221;
void* __right_value610 = (void*)0;
char* __dec_obj222;
void* __right_value611 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj223;
void* __right_value612 = (void*)0;
struct list$1void$ph* __dec_obj224;
void* __right_value613 = (void*)0;
struct buffer* __dec_obj225;
struct sFunCallNode* __result_obj__374;
    if(    self==(void*)0) {
        __result_obj__373 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__373;
    }
    result_657=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_657->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj221=result_657->sname;
        result_657->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_657->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj222=result_657->fun_name;
        result_657->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj223=result_657->params;
        result_657->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj223,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_657->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj224=result_657->method_generics_types;
        result_657->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj224,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj225=result_657->method_block;
        result_657->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_657->method_block_sline=self->method_block_sline;
    }
    __result_obj__374 = result_657;
    come_call_finalizer3(result_657,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__374;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_676;
char* __result_obj__380;
char* __result_obj__381;
char* result_677;
char* __result_obj__382;
result_676 = (void*)0;
result_677 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_676,0,sizeof(char*));
        __result_obj__380 = result_676;
        gComeFunResultObject = (void*)0;
        return __result_obj__380;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__381 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__381;
    }
    memset(&result_677,0,sizeof(char*));
    __result_obj__382 = result_677;
    gComeFunResultObject = (void*)0;
    return __result_obj__382;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_679;
char* __result_obj__383;
char* __result_obj__384;
char* result_680;
char* __result_obj__385;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_679,0,sizeof(char*));
        __result_obj__383 = result_679;
        gComeFunResultObject = (void*)0;
        return __result_obj__383;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__384 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__384;
    }
    memset(&result_680,0,sizeof(char*));
    __result_obj__385 = result_680;
    gComeFunResultObject = (void*)0;
    return __result_obj__385;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_683;
int i_684;
struct CVALUE* default_value_685;
struct list$1CVALUE$ph* __result_obj__387;
struct list_item$1CVALUE$ph* it_686;
int i_687;
struct CVALUE* __dec_obj227;
struct list$1CVALUE$ph* __result_obj__388;
default_value_685 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_683=self->len;
        for(        i_684=0;        i_684<position-len_683;        i_684++        ){
            memset(&default_value_685,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_685));
            come_call_finalizer3(default_value_685,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__387 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result_obj__387;
    }
    it_686=self->head;
    i_687=0;
    while(it_686!=((void*)0)) {
        if(        position==i_687) {
            __dec_obj227=it_686->item;
            it_686->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj227,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_686=it_686->next;
        i_687++;
    }
    __result_obj__388 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__388;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_700;
int i_701;
char* __result_obj__392;
char* default_value_702;
char* __result_obj__393;
default_value_702 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_700=self->head;
    i_701=0;
    while(it_700!=((void*)0)) {
        if(        position==i_701) {
            __result_obj__392 = come_increment_ref_count(it_700->item);
            gComeFunResultObject = (void*)0;
            (__result_obj__392 = come_decrement_ref_count2(__result_obj__392, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__392;
        }
        it_700=it_700->next;
        i_701++;
    }
    memset(&default_value_702,0,sizeof(char*));
    __result_obj__393 = come_increment_ref_count(default_value_702);
    (default_value_702 = come_decrement_ref_count2(default_value_702, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__393 = come_decrement_ref_count2(__result_obj__393, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__393;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__398;
void* __right_value673 = (void*)0;
struct sCurrentNode2* result_718;
void* __right_value674 = (void*)0;
char* __dec_obj230;
struct sCurrentNode2* __result_obj__399;
    if(    self==(void*)0) {
        __result_obj__398 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__398;
    }
    result_718=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_718->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_718->sname;
        result_718->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_718->sline_real=self->sline_real;
    }
    __result_obj__399 = result_718;
    come_call_finalizer3(result_718,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__399;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value719 = (void*)0;
struct buffer* __dec_obj240;
struct sComeCallNode* __result_obj__405;
    ((struct sNodeBase*)(__right_value719=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value719,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj240=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj240,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__405 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__405,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__405;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value720 = (void*)0;
char* __result_obj__406;
    __result_obj__406 = come_increment_ref_count(((char*)(__right_value720=__builtin_string("sComeCallNode"))));
    (__right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__406 = come_decrement_ref_count2(__result_obj__406, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__406;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_755;
struct buffer* come_block_756;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1CVALUE$ph* come_params_757;
void* __right_value723 = (void*)0;
char* var_name_759;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sType* type__760;
void* __right_value727 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_13_761=0;
char* Err_762=0;
_Bool _if_conditional30;
_Bool __result_obj__407;
void* __right_value728 = (void*)0;
struct sNode* var_node_763;
_Bool Value_764;
_Bool __result_obj__408;
void* __right_value729 = (void*)0;
struct CVALUE* thread_var_value_765;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct CVALUE* come_value_766;
void* __right_value732 = (void*)0;
char* __dec_obj243;
struct sType* __dec_obj244;
void* __right_value733 = (void*)0;
struct sNode* null_node_767;
_Bool Value_768;
_Bool __result_obj__409;
void* __right_value734 = (void*)0;
struct CVALUE* __dec_obj245;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode2* _inf_obj_value4;
void* __right_value737 = (void*)0;
struct sNode* current_stack_frame_node_769;
_Bool Value_770;
_Bool __result_obj__410;
void* __right_value738 = (void*)0;
struct CVALUE* current_stack_frame_value_771;
void* __right_value739 = (void*)0;
char* fun_name_772;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct buffer* come_block2_773;
void* __right_value742 = (void*)0;
char* class_name_774;
void* __right_value743 = (void*)0;
struct sClass* current_stack_frame_struct_775;
void* __right_value744 = (void*)0;
struct buffer* source3_776;
char* p_777;
char* head_778;
int sline_779;
struct buffer* __dec_obj246;
void* __right_value745 = (void*)0;
struct sNode* node_780;
_Bool Value_781;
_Bool __result_obj__411;
struct buffer* __dec_obj247;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct CVALUE* fun_value_782;
void* __right_value748 = (void*)0;
char* __dec_obj248;
struct sType* __dec_obj249;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct buffer* buf_783;
void* __right_value751 = (void*)0;
char* fun_name_784;
int j_785;
struct list$1CVALUE$ph* o2_saved_786;
struct CVALUE* it_787;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct CVALUE* come_value_788;
void* __right_value754 = (void*)0;
char* __dec_obj250;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sType* type_789;
void* __right_value758 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_14_790=0;
char* Err_791=0;
_Bool _if_conditional31;
_Bool __result_obj__412;
struct sType* __dec_obj251;
_Bool __result_obj__413;
    come_block_sline_755=self->come_block_sline;
    come_block_756=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_757=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1438, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int thread_num_758=0;
    thread_num_758++;
    var_name_759=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_758));
    type__760=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value725=map$2void$phvoid$ph$p_at(info->types,((char*)(__right_value724=xsprintf("pthread_t"))),((void*)0)))))));
    (__right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value725,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    type__760==((void*)0)) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value727=err_msg(info,"pthread_t is not defined")));
        come_exception_var_13_761=multiple_assign_var23->v1;
        Err_762=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional30=(Err_762)),        come_call_finalizer3(__right_value727,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional30) {
            __result_obj__407 = (_Bool)1;
            (Err_762 = come_decrement_ref_count2(Err_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_759 = come_decrement_ref_count2(var_name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__760,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__407;
        }
        else {
        }
        (Err_762 = come_decrement_ref_count2(Err_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    var_node_763=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_759),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__760),(_Bool)1,((void*)0),info));
    Value_764=node_compile(var_node_763,info);
    if(    !Value_764) {
        __result_obj__408 = (_Bool)0;
        come_call_finalizer3(come_block_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_759 = come_decrement_ref_count2(var_name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__760,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_763) ? var_node_763 = come_decrement_ref_count2(var_node_763, ((struct sNode*)var_node_763)->finalize, ((struct sNode*)var_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__408;
    }
    else {
    }
    thread_var_value_765=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_766=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1462, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj243=come_value_766->c_value;
    come_value_766->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_765->c_value));
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=come_value_766->type;
    come_value_766->type=(struct sType*)come_increment_ref_count(thread_var_value_765->type);
    come_call_finalizer3(__dec_obj244,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_766->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_757,(struct CVALUE*)come_increment_ref_count(come_value_766));
    null_node_767=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_768=node_compile(null_node_767,info);
    if(    !Value_768) {
        __result_obj__409 = (_Bool)0;
        come_call_finalizer3(come_block_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_759 = come_decrement_ref_count2(var_name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__760,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_763) ? var_node_763 = come_decrement_ref_count2(var_node_763, ((struct sNode*)var_node_763)->finalize, ((struct sNode*)var_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_765,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_766,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_767) ? null_node_767 = come_decrement_ref_count2(null_node_767, ((struct sNode*)null_node_767)->finalize, ((struct sNode*)null_node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__409;
    }
    else {
    }
    __dec_obj245=come_value_766;
    come_value_766=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj245,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUE$ph$p_push_back(come_params_757,(struct CVALUE*)come_increment_ref_count(come_value_766));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1480, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value736=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1480, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCurrentNode2_finalize;
    _inf_value4->clone=(void*)sCurrentNode2_clone;
    _inf_value4->compile=(void*)sCurrentNode2_compile;
    _inf_value4->sline=(void*)sCurrentNode2_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sCurrentNode2_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_769=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value736,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_770=node_compile(current_stack_frame_node_769,info);
    if(    !Value_770) {
        __result_obj__410 = (_Bool)0;
        come_call_finalizer3(come_block_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_759 = come_decrement_ref_count2(var_name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__760,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_763) ? var_node_763 = come_decrement_ref_count2(var_node_763, ((struct sNode*)var_node_763)->finalize, ((struct sNode*)var_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_765,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_766,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_767) ? null_node_767 = come_decrement_ref_count2(null_node_767, ((struct sNode*)null_node_767)->finalize, ((struct sNode*)null_node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_769) ? current_stack_frame_node_769 = come_decrement_ref_count2(current_stack_frame_node_769, ((struct sNode*)current_stack_frame_node_769)->finalize, ((struct sNode*)current_stack_frame_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__410;
    }
    else {
    }
    current_stack_frame_value_771=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_772=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_758));
    come_block2_773=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1491, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    class_name_774=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_773,"void* %s(%s* parent)\n",fun_name_772,class_name_774);
    buffer_append_str(come_block2_773,((char*)(__right_value743=buffer_to_string(come_block_756))));
    (__right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_775=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value744=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_774))));
    come_call_finalizer3(__right_value744,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    source3_776=(struct buffer*)come_increment_ref_count(info->source);
    p_777=info->p;
    head_778=info->head;
    sline_779=info->sline;
    __dec_obj246=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_773);
    come_call_finalizer3(__dec_obj246,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_755;
    node_780=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_781=node_compile(node_780,info);
    if(    !Value_781) {
        __result_obj__411 = (_Bool)0;
        come_call_finalizer3(come_block_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_759 = come_decrement_ref_count2(var_name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type__760,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((var_node_763) ? var_node_763 = come_decrement_ref_count2(var_node_763, ((struct sNode*)var_node_763)->finalize, ((struct sNode*)var_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(thread_var_value_765,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_766,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        ((null_node_767) ? null_node_767 = come_decrement_ref_count2(null_node_767, ((struct sNode*)null_node_767)->finalize, ((struct sNode*)null_node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_769) ? current_stack_frame_node_769 = come_decrement_ref_count2(current_stack_frame_node_769, ((struct sNode*)current_stack_frame_node_769)->finalize, ((struct sNode*)current_stack_frame_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(current_stack_frame_value_771,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_772 = come_decrement_ref_count2(fun_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_block2_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_774 = come_decrement_ref_count2(class_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_776,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_780) ? node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__411;
    }
    else {
    }
    __dec_obj247=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_776);
    come_call_finalizer3(__dec_obj247,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_777;
    info->head=head_778;
    info->sline=sline_779;
    info->current_stack_frame_struct=current_stack_frame_struct_775;
    fun_value_782=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1525, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj248=fun_value_782->c_value;
    fun_value_782->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_772));
    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj249=come_value_766->type;
    come_value_766->type=((void*)0);
    come_call_finalizer3(__dec_obj249,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_766->var=((void*)0);
    list$1CVALUE$ph$p_add(come_params_757,(struct CVALUE*)come_increment_ref_count(fun_value_782));
    list$1CVALUE$ph$p_add(come_params_757,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_771));
    buf_783=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1535, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    (fun_name_772 = come_decrement_ref_count2(fun_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_784=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_783,"(");
    buffer_append_str(buf_783,fun_name_784);
    buffer_append_str(buf_783,"(");
    j_785=0;
    for(    o2_saved_786=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_757)),it_787=list$1CVALUE$ph$p_begin((o2_saved_786));    !list$1CVALUE$ph$p_end((o2_saved_786));    it_787=list$1CVALUE$ph$p_next((o2_saved_786))    ){
        buffer_append_str(buf_783,it_787->c_value);
        if(        j_785!=list$1CVALUE$ph$p_length(come_params_757)-1) {
            buffer_append_str(buf_783,",");
        }
        j_785++;
    }
    come_call_finalizer3(o2_saved_786,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_783,")");
    buffer_append_str(buf_783,", ");
    buffer_append_str(buf_783,thread_var_value_765->c_value);
    buffer_append_str(buf_783,")");
    come_call_finalizer3(come_value_766,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_788=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1558, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj250=come_value_788->c_value;
    come_value_788->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_783));
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_789=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value756=map$2void$phvoid$ph$p_at(info->types,((char*)(__right_value755=xsprintf("pthread_t"))),((void*)0)))))));
    (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value756,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    type_789==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value758=err_msg(info,"pthread_t is not defined")));
        come_exception_var_14_790=multiple_assign_var24->v1;
        Err_791=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional31=(Err_791)),        come_call_finalizer3(__right_value758,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional31) {
            __result_obj__412 = (_Bool)1;
            (Err_791 = come_decrement_ref_count2(Err_791, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_block_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_759 = come_decrement_ref_count2(var_name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type__760,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((var_node_763) ? var_node_763 = come_decrement_ref_count2(var_node_763, ((struct sNode*)var_node_763)->finalize, ((struct sNode*)var_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(thread_var_value_765,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((null_node_767) ? null_node_767 = come_decrement_ref_count2(null_node_767, ((struct sNode*)null_node_767)->finalize, ((struct sNode*)null_node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((current_stack_frame_node_769) ? current_stack_frame_node_769 = come_decrement_ref_count2(current_stack_frame_node_769, ((struct sNode*)current_stack_frame_node_769)->finalize, ((struct sNode*)current_stack_frame_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(current_stack_frame_value_771,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_block2_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (class_name_774 = come_decrement_ref_count2(class_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_776,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_780) ? node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(fun_value_782,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_783,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_784 = come_decrement_ref_count2(fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_788,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__412;
        }
        else {
        }
        (Err_791 = come_decrement_ref_count2(Err_791, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj251=come_value_788->type;
    come_value_788->type=(struct sType*)come_increment_ref_count(type_789);
    come_call_finalizer3(__dec_obj251,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_788->var=((void*)0);
    add_come_last_code(info,"%s",come_value_788->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_788));
    __result_obj__413 = (_Bool)1;
    come_call_finalizer3(come_block_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_757,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_759 = come_decrement_ref_count2(var_name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type__760,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((var_node_763) ? var_node_763 = come_decrement_ref_count2(var_node_763, ((struct sNode*)var_node_763)->finalize, ((struct sNode*)var_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(thread_var_value_765,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    ((null_node_767) ? null_node_767 = come_decrement_ref_count2(null_node_767, ((struct sNode*)null_node_767)->finalize, ((struct sNode*)null_node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_769) ? current_stack_frame_node_769 = come_decrement_ref_count2(current_stack_frame_node_769, ((struct sNode*)current_stack_frame_node_769)->finalize, ((struct sNode*)current_stack_frame_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(current_stack_frame_value_771,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_774 = come_decrement_ref_count2(class_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source3_776,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_780) ? node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(fun_value_782,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_783,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name_784 = come_decrement_ref_count2(fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_788,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__413;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj241;
struct buffer* __dec_obj242;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj241=self->sname;
            __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj242=self->come_block;
            come_call_finalizer3(__dec_obj242,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value759 = (void*)0;
struct sNode* __dec_obj252;
struct sComeJoinNode* __result_obj__414;
    ((struct sNodeBase*)(__right_value759=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value759,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj252=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__414 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__414,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__414;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value760 = (void*)0;
char* __result_obj__415;
    __result_obj__415 = come_increment_ref_count(((char*)(__right_value760=__builtin_string("sComeJoinNode"))));
    (__right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__415 = come_decrement_ref_count2(__result_obj__415, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__415;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_792;
_Bool Value_793;
_Bool __result_obj__416;
void* __right_value761 = (void*)0;
struct CVALUE* come_value_794;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct buffer* buf_795;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct CVALUE* come_value_796;
void* __right_value766 = (void*)0;
char* __dec_obj255;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sType* __dec_obj256;
_Bool __result_obj__417;
    node_792=(struct sNode*)come_increment_ref_count(self->node);
    Value_793=node_compile(node_792,info);
    if(    !Value_793) {
        __result_obj__416 = (_Bool)0;
        ((node_792) ? node_792 = come_decrement_ref_count2(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__416;
    }
    else {
    }
    come_value_794=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_795=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1607, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_795,"pthread_join(");
    buffer_append_str(buf_795,come_value_794->c_value);
    buffer_append_str(buf_795,", 0)");
    come_call_finalizer3(come_value_794,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_796=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1612, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj255=come_value_796->c_value;
    come_value_796->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_795));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=come_value_796->type;
    come_value_796->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1614, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",info,info));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_796->var=((void*)0);
    add_come_last_code(info,"%s",come_value_796->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_796));
    __result_obj__417 = (_Bool)1;
    ((node_792) ? node_792 = come_decrement_ref_count2(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(buf_795,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_796,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__417;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj253;
struct sNode* __dec_obj254;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj253=self->sname;
            __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj254=self->node;
            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value769 = (void*)0;
struct list$1sNode$ph* __dec_obj257;
struct list$1sBlock$ph* __dec_obj258;
struct sBlock* __dec_obj262;
struct sComePollNode* __result_obj__418;
    ((struct sNodeBase*)(__right_value769=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value769,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj257=self->vars;
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj257,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj258=self->blocks;
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj258,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj262=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj262,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__418 = come_increment_ref_count(self);
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__418,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__418;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value770 = (void*)0;
char* __result_obj__419;
    __result_obj__419 = come_increment_ref_count(((char*)(__right_value770=__builtin_string("sComePollNode"))));
    (__right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__419 = come_decrement_ref_count2(__result_obj__419, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__419;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_801;
struct list$1sBlock$ph* blocks_802;
int time_out_803;
int n_805;
struct list$1sNode$ph* o2_saved_806;
struct sNode* it_809;
_Bool Value_812;
_Bool __result_obj__426;
void* __right_value771 = (void*)0;
struct CVALUE* come_value_813;
int n_814;
struct list$1sNode$ph* o2_saved_815;
struct sNode* it_816;
void* __right_value772 = (void*)0;
_Bool __result_obj__429;
    vars_801=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_802=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_803=self->time_out;
    static int var_num_804=0;
    var_num_804++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_804,list$1sNode$ph$p_length(vars_801));
    n_805=0;
    for(    o2_saved_806=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_809=list$1sNode$ph$p_begin((o2_saved_806));    !list$1sNode$ph$p_end((o2_saved_806));    it_809=list$1sNode$ph$p_next((o2_saved_806))    ){
        Value_812=node_compile(it_809,info);
        if(        !Value_812) {
            __result_obj__426 = (_Bool)0;
            come_call_finalizer3(o2_saved_806,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_801,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_802,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__426;
        }
        else {
        }
        come_value_813=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_804,n_805,come_value_813->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_804,n_805,1);
        n_805++;
        come_call_finalizer3(come_value_813,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_806,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_804,var_num_804,list$1sNode$ph$p_length(vars_801),time_out_803);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_804);
    n_814=0;
    for(    o2_saved_815=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_816=list$1sNode$ph$p_begin((o2_saved_815));    !list$1sNode$ph$p_end((o2_saved_815));    it_816=list$1sNode$ph$p_next((o2_saved_815))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_804,n_814,1);
        transpile_block(((struct sBlock*)(__right_value772=list$1sBlock$ph$p_operator_load_element(blocks_802,n_814))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value772,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_814++;
    }
    come_call_finalizer3(o2_saved_815,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_804);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__429 = (_Bool)1;
    come_call_finalizer3(vars_801,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_802,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__429;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_797;
struct list_item$1sBlock$ph* prev_it_798;
    it_797=self->head;
    while(it_797!=((void*)0)) {
        prev_it_798=it_797;
        it_797=it_797->next;
        come_call_finalizer3(prev_it_798,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
struct sBlock* __dec_obj259;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj259=self->item;
            come_call_finalizer3(__dec_obj259,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNode$ph* __dec_obj260;
struct sVarTable* __dec_obj261;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj260=self->mNodes;
            come_call_finalizer3(__dec_obj260,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj261=self->mVarTable;
            come_call_finalizer3(__dec_obj261,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj263;
struct list$1sNode$ph* __dec_obj264;
struct list$1sBlock$ph* __dec_obj265;
struct sBlock* __dec_obj266;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj263=self->sname;
            __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj264=self->vars;
            come_call_finalizer3(__dec_obj264,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj265=self->blocks;
            come_call_finalizer3(__dec_obj265,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj266=self->else_block;
            come_call_finalizer3(__dec_obj266,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_799;
struct list_item$1sBlock$ph* prev_it_800;
    it_799=self->head;
    while(it_799!=((void*)0)) {
        prev_it_800=it_799;
        it_799=it_799->next;
        come_call_finalizer3(prev_it_800,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_807;
struct sNode* __result_obj__420;
struct sNode* __result_obj__421;
struct sNode* result_808;
struct sNode* __result_obj__422;
result_807 = (void*)0;
result_808 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_807,0,sizeof(struct sNode*));
        __result_obj__420 = result_807;
        gComeFunResultObject = (void*)0;
        return __result_obj__420;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__421 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__421;
    }
    memset(&result_808,0,sizeof(struct sNode*));
    __result_obj__422 = result_808;
    gComeFunResultObject = (void*)0;
    return __result_obj__422;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_810;
struct sNode* __result_obj__423;
struct sNode* __result_obj__424;
struct sNode* result_811;
struct sNode* __result_obj__425;
result_810 = (void*)0;
result_811 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_810,0,sizeof(struct sNode*));
        __result_obj__423 = result_810;
        gComeFunResultObject = (void*)0;
        return __result_obj__423;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__424 = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result_obj__424;
    }
    memset(&result_811,0,sizeof(struct sNode*));
    __result_obj__425 = result_811;
    gComeFunResultObject = (void*)0;
    return __result_obj__425;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_817;
int i_818;
struct sBlock* __result_obj__427;
struct sBlock* default_value_819;
struct sBlock* __result_obj__428;
default_value_819 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_817=self->head;
    i_818=0;
    while(it_817!=((void*)0)) {
        if(        position==i_818) {
            __result_obj__427 = come_increment_ref_count(it_817->item);
            gComeFunResultObject = (void*)0;
            come_call_finalizer3(__result_obj__427,sBlock_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__427;
        }
        it_817=it_817->next;
        i_818++;
    }
    memset(&default_value_819,0,sizeof(struct sBlock*));
    __result_obj__428 = come_increment_ref_count(default_value_819);
    come_call_finalizer3(default_value_819,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__428,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__428;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value775 = (void*)0;
struct sNode* node_820;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj267;
struct sNode* __result_obj__430;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1698, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value774=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1698, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1void$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node_820=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value774,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj267=node_820;
    node_820=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_820),info));
    if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__430 = come_increment_ref_count(node_820);
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_820) ? node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__430) ? __result_obj__430 = come_decrement_ref_count2(__result_obj__430, ((struct sNode*)__result_obj__430)->finalize, ((struct sNode*)__result_obj__430)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__430;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value777 = (void*)0;
struct sNode* __dec_obj268;
void* __right_value778 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj269;
struct sLambdaCall* __result_obj__431;
    ((struct sNodeBase*)(__right_value777=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value777,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj268=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj269=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj269,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__431 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__431,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__431;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value779 = (void*)0;
char* __result_obj__432;
    __result_obj__432 = come_increment_ref_count(((char*)(__right_value779=__builtin_string("sLambdaCall"))));
    (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__432 = come_decrement_ref_count2(__result_obj__432, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__432;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_821;
struct list$1tuple2$2char$phsNode$ph$ph* params_822;
_Bool Value_823;
_Bool __result_obj__433;
void* __right_value780 = (void*)0;
struct CVALUE* come_value_824;
struct sType* lambda_type_825;
void* __right_value781 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_15_826=0;
char* Err_827=0;
_Bool _if_conditional32;
_Bool __result_obj__434;
void* __right_value782 = (void*)0;
struct sType* result_type_828;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct list$1CVALUE$ph* come_params_829;
void* __right_value785 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_16_830=0;
char* Err_831=0;
_Bool _if_conditional33;
_Bool __result_obj__435;
_Bool __result_obj__436;
int i_832;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_833;
struct tuple2$2char$phsNode$ph* it_834;
struct tuple2$2char$phsNode$ph* multiple_assign_var27 = (void*)0;
char* label_835=0;
struct sNode* node_836=0;
_Bool Value_837;
_Bool __result_obj__437;
void* __right_value786 = (void*)0;
struct CVALUE* come_value_838;
void* __right_value787 = (void*)0;
_Bool _if_conditional34;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_17_839=0;
char* Err_840=0;
_Bool _if_conditional35;
_Bool __result_obj__438;
void* __right_value792 = (void*)0;
_Bool _if_conditional36;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct buffer* buf_841;
int j_842;
struct list$1CVALUE$ph* o2_saved_843;
struct CVALUE* it_844;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct CVALUE* come_value2_845;
void* __right_value798 = (void*)0;
char* __dec_obj273;
void* __right_value799 = (void*)0;
struct sType* __dec_obj274;
_Bool __result_obj__439;
    node_821=(struct sNode*)come_increment_ref_count(self->node);
    params_822=self->params;
    Value_823=node_compile(node_821,info);
    if(    !Value_823) {
        __result_obj__433 = (_Bool)0;
        ((node_821) ? node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__433;
    }
    else {
    }
    come_value_824=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_825=come_value_824->type;
    if(    lambda_type_825->mResultType==((void*)0)) {
        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value781=err_msg(info,"invalid lambda type")));
        come_exception_var_15_826=multiple_assign_var25->v1;
        Err_827=(char*)come_increment_ref_count(multiple_assign_var25->v2);
        if(        (_if_conditional32=(Err_827)),        come_call_finalizer3(__right_value781,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional32) {
            __result_obj__434 = (_Bool)1;
            (Err_827 = come_decrement_ref_count2(Err_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_821) ? node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_824,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__434;
        }
        else {
        }
        (Err_827 = come_decrement_ref_count2(Err_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_828=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_825->mResultType));
    result_type_828->mStatic=(_Bool)0;
    come_params_829=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1743, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    list$1void$ph$p_length(lambda_type_825->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph$p_length(params_822)&&!lambda_type_825->mVarArgs) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value785=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1void$ph$p_length(lambda_type_825->mParamTypes),list$1tuple2$2char$phsNode$ph$ph$p_length(params_822))));
        come_exception_var_16_830=multiple_assign_var26->v1;
        Err_831=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional33=(Err_831)),        come_call_finalizer3(__right_value785,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional33) {
            __result_obj__435 = (_Bool)1;
            (Err_831 = come_decrement_ref_count2(Err_831, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_821) ? node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_824,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_829,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__435;
        }
        else {
        }
        __result_obj__436 = (_Bool)0;
        (Err_831 = come_decrement_ref_count2(Err_831, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_821) ? node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_824,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_829,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__436;
        (Err_831 = come_decrement_ref_count2(Err_831, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    i_832=0;
    for(    o2_saved_833=(params_822),it_834=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_833));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_833));    it_834=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_833))    ){
        multiple_assign_var27=it_834;
        label_835=(char*)come_increment_ref_count(multiple_assign_var27->v1);
        node_836=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        Value_837=node_compile(node_836,info);
        if(        !Value_837) {
            __result_obj__437 = (_Bool)0;
            (label_835 = come_decrement_ref_count2(label_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_836) ? node_836 = come_decrement_ref_count2(node_836, ((struct sNode*)node_836)->finalize, ((struct sNode*)node_836)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_821) ? node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_824,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_829,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__437;
        }
        else {
        }
        come_value_838=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional34=(lambda_type_825->mVarArgs&&((struct sType*)((void*)(__right_value787=list$1void$ph$p_operator_load_element(lambda_type_825->mParamTypes,i_832))))==((void*)0))),        come_call_finalizer3(__right_value787,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional34) {
        }
        else {
            multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value791=check_assign_type(((char*)(__right_value789=xsprintf("calling param #\%s",((char*)(__right_value788=int_to_string(i_832)))))),((struct sType*)((void*)(__right_value790=list$1void$ph$p_operator_load_element(lambda_type_825->mParamTypes,i_832)))),come_value_838->type,come_value_838,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_17_839=multiple_assign_var28->v1;
            Err_840=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            if(            (_if_conditional35=(Err_840)),            (__right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value790,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            come_call_finalizer3(__right_value791,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional35) {
                __result_obj__438 = (_Bool)1;
                (Err_840 = come_decrement_ref_count2(Err_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (label_835 = come_decrement_ref_count2(label_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_836) ? node_836 = come_decrement_ref_count2(node_836, ((struct sNode*)node_836)->finalize, ((struct sNode*)node_836)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_838,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((node_821) ? node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_824,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_829,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__438;
            }
            else {
            }
            if(            (_if_conditional36=(((struct sType*)((void*)(__right_value792=list$1void$ph$p_operator_load_element(lambda_type_825->mParamTypes,i_832))))->mHeap&&come_value_838->type->mHeap)),            come_call_finalizer3(__right_value792,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional36) {
                std_move(((struct sType*)((void*)(__right_value793=list$1void$ph$p_operator_load_element(lambda_type_825->mParamTypes,i_832)))),come_value_838->type,come_value_838,info,(_Bool)1);
                come_call_finalizer3(__right_value793,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            (Err_840 = come_decrement_ref_count2(Err_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(come_params_829,(struct CVALUE*)come_increment_ref_count(come_value_838));
        dec_stack_ptr(1,info);
        i_832++;
        (label_835 = come_decrement_ref_count2(label_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_836) ? node_836 = come_decrement_ref_count2(node_836, ((struct sNode*)node_836)->finalize, ((struct sNode*)node_836)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_838,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_841=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1778, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_841,"(");
    buffer_append_str(buf_841,come_value_824->c_value);
    buffer_append_str(buf_841,")");
    buffer_append_str(buf_841,"(");
    j_842=0;
    for(    o2_saved_843=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_829)),it_844=list$1CVALUE$ph$p_begin((o2_saved_843));    !list$1CVALUE$ph$p_end((o2_saved_843));    it_844=list$1CVALUE$ph$p_next((o2_saved_843))    ){
        buffer_append_str(buf_841,it_844->c_value);
        if(        j_842!=list$1CVALUE$ph$p_length(come_params_829)-1) {
            buffer_append_str(buf_841,",");
        }
        j_842++;
    }
    come_call_finalizer3(o2_saved_843,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_841,")");
    come_value2_845=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1797, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj273=come_value2_845->c_value;
    come_value2_845->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_841));
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_825->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_845,(struct sType*)come_increment_ref_count(lambda_type_825->mResultType),info,(_Bool)0);
    }
    __dec_obj274=come_value2_845->type;
    come_value2_845->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_828));
    come_call_finalizer3(__dec_obj274,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_845->type->mStatic=(_Bool)0;
    come_value2_845->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_845->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_845));
    __result_obj__439 = (_Bool)1;
    ((node_821) ? node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_824,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_829,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_841,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_845,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__439;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj270;
struct sNode* __dec_obj271;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj272;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj270=self->sname;
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj271=self->node;
            if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->node) ? self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj272=self->params;
            come_call_finalizer3(__dec_obj272,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value800 = (void*)0;
struct sType* __dec_obj275;
struct sVarArgTypeName* __result_obj__440;
    ((struct sNodeBase*)(__right_value800=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value800,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj275=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj275,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__440 = come_increment_ref_count(self);
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__440,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__440;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value801 = (void*)0;
char* __result_obj__441;
    __result_obj__441 = come_increment_ref_count(((char*)(__right_value801=__builtin_string("sVarArgTypeName"))));
    (__right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__441 = come_decrement_ref_count2(__result_obj__441, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__441;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_846;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct CVALUE* come_value_847;
void* __right_value804 = (void*)0;
char* __dec_obj278;
struct sType* __dec_obj279;
_Bool __result_obj__442;
    type_846=(struct sType*)come_increment_ref_count(self->type);
    come_value_847=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1834, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj278=come_value_847->c_value;
    come_value_847->c_value=(char*)come_increment_ref_count(make_type_name_string(type_846,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj279=come_value_847->type;
    come_value_847->type=(struct sType*)come_increment_ref_count(type_846);
    come_call_finalizer3(__dec_obj279,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_847->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_847));
    __result_obj__442 = (_Bool)1;
    come_call_finalizer3(type_846,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_847,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__442;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj276;
struct sType* __dec_obj277;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj276=self->sname;
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj277=self->type;
            come_call_finalizer3(__dec_obj277,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct list$1void$ph* method_generics_types_848;
void* __right_value807 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_849=0;
char* Err_850=0;
void* __right_value808 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_851=0;
char* name_852=0;
_Bool err_853=0;
void* __right_value809 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_854=0;
char* Err_855=0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_856;
_Bool _va_arg_857;
char* p_858;
int sline_859;
_Bool err_flag_860;
void* __right_value813 = (void*)0;
char* label_861;
void* __right_value814 = (void*)0;
char* __dec_obj282;
char* __dec_obj283;
_Bool no_comma_862;
_Bool in_fun_param_863;
void* __right_value815 = (void*)0;
struct sNode* node_864;
void* __right_value816 = (void*)0;
struct sNode* __dec_obj284;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
_Bool guard_break_869;
struct buffer* method_block_870;
int method_block_sline_871;
char* head_872;
void* __right_value822 = (void*)0;
char* tail_873;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct buffer* __dec_obj290;
int len_874;
void* __right_value825 = (void*)0;
char* mem_875;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sNode* _inf_value6;
struct sFunCallNode* _inf_obj_value6;
void* __right_value828 = (void*)0;
struct sNode* node_876;
void* __right_value829 = (void*)0;
struct sNode* __dec_obj291;
struct sNode* __result_obj__445;
    method_generics_types_848=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05call.c", 1848, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value807=err_msg(info,"unexpected source end")));
                come_exception_var_c1_849=multiple_assign_var29->v1;
                Err_850=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_850)?(puts(Err_850),exit(0)):(0));
                come_call_finalizer3(__right_value807,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_850 = come_decrement_ref_count2(Err_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value808=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_851=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_852=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_853=multiple_assign_var30->v3;
                come_call_finalizer3(__right_value808,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_853) {
                    multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value809=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c2_854=multiple_assign_var31->v1;
                    Err_855=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                    ((Err_855)?(puts(Err_855),exit(0)):(0));
                    come_call_finalizer3(__right_value809,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_855 = come_decrement_ref_count2(Err_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1void$ph$p_push_back(method_generics_types_848,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_851)));
                come_call_finalizer3(type_851,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_852 = come_decrement_ref_count2(name_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_856=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1886, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    _va_arg_857=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_858=info->p;
        sline_859=info->sline;
        err_flag_860=(_Bool)0;
        label_861=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj282=label_861;
            label_861=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_860=(_Bool)1;
        }
        if(        err_flag_860==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj283=label_861;
            label_861=((void*)0);
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_858;
            info->sline=sline_859;
        }
        no_comma_862=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_863=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_864=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj284=node_864;
        node_864=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_864),info));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_862;
        info->in_fun_param=in_fun_param_863;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_856,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1934, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_861),(struct sNode*)come_increment_ref_count(node_864))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_861 = come_decrement_ref_count2(label_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_864) ? node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_861 = come_decrement_ref_count2(label_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_864) ? node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_857;
    guard_break_869=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_869=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_870=((void*)0);
    method_block_sline_871=0;
    if(    *info->p==123) {
        head_872=info->p;
        method_block_sline_871=info->sline;
        ((char*)(__right_value822=skip_block(info)));
        (__right_value822 = come_decrement_ref_count2(__right_value822, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_873=info->p;
        __dec_obj290=method_block_870;
        method_block_870=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1971, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj290,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_874=tail_873-head_872;
        mem_875=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_874+1)), "05call.c", 1974, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_875,head_872,len_874);
        mem_875[len_874]=0;
        buffer_append_str(method_block_870,mem_875);
        buffer_append_str(method_block_870,"\n");
        (mem_875 = come_decrement_ref_count2(mem_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1984, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value827=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1984, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params_856,guard_break_869,(struct list$1void$ph*)come_increment_ref_count(method_generics_types_848),(struct buffer*)come_increment_ref_count(method_block_870),method_block_sline_871,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sFunCallNode_finalize;
    _inf_value6->clone=(void*)sFunCallNode_clone;
    _inf_value6->compile=(void*)sFunCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sFunCallNode_terminated;
    _inf_value6->kind=(void*)sFunCallNode_kind;
    node_876=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value827,sFunCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj291=node_876;
    node_876=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_876),info));
    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__445 = come_increment_ref_count(node_876);
    come_call_finalizer3(method_generics_types_848,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_856,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_870,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_876) ? node_876 = come_decrement_ref_count2(node_876, ((struct sNode*)node_876)->finalize, ((struct sNode*)node_876)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__445) ? __result_obj__445 = come_decrement_ref_count2(__result_obj__445, ((struct sNode*)__result_obj__445)->finalize, ((struct sNode*)__result_obj__445)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__445;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
struct sType* __dec_obj280;
char* __dec_obj281;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj280=self->v1;
            come_call_finalizer3(__dec_obj280,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj281=self->v2;
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value817 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_865;
struct tuple2$2char$phsNode$ph* __dec_obj285;
void* __right_value818 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_866;
struct tuple2$2char$phsNode$ph* __dec_obj286;
void* __right_value819 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_867;
struct tuple2$2char$phsNode$ph* __dec_obj287;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__443;
    if(    self->len==0) {
        litem_865=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value817=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1457, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_865->prev=((void*)0);
        litem_865->next=((void*)0);
        __dec_obj285=litem_865->item;
        litem_865->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj285,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_865;
        self->head=litem_865;
    }
    else if(    self->len==1) {
        litem_866=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value818=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1467, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_866->prev=self->head;
        litem_866->next=((void*)0);
        __dec_obj286=litem_866->item;
        litem_866->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj286,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_866;
        self->head->next=litem_866;
    }
    else {
        litem_867=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value819=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1477, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_867->prev=self->tail;
        litem_867->next=((void*)0);
        __dec_obj287=litem_867->item;
        litem_867->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj287,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_867;
        self->tail=litem_867;
    }
    self->len++;
    __result_obj__443 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__443;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_868;
    result_868=0;
    result_868+=int_get_hash_key(((int)self->v1));
    result_868+=int_get_hash_key(((int)self->v2));
    return result_868;
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
char* __dec_obj288;
struct sNode* __dec_obj289;
struct tuple2$2char$phsNode$ph* __result_obj__444;
    __dec_obj288=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__444 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__444,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__444;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value830 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_877=0;
char* Err_878=0;
struct sNode* __result_obj__446;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value830=err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p)));
    come_exception_var_c3_877=multiple_assign_var32->v1;
    Err_878=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    ((Err_878)?(puts(Err_878),exit(0)):(0));
    come_call_finalizer3(__right_value830,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    stackframe();
    exit(3);
    __result_obj__446 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_878 = come_decrement_ref_count2(Err_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    ((__result_obj__446) ? __result_obj__446 = come_decrement_ref_count2(__result_obj__446, ((struct sNode*)__result_obj__446)->finalize, ((struct sNode*)__result_obj__446)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__446;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value837 = (void*)0;
struct sNode* __result_obj__449;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2005, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value832=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2005, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sReturnNode_finalize;
    _inf_value7->clone=(void*)sReturnNode_clone;
    _inf_value7->compile=(void*)sReturnNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sReturnNode_kind;
    __result_obj__449 = come_increment_ref_count(((struct sNode*)(__right_value837=_inf_value7)));
    ((value) ? value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value832,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value837) ? __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__449) ? __result_obj__449 = come_decrement_ref_count2(__result_obj__449, ((struct sNode*)__result_obj__449)->finalize, ((struct sNode*)__result_obj__449)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__449;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__447;
void* __right_value833 = (void*)0;
struct sReturnNode* result_879;
void* __right_value834 = (void*)0;
char* __dec_obj292;
void* __right_value835 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value836 = (void*)0;
char* __dec_obj294;
struct sReturnNode* __result_obj__448;
    if(    self==(void*)0) {
        __result_obj__447 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__447;
    }
    result_879=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_879->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj292=result_879->sname;
        result_879->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_879->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj293=result_879->value;
        result_879->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj294=result_879->value_source;
        result_879->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__448 = result_879;
    come_call_finalizer3(result_879,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__448;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value841 = (void*)0;
struct sNode* __result_obj__450;
char* head_880;
void* __right_value842 = (void*)0;
struct sNode* value_881;
char* tail_882;
void* __right_value843 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* __right_value847 = (void*)0;
struct sNode* __result_obj__451;
int nest_884;
char* head_885;
int head_sline_886;
int sline_real_887;
void* __right_value848 = (void*)0;
char* buf_888;
_Bool is_type_name__889;
_Bool is_special_word_891;
_Bool define_function_pointer_flag_892;
void* __right_value849 = (void*)0;
_Bool lambda_flag_893;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
char* word2_894;
_Bool fun_name_with_type_name_895;
void* __right_value852 = (void*)0;
char* word2_896;
_Bool call_method_generics_fun_call_897;
void* __right_value853 = (void*)0;
char* __dec_obj296;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
_Bool _if_conditional37;
int nest_898;
_Bool inline_asm_899;
void* __right_value858 = (void*)0;
char* __dec_obj297;
void* __right_value859 = (void*)0;
char* __dec_obj298;
void* __right_value860 = (void*)0;
char* __dec_obj299;
void* __right_value861 = (void*)0;
struct sNode* node_900;
struct sNode* __result_obj__452;
_Bool no_comma_901;
void* __right_value862 = (void*)0;
struct sNode* exp_902;
void* __right_value863 = (void*)0;
struct sNode* exp2_903;
void* __right_value864 = (void*)0;
struct sNode* __result_obj__453;
void* __right_value865 = (void*)0;
char* block_text_904;
char* contents_905;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sNode* _inf_value10;
struct sOutputNode* _inf_obj_value10;
void* __right_value871 = (void*)0;
struct sNode* __result_obj__456;
void* __right_value872 = (void*)0;
struct sNode* node_907;
struct sNode* __result_obj__457;
void* __right_value873 = (void*)0;
struct sNode* node_908;
struct sNode* __result_obj__458;
struct buffer* come_block_909;
int come_block_sline_910;
char* head_911;
void* __right_value874 = (void*)0;
char* tail_912;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct buffer* __dec_obj302;
int len_913;
void* __right_value877 = (void*)0;
char* mem_914;
char* head_915;
_Bool no_output_come_code_916;
void* __right_value878 = (void*)0;
char* tail_917;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct buffer* __dec_obj303;
int len_918;
void* __right_value881 = (void*)0;
char* mem_919;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sNode* _inf_value11;
struct sComeCallNode* _inf_obj_value11;
void* __right_value887 = (void*)0;
struct sNode* node_920;
struct sNode* __result_obj__461;
struct buffer* come_block_922;
int come_block_sline_923;
void* __right_value888 = (void*)0;
struct sNode* node_924;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
struct sNode* _inf_value12;
struct sComeJoinNode* _inf_obj_value12;
void* __right_value894 = (void*)0;
struct sNode* __result_obj__464;
int time_out_926;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1sNode$ph* vars_927;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1sBlock$ph* blocks_928;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sBlock* else_block_929;
void* __right_value901 = (void*)0;
struct sBlock* __dec_obj308;
void* __right_value902 = (void*)0;
struct sNode* var_name_930;
void* __right_value903 = (void*)0;
struct sBlock* block_931;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct sNode* _inf_value13;
struct sComePollNode* _inf_obj_value13;
void* __right_value951 = (void*)0;
struct sNode* __result_obj__489;
void* __right_value952 = (void*)0;
struct sNode* node_971;
struct sNode* __result_obj__490;
void* __right_value953 = (void*)0;
struct sNode* node_972;
struct sNode* __result_obj__491;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sNode* _inf_value14;
struct sFuncNode* _inf_obj_value14;
void* __right_value958 = (void*)0;
struct sNode* __result_obj__494;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* _inf_value15;
struct sWildCard* _inf_obj_value15;
void* __right_value963 = (void*)0;
struct sNode* __result_obj__497;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* _inf_value16;
struct sLineNode* _inf_obj_value16;
void* __right_value968 = (void*)0;
struct sNode* __result_obj__500;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct sNode* _inf_value17;
struct sSNameNode* _inf_obj_value17;
void* __right_value973 = (void*)0;
struct sNode* __result_obj__503;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* _inf_value18;
struct sCallerFuncNode* _inf_obj_value18;
void* __right_value978 = (void*)0;
struct sNode* __result_obj__506;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sNode* _inf_value19;
struct sCallerLineNode* _inf_obj_value19;
void* __right_value983 = (void*)0;
struct sNode* __result_obj__509;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sNode* _inf_value20;
struct sCallerSNameNode* _inf_obj_value20;
void* __right_value988 = (void*)0;
struct sNode* __result_obj__512;
void* __right_value989 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type_980=0;
char* name_981=0;
_Bool err_982=0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sNode* _inf_value21;
struct sVarArgTypeName* _inf_obj_value21;
void* __right_value995 = (void*)0;
struct sNode* __result_obj__515;
void* __right_value996 = (void*)0;
struct sNode* node_984;
struct sNode* __result_obj__516;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct buffer* buf2_985;
void* __right_value999 = (void*)0;
char* word_986;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct list$1sNode$ph* exps_987;
void* __right_value1002 = (void*)0;
struct sNode* exp_988;
void* __right_value1003 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c4_989=0;
char* Err_990=0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sNode* _inf_value22;
struct sInlineAssembler* _inf_obj_value22;
void* __right_value1011 = (void*)0;
struct sNode* __result_obj__519;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct buffer* fun_name_992;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct sType* type_993;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sClass* klass_994;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct sType* __dec_obj341;
void* __right_value1021 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c5_995=0;
char* Err_996=0;
void* __right_value1022 = (void*)0;
char* buf2_997;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct sNode* node_998;
struct sNode* __result_obj__520;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct buffer* fun_name_999;
void* __right_value1027 = (void*)0;
char* buf2_1000;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sNode* node_1001;
struct sNode* __result_obj__521;
void* __right_value1030 = (void*)0;
struct sNode* node_1002;
struct sNode* __result_obj__522;
void* __right_value1031 = (void*)0;
struct sNode* node_1003;
struct sNode* __result_obj__523;
void* __right_value1032 = (void*)0;
struct sNode* node_1004;
struct sNode* __result_obj__524;
void* __right_value1033 = (void*)0;
struct sNode* node_1005;
struct sNode* __result_obj__525;
void* __right_value1034 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_1006=0;
char* Err_1007=0;
struct sNode* __result_obj__526;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2018, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value840=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2018, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__450 = come_increment_ref_count(((struct sNode*)(__right_value841=_inf_value8)));
            come_call_finalizer3(__right_value840,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value841) ? __right_value841 = come_decrement_ref_count2(__right_value841, ((struct sNode*)__right_value841)->finalize, ((struct sNode*)__right_value841)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__450) ? __result_obj__450 = come_decrement_ref_count2(__result_obj__450, ((struct sNode*)__result_obj__450)->finalize, ((struct sNode*)__result_obj__450)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__450;
        }
        else {
            head_880=info->p;
            value_881=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_882=info->p;
            __dec_obj295=value_881;
            value_881=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_881),info));
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_883[tail_882-head_880+1];
            memset(&buf_883, 0, sizeof(char)            *(tail_882-head_880+1)            );
            memcpy(buf_883,head_880,tail_882-head_880);
            buf_883[tail_882-head_880]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2030, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value846=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 2030, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_881),(char*)come_increment_ref_count(__builtin_string(buf_883)),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sReturnNode_finalize;
            _inf_value9->clone=(void*)sReturnNode_clone;
            _inf_value9->compile=(void*)sReturnNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sReturnNode_kind;
            __result_obj__451 = come_increment_ref_count(((struct sNode*)(__right_value847=_inf_value9)));
            ((value_881) ? value_881 = come_decrement_ref_count2(value_881, ((struct sNode*)value_881)->finalize, ((struct sNode*)value_881)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(__right_value846,sReturnNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value847) ? __right_value847 = come_decrement_ref_count2(__right_value847, ((struct sNode*)__right_value847)->finalize, ((struct sNode*)__right_value847)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__451) ? __result_obj__451 = come_decrement_ref_count2(__result_obj__451, ((struct sNode*)__result_obj__451)->finalize, ((struct sNode*)__result_obj__451)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__451;
            ((value_881) ? value_881 = come_decrement_ref_count2(value_881, ((struct sNode*)value_881)->finalize, ((struct sNode*)value_881)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_884=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_884++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_884--;
                if(                nest_884==0) {
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
        head_885=info->p;
        head_sline_886=info->sline;
        sline_real_887=info->sline_real;
        info->sline_real=info->sline;
        buf_888=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__889=is_type_name(buf_888,info);
        static char* is_special_word_array_890[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_891=charppa_contained(is_special_word_array_890,19,buf_888);
        define_function_pointer_flag_892=(_Bool)0;
        if(        !is_special_word_891&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value849=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value849,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_892=(_Bool)1;
                }
            }
            info->p=head_885;
            info->sline=head_sline_886;
        }
        lambda_flag_893=(_Bool)0;
        if(        !is_special_word_891&&is_type_name__889) {
            info->p=head_885;
            info->sline=head_sline_886;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value850=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value850,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            word2_894=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_894,"lambda")) {
                lambda_flag_893=(_Bool)1;
            }
            info->p=head_885;
            info->sline=head_sline_886;
            (word2_894 = come_decrement_ref_count2(word2_894, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_895=(_Bool)0;
        if(        !is_special_word_891) {
            info->p=head_885;
            info->sline=head_sline_886;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_896=(char*)come_increment_ref_count(parse_word(info));
                (word2_896 = come_decrement_ref_count2(word2_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_895=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_885;
            info->sline=head_sline_886;
        }
        call_method_generics_fun_call_897=(_Bool)0;
        {
            info->p=head_885;
            info->sline=head_sline_886;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj296=buf_888;
                buf_888=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional37=(!is_type_name(buf_888,info)&&((struct sVar*)((void*)(__right_value855=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value854=__builtin_string(buf_888)))))))==((void*)0)&&((struct sVar*)((void*)(__right_value857=map$2void$phvoid$ph$p_operator_load_element(info->gv_table->mVars,((char*)(__right_value856=__builtin_string(buf_888)))))))==((void*)0)&&*info->p==60)),            (__right_value854 = come_decrement_ref_count2(__right_value854, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value855,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            (__right_value856 = come_decrement_ref_count2(__right_value856, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value857,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional37) {
                nest_898=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_898++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_898==0) {
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
                    call_method_generics_fun_call_897=(_Bool)1;
                }
            }
            info->p=head_885;
            info->sline=head_sline_886;
        }
        inline_asm_899=(_Bool)0;
        {
            info->p=head_885;
            info->sline=head_sline_886;
            __dec_obj297=buf_888;
            buf_888=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_888,"asm")||string_operator_equals(buf_888,"__asm")||string_operator_equals(buf_888,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_899=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj298=buf_888;
                        buf_888=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_899=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_885;
            info->sline=head_sline_886;
        }
        parse_sharp_v5(info);
        __dec_obj299=buf_888;
        buf_888=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_893) {
            info->p=head_885;
            info->sline=head_sline_886;
            node_900=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_887;
            __result_obj__452 = come_increment_ref_count(node_900);
            ((node_900) ? node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__452) ? __result_obj__452 = come_decrement_ref_count2(__result_obj__452, ((struct sNode*)__result_obj__452)->finalize, ((struct sNode*)__result_obj__452)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__452;
            ((node_900) ? node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_888,"_Static_assert")||string_operator_equals(buf_888,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_901=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_902=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_901;
            expected_next_character(44,info);
            exp2_903=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__453 = come_increment_ref_count(((struct sNode*)(__right_value864=static_assert_node((struct sNode*)come_increment_ref_count(exp_902),(struct sNode*)come_increment_ref_count(exp2_903),info))));
            ((exp_902) ? exp_902 = come_decrement_ref_count2(exp_902, ((struct sNode*)exp_902)->finalize, ((struct sNode*)exp_902)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_903) ? exp2_903 = come_decrement_ref_count2(exp2_903, ((struct sNode*)exp2_903)->finalize, ((struct sNode*)exp2_903)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value864) ? __right_value864 = come_decrement_ref_count2(__right_value864, ((struct sNode*)__right_value864)->finalize, ((struct sNode*)__right_value864)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__453) ? __result_obj__453 = come_decrement_ref_count2(__result_obj__453, ((struct sNode*)__result_obj__453)->finalize, ((struct sNode*)__result_obj__453)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__453;
            ((exp_902) ? exp_902 = come_decrement_ref_count2(exp_902, ((struct sNode*)exp_902)->finalize, ((struct sNode*)exp_902)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_903) ? exp2_903 = come_decrement_ref_count2(exp2_903, ((struct sNode*)exp2_903)->finalize, ((struct sNode*)exp2_903)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_888,"output")&&*info->p==123) {
            block_text_904=(char*)come_increment_ref_count(skip_block(info));
            contents_905=(char*)come_increment_ref_count(block_text_904);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2268, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value867=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2268, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_905),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sOutputNode_finalize;
            _inf_value10->clone=(void*)sOutputNode_clone;
            _inf_value10->compile=(void*)sOutputNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sOutputNode_kind;
            __result_obj__456 = come_increment_ref_count(((struct sNode*)(__right_value871=_inf_value10)));
            (block_text_904 = come_decrement_ref_count2(block_text_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_905 = come_decrement_ref_count2(contents_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value867,sOutputNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value871) ? __right_value871 = come_decrement_ref_count2(__right_value871, ((struct sNode*)__right_value871)->finalize, ((struct sNode*)__right_value871)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__456) ? __result_obj__456 = come_decrement_ref_count2(__result_obj__456, ((struct sNode*)__result_obj__456)->finalize, ((struct sNode*)__result_obj__456)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__456;
            (block_text_904 = come_decrement_ref_count2(block_text_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_905 = come_decrement_ref_count2(contents_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_888,"extern")) {
            node_907=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__457 = come_increment_ref_count(node_907);
            ((node_907) ? node_907 = come_decrement_ref_count2(node_907, ((struct sNode*)node_907)->finalize, ((struct sNode*)node_907)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__457) ? __result_obj__457 = come_decrement_ref_count2(__result_obj__457, ((struct sNode*)__result_obj__457)->finalize, ((struct sNode*)__result_obj__457)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__457;
            ((node_907) ? node_907 = come_decrement_ref_count2(node_907, ((struct sNode*)node_907)->finalize, ((struct sNode*)node_907)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_888,"string")||string_operator_equals(buf_888,"wstring"))&&*info->p==40) {
            node_908=(struct sNode*)come_increment_ref_count(parse_function_call(buf_888,info,(_Bool)0));
            info->sline_real=sline_real_887;
            __result_obj__458 = come_increment_ref_count(node_908);
            ((node_908) ? node_908 = come_decrement_ref_count2(node_908, ((struct sNode*)node_908)->finalize, ((struct sNode*)node_908)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__458) ? __result_obj__458 = come_decrement_ref_count2(__result_obj__458, ((struct sNode*)__result_obj__458)->finalize, ((struct sNode*)__result_obj__458)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__458;
            ((node_908) ? node_908 = come_decrement_ref_count2(node_908, ((struct sNode*)node_908)->finalize, ((struct sNode*)node_908)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_888,"come")) {
            come_block_909=((void*)0);
            come_block_sline_910=0;
            if(            *info->p==123) {
                head_911=info->p;
                come_block_sline_910=info->sline;
                ((char*)(__right_value874=skip_block(info)));
                (__right_value874 = come_decrement_ref_count2(__right_value874, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_912=info->p;
                __dec_obj302=come_block_909;
                come_block_909=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2293, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj302,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_913=tail_912-head_911;
                mem_914=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_913+1)), "05call.c", 2296, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_914,head_911,len_913);
                mem_914[len_913]=0;
                buffer_append_str(come_block_909,mem_914);
                buffer_append_str(come_block_909,"\n");
                (mem_914 = come_decrement_ref_count2(mem_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_915=info->p;
                come_block_sline_910=info->sline;
                no_output_come_code_916=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value878=expression_v13(info)));
                ((__right_value878) ? __right_value878 = come_decrement_ref_count2(__right_value878, ((struct sNode*)__right_value878)->finalize, ((struct sNode*)__right_value878)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_916;
                tail_917=info->p;
                __dec_obj303=come_block_909;
                come_block_909=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2314, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj303,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_918=tail_917-head_915;
                mem_919=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_918+1)), "05call.c", 2317, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_919,head_915,len_918);
                mem_919[len_918]=0;
                buffer_append_str(come_block_909,"{");
                buffer_append_str(come_block_909,mem_919);
                buffer_append_str(come_block_909,"; }");
                buffer_append_str(come_block_909,"}");
                buffer_append_str(come_block_909,"\n");
                (mem_919 = come_decrement_ref_count2(mem_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2328, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value883=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2328, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_909),come_block_sline_910,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeCallNode_finalize;
            _inf_value11->clone=(void*)sComeCallNode_clone;
            _inf_value11->compile=(void*)sComeCallNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeCallNode_terminated;
            _inf_value11->kind=(void*)sComeCallNode_kind;
            node_920=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value883,sComeCallNode_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_887;
            __result_obj__461 = come_increment_ref_count(node_920);
            come_call_finalizer3(come_block_909,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_920) ? node_920 = come_decrement_ref_count2(node_920, ((struct sNode*)node_920)->finalize, ((struct sNode*)node_920)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__461) ? __result_obj__461 = come_decrement_ref_count2(__result_obj__461, ((struct sNode*)__result_obj__461)->finalize, ((struct sNode*)__result_obj__461)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__461;
            come_call_finalizer3(come_block_909,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_920) ? node_920 = come_decrement_ref_count2(node_920, ((struct sNode*)node_920)->finalize, ((struct sNode*)node_920)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_888,"come_join")&&*info->p==40) {
            come_block_922=((void*)0);
            come_block_sline_923=0;
            expected_next_character(40,info);
            node_924=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_887;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2342, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value890=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2342, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_924),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComeJoinNode_finalize;
            _inf_value12->clone=(void*)sComeJoinNode_clone;
            _inf_value12->compile=(void*)sComeJoinNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComeJoinNode_terminated;
            _inf_value12->kind=(void*)sComeJoinNode_kind;
            __result_obj__464 = come_increment_ref_count(((struct sNode*)(__right_value894=_inf_value12)));
            come_call_finalizer3(come_block_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_924) ? node_924 = come_decrement_ref_count2(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value890,sComeJoinNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value894) ? __right_value894 = come_decrement_ref_count2(__right_value894, ((struct sNode*)__right_value894)->finalize, ((struct sNode*)__right_value894)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__464) ? __result_obj__464 = come_decrement_ref_count2(__result_obj__464, ((struct sNode*)__result_obj__464)->finalize, ((struct sNode*)__result_obj__464)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__464;
            come_call_finalizer3(come_block_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((node_924) ? node_924 = come_decrement_ref_count2(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_888,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_926=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_926=time_out_926*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_927=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2360, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            blocks_928=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2361, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            else_block_929=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2362, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj308=else_block_929;
                    else_block_929=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj308,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_930=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_931=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph$p_add(vars_927,(struct sNode*)come_increment_ref_count(var_name_930));
                    list$1sBlock$ph$p_add(blocks_928,(struct sBlock*)come_increment_ref_count(block_931));
                    if(                    *info->p==125) {
                        ((var_name_930) ? var_name_930 = come_decrement_ref_count2(var_name_930, ((struct sNode*)var_name_930)->finalize, ((struct sNode*)var_name_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(block_931,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name_930) ? var_name_930 = come_decrement_ref_count2(var_name_930, ((struct sNode*)var_name_930)->finalize, ((struct sNode*)var_name_930)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(block_931,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_887;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value908=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2392, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(vars_927),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_928),(struct sBlock*)come_increment_ref_count(else_block_929),time_out_926,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sComePollNode_finalize;
            _inf_value13->clone=(void*)sComePollNode_clone;
            _inf_value13->compile=(void*)sComePollNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sComePollNode_terminated;
            _inf_value13->kind=(void*)sComePollNode_kind;
            __result_obj__489 = come_increment_ref_count(((struct sNode*)(__right_value951=_inf_value13)));
            come_call_finalizer3(vars_927,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_928,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_929,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value908,sComePollNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value951) ? __right_value951 = come_decrement_ref_count2(__right_value951, ((struct sNode*)__right_value951)->finalize, ((struct sNode*)__right_value951)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__489) ? __result_obj__489 = come_decrement_ref_count2(__result_obj__489, ((struct sNode*)__result_obj__489)->finalize, ((struct sNode*)__result_obj__489)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__489;
            come_call_finalizer3(vars_927,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_928,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_929,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_888,"none")&&*info->p==40) {
            node_971=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_887;
            __result_obj__490 = come_increment_ref_count(node_971);
            ((node_971) ? node_971 = come_decrement_ref_count2(node_971, ((struct sNode*)node_971)->finalize, ((struct sNode*)node_971)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__490) ? __result_obj__490 = come_decrement_ref_count2(__result_obj__490, ((struct sNode*)__result_obj__490)->finalize, ((struct sNode*)__result_obj__490)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__490;
            ((node_971) ? node_971 = come_decrement_ref_count2(node_971, ((struct sNode*)node_971)->finalize, ((struct sNode*)node_971)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_888,"some")&&*info->p==40) {
            node_972=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_887;
            __result_obj__491 = come_increment_ref_count(node_972);
            ((node_972) ? node_972 = come_decrement_ref_count2(node_972, ((struct sNode*)node_972)->finalize, ((struct sNode*)node_972)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__491) ? __result_obj__491 = come_decrement_ref_count2(__result_obj__491, ((struct sNode*)__result_obj__491)->finalize, ((struct sNode*)__result_obj__491)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__491;
            ((node_972) ? node_972 = come_decrement_ref_count2(node_972, ((struct sNode*)node_972)->finalize, ((struct sNode*)node_972)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_888,"__func__")||string_operator_equals(buf_888,"__FUNCTION__")) {
            info->sline_real=sline_real_887;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value955=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2409, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFuncNode_finalize;
            _inf_value14->clone=(void*)sFuncNode_clone;
            _inf_value14->compile=(void*)sFuncNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFuncNode_kind;
            __result_obj__494 = come_increment_ref_count(((struct sNode*)(__right_value958=_inf_value14)));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value955,sFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value958) ? __right_value958 = come_decrement_ref_count2(__right_value958, ((struct sNode*)__right_value958)->finalize, ((struct sNode*)__right_value958)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__494) ? __result_obj__494 = come_decrement_ref_count2(__result_obj__494, ((struct sNode*)__result_obj__494)->finalize, ((struct sNode*)__result_obj__494)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__494;
        }
        else if(        !gComeC&&string_operator_equals(buf_888,"wildcard")) {
            info->sline_real=sline_real_887;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2413, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value960=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2413, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sWildCard_finalize;
            _inf_value15->clone=(void*)sWildCard_clone;
            _inf_value15->compile=(void*)sWildCard_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sWildCard_kind;
            __result_obj__497 = come_increment_ref_count(((struct sNode*)(__right_value963=_inf_value15)));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value960,sWildCard_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value963) ? __right_value963 = come_decrement_ref_count2(__right_value963, ((struct sNode*)__right_value963)->finalize, ((struct sNode*)__right_value963)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__497) ? __result_obj__497 = come_decrement_ref_count2(__result_obj__497, ((struct sNode*)__result_obj__497)->finalize, ((struct sNode*)__result_obj__497)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__497;
        }
        else if(        string_operator_equals(buf_888,"__line__")||string_operator_equals(buf_888,"__LINE__")) {
            info->sline_real=sline_real_887;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2417, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value965=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2417, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLineNode_finalize;
            _inf_value16->clone=(void*)sLineNode_clone;
            _inf_value16->compile=(void*)sLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLineNode_kind;
            __result_obj__500 = come_increment_ref_count(((struct sNode*)(__right_value968=_inf_value16)));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value965,sLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value968) ? __right_value968 = come_decrement_ref_count2(__right_value968, ((struct sNode*)__right_value968)->finalize, ((struct sNode*)__right_value968)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__500) ? __result_obj__500 = come_decrement_ref_count2(__result_obj__500, ((struct sNode*)__result_obj__500)->finalize, ((struct sNode*)__result_obj__500)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__500;
        }
        else if(        string_operator_equals(buf_888,"__sname__")) {
            info->sline_real=sline_real_887;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2421, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value970=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2421, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sSNameNode_finalize;
            _inf_value17->clone=(void*)sSNameNode_clone;
            _inf_value17->compile=(void*)sSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sSNameNode_kind;
            __result_obj__503 = come_increment_ref_count(((struct sNode*)(__right_value973=_inf_value17)));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value970,sSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value973) ? __right_value973 = come_decrement_ref_count2(__right_value973, ((struct sNode*)__right_value973)->finalize, ((struct sNode*)__right_value973)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__503) ? __result_obj__503 = come_decrement_ref_count2(__result_obj__503, ((struct sNode*)__result_obj__503)->finalize, ((struct sNode*)__result_obj__503)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__503;
        }
        else if(        string_operator_equals(buf_888,"__caller_func__")) {
            info->sline_real=sline_real_887;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2425, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value975=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2425, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value18->clone=(void*)sCallerFuncNode_clone;
            _inf_value18->compile=(void*)sCallerFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerFuncNode_kind;
            __result_obj__506 = come_increment_ref_count(((struct sNode*)(__right_value978=_inf_value18)));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value975,sCallerFuncNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value978) ? __right_value978 = come_decrement_ref_count2(__right_value978, ((struct sNode*)__right_value978)->finalize, ((struct sNode*)__right_value978)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__506) ? __result_obj__506 = come_decrement_ref_count2(__result_obj__506, ((struct sNode*)__result_obj__506)->finalize, ((struct sNode*)__result_obj__506)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__506;
        }
        else if(        string_operator_equals(buf_888,"__caller_line__")) {
            info->sline_real=sline_real_887;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2429, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value980=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2429, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerLineNode_finalize;
            _inf_value19->clone=(void*)sCallerLineNode_clone;
            _inf_value19->compile=(void*)sCallerLineNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerLineNode_kind;
            __result_obj__509 = come_increment_ref_count(((struct sNode*)(__right_value983=_inf_value19)));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value980,sCallerLineNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value983) ? __right_value983 = come_decrement_ref_count2(__right_value983, ((struct sNode*)__right_value983)->finalize, ((struct sNode*)__right_value983)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__509) ? __result_obj__509 = come_decrement_ref_count2(__result_obj__509, ((struct sNode*)__result_obj__509)->finalize, ((struct sNode*)__result_obj__509)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__509;
        }
        else if(        string_operator_equals(buf_888,"__caller_sname__")) {
            info->sline_real=sline_real_887;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2433, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value985=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2433, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value20->clone=(void*)sCallerSNameNode_clone;
            _inf_value20->compile=(void*)sCallerSNameNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sCallerSNameNode_kind;
            __result_obj__512 = come_increment_ref_count(((struct sNode*)(__right_value988=_inf_value20)));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value985,sCallerSNameNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value988) ? __right_value988 = come_decrement_ref_count2(__right_value988, ((struct sNode*)__right_value988)->finalize, ((struct sNode*)__right_value988)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__512) ? __result_obj__512 = come_decrement_ref_count2(__result_obj__512, ((struct sNode*)__result_obj__512)->finalize, ((struct sNode*)__result_obj__512)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__512;
        }
        else if(        info->va_arg&&is_type_name(buf_888,info)) {
            info->p=head_885;
            info->sline=head_sline_886;
            multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value989=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_980=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
            name_981=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            err_982=multiple_assign_var33->v3;
            come_call_finalizer3(__right_value989,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_887;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2442, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value991=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2442, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_980),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value21->clone=(void*)sVarArgTypeName_clone;
            _inf_value21->compile=(void*)sVarArgTypeName_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sVarArgTypeName_kind;
            __result_obj__515 = come_increment_ref_count(((struct sNode*)(__right_value995=_inf_value21)));
            come_call_finalizer3(type_980,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_981 = come_decrement_ref_count2(name_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value991,sVarArgTypeName_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value995) ? __right_value995 = come_decrement_ref_count2(__right_value995, ((struct sNode*)__right_value995)->finalize, ((struct sNode*)__right_value995)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__515) ? __result_obj__515 = come_decrement_ref_count2(__result_obj__515, ((struct sNode*)__result_obj__515)->finalize, ((struct sNode*)__result_obj__515)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__515;
            come_call_finalizer3(type_980,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_981 = come_decrement_ref_count2(name_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_888,"sizeof")||string_operator_equals(buf_888,"_Alignof")||string_operator_equals(buf_888,"_Alignas")||string_operator_equals(buf_888,"__alignof__")) {
            node_984=(struct sNode*)come_increment_ref_count(string_node_v21(buf_888,head_885,head_sline_886,info));
            info->sline_real=sline_real_887;
            __result_obj__516 = come_increment_ref_count(node_984);
            ((node_984) ? node_984 = come_decrement_ref_count2(node_984, ((struct sNode*)node_984)->finalize, ((struct sNode*)node_984)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__516) ? __result_obj__516 = come_decrement_ref_count2(__result_obj__516, ((struct sNode*)__result_obj__516)->finalize, ((struct sNode*)__result_obj__516)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__516;
            ((node_984) ? node_984 = come_decrement_ref_count2(node_984, ((struct sNode*)node_984)->finalize, ((struct sNode*)node_984)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_899) {
            buf2_985=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2451, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p!=40) {
                word_986=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_985,word_986);
                (word_986 = come_decrement_ref_count2(word_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_985,40);
            exps_987=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2462, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_985,40);
                    info->p++;
                    exp_988=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_987,(struct sNode*)come_increment_ref_count(exp_988));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_985,41);
                    ((exp_988) ? exp_988 = come_decrement_ref_count2(exp_988, ((struct sNode*)exp_988)->finalize, ((struct sNode*)exp_988)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_985,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_985,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1003=err_msg(info,"invalid source end at inline assembler")));
                    come_exception_var_c4_989=multiple_assign_var34->v1;
                    Err_990=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                    ((Err_990)?(puts(Err_990),exit(0)):(0));
                    come_call_finalizer3(__right_value1003,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_990 = come_decrement_ref_count2(Err_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    buffer_append_char(buf2_985,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_887;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2499, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value1006=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2499, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_985)),(struct list$1sNode$ph*)come_increment_ref_count(exps_987),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sInlineAssembler_finalize;
            _inf_value22->clone=(void*)sInlineAssembler_clone;
            _inf_value22->compile=(void*)sInlineAssembler_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sInlineAssembler_kind;
            __result_obj__519 = come_increment_ref_count(((struct sNode*)(__right_value1011=_inf_value22)));
            come_call_finalizer3(buf2_985,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_987,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1006,sInlineAssembler_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1011) ? __right_value1011 = come_decrement_ref_count2(__right_value1011, ((struct sNode*)__right_value1011)->finalize, ((struct sNode*)__right_value1011)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            gComeFunResultObject = (void*)0;
            ((__result_obj__519) ? __result_obj__519 = come_decrement_ref_count2(__result_obj__519, ((struct sNode*)__result_obj__519)->finalize, ((struct sNode*)__result_obj__519)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__519;
            come_call_finalizer3(buf2_985,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_987,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_895) {
            fun_name_992=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2502, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_992,buf_888);
            type_993=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value1015=map$2void$phvoid$ph$p_operator_load_element(info->types,((char*)(__right_value1014=buffer_to_string(fun_name_992)))))))));
            (__right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value1015,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            type_993==((void*)0)) {
                klass_994=((struct sClass*)((void*)(__right_value1018=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value1017=buffer_to_string(fun_name_992)))))));
                (__right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value1018,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                klass_994) {
                    __dec_obj341=type_993;
                    type_993=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2512, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),buf_888,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj341,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1021=err_msg(info,"null type(%s)",buf_888)));
                    come_exception_var_c5_995=multiple_assign_var35->v1;
                    Err_996=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_996)?(puts(Err_996),exit(0)):(0));
                    come_call_finalizer3(__right_value1021,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_996 = come_decrement_ref_count2(Err_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_993->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_992,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_992,"_");
            buf2_997=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_992,buf2_997);
            node_998=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1023=buffer_to_string(fun_name_992))),info,(_Bool)0));
            (__right_value1023 = come_decrement_ref_count2(__right_value1023, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_887;
            __result_obj__520 = come_increment_ref_count(node_998);
            come_call_finalizer3(fun_name_992,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_993,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_997 = come_decrement_ref_count2(buf2_997, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_998) ? node_998 = come_decrement_ref_count2(node_998, ((struct sNode*)node_998)->finalize, ((struct sNode*)node_998)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__520) ? __result_obj__520 = come_decrement_ref_count2(__result_obj__520, ((struct sNode*)__result_obj__520)->finalize, ((struct sNode*)__result_obj__520)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__520;
            come_call_finalizer3(fun_name_992,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_993,sType_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_997 = come_decrement_ref_count2(buf2_997, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_998) ? node_998 = come_decrement_ref_count2(node_998, ((struct sNode*)node_998)->finalize, ((struct sNode*)node_998)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_999=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2547, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_999,buf_888);
            buffer_append_str(fun_name_999,"_");
            buf2_1000=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_999,buf2_1000);
            node_1001=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1028=buffer_to_string(fun_name_999))),info,(_Bool)0));
            (__right_value1028 = come_decrement_ref_count2(__right_value1028, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_887;
            __result_obj__521 = come_increment_ref_count(node_1001);
            come_call_finalizer3(fun_name_999,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1000 = come_decrement_ref_count2(buf2_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1001) ? node_1001 = come_decrement_ref_count2(node_1001, ((struct sNode*)node_1001)->finalize, ((struct sNode*)node_1001)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__521) ? __result_obj__521 = come_decrement_ref_count2(__result_obj__521, ((struct sNode*)__result_obj__521)->finalize, ((struct sNode*)__result_obj__521)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__521;
            come_call_finalizer3(fun_name_999,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (buf2_1000 = come_decrement_ref_count2(buf2_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1001) ? node_1001 = come_decrement_ref_count2(node_1001, ((struct sNode*)node_1001)->finalize, ((struct sNode*)node_1001)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_897) {
            node_1002=(struct sNode*)come_increment_ref_count(parse_function_call(buf_888,info,(_Bool)0));
            info->sline_real=sline_real_887;
            __result_obj__522 = come_increment_ref_count(node_1002);
            ((node_1002) ? node_1002 = come_decrement_ref_count2(node_1002, ((struct sNode*)node_1002)->finalize, ((struct sNode*)node_1002)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__522) ? __result_obj__522 = come_decrement_ref_count2(__result_obj__522, ((struct sNode*)__result_obj__522)->finalize, ((struct sNode*)__result_obj__522)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__522;
            ((node_1002) ? node_1002 = come_decrement_ref_count2(node_1002, ((struct sNode*)node_1002)->finalize, ((struct sNode*)node_1002)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_891&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__889)) {
            node_1003=(struct sNode*)come_increment_ref_count(parse_function_call(buf_888,info,(_Bool)0));
            info->sline_real=sline_real_887;
            __result_obj__523 = come_increment_ref_count(node_1003);
            ((node_1003) ? node_1003 = come_decrement_ref_count2(node_1003, ((struct sNode*)node_1003)->finalize, ((struct sNode*)node_1003)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__523) ? __result_obj__523 = come_decrement_ref_count2(__result_obj__523, ((struct sNode*)__result_obj__523)->finalize, ((struct sNode*)__result_obj__523)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__523;
            ((node_1003) ? node_1003 = come_decrement_ref_count2(node_1003, ((struct sNode*)node_1003)->finalize, ((struct sNode*)node_1003)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_1004=(struct sNode*)come_increment_ref_count(string_node_v21(buf_888,head_885,head_sline_886,info));
            info->sline_real=sline_real_887;
            __result_obj__524 = come_increment_ref_count(node_1004);
            ((node_1004) ? node_1004 = come_decrement_ref_count2(node_1004, ((struct sNode*)node_1004)->finalize, ((struct sNode*)node_1004)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            ((__result_obj__524) ? __result_obj__524 = come_decrement_ref_count2(__result_obj__524, ((struct sNode*)__result_obj__524)->finalize, ((struct sNode*)__result_obj__524)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__524;
            ((node_1004) ? node_1004 = come_decrement_ref_count2(node_1004, ((struct sNode*)node_1004)->finalize, ((struct sNode*)node_1004)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_888 = come_decrement_ref_count2(buf_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_1005=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__525 = come_increment_ref_count(node_1005);
        ((node_1005) ? node_1005 = come_decrement_ref_count2(node_1005, ((struct sNode*)node_1005)->finalize, ((struct sNode*)node_1005)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        gComeFunResultObject = (void*)0;
        ((__result_obj__525) ? __result_obj__525 = come_decrement_ref_count2(__result_obj__525, ((struct sNode*)__result_obj__525)->finalize, ((struct sNode*)__result_obj__525)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__525;
        ((node_1005) ? node_1005 = come_decrement_ref_count2(node_1005, ((struct sNode*)node_1005)->finalize, ((struct sNode*)node_1005)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1034=err_msg(info,"unexpected operator(%c)\n",*info->p)));
    come_exception_var_c6_1006=multiple_assign_var36->v1;
    Err_1007=(char*)come_increment_ref_count(multiple_assign_var36->v2);
    ((Err_1007)?(puts(Err_1007),exit(0)):(0));
    come_call_finalizer3(__right_value1034,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__526 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1007 = come_decrement_ref_count2(Err_1007, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    ((__result_obj__526) ? __result_obj__526 = come_decrement_ref_count2(__result_obj__526, ((struct sNode*)__result_obj__526)->finalize, ((struct sNode*)__result_obj__526)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__526;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__454;
void* __right_value868 = (void*)0;
struct sOutputNode* result_906;
void* __right_value869 = (void*)0;
char* __dec_obj300;
void* __right_value870 = (void*)0;
char* __dec_obj301;
struct sOutputNode* __result_obj__455;
    if(    self==(void*)0) {
        __result_obj__454 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__454;
    }
    result_906=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_906->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_906->sname;
        result_906->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_906->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj301=result_906->contents;
        result_906->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__455 = result_906;
    come_call_finalizer3(result_906,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__455;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__459;
void* __right_value884 = (void*)0;
struct sComeCallNode* result_921;
void* __right_value885 = (void*)0;
char* __dec_obj304;
void* __right_value886 = (void*)0;
struct buffer* __dec_obj305;
struct sComeCallNode* __result_obj__460;
    if(    self==(void*)0) {
        __result_obj__459 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__459;
    }
    result_921=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_921->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_921->sname;
        result_921->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_921->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj305=result_921->come_block;
        result_921->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj305,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_921->come_block_sline=self->come_block_sline;
    }
    __result_obj__460 = result_921;
    come_call_finalizer3(result_921,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__460;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__462;
void* __right_value891 = (void*)0;
struct sComeJoinNode* result_925;
void* __right_value892 = (void*)0;
char* __dec_obj306;
void* __right_value893 = (void*)0;
struct sNode* __dec_obj307;
struct sComeJoinNode* __result_obj__463;
    if(    self==(void*)0) {
        __result_obj__462 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__462;
    }
    result_925=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_925->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj306=result_925->sname;
        result_925->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_925->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj307=result_925->node;
        result_925->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__463 = result_925;
    come_call_finalizer3(result_925,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__463;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__465;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__465 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__465,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__465;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value904 = (void*)0;
struct list_item$1sBlock$ph* litem_932;
struct sBlock* __dec_obj309;
void* __right_value905 = (void*)0;
struct list_item$1sBlock$ph* litem_933;
struct sBlock* __dec_obj310;
void* __right_value906 = (void*)0;
struct list_item$1sBlock$ph* litem_934;
struct sBlock* __dec_obj311;
struct list$1sBlock$ph* __result_obj__466;
    if(    self->len==0) {
        litem_932=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value904=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1387, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_932->prev=((void*)0);
        litem_932->next=((void*)0);
        __dec_obj309=litem_932->item;
        litem_932->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj309,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_932;
        self->head=litem_932;
    }
    else if(    self->len==1) {
        litem_933=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value905=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1397, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_933->prev=self->head;
        litem_933->next=((void*)0);
        __dec_obj310=litem_933->item;
        litem_933->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj310,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_933;
        self->head->next=litem_933;
    }
    else {
        litem_934=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value906=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1407, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_934->prev=self->tail;
        litem_934->next=((void*)0);
        __dec_obj311=litem_934->item;
        litem_934->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj311,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_934;
        self->tail=litem_934;
    }
    self->len++;
    __result_obj__466 = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__466;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__467;
void* __right_value909 = (void*)0;
struct sComePollNode* result_935;
void* __right_value910 = (void*)0;
char* __dec_obj312;
void* __right_value911 = (void*)0;
struct list$1sNode$ph* __dec_obj313;
void* __right_value949 = (void*)0;
struct list$1sBlock$ph* __dec_obj327;
void* __right_value950 = (void*)0;
struct sBlock* __dec_obj328;
struct sComePollNode* __result_obj__488;
    if(    self==(void*)0) {
        __result_obj__467 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__467;
    }
    result_935=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_935->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_935->sname;
        result_935->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_935->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj313=result_935->vars;
        result_935->vars=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->vars));
        come_call_finalizer3(__dec_obj313,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj327=result_935->blocks;
        result_935->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->blocks));
        come_call_finalizer3(__dec_obj327,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj328=result_935->else_block;
        result_935->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj328,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_935->time_out=self->time_out;
    }
    __result_obj__488 = result_935;
    come_call_finalizer3(result_935,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__488;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__468;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct list$1sBlock$ph* result_936;
struct list_item$1sBlock$ph* it_937;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct list$1sBlock$ph* __result_obj__487;
    if(    self==((void*)0)) {
        __result_obj__468 = come_increment_ref_count(((void*)0));
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__468,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__468;
    }
    result_936=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1368, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_937=self->head;
    while(it_937!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph$p_add(result_936,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_937->item)));
        }
        else {
            list$1sBlock$ph$p_add(result_936,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_937->item)));
        }
        it_937=it_937->next;
    }
    __result_obj__487 = come_increment_ref_count(result_936);
    come_call_finalizer3(result_936,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__487,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__487;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__469;
void* __right_value914 = (void*)0;
struct sBlock* result_938;
void* __right_value919 = (void*)0;
struct list$1sNode$ph* __dec_obj314;
void* __right_value946 = (void*)0;
struct sVarTable* __dec_obj326;
struct sBlock* __result_obj__486;
    if(    self==(void*)0) {
        __result_obj__469 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__469,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__469;
    }
    result_938=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj314=result_938->mNodes;
        result_938->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj314,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj326=result_938->mVarTable;
        result_938->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj326,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_938->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__486 = come_increment_ref_count(result_938);
    come_call_finalizer3(result_938,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__486,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__486;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__470;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct list$1sNode$ph* result_939;
struct list_item$1sNode$ph* it_940;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sNode$ph* __result_obj__471;
    if(    self==((void*)0)) {
        __result_obj__470 = come_increment_ref_count(((void*)0));
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__470,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__470;
    }
    result_939=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_940=self->head;
    while(it_940!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_939,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_940->item)));
        }
        else {
            list$1sNode$ph$p_add(result_939,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_940->item)));
        }
        it_940=it_940->next;
    }
    __result_obj__471 = come_increment_ref_count(result_939);
    come_call_finalizer3(result_939,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__471,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__471;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__472;
void* __right_value922 = (void*)0;
struct sVarTable* result_952;
void* __right_value945 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj325;
struct sVarTable* __result_obj__485;
    if(    self==(void*)0) {
        __result_obj__472 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__472,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__472;
    }
    result_952=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj325=result_952->mVars;
        result_952->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(come_call_cloner(map$2void$phvoid$ph_clone, self->mVars));
        come_call_finalizer3(__dec_obj325,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_952->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_952->mParent=self->mParent;
    }
    __result_obj__485 = come_increment_ref_count(result_952);
    come_call_finalizer3(result_952,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__485,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__485;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_941;
    result_941=0;
    result_941+=int_get_hash_key(((int)self->mVars));
    result_941+=int_get_hash_key(((int)self->mGlobal));
    result_941+=int_get_hash_key(((int)self->mParent));
    return result_941;
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
int n_942;
_Bool result_943;
char* it_944;
void* default_value_945;
void* it2_946;
void* default_value2_949;
void* __right_value920 = (void*)0;
void* item_950;
void* __right_value921 = (void*)0;
void* item2_951;
default_value_945 = (void*)0;
default_value2_949 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_942=0;
    result_943=(_Bool)1;
    for(    it_944=((char*)list$1void$p$p_begin(left->key_list));    !list$1void$p$p_end(left->key_list);    it_944=((char*)list$1void$p$p_next(left->key_list))    ){
        memset(&default_value_945,0,sizeof(void*));
        it2_946=((char*)list$1void$p$p_item(right->key_list,n_942,default_value_945));
        if(        come_call_equals((void*)0, it_944, it2_946)) {
            memset(&default_value2_949,0,sizeof(void*));
            item_950=((void*)(__right_value920=map$2void$phvoid$ph$p_at(left,it_944,(void*)come_increment_ref_count(default_value2_949))));
            come_call_finalizer3(__right_value920,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            item2_951=((void*)(__right_value921=map$2void$phvoid$ph$p_at(right,it2_946,(void*)come_increment_ref_count(default_value2_949))));
            come_call_finalizer3(__right_value921,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            !come_call_equals((void*)0, item_950, item2_951)) {
                result_943=(_Bool)0;
            }
            come_call_finalizer3(default_value2_949,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        else {
            result_943=(_Bool)0;
        }
        n_942++;
        come_call_finalizer3(default_value_945,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    return result_943;
}

static void* list$1void$p$p_item(struct list$1void$p* self, int position, void* default_value){
struct list_item$1void$p* it_947;
int i_948;
void* __result_obj__473;
void* __result_obj__474;
    if(    position<0) {
        position+=self->len;
    }
    it_947=self->head;
    i_948=0;
    while(it_947!=((void*)0)) {
        if(        position==i_948) {
            __result_obj__473 = it_947->item;
            gComeFunResultObject = (void*)0;
            return __result_obj__473;
        }
        it_947=it_947->next;
        i_948++;
    }
    __result_obj__474 = default_value;
    gComeFunResultObject = (void*)0;
    return __result_obj__474;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
struct map$2void$phvoid$ph* __result_obj__475;
void* __right_value923 = (void*)0;
void* __right_value929 = (void*)0;
struct map$2void$phvoid$ph* result_957;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct list$1void$p* __dec_obj316;
char* it_960;
void* default_value_961;
void* __right_value933 = (void*)0;
struct sVar* it2_962;
void* __right_value934 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct map$2void$phvoid$ph* __result_obj__484;
default_value_961 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__475 = come_increment_ref_count(((void*)0));
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__475,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__475;
    }
    result_957=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "./comelang.h", 2734, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    __dec_obj316=result_957->key_list;
    result_957->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2736, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    come_call_finalizer3(__dec_obj316,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_960=((char*)map$2void$phvoid$ph$p_begin(self));    !map$2void$phvoid$ph$p_end(self);    it_960=((char*)map$2void$phvoid$ph$p_next(self))    ){
        memset(&default_value_961,0,sizeof(void*));
        it2_962=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_at(self,it_960,(struct sVar*)come_increment_ref_count(((struct sVar*)default_value_961))));
        if(        1&&1) {
            map$2void$phvoid$ph$p_put(result_957,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_960)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_962)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_957,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_960)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_962)));
        }
        else if(        1) {
            map$2void$phvoid$ph$p_put(result_957,(char*)come_increment_ref_count(it_960),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_962)));
        }
        else {
            map$2void$phvoid$ph$p_put(result_957,(char*)come_increment_ref_count(it_960),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_962)));
        }
        come_call_finalizer3(default_value_961,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(it2_962,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__484 = come_increment_ref_count(result_957);
    come_call_finalizer3(result_957,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__484,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__484;
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_953;
    result_953=0;
    result_953+=int_get_hash_key(((int)self->keys));
    result_953+=int_get_hash_key(((int)self->item_existance));
    result_953+=int_get_hash_key(((int)self->items));
    result_953+=int_get_hash_key(((int)self->size));
    result_953+=int_get_hash_key(((int)self->len));
    result_953+=int_get_hash_key(((int)self->key_list));
    result_953+=int_get_hash_key(((int)self->it));
    return result_953;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self){
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
int i_954;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct list$1void$p* __dec_obj315;
struct map$2void$phvoid$ph* __result_obj__477;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value924=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2663, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value925=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2664, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value926=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2665, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_954=0;    i_954<128;    i_954++    ){
        self->item_existance[i_954]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj315=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2675, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj315,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__477 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__477,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__477;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__476;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__476 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__476,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__476;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_955;
struct list_item$1void$p* prev_it_956;
    it_955=self->head;
    while(it_955!=((void*)0)) {
        prev_it_956=it_955;
        it_955=it_955->next;
        come_call_finalizer3(prev_it_956,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1void$p* list$1void$p_clone(struct list$1void$p* self){
struct list$1void$p* __result_obj__478;
void* __right_value930 = (void*)0;
struct list$1void$p* result_958;
struct list$1void$p* __result_obj__479;
    if(    self==(void*)0) {
        __result_obj__478 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__478,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__478;
    }
    result_958=(struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "list$1void$p_clone", 3, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_958->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_958->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_958->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_958->it=self->it;
    }
    __result_obj__479 = come_increment_ref_count(result_958);
    come_call_finalizer3(result_958,list$1void$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__479,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__479;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_959;
    result_959=0;
    result_959+=int_get_hash_key(((int)self->head));
    result_959+=int_get_hash_key(((int)self->tail));
    result_959+=int_get_hash_key(((int)self->len));
    result_959+=int_get_hash_key(((int)self->it));
    return result_959;
}

static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right){
    if(    !list_item$1void$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__480;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__480 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__480,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__480;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_put(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_963;
int it_964;
_Bool same_key_exist_965;
char* it2_966;
struct map$2void$phvoid$ph* __result_obj__481;
    if(    self->len*2>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_963=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_964=hash_963;
    while((_Bool)1) {
        if(        self->item_existance[it_964]) {
            if(            come_call_equals((void*)0, self->keys[it_964], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_964],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1void$p$p_remove(self->key_list,self->keys[it_964]);
                    self->keys[it_964]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_964]);
                    self->keys[it_964]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_964],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_964]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_964]=item;
                }
                break;
            }
            it_964++;
            if(            it_964>=self->size) {
                it_964=0;
            }
            else if(            it_964==hash_963) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_964]=(_Bool)1;
            if(            1) {
                self->keys[it_964]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_964]=key;
            }
            if(            1) {
                self->items[it_964]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_964]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_965=(_Bool)0;
    for(    it2_966=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_966=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_966, key)) {
            same_key_exist_965=(_Bool)1;
        }
    }
    if(    !same_key_exist_965) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__481 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__481;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__482;
void* __right_value935 = (void*)0;
struct sVar* result_968;
void* __right_value936 = (void*)0;
char* __dec_obj321;
void* __right_value937 = (void*)0;
char* __dec_obj322;
void* __right_value938 = (void*)0;
struct sType* __dec_obj323;
void* __right_value939 = (void*)0;
char* __dec_obj324;
struct sVar* __result_obj__483;
    if(    self==(void*)0) {
        __result_obj__482 = come_increment_ref_count((void*)0);
        gComeFunResultObject = (void*)0;
        come_call_finalizer3(__result_obj__482,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__482;
    }
    result_968=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj321=result_968->mName;
        result_968->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj322=result_968->mCValueName;
        result_968->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj323=result_968->mType;
        result_968->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj323,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_968->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_968->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_968->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj324=result_968->mFunName;
        result_968->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__483 = come_increment_ref_count(result_968);
    come_call_finalizer3(result_968,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    come_call_finalizer3(__result_obj__483,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__483;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj317;
char* __dec_obj318;
struct sType* __dec_obj319;
char* __dec_obj320;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj317=self->mName;
            __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj318=self->mCValueName;
            __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj319=self->mType;
            come_call_finalizer3(__dec_obj319,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj320=self->mFunName;
            __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_967;
    result_967=0;
    result_967+=int_get_hash_key(((int)self->mName));
    result_967+=int_get_hash_key(((int)self->mCValueName));
    result_967+=int_get_hash_key(((int)self->mType));
    result_967+=int_get_hash_key(((int)self->mGlobal));
    result_967+=int_get_hash_key(((int)self->mAllocaValue));
    result_967+=int_get_hash_key(((int)self->mNoFree));
    result_967+=int_get_hash_key(((int)self->mFunName));
    return result_967;
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

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
int i_969;
int i_970;
    for(    i_969=0;    i_969<self->size;    i_969++    ){
        if(        self->item_existance[i_969]) {
            if(            1) {
                come_call_finalizer3(self->items[i_969],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_970=0;    i_970<self->size;    i_970++    ){
        if(        self->item_existance[i_970]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_970],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__492;
void* __right_value956 = (void*)0;
struct sFuncNode* result_973;
void* __right_value957 = (void*)0;
char* __dec_obj329;
struct sFuncNode* __result_obj__493;
    if(    self==(void*)0) {
        __result_obj__492 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__492;
    }
    result_973=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_973->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj329=result_973->sname;
        result_973->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_973->sline_real=self->sline_real;
    }
    __result_obj__493 = result_973;
    come_call_finalizer3(result_973,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__493;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__495;
void* __right_value961 = (void*)0;
struct sWildCard* result_974;
void* __right_value962 = (void*)0;
char* __dec_obj330;
struct sWildCard* __result_obj__496;
    if(    self==(void*)0) {
        __result_obj__495 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__495;
    }
    result_974=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_974->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_974->sname;
        result_974->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_974->sline_real=self->sline_real;
    }
    __result_obj__496 = result_974;
    come_call_finalizer3(result_974,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__496;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__498;
void* __right_value966 = (void*)0;
struct sLineNode* result_975;
void* __right_value967 = (void*)0;
char* __dec_obj331;
struct sLineNode* __result_obj__499;
    if(    self==(void*)0) {
        __result_obj__498 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__498;
    }
    result_975=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_975->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj331=result_975->sname;
        result_975->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_975->sline_real=self->sline_real;
    }
    __result_obj__499 = result_975;
    come_call_finalizer3(result_975,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__499;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__501;
void* __right_value971 = (void*)0;
struct sSNameNode* result_976;
void* __right_value972 = (void*)0;
char* __dec_obj332;
struct sSNameNode* __result_obj__502;
    if(    self==(void*)0) {
        __result_obj__501 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__501;
    }
    result_976=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_976->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj332=result_976->sname;
        result_976->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_976->sline_real=self->sline_real;
    }
    __result_obj__502 = result_976;
    come_call_finalizer3(result_976,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__502;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__504;
void* __right_value976 = (void*)0;
struct sCallerFuncNode* result_977;
void* __right_value977 = (void*)0;
char* __dec_obj333;
struct sCallerFuncNode* __result_obj__505;
    if(    self==(void*)0) {
        __result_obj__504 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__504;
    }
    result_977=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_977->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj333=result_977->sname;
        result_977->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_977->sline_real=self->sline_real;
    }
    __result_obj__505 = result_977;
    come_call_finalizer3(result_977,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__505;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__507;
void* __right_value981 = (void*)0;
struct sCallerLineNode* result_978;
void* __right_value982 = (void*)0;
char* __dec_obj334;
struct sCallerLineNode* __result_obj__508;
    if(    self==(void*)0) {
        __result_obj__507 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__507;
    }
    result_978=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_978->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj334=result_978->sname;
        result_978->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_978->sline_real=self->sline_real;
    }
    __result_obj__508 = result_978;
    come_call_finalizer3(result_978,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__508;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__510;
void* __right_value986 = (void*)0;
struct sCallerSNameNode* result_979;
void* __right_value987 = (void*)0;
char* __dec_obj335;
struct sCallerSNameNode* __result_obj__511;
    if(    self==(void*)0) {
        __result_obj__510 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__510;
    }
    result_979=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_979->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj335=result_979->sname;
        result_979->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_979->sline_real=self->sline_real;
    }
    __result_obj__511 = result_979;
    come_call_finalizer3(result_979,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__511;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__513;
void* __right_value992 = (void*)0;
struct sVarArgTypeName* result_983;
void* __right_value993 = (void*)0;
char* __dec_obj336;
void* __right_value994 = (void*)0;
struct sType* __dec_obj337;
struct sVarArgTypeName* __result_obj__514;
    if(    self==(void*)0) {
        __result_obj__513 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__513;
    }
    result_983=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_983->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj336=result_983->sname;
        result_983->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_983->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj337=result_983->type;
        result_983->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj337,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__514 = result_983;
    come_call_finalizer3(result_983,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__514;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__517;
void* __right_value1007 = (void*)0;
struct sInlineAssembler* result_991;
void* __right_value1008 = (void*)0;
char* __dec_obj338;
void* __right_value1009 = (void*)0;
char* __dec_obj339;
void* __right_value1010 = (void*)0;
struct list$1sNode$ph* __dec_obj340;
struct sInlineAssembler* __result_obj__518;
    if(    self==(void*)0) {
        __result_obj__517 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__517;
    }
    result_991=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_991->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj338=result_991->sname;
        result_991->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_991->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj339=result_991->source;
        result_991->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj340=result_991->exps;
        result_991->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj340,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__518 = result_991;
    come_call_finalizer3(result_991,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__518;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value1035 = (void*)0;
struct sNode* __result_obj__527;
    __result_obj__527 = come_increment_ref_count(((struct sNode*)(__right_value1035=expression_node_v99(info))));
    ((__right_value1035) ? __right_value1035 = come_decrement_ref_count2(__right_value1035, ((struct sNode*)__right_value1035)->finalize, ((struct sNode*)__right_value1035)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__527) ? __result_obj__527 = come_decrement_ref_count2(__result_obj__527, ((struct sNode*)__result_obj__527)->finalize, ((struct sNode*)__result_obj__527)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__527;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct sNode* __dec_obj342;
struct sNode* __result_obj__528;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct sNode* __dec_obj343;
struct sNode* __result_obj__529;
struct sNode* __result_obj__530;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj342=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj342) { __dec_obj342 = come_decrement_ref_count2(__dec_obj342, ((struct sNode*)__dec_obj342)->finalize, ((struct sNode*)__dec_obj342)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__528 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        gComeFunResultObject = (void*)0;
        ((__result_obj__528) ? __result_obj__528 = come_decrement_ref_count2(__result_obj__528, ((struct sNode*)__result_obj__528)->finalize, ((struct sNode*)__result_obj__528)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__528;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj343=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); };
        __result_obj__529 = come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        gComeFunResultObject = (void*)0;
        ((__result_obj__529) ? __result_obj__529 = come_decrement_ref_count2(__result_obj__529, ((struct sNode*)__result_obj__529)->finalize, ((struct sNode*)__result_obj__529)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__529;
    }
    __result_obj__530 = come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__530) ? __result_obj__530 = come_decrement_ref_count2(__result_obj__530, ((struct sNode*)__result_obj__530)->finalize, ((struct sNode*)__result_obj__530)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__530;
}

struct sNode* statment(struct sInfo* info){
void* __right_value1040 = (void*)0;
struct sNode* node_1008;
void* __right_value1041 = (void*)0;
struct sNode* __dec_obj344;
struct sNode* __result_obj__531;
    node_1008=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj344=node_1008;
    node_1008=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_1008),info));
    if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__531 = come_increment_ref_count(node_1008);
    ((node_1008) ? node_1008 = come_decrement_ref_count2(node_1008, ((struct sNode*)node_1008)->finalize, ((struct sNode*)node_1008)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    gComeFunResultObject = (void*)0;
    ((__result_obj__531) ? __result_obj__531 = come_decrement_ref_count2(__result_obj__531, ((struct sNode*)__result_obj__531)->finalize, ((struct sNode*)__result_obj__531)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__531;
}

char* get_none_generics_name(char* class_name){
char* p_1009;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
char* __result_obj__532;
void* __right_value1044 = (void*)0;
char* __result_obj__533;
    p_1009=class_name;
    while(*p_1009) {
        if(        *p_1009==36) {
            __result_obj__532 = come_increment_ref_count(((char*)(__right_value1043=charp_substring(((char*)(__right_value1042=__builtin_string(class_name))),0,p_1009-class_name))));
            (__right_value1042 = come_decrement_ref_count2(__right_value1042, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value1043 = come_decrement_ref_count2(__right_value1043, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            (__result_obj__532 = come_decrement_ref_count2(__result_obj__532, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__532;
        }
        else {
            p_1009++;
        }
    }
    __result_obj__533 = come_increment_ref_count(((char*)(__right_value1044=__builtin_string(class_name))));
    (__right_value1044 = come_decrement_ref_count2(__right_value1044, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__533 = come_decrement_ref_count2(__result_obj__533, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__533;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct buffer* buf_1010;
struct sClass* klass_1011;
char* class_name_1012;
int i_1013;
void* __right_value1047 = (void*)0;
struct sType* type_1014;
void* __right_value1048 = (void*)0;
char* type_name_1015;
int i_1016;
void* __right_value1049 = (void*)0;
char* __result_obj__534;
    buf_1010=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2647, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    klass_1011=generics_type->mClass;
    class_name_1012=klass_1011->mName;
    buffer_append_str(buf_1010,class_name_1012);
    if(    list$1void$ph$p_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_1010,36);
        buffer_append_char(buf_1010,list$1void$ph$p_length(generics_type->mGenericsTypes)+48);
        for(        i_1013=0;        i_1013<list$1void$ph$p_length(generics_type->mGenericsTypes);        i_1013++        ){
            type_1014=((struct sType*)((void*)(__right_value1047=list$1void$ph$p_operator_load_element(generics_type->mGenericsTypes,i_1013))));
            come_call_finalizer3(__right_value1047,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type_name_1015=(char*)come_increment_ref_count(create_generics_name(type_1014,info));
            buffer_append_str(buf_1010,type_name_1015);
            buffer_append_char(buf_1010,36);
            for(            i_1016=0;            i_1016<type_1014->mPointerNum;            i_1016++            ){
                buffer_append_char(buf_1010,112);
            }
            if(            type_1014->mHeap) {
                buffer_append_str(buf_1010,"h");
            }
            (type_name_1015 = come_decrement_ref_count2(type_name_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__534 = come_increment_ref_count(((char*)(__right_value1049=buffer_to_string(buf_1010))));
    come_call_finalizer3(buf_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1049 = come_decrement_ref_count2(__right_value1049, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__534 = come_decrement_ref_count2(__result_obj__534, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__534;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1017;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct buffer* buf_1018;
void* __right_value1052 = (void*)0;
char* __dec_obj345;
int i_1019;
void* __right_value1053 = (void*)0;
char* __dec_obj346;
void* __right_value1054 = (void*)0;
char* __dec_obj347;
int i_1020;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
char* __result_obj__535;
struct_name_1017 = (void*)0;
    buf_1018=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2682, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj345=struct_name_1017;
        struct_name_1017=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1018,"$");
            }
            for(            i_1019=0;            i_1019<obj_type->mOriginalTypeNamePointerNum;            i_1019++            ){
                buffer_append_str(buf_1018,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj346=struct_name_1017;
        struct_name_1017=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj347=struct_name_1017;
        struct_name_1017=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1018,"$");
        }
        for(        i_1020=0;        i_1020<obj_type->mPointerNum;        i_1020++        ){
            buffer_append_str(buf_1018,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1018,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1018,"pa");
    }
    __result_obj__535 = come_increment_ref_count(((char*)(__right_value1056=xsprintf("%s%s_%s",struct_name_1017,((char*)(__right_value1055=buffer_to_string(buf_1018))),fun_name))));
    (struct_name_1017 = come_decrement_ref_count2(struct_name_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1018,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1056 = come_decrement_ref_count2(__right_value1056, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__535 = come_decrement_ref_count2(__result_obj__535, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__535;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1021;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct buffer* buf_1022;
void* __right_value1059 = (void*)0;
char* __dec_obj348;
void* __right_value1060 = (void*)0;
char* __dec_obj349;
int i_1023;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
char* __result_obj__536;
struct_name_1021 = (void*)0;
    buf_1022=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2723, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj348=struct_name_1021;
        struct_name_1021=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj349=struct_name_1021;
        struct_name_1021=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1022,"$");
        }
        for(        i_1023=0;        i_1023<obj_type->mPointerNum;        i_1023++        ){
            buffer_append_str(buf_1022,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1022,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1022,"pa");
    }
    __result_obj__536 = come_increment_ref_count(((char*)(__right_value1062=xsprintf("%s%s_%s",struct_name_1021,((char*)(__right_value1061=buffer_to_string(buf_1022))),fun_name))));
    (struct_name_1021 = come_decrement_ref_count2(struct_name_1021, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1022,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1061 = come_decrement_ref_count2(__right_value1061, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1062 = come_decrement_ref_count2(__right_value1062, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__536 = come_decrement_ref_count2(__result_obj__536, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__536;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_1024;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct buffer* buf_1025;
void* __right_value1065 = (void*)0;
char* __dec_obj350;
int i_1026;
void* __right_value1066 = (void*)0;
char* __dec_obj351;
void* __right_value1067 = (void*)0;
char* __dec_obj352;
int i_1027;
void* __right_value1068 = (void*)0;
int len_1029;
void* __right_value1069 = (void*)0;
char* __result_obj__537;
struct_name_1024 = (void*)0;
    buf_1025=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2752, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj350=struct_name_1024;
        struct_name_1024=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            if(            list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_1025,"$");
            }
            for(            i_1026=0;            i_1026<obj_type->mOriginalTypeNamePointerNum;            i_1026++            ){
                buffer_append_str(buf_1025,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj351=struct_name_1024;
        struct_name_1024=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj352=struct_name_1024;
        struct_name_1024=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        list$1void$ph$p_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_1025,"$");
        }
        for(        i_1027=0;        i_1027<obj_type->mPointerNum;        i_1027++        ){
            buffer_append_str(buf_1025,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_1025,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph$p_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_1025,"pa");
    }
    char none_method_name_1028[charp_length(fun_name)+1];
    memset(&none_method_name_1028, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_1029=string_length(struct_name_1024)+string_length(((char*)(__right_value1068=buffer_to_string(buf_1025))));
    (__right_value1068 = come_decrement_ref_count2(__right_value1068, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_1028,fun_name+len_1029+1,charp_length(fun_name)-len_1029-1);
    none_method_name_1028[charp_length(fun_name)-len_1029-1]=0;
    __result_obj__537 = come_increment_ref_count(((char*)(__right_value1069=__builtin_string(none_method_name_1028))));
    (struct_name_1024 = come_decrement_ref_count2(struct_name_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_1025,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value1069 = come_decrement_ref_count2(__right_value1069, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__537 = come_decrement_ref_count2(__result_obj__537, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__537;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1070 = (void*)0;
char* struct_name_1030;
void* __right_value1071 = (void*)0;
char* __result_obj__538;
    struct_name_1030=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result_obj__538 = come_increment_ref_count(((char*)(__right_value1071=xsprintf("%s_%s",struct_name_1030,fun_name))));
    (struct_name_1030 = come_decrement_ref_count2(struct_name_1030, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1071 = come_decrement_ref_count2(__right_value1071, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    (__result_obj__538 = come_decrement_ref_count2(__result_obj__538, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__538;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value1072 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c7_1031=0;
char* Err_1032=0;
struct sNode* __result_obj__539;
    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1072=err_msg(info,"unexpected word(%s)(2)\n",buf)));
    come_exception_var_c7_1031=multiple_assign_var37->v1;
    Err_1032=(char*)come_increment_ref_count(multiple_assign_var37->v2);
    ((Err_1032)?(puts(Err_1032),exit(0)):(0));
    come_call_finalizer3(__right_value1072,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    __result_obj__539 = come_increment_ref_count((struct sNode*)((void*)0));
    (Err_1032 = come_decrement_ref_count2(Err_1032, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    ((__result_obj__539) ? __result_obj__539 = come_decrement_ref_count2(__result_obj__539, ((struct sNode*)__result_obj__539)->finalize, ((struct sNode*)__result_obj__539)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__539;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_1033;
char* p_1034;
int sline_1035;
_Bool err_flag_1036;
void* __right_value1075 = (void*)0;
char* label_1037;
void* __right_value1076 = (void*)0;
char* __dec_obj353;
char* __dec_obj354;
_Bool no_comma_1038;
_Bool in_fun_param_1039;
void* __right_value1077 = (void*)0;
struct sNode* node_1040;
void* __right_value1078 = (void*)0;
struct sNode* __dec_obj355;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct sNode* _inf_value23;
struct sLambdaCall* _inf_obj_value23;
void* __right_value1087 = (void*)0;
struct sNode* __result_obj__542;
struct sNode* __result_obj__543;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_1033=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2822, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_1034=info->p;
            sline_1035=info->sline;
            err_flag_1036=(_Bool)0;
            label_1037=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj353=label_1037;
                label_1037=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_1036=(_Bool)1;
            }
            if(            err_flag_1036==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj354=label_1037;
                label_1037=((void*)0);
                __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_1034;
                info->sline=sline_1035;
            }
            no_comma_1038=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_1039=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_1040=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj355=node_1040;
            node_1040=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_1040),info));
            if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_1038;
            info->in_fun_param=in_fun_param_1039;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_1033,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2865, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_1037),(struct sNode*)come_increment_ref_count(node_1040))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_1037 = come_decrement_ref_count2(label_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_1040) ? node_1040 = come_decrement_ref_count2(node_1040, ((struct sNode*)node_1040)->finalize, ((struct sNode*)node_1040)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_1037 = come_decrement_ref_count2(label_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_1040) ? node_1040 = come_decrement_ref_count2(node_1040, ((struct sNode*)node_1040)->finalize, ((struct sNode*)node_1040)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2883, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value23=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1082=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2883, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_1033,info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sLambdaCall_finalize;
        _inf_value23->clone=(void*)sLambdaCall_clone;
        _inf_value23->compile=(void*)sLambdaCall_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sLambdaCall_kind;
        __result_obj__542 = come_increment_ref_count(((struct sNode*)(__right_value1087=_inf_value23)));
        come_call_finalizer3(params_1033,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value1082,sLambdaCall_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1087) ? __right_value1087 = come_decrement_ref_count2(__right_value1087, ((struct sNode*)__right_value1087)->finalize, ((struct sNode*)__right_value1087)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        gComeFunResultObject = (void*)0;
        ((__result_obj__542) ? __result_obj__542 = come_decrement_ref_count2(__result_obj__542, ((struct sNode*)__result_obj__542)->finalize, ((struct sNode*)__result_obj__542)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__542;
        come_call_finalizer3(params_1033,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result_obj__543 = come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        gComeFunResultObject = (void*)0;
        ((__result_obj__543) ? __result_obj__543 = come_decrement_ref_count2(__result_obj__543, ((struct sNode*)__result_obj__543)->finalize, ((struct sNode*)__result_obj__543)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__543;
    }
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__540;
void* __right_value1083 = (void*)0;
struct sLambdaCall* result_1041;
void* __right_value1084 = (void*)0;
char* __dec_obj356;
void* __right_value1085 = (void*)0;
struct sNode* __dec_obj357;
void* __right_value1086 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj358;
struct sLambdaCall* __result_obj__541;
    if(    self==(void*)0) {
        __result_obj__540 = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result_obj__540;
    }
    result_1041=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1041->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj356=result_1041->sname;
        result_1041->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1041->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj357=result_1041->node;
        result_1041->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj357) { __dec_obj357 = come_decrement_ref_count2(__dec_obj357, ((struct sNode*)__dec_obj357)->finalize, ((struct sNode*)__dec_obj357)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj358=result_1041->params;
        result_1041->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj358,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__541 = result_1041;
    come_call_finalizer3(result_1041,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result_obj__541;
}

